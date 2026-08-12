#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0052[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0,
    0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 13, 0,
    0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0,
    20, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0,
    0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 36, 0, 37, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0,
    0, 52, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0,
    0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 79,
    0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 85, 86, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0,
    93, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0,
    100, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0,
    0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 131, 0, 132, 0,
    133, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0,
    0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 165, 0, 0, 166, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0,
    0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0,
    0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 193, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197,
    0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 203,
    0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 208, 0, 209,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 219, 0, 220,
    0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0,
    237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0,
    0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 301, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 304, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0,
    312, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 321, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0,
    0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0,
    0, 0, 337, 0, 0, 338, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0,
    0, 0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 353, 0,
    0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0,
    360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368,
    0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 376,
    0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 379, 0, 0, 380, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0,
    0, 384, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386,
    0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0,
    391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0,
    396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0,
    0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0,
    0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0,
    0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0,
    0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0,
    420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0,
    0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0,
    0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0,
    0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0,
    451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0,
    0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 459, 460, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0,
    0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 470, 0, 471, 0, 0, 0, 0, 0, 472, 0,
    0, 473, 0, 0, 0, 474, 0, 475, 0, 0, 0, 476, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0,
    0, 481, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 484, 0, 485, 0, 0, 0, 486, 0, 0, 487, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 492, 0, 0, 493, 0,
    0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 498, 0, 499, 0, 500, 0, 0, 0, 501,
    0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 0, 504, 0, 505, 0, 506, 0, 0, 0, 0, 507, 0, 0, 508, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 510, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0,
    0, 0, 513, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 517, 0, 518, 519, 0, 0, 0,
    0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 525,
    0, 0, 526, 527, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 531, 0,
    532, 0, 533, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 538, 0, 539, 0, 0, 540, 0, 541, 0, 542, 0, 0,
    0, 543, 0, 544, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 547, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 550, 0, 551, 0, 552, 0,
    0, 0, 553, 0, 554, 0, 555, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 0, 558, 0, 559, 0, 560, 0, 0, 0, 561, 0, 562, 0, 563, 0,
    0, 564, 0, 0, 0, 565, 0, 566, 0, 567, 0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 571, 0, 0, 0, 572, 0, 573, 0, 0,
    0, 574, 0, 575, 0, 0, 0, 576, 0, 577, 0, 0, 0, 578, 0, 579, 0, 0, 0, 580, 0, 581, 0, 0, 0, 0, 0, 0, 582, 0, 0, 583,
    0, 584, 0, 585, 0, 586, 0, 0, 0, 587, 0, 588, 0, 0, 0, 589, 0, 590, 0, 0, 0, 591, 0, 592, 0, 0, 0, 593, 0, 594, 0, 0,
    0, 595, 0, 596, 0, 0, 597, 0, 0, 598, 0, 0, 599, 0, 600, 0, 601, 0, 0, 602, 0, 603, 0, 0, 0, 604, 0, 605, 0, 0, 0, 606,
    0, 607, 0, 0, 608, 0, 0, 609, 0, 610, 0, 611, 0, 0, 612, 0, 613, 0, 0, 0, 614, 0, 615, 0, 0, 0, 616, 0, 617, 0, 0, 618,
    0, 0, 619, 0, 620, 0, 621, 0, 0, 622, 0, 623, 0, 0, 0, 624, 0, 625, 0, 0, 0, 626, 0, 627, 0, 0, 628, 0, 0, 629, 0, 630,
};
void recomp_unit_0052_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088D4000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0052[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088D4000;
    case 2u: goto L_088D4004;
    case 3u: goto L_088D4030;
    case 4u: goto L_088D4048;
    case 5u: goto L_088D4058;
    case 6u: goto L_088D4078;
    case 7u: goto L_088D408C;
    case 8u: goto L_088D4094;
    case 9u: goto L_088D40B0;
    case 10u: goto L_088D40C0;
    case 11u: goto L_088D40DC;
    case 12u: goto L_088D40F0;
    case 13u: goto L_088D40F8;
    case 14u: goto L_088D4108;
    case 15u: goto L_088D4128;
    case 16u: goto L_088D413C;
    case 17u: goto L_088D4144;
    case 18u: goto L_088D4160;
    case 19u: goto L_088D4174;
    case 20u: goto L_088D4180;
    case 21u: goto L_088D4188;
    case 22u: goto L_088D4198;
    case 23u: goto L_088D41B8;
    case 24u: goto L_088D41CC;
    case 25u: goto L_088D41D4;
    case 26u: goto L_088D41E4;
    case 27u: goto L_088D4200;
    case 28u: goto L_088D4214;
    case 29u: goto L_088D421C;
    case 30u: goto L_088D4234;
    case 31u: goto L_088D4248;
    case 32u: goto L_088D4264;
    case 33u: goto L_088D4284;
    case 34u: goto L_088D4294;
    case 35u: goto L_088D42A8;
    case 36u: goto L_088D42B4;
    case 37u: goto L_088D42BC;
    case 38u: goto L_088D42C4;
    case 39u: goto L_088D42CC;
    case 40u: goto L_088D42F4;
    case 41u: goto L_088D4324;
    case 42u: goto L_088D4344;
    case 43u: goto L_088D4348;
    case 44u: goto L_088D4374;
    case 45u: goto L_088D4390;
    case 46u: goto L_088D439C;
    case 47u: goto L_088D43B0;
    case 48u: goto L_088D43BC;
    case 49u: goto L_088D43D0;
    case 50u: goto L_088D43E8;
    case 51u: goto L_088D43F4;
    case 52u: goto L_088D4404;
    case 53u: goto L_088D4410;
    case 54u: goto L_088D4420;
    case 55u: goto L_088D4434;
    case 56u: goto L_088D4448;
    case 57u: goto L_088D4464;
    case 58u: goto L_088D4478;
    case 59u: goto L_088D448C;
    case 60u: goto L_088D44A4;
    case 61u: goto L_088D44C0;
    case 62u: goto L_088D44E0;
    case 63u: goto L_088D44F4;
    case 64u: goto L_088D4504;
    case 65u: goto L_088D4568;
    case 66u: goto L_088D45AC;
    case 67u: goto L_088D45F0;
    case 68u: goto L_088D4634;
    case 69u: goto L_088D4678;
    case 70u: goto L_088D46BC;
    case 71u: goto L_088D4700;
    case 72u: goto L_088D4744;
    case 73u: goto L_088D4788;
    case 74u: goto L_088D47CC;
    case 75u: goto L_088D4810;
    case 76u: goto L_088D4850;
    case 77u: goto L_088D4860;
    case 78u: goto L_088D486C;
    case 79u: goto L_088D487C;
    case 80u: goto L_088D4888;
    case 81u: goto L_088D4898;
    case 82u: goto L_088D48AC;
    case 83u: goto L_088D48C8;
    case 84u: goto L_088D48DC;
    case 85u: goto L_088D48E4;
    case 86u: goto L_088D48E8;
    case 87u: goto L_088D4934;
    case 88u: goto L_088D493C;
    case 89u: goto L_088D4948;
    case 90u: goto L_088D4954;
    case 91u: goto L_088D4964;
    case 92u: goto L_088D496C;
    case 93u: goto L_088D4980;
    case 94u: goto L_088D498C;
    case 95u: goto L_088D49A0;
    case 96u: goto L_088D49B0;
    case 97u: goto L_088D49C0;
    case 98u: goto L_088D49E8;
    case 99u: goto L_088D49F8;
    case 100u: goto L_088D4A00;
    case 101u: goto L_088D4A0C;
    case 102u: goto L_088D4A18;
    case 103u: goto L_088D4A58;
    case 104u: goto L_088D4A70;
    case 105u: goto L_088D4A80;
    case 106u: goto L_088D4A9C;
    case 107u: goto L_088D4AA4;
    case 108u: goto L_088D4AB0;
    case 109u: goto L_088D4AF0;
    case 110u: goto L_088D4B70;
    case 111u: goto L_088D4C54;
    case 112u: goto L_088D4CA0;
    case 113u: goto L_088D4CB8;
    case 114u: goto L_088D4CD4;
    case 115u: goto L_088D4CDC;
    case 116u: goto L_088D4D38;
    case 117u: goto L_088D4D44;
    case 118u: goto L_088D4D54;
    case 119u: goto L_088D4DAC;
    case 120u: goto L_088D4E28;
    case 121u: goto L_088D4E34;
    case 122u: goto L_088D4E4C;
    case 123u: goto L_088D4E54;
    case 124u: goto L_088D4E68;
    case 125u: goto L_088D4E70;
    case 126u: goto L_088D4E88;
    case 127u: goto L_088D4EA0;
    case 128u: goto L_088D4EB4;
    case 129u: goto L_088D4EDC;
    case 130u: goto L_088D4EE8;
    case 131u: goto L_088D4EF0;
    case 132u: goto L_088D4EF8;
    case 133u: goto L_088D4F00;
    case 134u: goto L_088D4F08;
    case 135u: goto L_088D4F20;
    case 136u: goto L_088D4F38;
    case 137u: goto L_088D4F50;
    case 138u: goto L_088D4F68;
    case 139u: goto L_088D4F7C;
    case 140u: goto L_088D4F90;
    case 141u: goto L_088D4FE0;
    case 142u: goto L_088D5000;
    case 143u: goto L_088D5060;
    case 144u: goto L_088D50E8;
    case 145u: goto L_088D5114;
    case 146u: goto L_088D5168;
    case 147u: goto L_088D5180;
    case 148u: goto L_088D51D4;
    case 149u: goto L_088D51E8;
    case 150u: goto L_088D51F8;
    case 151u: goto L_088D520C;
    case 152u: goto L_088D521C;
    case 153u: goto L_088D522C;
    case 154u: goto L_088D523C;
    case 155u: goto L_088D528C;
    case 156u: goto L_088D529C;
    case 157u: goto L_088D531C;
    case 158u: goto L_088D5334;
    case 159u: goto L_088D533C;
    case 160u: goto L_088D5368;
    case 161u: goto L_088D5378;
    case 162u: goto L_088D5390;
    case 163u: goto L_088D53AC;
    case 164u: goto L_088D53B8;
    case 165u: goto L_088D53C8;
    case 166u: goto L_088D53D4;
    case 167u: goto L_088D53D8;
    case 168u: goto L_088D53F0;
    case 169u: goto L_088D5408;
    case 170u: goto L_088D5450;
    case 171u: goto L_088D5468;
    case 172u: goto L_088D5470;
    case 173u: goto L_088D5488;
    case 174u: goto L_088D54B4;
    case 175u: goto L_088D54C0;
    case 176u: goto L_088D54E0;
    case 177u: goto L_088D54F8;
    case 178u: goto L_088D5508;
    case 179u: goto L_088D5528;
    case 180u: goto L_088D553C;
    case 181u: goto L_088D5544;
    case 182u: goto L_088D5560;
    case 183u: goto L_088D5570;
    case 184u: goto L_088D558C;
    case 185u: goto L_088D55A0;
    case 186u: goto L_088D55A8;
    case 187u: goto L_088D55B8;
    case 188u: goto L_088D55D8;
    case 189u: goto L_088D55EC;
    case 190u: goto L_088D55F4;
    case 191u: goto L_088D5610;
    case 192u: goto L_088D5624;
    case 193u: goto L_088D5630;
    case 194u: goto L_088D5638;
    case 195u: goto L_088D5648;
    case 196u: goto L_088D5668;
    case 197u: goto L_088D567C;
    case 198u: goto L_088D5684;
    case 199u: goto L_088D56A8;
    case 200u: goto L_088D56C0;
    case 201u: goto L_088D56D8;
    case 202u: goto L_088D56E0;
    case 203u: goto L_088D56FC;
    case 204u: goto L_088D5718;
    case 205u: goto L_088D5734;
    case 206u: goto L_088D5760;
    case 207u: goto L_088D576C;
    case 208u: goto L_088D5774;
    case 209u: goto L_088D577C;
    case 210u: goto L_088D57A0;
    case 211u: goto L_088D57CC;
    case 212u: goto L_088D57E4;
    case 213u: goto L_088D5814;
    case 214u: goto L_088D5828;
    case 215u: goto L_088D5834;
    case 216u: goto L_088D5844;
    case 217u: goto L_088D5854;
    case 218u: goto L_088D586C;
    case 219u: goto L_088D5874;
    case 220u: goto L_088D587C;
    case 221u: goto L_088D5888;
    case 222u: goto L_088D5894;
    case 223u: goto L_088D58A0;
    case 224u: goto L_088D58A8;
    case 225u: goto L_088D58D0;
    case 226u: goto L_088D58E8;
    case 227u: goto L_088D58FC;
    case 228u: goto L_088D5910;
    case 229u: goto L_088D5924;
    case 230u: goto L_088D5938;
    case 231u: goto L_088D594C;
    case 232u: goto L_088D5958;
    case 233u: goto L_088D5964;
    case 234u: goto L_088D5970;
    case 235u: goto L_088D59C4;
    case 236u: goto L_088D59EC;
    case 237u: goto L_088D5A00;
    case 238u: goto L_088D5A58;
    case 239u: goto L_088D5A8C;
    case 240u: goto L_088D5A94;
    case 241u: goto L_088D5AA8;
    case 242u: goto L_088D5AC0;
    case 243u: goto L_088D5AF0;
    case 244u: goto L_088D5B04;
    case 245u: goto L_088D5B48;
    case 246u: goto L_088D5B50;
    case 247u: goto L_088D5B88;
    case 248u: goto L_088D5B9C;
    case 249u: goto L_088D5BF4;
    case 250u: goto L_088D5C24;
    case 251u: goto L_088D5C38;
    case 252u: goto L_088D5C90;
    case 253u: goto L_088D5CB8;
    case 254u: goto L_088D5D24;
    case 255u: goto L_088D5D54;
    case 256u: goto L_088D5D68;
    case 257u: goto L_088D5DAC;
    case 258u: goto L_088D5DE4;
    case 259u: goto L_088D5DF8;
    case 260u: goto L_088D5E4C;
    case 261u: goto L_088D5E7C;
    case 262u: goto L_088D5ECC;
    case 263u: goto L_088D5F04;
    case 264u: goto L_088D5F58;
    case 265u: goto L_088D5F8C;
    case 266u: goto L_088D5FA0;
    case 267u: goto L_088D5FF4;
    case 268u: goto L_088D602C;
    case 269u: goto L_088D6080;
    case 270u: goto L_088D60B8;
    case 271u: goto L_088D60CC;
    case 272u: goto L_088D6120;
    case 273u: goto L_088D6154;
    case 274u: goto L_088D6168;
    case 275u: goto L_088D6178;
    case 276u: goto L_088D6184;
    case 277u: goto L_088D61DC;
    case 278u: goto L_088D6210;
    case 279u: goto L_088D6224;
    case 280u: goto L_088D627C;
    case 281u: goto L_088D62B0;
    case 282u: goto L_088D62C4;
    case 283u: goto L_088D631C;
    case 284u: goto L_088D6324;
    case 285u: goto L_088D633C;
    case 286u: goto L_088D6348;
    case 287u: goto L_088D6358;
    case 288u: goto L_088D6368;
    case 289u: goto L_088D6380;
    case 290u: goto L_088D63AC;
    case 291u: goto L_088D63BC;
    case 292u: goto L_088D63C4;
    case 293u: goto L_088D63D0;
    case 294u: goto L_088D641C;
    case 295u: goto L_088D6448;
    case 296u: goto L_088D6474;
    case 297u: goto L_088D64A0;
    case 298u: goto L_088D64AC;
    case 299u: goto L_088D64DC;
    case 300u: goto L_088D64E8;
    case 301u: goto L_088D64F0;
    case 302u: goto L_088D651C;
    case 303u: goto L_088D6530;
    case 304u: goto L_088D658C;
    case 305u: goto L_088D6594;
    case 306u: goto L_088D659C;
    case 307u: goto L_088D65B8;
    case 308u: goto L_088D65C4;
    case 309u: goto L_088D65CC;
    case 310u: goto L_088D65D8;
    case 311u: goto L_088D65F4;
    case 312u: goto L_088D6600;
    case 313u: goto L_088D661C;
    case 314u: goto L_088D6624;
    case 315u: goto L_088D663C;
    case 316u: goto L_088D6648;
    case 317u: goto L_088D6658;
    case 318u: goto L_088D6664;
    case 319u: goto L_088D6690;
    case 320u: goto L_088D66B8;
    case 321u: goto L_088D6710;
    case 322u: goto L_088D6718;
    case 323u: goto L_088D6720;
    case 324u: goto L_088D673C;
    case 325u: goto L_088D6748;
    case 326u: goto L_088D6750;
    case 327u: goto L_088D675C;
    case 328u: goto L_088D6778;
    case 329u: goto L_088D6784;
    case 330u: goto L_088D6790;
    case 331u: goto L_088D67AC;
    case 332u: goto L_088D6824;
    case 333u: goto L_088D682C;
    case 334u: goto L_088D6834;
    case 335u: goto L_088D6850;
    case 336u: goto L_088D686C;
    case 337u: goto L_088D6888;
    case 338u: goto L_088D6894;
    case 339u: goto L_088D689C;
    case 340u: goto L_088D68A8;
    case 341u: goto L_088D68C4;
    case 342u: goto L_088D68D0;
    case 343u: goto L_088D68DC;
    case 344u: goto L_088D68F8;
    case 345u: goto L_088D6974;
    case 346u: goto L_088D6988;
    case 347u: goto L_088D6994;
    case 348u: goto L_088D69A0;
    case 349u: goto L_088D69B0;
    case 350u: goto L_088D69C4;
    case 351u: goto L_088D69DC;
    case 352u: goto L_088D69E8;
    case 353u: goto L_088D69F8;
    case 354u: goto L_088D6A04;
    case 355u: goto L_088D6A14;
    case 356u: goto L_088D6A28;
    case 357u: goto L_088D6A3C;
    case 358u: goto L_088D6A58;
    case 359u: goto L_088D6A6C;
    case 360u: goto L_088D6A80;
    case 361u: goto L_088D6A98;
    case 362u: goto L_088D6AB4;
    case 363u: goto L_088D6AD4;
    case 364u: goto L_088D6AE8;
    case 365u: goto L_088D6AF8;
    case 366u: goto L_088D6B5C;
    case 367u: goto L_088D6B6C;
    case 368u: goto L_088D6B7C;
    case 369u: goto L_088D6B8C;
    case 370u: goto L_088D6B9C;
    case 371u: goto L_088D6BAC;
    case 372u: goto L_088D6BBC;
    case 373u: goto L_088D6BCC;
    case 374u: goto L_088D6BDC;
    case 375u: goto L_088D6BEC;
    case 376u: goto L_088D6BFC;
    case 377u: goto L_088D6C0C;
    case 378u: goto L_088D6C18;
    case 379u: goto L_088D6C28;
    case 380u: goto L_088D6C34;
    case 381u: goto L_088D6C40;
    case 382u: goto L_088D6C50;
    case 383u: goto L_088D6C70;
    case 384u: goto L_088D6C84;
    case 385u: goto L_088D6C90;
    case 386u: goto L_088D6CFC;
    case 387u: goto L_088D6D18;
    case 388u: goto L_088D6D30;
    case 389u: goto L_088D6D4C;
    case 390u: goto L_088D6D64;
    case 391u: goto L_088D6D80;
    case 392u: goto L_088D6D98;
    case 393u: goto L_088D6DB4;
    case 394u: goto L_088D6DCC;
    case 395u: goto L_088D6DE8;
    case 396u: goto L_088D6E00;
    case 397u: goto L_088D6E1C;
    case 398u: goto L_088D6E34;
    case 399u: goto L_088D6E50;
    case 400u: goto L_088D6E68;
    case 401u: goto L_088D6E84;
    case 402u: goto L_088D6E9C;
    case 403u: goto L_088D6EB8;
    case 404u: goto L_088D6ED0;
    case 405u: goto L_088D6EEC;
    case 406u: goto L_088D6F04;
    case 407u: goto L_088D6F20;
    case 408u: goto L_088D6F38;
    case 409u: goto L_088D6F54;
    case 410u: goto L_088D6F6C;
    case 411u: goto L_088D6F88;
    case 412u: goto L_088D6FA0;
    case 413u: goto L_088D6FBC;
    case 414u: goto L_088D6FD4;
    case 415u: goto L_088D6FF0;
    case 416u: goto L_088D7008;
    case 417u: goto L_088D7024;
    case 418u: goto L_088D703C;
    case 419u: goto L_088D7068;
    case 420u: goto L_088D7080;
    case 421u: goto L_088D70AC;
    case 422u: goto L_088D70C4;
    case 423u: goto L_088D70F0;
    case 424u: goto L_088D7108;
    case 425u: goto L_088D7134;
    case 426u: goto L_088D714C;
    case 427u: goto L_088D7178;
    case 428u: goto L_088D7190;
    case 429u: goto L_088D71BC;
    case 430u: goto L_088D71D4;
    case 431u: goto L_088D7200;
    case 432u: goto L_088D7218;
    case 433u: goto L_088D7244;
    case 434u: goto L_088D725C;
    case 435u: goto L_088D7288;
    case 436u: goto L_088D72A0;
    case 437u: goto L_088D72CC;
    case 438u: goto L_088D72E4;
    case 439u: goto L_088D72F0;
    case 440u: goto L_088D731C;
    case 441u: goto L_088D7334;
    case 442u: goto L_088D7340;
    case 443u: goto L_088D736C;
    case 444u: goto L_088D7384;
    case 445u: goto L_088D7390;
    case 446u: goto L_088D73BC;
    case 447u: goto L_088D73D4;
    case 448u: goto L_088D73E8;
    case 449u: goto L_088D741C;
    case 450u: goto L_088D7478;
    case 451u: goto L_088D7480;
    case 452u: goto L_088D74A0;
    case 453u: goto L_088D74F4;
    case 454u: goto L_088D7508;
    case 455u: goto L_088D7518;
    case 456u: goto L_088D7528;
    case 457u: goto L_088D7538;
    case 458u: goto L_088D7550;
    case 459u: goto L_088D755C;
    case 460u: goto L_088D7560;
    case 461u: goto L_088D7588;
    case 462u: goto L_088D759C;
    case 463u: goto L_088D75CC;
    case 464u: goto L_088D75D8;
    case 465u: goto L_088D75F4;
    case 466u: goto L_088D7608;
    case 467u: goto L_088D7624;
    case 468u: goto L_088D7634;
    case 469u: goto L_088D7650;
    case 470u: goto L_088D7658;
    case 471u: goto L_088D7660;
    case 472u: goto L_088D7678;
    case 473u: goto L_088D7684;
    case 474u: goto L_088D7694;
    case 475u: goto L_088D769C;
    case 476u: goto L_088D76AC;
    case 477u: goto L_088D76B4;
    case 478u: goto L_088D76D0;
    case 479u: goto L_088D76E0;
    case 480u: goto L_088D76F4;
    case 481u: goto L_088D7704;
    case 482u: goto L_088D7710;
    case 483u: goto L_088D7734;
    case 484u: goto L_088D7740;
    case 485u: goto L_088D7748;
    case 486u: goto L_088D7758;
    case 487u: goto L_088D7764;
    case 488u: goto L_088D77A4;
    case 489u: goto L_088D77B8;
    case 490u: goto L_088D77C8;
    case 491u: goto L_088D77E4;
    case 492u: goto L_088D77EC;
    case 493u: goto L_088D77F8;
    case 494u: goto L_088D7810;
    case 495u: goto L_088D7854;
    case 496u: goto L_088D789C;
    case 497u: goto L_088D78D0;
    case 498u: goto L_088D78DC;
    case 499u: goto L_088D78E4;
    case 500u: goto L_088D78EC;
    case 501u: goto L_088D78FC;
    case 502u: goto L_088D7910;
    case 503u: goto L_088D7920;
    case 504u: goto L_088D7938;
    case 505u: goto L_088D7940;
    case 506u: goto L_088D7948;
    case 507u: goto L_088D795C;
    case 508u: goto L_088D7968;
    case 509u: goto L_088D79A8;
    case 510u: goto L_088D79B0;
    case 511u: goto L_088D79B8;
    case 512u: goto L_088D79F4;
    case 513u: goto L_088D7A08;
    case 514u: goto L_088D7A10;
    case 515u: goto L_088D7A20;
    case 516u: goto L_088D7A5C;
    case 517u: goto L_088D7A64;
    case 518u: goto L_088D7A6C;
    case 519u: goto L_088D7A70;
    case 520u: goto L_088D7A84;
    case 521u: goto L_088D7A94;
    case 522u: goto L_088D7AB4;
    case 523u: goto L_088D7AC0;
    case 524u: goto L_088D7AF4;
    case 525u: goto L_088D7AFC;
    case 526u: goto L_088D7B08;
    case 527u: goto L_088D7B0C;
    case 528u: goto L_088D7B18;
    case 529u: goto L_088D7B3C;
    case 530u: goto L_088D7B68;
    case 531u: goto L_088D7B78;
    case 532u: goto L_088D7B80;
    case 533u: goto L_088D7B88;
    case 534u: goto L_088D7B94;
    case 535u: goto L_088D7BA4;
    case 536u: goto L_088D7BB8;
    case 537u: goto L_088D7BC8;
    case 538u: goto L_088D7BD0;
    case 539u: goto L_088D7BD8;
    case 540u: goto L_088D7BE4;
    case 541u: goto L_088D7BEC;
    case 542u: goto L_088D7BF4;
    case 543u: goto L_088D7C04;
    case 544u: goto L_088D7C0C;
    case 545u: goto L_088D7C1C;
    case 546u: goto L_088D7C28;
    case 547u: goto L_088D7C38;
    case 548u: goto L_088D7C48;
    case 549u: goto L_088D7C58;
    case 550u: goto L_088D7C68;
    case 551u: goto L_088D7C70;
    case 552u: goto L_088D7C78;
    case 553u: goto L_088D7C88;
    case 554u: goto L_088D7C90;
    case 555u: goto L_088D7C98;
    case 556u: goto L_088D7CA0;
    case 557u: goto L_088D7CB8;
    case 558u: goto L_088D7CC8;
    case 559u: goto L_088D7CD0;
    case 560u: goto L_088D7CD8;
    case 561u: goto L_088D7CE8;
    case 562u: goto L_088D7CF0;
    case 563u: goto L_088D7CF8;
    case 564u: goto L_088D7D04;
    case 565u: goto L_088D7D14;
    case 566u: goto L_088D7D1C;
    case 567u: goto L_088D7D24;
    case 568u: goto L_088D7D2C;
    case 569u: goto L_088D7D44;
    case 570u: goto L_088D7D54;
    case 571u: goto L_088D7D5C;
    case 572u: goto L_088D7D6C;
    case 573u: goto L_088D7D74;
    case 574u: goto L_088D7D84;
    case 575u: goto L_088D7D8C;
    case 576u: goto L_088D7D9C;
    case 577u: goto L_088D7DA4;
    case 578u: goto L_088D7DB4;
    case 579u: goto L_088D7DBC;
    case 580u: goto L_088D7DCC;
    case 581u: goto L_088D7DD4;
    case 582u: goto L_088D7DF0;
    case 583u: goto L_088D7DFC;
    case 584u: goto L_088D7E04;
    case 585u: goto L_088D7E0C;
    case 586u: goto L_088D7E14;
    case 587u: goto L_088D7E24;
    case 588u: goto L_088D7E2C;
    case 589u: goto L_088D7E3C;
    case 590u: goto L_088D7E44;
    case 591u: goto L_088D7E54;
    case 592u: goto L_088D7E5C;
    case 593u: goto L_088D7E6C;
    case 594u: goto L_088D7E74;
    case 595u: goto L_088D7E84;
    case 596u: goto L_088D7E8C;
    case 597u: goto L_088D7E98;
    case 598u: goto L_088D7EA4;
    case 599u: goto L_088D7EB0;
    case 600u: goto L_088D7EB8;
    case 601u: goto L_088D7EC0;
    case 602u: goto L_088D7ECC;
    case 603u: goto L_088D7ED4;
    case 604u: goto L_088D7EE4;
    case 605u: goto L_088D7EEC;
    case 606u: goto L_088D7EFC;
    case 607u: goto L_088D7F04;
    case 608u: goto L_088D7F10;
    case 609u: goto L_088D7F1C;
    case 610u: goto L_088D7F24;
    case 611u: goto L_088D7F2C;
    case 612u: goto L_088D7F38;
    case 613u: goto L_088D7F40;
    case 614u: goto L_088D7F50;
    case 615u: goto L_088D7F58;
    case 616u: goto L_088D7F68;
    case 617u: goto L_088D7F70;
    case 618u: goto L_088D7F7C;
    case 619u: goto L_088D7F88;
    case 620u: goto L_088D7F90;
    case 621u: goto L_088D7F98;
    case 622u: goto L_088D7FA4;
    case 623u: goto L_088D7FAC;
    case 624u: goto L_088D7FBC;
    case 625u: goto L_088D7FC4;
    case 626u: goto L_088D7FD4;
    case 627u: goto L_088D7FDC;
    case 628u: goto L_088D7FE8;
    case 629u: goto L_088D7FF4;
    case 630u: goto L_088D7FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088D4000:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_088D4004;
L_088D4004:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(342)));
    g6 = (g5 << 6u);
    g5 = (g5 << 3u);
    g5 = (g6 - g5);
    g5 = (ctx.gpr[17] + g5);
    g4 = (g4 + static_cast<std::uint32_t>(-2));
    g18 = (g5 + g18);
    g6 = (g4 < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g18 = (aot_mem.aot_load16(g18 + static_cast<std::uint32_t>(6266)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_088D421C;
      }
      goto L_088D4030;
    }
}
L_088D4030:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-19520)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088D4048:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27028)));
    hot_regs.g5 = (0u | 61u);
    if (g4 != hot_regs.g5) {
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26328)));
    hot_regs.g4 = g4;
        goto L_088D4078;
    }
    goto L_088D4058;
}
L_088D4058:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(26324)));
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (0u | 61u);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(g4));
    g4 = (ctx.hi);
    g4 = (g4 + static_cast<std::uint32_t>(5999));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(56), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D408C;
      }
      goto L_088D4078;
    }
}
L_088D4078:
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    g4 = (ctx.hi);
    g4 = (g4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), g4);
    hot_regs.g4 = g4;
    goto L_088D408C;
}
L_088D408C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4234;
      }
      goto L_088D4094;
    }
