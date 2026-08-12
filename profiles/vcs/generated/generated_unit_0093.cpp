#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0093[4095] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 6, 0,
    7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0,
    0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 19, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0,
    0, 21, 0, 22, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 34,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 37, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0,
    0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0,
    0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 63,
    0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0,
    0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0,
    0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0,
    0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    103, 0, 104, 0, 105, 0, 0, 0, 0, 0, 106, 107, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 114, 0, 0, 0, 0, 0, 115, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0,
    0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 130,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 136,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0,
    0, 0, 145, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0,
    0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0,
    160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 0,
    168, 0, 169, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 174, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 176, 0, 0, 0, 177, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0,
    181, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 186, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190,
    0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 215, 0, 216,
    0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 223, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 241, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 249, 0, 250, 0, 0,
    0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 259,
    0, 260, 0, 0, 0, 261, 0, 0, 262, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    0, 282, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 289, 290, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 301, 0, 302,
    0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307,
    0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 313, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 314, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 322, 0, 323, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330,
    0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 334, 335, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 342,
    0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 349, 0, 0, 0, 0,
    0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 362, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0,
    0, 371, 0, 372, 0, 0, 0, 373, 374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0,
    377, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 382, 0, 383, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 411, 0, 412, 413, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 417, 0, 0, 0,
    418, 0, 0, 0, 0, 419, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0,
    423, 0, 0, 0, 0, 0, 424, 0, 425, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 429, 430, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 0, 433, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 436, 0,
    437, 0, 438, 0, 439, 0, 440, 0, 0, 0, 0, 441, 442, 443, 0, 444, 445, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0,
    0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 449, 0, 450, 451, 0, 452, 0, 0, 0, 453, 0, 454, 455, 0, 456, 0, 0, 0, 0, 457, 0, 458, 459, 0, 460, 0, 0, 0, 461,
    0, 462, 463, 0, 464, 0, 0, 0, 0, 465, 0, 466, 467, 0, 468, 0, 0, 0, 469, 0, 470, 471, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473,
    0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 477, 0, 0, 478, 0, 0, 479, 0, 480, 0, 0,
    0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 483, 0, 0, 0, 484, 0, 0, 485, 0, 0, 0, 486, 0, 487, 0, 488, 489, 0, 0, 490, 0, 491,
    0, 492, 0, 493, 0, 0, 0, 494, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 498, 0, 499, 0, 0, 500, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 505, 506, 0, 507, 0, 0, 508, 0, 509, 0, 510,
    0, 0, 0, 0, 0, 511, 0, 512, 513, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0,
    0, 517, 0, 0, 0, 518, 0, 519, 0, 520, 0, 521, 0, 522, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 525, 0, 526, 527,
    0, 528, 0, 0, 529, 0, 0, 530, 0, 531, 0, 532, 0, 533, 0, 534, 535, 0, 536, 0, 0, 537, 0, 538, 539, 0, 540, 0, 0, 541, 0, 542,
    543, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 546, 0, 547, 548, 0, 549, 0, 550, 0, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 553, 554,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 0, 557, 0, 0, 558, 0, 559, 560, 0, 561, 0,
    562, 0, 0, 563, 0, 564, 565, 0, 566, 0, 567, 0, 568, 0, 0, 569, 0, 570, 571, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0,
    0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0,
    0, 580, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583,
    0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 586, 0, 587, 0, 0, 588, 0, 589, 590, 0, 0, 0, 0, 0, 0, 591, 0, 592, 593, 0,
    0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 596, 0, 597, 0, 598, 0, 599, 0, 0, 0, 0, 600, 0, 601, 602, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 604, 0, 605, 606, 0, 0, 0, 607, 0, 0, 608,
};
void recomp_unit_0093_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08978000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0093[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08978000;
    case 2u: goto L_08978014;
    case 3u: goto L_0897803C;
    case 4u: goto L_08978058;
    case 5u: goto L_08978064;
    case 6u: goto L_08978078;
    case 7u: goto L_08978080;
    case 8u: goto L_08978090;
    case 9u: goto L_089780B4;
    case 10u: goto L_089780BC;
    case 11u: goto L_089780DC;
    case 12u: goto L_089780E4;
    case 13u: goto L_08978104;
    case 14u: goto L_0897810C;
    case 15u: goto L_0897812C;
    case 16u: goto L_08978134;
    case 17u: goto L_08978154;
    case 18u: goto L_0897815C;
    case 19u: goto L_08978160;
    case 20u: goto L_089781F0;
    case 21u: goto L_08978204;
    case 22u: goto L_0897820C;
    case 23u: goto L_08978214;
    case 24u: goto L_08978228;
    case 25u: goto L_0897824C;
    case 26u: goto L_0897826C;
    case 27u: goto L_08978270;
    case 28u: goto L_089782A8;
    case 29u: goto L_089782BC;
    case 30u: goto L_08978348;
    case 31u: goto L_08978350;
    case 32u: goto L_08978358;
    case 33u: goto L_08978378;
    case 34u: goto L_0897837C;
    case 35u: goto L_089783A4;
    case 36u: goto L_089783AC;
    case 37u: goto L_0897840C;
    case 38u: goto L_08978410;
    case 39u: goto L_08978468;
    case 40u: goto L_0897847C;
    case 41u: goto L_08978490;
    case 42u: goto L_089784A4;
    case 43u: goto L_089784B8;
    case 44u: goto L_089784CC;
    case 45u: goto L_089784E8;
    case 46u: goto L_089784F8;
    case 47u: goto L_0897850C;
    case 48u: goto L_08978540;
    case 49u: goto L_089785A0;
    case 50u: goto L_089785AC;
    case 51u: goto L_08978604;
    case 52u: goto L_08978618;
    case 53u: goto L_0897862C;
    case 54u: goto L_08978640;
    case 55u: goto L_08978654;
    case 56u: goto L_08978668;
    case 57u: goto L_08978684;
    case 58u: goto L_08978694;
    case 59u: goto L_089786A8;
    case 60u: goto L_089786DC;
    case 61u: goto L_08978768;
    case 62u: goto L_08978774;
    case 63u: goto L_0897877C;
    case 64u: goto L_08978790;
    case 65u: goto L_0897879C;
    case 66u: goto L_089787B0;
    case 67u: goto L_089787D0;
    case 68u: goto L_089787E4;
    case 69u: goto L_089787F4;
    case 70u: goto L_08978808;
    case 71u: goto L_089788AC;
    case 72u: goto L_089788B4;
    case 73u: goto L_089788E8;
    case 74u: goto L_0897890C;
    case 75u: goto L_08978914;
    case 76u: goto L_08978948;
    case 77u: goto L_08978958;
    case 78u: goto L_08978988;
    case 79u: goto L_089789E4;
    case 80u: goto L_08978A3C;
    case 81u: goto L_08978A4C;
    case 82u: goto L_08978A68;
    case 83u: goto L_08978A98;
    case 84u: goto L_08978AA8;
    case 85u: goto L_08978AD4;
    case 86u: goto L_08978AE8;
    case 87u: goto L_08978B04;
    case 88u: goto L_08978B14;
    case 89u: goto L_08978B28;
    case 90u: goto L_08978B30;
    case 91u: goto L_08978B78;
    case 92u: goto L_08978BB8;
    case 93u: goto L_08978BD8;
    case 94u: goto L_08978BF4;
    case 95u: goto L_08978C0C;
    case 96u: goto L_08978C2C;
    case 97u: goto L_08978C48;
    case 98u: goto L_08978C50;
    case 99u: goto L_08978D08;
    case 100u: goto L_08978D20;
    case 101u: goto L_08978D30;
    case 102u: goto L_08978D60;
    case 103u: goto L_08978D80;
    case 104u: goto L_08978D88;
    case 105u: goto L_08978D90;
    case 106u: goto L_08978DA8;
    case 107u: goto L_08978DAC;
    case 108u: goto L_08978DB4;
    case 109u: goto L_08978DCC;
    case 110u: goto L_08978DDC;
    case 111u: goto L_08978E0C;
    case 112u: goto L_08978E2C;
    case 113u: goto L_08978E34;
    case 114u: goto L_08978E3C;
    case 115u: goto L_08978E54;
    case 116u: goto L_08978E58;
    case 117u: goto L_08978E60;
    case 118u: goto L_08978EC8;
    case 119u: goto L_08978ECC;
    case 120u: goto L_08978EEC;
    case 121u: goto L_08978F0C;
    case 122u: goto L_08978F18;
    case 123u: goto L_08978F4C;
    case 124u: goto L_08978F54;
    case 125u: goto L_08978F98;
    case 126u: goto L_08978FA4;
    case 127u: goto L_08978FB8;
    case 128u: goto L_08978FDC;
    case 129u: goto L_08978FE8;
    case 130u: goto L_08978FFC;
    case 131u: goto L_08979020;
    case 132u: goto L_0897902C;
    case 133u: goto L_0897903C;
    case 134u: goto L_08979060;
    case 135u: goto L_0897906C;
    case 136u: goto L_0897907C;
    case 137u: goto L_089790B0;
    case 138u: goto L_08979120;
    case 139u: goto L_08979140;
    case 140u: goto L_08979168;
    case 141u: goto L_089791A0;
    case 142u: goto L_089791C8;
    case 143u: goto L_089791E8;
    case 144u: goto L_089791F4;
    case 145u: goto L_08979208;
    case 146u: goto L_08979210;
    case 147u: goto L_08979220;
    case 148u: goto L_08979244;
    case 149u: goto L_0897924C;
    case 150u: goto L_0897926C;
    case 151u: goto L_08979274;
    case 152u: goto L_08979294;
    case 153u: goto L_0897929C;
    case 154u: goto L_089792BC;
    case 155u: goto L_089792C4;
    case 156u: goto L_089792E4;
    case 157u: goto L_089792EC;
    case 158u: goto L_089792F0;
    case 159u: goto L_0897936C;
    case 160u: goto L_08979380;
    case 161u: goto L_08979394;
    case 162u: goto L_089793A8;
    case 163u: goto L_089793B4;
    case 164u: goto L_089793C4;
    case 165u: goto L_089793D8;
    case 166u: goto L_089793E4;
    case 167u: goto L_089793F4;
    case 168u: goto L_08979400;
    case 169u: goto L_08979408;
    case 170u: goto L_08979410;
    case 171u: goto L_08979424;
    case 172u: goto L_08979448;
    case 173u: goto L_08979468;
    case 174u: goto L_0897946C;
    case 175u: goto L_089794A0;
    case 176u: goto L_0897950C;
    case 177u: goto L_0897951C;
    case 178u: goto L_08979520;
    case 179u: goto L_08979564;
    case 180u: goto L_08979570;
    case 181u: goto L_08979580;
    case 182u: goto L_08979588;
    case 183u: goto L_089795A0;
    case 184u: goto L_089795BC;
    case 185u: goto L_08979610;
    case 186u: goto L_08979620;
    case 187u: goto L_08979624;
    case 188u: goto L_08979664;
    case 189u: goto L_08979670;
    case 190u: goto L_0897967C;
    case 191u: goto L_08979684;
    case 192u: goto L_0897969C;
    case 193u: goto L_089796B4;
    case 194u: goto L_089796C8;
    case 195u: goto L_089796D0;
    case 196u: goto L_089796E8;
    case 197u: goto L_089796F0;
    case 198u: goto L_08979718;
    case 199u: goto L_08979720;
    case 200u: goto L_0897974C;
    case 201u: goto L_08979760;
    case 202u: goto L_08979768;
    case 203u: goto L_0897979C;
    case 204u: goto L_089797A4;
    case 205u: goto L_089797AC;
    case 206u: goto L_089797B4;
    case 207u: goto L_089797BC;
    case 208u: goto L_089797E4;
    case 209u: goto L_089797EC;
    case 210u: goto L_08979818;
    case 211u: goto L_0897982C;
    case 212u: goto L_08979834;
    case 213u: goto L_08979868;
    case 214u: goto L_08979870;
    case 215u: goto L_08979874;
    case 216u: goto L_0897987C;
    case 217u: goto L_08979894;
    case 218u: goto L_089798A8;
    case 219u: goto L_089798CC;
    case 220u: goto L_08979934;
    case 221u: goto L_08979940;
    case 222u: goto L_08979958;
    case 223u: goto L_08979994;
    case 224u: goto L_08979998;
    case 225u: goto L_089799D0;
    case 226u: goto L_089799E0;
    case 227u: goto L_089799F0;
    case 228u: goto L_08979A2C;
    case 229u: goto L_08979A54;
    case 230u: goto L_08979AB0;
    case 231u: goto L_08979ADC;
    case 232u: goto L_08979AEC;
    case 233u: goto L_08979B34;
    case 234u: goto L_08979B38;
    case 235u: goto L_08979B98;
    case 236u: goto L_08979BD8;
    case 237u: goto L_08979BE0;
    case 238u: goto L_08979C5C;
    case 239u: goto L_08979CD8;
    case 240u: goto L_08979CE0;
    case 241u: goto L_08979CE8;
    case 242u: goto L_08979D38;
    case 243u: goto L_08979D8C;
    case 244u: goto L_08979DA0;
    case 245u: goto L_08979DB4;
    case 246u: goto L_08979DBC;
    case 247u: goto L_08979DD0;
    case 248u: goto L_08979DD8;
    case 249u: goto L_08979DEC;
    case 250u: goto L_08979DF4;
    case 251u: goto L_08979E04;
    case 252u: goto L_08979E10;
    case 253u: goto L_08979E18;
    case 254u: goto L_08979E30;
    case 255u: goto L_08979E44;
    case 256u: goto L_08979E4C;
    case 257u: goto L_08979E60;
    case 258u: goto L_08979E68;
    case 259u: goto L_08979E7C;
    case 260u: goto L_08979E84;
    case 261u: goto L_08979E94;
    case 262u: goto L_08979EA0;
    case 263u: goto L_08979EA4;
    case 264u: goto L_08979EC4;
    case 265u: goto L_08979ED4;
    case 266u: goto L_08979EE0;
    case 267u: goto L_08979F28;
    case 268u: goto L_08979FC8;
    case 269u: goto L_08979FE8;
    case 270u: goto L_0897A018;
    case 271u: goto L_0897A04C;
    case 272u: goto L_0897A078;
    case 273u: goto L_0897A0AC;
    case 274u: goto L_0897A0BC;
    case 275u: goto L_0897A0D4;
    case 276u: goto L_0897A0E8;
    case 277u: goto L_0897A108;
    case 278u: goto L_0897A12C;
    case 279u: goto L_0897A134;
    case 280u: goto L_0897A158;
    case 281u: goto L_0897A160;
    case 282u: goto L_0897A184;
    case 283u: goto L_0897A18C;
    case 284u: goto L_0897A1B0;
    case 285u: goto L_0897A1B8;
    case 286u: goto L_0897A238;
    case 287u: goto L_0897A244;
    case 288u: goto L_0897A258;
    case 289u: goto L_0897A268;
    case 290u: goto L_0897A26C;
    case 291u: goto L_0897A280;
    case 292u: goto L_0897A294;
    case 293u: goto L_0897A29C;
    case 294u: goto L_0897A2AC;
    case 295u: goto L_0897A2CC;
    case 296u: goto L_0897A304;
    case 297u: goto L_0897A328;
    case 298u: goto L_0897A330;
    case 299u: goto L_0897A354;
    case 300u: goto L_0897A35C;
    case 301u: goto L_0897A374;
    case 302u: goto L_0897A37C;
    case 303u: goto L_0897A394;
    case 304u: goto L_0897A39C;
    case 305u: goto L_0897A3AC;
    case 306u: goto L_0897A3C8;
    case 307u: goto L_0897A3FC;
    case 308u: goto L_0897A408;
    case 309u: goto L_0897A414;
    case 310u: goto L_0897A434;
    case 311u: goto L_0897A438;
    case 312u: goto L_0897A45C;
    case 313u: goto L_0897A460;
    case 314u: goto L_0897A498;
    case 315u: goto L_0897A49C;
    case 316u: goto L_0897A4CC;
    case 317u: goto L_0897A4E0;
    case 318u: goto L_0897A518;
    case 319u: goto L_0897A538;
    case 320u: goto L_0897A59C;
    case 321u: goto L_0897A5AC;
    case 322u: goto L_0897A5B4;
    case 323u: goto L_0897A5BC;
    case 324u: goto L_0897A5C0;
    case 325u: goto L_0897A5E0;
    case 326u: goto L_0897A5FC;
    case 327u: goto L_0897A644;
    case 328u: goto L_0897A6C8;
    case 329u: goto L_0897A6F4;
    case 330u: goto L_0897A6FC;
    case 331u: goto L_0897A704;
    case 332u: goto L_0897A718;
    case 333u: goto L_0897A734;
    case 334u: goto L_0897A73C;
    case 335u: goto L_0897A740;
    case 336u: goto L_0897A748;
    case 337u: goto L_0897A788;
    case 338u: goto L_0897A790;
    case 339u: goto L_0897A7CC;
    case 340u: goto L_0897A7D0;
    case 341u: goto L_0897A7F0;
    case 342u: goto L_0897A7FC;
    case 343u: goto L_0897A808;
    case 344u: goto L_0897A830;
    case 345u: goto L_0897A838;
    case 346u: goto L_0897A840;
    case 347u: goto L_0897A84C;
    case 348u: goto L_0897A868;
    case 349u: goto L_0897A86C;
    case 350u: goto L_0897A888;
    case 351u: goto L_0897A8AC;
    case 352u: goto L_0897A8B4;
    case 353u: goto L_0897A954;
    case 354u: goto L_0897A980;
    case 355u: goto L_0897A9C0;
    case 356u: goto L_0897A9E4;
    case 357u: goto L_0897A9EC;
    case 358u: goto L_0897AAA0;
    case 359u: goto L_0897AAB8;
    case 360u: goto L_0897AAC0;
    case 361u: goto L_0897AAD8;
    case 362u: goto L_0897AB04;
    case 363u: goto L_0897AB1C;
    case 364u: goto L_0897AB24;
    case 365u: goto L_0897AB3C;
    case 366u: goto L_0897AB54;
    case 367u: goto L_0897AB70;
    case 368u: goto L_0897ABA0;
    case 369u: goto L_0897ABEC;
    case 370u: goto L_0897AC74;
    case 371u: goto L_0897AC84;
    case 372u: goto L_0897AC8C;
    case 373u: goto L_0897AC9C;
    case 374u: goto L_0897ACA0;
    case 375u: goto L_0897ACC4;
    case 376u: goto L_0897ACF0;
    case 377u: goto L_0897AD00;
    case 378u: goto L_0897AD04;
    case 379u: goto L_0897AD4C;
    case 380u: goto L_0897ADC8;
    case 381u: goto L_0897ADDC;
    case 382u: goto L_0897ADE4;
    case 383u: goto L_0897ADEC;
    case 384u: goto L_0897AE30;
    case 385u: goto L_0897AE50;
    case 386u: goto L_0897AE5C;
    case 387u: goto L_0897AE68;
    case 388u: goto L_0897AE98;
    case 389u: goto L_0897AEA0;
    case 390u: goto L_0897AEA8;
    case 391u: goto L_0897AEB4;
    case 392u: goto L_0897AED0;
    case 393u: goto L_0897AED4;
    case 394u: goto L_0897AF8C;
    case 395u: goto L_0897AFB0;
    case 396u: goto L_0897AFC0;
    case 397u: goto L_0897B000;
    case 398u: goto L_0897B048;
    case 399u: goto L_0897B06C;
    case 400u: goto L_0897B110;
    case 401u: goto L_0897B120;
    case 402u: goto L_0897B130;
    case 403u: goto L_0897B140;
    case 404u: goto L_0897B150;
    case 405u: goto L_0897B158;
    case 406u: goto L_0897B2B8;
    case 407u: goto L_0897B2D0;
    case 408u: goto L_0897B2D8;
    case 409u: goto L_0897B2E0;
    case 410u: goto L_0897B328;
    case 411u: goto L_0897B330;
    case 412u: goto L_0897B338;
    case 413u: goto L_0897B33C;
    case 414u: goto L_0897B344;
    case 415u: goto L_0897B358;
    case 416u: goto L_0897B368;
    case 417u: goto L_0897B370;
    case 418u: goto L_0897B380;
    case 419u: goto L_0897B394;
    case 420u: goto L_0897B398;
    case 421u: goto L_0897B3D4;
    case 422u: goto L_0897B3E4;
    case 423u: goto L_0897B400;
    case 424u: goto L_0897B418;
    case 425u: goto L_0897B420;
    case 426u: goto L_0897B42C;
    case 427u: goto L_0897B43C;
    case 428u: goto L_0897B44C;
    case 429u: goto L_0897B45C;
    case 430u: goto L_0897B460;
    case 431u: goto L_0897B4A8;
    case 432u: goto L_0897B4B0;
    case 433u: goto L_0897B4BC;
    case 434u: goto L_0897B4CC;
    case 435u: goto L_0897B4D8;
    case 436u: goto L_0897B4F8;
    case 437u: goto L_0897B500;
    case 438u: goto L_0897B508;
    case 439u: goto L_0897B510;
    case 440u: goto L_0897B518;
    case 441u: goto L_0897B52C;
    case 442u: goto L_0897B530;
    case 443u: goto L_0897B534;
    case 444u: goto L_0897B53C;
    case 445u: goto L_0897B540;
    case 446u: goto L_0897B55C;
    case 447u: goto L_0897B574;
    case 448u: goto L_0897B58C;
    case 449u: goto L_0897B60C;
    case 450u: goto L_0897B614;
    case 451u: goto L_0897B618;
    case 452u: goto L_0897B620;
    case 453u: goto L_0897B630;
    case 454u: goto L_0897B638;
    case 455u: goto L_0897B63C;
    case 456u: goto L_0897B644;
    case 457u: goto L_0897B658;
    case 458u: goto L_0897B660;
    case 459u: goto L_0897B664;
    case 460u: goto L_0897B66C;
    case 461u: goto L_0897B67C;
    case 462u: goto L_0897B684;
    case 463u: goto L_0897B688;
    case 464u: goto L_0897B690;
    case 465u: goto L_0897B6A4;
    case 466u: goto L_0897B6AC;
    case 467u: goto L_0897B6B0;
    case 468u: goto L_0897B6B8;
    case 469u: goto L_0897B6C8;
    case 470u: goto L_0897B6D0;
    case 471u: goto L_0897B6D4;
    case 472u: goto L_0897B6DC;
    case 473u: goto L_0897B6FC;
    case 474u: goto L_0897B71C;
    case 475u: goto L_0897B734;
    case 476u: goto L_0897B748;
    case 477u: goto L_0897B754;
    case 478u: goto L_0897B760;
    case 479u: goto L_0897B76C;
    case 480u: goto L_0897B774;
    case 481u: goto L_0897B78C;
    case 482u: goto L_0897B79C;
    case 483u: goto L_0897B7A8;
    case 484u: goto L_0897B7B8;
    case 485u: goto L_0897B7C4;
    case 486u: goto L_0897B7D4;
    case 487u: goto L_0897B7DC;
    case 488u: goto L_0897B7E4;
    case 489u: goto L_0897B7E8;
    case 490u: goto L_0897B7F4;
    case 491u: goto L_0897B7FC;
    case 492u: goto L_0897B804;
    case 493u: goto L_0897B80C;
    case 494u: goto L_0897B81C;
    case 495u: goto L_0897B828;
    case 496u: goto L_0897B8A4;
    case 497u: goto L_0897B8B8;
    case 498u: goto L_0897B8C0;
    case 499u: goto L_0897B8C8;
    case 500u: goto L_0897B8D4;
    case 501u: goto L_0897B8DC;
    case 502u: goto L_0897B8EC;
    case 503u: goto L_0897B940;
    case 504u: goto L_0897B94C;
    case 505u: goto L_0897B954;
    case 506u: goto L_0897B958;
    case 507u: goto L_0897B960;
    case 508u: goto L_0897B96C;
    case 509u: goto L_0897B974;
    case 510u: goto L_0897B97C;
    case 511u: goto L_0897B994;
    case 512u: goto L_0897B99C;
    case 513u: goto L_0897B9A0;
    case 514u: goto L_0897B9B4;
    case 515u: goto L_0897B9C0;
    case 516u: goto L_0897B9E8;
    case 517u: goto L_0897BA04;
    case 518u: goto L_0897BA14;
    case 519u: goto L_0897BA1C;
    case 520u: goto L_0897BA24;
    case 521u: goto L_0897BA2C;
    case 522u: goto L_0897BA34;
    case 523u: goto L_0897BA38;
    case 524u: goto L_0897BA64;
    case 525u: goto L_0897BA70;
    case 526u: goto L_0897BA78;
    case 527u: goto L_0897BA7C;
    case 528u: goto L_0897BA84;
    case 529u: goto L_0897BA90;
    case 530u: goto L_0897BA9C;
    case 531u: goto L_0897BAA4;
    case 532u: goto L_0897BAAC;
    case 533u: goto L_0897BAB4;
    case 534u: goto L_0897BABC;
    case 535u: goto L_0897BAC0;
    case 536u: goto L_0897BAC8;
    case 537u: goto L_0897BAD4;
    case 538u: goto L_0897BADC;
    case 539u: goto L_0897BAE0;
    case 540u: goto L_0897BAE8;
    case 541u: goto L_0897BAF4;
    case 542u: goto L_0897BAFC;
    case 543u: goto L_0897BB00;
    case 544u: goto L_0897BB08;
    case 545u: goto L_0897BB20;
    case 546u: goto L_0897BB2C;
    case 547u: goto L_0897BB34;
    case 548u: goto L_0897BB38;
    case 549u: goto L_0897BB40;
    case 550u: goto L_0897BB48;
    case 551u: goto L_0897BB54;
    case 552u: goto L_0897BB70;
    case 553u: goto L_0897BB78;
    case 554u: goto L_0897BB7C;
    case 555u: goto L_0897BBBC;
    case 556u: goto L_0897BBC4;
    case 557u: goto L_0897BBD8;
    case 558u: goto L_0897BBE4;
    case 559u: goto L_0897BBEC;
    case 560u: goto L_0897BBF0;
    case 561u: goto L_0897BBF8;
    case 562u: goto L_0897BC00;
    case 563u: goto L_0897BC0C;
    case 564u: goto L_0897BC14;
    case 565u: goto L_0897BC18;
    case 566u: goto L_0897BC20;
    case 567u: goto L_0897BC28;
    case 568u: goto L_0897BC30;
    case 569u: goto L_0897BC3C;
    case 570u: goto L_0897BC44;
    case 571u: goto L_0897BC48;
    case 572u: goto L_0897BC50;
    case 573u: goto L_0897BC88;
    case 574u: goto L_0897BCC0;
    case 575u: goto L_0897BCC8;
    case 576u: goto L_0897BD54;
    case 577u: goto L_0897BD74;
    case 578u: goto L_0897BD84;
    case 579u: goto L_0897BDE8;
    case 580u: goto L_0897BE04;
    case 581u: goto L_0897BE14;
    case 582u: goto L_0897BE30;
    case 583u: goto L_0897BE7C;
    case 584u: goto L_0897BE84;
    case 585u: goto L_0897BEA8;
    case 586u: goto L_0897BEB0;
    case 587u: goto L_0897BEB8;
    case 588u: goto L_0897BEC4;
    case 589u: goto L_0897BECC;
    case 590u: goto L_0897BED0;
    case 591u: goto L_0897BEEC;
    case 592u: goto L_0897BEF4;
    case 593u: goto L_0897BEF8;
    case 594u: goto L_0897BF0C;
    case 595u: goto L_0897BF1C;
    case 596u: goto L_0897BF28;
    case 597u: goto L_0897BF30;
    case 598u: goto L_0897BF38;
    case 599u: goto L_0897BF40;
    case 600u: goto L_0897BF54;
    case 601u: goto L_0897BF5C;
    case 602u: goto L_0897BF60;
    case 603u: goto L_0897BFC4;
    case 604u: goto L_0897BFD0;
    case 605u: goto L_0897BFD8;
    case 606u: goto L_0897BFDC;
    case 607u: goto L_0897BFEC;
    case 608u: goto L_0897BFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08978000:
    hot_regs.g31 = (hot_regs.g31 << 2u);
    ctx.gpr[13] = (0u | 2u);
    ctx.gpr[9] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    ctx.gpr[25] = (ctx.gpr[25] << 2u);
    goto L_08978014;
L_08978014:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[15] = (std::bit_cast<std::uint32_t>(f12));
    f14 = std::bit_cast<float>(ctx.gpr[15]);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    ctx.set_fpu_condition((f14 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(600));
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_0897824C;
      }
      goto L_0897803C;
    }
}
L_0897803C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g10 = ctx.gpr[10];
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])) * static_cast<std::int64_t>(static_cast<std::int32_t>(g4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g10 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    g4 = (ctx.lo);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + ctx.gpr[25]);
    ctx.gpr[11] = (g4 + hot_regs.g31);
    g10 = (g4 + g10);
    hot_regs.g4 = g4;
    ctx.gpr[10] = g10;
    goto L_08978058;
}
L_08978058:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08978228;
      }
      goto L_08978064;
    }