L_088D4094:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(26328)));
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    g4 = (ctx.hi);
    g4 = (g4 + static_cast<std::uint32_t>(150));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(56), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D4234;
      }
      goto L_088D40B0;
    }
}
L_088D40B0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27028)));
    hot_regs.g5 = (0u | 66u);
    if (g4 != hot_regs.g5) {
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26328)));
    hot_regs.g4 = g4;
        goto L_088D40DC;
    }
    goto L_088D40C0;
}
L_088D40C0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(26336)));
    hot_regs.g5 = (0u | 66u);
    g4 = (g4 & 3u);
    g4 = (g4 + static_cast<std::uint32_t>(6023));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(56), g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D40F0;
      }
      goto L_088D40DC;
    }
}
L_088D40DC:
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    g4 = (ctx.hi);
    g4 = (g4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), g4);
    hot_regs.g4 = g4;
    goto L_088D40F0;
}
L_088D40F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4234;
      }
      goto L_088D40F8;
    }
L_088D40F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27028)));
    hot_regs.g5 = (0u | 62u);
    if (g4 != hot_regs.g5) {
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26328)));
    hot_regs.g4 = g4;
        goto L_088D4128;
    }
    goto L_088D4108;
}
L_088D4108:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(26336)));
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (0u | 62u);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(g4));
    g4 = (ctx.hi);
    g4 = (g4 + static_cast<std::uint32_t>(6004));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(56), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D413C;
      }
      goto L_088D4128;
    }
}
L_088D4128:
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    g4 = (ctx.hi);
    g4 = (g4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), g4);
    hot_regs.g4 = g4;
    goto L_088D413C;
}
L_088D413C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4234;
      }
      goto L_088D4144;
    }
L_088D4144:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26328)));
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27028)));
    hot_regs.g6 = (0u | 63u);
    g4 = (ctx.hi);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D4174;
      }
      goto L_088D4160;
    }
}
L_088D4160:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(6009));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), g4);
    hot_regs.g5 = (0u | 63u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D4180;
      }
      goto L_088D4174;
    }
}
L_088D4174:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), g4);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = g4;
    goto L_088D4180;
}
L_088D4180:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4234;
      }
      goto L_088D4188;
    }
L_088D4188:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27028)));
    hot_regs.g5 = (0u | 64u);
    if (g4 != hot_regs.g5) {
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26328)));
    hot_regs.g4 = g4;
        goto L_088D41B8;
    }
    goto L_088D4198;
}
L_088D4198:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(26320)));
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (0u | 64u);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(g4));
    g4 = (ctx.hi);
    g4 = (g4 + static_cast<std::uint32_t>(6014));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(56), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D41CC;
      }
      goto L_088D41B8;
    }
}
L_088D41B8:
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    g4 = (ctx.hi);
    g4 = (g4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), g4);
    hot_regs.g4 = g4;
    goto L_088D41CC;
}
L_088D41CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4234;
      }
      goto L_088D41D4;
    }
L_088D41D4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27028)));
    hot_regs.g5 = (0u | 65u);
    if (g4 != hot_regs.g5) {
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26328)));
    hot_regs.g4 = g4;
        goto L_088D4200;
    }
    goto L_088D41E4;
}
L_088D41E4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(26332)));
    hot_regs.g5 = (0u | 65u);
    g4 = (g4 & 3u);
    g4 = (g4 + static_cast<std::uint32_t>(6019));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(56), g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D4214;
      }
      goto L_088D4200;
    }
}
L_088D4200:
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    g4 = (ctx.hi);
    g4 = (g4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), g4);
    hot_regs.g4 = g4;
    goto L_088D4214;
}
L_088D4214:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4234;
      }
      goto L_088D421C;
    }
L_088D421C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(26328)));
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    g4 = (ctx.hi);
    g4 = (g4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(56), g4);
    hot_regs.g4 = g4;
    goto L_088D4234;
}
L_088D4234:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), hot_regs.g4);
    hot_regs.g31 = (0x088D4248u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D4248u) goto L_088D4248;
    return;
L_088D4248:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (0u | 17u);
    { const std::uint32_t dividend = ctx.gpr[16]; const std::uint32_t divisor = hot_regs.g4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), hot_regs.g2);
    hot_regs.g5 = (ctx.lo);
    hot_regs.g31 = (0x088D4264u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D4264u) goto L_088D4264;
    return;
L_088D4264:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (ctx.gpr[16] + hot_regs.g2);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), g4);
    g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(352)));
    g18 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (g18 != 0u) {
    g18 = (aot_mem.aot_load8(g18 + static_cast<std::uint32_t>(344)));
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
        goto L_088D42A8;
    }
    goto L_088D4284;
}
L_088D4284:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(19));
    hot_regs.g31 = (0x088D4294u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D4294u) goto L_088D4294;
    return;
L_088D4294:
{
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(96), hot_regs.g2);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(19)));
    g18 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    g18 = (aot_mem.aot_load8(g18 + static_cast<std::uint32_t>(344)));
    ctx.gpr[18] = g18;
    goto L_088D42A8;
}
L_088D42A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 6u);
    { const bool branch_taken = ctx.gpr[18] == g4;
    g4 = (0u | 5u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D42CC;
      }
      goto L_088D42B4;
    }
}
L_088D42B4:
    { const bool branch_taken = ctx.gpr[18] == hot_regs.g4;
    hot_regs.g4 = (0u | 4u);
      if (branch_taken) {
          goto L_088D4324;
      }
      goto L_088D42BC;
    }
L_088D42BC:
    { const bool branch_taken = ctx.gpr[18] == hot_regs.g4;
    hot_regs.g4 = (0u | 2u);
      if (branch_taken) {
          goto L_088D42F4;
      }
      goto L_088D42C4;
    }
L_088D42C4:
    if (ctx.gpr[18] != hot_regs.g4) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
        goto L_088D4348;
    }
    goto L_088D42CC;
L_088D42CC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g21 = ctx.gpr[21];
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    hot_regs.g5 = (0u | 10u);
    hot_regs.g6 = (g4 << 3u);
    g4 = (g4 + hot_regs.g6);
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = hot_regs.g5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g21 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g21) >> 2u));
    g21 = (g21 & 255u);
    g4 = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), g4);
    hot_regs.g4 = g4;
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_088D4344;
      }
      goto L_088D42F4;
    }
}
L_088D42F4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g21 = ctx.gpr[21];
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    hot_regs.g5 = (0u | 10u);
    g6 = (g4 << 3u);
    g6 = (g4 + g6);
    g6 = (g4 + g6);
    g4 = (g4 + g6);
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = hot_regs.g5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g21 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g21) >> 1u));
    g21 = (g21 & 255u);
    g4 = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), g4);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_088D4344;
      }
      goto L_088D4324;
    }
}
L_088D4324:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    hot_regs.g5 = (0u | 10u);
    hot_regs.g6 = (g4 + g4);
    g4 = (g4 + hot_regs.g6);
    g4 = (g4 << 2u);
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = hot_regs.g5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), g4);
    hot_regs.g4 = g4;
    goto L_088D4344;
}
L_088D4344:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    goto L_088D4348;
L_088D4348:
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16800u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), hot_regs.g4);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(hot_regs.g4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 547u, 0x088D3298u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D4374;
    }
L_088D4374:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (ctx.gpr[20] << 2u);
    g4 = (g4 + hot_regs.g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6276)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (0u | 3u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D439C;
      }
      goto L_088D4390;
    }
}
L_088D4390:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088D43B0;
      }
      goto L_088D439C;
    }
}
L_088D439C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    f12 = f12 - ctx.fpr[26];
    g5 = (32768u << 16u);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (hot_regs.g7 + g5);
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    goto L_088D43B0;
}
}
L_088D43B0:
    hot_regs.g7 = (hot_regs.g5 & 255u);
    if (hot_regs.g7 != hot_regs.g4) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26336)));
        goto L_088D44C0;
    }
    goto L_088D43BC;
L_088D43BC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 >> 8u);
    g5 = (g5 + static_cast<std::uint32_t>(-2));
    hot_regs.g4 = (g5 < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088D448C;
      }
      goto L_088D43D0;
    }
}
L_088D43D0:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g5);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-19392)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088D43E8:
    hot_regs.g4 = (0u | 51u);
    { const bool branch_taken = hot_regs.g6 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_088D4404;
      }
      goto L_088D43F4;
    }
L_088D43F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 232u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), g4);
    { const bool branch_taken = 0u == 0u;
    g4 = (0u | 232u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D4410;
      }
      goto L_088D4404;
    }
}
L_088D4404:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 233u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), g4);
    g4 = (0u | 233u);
    hot_regs.g4 = g4;
    goto L_088D4410;
}
L_088D4410:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    hot_regs.g31 = (0x088D4420u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D4420u) goto L_088D4420;
    return;
L_088D4420:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[16] >> 5u);
    hot_regs.g31 = (0x088D4434u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D4434u) goto L_088D4434;
    return;
L_088D4434:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[16] + hot_regs.g2);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), g4);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    { const bool branch_taken = 0u == 0u;
    g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D4504;
      }
      goto L_088D4448;
    }
}
L_088D4448:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26332)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = (hot_regs.g4 & 1u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(214));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), hot_regs.g5);
    hot_regs.g31 = (0x088D4464u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D4464u) goto L_088D4464;
    return;
L_088D4464:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[16] >> 5u);
    hot_regs.g31 = (0x088D4478u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D4478u) goto L_088D4478;
    return;
L_088D4478:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[16] + hot_regs.g2);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), g4);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    { const bool branch_taken = 0u == 0u;
    g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D4504;
      }
      goto L_088D448C;
    }
}
L_088D448C:
    hot_regs.g4 = (0u | 14u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), hot_regs.g4);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D44A4u);
    hot_regs.g5 = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D44A4u) goto L_088D44A4;
    return;
L_088D44A4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(22000));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), g4);
    g4 = (0u | 1u);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(g4));
    { const bool branch_taken = 0u == 0u;
    g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D4504;
      }
      goto L_088D44C0;
    }
}
L_088D44C0:
    hot_regs.g5 = (0u | 6u);
    { const std::uint32_t dividend = hot_regs.g4; const std::uint32_t divisor = hot_regs.g5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.hi);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(119));
    hot_regs.g31 = (0x088D44E0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D44E0u) goto L_088D44E0;
    return;
L_088D44E0:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[16] >> 4u);
    hot_regs.g31 = (0x088D44F4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D44F4u) goto L_088D44F4;
    return;
L_088D44F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[16] + hot_regs.g2);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), g4);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
    goto L_088D4504;
}
L_088D4504:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26328)));
    hot_regs.g5 = (0u | 20u);
    { const std::uint32_t dividend = hot_regs.g4; const std::uint32_t divisor = hot_regs.g5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    hot_regs.g4 = (0u | 1u);
    hot_regs.g5 = (0u | 3u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16880u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17505u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), hot_regs.g4);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.hi);
    ctx.gpr[21] = (hot_regs.g4 + static_cast<std::uint32_t>(100));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 547u, 0x088D3298u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D4568;
    }
L_088D4568:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 186u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), g5);
    g5 = (0u | 18000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), g5);
    g5 = (ctx.gpr[20] << 2u);
    g4 = (g4 + g5);
    g5 = (16880u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6276)));
    g5 = (17505u << 16u);
    ctx.gpr[21] = (0u | 3u);
    hot_regs.f20 = std::bit_cast<float>(g5);
    ctx.gpr[16] = (0u | 1u);
    g4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 26u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088D4850;
      }
      goto L_088D45AC;
    }
}
L_088D45AC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 186u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), g5);
    g5 = (0u | 16500u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), g5);
    g5 = (ctx.gpr[20] << 2u);
    g4 = (g4 + g5);
    g5 = (16880u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6276)));
    g5 = (17505u << 16u);
    ctx.gpr[21] = (0u | 3u);
    hot_regs.f20 = std::bit_cast<float>(g5);
    ctx.gpr[16] = (0u | 1u);
    g4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 26u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088D4850;
      }
      goto L_088D45F0;
    }
}
L_088D45F0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 186u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), g5);
    g5 = (0u | 20000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), g5);
    g5 = (ctx.gpr[20] << 2u);
    g4 = (g4 + g5);
    g5 = (16880u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6276)));
    g5 = (17505u << 16u);
    ctx.gpr[21] = (0u | 3u);
    hot_regs.f20 = std::bit_cast<float>(g5);
    ctx.gpr[16] = (0u | 1u);
    g4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 26u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088D4850;
      }
      goto L_088D4634;
    }
}
L_088D4634:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 187u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), g5);
    g5 = (0u | 18000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), g5);
    g5 = (ctx.gpr[20] << 2u);
    g4 = (g4 + g5);
    g5 = (16880u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6276)));
    g5 = (17505u << 16u);
    ctx.gpr[21] = (0u | 3u);
    hot_regs.f20 = std::bit_cast<float>(g5);
    ctx.gpr[16] = (0u | 1u);
    g4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 26u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088D4850;
      }
      goto L_088D4678;
    }
}
L_088D4678:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 187u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), g5);
    g5 = (0u | 16500u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), g5);
    g5 = (ctx.gpr[20] << 2u);
    g4 = (g4 + g5);
    g5 = (16880u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6276)));
    g5 = (17505u << 16u);
    ctx.gpr[21] = (0u | 3u);
    hot_regs.f20 = std::bit_cast<float>(g5);
    ctx.gpr[16] = (0u | 1u);
    g4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 26u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088D4850;
      }
      goto L_088D46BC;
    }
}
L_088D46BC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 187u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), g5);
    g5 = (0u | 20000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), g5);
    g5 = (ctx.gpr[20] << 2u);
    g4 = (g4 + g5);
    g5 = (16880u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6276)));
    g5 = (17505u << 16u);
    ctx.gpr[21] = (0u | 3u);
    hot_regs.f20 = std::bit_cast<float>(g5);
    ctx.gpr[16] = (0u | 1u);
    g4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 26u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088D4850;
      }
      goto L_088D4700;
    }
}
L_088D4700:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 188u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), g5);
    g5 = (0u | 18000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), g5);
    g5 = (ctx.gpr[20] << 2u);
    g4 = (g4 + g5);
    g5 = (16880u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6276)));
    g5 = (17505u << 16u);
    ctx.gpr[21] = (0u | 3u);
    hot_regs.f20 = std::bit_cast<float>(g5);
    ctx.gpr[16] = (0u | 1u);
    g4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 26u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088D4850;
      }
      goto L_088D4744;
    }
}
L_088D4744:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 188u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), g5);
    g5 = (0u | 16500u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), g5);
    g5 = (ctx.gpr[20] << 2u);
    g4 = (g4 + g5);
    g5 = (16880u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6276)));
    g5 = (17505u << 16u);
    ctx.gpr[21] = (0u | 3u);
    hot_regs.f20 = std::bit_cast<float>(g5);
    ctx.gpr[16] = (0u | 1u);
    g4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 26u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088D4850;
      }
      goto L_088D4788;
    }
}
L_088D4788:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 188u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), g5);
    g5 = (0u | 20000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), g5);
    g5 = (ctx.gpr[20] << 2u);
    g4 = (g4 + g5);
    g5 = (16880u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6276)));
    g5 = (17505u << 16u);
    ctx.gpr[21] = (0u | 3u);
    hot_regs.f20 = std::bit_cast<float>(g5);
    ctx.gpr[16] = (0u | 1u);
    g4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 26u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088D4850;
      }
      goto L_088D47CC;
    }
}
L_088D47CC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 189u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), g5);
    g5 = (0u | 16500u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), g5);
    g5 = (ctx.gpr[20] << 2u);
    g4 = (g4 + g5);
    g5 = (16880u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6276)));
    g5 = (17505u << 16u);
    ctx.gpr[21] = (0u | 3u);
    hot_regs.f20 = std::bit_cast<float>(g5);
    ctx.gpr[16] = (0u | 1u);
    g4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 26u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088D4850;
      }
      goto L_088D4810;
    }
}
L_088D4810:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 189u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), g5);
    g5 = (0u | 20000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), g5);
    g5 = (ctx.gpr[20] << 2u);
    g4 = (g4 + g5);
    g5 = (16880u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6276)));
    g5 = (17505u << 16u);
    ctx.gpr[21] = (0u | 3u);
    hot_regs.f20 = std::bit_cast<float>(g5);
    ctx.gpr[16] = (0u | 1u);
    g4 = (0u | 3u);
    ctx.gpr[18] = (0u | 26u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_088D4850;
}
L_088D4850:
{
    float f12 = hot_regs.f12;
    ctx.set_fpu_condition((f12 < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = f12 - ctx.fpr[26];
    hot_regs.f12 = f12;
        goto L_088D486C;
    }
    goto L_088D4860;
}
L_088D4860:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088D487C;
      }
      goto L_088D486C;
    }
}
L_088D486C:
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
    goto L_088D487C;
}
}
L_088D487C:
    hot_regs.g6 = (hot_regs.g5 & 255u);
    if (hot_regs.g6 != hot_regs.g4) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26336)));
        goto L_088D48AC;
    }
    goto L_088D4888;
L_088D4888:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (g5 >> 8u);
    g5 = (0u | 1u);
    if (hot_regs.g4 != g5) {
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = g5;
        goto L_088D48E8;
    }
    goto L_088D4898;
}
L_088D4898:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26332)));
    g4 = (g4 & 1u);
    g4 = (g4 + static_cast<std::uint32_t>(214));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D48E4;
      }
      goto L_088D48AC;
    }
}
L_088D48AC:
    hot_regs.g5 = (0u | 6u);
    { const std::uint32_t dividend = hot_regs.g4; const std::uint32_t divisor = hot_regs.g5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.hi);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(119));
    hot_regs.g31 = (0x088D48C8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D48C8u) goto L_088D48C8;
    return;
L_088D48C8:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[19] >> 4u);
    hot_regs.g31 = (0x088D48DCu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D48DCu) goto L_088D48DC;
    return;
L_088D48DC:
    hot_regs.g4 = (ctx.gpr[19] + hot_regs.g2);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), hot_regs.g4);
    goto L_088D48E4;
L_088D48E4:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    goto L_088D48E8;
L_088D48E8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26332)));
    { const std::uint32_t dividend = hot_regs.g5; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), hot_regs.g4);
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[16]));
    hot_regs.g4 = (ctx.hi);
    ctx.gpr[21] = (hot_regs.g4 + static_cast<std::uint32_t>(100));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 547u, 0x088D3298u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D4934;
    }
L_088D4934:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (g20 + static_cast<std::uint32_t>(1));
    g20 = (g20 & 65535u);
    ctx.gpr[20] = g20;
    goto L_088D493C;
}
L_088D493C:
    hot_regs.g6 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 533u, 0x088D3118u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D4948;
    }
L_088D4948:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088D496C;
      }
      goto L_088D4954;
    }
L_088D4954:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    g5 = (static_cast<std::int32_t>(g5) < 61 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088D496C;
      }
      goto L_088D4964;
    }
}
L_088D4964:
    hot_regs.g5 = (0u | 21u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_088D496C;
L_088D496C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D4AB0;
      }
      goto L_088D4980;
    }
L_088D4980:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x088D498Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D498Cu) goto L_088D498C;
    return;
L_088D498C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D49A0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D49A0u) goto L_088D49A0;
    return;
L_088D49A0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(hot_regs.g2));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_088D4AB0;
      }
      goto L_088D49B0;
    }
L_088D49B0:
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    g16 = (2237u << 16u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    g16 = (g16 + static_cast<std::uint32_t>(-28320));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_088D4A00;
      }
      goto L_088D49C0;
    }
}
L_088D49C0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15948u << 16u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    g4 = (g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f14 < f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088D49F8;
      }
      goto L_088D49E8;
    }
}
}
L_088D49E8:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(hot_regs.g4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D4A00;
      }
      goto L_088D49F8;
    }
L_088D49F8:
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_088D4A00;
L_088D4A00:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088D4A0Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D4A0Cu) goto L_088D4A0C;
    return;
L_088D4A0C:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4AB0;
      }
      goto L_088D4A18;
    }
L_088D4A18:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(48)));
    g5 = (0u | 127u);
    hot_regs.g6 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(56)));
    hot_regs.g7 = (g4 << 6u);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(g5));
    g4 = (g4 << 3u);
    g5 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    g4 = (hot_regs.g7 - g4);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(56), g5);
    g4 = (g17 + g4);
    g5 = (ctx.gpr[20] + ctx.gpr[20]);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(6266)));
    g5 = (0u | 55u);
    if (g4 != g5) {
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_088D4A80;
    }
    goto L_088D4A58;
}
L_088D4A58:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (0u | 33u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(368)));
    if (g4 != hot_regs.g5) {
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    hot_regs.g4 = g4;
        goto L_088D4A80;
    }
    goto L_088D4A70;
}
L_088D4A70:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D4AA4;
      }
      goto L_088D4A80;
    }
}
L_088D4A80:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), g4);
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    g4 = (static_cast<std::int32_t>(g4) < 61 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D4AA4;
      }
      goto L_088D4A9C;
    }
}
L_088D4A9C:
    hot_regs.g4 = (0u | 21u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_088D4AA4;
L_088D4AA4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088D4AB0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D4AB0u) goto L_088D4AB0;
    return;
L_088D4AB0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088D4AF0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-176));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(48)));
    g8 = (g6 << 6u);
    hot_regs.g7 = (0u | 0u);
    g6 = (g6 << 3u);
    g10 = (0u | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), hot_regs.g7);
    g8 = (g8 - g6);
    g8 = (g4 + g8);
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(g10));
    ctx.gpr[9] = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(6308)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    ctx.gpr[16] = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f22 = std::bit_cast<float>(0u);
    g4 = (static_cast<std::int32_t>(g10) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g5);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    ctx.gpr[10] = g10;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088D7854;
      }
      goto L_088D4B70;
    }
}
L_088D4B70:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g28 + static_cast<std::uint32_t>(-23664));
    g5 = (g28 + static_cast<std::uint32_t>(-23656));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), g4);
    g6 = (g28 + static_cast<std::uint32_t>(-23648));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), g5);
    g4 = (g28 + static_cast<std::uint32_t>(-23640));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), g6);
    g5 = (g28 + static_cast<std::uint32_t>(-23632));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), g4);
    g6 = (g28 + static_cast<std::uint32_t>(-23624));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), g5);
    g4 = (g28 + static_cast<std::uint32_t>(-23616));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), g6);
    g5 = (g28 + static_cast<std::uint32_t>(-23608));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), g4);
    g6 = (g28 + static_cast<std::uint32_t>(-23600));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), g5);
    g4 = (g28 + static_cast<std::uint32_t>(-23592));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), g6);
    g5 = (g28 + static_cast<std::uint32_t>(-23584));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), g4);
    g6 = (g28 + static_cast<std::uint32_t>(-23576));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), g5);
    g4 = (g28 + static_cast<std::uint32_t>(-23568));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g4);
    g4 = (20224u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    g4 = (17174u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(g4);
    g5 = (2237u << 16u);
    g4 = (17761u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(g4);
    g5 = (g5 + static_cast<std::uint32_t>(-28320));
    g4 = (17505u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(g4);
    ctx.gpr[19] = (g28 + static_cast<std::uint32_t>(7696));
    g4 = (17136u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(g4);
    ctx.gpr[18] = (0u | 1u);
    g4 = (18017u << 16u);
    ctx.gpr[30] = (0u | 3u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    ctx.gpr[24] = (0u | 209u);
    ctx.gpr[15] = (0u | 186u);
    ctx.gpr[3] = (0u | 18000u);
    hot_regs.g2 = (0u | 16500u);
    ctx.gpr[11] = (0u | 20000u);
    ctx.gpr[14] = (0u | 187u);
    ctx.gpr[13] = (0u | 188u);
    ctx.gpr[12] = (0u | 189u);
    ctx.gpr[23] = (g28 + static_cast<std::uint32_t>(-23672));
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(20));
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g5);
    ctx.gpr[25] = (32768u << 16u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_088D4C54;
}
L_088D4C54:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(32)));
    g5 = (16256u << 16u);
    ctx.gpr[17] = (g4 << 2u);
    f12 = std::bit_cast<float>(g5);
    g5 = (ctx.gpr[8] + ctx.gpr[17]);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(6292)));
    f12 = f12 / hot_regs.f13;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    g6 = (0u | 0u);
    g4 = (g4 + g4);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g4);
    g10 = (ctx.gpr[8] + g4);
    g10 = (aot_mem.aot_load16(g10 + static_cast<std::uint32_t>(6266)));
    g4 = (g10 + static_cast<std::uint32_t>(-24));
    g6 = (g4 < static_cast<std::uint32_t>(213) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[10] = g10;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088D7624;
      }
      goto L_088D4CA0;
    }
}
}
L_088D4CA0:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-19352)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088D4CB8:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(6276)));
    g4 = (17480u << 16u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    g4 = (17442u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D4CDC;
      }
      goto L_088D4CD4;
    }
}
L_088D4CD4:
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(6276), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    goto L_088D4CDC;
L_088D4CDC:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    f15 = f14 - ctx.fpr[16];
    g4 = (g4 | 32768u);
    f12 = std::bit_cast<float>(g4);
    f15 = f15 / f12;
    g4 = (0u | 320u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), g4);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    hot_regs.g5 = (17786u << 16u);
    hot_regs.g6 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(52), g4);
    g4 = (18076u << 16u);
    g4 = (g4 | 16384u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    f14 = std::bit_cast<float>(g4);
    f12 = std::bit_cast<float>(hot_regs.g5);
    { const float fs = f15; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f14 = f12 + f14;
    ctx.set_fpu_condition((f14 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_088D4D44;
      }
      goto L_088D4D38;
    }
}
}
L_088D4D38:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f14));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_088D4D54;
      }
      goto L_088D4D44;
    }