L_08978064:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(48)));
    hot_regs.g7 = (0u | 0u);
    g4 = (static_cast<std::int32_t>(hot_regs.g7) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    hot_regs.g5 = (ctx.gpr[18] << 2u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08978228;
      }
      goto L_08978078;
    }
}
L_08978078:
    hot_regs.g5 = (ctx.gpr[30] + hot_regs.g5);
    hot_regs.g6 = (0u | 0u);
    goto L_08978080;
L_08978080:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(40)));
    g4 = (g4 + hot_regs.g6);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089780B4;
      }
      goto L_08978090;
    }
}
L_08978090:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    g2 = (g4 << 3u);
    g2 = (g4 + g2);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g2 = (g4 + g2);
    g2 = (ctx.gpr[3] + g2);
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g2 + static_cast<std::uint32_t>(8))))));
    g2 = (g2 & 32u);
    { const bool branch_taken = g2 != 0u;
    // nop
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_08978214;
      }
      goto L_089780B4;
    }
}
L_089780B4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    hot_regs.g2 = (hot_regs.g4 << 3u);
      if (branch_taken) {
          goto L_089780DC;
      }
      goto L_089780BC;
    }
L_089780BC:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (hot_regs.g4 + g2);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g2 = (hot_regs.g4 + g2);
    g2 = (ctx.gpr[3] + g2);
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g2 + static_cast<std::uint32_t>(8))))));
    g2 = (g2 & 64u);
    { const bool branch_taken = g2 != 0u;
    // nop
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_08978214;
      }
      goto L_089780DC;
    }
}
L_089780DC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    hot_regs.g2 = (hot_regs.g4 << 3u);
      if (branch_taken) {
          goto L_08978104;
      }
      goto L_089780E4;
    }
L_089780E4:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (hot_regs.g4 + g2);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g2 = (hot_regs.g4 + g2);
    g2 = (ctx.gpr[3] + g2);
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g2 + static_cast<std::uint32_t>(8))))));
    g2 = (g2 & 512u);
    { const bool branch_taken = g2 != 0u;
    // nop
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_08978214;
      }
      goto L_08978104;
    }
}
L_08978104:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    hot_regs.g2 = (hot_regs.g4 << 3u);
      if (branch_taken) {
          goto L_0897812C;
      }
      goto L_0897810C;
    }
L_0897810C:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (hot_regs.g4 + g2);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g2 = (hot_regs.g4 + g2);
    g2 = (ctx.gpr[3] + g2);
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g2 + static_cast<std::uint32_t>(8))))));
    g2 = (g2 & 256u);
    if (g2 == 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), ctx.gpr[10]);
    hot_regs.g2 = g2;
        goto L_08978160;
    }
    goto L_0897812C;
}
L_0897812C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[14];
    hot_regs.g2 = (hot_regs.g4 << 3u);
      if (branch_taken) {
          goto L_08978154;
      }
      goto L_08978134;
    }
L_08978134:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (hot_regs.g4 + g2);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g2 = (hot_regs.g4 + g2);
    g2 = (ctx.gpr[3] + g2);
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g2 + static_cast<std::uint32_t>(8))))));
    g2 = (g2 & 256u);
    if (g2 != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), ctx.gpr[10]);
    hot_regs.g2 = g2;
        goto L_08978160;
    }
    goto L_08978154;
}
L_08978154:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[13];
    // nop
      if (branch_taken) {
          goto L_08978214;
      }
      goto L_0897815C;
    }
L_0897815C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), ctx.gpr[10]);
    goto L_08978160;
L_08978160:
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (hot_regs.g4 << 3u);
    ctx.gpr[3] = (hot_regs.g4 + ctx.gpr[3]);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[3]);
    hot_regs.g2 = (hot_regs.g2 + hot_regs.g4);
    ctx.gpr[3] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[12] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(4))))));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    ctx.gpr[9] = (ctx.gpr[12] | 0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[8] = (ctx.gpr[3] | 0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[10] = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[10]);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[10] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_08978204;
      }
      goto L_089781F0;
    }
L_089781F0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    g4 = (hot_regs.g2 + g4);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08978204;
}
L_08978204:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08978214;
      }
      goto L_0897820C;
    }
L_0897820C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08978270;
      }
      goto L_08978214;
    }
L_08978214:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    g4 = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(48)));
    g7 = (g7 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08978080;
      }
      goto L_08978228;
    }
}
L_08978228:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g15 = ctx.gpr[15];
    g15 = (g15 + static_cast<std::uint32_t>(1));
    f12 = std::bit_cast<float>(g15);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(600));
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(600));
    ctx.gpr[15] = g15;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08978058;
      }
      goto L_0897824C;
    }
}
}
L_0897824C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g24 = ctx.gpr[24];
    g24 = (g24 + static_cast<std::uint32_t>(1));
    f12 = std::bit_cast<float>(g24);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(12));
    ctx.gpr[24] = g24;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08978014;
      }
      goto L_0897826C;
    }
}
}
L_0897826C:
    hot_regs.g2 = (ctx.gpr[18] | 0u);
    goto L_08978270;
L_08978270:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089782A8:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g7 + static_cast<std::uint32_t>(0))))));
    g4 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08978350;
      }
      goto L_089782BC;
    }
}
L_089782BC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g29 = hot_regs.g29;
    g9 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(0))))));
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(g8);
    ctx.set_vfpu_scalar_bits_ct<33u>(g9);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    g9 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(0))))));
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(g8);
    ctx.set_vfpu_scalar_bits_ct<33u>(g9);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    g4 = (g29 + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    f12 = f12 - f13;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    f14 = f14 - f15;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    f13 = ctx.fpr[16] - f13;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    f15 = ctx.fpr[17] - f15;
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f14; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f14;
    ctx.fpr[18] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f12 < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08978358;
      }
      goto L_08978348;
    }
}
}
L_08978348:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089783A4;
      }
      goto L_08978350;
    }
L_08978350:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089783A4;
      }
      goto L_08978358;
    }
L_08978358:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (0u | 0u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g7 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g5));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(0))))));
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089783A4;
      }
      goto L_08978378;
    }
}
L_08978378:
    hot_regs.g5 = (hot_regs.g4 << 2u);
    goto L_0897837C;
L_0897837C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g6 + g5);
    ctx.gpr[8] = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    g4 = (g4 << 16u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g7 + static_cast<std::uint32_t>(0))))));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    g5 = (g4 << 2u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0897837C;
      }
      goto L_089783A4;
    }
}
L_089783A4:
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089783AC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[19] = (g5 & 255u);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g18);
    g18 = (0u | 0u);
    ctx.gpr[16] = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0897850C;
      }
      goto L_0897840C;
    }
}
L_0897840C:
    ctx.gpr[17] = (0u | 0u);
    goto L_08978410;
L_08978410:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (hot_regs.g4 + ctx.gpr[17]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089784F8;
      }
      goto L_08978468;
    }
L_08978468:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089784F8;
      }
      goto L_0897847C;
    }
L_0897847C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089784F8;
      }
      goto L_08978490;
    }
L_08978490:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089784F8;
      }
      goto L_089784A4;
    }
L_089784A4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089784F8;
      }
      goto L_089784B8;
    }
L_089784B8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089784F8;
      }
      goto L_089784CC;
    }
L_089784CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g4 = (g4 + ctx.gpr[17]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8))))));
    g4 = (g4 & 32u);
    g4 = (g4 >> 5u);
    { const bool branch_taken = g4 == ctx.gpr[19];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089784F8;
      }
      goto L_089784E8;
    }
}
L_089784E8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089784F8u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    goto L_089794A0;
L_089784F8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    g18 = (g18 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08978410;
      }
      goto L_0897850C;
    }
}
L_0897850C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08978540:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g18);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    g18 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (g5 & 255u);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089786A8;
      }
      goto L_089785A0;
    }
}
L_089785A0:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.g4 = (g18 << 3u);
    g17 = (g18 + hot_regs.g4);
    g17 = (g18 + g17);
    ctx.gpr[17] = g17;
    goto L_089785AC;
}
L_089785AC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (hot_regs.g4 + ctx.gpr[17]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08978694;
      }
      goto L_08978604;
    }
L_08978604:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08978694;
      }
      goto L_08978618;
    }
L_08978618:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08978694;
      }
      goto L_0897862C;
    }
L_0897862C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08978694;
      }
      goto L_08978640;
    }
L_08978640:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08978694;
      }
      goto L_08978654;
    }
L_08978654:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08978694;
      }
      goto L_08978668;
    }