L_088D4D44:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = hot_regs.f14 - ctx.fpr[24];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 + ctx.gpr[25]);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_088D4D54;
}
}
L_088D4D54:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g5 = (17008u << 16u);
    f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), hot_regs.g4);
    { const float fs = hot_regs.f15; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(f12));
    f14 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g5 = (0u | 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(g5));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g5));
    g5 = (0u | 5u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(116), g5);
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D4DAC;
    }
}
}
L_088D4DAC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (0u | 174u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), g4);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    g5 = (0u | 14000u);
    hot_regs.g6 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(52), g4);
    g4 = (0u | 5u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), g4);
    g4 = (16384u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    g4 = (17008u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (0u | 60u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    g5 = (18010u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(116), 0u);
    g5 = (g5 | 49152u);
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.f14 = std::bit_cast<float>(g5);
    { const bool branch_taken = 0u == 0u;
    g4 = (0u | 14000u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D4E28;
    }
}
L_088D4E28:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (0x088D4E34u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D4E34u) goto L_088D4E34;
    return;
L_088D4E34:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = (g4 << 6u);
    g4 = (g4 << 3u);
    g8 = (hot_regs.g5 - g4);
    { const bool branch_taken = hot_regs.g2 != 0u;
    g8 = (ctx.gpr[16] + g8);
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_088D4E54;
      }
      goto L_088D4E4C;
    }
}
L_088D4E4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(6308)));
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D4E54;
    }
L_088D4E54:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088D4E70;
      }
      goto L_088D4E68;
    }
}
L_088D4E68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(6308)));
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D4E70;
    }
L_088D4E70:
    hot_regs.g4 = (ctx.gpr[8] + ctx.gpr[17]);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(6276)));
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D4EF0;
      }
      goto L_088D4E88;
    }
L_088D4E88:
    hot_regs.g6 = (16256u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g6);
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f15));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.g4 = (17076u << 16u);
        goto L_088D4EB4;
    }
    goto L_088D4EA0;
L_088D4EA0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(6276), std::bit_cast<std::uint32_t>(hot_regs.f15));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (17076u << 16u);
    hot_regs.g5 = g5;
    goto L_088D4EB4;
}
L_088D4EB4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f12 = std::bit_cast<float>(g4);
    { const float fs = hot_regs.f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(1152)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(86))))));
    g5 = (static_cast<std::int32_t>(g4) < -967 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (static_cast<std::int32_t>(g4) < 205 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088D4EF8;
      }
      goto L_088D4EDC;
    }
}
}
L_088D4EDC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(g4) < -969 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D4F68;
      }
      goto L_088D4EE8;
    }
}
L_088D4EE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(6308)));
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D4EF0;
    }
L_088D4EF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(6308)));
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D4EF8;
    }
L_088D4EF8:
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 233 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D4EE8;
      }
      goto L_088D4F00;
    }
L_088D4F00:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-205));
      if (branch_taken) {
          goto L_088D4EE8;
      }
      goto L_088D4F08;
    }
L_088D4F08:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-18496)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088D4F20:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 5932u);
    hot_regs.g5 = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(hot_regs.g5));
    { const bool branch_taken = 0u == 0u;
    g4 = (0u | 5932u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D4F7C;
      }
      goto L_088D4F38;
    }
}
L_088D4F38:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 5944u);
    hot_regs.g5 = (0u | 23u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(hot_regs.g5));
    { const bool branch_taken = 0u == 0u;
    g4 = (0u | 5944u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D4F7C;
      }
      goto L_088D4F50;
    }
}
L_088D4F50:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 5940u);
    hot_regs.g5 = (0u | 22u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(hot_regs.g5));
    { const bool branch_taken = 0u == 0u;
    g4 = (0u | 5940u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D4F7C;
      }
      goto L_088D4F68;
    }
}
L_088D4F68:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 5936u);
    hot_regs.g5 = (0u | 21u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(hot_regs.g5));
    g4 = (0u | 5936u);
    hot_regs.g4 = g4;
    goto L_088D4F7C;
}
L_088D4F7C:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (0u | 71u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g4);
    hot_regs.g31 = (0x088D4F90u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D4F90u) goto L_088D4F90;
    return;
L_088D4F90:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), hot_regs.g2);
    g4 = (16448u << 16u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(f12));
    g4 = (16752u << 16u);
    f12 = std::bit_cast<float>(g4);
    g4 = (17249u << 16u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    g4 = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    f14 = std::bit_cast<float>(g4);
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D4FE0;
    }
}
}
L_088D4FE0:
    hot_regs.g4 = (0u | 247u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g4);
    hot_regs.g4 = (0u | 68u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D5000u);
    hot_regs.g5 = (0u | 247u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D5000u) goto L_088D5000;
    return;
L_088D5000:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (0u | 2u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), hot_regs.g2);
    g5 = (16448u << 16u);
    f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(f12));
    g4 = (17174u << 16u);
    f12 = std::bit_cast<float>(g4);
    g5 = (18095u << 16u);
    g4 = (0u | 127u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(f12));
    g5 = (g5 | 51200u);
    hot_regs.f15 = std::bit_cast<float>(g5);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    g4 = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    f14 = std::bit_cast<float>(g4);
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D5060;
    }
}
}
L_088D5060:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (0u | 246u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), g4);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    g4 = (0u | 69u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(6276)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(52), g4);
    g4 = (17150u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    hot_regs.g6 = (0u | 18569u);
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (0u | 2u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), hot_regs.g6);
    g5 = (16448u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), g4);
    f14 = std::bit_cast<float>(g5);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (18095u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(f14));
    g4 = (g4 | 51200u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.f15 = std::bit_cast<float>(g4);
    g4 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    g5 = (18065u << 16u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    g5 = (g5 | 4608u);
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(g5);
    { const bool branch_taken = 0u == 0u;
    g4 = (0u | 18569u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D50E8;
    }
}
}
L_088D50E8:
    hot_regs.g4 = (0u | 248u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D5114u);
    hot_regs.g5 = (0u | 248u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D5114u) goto L_088D5114;
    return;
L_088D5114:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), hot_regs.g2);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    g4 = (17174u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f12 = std::bit_cast<float>(g4);
    g5 = (18095u << 16u);
    g4 = (0u | 127u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g5 = (g5 | 51200u);
    hot_regs.f15 = std::bit_cast<float>(g5);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), g18);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(g18));
    g4 = (hot_regs.g2 | 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(g18));
    f14 = std::bit_cast<float>(g4);
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D5168;
    }
}
}
L_088D5168:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[24]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g5 = (0u | 209u);
    hot_regs.g31 = (0x088D5180u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D5180u) goto L_088D5180;
    return;
L_088D5180:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), hot_regs.g2);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), 0u);
    g4 = (17096u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f12 = std::bit_cast<float>(g4);
    g5 = (17948u << 16u);
    g4 = (0u | 127u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g5 = (g5 | 16384u);
    hot_regs.f15 = std::bit_cast<float>(g5);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    g4 = (hot_regs.g2 | 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    f14 = std::bit_cast<float>(g4);
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D51D4;
    }
}
}
L_088D51D4:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(6276)));
    ctx.set_fpu_condition((hot_regs.f14 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26332)));
      if (branch_taken) {
          goto L_088D51F8;
      }
      goto L_088D51E8;
    }
L_088D51E8:
{
    std::uint32_t g9 = ctx.gpr[9];
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f14));
    g9 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    g9 = (g9 & 255u);
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_088D520C;
      }
      goto L_088D51F8;
    }
}
L_088D51F8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g9 = ctx.gpr[9];
    f12 = hot_regs.f14 - ctx.fpr[24];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f12));
    g9 = (hot_regs.g4 + ctx.gpr[25]);
    g9 = (g9 & 255u);
    ctx.gpr[9] = g9;
    hot_regs.f12 = f12;
    goto L_088D520C;
}
}
L_088D520C:
    ctx.set_fpu_condition((hot_regs.f14 < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = hot_regs.f14 - ctx.fpr[24];
        goto L_088D522C;
    }
    goto L_088D521C;
L_088D521C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f14));
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    g4 = (g4 >> 8u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D523C;
      }
      goto L_088D522C;
    }
}
L_088D522C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 + ctx.gpr[25]);
    g4 = (g4 >> 8u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_088D523C;
}
}
L_088D523C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (g5 & 1u);
    g5 = (g5 + static_cast<std::uint32_t>(311));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    g6 = (0u | 1000u);
    g7 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(g7));
    g7 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26324)));
    { const std::uint32_t dividend = g7; const std::uint32_t divisor = g6; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(52), g5);
    g6 = (g4 | 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26328)));
    g7 = (0u | 2u);
    g4 = (ctx.hi);
    g4 = (g4 + static_cast<std::uint32_t>(17000));
    { const bool branch_taken = g6 != g7;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_088D529C;
      }
      goto L_088D528C;
    }
}
L_088D528C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (g4 + g4);
    g4 = (g4 + hot_regs.g6);
    g4 = (g4 >> 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), g4);
    hot_regs.g4 = g4;
    goto L_088D529C;
}
L_088D529C:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g6 = (0u | 20u);
    { const std::uint32_t dividend = g5; const std::uint32_t divisor = g6; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g6 = (0u | 6u);
    hot_regs.g7 = (16448u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g7);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), g6);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(f12));
    g6 = (16800u << 16u);
    f12 = std::bit_cast<float>(g6);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(f12));
    g6 = (17352u << 16u);
    hot_regs.f15 = std::bit_cast<float>(g6);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), g18);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(g18));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(g18));
    g5 = (0u | 127u);
    f14 = std::bit_cast<float>(hot_regs.g4);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    g6 = (ctx.hi);
    g6 = (g6 + static_cast<std::uint32_t>(70));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g6));
    g6 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(16)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g6 = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = g6; const std::uint32_t divisor = g5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g5 = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g5));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D531C;
    }
}
}
L_088D531C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(456)));
    g5 = (g5 & 4096u);
    { const bool branch_taken = g5 == 0u;
    g5 = (g4 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088D533C;
      }
      goto L_088D5334;
    }
}
L_088D5334:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D533C;
    }
L_088D533C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26332)));
    g6 = (0u | 20u);
    { const std::uint32_t dividend = hot_regs.g4; const std::uint32_t divisor = g6; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    g6 = (0u | 19u);
    g7 = (ctx.hi);
    g7 = (g7 + static_cast<std::uint32_t>(100));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g7));
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(311)));
    { const bool branch_taken = g5 != g6;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_088D53AC;
      }
      goto L_088D5368;
    }
}
L_088D5368:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27028)));
    hot_regs.g6 = (0u | 65u);
    if (g5 != hot_regs.g6) {
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26328)));
    hot_regs.g5 = g5;
        goto L_088D5390;
    }
    goto L_088D5378;
}
L_088D5378:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 3u);
    g4 = (g4 + static_cast<std::uint32_t>(6019));
    hot_regs.g5 = (0u | 65u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D53D8;
      }
      goto L_088D5390;
    }
}
L_088D5390:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 5u);
    { const std::uint32_t dividend = hot_regs.g5; const std::uint32_t divisor = g4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    g4 = (ctx.hi);
    g4 = (g4 + static_cast<std::uint32_t>(195));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D53D8;
      }
      goto L_088D53AC;
    }
}
L_088D53AC:
    hot_regs.g4 = (0u | 35u);
    { const bool branch_taken = ctx.gpr[10] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_088D53C8;
      }
      goto L_088D53B8;
    }
L_088D53B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 26u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), g4);
    { const bool branch_taken = 0u == 0u;
    g4 = (0u | 26u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D53D4;
      }
      goto L_088D53C8;
    }
}
L_088D53C8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 27u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), g4);
    g4 = (0u | 27u);
    hot_regs.g4 = g4;
    goto L_088D53D4;
}
L_088D53D4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    goto L_088D53D8;
L_088D53D8:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    hot_regs.g5 = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    hot_regs.g31 = (0x088D53F0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D53F0u) goto L_088D53F0;
    return;
L_088D53F0:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    { const std::uint32_t dividend = ctx.gpr[20]; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g2);
    hot_regs.g5 = (ctx.lo);
    hot_regs.g31 = (0x088D5408u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D5408u) goto L_088D5408;
    return;
L_088D5408:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (ctx.gpr[20] + hot_regs.g2);
    g5 = (0u | 2u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), g5);
    g5 = (16880u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), g18);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(g18));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(g18));
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D5450;
    }
}
}
L_088D5450:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(456)));
    g4 = (g4 & 4096u);
    if (g4 == 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26332)));
    hot_regs.g4 = g4;
        goto L_088D5470;
    }
    goto L_088D5468;
}
L_088D5468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D5470;
    }
L_088D5470:
    hot_regs.g4 = (0u | 15u);
    { const std::uint32_t dividend = hot_regs.g5; const std::uint32_t divisor = hot_regs.g4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    hot_regs.g4 = (ctx.hi);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(80));
    hot_regs.g31 = (0x088D5488u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(hot_regs.g4));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D5488u) goto L_088D5488;
    return;
L_088D5488:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    g6 = (g4 << 6u);
    g4 = (g4 << 3u);
    g4 = (g6 - g4);
    g4 = (ctx.gpr[16] + g4);
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6260)));
    g5 = (g4 + g5);
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(6266)));
    { const bool branch_taken = hot_regs.g2 == g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088D54C0;
      }
      goto L_088D54B4;
    }
}
L_088D54B4:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 1u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g6));
    hot_regs.g6 = g6;
    goto L_088D54C0;
}
L_088D54C0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (17352u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(311)));
    g4 = (g4 + static_cast<std::uint32_t>(-2));
    g6 = (g4 < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    ctx.gpr[9] = (0u | 5u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088D56E0;
      }
      goto L_088D54E0;
    }
}
L_088D54E0:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-18384)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088D54F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27028)));
    hot_regs.g6 = (0u | 61u);
    if (g4 != hot_regs.g6) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26328)));
    hot_regs.g4 = g4;
        goto L_088D5528;
    }
    goto L_088D5508;
}
L_088D5508:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26324)));
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (0u | 61u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(g4));
    g4 = (ctx.hi);
    g4 = (g4 + static_cast<std::uint32_t>(5999));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D553C;
      }
      goto L_088D5528;
    }
}
L_088D5528:
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    g4 = (ctx.hi);
    g4 = (g4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), g4);
    hot_regs.g4 = g4;
    goto L_088D553C;
}
L_088D553C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D56FC;
      }
      goto L_088D5544;
    }
L_088D5544:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26328)));
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    g4 = (ctx.hi);
    g4 = (g4 + static_cast<std::uint32_t>(150));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D56FC;
      }
      goto L_088D5560;
    }
}
L_088D5560:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27028)));
    hot_regs.g6 = (0u | 66u);
    if (g4 != hot_regs.g6) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26328)));
    hot_regs.g4 = g4;
        goto L_088D558C;
    }
    goto L_088D5570;
}
L_088D5570:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26336)));
    hot_regs.g6 = (0u | 66u);
    g4 = (g4 & 3u);
    g4 = (g4 + static_cast<std::uint32_t>(6023));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D55A0;
      }
      goto L_088D558C;
    }
}
L_088D558C:
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    g4 = (ctx.hi);
    g4 = (g4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), g4);
    hot_regs.g4 = g4;
    goto L_088D55A0;
}
L_088D55A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D56FC;
      }
      goto L_088D55A8;
    }
L_088D55A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27028)));
    hot_regs.g6 = (0u | 62u);
    if (g4 != hot_regs.g6) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26328)));
    hot_regs.g4 = g4;
        goto L_088D55D8;
    }
    goto L_088D55B8;
}
L_088D55B8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26336)));
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (0u | 62u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(g4));
    g4 = (ctx.hi);
    g4 = (g4 + static_cast<std::uint32_t>(6004));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D55EC;
      }
      goto L_088D55D8;
    }
}
L_088D55D8:
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    g4 = (ctx.hi);
    g4 = (g4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), g4);
    hot_regs.g4 = g4;
    goto L_088D55EC;
}
L_088D55EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D56FC;
      }
      goto L_088D55F4;
    }
L_088D55F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26328)));
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27028)));
    hot_regs.g7 = (0u | 63u);
    g4 = (ctx.hi);
    { const bool branch_taken = hot_regs.g6 != hot_regs.g7;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D5624;
      }
      goto L_088D5610;
    }
}
L_088D5610:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(6009));
    hot_regs.g6 = (0u | 63u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D5630;
      }
      goto L_088D5624;
    }
}
L_088D5624:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = g4;
    goto L_088D5630;
}
L_088D5630:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D56FC;
      }
      goto L_088D5638;
    }
L_088D5638:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27028)));
    hot_regs.g6 = (0u | 64u);
    if (g4 != hot_regs.g6) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26328)));
    hot_regs.g4 = g4;
        goto L_088D5668;
    }
    goto L_088D5648;
}
L_088D5648:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26320)));
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (0u | 64u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(g4));
    g4 = (ctx.hi);
    g4 = (g4 + static_cast<std::uint32_t>(6014));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D567C;
      }
      goto L_088D5668;
    }
}
L_088D5668:
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    g4 = (ctx.hi);
    g4 = (g4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), g4);
    hot_regs.g4 = g4;
    goto L_088D567C;
}
L_088D567C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D56FC;
      }
      goto L_088D5684;
    }
L_088D5684:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26332)));
    g6 = (0u | 15u);
    { const std::uint32_t dividend = hot_regs.g4; const std::uint32_t divisor = g6; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27028)));
    hot_regs.g7 = (0u | 65u);
    g8 = (ctx.hi);
    g8 = (g8 + static_cast<std::uint32_t>(30));
    { const bool branch_taken = g6 != hot_regs.g7;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g8));
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_088D56C0;
      }
      goto L_088D56A8;
    }
}
L_088D56A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 3u);
    g4 = (g4 + static_cast<std::uint32_t>(6019));
    hot_regs.g6 = (0u | 65u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D56D8;
      }
      goto L_088D56C0;
    }
}
L_088D56C0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26328)));
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    g4 = (ctx.hi);
    g4 = (g4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), g4);
    hot_regs.g4 = g4;
    goto L_088D56D8;
}
L_088D56D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D56FC;
      }
      goto L_088D56E0;
    }
L_088D56E0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26328)));
    g4 = (0u | 5u);
    { const std::uint32_t dividend = hot_regs.g6; const std::uint32_t divisor = g4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    g4 = (ctx.hi);
    g4 = (g4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), g4);
    hot_regs.g4 = g4;
    goto L_088D56FC;
}
L_088D56FC:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D5718u);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D5718u) goto L_088D5718;
    return;
L_088D5718:
    hot_regs.g4 = (0u | 17u);
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    { const std::uint32_t dividend = ctx.gpr[20]; const std::uint32_t divisor = hot_regs.g4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g2);
    hot_regs.g5 = (ctx.lo);
    hot_regs.g31 = (0x088D5734u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D5734u) goto L_088D5734;
    return;
L_088D5734:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (ctx.gpr[20] + hot_regs.g2);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g4);
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(2244)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g6 = (0u | 6u);
    ctx.gpr[9] = (0u | 5u);
    ctx.gpr[10] = (0u | 10u);
    { const bool branch_taken = g5 == hot_regs.g6;
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088D577C;
      }
      goto L_088D5760;
    }
}
L_088D5760:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 5u);
    { const bool branch_taken = hot_regs.g5 == g6;
    g6 = (0u | 4u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088D57CC;
      }
      goto L_088D576C;
    }
}
L_088D576C:
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    hot_regs.g6 = (0u | 2u);
      if (branch_taken) {
          goto L_088D57A0;
      }
      goto L_088D5774;
    }
L_088D5774:
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_088D57E4;
      }
      goto L_088D577C;
    }
L_088D577C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (g4 << 3u);
    g4 = (g4 + hot_regs.g5);
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[10]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 2u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g4));
    g4 = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D57E4;
      }
      goto L_088D57A0;
    }
}
L_088D57A0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g4 << 3u);
    g5 = (g4 + g5);
    g5 = (g4 + g5);
    g4 = (g4 + g5);
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[10]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 1u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g4));
    g4 = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088D57E4;
      }
      goto L_088D57CC;
    }
}
L_088D57CC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (g4 + g4);
    g4 = (g4 + hot_regs.g5);
    g4 = (g4 << 2u);
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[10]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), g4);
    hot_regs.g4 = g4;
    goto L_088D57E4;
}
L_088D57E4:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), ctx.gpr[9]);
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (16800u << 16u);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), g18);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(g18));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(g18));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D5814;
    }
}
}
L_088D5814:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(6276)));
    ctx.set_fpu_condition((hot_regs.f14 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[10] = (0u | 319u);
      if (branch_taken) {
          goto L_088D5834;
      }
      goto L_088D5828;
    }
L_088D5828:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f14));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_088D5844;
      }
      goto L_088D5834;
    }
L_088D5834:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    f12 = hot_regs.f14 - ctx.fpr[24];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (g5 + ctx.gpr[25]);
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    goto L_088D5844;
}
}
L_088D5844:
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(-22));
    hot_regs.g6 = (hot_regs.g4 < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_088D58A0;
      }
      goto L_088D5854;
    }
L_088D5854:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-18256)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088D586C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
      if (branch_taken) {
          goto L_088D58A8;
      }
      goto L_088D5874;
    }
L_088D5874:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
      if (branch_taken) {
          goto L_088D58A8;
      }
      goto L_088D587C;
    }
L_088D587C:
    hot_regs.g4 = (0u | 339u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g4);
      if (branch_taken) {
          goto L_088D58A8;
      }
      goto L_088D5888;
    }
L_088D5888:
    hot_regs.g4 = (0u | 329u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g4);
      if (branch_taken) {
          goto L_088D58A8;
      }
      goto L_088D5894;
    }
L_088D5894:
    hot_regs.g4 = (0u | 303u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g4);
      if (branch_taken) {
          goto L_088D58A8;
      }
      goto L_088D58A0;
    }
L_088D58A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D58A8;
    }
L_088D58A8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g6 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), g4);
    g4 = (g5 + static_cast<std::uint32_t>(-24));
    g5 = (g4 < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088D594C;
      }
      goto L_088D58D0;
    }
}
L_088D58D0:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-18192)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088D58E8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 26000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), g4);
    ctx.gpr[17] = (0u | 26000u);
    { const bool branch_taken = 0u == 0u;
    g4 = (0u | 1625u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D5964;
      }
      goto L_088D58FC;
    }
}
L_088D58FC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 13000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), g4);
    ctx.gpr[17] = (0u | 13000u);
    { const bool branch_taken = 0u == 0u;
    g4 = (0u | 812u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D5964;
      }
      goto L_088D5910;
    }
}
L_088D5910:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 15600u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), g4);
    ctx.gpr[17] = (0u | 15600u);
    { const bool branch_taken = 0u == 0u;
    g4 = (0u | 975u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D5964;
      }
      goto L_088D5924;
    }
}
L_088D5924:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 7904u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), g4);
    ctx.gpr[17] = (0u | 7904u);
    { const bool branch_taken = 0u == 0u;
    g4 = (0u | 494u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D5964;
      }
      goto L_088D5938;
    }
}
L_088D5938:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 9959u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), g4);
    ctx.gpr[17] = (0u | 9959u);
    { const bool branch_taken = 0u == 0u;
    g4 = (0u | 622u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D5964;
      }
      goto L_088D594C;
    }
}
L_088D594C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    hot_regs.g31 = (0x088D5958u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D5958u) goto L_088D5958;
    return;
L_088D5958:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[17] >> 4u);
    goto L_088D5964;
L_088D5964:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x088D5970u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D5970u) goto L_088D5970;
    return;
L_088D5970:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26336)));
    g4 = (0u | 10u);
    { const std::uint32_t dividend = g5; const std::uint32_t divisor = g4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (ctx.gpr[17] + hot_regs.g2);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), g18);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(g18));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(g18));
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    g5 = (ctx.hi);
    g5 = (g5 + static_cast<std::uint32_t>(95));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g5));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D59C4;
    }
}
}
L_088D59C4:
    hot_regs.g4 = (0u | 193u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g5);
    hot_regs.g31 = (0x088D59ECu);
    hot_regs.g5 = (0u | 193u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D59ECu) goto L_088D59EC;
    return;
L_088D59EC:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[17] >> 4u);
    hot_regs.g31 = (0x088D5A00u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D5A00u) goto L_088D5A00;
    return;
L_088D5A00:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (ctx.gpr[17] + hot_regs.g2);
    g5 = (16512u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    hot_regs.f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    g5 = (17008u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g5 = (0u | 85u);
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g5));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    g5 = (0u | 1u);
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(g5));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D5A58;
    }
}
}
L_088D5A58:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g12 = ctx.gpr[12];
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (0u | 10u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[11] = (0u | 15u);
    hot_regs.g6 = (g5 << 5u);
    g5 = (g5 << 2u);
    g5 = (hot_regs.g6 - g5);
    g12 = (g4 + g5);
    g12 = (g12 + static_cast<std::uint32_t>(1396));
    hot_regs.g2 = (0u | 301u);
    { const bool branch_taken = g12 != 0u;
    ctx.gpr[3] = (0u | 327u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[12] = g12;
      if (branch_taken) {
          goto L_088D5A94;
      }
      goto L_088D5A8C;
    }
}
L_088D5A8C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[12]);
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D5A94;
    }
L_088D5A94:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    g4 = (g4 + static_cast<std::uint32_t>(-18));
    hot_regs.g5 = (g4 < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D631C;
      }
      goto L_088D5AA8;
    }
}
L_088D5AA8:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-18160)));
    jump_target = g1;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088D5AC0:
    hot_regs.g4 = (0u | 284u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D5AF0u);
    hot_regs.g5 = (0u | 284u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D5AF0u) goto L_088D5AF0;
    return;
L_088D5AF0:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[17] >> 5u);
    hot_regs.g31 = (0x088D5B04u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D5B04u) goto L_088D5B04;
    return;
L_088D5B04:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (ctx.gpr[17] + hot_regs.g2);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    f14 = std::bit_cast<float>(g4);
    g5 = (0u | 127u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g5));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), g18);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(g18));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(g18));
    g5 = (0u | 1u);
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f14 = f14;
    goto L_088D5B48;
}
}
L_088D5B48:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(hot_regs.g5));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D5B50;
    }
L_088D5B50:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    hot_regs.g4 = (0u | 110u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g4);
    ctx.gpr[17] = (ctx.gpr[10] | 0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D5B88u);
    hot_regs.g5 = (0u | 110u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D5B88u) goto L_088D5B88;
    return;
L_088D5B88:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[20] >> 5u);
    hot_regs.g31 = (0x088D5B9Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D5B9Cu) goto L_088D5B9C;
    return;
L_088D5B9C:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26324)));
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (ctx.gpr[20] + hot_regs.g2);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), g18);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(g18));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(g18));
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (0u | 1u);
    g6 = (ctx.hi);
    g6 = (g6 + static_cast<std::uint32_t>(105));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g6));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D5BF4;
    }
}
}
L_088D5BF4:
    hot_regs.g4 = (0u | 298u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D5C24u);
    hot_regs.g5 = (0u | 298u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D5C24u) goto L_088D5C24;
    return;
L_088D5C24:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[17] >> 5u);
    hot_regs.g31 = (0x088D5C38u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D5C38u) goto L_088D5C38;
    return;
L_088D5C38:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26320)));
    g4 = (0u | 20u);
    { const std::uint32_t dividend = g5; const std::uint32_t divisor = g4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (ctx.gpr[17] + hot_regs.g2);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), g18);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), g18);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(g18));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(g18));
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    g5 = (0u | 1u);
    g6 = (ctx.hi);
    g6 = (g6 + static_cast<std::uint32_t>(95));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g6));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D5C90;
    }
}
}
L_088D5C90:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    hot_regs.g4 = (0u | 191u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g4);
    hot_regs.g4 = (0u | 9u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g4);
    ctx.gpr[17] = (0u | 105u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D5CB8u);
    hot_regs.g5 = (0u | 191u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D5CB8u) goto L_088D5CB8;
    return;
L_088D5CB8:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(48)));
    g5 = (g4 << 3u);
    g5 = (g4 + g5);
    g4 = (g4 + g5);
    g4 = (g4 & 2047u);
    g4 = (hot_regs.g2 + g4);
    g5 = (16512u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    hot_regs.f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    g5 = (17008u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f13));
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[17]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    g5 = (0u | 6u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(116), g5);
    g5 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D5D24;
    }
}
}
L_088D5D24:
    hot_regs.g4 = (0u | 236u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D5D54u);
    hot_regs.g5 = (0u | 236u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D5D54u) goto L_088D5D54;
    return;
L_088D5D54:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[17] >> 5u);
    hot_regs.g31 = (0x088D5D68u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D5D68u) goto L_088D5D68;
    return;
L_088D5D68:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (ctx.gpr[17] + hot_regs.g2);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g5 = (0u | 127u);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    g5 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D5DAC;
    }
}
}
L_088D5DAC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    hot_regs.g4 = (0u | 253u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g4);
    ctx.gpr[17] = (ctx.gpr[11] | 0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D5DE4u);
    hot_regs.g5 = (0u | 253u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D5DE4u) goto L_088D5DE4;
    return;
L_088D5DE4:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[20] >> 5u);
    hot_regs.g31 = (0x088D5DF8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D5DF8u) goto L_088D5DF8;
    return;
L_088D5DF8:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26332)));
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (ctx.gpr[20] + hot_regs.g2);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (0u | 1u);
    g6 = (ctx.hi);
    g6 = (g6 + static_cast<std::uint32_t>(113));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g6));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D5E4C;
    }
}
}
L_088D5E4C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g4);
    ctx.gpr[17] = (ctx.gpr[11] | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088D5E7Cu);
    hot_regs.g5 = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D5E7Cu) goto L_088D5E7C;
    return;
L_088D5E7C:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26332)));
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(17000));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (0u | 1u);
    g6 = (ctx.hi);
    g6 = (g6 + static_cast<std::uint32_t>(85));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g6));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D5ECC;
    }
}
}
L_088D5ECC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g4);
    ctx.gpr[17] = (0u | 34000u);
    ctx.gpr[20] = (ctx.gpr[11] | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088D5F04u);
    hot_regs.g5 = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D5F04u) goto L_088D5F04;
    return;
L_088D5F04:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26332)));
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[20]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (hot_regs.g2 + ctx.gpr[17]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (0u | 1u);
    g6 = (ctx.hi);
    g6 = (g6 + static_cast<std::uint32_t>(85));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g6));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D5F58;
    }
}
}
L_088D5F58:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g4);
    ctx.gpr[17] = (ctx.gpr[11] | 0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D5F8Cu);
    hot_regs.g5 = (0u | 301u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D5F8Cu) goto L_088D5F8C;
    return;
L_088D5F8C:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[20] >> 5u);
    hot_regs.g31 = (0x088D5FA0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D5FA0u) goto L_088D5FA0;
    return;
L_088D5FA0:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26332)));
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (ctx.gpr[20] + hot_regs.g2);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (0u | 1u);
    g6 = (ctx.hi);
    g6 = (g6 + static_cast<std::uint32_t>(105));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g6));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D5FF4;
    }
}
}
L_088D5FF4:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g4);
    ctx.gpr[17] = (0u | 43150u);
    ctx.gpr[20] = (ctx.gpr[11] | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088D602Cu);
    hot_regs.g5 = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D602Cu) goto L_088D602C;
    return;
L_088D602C:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26332)));
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[20]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (hot_regs.g2 + ctx.gpr[17]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (0u | 1u);
    g6 = (ctx.hi);
    g6 = (g6 + static_cast<std::uint32_t>(105));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g6));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D6080;
    }
}
}
L_088D6080:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    hot_regs.g4 = (0u | 340u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g4);
    ctx.gpr[17] = (ctx.gpr[11] | 0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D60B8u);
    hot_regs.g5 = (0u | 340u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D60B8u) goto L_088D60B8;
    return;
L_088D60B8:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[20] >> 5u);
    hot_regs.g31 = (0x088D60CCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D60CCu) goto L_088D60CC;
    return;
L_088D60CC:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26332)));
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (ctx.gpr[20] + hot_regs.g2);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (0u | 1u);
    g6 = (ctx.hi);
    g6 = (g6 + static_cast<std::uint32_t>(113));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g6));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D6120;
    }
}
}
L_088D6120:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (0u | 314u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), g4);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(52), g4);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    g4 = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    g5 = (0u | 30u);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088D6168;
      }
      goto L_088D6154;
    }
}
L_088D6154:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 25472u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), g4);
    ctx.gpr[17] = (0u | 25472u);
    { const bool branch_taken = 0u == 0u;
    g4 = (0u | 796u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D6178;
      }
      goto L_088D6168;
    }
}
L_088D6168:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 20182u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), g4);
    ctx.gpr[17] = (0u | 20182u);
    g4 = (0u | 630u);
    hot_regs.g4 = g4;
    goto L_088D6178;
}
L_088D6178:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x088D6184u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6184u) goto L_088D6184;
    return;
L_088D6184:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26336)));
    g4 = (0u | 10u);
    { const std::uint32_t dividend = g5; const std::uint32_t divisor = g4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (ctx.gpr[17] + hot_regs.g2);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), g18);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(g18));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(g18));
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    g5 = (0u | 1u);
    g6 = (ctx.hi);
    g6 = (g6 + static_cast<std::uint32_t>(115));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g6));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D61DC;
    }
}
}
L_088D61DC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    hot_regs.g4 = (0u | 317u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g4);
    ctx.gpr[17] = (ctx.gpr[10] | 0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D6210u);
    hot_regs.g5 = (0u | 317u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6210u) goto L_088D6210;
    return;
L_088D6210:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[20] >> 5u);
    hot_regs.g31 = (0x088D6224u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6224u) goto L_088D6224;
    return;