L_08978668:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g4 = (g4 + ctx.gpr[17]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8))))));
    g4 = (g4 & 32u);
    g4 = (g4 >> 5u);
    { const bool branch_taken = g4 == ctx.gpr[19];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08978694;
      }
      goto L_08978684;
    }
}
L_08978684:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08978694u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    goto L_089794A0;
L_08978694:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    g18 = (g18 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089785AC;
      }
      goto L_089786A8;
    }
}
L_089786A8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089786DC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), ctx.gpr[18]);
    ctx.gpr[18] = (g4 | 0u);
    g4 = (16585u << 16u);
    g4 = (g4 | 4059u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(hot_regs.f20));
    g6 = (g6 & 255u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), g6);
    g4 = (16256u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[0] = hot_regs.f15 - hot_regs.f12;
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    g5 = (g5 & 255u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), ctx.gpr[16]);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(204), ctx.gpr[17]);
    hot_regs.f22 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(220), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(224), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(228), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(232), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(236), hot_regs.g31);
    { const bool branch_taken = g5 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08978774;
      }
      goto L_08978768;
    }
}
L_08978768:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_0897877C;
      }
      goto L_08978774;
    }
L_08978774:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    goto L_0897877C;
L_0897877C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), hot_regs.g4);
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
      if (branch_taken) {
          goto L_0897879C;
      }
      goto L_08978790;
    }
L_08978790:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_0897879C;
L_0897879C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    hot_regs.f13 = ctx.fpr[28] - ctx.fpr[2];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g31 = (0x089787B0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089787B0u) goto L_089787B0;
    return;
L_089787B0:
{
    float f26 = ctx.fpr[26];
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16329u << 16u);
    g4 = (g4 | 4059u);
    f26 = std::bit_cast<float>(g4);
    f26 = ctx.fpr[0] + f26;
    ctx.set_fpu_condition((f26 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(164)));
    hot_regs.g4 = g4;
    ctx.fpr[26] = f26;
      if (branch_taken) {
          goto L_089787E4;
      }
      goto L_089787D0;
    }
}
}
L_089787D0:
{
    float f26 = ctx.fpr[26];
    f26 = f26 + hot_regs.f20;
    ctx.set_fpu_condition((f26 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    ctx.fpr[26] = f26;
      if (branch_taken) {
          goto L_089787D0;
      }
      goto L_089787E4;
    }
}
L_089787E4:
    ctx.set_fpu_condition((ctx.fpr[26] <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08978808;
      }
      goto L_089787F4;
    }
L_089787F4:
{
    float f26 = ctx.fpr[26];
    f26 = f26 - hot_regs.f20;
    ctx.set_fpu_condition((f26 <= hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    ctx.fpr[26] = f26;
      if (branch_taken) {
          goto L_089787F4;
      }
      goto L_08978808;
    }
}
L_08978808:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f17 = ctx.fpr[17];
    float f26 = ctx.fpr[26];
    float f28 = ctx.fpr[28];
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (std::bit_cast<std::uint32_t>(f26));
    ctx.set_vfpu_scalar_bits_ct<0u>(g5);
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
    g5 = (ctx.vfpu_scalar_bits_ct<1u>());
    f12 = std::bit_cast<float>(g5);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 + f14;
    g5 = (std::bit_cast<std::uint32_t>(f26));
    ctx.set_vfpu_scalar_bits_ct<0u>(g5);
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
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    g5 = (ctx.vfpu_scalar_bits_ct<1u>());
    hot_regs.f15 = std::bit_cast<float>(g5);
    { const float fs = f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    f13 = f28 - f13;
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    f17 = f17 - f28;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f17));
    f12 = f12 - f14;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f13 = f13 - f28;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f13));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    f26 = std::sqrt(f12);
    ctx.set_fpu_condition((f12 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    ctx.fpr[17] = f17;
    ctx.fpr[26] = f26;
      if (branch_taken) {
          goto L_089788B4;
      }
      goto L_089788AC;
    }
}
}
L_089788AC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f22));
      if (branch_taken) {
          goto L_089788E8;
      }
      goto L_089788B4;
    }
L_089788B4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (std::bit_cast<std::uint32_t>(f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(g5);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    g5 = (ctx.vfpu_scalar_bits_ct<0u>());
    f13 = std::bit_cast<float>(g5);
    f14 = std::bit_cast<float>(g5);
    { const float fs = f14; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_089788E8;
}
}
L_089788E8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    ctx.set_fpu_condition((f12 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08978914;
      }
      goto L_0897890C;
    }
}
L_0897890C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f22));
      if (branch_taken) {
          goto L_08978948;
      }
      goto L_08978914;
    }
L_08978914:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (std::bit_cast<std::uint32_t>(f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(g5);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    g5 = (ctx.vfpu_scalar_bits_ct<0u>());
    f13 = std::bit_cast<float>(g5);
    f14 = std::bit_cast<float>(g5);
    { const float fs = f14; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_08978948;
}
}
L_08978948:
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08978B30;
      }
      goto L_08978958;
    }
L_08978958:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g19 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    hot_regs.g5 = (g4 << 3u);
    g19 = (g19 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    g16 = (g4 + hot_regs.g5);
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(80));
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(96));
    ctx.gpr[20] = (g19 & 255u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    g16 = (g4 + g16);
    ctx.gpr[16] = g16;
    ctx.gpr[19] = g19;
    goto L_08978988;
}
L_08978988:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (hot_regs.g4 + ctx.gpr[16]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(148)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08978B14;
      }
      goto L_089789E4;
    }
L_089789E4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (hot_regs.g4 + ctx.gpr[16]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08978B14;
      }
      goto L_08978A3C;
    }
L_08978A3C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08978A4Cu);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 583u, 0x08976968u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08978A4Cu) goto L_08978A4C;
    return;
L_08978A4C:
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.f22 = hot_regs.f12 - hot_regs.f22;
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08978A68u);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 583u, 0x08976968u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08978A68u) goto L_08978A68;
    return;
L_08978A68:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    float f20 = hot_regs.f20;
{
    std::uint32_t g29 = hot_regs.g29;
    f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    f20 = f20 - ctx.fpr[28];
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    { const float fs = hot_regs.f22; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f22));
    { const float fs = f20; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f14;
    ctx.set_fpu_condition((f12 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(f20));
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08978B14;
      }
      goto L_08978A98;
    }
}
}
L_08978A98:
    ctx.set_fpu_condition((ctx.fpr[26] < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08978B14;
      }
      goto L_08978AA8;
    }
L_08978AA8:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f14;
    ctx.set_fpu_condition((f12 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08978B14;
      }
      goto L_08978AD4;
    }
}
}
L_08978AD4:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(156)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08978B14;
      }
      goto L_08978AE8;
    }
L_08978AE8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    g4 = (g4 + ctx.gpr[16]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8))))));
    g4 = (g4 & 32u);
    g4 = (g4 >> 5u);
    { const bool branch_taken = g4 == ctx.gpr[19];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08978B14;
      }
      goto L_08978B04;
    }
}
L_08978B04:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08978B14u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    goto L_089794A0;
L_08978B14:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    g17 = (g17 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(10));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08978988;
      }
      goto L_08978B28;
    }
}
L_08978B28:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_08978B30;
L_08978B30:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(196)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(204)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(208)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(212)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(220)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(224)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(228)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(232)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(236)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08978B78:
{
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g11 = ctx.gpr[11];
    g6 = (g6 & 65535u);
    g11 = (g6 & 15u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    g6 = (g6 << 16u);
    ctx.gpr[10] = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(5)));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    ctx.gpr[9] = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(5)));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 4u));
    g3 = (15357u << 16u);
    g6 = (g6 & 15u);
    g3 = (g3 | 62390u);
    g11 = (g11 + static_cast<std::uint32_t>(-7));
    hot_regs.f12 = std::bit_cast<float>(g3);
    hot_regs.g2 = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g2 == 0u;
    g6 = (g6 + static_cast<std::uint32_t>(-7));
    ctx.gpr[3] = g3;
    hot_regs.g6 = g6;
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_08978BD8;
      }
      goto L_08978BB8;
    }
}
L_08978BB8:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (ctx.gpr[10] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(g9)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g9 = (ctx.lo);
    f14 = std::bit_cast<float>(g9);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    { const float fs = f14; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    hot_regs.f13 = hot_regs.f13 + f14;
    ctx.gpr[9] = g9;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08978BF4;
      }
      goto L_08978BD8;
    }
}
}
L_08978BD8:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (g9 & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(g9)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g9 = (ctx.lo);
    f14 = std::bit_cast<float>(g9);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    { const float fs = f14; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    hot_regs.f13 = hot_regs.f13 + f14;
    ctx.gpr[9] = g9;
    hot_regs.f14 = f14;
    goto L_08978BF4;
}
}
L_08978BF4:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[10] = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(5)));
    ctx.gpr[9] = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(5)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08978C2C;
      }
      goto L_08978C0C;
    }
}
L_08978C0C:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[10] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g4 = (ctx.lo);
    f14 = std::bit_cast<float>(g4);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    { const float fs = f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    f12 = hot_regs.f13 + f12;
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08978C48;
      }
      goto L_08978C2C;
    }
}
}
L_08978C2C:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[9] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g4 = (ctx.lo);
    f14 = std::bit_cast<float>(g4);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    { const float fs = f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f13 + f12;
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    goto L_08978C48;
}
}
L_08978C48:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978C50:
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(4))))));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (hot_regs.g6 & 15u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-7));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(5)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g7)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    hot_regs.g7 = (ctx.lo);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g7);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g7 = (15357u << 16u);
    hot_regs.g7 = (hot_regs.g7 | 62390u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g7);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (hot_regs.g6 << 16u);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 16u));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 4u));
    hot_regs.g6 = (hot_regs.g6 & 15u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-7));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(5)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    hot_regs.g5 = (ctx.lo);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978D08:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(8))))));
    ctx.gpr[9] = (0u | 0u);
    g8 = (g8 & 15u);
    hot_regs.g7 = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(g8) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08978DA8;
      }
      goto L_08978D20;
    }
}
L_08978D20:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(6))))));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(30040)));
    ctx.gpr[10] = (g5 + ctx.gpr[9]);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08978D30;
}
L_08978D30:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g11 = ctx.gpr[11];
    g11 = (ctx.gpr[10] + ctx.gpr[10]);
    g11 = (hot_regs.g4 + g11);
    g11 = (aot_mem.aot_load16(g11 + static_cast<std::uint32_t>(0)));
    g11 = (g11 & 16383u);
    g11 = (g11 << 16u);
    g11 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g11) >> 16u));
    g2 = (g11 << 3u);
    g2 = (g11 + g2);
    g11 = (g11 + g2);
    g11 = (hot_regs.g7 + g11);
    { const bool branch_taken = g11 != hot_regs.g6;
    // nop
    hot_regs.g2 = g2;
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_08978D90;
      }
      goto L_08978D60;
    }
}
L_08978D60:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (ctx.gpr[10] + ctx.gpr[10]);
    g4 = (g4 + hot_regs.g5);
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 32768u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08978D88;
      }
      goto L_08978D80;
    }
}
L_08978D80:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08978DAC;
      }
      goto L_08978D88;
    }
L_08978D88:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08978DAC;
      }
      goto L_08978D90;
    }
L_08978D90:
{
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    g9 = (g9 + static_cast<std::uint32_t>(1));
    g9 = (g9 << 16u);
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g9) >> 16u));
    g10 = (static_cast<std::int32_t>(g9) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = g10 != 0u;
    g10 = (hot_regs.g5 + g9);
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_08978D30;
      }
      goto L_08978DA8;
    }
}
L_08978DA8:
    hot_regs.g2 = (0u | 0u);
    goto L_08978DAC;
L_08978DAC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978DB4:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(8))))));
    ctx.gpr[9] = (0u | 0u);
    g8 = (g8 & 15u);
    hot_regs.g7 = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(g8) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08978E54;
      }
      goto L_08978DCC;
    }
}
L_08978DCC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(6))))));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(30040)));
    ctx.gpr[10] = (g5 + ctx.gpr[9]);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08978DDC;
}
L_08978DDC:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g11 = ctx.gpr[11];
    g11 = (ctx.gpr[10] + ctx.gpr[10]);
    g11 = (hot_regs.g4 + g11);
    g11 = (aot_mem.aot_load16(g11 + static_cast<std::uint32_t>(0)));
    g11 = (g11 & 16383u);
    g11 = (g11 << 16u);
    g11 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g11) >> 16u));
    g2 = (g11 << 3u);
    g2 = (g11 + g2);
    g11 = (g11 + g2);
    g11 = (hot_regs.g7 + g11);
    { const bool branch_taken = g11 != hot_regs.g6;
    // nop
    hot_regs.g2 = g2;
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_08978E3C;
      }
      goto L_08978E0C;
    }
}
L_08978E0C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (ctx.gpr[10] + ctx.gpr[10]);
    g4 = (g4 + hot_regs.g5);
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 16384u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08978E34;
      }
      goto L_08978E2C;
    }
}
L_08978E2C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08978E58;
      }
      goto L_08978E34;
    }
L_08978E34:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08978E58;
      }
      goto L_08978E3C;
    }
L_08978E3C:
{
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    g9 = (g9 + static_cast<std::uint32_t>(1));
    g9 = (g9 << 16u);
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g9) >> 16u));
    g10 = (static_cast<std::int32_t>(g9) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = g10 != 0u;
    g10 = (hot_regs.g5 + g9);
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_08978DDC;
      }
      goto L_08978E54;
    }
}
L_08978E54:
    hot_regs.g2 = (0u | 0u);
    goto L_08978E58;
L_08978E58:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978E60:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g8 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    g8 = (g5 - g8);
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g8) >> 2u));
    g9 = (g9 >> 30u);
    g8 = (g8 + g9);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g8) >> 2u));
    aot_mem.aot_store16(g7 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(g8));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    g5 = (g5 & 16383u);
    aot_mem.aot_store16(g7 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(g5));
    g5 = (aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(12)));
    g8 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g9 = (g5 << 3u);
    g9 = (g5 + g9);
    g5 = (g5 + g9);
    g5 = (g8 + g5);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(4), g5);
    aot_mem.aot_store16(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    g8 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g8 + static_cast<std::uint32_t>(8))))));
    g9 = (g9 & 15u);
    g9 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g9) ? 1u : 0u);
    { const bool branch_taken = g9 == 0u;
    // nop
    hot_regs.g5 = g5;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08978F0C;
      }
      goto L_08978EC8;
    }
}
L_08978EC8:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(6))))));
    goto L_08978ECC;
L_08978ECC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    g9 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    g8 = (g8 + g5);
    g10 = (g8 + g8);
    g9 = (g9 + g10);
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(0))))));
    g10 = (aot_mem.aot_load16(hot_regs.g7 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = g9 == g10;
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = g5;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_08978F18;
      }
      goto L_08978EEC;
    }
}
L_08978EEC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    aot_mem.aot_store16(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g5));
    g8 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g8 + static_cast<std::uint32_t>(8))))));
    g9 = (g9 & 15u);
    g9 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g9) ? 1u : 0u);
    if (g9 != 0u) {
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g8 + static_cast<std::uint32_t>(6))))));
    hot_regs.g5 = g5;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
        goto L_08978ECC;
    }
    goto L_08978F0C;
}
L_08978F0C:
    aot_mem.aot_store16(hot_regs.g7 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_08978F4C;
      }
      goto L_08978F18;
    }
L_08978F18:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(30040)));
    g6 = (ctx.gpr[8] + ctx.gpr[8]);
    g5 = (g5 + g6);
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 & 16383u);
    aot_mem.aot_store16(g7 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(g5));
    g5 = (aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(14)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (g5 << 3u);
    g6 = (g5 + g6);
    g5 = (g5 + g6);
    g4 = (g4 + g5);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(8), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08978F4C;
}
L_08978F4C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978F54:
{
    float f13 = hot_regs.f13;
    float f18 = ctx.fpr[18];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g4 = (17056u << 16u);
    f13 = ctx.fpr[17] - hot_regs.f12;
    ctx.fpr[16] = std::bit_cast<float>(g4);
    f18 = f13 / ctx.fpr[16];
    g4 = (16880u << 16u);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g5 = (16840u << 16u);
    hot_regs.g6 = (0u | 49u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    f18 = f18 + hot_regs.f15;
    f13 = std::bit_cast<float>(g5);
    f18 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f18));
    g5 = (std::bit_cast<std::uint32_t>(f18));
    g4 = (static_cast<std::int32_t>(hot_regs.g6) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g4 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f13 = f13;
    ctx.fpr[18] = f18;
        goto L_08978F98;
    }
    goto L_08978F98;
}
}
L_08978F98:
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g4 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_08978FA4;
    }
    goto L_08978FA4;
L_08978FA4:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 0u);
    hot_regs.g4 = (0u | 0u);
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    if (g6 != 0u) {
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
        goto L_08978FB8;
    }
    goto L_08978FB8;
}
L_08978FB8:
{
    float f18 = ctx.fpr[18];
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    f18 = hot_regs.f14 - hot_regs.f12;
    f18 = f18 / ctx.fpr[16];
    g5 = (0u | 49u);
    f18 = f18 + hot_regs.f13;
    f18 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f18));
    g6 = (std::bit_cast<std::uint32_t>(f18));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    if (g5 != 0u) {
    g6 = (0u | 49u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.fpr[18] = f18;
        goto L_08978FDC;
    }
    goto L_08978FDC;
}
}
L_08978FDC:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g6) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    hot_regs.g6 = (0u | 0u);
        goto L_08978FE8;
    }
    goto L_08978FE8;
L_08978FE8:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (0u | 0u);
    hot_regs.g5 = (0u | 0u);
    g8 = (static_cast<std::int32_t>(g8) < static_cast<std::int32_t>(hot_regs.g6) ? 1u : 0u);
    if (g8 != 0u) {
    hot_regs.g5 = (hot_regs.g6 | 0u);
    ctx.gpr[8] = g8;
        goto L_08978FFC;
    }
    goto L_08978FFC;
}
L_08978FFC:
{
    float f15 = hot_regs.f15;
    float f17 = ctx.fpr[17];
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    f17 = f17 + hot_regs.f12;
    f17 = f17 / ctx.fpr[16];
    g6 = (0u | 49u);
    f15 = f17 + f15;
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    g8 = (std::bit_cast<std::uint32_t>(f15));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g8) ? 1u : 0u);
    if (g6 != 0u) {
    g8 = (0u | 49u);
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    hot_regs.f15 = f15;
    ctx.fpr[17] = f17;
        goto L_08979020;
    }
    goto L_08979020;
}
}
L_08979020:
    hot_regs.g6 = (static_cast<std::int32_t>(ctx.gpr[8]) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    ctx.gpr[8] = (0u | 0u);
        goto L_0897902C;
    }
    goto L_0897902C;