L_088D6224:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26328)));
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (ctx.gpr[20] + hot_regs.g2);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), g18);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(g18));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(g18));
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (0u | 1u);
    g6 = (ctx.hi);
    g6 = (g6 + static_cast<std::uint32_t>(115));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g6));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D627C;
    }
}
}
L_088D627C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    hot_regs.g4 = (0u | 308u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g4);
    ctx.gpr[17] = (ctx.gpr[10] | 0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D62B0u);
    hot_regs.g5 = (0u | 308u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D62B0u) goto L_088D62B0;
    return;
L_088D62B0:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[20] >> 5u);
    hot_regs.g31 = (0x088D62C4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D62C4u) goto L_088D62C4;
    return;
L_088D62C4:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26328)));
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (ctx.gpr[20] + hot_regs.g2);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), g18);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(g18));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(g18));
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (0u | 1u);
    g6 = (ctx.hi);
    g6 = (g6 + static_cast<std::uint32_t>(115));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g6));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D631C;
    }
}
}
L_088D631C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D6324;
    }
L_088D6324:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(6276)));
    ctx.gpr[10] = (0u | 75u);
    ctx.set_fpu_condition((hot_regs.f14 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[11] = (0u | 2u);
      if (branch_taken) {
          goto L_088D6348;
      }
      goto L_088D633C;
    }
L_088D633C:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f14));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_088D6358;
      }
      goto L_088D6348;
    }
L_088D6348:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = hot_regs.f14 - ctx.fpr[24];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 + ctx.gpr[25]);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_088D6358;
}
}
L_088D6358:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(-18));
    hot_regs.g5 = (g4 < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D64E8;
      }
      goto L_088D6368;
    }
}
L_088D6368:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-18080)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088D6380:
    hot_regs.g4 = (0u | 269u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g4);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[10]));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D63ACu);
    hot_regs.g5 = (0u | 269u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D63ACu) goto L_088D63AC;
    return;
L_088D63AC:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088D63BCu);
    hot_regs.g5 = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D63BCu) goto L_088D63BC;
    return;
L_088D63BC:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + hot_regs.g2);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), g17);
    ctx.gpr[17] = g17;
    goto L_088D63C4;
}
L_088D63C4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088D63D0u);
    hot_regs.g5 = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D63D0u) goto L_088D63D0;
    return;
L_088D63D0:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (ctx.gpr[17] + hot_regs.g2);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    g5 = (0u | 5u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), g5);
    g5 = (16880u << 16u);
    f14 = std::bit_cast<float>(g4);
    hot_regs.f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), g18);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(g18));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(g18));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D641C;
    }
}
}
L_088D641C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), ctx.gpr[11]);
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(52), g4);
    g4 = (0u | 39243u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 39243u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D63C4;
      }
      goto L_088D6448;
    }
}
L_088D6448:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), ctx.gpr[11]);
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(52), g4);
    g4 = (0u | 30290u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 30290u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D63C4;
      }
      goto L_088D6474;
    }
}
L_088D6474:
    hot_regs.g4 = (0u | 299u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g4);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[10]));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D64A0u);
    hot_regs.g5 = (0u | 299u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D64A0u) goto L_088D64A0;
    return;
L_088D64A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g2);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_088D63C4;
      }
      goto L_088D64AC;
    }
L_088D64AC:
    hot_regs.g4 = (0u | 295u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    hot_regs.g5 = (0u | 75u);
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g4);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D64DCu);
    hot_regs.g5 = (0u | 295u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D64DCu) goto L_088D64DC;
    return;
L_088D64DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g2);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_088D63C4;
      }
      goto L_088D64E8;
    }
L_088D64E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D64F0;
    }
L_088D64F0:
    hot_regs.g4 = (0u | 36u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D651Cu);
    hot_regs.g5 = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D651Cu) goto L_088D651C;
    return;
L_088D651C:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[17] >> 3u);
    hot_regs.g31 = (0x088D6530u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6530u) goto L_088D6530;
    return;
L_088D6530:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26320)));
    g4 = (0u | 20u);
    { const std::uint32_t dividend = g5; const std::uint32_t divisor = g4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (ctx.gpr[17] + hot_regs.g2);
    g5 = (0u | 7u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), g5);
    g5 = (16880u << 16u);
    f14 = std::bit_cast<float>(g4);
    hot_regs.f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    g5 = (ctx.hi);
    g5 = (g5 + static_cast<std::uint32_t>(90));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g5));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D658C;
    }
}
}
L_088D658C:
    hot_regs.g31 = (0x088D6594u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6594u) goto L_088D6594;
    return;
L_088D6594:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088D65B8;
      }
      goto L_088D659C;
    }
L_088D659C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = (g4 << 6u);
    g4 = (g4 << 3u);
    g8 = (hot_regs.g5 - g4);
    g8 = (ctx.gpr[16] + g8);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(6308)));
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D65B8;
    }
}
L_088D65B8:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D65C4u);
    hot_regs.g5 = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D65C4u) goto L_088D65C4;
    return;
L_088D65C4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088D65F4;
      }
      goto L_088D65CC;
    }
L_088D65CC:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D65D8u);
    hot_regs.g5 = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 475u, 0x0880A244u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D65D8u) goto L_088D65D8;
    return;
L_088D65D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = (g4 << 6u);
    g4 = (g4 << 3u);
    g8 = (hot_regs.g5 - g4);
    g8 = (ctx.gpr[16] + g8);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(6308)));
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D65F4;
    }
}
L_088D65F4:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D6600u);
    hot_regs.g5 = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6600u) goto L_088D6600;
    return;
L_088D6600:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = (0u | 2u);
    hot_regs.g6 = (g4 << 6u);
    g4 = (g4 << 3u);
    g8 = (hot_regs.g6 - g4);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g5;
    g8 = (ctx.gpr[16] + g8);
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_088D6624;
      }
      goto L_088D661C;
    }
}
L_088D661C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(6308)));
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D6624;
    }
L_088D6624:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (ctx.gpr[8] + ctx.gpr[17]);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(6276)));
    ctx.set_fpu_condition((f14 < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = f14 - ctx.fpr[24];
    hot_regs.f14 = f14;
        goto L_088D6648;
    }
    goto L_088D663C;
}
L_088D663C:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f14));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_088D6658;
      }
      goto L_088D6648;
    }
L_088D6648:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (32768u << 16u);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (hot_regs.g5 + g4);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_088D6658;
}
}
L_088D6658:
    hot_regs.g5 = (0u | 3u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088D6690;
      }
      goto L_088D6664;
    }
L_088D6664:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.gpr[9] = (15800u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] | 20972u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f13 = std::bit_cast<float>(ctx.gpr[9]);
    hot_regs.g7 = (0u | 6u);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    hot_regs.g31 = (0x088D6690u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 413u, 0x08A0E6B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6690u) goto L_088D6690;
    return;
L_088D6690:
    hot_regs.g4 = (0u | 5921u);
    hot_regs.g5 = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g4);
    hot_regs.g4 = (0u | 68u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g4);
    ctx.gpr[17] = (0u | 100u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088D66B8u);
    hot_regs.g5 = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D66B8u) goto L_088D66B8;
    return;
L_088D66B8:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(22000));
    g5 = (0u | 2u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), g5);
    g5 = (16448u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    g5 = (17008u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f13));
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[17]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    g5 = (0u | 5u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(116), g5);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6710;
    }
}
}
L_088D6710:
    hot_regs.g31 = (0x088D6718u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6718u) goto L_088D6718;
    return;
L_088D6718:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088D673C;
      }
      goto L_088D6720;
    }
L_088D6720:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = (g4 << 6u);
    g4 = (g4 << 3u);
    g8 = (hot_regs.g5 - g4);
    g8 = (ctx.gpr[16] + g8);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(6308)));
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D673C;
    }
}
L_088D673C:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D6748u);
    hot_regs.g5 = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6748u) goto L_088D6748;
    return;
L_088D6748:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088D6778;
      }
      goto L_088D6750;
    }
L_088D6750:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D675Cu);
    hot_regs.g5 = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 475u, 0x0880A244u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D675Cu) goto L_088D675C;
    return;
L_088D675C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = (g4 << 6u);
    g4 = (g4 << 3u);
    g8 = (hot_regs.g5 - g4);
    g8 = (ctx.gpr[16] + g8);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(6308)));
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D6778;
    }
}
L_088D6778:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D6784u);
    hot_regs.g5 = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6784u) goto L_088D6784;
    return;
L_088D6784:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 2u);
    { const bool branch_taken = hot_regs.g2 != g4;
    g4 = (0u | 5921u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D67AC;
      }
      goto L_088D6790;
    }
}
L_088D6790:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = (g4 << 6u);
    g4 = (g4 << 3u);
    g8 = (hot_regs.g5 - g4);
    g8 = (ctx.gpr[16] + g8);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(6308)));
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D67AC;
    }
}
L_088D67AC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g5 = (0u | 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), g4);
    g4 = (0u | 68u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(g5));
    g5 = (0u | 27000u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(52), g4);
    g4 = (0u | 2u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), g4);
    g4 = (16448u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    g4 = (17008u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (0u | 100u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    g4 = (0u | 5u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    g5 = (18130u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(116), g4);
    g5 = (g5 | 61440u);
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.f14 = std::bit_cast<float>(g5);
    { const bool branch_taken = 0u == 0u;
    g4 = (0u | 27000u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6824;
    }
}
L_088D6824:
    hot_regs.g31 = (0x088D682Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D682Cu) goto L_088D682C;
    return;
L_088D682C:
    if (hot_regs.g2 == 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
        goto L_088D6850;
    }
    goto L_088D6834;
L_088D6834:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = (g4 << 6u);
    g4 = (g4 << 3u);
    g8 = (hot_regs.g5 - g4);
    g8 = (ctx.gpr[16] + g8);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(6308)));
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D6850;
    }
}
L_088D6850:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(236)));
    g4 = (g4 & 256u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D6888;
      }
      goto L_088D686C;
    }
}
L_088D686C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = (g4 << 6u);
    g4 = (g4 << 3u);
    g8 = (hot_regs.g5 - g4);
    g8 = (ctx.gpr[16] + g8);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(6308)));
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D6888;
    }
}
L_088D6888:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D6894u);
    hot_regs.g5 = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6894u) goto L_088D6894;
    return;
L_088D6894:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088D68C4;
      }
      goto L_088D689C;
    }
L_088D689C:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D68A8u);
    hot_regs.g5 = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 475u, 0x0880A244u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D68A8u) goto L_088D68A8;
    return;
L_088D68A8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = (g4 << 6u);
    g4 = (g4 << 3u);
    g8 = (hot_regs.g5 - g4);
    g8 = (ctx.gpr[16] + g8);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(6308)));
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D68C4;
    }
}
L_088D68C4:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D68D0u);
    hot_regs.g5 = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D68D0u) goto L_088D68D0;
    return;
L_088D68D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 2u);
    { const bool branch_taken = hot_regs.g2 != g4;
    g4 = (0u | 5920u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D68F8;
      }
      goto L_088D68DC;
    }
}
L_088D68DC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = (g4 << 6u);
    g4 = (g4 << 3u);
    g8 = (hot_regs.g5 - g4);
    g8 = (ctx.gpr[16] + g8);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(6308)));
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D68F8;
    }
}
L_088D68F8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g5 = (0u | 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), g4);
    g4 = (0u | 70u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(g5));
    g5 = (0u | 27000u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(52), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g5);
    g4 = (16448u << 16u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(f12));
    g4 = (16968u << 16u);
    f12 = std::bit_cast<float>(g4);
    g5 = (17692u << 16u);
    g4 = (0u | 100u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(f12));
    g5 = (g5 | 16384u);
    hot_regs.f15 = std::bit_cast<float>(g5);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    g4 = (0u | 5u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    g5 = (18130u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(116), g4);
    g5 = (g5 | 61440u);
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.f14 = std::bit_cast<float>(g5);
    { const bool branch_taken = 0u == 0u;
    g4 = (0u | 27000u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6974;
    }
}
}
L_088D6974:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(6276)));
    ctx.set_fpu_condition((f14 < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = f14 - ctx.fpr[24];
    hot_regs.f14 = f14;
        goto L_088D6994;
    }
    goto L_088D6988;
}
L_088D6988:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f14));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_088D69A0;
      }
      goto L_088D6994;
    }
L_088D6994:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 + ctx.gpr[25]);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_088D69A0;
}
}
L_088D69A0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g4 & 255u);
    hot_regs.g6 = (0u | 3u);
    if (g5 != hot_regs.g6) {
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26336)));
    hot_regs.g5 = g5;
        goto L_088D6AB4;
    }
    goto L_088D69B0;
}
L_088D69B0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 >> 8u);
    g4 = (g4 + static_cast<std::uint32_t>(-2));
    hot_regs.g5 = (g4 < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D6A80;
      }
      goto L_088D69C4;
    }
}
L_088D69C4:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-18000)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088D69DC:
    hot_regs.g4 = (0u | 51u);
    { const bool branch_taken = ctx.gpr[10] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_088D69F8;
      }
      goto L_088D69E8;
    }
L_088D69E8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 232u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), g4);
    { const bool branch_taken = 0u == 0u;
    g4 = (0u | 232u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D6A04;
      }
      goto L_088D69F8;
    }
}
L_088D69F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 233u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), g4);
    g4 = (0u | 233u);
    hot_regs.g4 = g4;
    goto L_088D6A04;
}
L_088D6A04:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    hot_regs.g31 = (0x088D6A14u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6A14u) goto L_088D6A14;
    return;
L_088D6A14:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[17] >> 5u);
    hot_regs.g31 = (0x088D6A28u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6A28u) goto L_088D6A28;
    return;
L_088D6A28:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] + hot_regs.g2);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), g4);
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D6AF8;
      }
      goto L_088D6A3C;
    }
}
L_088D6A3C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26332)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = (hot_regs.g4 & 1u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(214));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g5);
    hot_regs.g31 = (0x088D6A58u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6A58u) goto L_088D6A58;
    return;
L_088D6A58:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[17] >> 5u);
    hot_regs.g31 = (0x088D6A6Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6A6Cu) goto L_088D6A6C;
    return;
L_088D6A6C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] + hot_regs.g2);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), g4);
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D6AF8;
      }
      goto L_088D6A80;
    }
}
L_088D6A80:
    hot_regs.g4 = (0u | 14u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088D6A98u);
    hot_regs.g5 = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6A98u) goto L_088D6A98;
    return;
L_088D6A98:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(22000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), g4);
    g5 = (0u | 1u);
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(g5));
    { const bool branch_taken = 0u == 0u;
    g5 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088D6AF8;
      }
      goto L_088D6AB4;
    }
}
L_088D6AB4:
    hot_regs.g4 = (0u | 6u);
    { const std::uint32_t dividend = hot_regs.g5; const std::uint32_t divisor = hot_regs.g4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.hi);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(119));
    hot_regs.g31 = (0x088D6AD4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6AD4u) goto L_088D6AD4;
    return;
L_088D6AD4:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[17] >> 4u);
    hot_regs.g31 = (0x088D6AE8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6AE8u) goto L_088D6AE8;
    return;
L_088D6AE8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] + hot_regs.g2);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), g4);
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
    goto L_088D6AF8;
}
L_088D6AF8:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(g5));
    hot_regs.g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26328)));
    g5 = (0u | 20u);
    { const std::uint32_t dividend = hot_regs.g6; const std::uint32_t divisor = g5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(52), g4);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(g18));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    g4 = (16880u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), g18);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(g18));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(g18));
    f14 = std::bit_cast<float>(g4);
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    g5 = (ctx.hi);
    g5 = (g5 + static_cast<std::uint32_t>(100));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g5));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6B5C;
    }
}
}
L_088D6B5C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(6276)));
      if (branch_taken) {
          goto L_088D6C18;
      }
      goto L_088D6B6C;
    }
L_088D6B6C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g2);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(6276)));
      if (branch_taken) {
          goto L_088D6C18;
      }
      goto L_088D6B7C;
    }
L_088D6B7C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[11]);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(6276)));
      if (branch_taken) {
          goto L_088D6C18;
      }
      goto L_088D6B8C;
    }
L_088D6B8C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(6276)));
      if (branch_taken) {
          goto L_088D6C18;
      }
      goto L_088D6B9C;
    }
L_088D6B9C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g2);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(6276)));
      if (branch_taken) {
          goto L_088D6C18;
      }
      goto L_088D6BAC;
    }
L_088D6BAC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[11]);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(6276)));
      if (branch_taken) {
          goto L_088D6C18;
      }
      goto L_088D6BBC;
    }
L_088D6BBC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(6276)));
      if (branch_taken) {
          goto L_088D6C18;
      }
      goto L_088D6BCC;
    }
L_088D6BCC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g2);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(6276)));
      if (branch_taken) {
          goto L_088D6C18;
      }
      goto L_088D6BDC;
    }
L_088D6BDC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[11]);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(6276)));
      if (branch_taken) {
          goto L_088D6C18;
      }
      goto L_088D6BEC;
    }
L_088D6BEC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(6276)));
      if (branch_taken) {
          goto L_088D6C18;
      }
      goto L_088D6BFC;
    }
L_088D6BFC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g2);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(6276)));
      if (branch_taken) {
          goto L_088D6C18;
      }
      goto L_088D6C0C;
    }
L_088D6C0C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[11]);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(6276)));
    goto L_088D6C18;
L_088D6C18:
    ctx.set_fpu_condition((hot_regs.f14 < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = hot_regs.f14 - ctx.fpr[24];
        goto L_088D6C34;
    }
    goto L_088D6C28;
L_088D6C28:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f14));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_088D6C40;
      }
      goto L_088D6C34;
    }
L_088D6C34:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 + ctx.gpr[25]);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_088D6C40;
}
}
L_088D6C40:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 255u);
    hot_regs.g5 = (0u | 3u);
    if (g4 == hot_regs.g5) {
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = g4;
        goto L_088D6C90;
    }
    goto L_088D6C50;
}
L_088D6C50:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26336)));
    hot_regs.g4 = (0u | 6u);
    { const std::uint32_t dividend = hot_regs.g5; const std::uint32_t divisor = hot_regs.g4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.hi);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(119));
    hot_regs.g31 = (0x088D6C70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6C70u) goto L_088D6C70;
    return;
L_088D6C70:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[17] >> 4u);
    hot_regs.g31 = (0x088D6C84u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6C84u) goto L_088D6C84;
    return;