L_0897902C:
    hot_regs.g6 = (0u | 49u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 49 ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    hot_regs.g6 = (ctx.gpr[8] | 0u);
        goto L_0897903C;
    }
    goto L_0897903C;
L_0897903C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    f12 = hot_regs.f14 + f12;
    f12 = f12 / ctx.fpr[16];
    g9 = (0u | 49u);
    f12 = f12 + hot_regs.f13;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g8 = (std::bit_cast<std::uint32_t>(f12));
    g9 = (static_cast<std::int32_t>(g9) < static_cast<std::int32_t>(g8) ? 1u : 0u);
    if (g9 != 0u) {
    g8 = (0u | 49u);
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    hot_regs.f12 = f12;
        goto L_08979060;
    }
    goto L_08979060;
}
}
L_08979060:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 0 ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (0u | 0u);
        goto L_0897906C;
    }
    goto L_0897906C;
L_0897906C:
    ctx.gpr[9] = (0u | 49u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < 49 ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
        goto L_0897907C;
    }
    goto L_0897907C;
L_0897907C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g7 = hot_regs.g7;
    f12 = std::bit_cast<float>(hot_regs.g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f13 = std::bit_cast<float>(hot_regs.g5);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    f14 = std::bit_cast<float>(hot_regs.g6);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    f12 = std::bit_cast<float>(ctx.gpr[9]);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f14));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    local_pc = jump_target;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_089790B0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    hot_regs.g6 = (hot_regs.g6 & 255u);
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), ctx.gpr[30]);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[22] = (ctx.gpr[9] & 255u);
    ctx.gpr[21] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[20] = (ctx.gpr[11] & 255u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[19] = (hot_regs.g5 | 0u);
    ctx.gpr[23] = (hot_regs.g7 | 0u);
    ctx.gpr[30] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), hot_regs.g31);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08979120u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 291u, 0x089D1AECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08979120u) goto L_08979120;
    return;
L_08979120:
{
    std::uint32_t g29 = hot_regs.g29;
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (g29 | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08979140u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    goto L_08978F54;
}
L_08979140:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    ctx.gpr[25] = (std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(ctx.gpr[25]);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((f13 <= hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08979468;
      }
      goto L_08979168;
    }
}
}
L_08979168:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g25 = ctx.gpr[25];
    std::uint32_t g29 = hot_regs.g29;
    std::uint32_t g31 = hot_regs.g31;
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(96)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.gpr[15] = (0u | 1u);
    g4 = (g4 << 2u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), g4);
    g4 = (g25 + g25);
    g31 = (g25 + g4);
    g4 = (49736u << 16u);
    ctx.gpr[14] = (0u | 2u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    ctx.gpr[8] = (g29 + static_cast<std::uint32_t>(32));
    ctx.gpr[13] = (g29 + static_cast<std::uint32_t>(48));
    ctx.gpr[11] = (0u | 4u);
    g31 = (g31 << 2u);
    hot_regs.g4 = g4;
    hot_regs.g31 = g31;
    goto L_089791A0;
}
L_089791A0:
{
    float f14 = hot_regs.f14;
    float f16 = ctx.fpr[16];
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[24] = (std::bit_cast<std::uint32_t>(f14));
    f16 = std::bit_cast<float>(ctx.gpr[24]);
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f16)));
    ctx.set_fpu_condition((f16 <= hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(600));
    hot_regs.f14 = f14;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_08979448;
      }
      goto L_089791C8;
    }
}
L_089791C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[24])) * static_cast<std::int64_t>(static_cast<std::int32_t>(g4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g10 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    g9 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    g4 = (ctx.lo);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + hot_regs.g31);
    g10 = (g4 + g10);
    g9 = (g4 + g9);
    hot_regs.g4 = g4;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    goto L_089791E8;
}
L_089791E8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08979424;
      }
      goto L_089791F4;
    }
L_089791F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(48)));
    hot_regs.g7 = (0u | 0u);
    g4 = (static_cast<std::int32_t>(hot_regs.g7) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    hot_regs.g5 = (ctx.gpr[17] + ctx.gpr[17]);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08979424;
      }
      goto L_08979208;
    }
}
L_08979208:
    hot_regs.g5 = (ctx.gpr[30] + hot_regs.g5);
    hot_regs.g6 = (0u | 0u);
    goto L_08979210;
L_08979210:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(40)));
    g4 = (g4 + hot_regs.g6);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08979244;
      }
      goto L_08979220;
    }
}
L_08979220:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    g2 = (g4 << 3u);
    g2 = (g4 + g2);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g2 = (g4 + g2);
    g2 = (ctx.gpr[3] + g2);
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g2 + static_cast<std::uint32_t>(8))))));
    g2 = (g2 & 32u);
    { const bool branch_taken = g2 != 0u;
    // nop
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_08979410;
      }
      goto L_08979244;
    }
}
L_08979244:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    hot_regs.g2 = (hot_regs.g4 << 3u);
      if (branch_taken) {
          goto L_0897926C;
      }
      goto L_0897924C;
    }
L_0897924C:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (hot_regs.g4 + g2);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g2 = (hot_regs.g4 + g2);
    g2 = (ctx.gpr[3] + g2);
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g2 + static_cast<std::uint32_t>(8))))));
    g2 = (g2 & 64u);
    { const bool branch_taken = g2 != 0u;
    // nop
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_08979410;
      }
      goto L_0897926C;
    }
}
L_0897926C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    hot_regs.g2 = (hot_regs.g4 << 3u);
      if (branch_taken) {
          goto L_08979294;
      }
      goto L_08979274;
    }
L_08979274:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (hot_regs.g4 + g2);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g2 = (hot_regs.g4 + g2);
    g2 = (ctx.gpr[3] + g2);
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g2 + static_cast<std::uint32_t>(8))))));
    g2 = (g2 & 512u);
    { const bool branch_taken = g2 != 0u;
    // nop
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_08979410;
      }
      goto L_08979294;
    }
}
L_08979294:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    hot_regs.g2 = (hot_regs.g4 << 3u);
      if (branch_taken) {
          goto L_089792BC;
      }
      goto L_0897929C;
    }
L_0897929C:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (hot_regs.g4 + g2);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g2 = (hot_regs.g4 + g2);
    g2 = (ctx.gpr[3] + g2);
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g2 + static_cast<std::uint32_t>(8))))));
    g2 = (g2 & 256u);
    if (g2 == 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(108), ctx.gpr[10]);
    hot_regs.g2 = g2;
        goto L_089792F0;
    }
    goto L_089792BC;
}
L_089792BC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[15];
    hot_regs.g2 = (hot_regs.g4 << 3u);
      if (branch_taken) {
          goto L_089792E4;
      }
      goto L_089792C4;
    }
L_089792C4:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (hot_regs.g4 + g2);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g2 = (hot_regs.g4 + g2);
    g2 = (ctx.gpr[3] + g2);
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g2 + static_cast<std::uint32_t>(8))))));
    g2 = (g2 & 256u);
    if (g2 != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(108), ctx.gpr[10]);
    hot_regs.g2 = g2;
        goto L_089792F0;
    }
    goto L_089792E4;
}
L_089792E4:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[14];
    // nop
      if (branch_taken) {
          goto L_08979410;
      }
      goto L_089792EC;
    }
L_089792EC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(108), ctx.gpr[10]);
    goto L_089792F0;
L_089792F0:
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (hot_regs.g4 << 3u);
    ctx.gpr[3] = (hot_regs.g4 + ctx.gpr[3]);
    ctx.gpr[3] = (hot_regs.g4 + ctx.gpr[3]);
    hot_regs.g2 = (hot_regs.g2 + ctx.gpr[3]);
    ctx.gpr[3] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[12] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(4))))));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    ctx.gpr[8] = (ctx.gpr[3] | 0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[13] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    ctx.gpr[9] = (ctx.gpr[12] | 0u);
    { const bool branch_taken = hot_regs.g2 != ctx.gpr[11];
    ctx.gpr[10] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_08979380;
      }
      goto L_0897936C;
    }
L_0897936C:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((hot_regs.f14 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08979394;
      }
      goto L_08979380;
    }
L_08979380:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08979410;
      }
      goto L_08979394;
    }
L_08979394:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((f14 < hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.f14 = f14;
        goto L_089793B4;
    }
    goto L_089793A8;
}
L_089793A8:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = 0u == 0u;
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14) ^ 0x80000000u);
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_089793B4;
      }
      goto L_089793B4;
    }
}
L_089793B4:
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08979400;
      }
      goto L_089793C4;
    }
L_089793C4:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((f14 < hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    hot_regs.f14 = f14;
        goto L_089793E4;
    }
    goto L_089793D8;
}
L_089793D8:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14) ^ 0x80000000u);
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_089793E4;
      }
      goto L_089793E4;
    }
}
L_089793E4:
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08979400;
      }
      goto L_089793F4;
    }
L_089793F4:
{
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g4));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    g5 = (g5 + static_cast<std::uint32_t>(2));
    hot_regs.g5 = g5;
    goto L_08979400;
}
L_08979400:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08979410;
      }
      goto L_08979408;
    }
L_08979408:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0897946C;
      }
      goto L_08979410;
    }
L_08979410:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    g4 = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(48)));
    g7 = (g7 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08979210;
      }
      goto L_08979424;
    }
}
L_08979424:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g24 = ctx.gpr[24];
    g24 = (g24 + static_cast<std::uint32_t>(1));
    f14 = std::bit_cast<float>(g24);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(600));
    ctx.set_fpu_condition((f14 <= hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(600));
    ctx.gpr[24] = g24;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_089791E8;
      }
      goto L_08979448;
    }
}
}
L_08979448:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g25 = ctx.gpr[25];
    g25 = (g25 + static_cast<std::uint32_t>(1));
    f14 = std::bit_cast<float>(g25);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    ctx.set_fpu_condition((f14 <= hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g31 = (hot_regs.g31 + static_cast<std::uint32_t>(12));
    ctx.gpr[25] = g25;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_089791A0;
      }
      goto L_08979468;
    }
}
}
L_08979468:
    hot_regs.g2 = (ctx.gpr[17] | 0u);
    goto L_0897946C;
L_0897946C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089794A0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (g4 | 0u);
    g4 = (g5 << 3u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g18);
    g7 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g18 = (g5 + g4);
    g18 = (g5 + g18);
    g4 = (g7 + g18);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g19);
    g19 = (g6 & 255u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8))))));
    g6 = (0u + static_cast<std::uint32_t>(-33));
    g7 = (g19 & 1u);
    g5 = (g5 & g6);
    g6 = (g7 << 5u);
    g5 = (g5 | g6);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(g5));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g5 + g18);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8))))));
    g6 = (g6 & 15u);
    g7 = (static_cast<std::int32_t>(g6) < 3 ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[16] = g16;
    ctx.gpr[18] = g18;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089795A0;
      }
      goto L_0897950C;
    }
}
L_0897950C:
{
    std::uint32_t g6 = hot_regs.g6;
    ctx.gpr[17] = (0u | 0u);
    g6 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089795A0;
      }
      goto L_0897951C;
    }
}
L_0897951C:
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(6))))));
    goto L_08979520;
L_08979520:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(30040)));
    g6 = (g6 + ctx.gpr[17]);
    g6 = (g6 + g6);
    g6 = (g7 + g6);
    g6 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(0)));
    g6 = (g6 & 16383u);
    g7 = (g6 << 16u);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 16u));
    g6 = (g7 << 3u);
    g6 = (g7 + g6);
    g6 = (g7 + g6);
    g6 = (hot_regs.g5 + g6);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(8))))));
    g8 = (g6 & 32u);
    g8 = (g8 >> 5u);
    { const bool branch_taken = g8 == ctx.gpr[19];
    g6 = (g6 & 15u);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08979588;
      }
      goto L_08979564;
    }
}
L_08979564:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (static_cast<std::int32_t>(g6) < 3 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08979588;
      }
      goto L_08979570;
    }
}
L_08979570:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (hot_regs.g7 | 0u);
    hot_regs.g31 = (0x08979580u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    goto L_089794A0;
L_08979580:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g5 + ctx.gpr[18]);
    goto L_08979588;
L_08979588:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(8))))));
    g17 = (g17 + static_cast<std::uint32_t>(1));
    g6 = (g6 & 15u);
    g6 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    if (g6 != 0u) {
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(6))))));
    hot_regs.g6 = g6;
    ctx.gpr[17] = g17;
        goto L_08979520;
    }
    goto L_089795A0;
}
L_089795A0:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089795BC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (g4 | 0u);
    g4 = (g5 << 3u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g18);
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g18 = (g5 + g4);
    g18 = (g5 + g18);
    g4 = (g6 + g18);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8))))));
    g5 = (g5 | 64u);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(g5));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g5 + g18);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8))))));
    g6 = (g6 & 15u);
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < 3 ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0897969C;
      }
      goto L_08979610;
    }
}
L_08979610:
{
    std::uint32_t g6 = hot_regs.g6;
    ctx.gpr[17] = (0u | 0u);
    g6 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0897969C;
      }
      goto L_08979620;
    }
}
L_08979620:
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(6))))));
    goto L_08979624;
L_08979624:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(30040)));
    g6 = (g6 + ctx.gpr[17]);
    g6 = (g6 + g6);
    g6 = (g7 + g6);
    g6 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(0)));
    g6 = (g6 & 16383u);
    g7 = (g6 << 16u);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 16u));
    g6 = (g7 << 3u);
    g6 = (g7 + g6);
    g6 = (g7 + g6);
    g6 = (hot_regs.g5 + g6);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(8))))));
    ctx.gpr[8] = (g6 & 64u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    g6 = (g6 & 15u);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08979684;
      }
      goto L_08979664;
    }
}
L_08979664:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (static_cast<std::int32_t>(g6) < 3 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08979684;
      }
      goto L_08979670;
    }
}
L_08979670:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0897967Cu);
    hot_regs.g5 = (hot_regs.g7 | 0u);
    goto L_089795BC;
L_0897967C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g5 + ctx.gpr[18]);
    goto L_08979684;
L_08979684:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(8))))));
    g17 = (g17 + static_cast<std::uint32_t>(1));
    g6 = (g6 & 15u);
    g6 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    if (g6 != 0u) {
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(6))))));
    hot_regs.g6 = g6;
    ctx.gpr[17] = g17;
        goto L_08979624;
    }
    goto L_0897969C;
}
L_0897969C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089796B4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 496u);
    g6 = (0u | 32u);
    { const bool branch_taken = g5 == g6;
    g6 = (0u | 48u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089796D0;
      }
      goto L_089796C8;
    }
}
L_089796C8:
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08979870;
      }
      goto L_089796D0;
    }
L_089796D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(416));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(6))))));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(12))))));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0897979C;
      }
      goto L_089796E8;
    }
}
L_089796E8:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_0897979C;
      }
      goto L_089796F0;
    }
L_089796F0:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g9 = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    g7 = (g6 << 3u);
    g7 = (g6 + g7);
    g7 = (g6 + g7);
    g9 = (g9 + g7);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(8))))));
    g8 = (g8 & 15u);
    g7 = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(g8) ? 1u : 0u);
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    goto L_08979718;
}
L_08979718:
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08979760;
      }
      goto L_08979720;
    }
L_08979720:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(6))))));
    g2 = (g2 + ctx.gpr[11]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(30040)));
    g2 = (g2 + g2);
    g2 = (ctx.gpr[3] + g2);
    g2 = (aot_mem.aot_load16(g2 + static_cast<std::uint32_t>(0)));
    g2 = (g2 & 16383u);
    g2 = (g2 << 16u);
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g2) >> 16u));
    { const bool branch_taken = g2 == hot_regs.g5;
    // nop
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_08979760;
      }
      goto L_0897974C;
    }
}
L_0897974C:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g11 = ctx.gpr[11];
    g7 = (g11 + static_cast<std::uint32_t>(1));
    g11 = (g7 << 16u);
    g11 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g11) >> 16u));
    { const bool branch_taken = 0u == 0u;
    g7 = (static_cast<std::int32_t>(g11) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    hot_regs.g7 = g7;
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_08979718;
      }
      goto L_08979760;
    }
}
L_08979760:
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_0897979C;
      }
      goto L_08979768;
    }
L_08979768:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g5 = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    g7 = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(6))))));
    g8 = (g8 + ctx.gpr[11]);
    g8 = (g8 + g8);
    g7 = (g7 + g8);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(0))))));
    g7 = (g7 << 2u);
    g5 = (g5 + g7);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    g5 = (g5 & 49152u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_089797AC;
      }
      goto L_0897979C;
    }
}
L_0897979C:
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          goto L_089797B4;
      }
      goto L_089797A4;
    }
L_089797A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979870;
      }
      goto L_089797AC;
    }
L_089797AC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08979874;
      }
      goto L_089797B4;
    }
L_089797B4:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08979870;
      }
      goto L_089797BC;
    }
L_089797BC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g9 = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    g5 = (g6 << 3u);
    g5 = (g6 + g5);
    g5 = (g6 + g5);
    g9 = (g9 + g5);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(8))))));
    g8 = (g8 & 15u);
    hot_regs.g7 = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(g8) ? 1u : 0u);
    hot_regs.g5 = g5;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    goto L_089797E4;
}
L_089797E4:
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_0897982C;
      }
      goto L_089797EC;
    }
L_089797EC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(6))))));
    g5 = (g5 + ctx.gpr[11]);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(30040)));
    g5 = (g5 + g5);
    g5 = (hot_regs.g6 + g5);
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 & 16383u);
    g5 = (g5 << 16u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 16u));
    { const bool branch_taken = g5 == hot_regs.g4;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0897982C;
      }
      goto L_08979818;
    }
}
L_08979818:
{
    std::uint32_t g11 = ctx.gpr[11];
    hot_regs.g5 = (g11 + static_cast<std::uint32_t>(1));
    g11 = (hot_regs.g5 << 16u);
    g11 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g11) >> 16u));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g7 = (static_cast<std::int32_t>(g11) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_089797E4;
      }
      goto L_0897982C;
    }
}
L_0897982C:
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08979870;
      }
      goto L_08979834;
    }
L_08979834:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(6))))));
    g6 = (g6 + ctx.gpr[11]);
    g6 = (g6 + g6);
    g5 = (g5 + g6);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    g5 = (g5 << 2u);
    g4 = (g4 + g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 49152u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08979870;
      }
      goto L_08979868;
    }
}
L_08979868:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08979874;
      }
      goto L_08979870;
    }
L_08979870:
    hot_regs.g2 = (0u | 0u);
    goto L_08979874;
L_08979874:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897987C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08979894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08979894u) goto L_08979894;
    return;
L_08979894:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    hot_regs.g31 = (0x089798A8u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089798A8u) goto L_089798A8;
    return;