L_088D6C84:
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g2);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    goto L_088D6C90;
L_088D6C90:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(g5));
    hot_regs.g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26332)));
    g5 = (0u | 26u);
    { const std::uint32_t dividend = hot_regs.g6; const std::uint32_t divisor = g5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(52), g4);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(g18));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    g4 = (16880u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), g18);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(g18));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(g18));
    f14 = std::bit_cast<float>(g4);
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    g5 = (ctx.hi);
    g5 = (g5 + static_cast<std::uint32_t>(100));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g5));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6CFC;
    }
}
}
L_088D6CFC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 238u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088D6D18u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6D18u) goto L_088D6D18;
    return;
L_088D6D18:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6D30;
    }
}
L_088D6D30:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 239u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088D6D4Cu);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6D4Cu) goto L_088D6D4C;
    return;
L_088D6D4C:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6D64;
    }
}
L_088D6D64:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 240u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088D6D80u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6D80u) goto L_088D6D80;
    return;
L_088D6D80:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6D98;
    }
}
L_088D6D98:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 241u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088D6DB4u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6DB4u) goto L_088D6DB4;
    return;
L_088D6DB4:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6DCC;
    }
}
L_088D6DCC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 242u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088D6DE8u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6DE8u) goto L_088D6DE8;
    return;
L_088D6DE8:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6E00;
    }
}
L_088D6E00:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 243u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088D6E1Cu);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6E1Cu) goto L_088D6E1C;
    return;
L_088D6E1C:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6E34;
    }
}
L_088D6E34:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 244u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088D6E50u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6E50u) goto L_088D6E50;
    return;
L_088D6E50:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6E68;
    }
}
L_088D6E68:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 245u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088D6E84u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6E84u) goto L_088D6E84;
    return;
L_088D6E84:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6E9C;
    }
}
L_088D6E9C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 178u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088D6EB8u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6EB8u) goto L_088D6EB8;
    return;
L_088D6EB8:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6ED0;
    }
}
L_088D6ED0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 179u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088D6EECu);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6EECu) goto L_088D6EEC;
    return;
L_088D6EEC:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6F04;
    }
}
L_088D6F04:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 180u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088D6F20u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6F20u) goto L_088D6F20;
    return;
L_088D6F20:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6F38;
    }
}
L_088D6F38:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 181u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088D6F54u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6F54u) goto L_088D6F54;
    return;
L_088D6F54:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6F6C;
    }
}
L_088D6F6C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 182u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088D6F88u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6F88u) goto L_088D6F88;
    return;
L_088D6F88:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6FA0;
    }
}
L_088D6FA0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 183u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088D6FBCu);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6FBCu) goto L_088D6FBC;
    return;
L_088D6FBC:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6FD4;
    }
}
L_088D6FD4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 184u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088D6FF0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D6FF0u) goto L_088D6FF0;
    return;
L_088D6FF0:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D7008;
    }
}
L_088D7008:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 185u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088D7024u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7024u) goto L_088D7024;
    return;
L_088D7024:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D703C;
    }
}
L_088D703C:
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 12u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (0u | 16500u);
    ctx.gpr[11] = (0u | 127u);
    hot_regs.g31 = (0x088D7068u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7068u) goto L_088D7068;
    return;
L_088D7068:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D7080;
    }
}
L_088D7080:
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 13u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (0u | 16500u);
    ctx.gpr[11] = (0u | 127u);
    hot_regs.g31 = (0x088D70ACu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D70ACu) goto L_088D70AC;
    return;
L_088D70AC:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D70C4;
    }
}
L_088D70C4:
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 167u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (0u | 22000u);
    ctx.gpr[11] = (0u | 127u);
    hot_regs.g31 = (0x088D70F0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D70F0u) goto L_088D70F0;
    return;
L_088D70F0:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D7108;
    }
}
L_088D7108:
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 230u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (0u | 22000u);
    ctx.gpr[11] = (0u | 127u);
    hot_regs.g31 = (0x088D7134u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7134u) goto L_088D7134;
    return;
L_088D7134:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D714C;
    }
}
L_088D714C:
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 231u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (0u | 22000u);
    ctx.gpr[11] = (0u | 127u);
    hot_regs.g31 = (0x088D7178u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7178u) goto L_088D7178;
    return;
L_088D7178:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D7190;
    }
}
L_088D7190:
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 282u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (0u | 22000u);
    ctx.gpr[11] = (0u | 127u);
    hot_regs.g31 = (0x088D71BCu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D71BCu) goto L_088D71BC;
    return;
L_088D71BC:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D71D4;
    }
}
L_088D71D4:
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(76)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 283u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (0u | 20000u);
    ctx.gpr[11] = (0u | 127u);
    hot_regs.g31 = (0x088D7200u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7200u) goto L_088D7200;
    return;
L_088D7200:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D7218;
    }
}
L_088D7218:
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 323u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (0u | 22000u);
    ctx.gpr[11] = (0u | 127u);
    hot_regs.g31 = (0x088D7244u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7244u) goto L_088D7244;
    return;
L_088D7244:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D725C;
    }
}
L_088D725C:
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 342u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (0u | 18500u);
    ctx.gpr[11] = (0u | 127u);
    hot_regs.g31 = (0x088D7288u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7288u) goto L_088D7288;
    return;
L_088D7288:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D72A0;
    }
}
L_088D72A0:
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 255u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (0u | 22050u);
    ctx.gpr[11] = (0u | 127u);
    hot_regs.g31 = (0x088D72CCu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D72CCu) goto L_088D72CC;
    return;
L_088D72CC:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D72E4;
    }
}
L_088D72E4:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D72F0u);
    hot_regs.g5 = (0u | 233u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D72F0u) goto L_088D72F0;
    return;
L_088D72F0:
    ctx.gpr[3] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 233u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (hot_regs.g2 | 0u);
    ctx.gpr[11] = (0u | 127u);
    hot_regs.g31 = (0x088D731Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D731Cu) goto L_088D731C;
    return;
L_088D731C:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D7334;
    }
}
L_088D7334:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D7340u);
    hot_regs.g5 = (0u | 234u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7340u) goto L_088D7340;
    return;
L_088D7340:
    ctx.gpr[3] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 234u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (hot_regs.g2 | 0u);
    ctx.gpr[11] = (0u | 127u);
    hot_regs.g31 = (0x088D736Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D736Cu) goto L_088D736C;
    return;
L_088D736C:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D7384;
    }
}
L_088D7384:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088D7390u);
    hot_regs.g5 = (0u | 232u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7390u) goto L_088D7390;
    return;
L_088D7390:
    ctx.gpr[3] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 232u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (hot_regs.g2 | 0u);
    ctx.gpr[11] = (0u | 127u);
    hot_regs.g31 = (0x088D73BCu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D73BCu) goto L_088D73BC;
    return;
L_088D73BC:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D73D4;
    }
}
L_088D73D4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26344)));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23668)));
    g5 = (g5 < g4 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(6));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088D7478;
      }
      goto L_088D73E8;
    }
}
L_088D73E8:
    hot_regs.g5 = (0u | 321u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23668), hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g4);
    ctx.gpr[17] = (0u | 30u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088D741Cu);
    hot_regs.g5 = (0u | 1400u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D741Cu) goto L_088D741C;
    return;
L_088D741C:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26328)));
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(20000));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), g18);
    g5 = (16928u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    f14 = std::bit_cast<float>(g4);
    g5 = (17608u << 16u);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f15 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), g18);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(g18));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(g18));
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    g5 = (ctx.hi);
    g5 = (g5 + static_cast<std::uint32_t>(70));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g5));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D7478;
    }
}
}
L_088D7478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D7480;
    }
L_088D7480:
    hot_regs.g4 = (0u | 266u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g4);
    hot_regs.g4 = (0u | 48u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088D74A0u);
    hot_regs.g5 = (0u | 6000u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D74A0u) goto L_088D74A0;
    return;
L_088D74A0:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(26336)));
    g4 = (0u | 20u);
    { const std::uint32_t dividend = g5; const std::uint32_t divisor = g4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(16000));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    g5 = (16928u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g5 = (17608u << 16u);
    hot_regs.f15 = std::bit_cast<float>(g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f15));
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    g5 = (ctx.hi);
    g5 = (g5 + static_cast<std::uint32_t>(55));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g5));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D74F4;
    }
}
}
L_088D74F4:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(6276)));
    ctx.set_fpu_condition((f14 < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = f14 - ctx.fpr[24];
    hot_regs.f14 = f14;
        goto L_088D7518;
    }
    goto L_088D7508;
}
L_088D7508:
{
    std::uint32_t g17 = ctx.gpr[17];
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f14));
    g17 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    g17 = (g17 >> 8u);
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_088D7528;
      }
      goto L_088D7518;
    }
}
L_088D7518:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g17 = ctx.gpr[17];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f12));
    g17 = (hot_regs.g4 + ctx.gpr[25]);
    g17 = (g17 >> 8u);
    ctx.gpr[17] = g17;
    hot_regs.f12 = f12;
    goto L_088D7528;
}
}
L_088D7528:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(-2));
    hot_regs.g5 = (hot_regs.g4 < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_088D755C;
      }
      goto L_088D7538;
    }
L_088D7538:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-17960)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088D7550:
    hot_regs.g4 = (0u | 234u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g4);
      if (branch_taken) {
          goto L_088D7560;
      }
      goto L_088D755C;
    }
L_088D755C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[24]);
    goto L_088D7560;
L_088D7560:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g31 = (0x088D7588u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7588u) goto L_088D7588;
    return;
L_088D7588:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[20] >> 4u);
    hot_regs.g31 = (0x088D759Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D759Cu) goto L_088D759C;
    return;
L_088D759C:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (ctx.gpr[20] + hot_regs.g2);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), g4);
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.g5 = (16880u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = g4;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088D75D8;
      }
      goto L_088D75CC;
    }
}
}
L_088D75CC:
    hot_regs.g5 = (0u | 1u);
    if (ctx.gpr[17] != hot_regs.g5) {
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26328)));
        goto L_088D75F4;
    }
    goto L_088D75D8;
L_088D75D8:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26324)));
    g5 = (0u | 10u);
    { const std::uint32_t dividend = hot_regs.g6; const std::uint32_t divisor = g5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g5 = (ctx.hi);
    g5 = (g5 + static_cast<std::uint32_t>(35));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g5));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088D7608;
      }
      goto L_088D75F4;
    }
}
L_088D75F4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 20u);
    { const std::uint32_t dividend = hot_regs.g6; const std::uint32_t divisor = g5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g5 = (ctx.hi);
    g5 = (g5 + static_cast<std::uint32_t>(70));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g5));
    hot_regs.g5 = g5;
    goto L_088D7608;
}
L_088D7608:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), g18);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(g18));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(g18));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D7624;
    }
}
L_088D7624:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088D7634u);
    hot_regs.g6 = (ctx.gpr[10] | 0u);
    goto L_088D789C;
L_088D7634:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = (g4 << 6u);
    g4 = (g4 << 3u);
    g8 = (hot_regs.g5 - g4);
    g8 = (ctx.gpr[16] + g8);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(6308)));
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D7650;
    }
}
L_088D7650:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) >= 0;
    hot_regs.g4 = (20352u << 16u);
      if (branch_taken) {
          goto L_088D7660;
      }
      goto L_088D7658;
    }
L_088D7658:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = hot_regs.f14 + hot_regs.f12;
    goto L_088D7660;
L_088D7660:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    f14 = f14 / f12;
    ctx.set_fpu_condition((f14 < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = f14 - ctx.fpr[24];
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
        goto L_088D7684;
    }
    goto L_088D7678;
}
L_088D7678:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f14));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_088D7694;
      }
      goto L_088D7684;
    }
L_088D7684:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (32768u << 16u);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (hot_regs.g5 + g4);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_088D7694;
}
}
L_088D7694:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), hot_regs.g4);
      if (branch_taken) {
          goto L_088D76B4;
      }
      goto L_088D769C;
    }
L_088D769C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    g4 = (static_cast<std::int32_t>(g4) < 61 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D76B4;
      }
      goto L_088D76AC;
    }
}
L_088D76AC:
    hot_regs.g4 = (0u | 21u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_088D76B4;
L_088D76B4:
{
    float f15 = hot_regs.f15;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((f15 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_088D77F8;
      }
      goto L_088D76D0;
    }
}
L_088D76D0:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g31 = (0x088D76E0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D76E0u) goto L_088D76E0;
    return;
L_088D76E0:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g31 = (0x088D76F4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D76F4u) goto L_088D76F4;
    return;
L_088D76F4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(hot_regs.g2));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_088D77F8;
      }
      goto L_088D7704;
    }
L_088D7704:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = g4 == 0u;
    g4 = (15948u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D7748;
      }
      goto L_088D7710;
    }
}
L_088D7710:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    g4 = (g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f14 < f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088D7740;
      }
      goto L_088D7734;
    }
}
}
L_088D7734:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[18]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D7748;
      }
      goto L_088D7740;
    }
L_088D7740:
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_088D7748;
L_088D7748:
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x088D7758u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7758u) goto L_088D7758;
    return;
L_088D7758:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088D77F8;
      }
      goto L_088D7764;
    }
L_088D7764:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(48)));
    g5 = (0u | 127u);
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(g5));
    g5 = (g4 << 6u);
    g4 = (g4 << 3u);
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    g4 = (g5 - g4);
    g6 = (g6 + static_cast<std::uint32_t>(1));
    g4 = (g16 + g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), g6);
    g4 = (g4 + hot_regs.g7);
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(6266)));
    g5 = (0u | 55u);
    if (g4 != g5) {
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
        goto L_088D77C8;
    }
    goto L_088D77A4;
}
L_088D77A4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g5 = (0u | 33u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    if (g4 != hot_regs.g5) {
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    hot_regs.g4 = g4;
        goto L_088D77C8;
    }
    goto L_088D77B8;
}
L_088D77B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D77EC;
      }
      goto L_088D77C8;
    }
}
L_088D77C8:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), g4);
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672)));
    g4 = (static_cast<std::int32_t>(g4) < 61 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D77EC;
      }
      goto L_088D77E4;
    }
}
L_088D77E4:
    hot_regs.g4 = (0u | 21u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_088D77EC;
L_088D77EC:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D77F8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D77F8u) goto L_088D77F8;
    return;
L_088D77F8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = (g4 << 6u);
    g4 = (g4 << 3u);
    g8 = (hot_regs.g5 - g4);
    g8 = (ctx.gpr[16] + g8);
    ctx.gpr[9] = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(6308)));
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
    goto L_088D7810;
}
L_088D7810:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (0u | 20000u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g4 = (g4 & 65535u);
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(g4));
    g4 = (17174u << 16u);
    hot_regs.g2 = (0u | 16500u);
    ctx.fpr[16] = std::bit_cast<float>(g4);
    ctx.gpr[3] = (0u | 18000u);
    ctx.gpr[12] = (0u | 189u);
    ctx.gpr[13] = (0u | 188u);
    ctx.gpr[14] = (0u | 187u);
    ctx.gpr[15] = (0u | 186u);
    ctx.gpr[24] = (0u | 209u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[25] = (32768u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D4C54;
      }
      goto L_088D7854;
    }
}
L_088D7854:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088D789C:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    ctx.gpr[20] = (g6 & 65535u);
    g6 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), hot_regs.g31);
    { const bool branch_taken = g6 != 0u;
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088D78E4;
      }
      goto L_088D78D0;
    }
}
L_088D78D0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088D78EC;
      }
      goto L_088D78DC;
    }
L_088D78DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7948;
      }
      goto L_088D78E4;
    }
L_088D78E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7B18;
      }
      goto L_088D78EC;
    }
L_088D78EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(1972)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D7940;
      }
      goto L_088D78FC;
    }
}
L_088D78FC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21540), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088D7910u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    goto L_088D7B3C;
L_088D7910:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    g4 = (g4 + static_cast<std::uint32_t>(6028));
    { const bool branch_taken = hot_regs.g2 == g4;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g2);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D7938;
      }
      goto L_088D7920;
    }
}
L_088D7920:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (17608u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    ctx.gpr[19] = (0u | 158u);
    g4 = (16928u << 16u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f20 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D79F4;
      }
      goto L_088D7938;
    }
}
L_088D7938:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7B18;
      }
      goto L_088D7940;
    }
L_088D7940:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7B18;
      }
      goto L_088D7948;
    }
L_088D7948:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21540), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 202 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 203 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D79B0;
      }
      goto L_088D795C;
    }
}
L_088D795C:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 201 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088D79A8;
      }
      goto L_088D7968;
    }
L_088D7968:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = (0u | 51u);
    g4 = (g4 & 3u);
    g4 = (g4 << 2u);
    g4 = (ctx.gpr[16] + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(26320)));
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = hot_regs.g5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (17608u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    ctx.gpr[19] = (0u | 158u);
    g4 = (16928u << 16u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    g4 = (ctx.hi);
    g4 = (g4 + static_cast<std::uint32_t>(2601));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D79F4;
      }
      goto L_088D79A8;
    }
}
L_088D79A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7B18;
      }
      goto L_088D79B0;
    }
L_088D79B0:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088D79A8;
      }
      goto L_088D79B8;
    }
L_088D79B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = (0u | 34u);
    g4 = (g4 & 3u);
    g4 = (g4 << 2u);
    g4 = (ctx.gpr[16] + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(26320)));
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = hot_regs.g5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (17608u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    ctx.gpr[19] = (0u | 158u);
    g4 = (16928u << 16u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    g4 = (ctx.hi);
    g4 = (g4 + static_cast<std::uint32_t>(1574));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), g4);
    hot_regs.g4 = g4;
    goto L_088D79F4;
}
L_088D79F4:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D7A10;
      }
      goto L_088D7A08;
    }
L_088D7A08:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088D7B18;
      }
      goto L_088D7A10;
    }
L_088D7A10:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088D7A20u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7A20u) goto L_088D7A20;
    return;
L_088D7A20:
    hot_regs.g4 = (2236u << 16u);
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x088D7A5Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7A5Cu) goto L_088D7A5C;
    return;
L_088D7A5C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7A6C;
      }
      goto L_088D7A64;
    }