L_089798A8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    g4 = (hot_regs.g2 >> 31u);
    g4 = (ctx.gpr[1] | g4);
    hot_regs.g2 = (g4 | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089798CC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(240), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(248), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(252), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(256), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(264), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(268), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(276), hot_regs.g31);
    ctx.gpr[20] = (hot_regs.g5 & 255u);
    ctx.gpr[18] = (ctx.gpr[9] & 255u);
    ctx.gpr[22] = (ctx.gpr[11] & 255u);
    ctx.gpr[21] = (hot_regs.g6 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g7 | 0u);
    ctx.gpr[23] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    ctx.gpr[19] = (ctx.gpr[10] | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08979994;
      }
      goto L_08979934;
    }
}
L_08979934:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (hot_regs.g4 == 0u) {
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[22]));
        goto L_08979998;
    }
    goto L_08979940;
L_08979940:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[21]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x08979958u);
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 583u, 0x08976968u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08979958u) goto L_08979958;
    return;
L_08979958:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16964u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08979A2C;
      }
      goto L_08979994;
    }
L_08979994:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[22]));
    goto L_08979998;
L_08979998:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[21]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (17096u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x089799D0u);
    ctx.gpr[11] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 650u, 0x08976FBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089799D0u) goto L_089799D0;
    return;
L_089799D0:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_089799F0;
      }
      goto L_089799E0;
    }
L_089799E0:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979EE0;
      }
      goto L_089799F0;
    }
L_089799F0:
{
    float f30 = ctx.fpr[30];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g20 = ctx.gpr[20];
    g17 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g4 = (g20 << 3u);
    g4 = (g20 + g4);
    g4 = (g20 + g4);
    g17 = (g17 + g4);
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[18]);
    f30 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    g4 = (16201u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    { const float fs = f30; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f30 = std::bit_cast<float>(0x7FC00000u); else f30 = fs * ft; }
    g4 = (51572u << 16u);
    g4 = (g4 | 9200u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    ctx.fpr[30] = f30;
      if (branch_taken) {
          goto L_08979A54;
      }
      goto L_08979A2C;
    }
}
}
L_08979A2C:
{
    float f30 = ctx.fpr[30];
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[18]);
    f30 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    g4 = (16201u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    { const float fs = f30; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f30 = std::bit_cast<float>(0x7FC00000u); else f30 = fs * ft; }
    g4 = (51572u << 16u);
    g4 = (g4 | 9200u);
    ctx.fpr[28] = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    ctx.fpr[30] = f30;
    goto L_08979A54;
}
}
L_08979A54:
{
    float f30 = ctx.fpr[30];
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), ctx.gpr[23]);
    g4 = (std::bit_cast<std::uint32_t>(f30));
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
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (std::bit_cast<std::uint32_t>(f30));
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
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<1u>());
    f30 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[18] = (0u | 0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    g4 = (g4 & 15u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (16256u << 16u);
    hot_regs.g4 = g4;
    ctx.fpr[30] = f30;
      if (branch_taken) {
          goto L_08979EC4;
      }
      goto L_08979AB0;
    }
}
}
L_08979AB0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    ctx.fpr[26] = std::bit_cast<float>(g4);
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(96));
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(144));
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(152));
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(160));
    hot_regs.f20 = std::bit_cast<float>(0u);
    g4 = (16384u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    g4 = (49152u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    ctx.gpr[20] = (0u | 4u);
    hot_regs.g4 = g4;
    goto L_08979ADC;
}
L_08979ADC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    g4 = (g4 & 32u);
    if (g4 != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(208), ctx.gpr[20]);
    hot_regs.g4 = g4;
        goto L_08979B38;
    }
    goto L_08979AEC;
}
L_08979AEC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6))))));
    g5 = (g5 + ctx.gpr[18]);
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(30040)));
    g5 = (g5 + g5);
    g5 = (g6 + g5);
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 & 16383u);
    g5 = (g5 << 16u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 16u));
    g6 = (g5 << 3u);
    g6 = (g5 + g6);
    g5 = (g5 + g6);
    g4 = (g4 + g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8))))));
    g4 = (g4 & 32u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08979EA4;
      }
      goto L_08979B34;
    }
}
L_08979B34:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(208), ctx.gpr[20]);
    goto L_08979B38;
L_08979B38:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.f12 = hot_regs.f12 + ctx.fpr[26];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6))))));
    hot_regs.g5 = (hot_regs.g5 + ctx.gpr[18]);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(30040)));
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 & 16383u);
    hot_regs.g5 = (hot_regs.g5 << 16u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 16u));
    hot_regs.g6 = (hot_regs.g5 << 3u);
    hot_regs.g6 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    hot_regs.g31 = (0x08979B98u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 583u, 0x08976968u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08979B98u) goto L_08979B98;
    return;
L_08979B98:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.f12 = hot_regs.f12 + ctx.fpr[26];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g31 = (0x08979BD8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08979BD8u) goto L_08979BD8;
    return;
L_08979BD8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          goto L_08979EA4;
      }
      goto L_08979BE0;
    }
L_08979BE0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g17 + static_cast<std::uint32_t>(6))))));
    g5 = (g5 + ctx.gpr[18]);
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(30040)));
    g5 = (g5 + g5);
    g5 = (g6 + g5);
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 & 16383u);
    g5 = (g5 << 16u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 16u));
    g6 = (g5 << 3u);
    g6 = (g5 + g6);
    g5 = (g5 + g6);
    g9 = (g4 + g5);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(0))))));
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(g8);
    ctx.set_vfpu_scalar_bits_ct<33u>(g9);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g17 + static_cast<std::uint32_t>(0))))));
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g17 + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(g8);
    ctx.set_vfpu_scalar_bits_ct<33u>(g9);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08979CE8;
      }
      goto L_08979C5C;
    }
}
L_08979C5C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6))))));
    hot_regs.g5 = (hot_regs.g5 + ctx.gpr[18]);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(30040)));
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 & 16383u);
    hot_regs.g5 = (hot_regs.g5 << 16u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 16u));
    hot_regs.g6 = (hot_regs.g5 << 3u);
    hot_regs.g6 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    ctx.gpr[10] = (hot_regs.g4 + hot_regs.g5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08979CD8u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 174u, 0x089C89A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08979CD8u) goto L_08979CD8;
    return;
L_08979CD8:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08979CE8;
      }
      goto L_08979CE0;
    }
L_08979CE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979EA4;
      }
      goto L_08979CE8;
    }
L_08979CE8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    f12 = f12 - f13;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    f13 = f14 - f15;
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f16 = f16 + f17;
    f16 = std::sqrt(f16);
    f12 = f12 / f16;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    f13 = f13 / f16;
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    { const float fs = f13; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f14 = f14 + f15;
    ctx.set_fpu_condition((f14 < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
      if (branch_taken) {
          goto L_08979EA4;
      }
      goto L_08979D38;
    }
}
}
L_08979D38:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6))))));
    g5 = (g5 + ctx.gpr[18]);
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(30040)));
    g5 = (g5 + g5);
    g5 = (g6 + g5);
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 & 16383u);
    g5 = (g5 << 16u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 16u));
    g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
    g7 = (g5 << 3u);
    g7 = (g5 + g7);
    g5 = (g5 + g7);
    g4 = (g4 + g5);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08979E18;
      }
      goto L_08979D8C;
    }
}
L_08979D8C:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_fpu_condition((f14 < hot_regs.f20));
    // nop
    if (ctx.fpu_condition()) {
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13) ^ 0x80000000u);
    hot_regs.f14 = f14;
        goto L_08979DA0;
    }
    goto L_08979DA0;
}
L_08979DA0:
{
    float f14 = hot_regs.f14;
    { const float fs = f14; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f12 <= f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 2u);
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08979DBC;
      }
      goto L_08979DB4;
    }
}
L_08979DB4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08979EA4;
      }
      goto L_08979DBC;
    }
L_08979DBC:
{
    float f14 = hot_regs.f14;
    { const float fs = hot_regs.f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f13 <= f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08979DD8;
      }
      goto L_08979DD0;
    }
}
L_08979DD0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08979EA4;
      }
      goto L_08979DD8;
    }
L_08979DD8:
{
    float f12 = hot_regs.f12;
    { const float fs = f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f13 < f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08979DF4;
      }
      goto L_08979DEC;
    }
}
L_08979DEC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_08979EA4;
      }
      goto L_08979DF4;
    }
L_08979DF4:
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 3u);
      if (branch_taken) {
          goto L_08979E10;
      }
      goto L_08979E04;
    }
L_08979E04:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08979EA4;
      }
      goto L_08979E10;
    }
L_08979E10:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08979EA4;
      }
      goto L_08979E18;
    }
L_08979E18:
{
    float f15 = hot_regs.f15;
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_fpu_condition((f15 < hot_regs.f20));
    // nop
    if (ctx.fpu_condition()) {
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13) ^ 0x80000000u);
    hot_regs.f15 = f15;
        goto L_08979E30;
    }
    goto L_08979E30;
}
L_08979E30:
{
    float f15 = hot_regs.f15;
    { const float fs = f15; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f14 <= f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 6u);
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08979E4C;
      }
      goto L_08979E44;
    }
}
L_08979E44:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08979EA4;
      }
      goto L_08979E4C;
    }
L_08979E4C:
{
    float f14 = hot_regs.f14;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f13 <= f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08979E68;
      }
      goto L_08979E60;
    }
}
L_08979E60:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08979EA4;
      }
      goto L_08979E68;
    }
L_08979E68:
{
    float f12 = hot_regs.f12;
    { const float fs = f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f13 < f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08979E84;
      }
      goto L_08979E7C;
    }
}
L_08979E7C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_08979EA4;
      }
      goto L_08979E84;
    }
L_08979E84:
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 5u);
      if (branch_taken) {
          goto L_08979EA0;
      }
      goto L_08979E94;
    }
L_08979E94:
    hot_regs.g4 = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08979EA4;
      }
      goto L_08979EA0;
    }
L_08979EA0:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08979EA4;
L_08979EA4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (g18 + static_cast<std::uint32_t>(1));
    g18 = (g4 << 16u);
    g18 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g18) >> 16u));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    g4 = (g4 & 15u);
    g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08979ADC;
      }
      goto L_08979EC4;
    }
}
L_08979EC4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08979EE0;
      }
      goto L_08979ED4;
    }
}
L_08979ED4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08979EE0;
L_08979EE0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(220)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(224)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(228)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(232)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(236)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(248)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(252)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(264)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(268)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(276)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08979F28:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-384));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(332), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(336), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(340), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(344), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(348), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(352), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(356), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(360), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(364), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(368), hot_regs.g31);
    ctx.gpr[17] = (hot_regs.g6 & 255u);
    hot_regs.g6 = (ctx.gpr[10] & 255u);
    ctx.gpr[10] = (ctx.gpr[11] & 255u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(248), hot_regs.g6);
    ctx.gpr[20] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(384)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(244), ctx.gpr[10]);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(300), hot_regs.g7);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(304), ctx.gpr[9]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(296), ctx.gpr[8]);
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    hot_regs.g4 = (19646u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 48160u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[22] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x08979FC8u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 291u, 0x089D1AECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08979FC8u) goto L_08979FC8;
    return;
L_08979FC8:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08979FE8u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    goto L_08978F54;
L_08979FE8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(280), g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(252), ctx.gpr[21]);
    ctx.set_fpu_condition((f13 <= hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(256), ctx.gpr[18]);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0897A4CC;
      }
      goto L_0897A018;
    }
}
}
L_0897A018:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(288), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(112));
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(128));
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(96));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(280)));
    hot_regs.g5 = (ctx.gpr[17] << 2u);
    g6 = (16448u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(g6);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 << 2u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(292), hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(284), g4);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_0897A04C;
}
L_0897A04C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(276), g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((f13 <= hot_regs.f14));
    // nop
    if (!ctx.fpu_condition()) {
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(280)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_0897A49C;
    }
    goto L_0897A078;
}
}
L_0897A078:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(276)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(284)));
    g6 = (0u + static_cast<std::uint32_t>(600));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g6)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g4 = (ctx.lo);
    g4 = (ctx.gpr[19] + g4);
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(292)));
    hot_regs.g7 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(288)));
    g4 = (g4 + g5);
    g5 = (g4 + g6);
    g4 = (g4 + hot_regs.g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(268), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_0897A0AC;
}
L_0897A0AC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(272)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(40)));
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(276)));
    hot_regs.g4 = g4;
        goto L_0897A460;
    }
    goto L_0897A0BC;
}
L_0897A0BC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(268)));
    g5 = (0u | 0u);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(48)));
    g4 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(260), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0897A45C;
      }
      goto L_0897A0D4;
    }
}
L_0897A0D4:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 0u);
    hot_regs.g4 = (0u | 2u);
    hot_regs.g5 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), g6);
    g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
    hot_regs.g6 = g6;
    goto L_0897A0E8;
}
L_0897A0E8:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    ctx.gpr[8] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(264)));
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(40)));
    g7 = (g7 + ctx.gpr[8]);
    ctx.gpr[21] = (aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(0)));
    g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = g7 != 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_0897A12C;
      }
      goto L_0897A108;
    }
}
L_0897A108:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g21 = ctx.gpr[21];
    g7 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    g8 = (g21 << 3u);
    g8 = (g21 + g8);
    g8 = (g21 + g8);
    g7 = (g7 + g8);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(8))))));
    g7 = (g7 & 32u);
    if (g7 != 0u) {
    g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(260)));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
        goto L_0897A438;
    }
    goto L_0897A12C;
}
L_0897A12C:
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A158;
      }
      goto L_0897A134;
    }
L_0897A134:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g21 = ctx.gpr[21];
    g7 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    g8 = (g21 << 3u);
    g8 = (g21 + g8);
    g8 = (g21 + g8);
    g7 = (g7 + g8);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(8))))));
    g7 = (g7 & 64u);
    if (g7 != 0u) {
    g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(260)));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
        goto L_0897A438;
    }
    goto L_0897A158;
}
L_0897A158:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A184;
      }
      goto L_0897A160;
    }
L_0897A160:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g21 = ctx.gpr[21];
    g7 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    g8 = (g21 << 3u);
    g8 = (g21 + g8);
    g8 = (g21 + g8);
    g7 = (g7 + g8);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(8))))));
    g7 = (g7 & 256u);
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_0897A1B8;
      }
      goto L_0897A184;
    }
}
L_0897A184:
    { const bool branch_taken = ctx.gpr[20] != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0897A1B0;
      }
      goto L_0897A18C;
    }
L_0897A18C:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g21 = ctx.gpr[21];
    g7 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    g8 = (g21 << 3u);
    g8 = (g21 + g8);
    g8 = (g21 + g8);
    g7 = (g7 + g8);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(8))))));
    g7 = (g7 & 256u);
    { const bool branch_taken = g7 != 0u;
    // nop
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_0897A1B8;
      }
      goto L_0897A1B0;
    }
}
L_0897A1B0:
    if (ctx.gpr[20] != hot_regs.g4) {
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(260)));
        goto L_0897A438;
    }
    goto L_0897A1B8;
L_0897A1B8:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[21] << 3u);
    ctx.gpr[18] = (ctx.gpr[21] + ctx.gpr[8]);
    ctx.gpr[18] = (ctx.gpr[21] + ctx.gpr[18]);
    ctx.gpr[10] = (hot_regs.g7 + ctx.gpr[18]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
        goto L_0897A244;
    }
    goto L_0897A238;
L_0897A238:
{
    float f30 = ctx.fpr[30];
    f30 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = 0u == 0u;
    f30 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f30) ^ 0x80000000u);
    ctx.fpr[30] = f30;
      if (branch_taken) {
          goto L_0897A244;
      }
      goto L_0897A244;
    }
}
L_0897A244:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    ctx.set_fpu_condition((f12 < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    hot_regs.f12 = f12;
        goto L_0897A268;
    }
    goto L_0897A258;
}
L_0897A258:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[30] = ctx.fpr[30] + f12;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0897A26C;
      }
      goto L_0897A268;
    }
}
L_0897A268:
    ctx.fpr[30] = ctx.fpr[30] + hot_regs.f12;
    goto L_0897A26C;
L_0897A26C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((f12 < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.f12 = f12;
        goto L_0897A294;
    }
    goto L_0897A280;
}
L_0897A280:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    { const float fs = f12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[30] = ctx.fpr[30] + f12;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0897A29C;
      }
      goto L_0897A294;
    }
}
L_0897A294:
{
    float f12 = hot_regs.f12;
    { const float fs = f12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.fpr[30] = ctx.fpr[30] + f12;
    hot_regs.f12 = f12;
    goto L_0897A29C;
}
L_0897A29C:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897A434;
      }
      goto L_0897A2AC;
    }
L_0897A2AC:
{
    std::uint32_t g7 = hot_regs.g7;
    ctx.gpr[17] = (0u | 0u);
    g7 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    g7 = (g7 + ctx.gpr[18]);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(8))))));
    g7 = (g7 & 15u);
    g7 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_0897A434;
      }
      goto L_0897A2CC;
    }
}
L_0897A2CC:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g16 = ctx.gpr[16];
    g7 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    g7 = (g7 + ctx.gpr[18]);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(6))))));
    g7 = (g7 + ctx.gpr[17]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(30040)));
    g7 = (g7 + g7);
    g7 = (ctx.gpr[8] + g7);
    g7 = (aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(0)));
    g7 = (g7 & 16383u);
    g16 = (g7 << 16u);
    g16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g16) >> 16u));
    g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = g7 != 0u;
    // nop
    hot_regs.g7 = g7;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_0897A328;
      }
      goto L_0897A304;
    }
}
L_0897A304:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    g7 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    g8 = (g16 << 3u);
    g8 = (g16 + g8);
    g8 = (g16 + g8);
    g7 = (g7 + g8);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(8))))));
    g7 = (g7 & 32u);
    { const bool branch_taken = g7 != 0u;
    // nop
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_0897A414;
      }
      goto L_0897A328;
    }
}
L_0897A328:
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A354;
      }
      goto L_0897A330;
    }
L_0897A330:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    g7 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    g8 = (g16 << 3u);
    g8 = (g16 + g8);
    g8 = (g16 + g8);
    g7 = (g7 + g8);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(8))))));
    g7 = (g7 & 64u);
    { const bool branch_taken = g7 != 0u;
    // nop
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_0897A414;
      }
      goto L_0897A354;
    }
}
L_0897A354:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A374;
      }
      goto L_0897A35C;
    }
L_0897A35C:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    g7 = (g7 + ctx.gpr[18]);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(8))))));
    g7 = (g7 & 256u);
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_0897A39C;
      }
      goto L_0897A374;
    }
}
L_0897A374:
    { const bool branch_taken = ctx.gpr[20] != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0897A394;
      }
      goto L_0897A37C;
    }
L_0897A37C:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    g7 = (g7 + ctx.gpr[18]);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(8))))));
    g7 = (g7 & 256u);
    { const bool branch_taken = g7 != 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_0897A39C;
      }
      goto L_0897A394;
    }
}
L_0897A394:
    { const bool branch_taken = ctx.gpr[20] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_0897A414;
      }
      goto L_0897A39C;
    }