L_088D7A64:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 127u);
      if (branch_taken) {
          goto L_088D7A70;
      }
      goto L_088D7A6C;
    }
L_088D7A6C:
    hot_regs.g4 = (0u | 31u);
    goto L_088D7A70;
L_088D7A70:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g31 = (0x088D7A84u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7A84u) goto L_088D7A84;
    return;
L_088D7A84:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(hot_regs.g2));
    hot_regs.g4 = (0u | 10u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[19];
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_088D7AB4;
      }
      goto L_088D7A94;
    }
L_088D7A94:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(g4));
    g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = g4;
    goto L_088D7AB4;
}
L_088D7AB4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_088D7B18;
      }
      goto L_088D7AC0;
    }
L_088D7AC0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g4);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), g20);
    g4 = (static_cast<std::int32_t>(g20) < 103 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (static_cast<std::int32_t>(g20) < 106 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D7B08;
      }
      goto L_088D7AF4;
    }
}
L_088D7AF4:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7B08;
      }
      goto L_088D7AFC;
    }
L_088D7AFC:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_088D7B0C;
      }
      goto L_088D7B08;
    }
L_088D7B08:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    goto L_088D7B0C;
L_088D7B0C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(21552));
    hot_regs.g31 = (0x088D7B18u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 364u, 0x088C5CF4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7B18u) goto L_088D7B18;
    return;
L_088D7B18:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088D7B3C:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (g6 & 65535u);
    g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    hot_regs.g7 = (0u | 45u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = g6 != hot_regs.g7;
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088D7B94;
      }
      goto L_088D7B68;
    }
}
L_088D7B68:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 103 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    g4 = (static_cast<std::int32_t>(g4) < 106 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D7B88;
      }
      goto L_088D7B78;
    }
}
L_088D7B78:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7B88;
      }
      goto L_088D7B80;
    }
L_088D7B80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7B94;
      }
      goto L_088D7B88;
    }
L_088D7B88:
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g2 + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7B94;
    }
L_088D7B94:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1732)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088D7BB8;
      }
      goto L_088D7BA4;
    }
L_088D7BA4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1732)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (hot_regs.g5 < g4 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D7BE4;
      }
      goto L_088D7BB8;
    }
}
L_088D7BB8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 103 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    g4 = (static_cast<std::int32_t>(g4) < 106 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D7BD8;
      }
      goto L_088D7BC8;
    }
}
L_088D7BC8:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7BD8;
      }
      goto L_088D7BD0;
    }
L_088D7BD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7BE4;
      }
      goto L_088D7BD8;
    }
L_088D7BD8:
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g2 + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7BE4;
    }
L_088D7BE4:
    hot_regs.g31 = (0x088D7BECu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7BECu) goto L_088D7BEC;
    return;
L_088D7BEC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7C0C;
      }
      goto L_088D7BF4;
    }
L_088D7BF4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D7C04u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 25u, 0x088D8114u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7C04u) goto L_088D7C04;
    return;
L_088D7C04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7C0C;
    }
L_088D7C0C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2280)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088D7C38;
      }
      goto L_088D7C1C;
    }
L_088D7C1C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2280)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7C38;
      }
      goto L_088D7C28;
    }
L_088D7C28:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2276)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088D7C78;
      }
      goto L_088D7C38;
    }
L_088D7C38:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D7C48u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 572u, 0x0885E4C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7C48u) goto L_088D7C48;
    return;
L_088D7C48:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    g4 = (g4 + static_cast<std::uint32_t>(6028));
    { const bool branch_taken = hot_regs.g2 != g4;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D7C70;
      }
      goto L_088D7C58;
    }
}
L_088D7C58:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    g5 = (static_cast<std::int32_t>(g4) < 95 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    g5 = (static_cast<std::int32_t>(g4) < 13 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088D7C90;
      }
      goto L_088D7C68;
    }
}
L_088D7C68:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 97 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D7CF0;
      }
      goto L_088D7C70;
    }
L_088D7C70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7C78;
    }
L_088D7C78:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D7C88u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 223u, 0x088C9358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7C88u) goto L_088D7C88;
    return;
L_088D7C88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7C90;
    }
L_088D7C90:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g5 = (0u | 76u);
      if (branch_taken) {
          goto L_088D7CD0;
      }
      goto L_088D7C98;
    }
L_088D7C98:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_088D7CB8;
      }
      goto L_088D7CA0;
    }
L_088D7CA0:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-17920)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088D7CB8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D7CC8u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7CC8u) goto L_088D7CC8;
    return;
L_088D7CC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7CD0;
    }
L_088D7CD0:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088D7CB8;
      }
      goto L_088D7CD8;
    }
L_088D7CD8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D7CE8u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7CE8u) goto L_088D7CE8;
    return;
L_088D7CE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7CF0;
    }
L_088D7CF0:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 125 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D7D1C;
      }
      goto L_088D7CF8;
    }
L_088D7CF8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(g4) < 96 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088D7D5C;
      }
      goto L_088D7D04;
    }
}
L_088D7D04:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D7D14u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 207u, 0x08858C88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7D14u) goto L_088D7D14;
    return;
L_088D7D14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7D1C;
    }
L_088D7D1C:
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 153 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D7CB8;
      }
      goto L_088D7D24;
    }
L_088D7D24:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-125));
      if (branch_taken) {
          goto L_088D7CB8;
      }
      goto L_088D7D2C;
    }
L_088D7D2C:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-17864)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088D7D44:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D7D54u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 25u, 0x088D8114u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7D54u) goto L_088D7D54;
    return;
L_088D7D54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7D5C;
    }
L_088D7D5C:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D7D6Cu);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 222u, 0x08858D64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7D6Cu) goto L_088D7D6C;
    return;
L_088D7D6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7D74;
    }
L_088D7D74:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D7D84u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 297u, 0x088591B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7D84u) goto L_088D7D84;
    return;
L_088D7D84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7D8C;
    }
L_088D7D8C:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D7D9Cu);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 312u, 0x0885928Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7D9Cu) goto L_088D7D9C;
    return;
L_088D7D9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7DA4;
    }
L_088D7DA4:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D7DB4u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 838u, 0x08857520u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7DB4u) goto L_088D7DB4;
    return;
L_088D7DB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7DBC;
    }
L_088D7DBC:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D7DCCu);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 30u, 0x088541C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7DCCu) goto L_088D7DCC;
    return;
L_088D7DCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7DD4;
    }
L_088D7DD4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = (0u | 5u);
    { const std::int32_t dividend = static_cast<std::int32_t>(g4); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g16 = (ctx.hi);
    g4 = (g16 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_088D7E8C;
      }
      goto L_088D7DF0;
    }
}
L_088D7DF0:
{
    std::uint32_t g1 = ctx.gpr[1];
    g1 = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == g1;
    g1 = (0u + static_cast<std::uint32_t>(2));
    ctx.gpr[1] = g1;
      if (branch_taken) {
          goto L_088D7E2C;
      }
      goto L_088D7DFC;
    }
}
L_088D7DFC:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088D7E44;
      }
      goto L_088D7E04;
    }
L_088D7E04:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D7E5C;
      }
      goto L_088D7E0C;
    }
L_088D7E0C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088D7E74;
      }
      goto L_088D7E14;
    }
L_088D7E14:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D7E24u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 729u, 0x08852DE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7E24u) goto L_088D7E24;
    return;
L_088D7E24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7E2C;
    }
L_088D7E2C:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D7E3Cu);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 748u, 0x08852F24u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7E3Cu) goto L_088D7E3C;
    return;
L_088D7E3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7E44;
    }
L_088D7E44:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D7E54u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 767u, 0x08853064u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7E54u) goto L_088D7E54;
    return;
L_088D7E54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7E5C;
    }
L_088D7E5C:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D7E6Cu);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 786u, 0x088531A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7E6Cu) goto L_088D7E6C;
    return;
L_088D7E6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7E74;
    }
L_088D7E74:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D7E84u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 805u, 0x088532E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7E84u) goto L_088D7E84;
    return;
L_088D7E84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7E8C;
    }
L_088D7E8C:
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g2 + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7E98;
    }
L_088D7E98:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(48)));
    if (static_cast<std::int32_t>(g16) >= 0) {
    g16 = (g16 & 1u);
    ctx.gpr[16] = g16;
        goto L_088D7EB0;
    }
    goto L_088D7EA4;
}
L_088D7EA4:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 & 1u);
    { const bool branch_taken = 0u == 0u;
    g16 = (0u - g16);
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_088D7EB0;
      }
      goto L_088D7EB0;
    }
}
L_088D7EB0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D7ECC;
      }
      goto L_088D7EB8;
    }
L_088D7EB8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088D7EEC;
      }
      goto L_088D7EC0;
    }
L_088D7EC0:
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g2 + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7ECC;
    }
L_088D7ECC:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7EC0;
      }
      goto L_088D7ED4;
    }
L_088D7ED4:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D7EE4u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 369u, 0x088595D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7EE4u) goto L_088D7EE4;
    return;
L_088D7EE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7EEC;
    }
L_088D7EEC:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D7EFCu);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 357u, 0x08859520u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7EFCu) goto L_088D7EFC;
    return;
L_088D7EFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7F04;
    }
L_088D7F04:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(48)));
    if (static_cast<std::int32_t>(g16) >= 0) {
    g16 = (g16 & 1u);
    ctx.gpr[16] = g16;
        goto L_088D7F1C;
    }
    goto L_088D7F10;
}
L_088D7F10:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 & 1u);
    { const bool branch_taken = 0u == 0u;
    g16 = (0u - g16);
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_088D7F1C;
      }
      goto L_088D7F1C;
    }
}
L_088D7F1C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D7F38;
      }
      goto L_088D7F24;
    }
L_088D7F24:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088D7F58;
      }
      goto L_088D7F2C;
    }
L_088D7F2C:
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g2 + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7F38;
    }
L_088D7F38:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7F2C;
      }
      goto L_088D7F40;
    }
L_088D7F40:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D7F50u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 37u, 0x08858218u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7F50u) goto L_088D7F50;
    return;
L_088D7F50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7F58;
    }
L_088D7F58:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D7F68u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 24u, 0x08858154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7F68u) goto L_088D7F68;
    return;
L_088D7F68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7F70;
    }
L_088D7F70:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(48)));
    if (static_cast<std::int32_t>(g16) >= 0) {
    g16 = (g16 & 1u);
    ctx.gpr[16] = g16;
        goto L_088D7F88;
    }
    goto L_088D7F7C;
}
L_088D7F7C:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 & 1u);
    { const bool branch_taken = 0u == 0u;
    g16 = (0u - g16);
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_088D7F88;
      }
      goto L_088D7F88;
    }
}
L_088D7F88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D7FA4;
      }
      goto L_088D7F90;
    }
L_088D7F90:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088D7FC4;
      }
      goto L_088D7F98;
    }
L_088D7F98:
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g2 + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7FA4;
    }
L_088D7FA4:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7F98;
      }
      goto L_088D7FAC;
    }
L_088D7FAC:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D7FBCu);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 490u, 0x08855F14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7FBCu) goto L_088D7FBC;
    return;
L_088D7FBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7FC4;
    }
L_088D7FC4:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088D7FD4u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 475u, 0x08855E38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088D7FD4u) goto L_088D7FD4;
    return;
L_088D7FD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7FDC;
    }
L_088D7FDC:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(48)));
    if (static_cast<std::int32_t>(g16) >= 0) {
    g16 = (g16 & 1u);
    ctx.gpr[16] = g16;
        goto L_088D7FF4;
    }
    goto L_088D7FE8;
}
L_088D7FE8:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 & 1u);
    { const bool branch_taken = 0u == 0u;
    g16 = (0u - g16);
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_088D7FF4;
      }
      goto L_088D7FF4;
    }
}
L_088D7FF4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 2u, 0x088D8010u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088D7FFC;
    }
L_088D7FFC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 5u, 0x088D8030u>(ctx, &aot_mem, &hot_regs); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 1u, 0x088D8004u>(ctx, &aot_mem, &hot_regs); return;
    }
}

void recomp_unit_0052(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0052_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_52(Runtime &runtime) {
    runtime.register_generated_unit(52u, 0x088D4000u, 16384u, &recomp_unit_0052, &recomp_unit_0052_entry);
    runtime.register_function(0x088D4000u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4004u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4030u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4048u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4058u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4078u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D408Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4094u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D40B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D40C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D40DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D40F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D40F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4108u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4128u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D413Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4144u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4160u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4174u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4180u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4188u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4198u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D41B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D41CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D41D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D41E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4200u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4214u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D421Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4234u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4248u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4264u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4284u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4294u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D42A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D42B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D42BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D42C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D42CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D42F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4324u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4344u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4348u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4374u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4390u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D439Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D43B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D43BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D43D0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D43E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D43F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4404u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4410u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4420u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4434u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4448u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4464u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4478u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D448Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D44A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D44C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D44E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D44F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4504u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4568u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D45ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D45F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4634u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4678u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D46BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4700u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4744u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4788u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D47CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4810u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4850u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4860u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D486Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D487Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4888u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4898u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D48ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D48C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D48DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D48E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D48E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4934u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D493Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4948u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4954u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4964u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D496Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4980u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D498Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A00u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A0Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A18u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A58u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A80u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A9Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4AA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4AB0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4AF0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C54u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4CA0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4CB8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4CD4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4CDCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D44u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D54u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4DACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E28u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E34u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E4Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E54u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E68u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E88u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EA0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EB4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EDCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EF0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EF8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F00u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F08u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F50u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F68u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F7Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F90u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4FE0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5000u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5060u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D50E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5114u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5168u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5180u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D520Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D521Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D522Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D523Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D528Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D529Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D531Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5334u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D533Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5368u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5378u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5390u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5408u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5450u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5468u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5470u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5488u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D54B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D54C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D54E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D54F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5508u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5528u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D553Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5544u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5560u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5570u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D558Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D55A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D55A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D55B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D55D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D55ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D55F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5610u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5624u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5630u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5638u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5648u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5668u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D567Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5684u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D56A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D56C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D56D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D56E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D56FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5718u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5734u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5760u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D576Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5774u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D577Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D57A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D57CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D57E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5814u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5828u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5834u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5844u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5854u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D586Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5874u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D587Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5888u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5894u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D58A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D58A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D58D0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D58E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D58FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5910u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5924u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5938u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D594Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5958u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5964u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5970u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D59C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D59ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A00u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A58u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A8Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A94u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5AA8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5AC0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5AF0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B04u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B50u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B88u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B9Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5BF4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5C24u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5C38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5C90u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5CB8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5D24u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5D54u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5D68u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5DACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5DE4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5DF8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5E4Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5E7Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5ECCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5F04u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5F58u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5F8Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5FA0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5FF4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D602Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6080u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D60B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D60CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6120u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6154u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6168u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6178u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6184u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D61DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6210u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6224u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D627Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D62B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D62C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D631Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6324u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D633Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6348u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6358u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6368u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6380u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D63ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D63BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D63C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D63D0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D641Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6448u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6474u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D64A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D64ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D64DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D64E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D64F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D651Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6530u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D658Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6594u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D659Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D65B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D65C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D65CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D65D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D65F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6600u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D661Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6624u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D663Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6648u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6658u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6664u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6690u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D66B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6710u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6718u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6720u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D673Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6748u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6750u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D675Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6778u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6784u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6790u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D67ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6824u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D682Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6834u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6850u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D686Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6888u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6894u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D689Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68D0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6974u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6988u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6994u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D69A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D69B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D69C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D69DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D69E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D69F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A04u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A14u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A28u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A3Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A58u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A6Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A80u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6AB4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6AD4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6AE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6AF8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6B5Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6B6Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6B7Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6B8Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6B9Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6BACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6BBCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6BCCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6BDCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6BECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6BFCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6C0Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6C18u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6C28u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6C34u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6C40u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6C50u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6C70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6C84u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6C90u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6CFCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6D18u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6D30u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6D4Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6D64u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6D80u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6D98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6DB4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6DCCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6DE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6E00u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6E1Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6E34u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6E50u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6E68u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6E84u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6E9Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6EB8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6ED0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6EECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6F04u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6F20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6F38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6F54u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6F6Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6F88u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6FA0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6FBCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6FD4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6FF0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7008u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7024u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D703Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7068u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7080u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D70ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D70C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D70F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7108u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7134u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D714Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7178u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7190u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D71BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D71D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7200u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7218u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7244u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D725Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7288u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D72A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D72CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D72E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D72F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D731Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7334u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7340u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D736Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7384u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7390u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D73BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D73D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D73E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D741Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7478u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7480u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D74A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D74F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7508u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7518u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7528u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7538u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7550u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D755Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7560u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7588u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D759Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D75CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D75D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D75F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7608u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7624u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7634u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7650u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7658u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7660u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7678u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7684u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7694u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D769Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D76ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D76B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D76D0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D76E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D76F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7704u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7710u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7734u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7740u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7748u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7758u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7764u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D77A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D77B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D77C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D77E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D77ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D77F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7810u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7854u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D789Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D78D0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D78DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D78E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D78ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D78FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7910u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7920u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7938u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7940u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7948u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D795Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7968u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D79A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D79B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D79B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D79F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A08u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A10u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A5Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A64u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A6Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A84u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A94u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7AB4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7AC0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7AF4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7AFCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B08u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B0Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B18u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B3Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B68u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B78u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B80u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B88u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B94u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7BA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7BB8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7BC8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7BD0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7BD8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7BE4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7BECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7BF4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C04u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C0Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C1Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C28u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C58u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C68u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C78u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C88u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C90u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CA0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CB8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CC8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CD0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CD8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CF0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CF8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D04u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D14u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D1Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D24u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D2Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D44u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D54u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D5Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D6Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D74u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D84u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D8Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D9Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7DA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7DB4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7DBCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7DCCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7DD4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7DF0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7DFCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E04u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E0Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E14u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E24u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E2Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E3Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E44u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E54u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E5Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E6Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E74u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E84u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E8Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7EA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7EB0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7EB8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7EC0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7ECCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7ED4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7EE4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7EECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7EFCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F04u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F10u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F1Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F24u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F2Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F40u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F50u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F58u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F68u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F7Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F88u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F90u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7FA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7FACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7FBCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7FC4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7FD4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7FDCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7FE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7FF4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7FFCu, &recomp_unit_0052, "recomp_unit_0052");
}
} // namespace psprecomp