L_0897A39C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[18]);
    hot_regs.g31 = (0x0897A3ACu);
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 583u, 0x08976968u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897A3ACu) goto L_0897A3AC;
    return;
L_0897A3AC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (ctx.gpr[16] << 3u);
    hot_regs.g5 = (ctx.gpr[16] + hot_regs.g5);
    hot_regs.g5 = (ctx.gpr[16] + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g31 = (0x0897A3C8u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 583u, 0x08976968u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897A3C8u) goto L_0897A3C8;
    return;
L_0897A3C8:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897A408;
      }
      goto L_0897A3FC;
    }
L_0897A3FC:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(252), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    goto L_0897A408;
L_0897A408:
    hot_regs.g4 = (0u | 2u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
    goto L_0897A414;
L_0897A414:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    g7 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    g7 = (g7 + ctx.gpr[18]);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(8))))));
    g7 = (g7 & 15u);
    g7 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    // nop
    hot_regs.g7 = g7;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0897A2CC;
      }
      goto L_0897A434;
    }
}
L_0897A434:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(260)));
    goto L_0897A438;
L_0897A438:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g29 = hot_regs.g29;
    g8 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(264)));
    g7 = (g7 + static_cast<std::uint32_t>(1));
    g9 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(268)));
    g8 = (g8 + static_cast<std::uint32_t>(2));
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), g7);
    g7 = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(g9) ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(264), g8);
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_0897A0E8;
      }
      goto L_0897A45C;
    }
}
L_0897A45C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(276)));
    goto L_0897A460;
L_0897A460:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(268)));
    g5 = (g5 + static_cast<std::uint32_t>(600));
    g6 = (g6 + static_cast<std::uint32_t>(600));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(276), g4);
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), g5);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(268), g6);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0897A0AC;
      }
      goto L_0897A498;
    }
}
}
L_0897A498:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(280)));
    goto L_0897A49C;
L_0897A49C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(284)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (g5 + static_cast<std::uint32_t>(12));
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(280), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(284), g5);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0897A04C;
      }
      goto L_0897A4CC;
    }
}
}
L_0897A4CC:
{
    float f12 = hot_regs.f12;
    { const float fs = hot_regs.f22; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[24] < f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0897A5E0;
      }
      goto L_0897A4E0;
    }
}
L_0897A4E0:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(256)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(252)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(300)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(296)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (hot_regs.g4 << 3u);
    hot_regs.g6 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.g31 = (0x0897A518u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 583u, 0x08976968u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897A518u) goto L_0897A518;
    return;
L_0897A518:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (ctx.gpr[16] << 3u);
    hot_regs.g5 = (ctx.gpr[16] + hot_regs.g5);
    hot_regs.g5 = (ctx.gpr[16] + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    hot_regs.g31 = (0x0897A538u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 583u, 0x08976968u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897A538u) goto L_0897A538;
    return;
L_0897A538:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g4 = (17204u << 16u);
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f12) || std::isnan(ctx.fpr[26])) && hot_regs.f12 == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
      if (branch_taken) {
          goto L_0897A5B4;
      }
      goto L_0897A59C;
    }
L_0897A59C:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f13) || std::isnan(ctx.fpr[26])) && hot_regs.f13 == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897A5B4;
      }
      goto L_0897A5AC;
    }
L_0897A5AC:
{
    float f26 = ctx.fpr[26];
    { const bool branch_taken = 0u == 0u;
    { const float fs = f26; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f26 = std::bit_cast<float>(0x7FC00000u); else f26 = fs * ft; }
    ctx.fpr[26] = f26;
      if (branch_taken) {
          goto L_0897A5C0;
      }
      goto L_0897A5B4;
    }
}
L_0897A5B4:
    hot_regs.g31 = (0x0897A5BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897A5BCu) goto L_0897A5BC;
    return;
L_0897A5BC:
    { const float fs = ctx.fpr[0]; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    goto L_0897A5C0;
L_0897A5C0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(304)));
    g5 = (16457u << 16u);
    g5 = (g5 | 4059u);
    f12 = std::bit_cast<float>(g5);
    f12 = ctx.fpr[26] / f12;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0897A5FC;
      }
      goto L_0897A5E0;
    }
}
}
L_0897A5E0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(300)));
    g5 = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(296)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(304)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0897A5FC;
}
L_0897A5FC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(308)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(312)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(316)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(320)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(324)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(328)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(332)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(336)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(340)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(344)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(348)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(352)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(356)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(360)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(364)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(368)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0897A644:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-384));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(344), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(348), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(352), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(356), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(360), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(364), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(368), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(372), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(376), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(380), hot_regs.g31);
    g16 = (hot_regs.g4 | 0u);
    ctx.gpr[30] = (g5 & 255u);
    ctx.gpr[21] = (ctx.gpr[10] & 255u);
    hot_regs.g4 = (ctx.gpr[11] & 255u);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(308), hot_regs.g6);
    ctx.gpr[23] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(304), hot_regs.g7);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(300), ctx.gpr[8]);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const bool branch_taken = g5 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0897A6FC;
      }
      goto L_0897A6C8;
    }
}
L_0897A6C8:
{
    float f12 = hot_regs.f12;
    float f24 = ctx.fpr[24];
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (17036u << 16u);
    f12 = std::bit_cast<float>(g5);
    f12 = hot_regs.f22 + f12;
    g5 = (16345u << 16u);
    g5 = (g5 | 39322u);
    f24 = std::bit_cast<float>(g5);
    { const float fs = hot_regs.f22; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f24 = std::bit_cast<float>(0x7FC00000u); else f24 = fs * ft; }
    ctx.set_fpu_condition((f12 <= f24));
    // nop
    if (!ctx.fpu_condition()) {
    f24 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    ctx.fpr[24] = f24;
        goto L_0897A704;
    }
    goto L_0897A6F4;
}
}
L_0897A6F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A704;
      }
      goto L_0897A6FC;
    }
L_0897A6FC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_0897AD04;
      }
      goto L_0897A704;
    }
L_0897A704:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g5 = (g5 & 63u);
    hot_regs.g6 = (0u | 63u);
    { const bool branch_taken = g5 != hot_regs.g6;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0897A7FC;
      }
      goto L_0897A718;
    }
}
L_0897A718:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A73C;
      }
      goto L_0897A734;
    }
}
L_0897A734:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_0897A740;
      }
      goto L_0897A73C;
    }
L_0897A73C:
    hot_regs.g5 = (0u | 200u);
    goto L_0897A740;
L_0897A740:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A790;
      }
      goto L_0897A748;
    }
L_0897A748:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g4 = (17116u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 + hot_regs.f13;
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(30056));
    hot_regs.g2 = (0u | 1u);
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 250u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    hot_regs.g31 = (0x0897A788u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_089790B0;
}
}
L_0897A788:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(30048), hot_regs.g2);
      if (branch_taken) {
          goto L_0897A7D0;
      }
      goto L_0897A790;
    }
L_0897A790:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g4 = (17116u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 + hot_regs.f13;
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(30056));
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 250u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    hot_regs.g31 = (0x0897A7CCu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_089790B0;
}
}
L_0897A7CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(30048), hot_regs.g2);
    goto L_0897A7D0;
L_0897A7D0:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(30056));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(30048)));
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g5);
    hot_regs.g5 = (ctx.gpr[16] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(30056));
    hot_regs.g6 = (2200u << 16u);
    hot_regs.g31 = (0x0897A7F0u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-26500));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 156u, 0x08B6CD90u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897A7F0u) goto L_0897A7F0;
    return;
L_0897A7F0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(30052), 0u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_0897AD04;
      }
      goto L_0897A7FC;
    }
L_0897A7FC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(30048)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A838;
      }
      goto L_0897A808;
    }
L_0897A808:
{
    float f24 = ctx.fpr[24];
{
    std::uint32_t g4 = hot_regs.g4;
    { const float fs = f24; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f24 = std::bit_cast<float>(0x7FC00000u); else f24 = fs * ft; }
    { const float fs = hot_regs.f22; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[22] = (0u | 100u);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(30048)));
    g4 = (g4 < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_0897A840;
      }
      goto L_0897A830;
    }
}
}
L_0897A830:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(30048)));
      if (branch_taken) {
          goto L_0897A840;
      }
      goto L_0897A838;
    }
L_0897A838:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_0897AD04;
      }
      goto L_0897A840;
    }
L_0897A840:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AD00;
      }
      goto L_0897A84C;
    }
L_0897A84C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(30052)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(30052), g4);
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(30048)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0897A86C;
      }
      goto L_0897A868;
    }
}
L_0897A868:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(30052), 0u);
    goto L_0897A86C;
L_0897A86C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(30052)));
    g4 = (g4 + g4);
    g4 = (ctx.gpr[16] + g4);
    ctx.gpr[17] = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(30056)));
    g4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == g4;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0897ACF0;
      }
      goto L_0897A888;
    }
}
L_0897A888:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g5 = (g17 << 3u);
    g5 = (g17 + g5);
    g5 = (g17 + g5);
    g4 = (g4 + g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8))))));
    g4 = (g4 & 32u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0897A8B4;
      }
      goto L_0897A8AC;
    }
}
L_0897A8AC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897ACF0;
      }
      goto L_0897A8B4;
    }
L_0897A8B4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g5 = (g17 << 3u);
    g5 = (g17 + g5);
    g5 = (g17 + g5);
    g9 = (g4 + g5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(0))))));
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(g9);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    g4 = (g29 + static_cast<std::uint32_t>(88));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    f12 = f12 - f13;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    f14 = f14 - f15;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(f14));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), g4);
    g4 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), g4);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    g5 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), g5);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    { const float fs = f15; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f20 = f20 + f12;
    ctx.set_fpu_condition((f20 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[9] = g9;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_0897ACF0;
      }
      goto L_0897A954;
    }
}
}
L_0897A954:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    ctx.gpr[19] = (0u | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g5 = (g17 << 3u);
    g5 = (g17 + g5);
    g5 = (g17 + g5);
    g4 = (g4 + g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8))))));
    g4 = (g4 & 15u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0897ACF0;
      }
      goto L_0897A980;
    }
}
L_0897A980:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g5 = (g17 << 3u);
    g5 = (g17 + g5);
    g5 = (g17 + g5);
    g4 = (g4 + g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(6))))));
    g4 = (g4 + ctx.gpr[19]);
    g4 = (g4 + g4);
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(30040)));
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 16383u);
    g18 = (g4 << 16u);
    g18 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g18) >> 16u));
    { const bool branch_taken = g17 == g18;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_0897ACC4;
      }
      goto L_0897A9C0;
    }
}
L_0897A9C0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g5 = (g18 << 3u);
    g5 = (g18 + g5);
    g5 = (g18 + g5);
    g4 = (g4 + g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8))))));
    g4 = (g4 & 32u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0897A9EC;
      }
      goto L_0897A9E4;
    }
}
L_0897A9E4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897ACC4;
      }
      goto L_0897A9EC;
    }
L_0897A9EC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g5 = (g18 << 3u);
    g5 = (g18 + g5);
    g5 = (g18 + g5);
    g9 = (g4 + g5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(0))))));
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(g9);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    g4 = (g29 + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    f12 = f12 - f13;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    f14 = f14 - f15;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(f14));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), g4);
    g4 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), g4);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    g5 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), g5);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    { const float fs = f15; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f13 = f13 + f12;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g5 = (g17 << 3u);
    g5 = (g17 + g5);
    g5 = (g17 + g5);
    g4 = (g4 + g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8))))));
    g4 = (g4 & 256u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[9] = g9;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_0897AAB8;
      }
      goto L_0897AAA0;
    }
}
}
L_0897AAA0:
{
    float f12 = hot_regs.f12;
    hot_regs.g4 = (16320u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = ctx.fpr[26]; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f14 = hot_regs.f20 - f12;
    { const bool branch_taken = 0u == 0u;
    f12 = hot_regs.f13 - f12;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0897AAC0;
      }
      goto L_0897AAB8;
    }
}
L_0897AAB8:
    hot_regs.f14 = hot_regs.f20 - ctx.fpr[26];
    hot_regs.f12 = hot_regs.f13 - ctx.fpr[26];
    goto L_0897AAC0;
L_0897AAC0:
{
    float f12 = hot_regs.f12;
    { const float fs = hot_regs.f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f12 < hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0897ACC4;
      }
      goto L_0897AAD8;
    }
}
L_0897AAD8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    hot_regs.f20 = std::sqrt(hot_regs.f20);
    hot_regs.f13 = std::sqrt(hot_regs.f13);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g5 = (g17 << 3u);
    g5 = (g17 + g5);
    g5 = (g17 + g5);
    g4 = (g4 + g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8))))));
    g4 = (g4 & 256u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0897AB1C;
      }
      goto L_0897AB04;
    }
}
L_0897AB04:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    hot_regs.g4 = (16320u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f22; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = hot_regs.f20 - f14;
    { const bool branch_taken = 0u == 0u;
    hot_regs.f13 = hot_regs.f13 - f14;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_0897AB24;
      }
      goto L_0897AB1C;
    }
}
L_0897AB1C:
    hot_regs.f12 = hot_regs.f20 - hot_regs.f22;
    hot_regs.f13 = hot_regs.f13 - hot_regs.f22;
    goto L_0897AB24;
L_0897AB24:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f15 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f14 < hot_regs.f15));
    // nop
    if (ctx.fpu_condition()) {
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    hot_regs.f14 = f14;
        goto L_0897AB3C;
    }
    goto L_0897AB3C;
}
L_0897AB3C:
{
    float f15 = hot_regs.f15;
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f15 < ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    hot_regs.f15 = f15;
        goto L_0897AB54;
    }
    goto L_0897AB54;
}
L_0897AB54:
{
    float f12 = hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f12 < ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13) ^ 0x80000000u);
    hot_regs.f12 = f12;
        goto L_0897AB70;
    }
    goto L_0897AB70;
}
L_0897AB70:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(312), ctx.gpr[19]);
    hot_regs.f12 = hot_regs.f15 + hot_regs.f12;
    hot_regs.f12 = hot_regs.f14 / hot_regs.f12;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (ctx.gpr[17] << 3u);
    hot_regs.g5 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.g31 = (0x0897ABA0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 583u, 0x08976968u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897ABA0u) goto L_0897ABA0;
    return;
L_0897ABA0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f13 - hot_regs.f12;
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
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (ctx.gpr[18] << 3u);
    hot_regs.g5 = (ctx.gpr[18] + hot_regs.g5);
    hot_regs.g5 = (ctx.gpr[18] + hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(316), ctx.gpr[18]);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    hot_regs.g31 = (0x0897ABECu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 583u, 0x08976968u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897ABECu) goto L_0897ABEC;
    return;
L_0897ABEC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f12 = hot_regs.f12 - ctx.fpr[30];
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f13 = hot_regs.f13 - ctx.fpr[28];
    { const float fs = hot_regs.f12; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    { const float fs = hot_regs.f13; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    hot_regs.f14 = std::sqrt(hot_regs.f14);
    hot_regs.f12 = hot_regs.f12 / hot_regs.f14;
    hot_regs.f13 = hot_regs.f13 / hot_regs.f14;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(296)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(292)));
    { const float fs = ctx.fpr[16]; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f14 = hot_regs.f14 + hot_regs.f13;
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(288)));
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(312)));
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(316)));
      if (branch_taken) {
          goto L_0897AC84;
      }
      goto L_0897AC74;
    }
L_0897AC74:
    ctx.set_fpu_condition((hot_regs.f14 <= ctx.fpr[18]));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(304)));
        goto L_0897ACA0;
    }
    goto L_0897AC84;
L_0897AC84:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897ACC4;
      }
      goto L_0897AC8C;
    }
L_0897AC8C:
    ctx.set_fpu_condition((hot_regs.f14 <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897ACC4;
      }
      goto L_0897AC9C;
    }
L_0897AC9C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(304)));
    goto L_0897ACA0;
L_0897ACA0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(300)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    g4 = (g29 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(308)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0897AD04;
      }
      goto L_0897ACC4;
    }
}
L_0897ACC4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g5 = (g17 << 3u);
    g5 = (g17 + g5);
    g5 = (g17 + g5);
    g4 = (g4 + g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8))))));
    g4 = (g4 & 15u);
    g4 = (static_cast<std::int32_t>(g19) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_0897A980;
      }
      goto L_0897ACF0;
    }
}
L_0897ACF0:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (g20 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g20) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_0897A84C;
      }
      goto L_0897AD00;
    }
}
L_0897AD00:
    hot_regs.g2 = (0u | 0u);
    goto L_0897AD04;
L_0897AD04:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(320)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(324)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(328)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(332)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(336)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(340)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(344)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(348)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(352)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(356)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(360)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(364)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(368)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(372)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(376)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(380)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0897AD4C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-400));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(360), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(364), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(368), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(372), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(376), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(380), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(384), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(388), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(392), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(396), hot_regs.g31);
    ctx.gpr[10] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(316), hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(332), hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(328), hot_regs.g7);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(304), ctx.gpr[8]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(312), ctx.gpr[9]);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0897ADE4;
      }
      goto L_0897ADC8;
    }
}
L_0897ADC8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g4 = (g4 & 63u);
    hot_regs.g5 = (0u | 63u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0897ADEC;
      }
      goto L_0897ADDC;
    }
}
L_0897ADDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AE5C;
      }
      goto L_0897ADE4;
    }
L_0897ADE4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_0897B460;
      }
      goto L_0897ADEC;
    }
L_0897ADEC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = (g29 + static_cast<std::uint32_t>(64));
    g4 = (17204u << 16u);
    f12 = std::bit_cast<float>(g4);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(30564));
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 240u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x0897AE30u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_089790B0;
}
}
L_0897AE30:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(30556), hot_regs.g2);
    hot_regs.g4 = (hot_regs.g2 + hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(30564));
    hot_regs.g6 = (2200u << 16u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-26500));
    hot_regs.g31 = (0x0897AE50u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 156u, 0x08B6CD90u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897AE50u) goto L_0897AE50;
    return;
L_0897AE50:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(30560), 0u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_0897B460;
      }
      goto L_0897AE5C;
    }
L_0897AE5C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(30556)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AEA0;
      }
      goto L_0897AE68;
    }
L_0897AE68:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    g4 = (16880u << 16u);
    f12 = std::bit_cast<float>(g4);
    f12 = ctx.fpr[24] + f12;
    ctx.gpr[23] = (0u | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(f12));
    ctx.gpr[30] = (0u | 150u);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(30556)));
    g4 = (g4 < ctx.gpr[30] ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0897AEA8;
      }
      goto L_0897AE98;
    }
}
}
L_0897AE98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(30556)));
      if (branch_taken) {
          goto L_0897AEA8;
      }
      goto L_0897AEA0;
    }
L_0897AEA0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_0897B460;
      }
      goto L_0897AEA8;
    }
L_0897AEA8:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B45C;
      }
      goto L_0897AEB4;
    }
L_0897AEB4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(30560)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(30560), g4);
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(30556)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0897AED4;
      }
      goto L_0897AED0;
    }
}
L_0897AED0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(30560), 0u);
    goto L_0897AED4;
L_0897AED4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f22 = hot_regs.f22;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(30560)));
    g4 = (g4 + g4);
    g4 = (g16 + g4);
    g20 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(30564)));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g20 << 3u);
    g5 = (g20 + g5);
    g5 = (g20 + g5);
    g9 = (g4 + g5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(0))))));
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(g9);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    g4 = (g29 + static_cast<std::uint32_t>(88));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    f12 = f12 - f13;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    f14 = f14 - f15;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(f14));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), g4);
    g4 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), g4);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    g5 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), g5);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    { const float fs = f15; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f22 = f12 + f14;
    f22 = std::sqrt(f22);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(308)));
    ctx.set_fpu_condition((f22 < f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[9] = g9;
    ctx.gpr[20] = g20;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_0897B44C;
      }
      goto L_0897AF8C;
    }
}
}
L_0897AF8C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g22 = ctx.gpr[22];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g5 = (g20 << 3u);
    g5 = (g20 + g5);
    g5 = (g20 + g5);
    g4 = (g4 + g5);
    g22 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8))))));
    g22 = (g22 & 15u);
    { const bool branch_taken = g22 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[22] = g22;
      if (branch_taken) {
          goto L_0897B44C;
      }
      goto L_0897AFB0;
    }
}
L_0897AFB0:
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B44C;
      }
      goto L_0897AFC0;
    }
L_0897AFC0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g20 = ctx.gpr[20];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g5 = (g20 << 3u);
    g5 = (g20 + g5);
    g5 = (g20 + g5);
    g4 = (g4 + g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(6))))));
    g4 = (g4 + ctx.gpr[19]);
    g4 = (g4 + g4);
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(30040)));
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 32768u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0897B43C;
      }
      goto L_0897B000;
    }
}
L_0897B000:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g21 = ctx.gpr[21];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g5 = (g20 << 3u);
    g5 = (g20 + g5);
    g5 = (g20 + g5);
    g4 = (g4 + g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(6))))));
    g5 = (g5 + ctx.gpr[19]);
    g5 = (g5 + g5);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(30040)));
    g5 = (hot_regs.g6 + g5);
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 & 16383u);
    g21 = (g5 << 16u);
    g21 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g21) >> 16u));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8))))));
    g4 = (g4 & 32u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_0897B43C;
      }
      goto L_0897B048;
    }
}
L_0897B048:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g21 = ctx.gpr[21];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g5 = (g21 << 3u);
    g5 = (g21 + g5);
    g5 = (g21 + g5);
    g4 = (g4 + g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8))))));
    g4 = (g4 & 32u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0897B43C;
      }
      goto L_0897B06C;
    }
}
L_0897B06C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g5 = (g21 << 3u);
    g5 = (g21 + g5);
    g5 = (g21 + g5);
    g9 = (g4 + g5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(0))))));
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(g9);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    g4 = (g29 + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    f12 = f12 - f13;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    f14 = f14 - f15;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(f14));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), g4);
    g4 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), g4);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    g5 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), g5);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    { const float fs = f15; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f14;
    f12 = std::sqrt(f12);
    ctx.set_fpu_condition((hot_regs.f22 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[9] = g9;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_0897B120;
      }
      goto L_0897B110;
    }
}
}
L_0897B110:
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897B43C;
      }
      goto L_0897B120;
    }
L_0897B120:
    ctx.set_fpu_condition((hot_regs.f22 <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897B140;
      }
      goto L_0897B130;
    }
L_0897B130:
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897B43C;
      }
      goto L_0897B140;
    }
L_0897B140:
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B43C;
      }
      goto L_0897B150;
    }
L_0897B150:
    hot_regs.g31 = (0x0897B158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B158u) goto L_0897B158;
    return;
L_0897B158:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(304)));
    hot_regs.g5 = (15232u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (ctx.gpr[20] << 3u);
    hot_regs.g6 = (ctx.gpr[20] + hot_regs.g6);
    hot_regs.g6 = (ctx.gpr[20] + hot_regs.g6);
    ctx.gpr[10] = (hot_regs.g5 + hot_regs.g6);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (ctx.gpr[21] << 3u);
    hot_regs.g7 = (ctx.gpr[21] + hot_regs.g7);
    hot_regs.g7 = (ctx.gpr[21] + hot_regs.g7);
    ctx.gpr[10] = (hot_regs.g6 + hot_regs.g7);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g7);
    hot_regs.f12 = hot_regs.f13 - hot_regs.f12;
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g7);
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f12 = hot_regs.f12 - ctx.fpr[30];
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f13 = hot_regs.f13 - ctx.fpr[28];
    { const float fs = hot_regs.f12; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f13; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f20 = hot_regs.f12 + hot_regs.f13;
    hot_regs.f20 = std::sqrt(hot_regs.f20);
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(312)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.g6 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_0897B2E0;
      }
      goto L_0897B2B8;
    }
L_0897B2B8:
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g7 = (16384u << 16u);
    hot_regs.g31 = (0x0897B2D0u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g7);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 80u, 0x08A1C7BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B2D0u) goto L_0897B2D0;
    return;
L_0897B2D0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B33C;
      }
      goto L_0897B2D8;
    }
L_0897B2D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0897B33C;
      }
      goto L_0897B2E0;
    }
L_0897B2E0:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    hot_regs.g4 = (2246u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1840));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g4);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_0897B330;
      }
      goto L_0897B328;
    }
L_0897B328:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u + static_cast<std::uint32_t>(1));
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_0897B330;
}
L_0897B330:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B33C;
      }
      goto L_0897B338;
    }
L_0897B338:
    ctx.gpr[17] = (0u | 1u);
    goto L_0897B33C;
L_0897B33C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B368;
      }
      goto L_0897B344;
    }
L_0897B344:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(324)));
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897B368;
      }
      goto L_0897B358;
    }
L_0897B358:
    ctx.set_fpu_condition((hot_regs.f20 < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(332)));
        goto L_0897B398;
    }
    goto L_0897B368;
L_0897B368:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B42C;
      }
      goto L_0897B370;
    }
L_0897B370:
    ctx.set_fpu_condition((hot_regs.f20 <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897B42C;
      }
      goto L_0897B380;
    }
L_0897B380:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(320)));
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897B42C;
      }
      goto L_0897B394;
    }
L_0897B394:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(332)));
    goto L_0897B398;
L_0897B398:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(328)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(316)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    hot_regs.g31 = (0x0897B3D4u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B3D4u) goto L_0897B3D4;
    return;
L_0897B3D4:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B42C;
      }
      goto L_0897B3E4;
    }
L_0897B3E4:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    f13 = hot_regs.f12 - f13;
    hot_regs.f14 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f13 < hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) ^ 0x80000000u);
    hot_regs.f13 = f13;
        goto L_0897B400;
    }
    goto L_0897B400;
}
L_0897B400:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16448u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(316)));
    hot_regs.g4 = g4;
        goto L_0897B420;
    }
    goto L_0897B418;
}
L_0897B418:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_0897B460;
      }
      goto L_0897B420;
    }
L_0897B420:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_0897B460;
      }
      goto L_0897B42C;
    }
L_0897B42C:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g18) < 5 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_0897B150;
      }
      goto L_0897B43C;
    }
}
L_0897B43C:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g19) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_0897AFC0;
      }
      goto L_0897B44C;
    }
}
L_0897B44C:
{
    std::uint32_t g23 = ctx.gpr[23];
    g23 = (g23 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g23) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[23] = g23;
      if (branch_taken) {
          goto L_0897AEB4;
      }
      goto L_0897B45C;
    }
}
L_0897B45C:
    hot_regs.g2 = (0u | 0u);
    goto L_0897B460;
L_0897B460:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(336)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(340)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(344)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(348)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(352)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(356)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(360)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(364)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(368)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(372)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(376)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(380)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(384)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(388)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(392)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(396)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0897B4A8:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B4B0:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (2200u << 16u);
    jump_target = hot_regs.g31;
    g2 = (g2 + static_cast<std::uint32_t>(-19280));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0897B4BC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x0897B4CCu);
    // nop
    hot_regs.g29 = g29;
    goto L_0897B4B0;
}
L_0897B4CC:
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
L_0897B4D8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x0897B4F8u);
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g29 = g29;
    goto L_0897B4B0;
}
L_0897B4F8:
    if (hot_regs.g2 == ctx.gpr[16]) {
    ctx.gpr[18] = (0u | 1u);
        goto L_0897B540;
    }
    goto L_0897B500;
L_0897B500:
    hot_regs.g31 = (0x0897B508u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B508u) goto L_0897B508;
    return;
L_0897B508:
    if (hot_regs.g2 == ctx.gpr[16]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_0897B530;
    }
    goto L_0897B510;
L_0897B510:
    hot_regs.g31 = (0x0897B518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x08980688u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B518u) goto L_0897B518;
    return;
L_0897B518:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 ^ ctx.gpr[16]);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[17] & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0897B534;
      }
      goto L_0897B52C;
    }
}
L_0897B52C:
    ctx.gpr[17] = (0u | 1u);
    goto L_0897B530;
L_0897B530:
    hot_regs.g4 = (ctx.gpr[17] & 255u);
    goto L_0897B534;
L_0897B534:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B540;
      }
      goto L_0897B53C;
    }
L_0897B53C:
    ctx.gpr[18] = (0u | 1u);
    goto L_0897B540;
L_0897B540:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[18] & 255u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0897B55C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x0897B574u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 472u, 0x08AC59D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B574u) goto L_0897B574;
    return;
L_0897B574:
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24608));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), hot_regs.g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(0u));
    hot_regs.g31 = (0x0897B58Cu);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(188));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B58Cu) goto L_0897B58C;
    return;
L_0897B58C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (17264u << 16u);
    f13 = std::bit_cast<float>(g4);
    g4 = (17126u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(f13));
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(200), 0u);
    g4 = (17116u << 16u);
    f13 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(f12));
    g4 = (16512u << 16u);
    f12 = std::bit_cast<float>(g4);
    g4 = (16640u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(f12));
    g4 = (17096u << 16u);
    f12 = std::bit_cast<float>(g4);
    g4 = (17430u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g4 = (0u | 1u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(232), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(233), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(234), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16868));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0897B618;
      }
      goto L_0897B60C;
    }
}
}
L_0897B60C:
    hot_regs.g31 = (0x0897B614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B614u) goto L_0897B614;
    return;
L_0897B614:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897B618;
L_0897B618:
    hot_regs.g31 = (0x0897B620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 729u, 0x089C718Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B620u) goto L_0897B620;
    return;
L_0897B620:
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B63C;
      }
      goto L_0897B630;
    }
L_0897B630:
    hot_regs.g31 = (0x0897B638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B638u) goto L_0897B638;
    return;
L_0897B638:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897B63C;
L_0897B63C:
    hot_regs.g31 = (0x0897B644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 729u, 0x089C718Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B644u) goto L_0897B644;
    return;
L_0897B644:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 48u);
    aot_mem.aot_store16(hot_regs.g2 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16860));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0897B664;
      }
      goto L_0897B658;
    }
}
L_0897B658:
    hot_regs.g31 = (0x0897B660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B660u) goto L_0897B660;
    return;
L_0897B660:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897B664;
L_0897B664:
    hot_regs.g31 = (0x0897B66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 729u, 0x089C718Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B66Cu) goto L_0897B66C;
    return;
L_0897B66C:
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B688;
      }
      goto L_0897B67C;
    }
L_0897B67C:
    hot_regs.g31 = (0x0897B684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B684u) goto L_0897B684;
    return;
L_0897B684:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897B688;
L_0897B688:
    hot_regs.g31 = (0x0897B690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 729u, 0x089C718Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B690u) goto L_0897B690;
    return;
L_0897B690:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 49u);
    aot_mem.aot_store16(hot_regs.g2 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16852));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0897B6B0;
      }
      goto L_0897B6A4;
    }
}
L_0897B6A4:
    hot_regs.g31 = (0x0897B6ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B6ACu) goto L_0897B6AC;
    return;
L_0897B6AC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897B6B0;
L_0897B6B0:
    hot_regs.g31 = (0x0897B6B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 729u, 0x089C718Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B6B8u) goto L_0897B6B8;
    return;
L_0897B6B8:
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B6D4;
      }
      goto L_0897B6C8;
    }
L_0897B6C8:
    hot_regs.g31 = (0x0897B6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B6D0u) goto L_0897B6D0;
    return;
L_0897B6D0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897B6D4;
L_0897B6D4:
    hot_regs.g31 = (0x0897B6DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 729u, 0x089C718Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B6DCu) goto L_0897B6DC;
    return;
L_0897B6DC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (0u | 50u);
    aot_mem.aot_store16(hot_regs.g2 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g2 = (ctx.gpr[16] | 0u);
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
L_0897B6FC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0897B774;
      }
      goto L_0897B71C;
    }
}
L_0897B71C:
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24608));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), hot_regs.g4);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(188));
    hot_regs.g31 = (0x0897B734u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 50u, 0x08AF44D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B734u) goto L_0897B734;
    return;
L_0897B734:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    hot_regs.g4 = (0u | 0u);
    hot_regs.g31 = (0x0897B748u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 230u, 0x08861824u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B748u) goto L_0897B748;
    return;
L_0897B748:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0897B754u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B754u) goto L_0897B754;
    return;
L_0897B754:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0897B760u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 486u, 0x08AC5AE8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B760u) goto L_0897B760;
    return;
L_0897B760:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B774;
      }
      goto L_0897B76C;
    }
L_0897B76C:
    hot_regs.g31 = (0x0897B774u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B774u) goto L_0897B774;
    return;
L_0897B774:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0897B78C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x0897B79Cu);
    // nop
    hot_regs.g29 = g29;
    goto L_0897B8EC;
}
L_0897B79C:
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
L_0897B7A8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x0897B7B8u);
    // nop
    hot_regs.g29 = g29;
    goto L_0897B8EC;
}
L_0897B7B8:
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
L_0897B7C4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x0897B7D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 605u, 0x08AC646Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B7D4u) goto L_0897B7D4;
    return;
L_0897B7D4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B7E4;
      }
      goto L_0897B7DC;
    }
L_0897B7DC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_0897B7E8;
      }
      goto L_0897B7E4;
    }
L_0897B7E4:
    hot_regs.g2 = (0u | 1u);
    goto L_0897B7E8;
L_0897B7E8:
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
L_0897B7F4:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B7FC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B804:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B80C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x0897B81Cu);
    // nop
    hot_regs.g29 = g29;
    goto L_0897BE30;
}
L_0897B81C:
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
L_0897B828:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (0u | 1u);
    g6 = (17116u << 16u);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(232), static_cast<std::uint8_t>(g5));
    f12 = std::bit_cast<float>(g6);
    g6 = (17264u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(0u);
    g6 = (17126u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(233), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(0u));
    g6 = (16512u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(200), 0u);
    f12 = std::bit_cast<float>(g6);
    g6 = (16640u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(f12));
    g6 = (17096u << 16u);
    f12 = std::bit_cast<float>(g6);
    g6 = (17430u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(f12));
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(234), static_cast<std::uint8_t>(g5));
    local_pc = jump_target;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_0897B8A4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x0897B8B8u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 640u, 0x08AAEFC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B8B8u) goto L_0897B8B8;
    return;
L_0897B8B8:
    hot_regs.g31 = (0x0897B8C0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16880)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B8C0u) goto L_0897B8C0;
    return;
L_0897B8C0:
    hot_regs.g31 = (0x0897B8C8u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 632u, 0x08AAEF5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B8C8u) goto L_0897B8C8;
    return;
L_0897B8C8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16896)));
    hot_regs.g31 = (0x0897B8D4u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(188));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B8D4u) goto L_0897B8D4;
    return;
L_0897B8D4:
    hot_regs.g31 = (0x0897B8DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 642u, 0x08AAEFE8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B8DCu) goto L_0897B8DC;
    return;
L_0897B8DC:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0897B8EC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29552)));
    hot_regs.g5 = (50944u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(257));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    hot_regs.g31 = (0x0897B940u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 230u, 0x08861824u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B940u) goto L_0897B940;
    return;
L_0897B940:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B958;
      }
      goto L_0897B94C;
    }
L_0897B94C:
    hot_regs.g31 = (0x0897B954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B954u) goto L_0897B954;
    return;
L_0897B954:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0897B958;
L_0897B958:
    hot_regs.g31 = (0x0897B960u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 289u, 0x0880D0D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B960u) goto L_0897B960;
    return;
L_0897B960:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[17] != 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
        goto L_0897B97C;
    }
    goto L_0897B96C;
L_0897B96C:
    hot_regs.g31 = (0x0897B974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B974u) goto L_0897B974;
    return;
L_0897B974:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    goto L_0897B97C;
L_0897B97C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g17 = ctx.gpr[17];
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(6852), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(6856), std::bit_cast<std::uint32_t>(f12));
    g17 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = g17 != 0u;
    // nop
    ctx.gpr[17] = g17;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0897B9A0;
      }
      goto L_0897B994;
    }
}
}
L_0897B994:
    hot_regs.g31 = (0x0897B99Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B99Cu) goto L_0897B99C;
    return;
L_0897B99C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0897B9A0;
L_0897B9A0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    hot_regs.g4 = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(6860), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x0897B9B4u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B9B4u) goto L_0897B9B4;
    return;
L_0897B9B4:
    hot_regs.g4 = (0u | 2u);
    hot_regs.g31 = (0x0897B9C0u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B9C0u) goto L_0897B9C0;
    return;
L_0897B9C0:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    hot_regs.f12 = hot_regs.f14 - hot_regs.f15;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(188));
    hot_regs.f13 = ctx.fpr[16] - hot_regs.f15;
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    hot_regs.g31 = (0x0897B9E8u);
    hot_regs.f15 = ctx.fpr[16] + hot_regs.f15;
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897B9E8u) goto L_0897B9E8;
    return;
L_0897B9E8:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (0u | 255u);
    hot_regs.g6 = (0u | 255u);
    hot_regs.g7 = (0u | 255u);
    hot_regs.g31 = (0x0897BA04u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BA04u) goto L_0897BA04;
    return;
L_0897BA04:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0897BA14u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 72u, 0x08AF4650u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BA14u) goto L_0897BA14;
    return;
L_0897BA14:
    hot_regs.g31 = (0x0897BA1Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_0897BCC0;
L_0897BA1C:
    hot_regs.g31 = (0x0897BA24u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 563u, 0x08AC6170u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BA24u) goto L_0897BA24;
    return;
L_0897BA24:
    if (hot_regs.g2 == 0u) {
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_0897BA38;
    }
    goto L_0897BA2C;
L_0897BA2C:
    hot_regs.g31 = (0x0897BA34u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_0897BCC8;
L_0897BA34:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    goto L_0897BA38;
L_0897BA38:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g4 + g4);
    hot_regs.g6 = (g4 << 8u);
    g4 = (g4 + g5);
    g4 = (g4 << 5u);
    g5 = (2238u << 16u);
    g4 = (hot_regs.g6 + g4);
    g5 = (g5 + static_cast<std::uint32_t>(-6992));
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0897BC30;
      }
      goto L_0897BA64;
    }
}
L_0897BA64:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0897BA7C;
      }
      goto L_0897BA70;
    }
L_0897BA70:
    hot_regs.g31 = (0x0897BA78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BA78u) goto L_0897BA78;
    return;
L_0897BA78:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897BA7C;
L_0897BA7C:
    hot_regs.g31 = (0x0897BA84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 732u, 0x089C71A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BA84u) goto L_0897BA84;
    return;
L_0897BA84:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g2 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_0897BB20;
      }
      goto L_0897BA90;
    }
L_0897BA90:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[17] != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_0897BAAC;
    }
    goto L_0897BA9C;
L_0897BA9C:
    hot_regs.g31 = (0x0897BAA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BAA4u) goto L_0897BAA4;
    return;
L_0897BAA4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897BAAC;
L_0897BAAC:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0897BAC0;
      }
      goto L_0897BAB4;
    }
L_0897BAB4:
    hot_regs.g31 = (0x0897BABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BABCu) goto L_0897BABC;
    return;
L_0897BABC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897BAC0;
L_0897BAC0:
    hot_regs.g31 = (0x0897BAC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 732u, 0x089C71A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BAC8u) goto L_0897BAC8;
    return;
L_0897BAC8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[20] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_0897BAE0;
      }
      goto L_0897BAD4;
    }
L_0897BAD4:
    hot_regs.g31 = (0x0897BADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BADCu) goto L_0897BADC;
    return;
L_0897BADC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897BAE0;
L_0897BAE0:
    hot_regs.g31 = (0x0897BAE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 729u, 0x089C718Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BAE8u) goto L_0897BAE8;
    return;
L_0897BAE8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[19] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_0897BB00;
      }
      goto L_0897BAF4;
    }
L_0897BAF4:
    hot_regs.g31 = (0x0897BAFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BAFCu) goto L_0897BAFC;
    return;
L_0897BAFC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897BB00;
L_0897BB00:
    hot_regs.g31 = (0x0897BB08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 732u, 0x089C71A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BB08u) goto L_0897BB08;
    return;
L_0897BB08:
    hot_regs.g4 = (hot_regs.g2 << 3u);
    hot_regs.g4 = (ctx.gpr[19] + hot_regs.g4);
    hot_regs.g6 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0897BB20u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 378u, 0x0880D928u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BB20u) goto L_0897BB20;
    return;
L_0897BB20:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0897BB38;
      }
      goto L_0897BB2C;
    }
L_0897BB2C:
    hot_regs.g31 = (0x0897BB34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BB34u) goto L_0897BB34;
    return;
L_0897BB34:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897BB38;
L_0897BB38:
    hot_regs.g31 = (0x0897BB40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 730u, 0x089C7194u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BB40u) goto L_0897BB40;
    return;
L_0897BB40:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BBC4;
      }
      goto L_0897BB48;
    }
L_0897BB48:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-10001)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BBC4;
      }
      goto L_0897BB54;
    }
L_0897BB54:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(200)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8144)));
    g4 = (g4 + static_cast<std::uint32_t>(1200));
    g19 = (hot_regs.g5 < g4 ? 1u : 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    g19 = (g19 ^ 1u);
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_0897BB7C;
      }
      goto L_0897BB70;
    }
}
L_0897BB70:
    hot_regs.g31 = (0x0897BB78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BB78u) goto L_0897BB78;
    return;
L_0897BB78:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0897BB7C;
L_0897BB7C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (16153u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g4);
    ctx.gpr[11] = (ctx.gpr[11] | 39322u);
    ctx.gpr[9] = (hot_regs.g29 + static_cast<std::uint32_t>(20));
    hot_regs.f14 = std::bit_cast<float>(ctx.gpr[11]);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0897BBBCu);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 989u, 0x08813B5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BBBCu) goto L_0897BBBC;
    return;
L_0897BBBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BBF8;
      }
      goto L_0897BBC4;
    }
L_0897BBC4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (0x0897BBD8u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 230u, 0x08861824u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BBD8u) goto L_0897BBD8;
    return;
L_0897BBD8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897BBF0;
      }
      goto L_0897BBE4;
    }
L_0897BBE4:
    hot_regs.g31 = (0x0897BBECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BBECu) goto L_0897BBEC;
    return;
L_0897BBEC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0897BBF0;
L_0897BBF0:
    hot_regs.g31 = (0x0897BBF8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 151u, 0x08810A58u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BBF8u) goto L_0897BBF8;
    return;
L_0897BBF8:
    hot_regs.g31 = (0x0897BC00u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 532u, 0x0897DF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BC00u) goto L_0897BC00;
    return;
L_0897BC00:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0897BC18;
      }
      goto L_0897BC0C;
    }
L_0897BC0C:
    hot_regs.g31 = (0x0897BC14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BC14u) goto L_0897BC14;
    return;
L_0897BC14:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897BC18;
L_0897BC18:
    hot_regs.g31 = (0x0897BC20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 642u, 0x089C6DDCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BC20u) goto L_0897BC20;
    return;
L_0897BC20:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BC30;
      }
      goto L_0897BC28;
    }
L_0897BC28:
    hot_regs.g31 = (0x0897BC30u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 624u, 0x0897E5E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BC30u) goto L_0897BC30;
    return;
L_0897BC30:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897BC48;
      }
      goto L_0897BC3C;
    }
L_0897BC3C:
    hot_regs.g31 = (0x0897BC44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BC44u) goto L_0897BC44;
    return;
L_0897BC44:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0897BC48;
L_0897BC48:
    hot_regs.g31 = (0x0897BC50u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 299u, 0x0880D228u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BC50u) goto L_0897BC50;
    return;
L_0897BC50:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    hot_regs.g5 = (50944u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(29552), g4);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    g18 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0897BC88:
{
    float f0 = ctx.fpr[0];
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g4 = (16384u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    g4 = (16448u << 16u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (16256u << 16u);
    f0 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 - f13;
    f12 = f12 + f0;
    jump_target = hot_regs.g31;
    f0 = f0 - f12;
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.fpr[0] = f0;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_0897BCC0:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897BCC8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    hot_regs.g5 = (hot_regs.g5 >> 31u);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 1u));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (hot_regs.g6 >> 31u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    hot_regs.f13 = hot_regs.f13 + hot_regs.f15;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    hot_regs.g5 = (16256u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.f13 = hot_regs.f13 - hot_regs.f20;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    hot_regs.f15 = ctx.fpr[16] + hot_regs.f15;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), hot_regs.g31);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    hot_regs.g31 = (0x0897BD54u);
    hot_regs.f15 = hot_regs.f15 + hot_regs.f20;
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BD54u) goto L_0897BD54;
    return;
L_0897BD54:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 255u);
    hot_regs.g6 = (0u | 139u);
    hot_regs.g7 = (0u | 194u);
    hot_regs.g31 = (0x0897BD74u);
    ctx.gpr[8] = (0u | 180u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BD74u) goto L_0897BD74;
    return;
L_0897BD74:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x0897BD84u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BD84u) goto L_0897BD84;
    return;
L_0897BD84:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    hot_regs.g5 = (hot_regs.g5 >> 31u);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 1u));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g5 = (hot_regs.g5 >> 31u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f14;
    hot_regs.f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f15)));
    hot_regs.f14 = hot_regs.f15 + hot_regs.f14;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-47));
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.f13 = std::bit_cast<float>(0u);
    hot_regs.f12 = hot_regs.f12 - hot_regs.f20;
    hot_regs.f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f15)));
    hot_regs.g31 = (0x0897BDE8u);
    hot_regs.f14 = hot_regs.f14 + hot_regs.f20;
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BDE8u) goto L_0897BDE8;
    return;
L_0897BDE8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 255u);
    hot_regs.g6 = (0u | 139u);
    hot_regs.g7 = (0u | 194u);
    hot_regs.g31 = (0x0897BE04u);
    ctx.gpr[8] = (0u | 180u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BE04u) goto L_0897BE04;
    return;
L_0897BE04:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x0897BE14u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BE14u) goto L_0897BE14;
    return;
L_0897BE14:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
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
L_0897BE30:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-544));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(476), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(492), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(500), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(504), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(508), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(512), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(516), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(520), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(524), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(528), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(532), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(536), hot_regs.g31);
    hot_regs.g31 = (0x0897BE7Cu);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 563u, 0x08AC6170u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BE7Cu) goto L_0897BE7C;
    return;
L_0897BE7C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 529u, 0x0897DF18u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_0897BE84;
    }
L_0897BE84:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    hot_regs.g5 = (16256u << 16u);
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(48));
    ctx.fpr[30] = std::bit_cast<float>(hot_regs.g5);
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(64));
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(80));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0897BEB0;
      }
      goto L_0897BEA8;
    }
}
L_0897BEA8:
    hot_regs.g31 = (0x0897BEB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BEB0u) goto L_0897BEB0;
    return;
L_0897BEB0:
    hot_regs.g31 = (0x0897BEB8u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 289u, 0x0880D0D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BEB8u) goto L_0897BEB8;
    return;
L_0897BEB8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    hot_regs.g4 = g4;
        goto L_0897BED0;
    }
    goto L_0897BEC4;
}
L_0897BEC4:
    hot_regs.g31 = (0x0897BECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BECCu) goto L_0897BECC;
    return;
L_0897BECC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0897BED0;
L_0897BED0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(6852), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(6856), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (g4 != 0u) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(204)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
        goto L_0897BEF8;
    }
    goto L_0897BEEC;
}
}
L_0897BEEC:
    hot_regs.g31 = (0x0897BEF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BEF4u) goto L_0897BEF4;
    return;
L_0897BEF4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    goto L_0897BEF8;
L_0897BEF8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(6860), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6608)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0897BF1C;
      }
      goto L_0897BF0C;
    }
}
L_0897BF0C:
{
    std::uint32_t g28 = ctx.gpr[28];
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(6608), hot_regs.g4);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(6612), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(6616), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_0897BF1C;
}
L_0897BF1C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(233)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0897BFEC;
      }
      goto L_0897BF28;
    }
L_0897BF28:
    hot_regs.g31 = (0x0897BF30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BF30u) goto L_0897BF30;
    return;
L_0897BF30:
    { const bool branch_taken = hot_regs.g2 == 0u;
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(104));
      if (branch_taken) {
          goto L_0897BF40;
      }
      goto L_0897BF38;
    }
L_0897BF38:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8144)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), hot_regs.g4);
    goto L_0897BF40;
L_0897BF40:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(233), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = g4;
        goto L_0897BF60;
    }
    goto L_0897BF54;
}
L_0897BF54:
    hot_regs.g31 = (0x0897BF5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BF5Cu) goto L_0897BF5C;
    return;
L_0897BF5C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_0897BF60;
L_0897BF60:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    hot_regs.g5 = (hot_regs.g5 >> 31u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    hot_regs.g5 = (hot_regs.g5 >> 31u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    hot_regs.f12 = hot_regs.f12 + ctx.fpr[30];
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    hot_regs.g4 = (hot_regs.g7 | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f13 = hot_regs.f14 + hot_regs.f15;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x0897BFC4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f13));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 605u, 0x0880ED24u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BFC4u) goto L_0897BFC4;
    return;
L_0897BFC4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    hot_regs.g4 = g4;
        goto L_0897BFDC;
    }
    goto L_0897BFD0;
}
L_0897BFD0:
    hot_regs.g31 = (0x0897BFD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BFD8u) goto L_0897BFD8;
    return;
L_0897BFD8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0897BFDC;
L_0897BFDC:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(6612));
    hot_regs.g31 = (0x0897BFECu);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 610u, 0x0880EE6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0897BFECu) goto L_0897BFEC;
    return;
L_0897BFEC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (hot_regs.g4 != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        (void)rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 2u, 0x0897C004u>(ctx, &aot_mem, &hot_regs); return;
    }
    goto L_0897BFF8;
L_0897BFF8:
    hot_regs.g31 = (0x0897C000u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs);
    return;
}

void recomp_unit_0093(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0093_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_93(Runtime &runtime) {
    runtime.register_generated_unit(93u, 0x08978000u, 16384u, &recomp_unit_0093, &recomp_unit_0093_entry);
    runtime.register_function(0x08978000u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978014u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897803Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978058u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978064u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978078u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978080u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978090u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089780B4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089780BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089780DCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089780E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978104u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897810Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897812Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978134u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978154u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897815Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978160u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089781F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978204u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897820Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978214u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978228u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897824Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897826Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978270u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089782A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089782BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978348u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978350u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978358u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978378u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897837Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089783A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089783ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897840Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978410u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978468u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897847Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978490u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089784A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089784B8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089784CCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089784E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089784F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897850Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978540u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089785A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089785ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978604u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978618u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897862Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978640u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978654u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978668u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978684u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978694u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089786A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089786DCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978768u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978774u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897877Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978790u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897879Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089787B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089787D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089787E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089787F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978808u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089788ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089788B4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089788E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897890Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978914u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978948u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978958u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978988u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089789E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A3Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A4Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A68u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A98u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978AA8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978AD4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978AE8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B04u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B14u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B28u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B30u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B78u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978BB8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978BD8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978BF4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C0Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C2Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C48u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C50u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978D08u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978D20u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978D30u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978D60u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978D80u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978D88u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978D90u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978DA8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978DACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978DB4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978DCCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978DDCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E0Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E2Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E34u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E3Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E54u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E58u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E60u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978EC8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978ECCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978EECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F0Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F18u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F4Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F54u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F98u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978FA4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978FB8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978FDCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978FE8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978FFCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979020u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897902Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897903Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979060u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897906Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897907Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089790B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979120u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979140u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979168u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089791A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089791C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089791E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089791F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979208u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979210u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979220u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979244u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897924Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897926Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979274u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979294u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897929Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089792BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089792C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089792E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089792ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089792F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897936Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979380u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979394u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089793A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089793B4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089793C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089793D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089793E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089793F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979400u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979408u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979410u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979424u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979448u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979468u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897946Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089794A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897950Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897951Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979520u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979564u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979570u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979580u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979588u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089795A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089795BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979610u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979620u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979624u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979664u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979670u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897967Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979684u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897969Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089796B4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089796C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089796D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089796E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089796F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979718u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979720u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897974Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979760u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979768u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897979Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089797A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089797ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089797B4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089797BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089797E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089797ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979818u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897982Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979834u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979868u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979870u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979874u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897987Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979894u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089798A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089798CCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979934u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979940u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979958u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979994u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979998u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089799D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089799E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089799F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A2Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A54u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979AB0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979ADCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979AECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B34u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B38u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B98u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979BD8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979BE0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979C5Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979CD8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979CE0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979CE8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D38u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D8Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979DA0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979DB4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979DBCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979DD0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979DD8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979DECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979DF4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E04u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E10u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E18u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E30u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E44u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E4Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E60u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E68u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E7Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E84u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E94u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979EA0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979EA4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979EC4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979ED4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979EE0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979F28u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979FC8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979FE8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A018u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A04Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A078u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A0ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A0BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A0D4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A0E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A108u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A12Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A134u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A158u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A160u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A184u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A18Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A1B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A1B8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A238u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A244u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A258u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A268u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A26Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A280u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A294u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A29Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A2ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A2CCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A304u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A328u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A330u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A354u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A35Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A374u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A37Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A394u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A39Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A3ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A3C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A3FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A408u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A414u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A434u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A438u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A45Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A460u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A498u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A49Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A4CCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A4E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A518u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A538u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A59Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A5ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A5B4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A5BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A5C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A5E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A5FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A644u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A6C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A6F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A6FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A704u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A718u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A734u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A73Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A740u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A748u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A788u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A790u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A7CCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A7D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A7F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A7FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A808u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A830u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A838u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A840u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A84Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A868u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A86Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A888u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A8ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A8B4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A954u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A980u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A9C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A9E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A9ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AAA0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AAB8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AAC0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AAD8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB04u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB1Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB24u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB3Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB54u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB70u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ABA0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ABECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC74u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC84u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC8Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC9Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ACA0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ACC4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ACF0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD00u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD04u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD4Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ADC8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ADDCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ADE4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ADECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE30u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE50u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE5Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE68u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE98u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AEA0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AEA8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AEB4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AED0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AED4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF8Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AFB0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AFC0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B000u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B048u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B06Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B110u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B120u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B130u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B140u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B150u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B158u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2B8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B328u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B330u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B338u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B33Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B344u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B358u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B368u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B370u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B380u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B394u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B398u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B3D4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B3E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B400u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B418u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B420u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B42Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B43Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B44Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B45Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B460u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B4A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B4B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B4BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B4CCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B4D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B4F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B500u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B508u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B510u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B518u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B52Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B530u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B534u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B53Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B540u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B55Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B574u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B58Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B60Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B614u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B618u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B620u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B630u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B638u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B63Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B644u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B658u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B660u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B664u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B66Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B67Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B684u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B688u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B690u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B6A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B6ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B6B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B6B8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B6C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B6D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B6D4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B6DCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B6FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B71Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B734u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B748u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B754u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B760u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B76Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B774u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B78Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B79Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B7A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B7B8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B7C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B7D4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B7DCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B7E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B7E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B7F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B7FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B804u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B80Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B81Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B828u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B8A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B8B8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B8C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B8C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B8D4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B8DCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B8ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B940u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B94Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B954u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B958u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B960u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B96Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B974u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B97Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B994u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B99Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B9A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B9B4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B9C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B9E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA04u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA14u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA1Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA24u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA2Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA34u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA38u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA64u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA70u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA78u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA7Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA84u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA90u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA9Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BAA4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BAACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BAB4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BABCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BAC0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BAC8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BAD4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BADCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BAE0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BAE8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BAF4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BAFCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB00u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB08u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB20u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB2Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB34u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB38u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB40u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB48u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB54u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB70u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB78u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB7Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BBBCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BBC4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BBD8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BBE4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BBECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BBF0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BBF8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BC00u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BC0Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BC14u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BC18u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BC20u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BC28u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BC30u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BC3Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BC44u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BC48u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BC50u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BC88u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BCC0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BCC8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BD54u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BD74u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BD84u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BDE8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE04u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE14u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE30u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE7Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE84u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BEA8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BEB0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BEB8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BEC4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BECCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BED0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BEECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BEF4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BEF8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF0Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF1Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF28u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF30u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF38u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF40u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF54u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF5Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF60u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BFC4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BFD0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BFD8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BFDCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BFECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BFF8u, &recomp_unit_0093, "recomp_unit_0093");
}
} // namespace psprecomp
