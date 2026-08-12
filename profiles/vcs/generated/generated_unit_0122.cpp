#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0122[4075] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0,
    0, 19, 20, 21, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 25, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32,
    0, 0, 0, 0, 33, 0, 34, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0,
    41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 55, 0, 0, 56, 0, 57,
    0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0,
    0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 71, 0, 72, 0, 73, 74, 0, 0, 0,
    0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 81, 0, 0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 0,
    86, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 91, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    98, 0, 0, 99, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 0, 110, 0,
    0, 111, 0, 0, 112, 0, 113, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122,
    0, 0, 0, 0, 123, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 130,
    0, 0, 0, 0, 0, 0, 131, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0,
    138, 0, 0, 0, 139, 0, 140, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 145, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0,
    0, 159, 0, 0, 0, 0, 0, 0, 160, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 166,
    0, 167, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0,
    0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 180, 0, 0, 181, 0, 182, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 223, 0, 224, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 237,
    0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0,
    0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0,
    0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0,
    0, 252, 253, 0, 254, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 261,
    0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 269, 0, 270,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 276,
    0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0,
    0, 281, 0, 282, 0, 283, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288,
    0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0,
    0, 0, 0, 0, 0, 0, 293, 0, 294, 295, 0, 296, 0, 0, 0, 297, 0, 0, 0, 298, 0, 299, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 313, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0,
    0, 0, 337, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 342, 0, 343, 0, 0, 0,
    0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0,
    350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 355, 0, 0,
    356, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 365, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 372,
    0, 373, 0, 374, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 378, 0, 379, 0, 0, 380, 0, 381, 0, 382, 0, 383, 0, 0, 0, 384,
    0, 385, 0, 0, 0, 386, 0, 0, 387, 0, 388, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0,
    0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 0, 397, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 407, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 0, 411, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 419, 0, 0, 0,
    0, 420, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 427, 0, 428, 0, 429,
    0, 430, 431, 0, 432, 0, 433, 0, 0, 0, 434, 0, 435, 0, 436, 437, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 443,
    0, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 453, 0, 0, 0, 0, 0, 0, 0, 454, 0,
    0, 0, 455, 0, 0, 456, 0, 457, 0, 0, 458, 0, 459, 460, 0, 0, 461, 0, 0, 462, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0,
    0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 469,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 475, 0, 476, 0,
    477, 0, 0, 0, 0, 0, 478, 479, 0, 480, 0, 481, 0, 0, 482, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0,
    485, 0, 0, 0, 0, 486, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 491, 0, 0, 0, 492,
    0, 493, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 495, 0, 496, 0, 0, 497, 0, 498, 0, 0, 0, 499, 0, 500, 0, 501, 0, 0, 0, 0,
    502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 503, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 506, 507, 0, 0, 0, 0, 0, 508, 0, 0, 509, 0, 510, 0, 511, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0,
    0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 518, 0, 519,
    0, 520, 0, 0, 0, 521, 522, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0, 0, 0, 0,
    0, 528, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0,
    533, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 536, 0, 0, 0, 537, 0, 0, 538, 0, 539, 0, 0, 0, 0, 0, 0, 0, 540, 0,
    0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 543, 0, 0, 0, 544, 545, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 0, 0, 0,
    0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 553, 0,
    554, 0, 0, 0, 555, 0, 556, 557, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0,
    0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 566,
    0, 567, 568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0, 571, 0, 572, 573, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 575,
    0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 581, 0, 582, 0, 0, 0, 583, 0, 0,
    0, 0, 584, 585, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 587, 0, 0, 0, 0, 588, 589, 0, 0, 0, 0, 0, 0, 590, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 592, 0, 593, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0,
    0, 596, 0, 0, 597, 0, 598, 0, 599, 0, 600, 0, 601, 0, 602, 0, 603, 0, 604, 0, 605, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0, 0,
    0, 0, 608, 0, 0, 0, 0, 0, 0, 609, 610, 0, 0, 611, 0, 612, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 615, 0, 616, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0,
    0, 0, 0, 620, 621, 0, 622, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 627, 0, 628, 629, 0, 0, 0, 0,
    0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0, 635, 0, 0, 636, 0, 637, 638, 0, 0, 639, 0, 0,
    640, 0, 641, 0, 0, 0, 642, 0, 0, 0, 643,
};
void recomp_unit_0122_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089EC000u;
        entry_id = (entry_delta < 16300u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0122[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089EC000;
    case 2u: goto L_089EC014;
    case 3u: goto L_089EC028;
    case 4u: goto L_089EC030;
    case 5u: goto L_089EC040;
    case 6u: goto L_089EC04C;
    case 7u: goto L_089EC0BC;
    case 8u: goto L_089EC0C8;
    case 9u: goto L_089EC0E8;
    case 10u: goto L_089EC104;
    case 11u: goto L_089EC124;
    case 12u: goto L_089EC164;
    case 13u: goto L_089EC170;
    case 14u: goto L_089EC180;
    case 15u: goto L_089EC1C8;
    case 16u: goto L_089EC1D0;
    case 17u: goto L_089EC1DC;
    case 18u: goto L_089EC1F4;
    case 19u: goto L_089EC204;
    case 20u: goto L_089EC208;
    case 21u: goto L_089EC20C;
    case 22u: goto L_089EC214;
    case 23u: goto L_089EC224;
    case 24u: goto L_089EC238;
    case 25u: goto L_089EC240;
    case 26u: goto L_089EC244;
    case 27u: goto L_089EC260;
    case 28u: goto L_089EC2B8;
    case 29u: goto L_089EC2C8;
    case 30u: goto L_089EC2DC;
    case 31u: goto L_089EC2EC;
    case 32u: goto L_089EC2FC;
    case 33u: goto L_089EC310;
    case 34u: goto L_089EC318;
    case 35u: goto L_089EC320;
    case 36u: goto L_089EC330;
    case 37u: goto L_089EC340;
    case 38u: goto L_089EC34C;
    case 39u: goto L_089EC364;
    case 40u: goto L_089EC378;
    case 41u: goto L_089EC380;
    case 42u: goto L_089EC390;
    case 43u: goto L_089EC3A0;
    case 44u: goto L_089EC3B0;
    case 45u: goto L_089EC3B8;
    case 46u: goto L_089EC3C8;
    case 47u: goto L_089EC3FC;
    case 48u: goto L_089EC428;
    case 49u: goto L_089EC434;
    case 50u: goto L_089EC448;
    case 51u: goto L_089EC460;
    case 52u: goto L_089EC4BC;
    case 53u: goto L_089EC4D8;
    case 54u: goto L_089EC4E0;
    case 55u: goto L_089EC4E8;
    case 56u: goto L_089EC4F4;
    case 57u: goto L_089EC4FC;
    case 58u: goto L_089EC510;
    case 59u: goto L_089EC520;
    case 60u: goto L_089EC528;
    case 61u: goto L_089EC530;
    case 62u: goto L_089EC538;
    case 63u: goto L_089EC540;
    case 64u: goto L_089EC55C;
    case 65u: goto L_089EC574;
    case 66u: goto L_089EC58C;
    case 67u: goto L_089EC594;
    case 68u: goto L_089EC5B0;
    case 69u: goto L_089EC5BC;
    case 70u: goto L_089EC5C4;
    case 71u: goto L_089EC5DC;
    case 72u: goto L_089EC5E4;
    case 73u: goto L_089EC5EC;
    case 74u: goto L_089EC5F0;
    case 75u: goto L_089EC604;
    case 76u: goto L_089EC614;
    case 77u: goto L_089EC658;
    case 78u: goto L_089EC66C;
    case 79u: goto L_089EC6B4;
    case 80u: goto L_089EC6BC;
    case 81u: goto L_089EC6CC;
    case 82u: goto L_089EC6D8;
    case 83u: goto L_089EC6E0;
    case 84u: goto L_089EC6E8;
    case 85u: goto L_089EC6F0;
    case 86u: goto L_089EC700;
    case 87u: goto L_089EC70C;
    case 88u: goto L_089EC718;
    case 89u: goto L_089EC740;
    case 90u: goto L_089EC760;
    case 91u: goto L_089EC764;
    case 92u: goto L_089EC790;
    case 93u: goto L_089EC79C;
    case 94u: goto L_089EC7A4;
    case 95u: goto L_089EC7C8;
    case 96u: goto L_089EC7CC;
    case 97u: goto L_089EC7E0;
    case 98u: goto L_089EC800;
    case 99u: goto L_089EC80C;
    case 100u: goto L_089EC814;
    case 101u: goto L_089EC81C;
    case 102u: goto L_089EC824;
    case 103u: goto L_089EC838;
    case 104u: goto L_089EC844;
    case 105u: goto L_089EC84C;
    case 106u: goto L_089EC854;
    case 107u: goto L_089EC85C;
    case 108u: goto L_089EC864;
    case 109u: goto L_089EC86C;
    case 110u: goto L_089EC878;
    case 111u: goto L_089EC884;
    case 112u: goto L_089EC890;
    case 113u: goto L_089EC898;
    case 114u: goto L_089EC89C;
    case 115u: goto L_089EC8A4;
    case 116u: goto L_089EC8CC;
    case 117u: goto L_089EC90C;
    case 118u: goto L_089EC920;
    case 119u: goto L_089EC928;
    case 120u: goto L_089EC930;
    case 121u: goto L_089EC96C;
    case 122u: goto L_089EC97C;
    case 123u: goto L_089EC990;
    case 124u: goto L_089EC998;
    case 125u: goto L_089EC9A4;
    case 126u: goto L_089EC9B4;
    case 127u: goto L_089EC9CC;
    case 128u: goto L_089EC9E8;
    case 129u: goto L_089EC9F0;
    case 130u: goto L_089EC9FC;
    case 131u: goto L_089ECA18;
    case 132u: goto L_089ECA1C;
    case 133u: goto L_089ECA2C;
    case 134u: goto L_089ECA50;
    case 135u: goto L_089ECA60;
    case 136u: goto L_089ECA70;
    case 137u: goto L_089ECA78;
    case 138u: goto L_089ECA80;
    case 139u: goto L_089ECA90;
    case 140u: goto L_089ECA98;
    case 141u: goto L_089ECAA0;
    case 142u: goto L_089ECAAC;
    case 143u: goto L_089ECAB8;
    case 144u: goto L_089ECAC4;
    case 145u: goto L_089ECACC;
    case 146u: goto L_089ECAD0;
    case 147u: goto L_089ECAD8;
    case 148u: goto L_089ECAF8;
    case 149u: goto L_089ECB38;
    case 150u: goto L_089ECB4C;
    case 151u: goto L_089ECB54;
    case 152u: goto L_089ECB5C;
    case 153u: goto L_089ECB94;
    case 154u: goto L_089ECBA4;
    case 155u: goto L_089ECBB8;
    case 156u: goto L_089ECBD4;
    case 157u: goto L_089ECBF0;
    case 158u: goto L_089ECBF8;
    case 159u: goto L_089ECC04;
    case 160u: goto L_089ECC20;
    case 161u: goto L_089ECC24;
    case 162u: goto L_089ECC34;
    case 163u: goto L_089ECCD0;
    case 164u: goto L_089ECCE8;
    case 165u: goto L_089ECCF0;
    case 166u: goto L_089ECCFC;
    case 167u: goto L_089ECD04;
    case 168u: goto L_089ECD0C;
    case 169u: goto L_089ECD14;
    case 170u: goto L_089ECD1C;
    case 171u: goto L_089ECD30;
    case 172u: goto L_089ECD40;
    case 173u: goto L_089ECD54;
    case 174u: goto L_089ECD64;
    case 175u: goto L_089ECD74;
    case 176u: goto L_089ECD8C;
    case 177u: goto L_089ECDB0;
    case 178u: goto L_089ECDC0;
    case 179u: goto L_089ECDD4;
    case 180u: goto L_089ECDDC;
    case 181u: goto L_089ECDE8;
    case 182u: goto L_089ECDF0;
    case 183u: goto L_089ECE00;
    case 184u: goto L_089ECE18;
    case 185u: goto L_089ECE2C;
    case 186u: goto L_089ECE40;
    case 187u: goto L_089ECEA4;
    case 188u: goto L_089ECF00;
    case 189u: goto L_089ECF5C;
    case 190u: goto L_089ECFB8;
    case 191u: goto L_089ED014;
    case 192u: goto L_089ED070;
    case 193u: goto L_089ED0D4;
    case 194u: goto L_089ED11C;
    case 195u: goto L_089ED178;
    case 196u: goto L_089ED1D4;
    case 197u: goto L_089ED220;
    case 198u: goto L_089ED26C;
    case 199u: goto L_089ED2B8;
    case 200u: goto L_089ED304;
    case 201u: goto L_089ED34C;
    case 202u: goto L_089ED3A8;
    case 203u: goto L_089ED404;
    case 204u: goto L_089ED450;
    case 205u: goto L_089ED4AC;
    case 206u: goto L_089ED508;
    case 207u: goto L_089ED564;
    case 208u: goto L_089ED5C8;
    case 209u: goto L_089ED614;
    case 210u: goto L_089ED670;
    case 211u: goto L_089ED6CC;
    case 212u: goto L_089ED714;
    case 213u: goto L_089ED764;
    case 214u: goto L_089ED7B0;
    case 215u: goto L_089ED80C;
    case 216u: goto L_089ED854;
    case 217u: goto L_089ED860;
    case 218u: goto L_089ED878;
    case 219u: goto L_089ED8B0;
    case 220u: goto L_089ED8FC;
    case 221u: goto L_089ED924;
    case 222u: goto L_089ED92C;
    case 223u: goto L_089ED934;
    case 224u: goto L_089ED93C;
    case 225u: goto L_089ED944;
    case 226u: goto L_089ED94C;
    case 227u: goto L_089ED970;
    case 228u: goto L_089EDA04;
    case 229u: goto L_089EDA1C;
    case 230u: goto L_089EDA2C;
    case 231u: goto L_089EDA44;
    case 232u: goto L_089EDA88;
    case 233u: goto L_089EDAB4;
    case 234u: goto L_089EDAD0;
    case 235u: goto L_089EDAE8;
    case 236u: goto L_089EDAF4;
    case 237u: goto L_089EDAFC;
    case 238u: goto L_089EDB10;
    case 239u: goto L_089EDB18;
    case 240u: goto L_089EDB78;
    case 241u: goto L_089EDB88;
    case 242u: goto L_089EDBA4;
    case 243u: goto L_089EDBC8;
    case 244u: goto L_089EDBEC;
    case 245u: goto L_089EDBF4;
    case 246u: goto L_089EDC08;
    case 247u: goto L_089EDC1C;
    case 248u: goto L_089EDC28;
    case 249u: goto L_089EDC38;
    case 250u: goto L_089EDC40;
    case 251u: goto L_089EDC64;
    case 252u: goto L_089EDC84;
    case 253u: goto L_089EDC88;
    case 254u: goto L_089EDC90;
    case 255u: goto L_089EDCA4;
    case 256u: goto L_089EDCB0;
    case 257u: goto L_089EDCC0;
    case 258u: goto L_089EDCD0;
    case 259u: goto L_089EDCE0;
    case 260u: goto L_089EDCEC;
    case 261u: goto L_089EDCFC;
    case 262u: goto L_089EDD0C;
    case 263u: goto L_089EDD1C;
    case 264u: goto L_089EDD28;
    case 265u: goto L_089EDD38;
    case 266u: goto L_089EDD48;
    case 267u: goto L_089EDD58;
    case 268u: goto L_089EDD64;
    case 269u: goto L_089EDD74;
    case 270u: goto L_089EDD7C;
    case 271u: goto L_089EDDB0;
    case 272u: goto L_089EDDC0;
    case 273u: goto L_089EDDC8;
    case 274u: goto L_089EDDD8;
    case 275u: goto L_089EDDF4;
    case 276u: goto L_089EDDFC;
    case 277u: goto L_089EDE04;
    case 278u: goto L_089EDE2C;
    case 279u: goto L_089EDE58;
    case 280u: goto L_089EDE74;
    case 281u: goto L_089EDE84;
    case 282u: goto L_089EDE8C;
    case 283u: goto L_089EDE94;
    case 284u: goto L_089EDE9C;
    case 285u: goto L_089EDEB4;
    case 286u: goto L_089EDED4;
    case 287u: goto L_089EDEE8;
    case 288u: goto L_089EDEFC;
    case 289u: goto L_089EDF10;
    case 290u: goto L_089EDF34;
    case 291u: goto L_089EDF60;
    case 292u: goto L_089EDF74;
    case 293u: goto L_089EDF98;
    case 294u: goto L_089EDFA0;
    case 295u: goto L_089EDFA4;
    case 296u: goto L_089EDFAC;
    case 297u: goto L_089EDFBC;
    case 298u: goto L_089EDFCC;
    case 299u: goto L_089EDFD4;
    case 300u: goto L_089EDFD8;
    case 301u: goto L_089EDFE4;
    case 302u: goto L_089EE05C;
    case 303u: goto L_089EE0EC;
    case 304u: goto L_089EE134;
    case 305u: goto L_089EE140;
    case 306u: goto L_089EE154;
    case 307u: goto L_089EE194;
    case 308u: goto L_089EE1A4;
    case 309u: goto L_089EE1AC;
    case 310u: goto L_089EE1C0;
    case 311u: goto L_089EE1DC;
    case 312u: goto L_089EE1EC;
    case 313u: goto L_089EE1F4;
    case 314u: goto L_089EE220;
    case 315u: goto L_089EE234;
    case 316u: goto L_089EE23C;
    case 317u: goto L_089EE24C;
    case 318u: goto L_089EE290;
    case 319u: goto L_089EE2A8;
    case 320u: goto L_089EE2B4;
    case 321u: goto L_089EE2BC;
    case 322u: goto L_089EE2CC;
    case 323u: goto L_089EE2E0;
    case 324u: goto L_089EE350;
    case 325u: goto L_089EE35C;
    case 326u: goto L_089EE37C;
    case 327u: goto L_089EE3C4;
    case 328u: goto L_089EE404;
    case 329u: goto L_089EE474;
    case 330u: goto L_089EE4D0;
    case 331u: goto L_089EE520;
    case 332u: goto L_089EE52C;
    case 333u: goto L_089EE540;
    case 334u: goto L_089EE54C;
    case 335u: goto L_089EE558;
    case 336u: goto L_089EE56C;
    case 337u: goto L_089EE588;
    case 338u: goto L_089EE598;
    case 339u: goto L_089EE5A0;
    case 340u: goto L_089EE5CC;
    case 341u: goto L_089EE5DC;
    case 342u: goto L_089EE5E8;
    case 343u: goto L_089EE5F0;
    case 344u: goto L_089EE608;
    case 345u: goto L_089EE640;
    case 346u: goto L_089EE698;
    case 347u: goto L_089EE6BC;
    case 348u: goto L_089EE6C8;
    case 349u: goto L_089EE6E0;
    case 350u: goto L_089EE700;
    case 351u: goto L_089EE710;
    case 352u: goto L_089EE784;
    case 353u: goto L_089EE7DC;
    case 354u: goto L_089EE7F0;
    case 355u: goto L_089EE7F4;
    case 356u: goto L_089EE800;
    case 357u: goto L_089EE814;
    case 358u: goto L_089EE820;
    case 359u: goto L_089EE834;
    case 360u: goto L_089EE850;
    case 361u: goto L_089EE868;
    case 362u: goto L_089EE870;
    case 363u: goto L_089EE898;
    case 364u: goto L_089EE8AC;
    case 365u: goto L_089EE8B4;
    case 366u: goto L_089EE8BC;
    case 367u: goto L_089EE8CC;
    case 368u: goto L_089EE908;
    case 369u: goto L_089EE950;
    case 370u: goto L_089EE968;
    case 371u: goto L_089EE978;
    case 372u: goto L_089EE97C;
    case 373u: goto L_089EE984;
    case 374u: goto L_089EE98C;
    case 375u: goto L_089EE994;
    case 376u: goto L_089EE9A0;
    case 377u: goto L_089EE9B8;
    case 378u: goto L_089EE9C0;
    case 379u: goto L_089EE9C8;
    case 380u: goto L_089EE9D4;
    case 381u: goto L_089EE9DC;
    case 382u: goto L_089EE9E4;
    case 383u: goto L_089EE9EC;
    case 384u: goto L_089EE9FC;
    case 385u: goto L_089EEA04;
    case 386u: goto L_089EEA14;
    case 387u: goto L_089EEA20;
    case 388u: goto L_089EEA28;
    case 389u: goto L_089EEA38;
    case 390u: goto L_089EEA44;
    case 391u: goto L_089EEA54;
    case 392u: goto L_089EEA64;
    case 393u: goto L_089EEA74;
    case 394u: goto L_089EEA84;
    case 395u: goto L_089EEA90;
    case 396u: goto L_089EEA9C;
    case 397u: goto L_089EEAAC;
    case 398u: goto L_089EEAB4;
    case 399u: goto L_089EEAC4;
    case 400u: goto L_089EEADC;
    case 401u: goto L_089EEAFC;
    case 402u: goto L_089EEB80;
    case 403u: goto L_089EEB98;
    case 404u: goto L_089EEBA8;
    case 405u: goto L_089EEBB0;
    case 406u: goto L_089EEBCC;
    case 407u: goto L_089EEC0C;
    case 408u: goto L_089EEC10;
    case 409u: goto L_089EEC98;
    case 410u: goto L_089EECA0;
    case 411u: goto L_089EECB8;
    case 412u: goto L_089EECC0;
    case 413u: goto L_089EECD4;
    case 414u: goto L_089EED14;
    case 415u: goto L_089EED2C;
    case 416u: goto L_089EED3C;
    case 417u: goto L_089EED50;
    case 418u: goto L_089EED68;
    case 419u: goto L_089EED70;
    case 420u: goto L_089EED84;
    case 421u: goto L_089EED8C;
    case 422u: goto L_089EED98;
    case 423u: goto L_089EEDB0;
    case 424u: goto L_089EEDB8;
    case 425u: goto L_089EEDC8;
    case 426u: goto L_089EEDE0;
    case 427u: goto L_089EEDEC;
    case 428u: goto L_089EEDF4;
    case 429u: goto L_089EEDFC;
    case 430u: goto L_089EEE04;
    case 431u: goto L_089EEE08;
    case 432u: goto L_089EEE10;
    case 433u: goto L_089EEE18;
    case 434u: goto L_089EEE28;
    case 435u: goto L_089EEE30;
    case 436u: goto L_089EEE38;
    case 437u: goto L_089EEE3C;
    case 438u: goto L_089EEE44;
    case 439u: goto L_089EEE54;
    case 440u: goto L_089EEEB0;
    case 441u: goto L_089EEEC8;
    case 442u: goto L_089EEEF4;
    case 443u: goto L_089EEEFC;
    case 444u: goto L_089EEF08;
    case 445u: goto L_089EEF20;
    case 446u: goto L_089EEF34;
    case 447u: goto L_089EEF48;
    case 448u: goto L_089EEF78;
    case 449u: goto L_089EEFFC;
    case 450u: goto L_089EF028;
    case 451u: goto L_089EF038;
    case 452u: goto L_089EF050;
    case 453u: goto L_089EF058;
    case 454u: goto L_089EF078;
    case 455u: goto L_089EF088;
    case 456u: goto L_089EF094;
    case 457u: goto L_089EF09C;
    case 458u: goto L_089EF0A8;
    case 459u: goto L_089EF0B0;
    case 460u: goto L_089EF0B4;
    case 461u: goto L_089EF0C0;
    case 462u: goto L_089EF0CC;
    case 463u: goto L_089EF0D4;
    case 464u: goto L_089EF0F8;
    case 465u: goto L_089EF108;
    case 466u: goto L_089EF128;
    case 467u: goto L_089EF160;
    case 468u: goto L_089EF16C;
    case 469u: goto L_089EF17C;
    case 470u: goto L_089EF1C0;
    case 471u: goto L_089EF1D0;
    case 472u: goto L_089EF1EC;
    case 473u: goto L_089EF230;
    case 474u: goto L_089EF268;
    case 475u: goto L_089EF270;
    case 476u: goto L_089EF278;
    case 477u: goto L_089EF280;
    case 478u: goto L_089EF298;
    case 479u: goto L_089EF29C;
    case 480u: goto L_089EF2A4;
    case 481u: goto L_089EF2AC;
    case 482u: goto L_089EF2B8;
    case 483u: goto L_089EF2C4;
    case 484u: goto L_089EF2F8;
    case 485u: goto L_089EF300;
    case 486u: goto L_089EF314;
    case 487u: goto L_089EF31C;
    case 488u: goto L_089EF334;
    case 489u: goto L_089EF350;
    case 490u: goto L_089EF364;
    case 491u: goto L_089EF36C;
    case 492u: goto L_089EF37C;
    case 493u: goto L_089EF384;
    case 494u: goto L_089EF39C;
    case 495u: goto L_089EF3B0;
    case 496u: goto L_089EF3B8;
    case 497u: goto L_089EF3C4;
    case 498u: goto L_089EF3CC;
    case 499u: goto L_089EF3DC;
    case 500u: goto L_089EF3E4;
    case 501u: goto L_089EF3EC;
    case 502u: goto L_089EF400;
    case 503u: goto L_089EF484;
    case 504u: goto L_089EF494;
    case 505u: goto L_089EF514;
    case 506u: goto L_089EF528;
    case 507u: goto L_089EF52C;
    case 508u: goto L_089EF544;
    case 509u: goto L_089EF550;
    case 510u: goto L_089EF558;
    case 511u: goto L_089EF560;
    case 512u: goto L_089EF594;
    case 513u: goto L_089EF5B8;
    case 514u: goto L_089EF5D4;
    case 515u: goto L_089EF5F8;
    case 516u: goto L_089EF61C;
    case 517u: goto L_089EF66C;
    case 518u: goto L_089EF674;
    case 519u: goto L_089EF67C;
    case 520u: goto L_089EF684;
    case 521u: goto L_089EF694;
    case 522u: goto L_089EF698;
    case 523u: goto L_089EF6A8;
    case 524u: goto L_089EF6B4;
    case 525u: goto L_089EF6C4;
    case 526u: goto L_089EF6D8;
    case 527u: goto L_089EF6EC;
    case 528u: goto L_089EF704;
    case 529u: goto L_089EF708;
    case 530u: goto L_089EF734;
    case 531u: goto L_089EF748;
    case 532u: goto L_089EF768;
    case 533u: goto L_089EF780;
    case 534u: goto L_089EF798;
    case 535u: goto L_089EF7AC;
    case 536u: goto L_089EF7B4;
    case 537u: goto L_089EF7C4;
    case 538u: goto L_089EF7D0;
    case 539u: goto L_089EF7D8;
    case 540u: goto L_089EF7F8;
    case 541u: goto L_089EF808;
    case 542u: goto L_089EF828;
    case 543u: goto L_089EF834;
    case 544u: goto L_089EF844;
    case 545u: goto L_089EF848;
    case 546u: goto L_089EF860;
    case 547u: goto L_089EF86C;
    case 548u: goto L_089EF888;
    case 549u: goto L_089EF89C;
    case 550u: goto L_089EF8AC;
    case 551u: goto L_089EF8CC;
    case 552u: goto L_089EF8DC;
    case 553u: goto L_089EF8F8;
    case 554u: goto L_089EF900;
    case 555u: goto L_089EF910;
    case 556u: goto L_089EF918;
    case 557u: goto L_089EF91C;
    case 558u: goto L_089EF930;
    case 559u: goto L_089EF954;
    case 560u: goto L_089EF96C;
    case 561u: goto L_089EF984;
    case 562u: goto L_089EF9A0;
    case 563u: goto L_089EF9C0;
    case 564u: goto L_089EF9CC;
    case 565u: goto L_089EF9EC;
    case 566u: goto L_089EF9FC;
    case 567u: goto L_089EFA04;
    case 568u: goto L_089EFA08;
    case 569u: goto L_089EFA20;
    case 570u: goto L_089EFA38;
    case 571u: goto L_089EFA44;
    case 572u: goto L_089EFA4C;
    case 573u: goto L_089EFA50;
    case 574u: goto L_089EFA6C;
    case 575u: goto L_089EFA7C;
    case 576u: goto L_089EFA8C;
    case 577u: goto L_089EFA9C;
    case 578u: goto L_089EFAAC;
    case 579u: goto L_089EFABC;
    case 580u: goto L_089EFACC;
    case 581u: goto L_089EFADC;
    case 582u: goto L_089EFAE4;
    case 583u: goto L_089EFAF4;
    case 584u: goto L_089EFB08;
    case 585u: goto L_089EFB0C;
    case 586u: goto L_089EFB30;
    case 587u: goto L_089EFB40;
    case 588u: goto L_089EFB54;
    case 589u: goto L_089EFB58;
    case 590u: goto L_089EFB74;
    case 591u: goto L_089EFBB0;
    case 592u: goto L_089EFBB8;
    case 593u: goto L_089EFBC0;
    case 594u: goto L_089EFBD4;
    case 595u: goto L_089EFBF4;
    case 596u: goto L_089EFC04;
    case 597u: goto L_089EFC10;
    case 598u: goto L_089EFC18;
    case 599u: goto L_089EFC20;
    case 600u: goto L_089EFC28;
    case 601u: goto L_089EFC30;
    case 602u: goto L_089EFC38;
    case 603u: goto L_089EFC40;
    case 604u: goto L_089EFC48;
    case 605u: goto L_089EFC50;
    case 606u: goto L_089EFC5C;
    case 607u: goto L_089EFC6C;
    case 608u: goto L_089EFC88;
    case 609u: goto L_089EFCA4;
    case 610u: goto L_089EFCA8;
    case 611u: goto L_089EFCB4;
    case 612u: goto L_089EFCBC;
    case 613u: goto L_089EFCDC;
    case 614u: goto L_089EFD14;
    case 615u: goto L_089EFD30;
    case 616u: goto L_089EFD38;
    case 617u: goto L_089EFD44;
    case 618u: goto L_089EFD54;
    case 619u: goto L_089EFD70;
    case 620u: goto L_089EFD8C;
    case 621u: goto L_089EFD90;
    case 622u: goto L_089EFD98;
    case 623u: goto L_089EFDA4;
    case 624u: goto L_089EFDF0;
    case 625u: goto L_089EFE1C;
    case 626u: goto L_089EFE50;
    case 627u: goto L_089EFE60;
    case 628u: goto L_089EFE68;
    case 629u: goto L_089EFE6C;
    case 630u: goto L_089EFE84;
    case 631u: goto L_089EFED0;
    case 632u: goto L_089EFF1C;
    case 633u: goto L_089EFF38;
    case 634u: goto L_089EFF40;
    case 635u: goto L_089EFF50;
    case 636u: goto L_089EFF5C;
    case 637u: goto L_089EFF64;
    case 638u: goto L_089EFF68;
    case 639u: goto L_089EFF74;
    case 640u: goto L_089EFF80;
    case 641u: goto L_089EFF88;
    case 642u: goto L_089EFF98;
    case 643u: goto L_089EFFA8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089EC000:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f13) || std::isnan(f12)) && hot_regs.f13 == f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089EC030;
      }
      goto L_089EC014;
    }
}
L_089EC014:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(f13) || std::isnan(hot_regs.f12)) && f13 == hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089EC030;
      }
      goto L_089EC028;
    }
}
L_089EC028:
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g5);
    goto L_089EC030;
L_089EC030:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_089EC0C8;
      }
      goto L_089EC040;
    }
L_089EC040:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (hot_regs.g5 == 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_089EC0BC;
    }
    goto L_089EC04C;
L_089EC04C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), g6);
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(8), g6);
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(12), g6);
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(16), g6);
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(20), g6);
    g6 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(g6));
    g6 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(41)));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(g6));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g5 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(52), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(56), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_089EC0BC;
}
L_089EC0BC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EC0E8;
      }
      goto L_089EC0C8;
    }
}
L_089EC0C8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 1u);
    hot_regs.g31 = (0x089EC0E8u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 618u, 0x089EBC18u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EC0E8u) goto L_089EC0E8;
    return;
L_089EC0E8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (g16 + static_cast<std::uint32_t>(8));
    g16 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (g16 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g31 = (0x089EC104u);
    g5 = (0u | 2u);
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    goto L_089EC4BC;
}
L_089EC104:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[16] | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089EC124:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g6);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    hot_regs.g6 = (ctx.vfpu_scalar_bits_ct<64u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (16384u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x089EC164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 650u, 0x089EBFB4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EC164u) goto L_089EC164;
    return;
L_089EC164:
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
L_089EC170:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    g2 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    g4 = (hot_regs.g5 << 6u);
    jump_target = hot_regs.g31;
    g2 = (g2 + g4);
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089EC180:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g17);
    g17 = (0u | 0u);
    ctx.gpr[16] = (g4 | 0u);
    g4 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089EC240;
      }
      goto L_089EC1C8;
    }
}
L_089EC1C8:
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    goto L_089EC1D0;
L_089EC1D0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089EC1DCu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    goto L_089EC170;
L_089EC1DC:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(32)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((!(std::isnan(f13) || std::isnan(hot_regs.f22)) && f13 == hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089EC208;
      }
      goto L_089EC1F4;
    }
}
L_089EC1F4:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f12) || std::isnan(hot_regs.f20)) && hot_regs.f12 == hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
      if (branch_taken) {
          goto L_089EC20C;
      }
      goto L_089EC204;
    }
L_089EC204:
    hot_regs.g4 = (0u | 1u);
    goto L_089EC208;
L_089EC208:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_089EC20C;
L_089EC20C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EC224;
      }
      goto L_089EC214;
    }
L_089EC214:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089EC244;
      }
      goto L_089EC224;
    }
L_089EC224:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    g17 = (g17 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089EC1D0;
      }
      goto L_089EC238;
    }
}
L_089EC238:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_089EC240;
L_089EC240:
    hot_regs.g2 = (0u + static_cast<std::uint32_t>(-1));
    goto L_089EC244;
L_089EC244:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089EC260:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), g16);
    g16 = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), g19);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), hot_regs.g31);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g5 = (18804u << 16u);
    g19 = (0u | 0u);
    g5 = (g5 | 9216u);
    ctx.gpr[17] = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(g5);
    g4 = (static_cast<std::int32_t>(g19) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089EC378;
      }
      goto L_089EC2B8;
    }
}
L_089EC2B8:
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[23] = (hot_regs.g29 | 0u);
    goto L_089EC2C8;
L_089EC2C8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    g4 = (g4 + ctx.gpr[20]);
    hot_regs.g31 = (0x089EC2DCu);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    hot_regs.g4 = g4;
    goto L_089EC614;
}
L_089EC2DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g31 = (0x089EC2ECu);
    g4 = (g4 + ctx.gpr[20]);
    hot_regs.g4 = g4;
    goto L_089EC7E0;
}
L_089EC2EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(276)));
    hot_regs.g31 = (0x089EC2FCu);
    g4 = (g4 + ctx.gpr[20]);
    hot_regs.g4 = g4;
    goto L_089ECA2C;
}
L_089EC2FC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    g4 = (g4 + ctx.gpr[20]);
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) < 0;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EC364;
      }
      goto L_089EC310;
    }
}
L_089EC310:
    hot_regs.g31 = (0x089EC318u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EC318u) goto L_089EC318;
    return;
L_089EC318:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089EC364;
      }
      goto L_089EC320;
    }
L_089EC320:
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EC340;
      }
      goto L_089EC330;
    }
L_089EC330:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    g4 = (g4 + ctx.gpr[20]);
    ctx.gpr[18] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = g4;
    goto L_089EC340;
}
L_089EC340:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EC364;
      }
      goto L_089EC34C;
    }
L_089EC34C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g23 = ctx.gpr[23];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    g4 = (g4 + ctx.gpr[20]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g23 + static_cast<std::uint32_t>(0), g4);
    g23 = (g23 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    ctx.gpr[23] = g23;
    goto L_089EC364;
}
L_089EC364:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    g19 = (g19 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g19) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(64));
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_089EC2C8;
      }
      goto L_089EC378;
    }
}
L_089EC378:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_089EC390;
      }
      goto L_089EC380;
    }
L_089EC380:
    hot_regs.g6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-10000));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089EC390u);
    hot_regs.g5 = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EC390u) goto L_089EC390;
    return;
L_089EC390:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (hot_regs.g29 | 0u);
      if (branch_taken) {
          goto L_089EC3C8;
      }
      goto L_089EC3A0;
    }
L_089EC3A0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089EC3B8;
      }
      goto L_089EC3B0;
    }
L_089EC3B0:
    hot_regs.g31 = (0x089EC3B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 565u, 0x08AD340Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EC3B8u) goto L_089EC3B8;
    return;
L_089EC3B8:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_089EC3A0;
      }
      goto L_089EC3C8;
    }
}
L_089EC3C8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089EC3FC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g18);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g18 = (0u | 0u);
    g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089EC448;
      }
      goto L_089EC428;
    }
}
L_089EC428:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (0x089EC434u);
    g4 = (g4 + ctx.gpr[17]);
    hot_regs.g4 = g4;
    goto L_089EC9CC;
}
L_089EC434:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    g18 = (g18 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089EC428;
      }
      goto L_089EC448;
    }
}
L_089EC448:
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
L_089EC460:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), hot_regs.g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), g5);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    { const std::uint32_t vfpu_address = g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g5 = (g4 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(56), 0u);
    hot_regs.g2 = (g4 | 0u);
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_089EC4BC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089EC4FC;
      }
      goto L_089EC4D8;
    }
}
L_089EC4D8:
    hot_regs.g31 = (0x089EC4E0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_089EC9CC;
L_089EC4E0:
    hot_regs.g31 = (0x089EC4E8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_089ECBD4;
L_089EC4E8:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EC4FC;
      }
      goto L_089EC4F4;
    }
L_089EC4F4:
    hot_regs.g31 = (0x089EC4FCu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EC4FCu) goto L_089EC4FC;
    return;
L_089EC4FC:
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
L_089EC510:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    g6 = (static_cast<std::int32_t>(g5) < 2 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g6 = (static_cast<std::int32_t>(g5) < 3 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089EC530;
      }
      goto L_089EC520;
    }
}
L_089EC520:
    if (static_cast<std::int32_t>(hot_regs.g5) > 0) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
        goto L_089EC55C;
    }
    goto L_089EC528;
L_089EC528:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089EC58C;
      }
      goto L_089EC530;
    }
L_089EC530:
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g5) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EC574;
      }
      goto L_089EC538;
    }
L_089EC538:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EC528;
      }
      goto L_089EC540;
    }
L_089EC540:
{
    float f0 = ctx.fpr[0];
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (16000u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    f0 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    { const float fs = f0; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    hot_regs.g4 = g4;
    ctx.fpr[0] = f0;
      if (branch_taken) {
          goto L_089EC58C;
      }
      goto L_089EC55C;
    }
}
}
L_089EC55C:
{
    float f0 = ctx.fpr[0];
    hot_regs.g5 = (16128u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    f0 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    { const float fs = f0; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    ctx.fpr[0] = f0;
      if (branch_taken) {
          goto L_089EC58C;
      }
      goto L_089EC574;
    }
}
L_089EC574:
{
    float f0 = ctx.fpr[0];
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (16448u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    f0 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    f0 = f0 / hot_regs.f13;
    hot_regs.g4 = g4;
    ctx.fpr[0] = f0;
    goto L_089EC58C;
}
}
L_089EC58C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC594:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089EC5C4;
      }
      goto L_089EC5B0;
    }
}
L_089EC5B0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EC5E4;
      }
      goto L_089EC5BC;
    }
L_089EC5BC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089EC5F0;
      }
      goto L_089EC5C4;
    }
L_089EC5C4:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (0u | 140u);
    hot_regs.g6 = (0u | 255u);
    hot_regs.g7 = (0u | 140u);
    hot_regs.g31 = (0x089EC5DCu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EC5DCu) goto L_089EC5DC;
    return;
L_089EC5DC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089EC604;
      }
      goto L_089EC5E4;
    }
L_089EC5E4:
    hot_regs.g31 = (0x089EC5ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EC5ECu) goto L_089EC5EC;
    return;
L_089EC5EC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089EC5F0;
L_089EC5F0:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    g4 = (g4 + static_cast<std::uint32_t>(280));
    hot_regs.g2 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_089EC604;
}
L_089EC604:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089EC614:
{
    float f13 = hot_regs.f13;
    float f20 = hot_regs.f20;
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), hot_regs.g31);
    g7 = (17224u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g7);
    g7 = (2236u << 16u);
    g7 = (g7 + static_cast<std::uint32_t>(32304));
    g7 = (g7 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(0);
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
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(32)));
    f20 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(f13) || std::isnan(f20)) && f13 == f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
    hot_regs.f13 = f13;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_089EC66C;
      }
      goto L_089EC658;
    }
}
}
L_089EC658:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((!(std::isnan(f13) || std::isnan(hot_regs.f20)) && f13 == hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089EC6BC;
      }
      goto L_089EC66C;
    }
}
L_089EC66C:
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EC6CC;
      }
      goto L_089EC6B4;
    }
L_089EC6B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EC700;
      }
      goto L_089EC6BC;
    }
L_089EC6BC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (18804u << 16u);
    g4 = (g4 | 9216u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EC7CC;
      }
      goto L_089EC6CC;
    }
}
L_089EC6CC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_089EC6F0;
      }
      goto L_089EC6D8;
    }
L_089EC6D8:
    hot_regs.g31 = (0x089EC6E0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EC6E0u) goto L_089EC6E0;
    return;
L_089EC6E0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089EC6F0;
      }
      goto L_089EC6E8;
    }
L_089EC6E8:
    hot_regs.g31 = (0x089EC6F0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 565u, 0x08AD340Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EC6F0u) goto L_089EC6F0;
    return;
L_089EC6F0:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), hot_regs.g4);
      if (branch_taken) {
          goto L_089EC7CC;
      }
      goto L_089EC700;
    }
L_089EC700:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_089EC7C8;
      }
      goto L_089EC70C;
    }
L_089EC70C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_089EC7C8;
      }
      goto L_089EC718;
    }
L_089EC718:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    f13 = f13 - hot_regs.f14;
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((f13 <= hot_regs.f12));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
        goto L_089EC764;
    }
    goto L_089EC740;
}
}
L_089EC740:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    f13 = f13 - hot_regs.f14;
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089EC790;
      }
      goto L_089EC760;
    }
}
L_089EC760:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089EC764;
L_089EC764:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 << 2u);
    hot_regs.g7 = (g5 + g5);
    g5 = (g5 + hot_regs.g7);
    g5 = (g5 << 2u);
    g5 = (hot_regs.g6 + g5);
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(g5));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089EC7C8;
      }
      goto L_089EC790;
    }
}
L_089EC790:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    if (g6 == 0u) {
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = g6;
        goto L_089EC7A4;
    }
    goto L_089EC79C;
}
L_089EC79C:
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(3));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089EC7A4;
L_089EC7A4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (g4 << 2u);
    g6 = (g6 << 3u);
    hot_regs.g7 = (g6 + g6);
    g6 = (g6 + hot_regs.g7);
    g5 = (g5 + g6);
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_089EC7C8;
}
L_089EC7C8:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_089EC7CC;
L_089EC7CC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089EC7E0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) < 0;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089EC814;
      }
      goto L_089EC800;
    }
}
L_089EC800:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089EC824;
      }
      goto L_089EC80C;
    }
L_089EC80C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EC85C;
      }
      goto L_089EC814;
    }
L_089EC814:
    hot_regs.g31 = (0x089EC81Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_089EC9CC;
L_089EC81C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EC9B4;
      }
      goto L_089EC824;
    }
L_089EC824:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EC85C;
      }
      goto L_089EC838;
    }
}
L_089EC838:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EC854;
      }
      goto L_089EC844;
    }
L_089EC844:
    hot_regs.g31 = (0x089EC84Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EC84Cu) goto L_089EC84C;
    return;
L_089EC84C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EC85C;
      }
      goto L_089EC854;
    }
L_089EC854:
    hot_regs.g31 = (0x089EC85Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_089EC9CC;
L_089EC85C:
    hot_regs.g31 = (0x089EC864u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EC864u) goto L_089EC864;
    return;
L_089EC864:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EC998;
      }
      goto L_089EC86C;
    }
L_089EC86C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089EC9B4;
      }
      goto L_089EC878;
    }
L_089EC878:
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g31 = (0x089EC884u);
    hot_regs.g4 = (0u | 352u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 651u, 0x0887F0C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EC884u) goto L_089EC884;
    return;
L_089EC884:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EC89C;
      }
      goto L_089EC890;
    }
L_089EC890:
    hot_regs.g31 = (0x089EC898u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 644u, 0x0887F024u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EC898u) goto L_089EC898;
    return;
L_089EC898:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_089EC89C;
L_089EC89C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
      if (branch_taken) {
          goto L_089EC9B4;
      }
      goto L_089EC8A4;
    }
L_089EC8A4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x089EC8CCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EC8CCu) goto L_089EC8CC;
    return;
L_089EC8CC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089EC90Cu);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EC90Cu) goto L_089EC90C;
    return;
L_089EC90C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x089EC920u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EC920u) goto L_089EC920;
    return;
L_089EC920:
    hot_regs.g31 = (0x089EC928u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EC928u) goto L_089EC928;
    return;
L_089EC928:
    hot_regs.g31 = (0x089EC930u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EC930u) goto L_089EC930;
    return;
L_089EC930:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(52)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g6 = (0u + static_cast<std::uint32_t>(-2049));
    g5 = (g5 & g6);
    g5 = (g5 | 2048u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(72), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(52)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(236)));
    g5 = (g5 | 8u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(236), g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g4 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089EC97C;
      }
      goto L_089EC96C;
    }
}
L_089EC96C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (g5 << 2u);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089EC97C;
}
L_089EC97C:
    hot_regs.g5 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(58)));
    hot_regs.g5 = (hot_regs.g5 | 32768u);
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g31 = (0x089EC990u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EC990u) goto L_089EC990;
    return;
L_089EC990:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EC9B4;
      }
      goto L_089EC998;
    }
L_089EC998:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EC9B4;
      }
      goto L_089EC9A4;
    }
L_089EC9A4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    hot_regs.g6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-10000));
    hot_regs.g31 = (0x089EC9B4u);
    hot_regs.g5 = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EC9B4u) goto L_089EC9B4;
    return;
L_089EC9B4:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089EC9CC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089ECA1C;
      }
      goto L_089EC9E8;
    }
}
L_089EC9E8:
    hot_regs.g31 = (0x089EC9F0u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EC9F0u) goto L_089EC9F0;
    return;
L_089EC9F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089ECA18;
      }
      goto L_089EC9FC;
    }
L_089EC9FC:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (0u | 3u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(24));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089ECA18u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g7);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089ECA18u) goto L_089ECA18;
    return;
L_089ECA18:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    goto L_089ECA1C;
L_089ECA1C:
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
L_089ECA2C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) < 0;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089ECBB8;
      }
      goto L_089ECA50;
    }
}
L_089ECA50:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (0u | 5u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089ECA70;
      }
      goto L_089ECA60;
    }
L_089ECA60:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089ECA80;
      }
      goto L_089ECA70;
    }
L_089ECA70:
    hot_regs.g31 = (0x089ECA78u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_089ECBD4;
L_089ECA78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ECBB8;
      }
      goto L_089ECA80;
    }
L_089ECA80:
    hot_regs.g6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-10000));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089ECA90u);
    hot_regs.g5 = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089ECA90u) goto L_089ECA90;
    return;
L_089ECA90:
    hot_regs.g31 = (0x089ECA98u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089ECA98u) goto L_089ECA98;
    return;
L_089ECA98:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089ECBB8;
      }
      goto L_089ECAA0;
    }
L_089ECAA0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089ECBB8;
      }
      goto L_089ECAAC;
    }
L_089ECAAC:
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g31 = (0x089ECAB8u);
    hot_regs.g4 = (0u | 352u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 651u, 0x0887F0C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089ECAB8u) goto L_089ECAB8;
    return;
L_089ECAB8:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ECAD0;
      }
      goto L_089ECAC4;
    }
L_089ECAC4:
    hot_regs.g31 = (0x089ECACCu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 644u, 0x0887F024u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089ECACCu) goto L_089ECACC;
    return;
L_089ECACC:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_089ECAD0;
L_089ECAD0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
      if (branch_taken) {
          goto L_089ECBB8;
      }
      goto L_089ECAD8;
    }
L_089ECAD8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089ECAF8u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089ECAF8u) goto L_089ECAF8;
    return;
L_089ECAF8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089ECB38u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089ECB38u) goto L_089ECB38;
    return;
L_089ECB38:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x089ECB4Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089ECB4Cu) goto L_089ECB4C;
    return;
L_089ECB4C:
    hot_regs.g31 = (0x089ECB54u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089ECB54u) goto L_089ECB54;
    return;
L_089ECB54:
    hot_regs.g31 = (0x089ECB5Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089ECB5Cu) goto L_089ECB5C;
    return;
L_089ECB5C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2049));
    g5 = (g5 & hot_regs.g6);
    g5 = (g5 | 2048u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(72), g5);
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(236)));
    g5 = (g5 | 8u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(236), g5);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g5 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g4 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089ECBA4;
      }
      goto L_089ECB94;
    }
}
L_089ECB94:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (ctx.gpr[16] << 2u);
    g4 = (g4 + hot_regs.g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_089ECBA4;
}
L_089ECBA4:
    hot_regs.g5 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(58)));
    hot_regs.g5 = (hot_regs.g5 | 32768u);
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g31 = (0x089ECBB8u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089ECBB8u) goto L_089ECBB8;
    return;
L_089ECBB8:
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
L_089ECBD4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089ECC24;
      }
      goto L_089ECBF0;
    }
}
L_089ECBF0:
    hot_regs.g31 = (0x089ECBF8u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089ECBF8u) goto L_089ECBF8;
    return;
L_089ECBF8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089ECC20;
      }
      goto L_089ECC04;
    }
L_089ECC04:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (0u | 3u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(24));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089ECC20u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g7);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089ECC20u) goto L_089ECC20;
    return;
L_089ECC20:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    goto L_089ECC24;
L_089ECC24:
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
L_089ECC34:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-128));
    g5 = (2234u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(6944));
    g6 = (2234u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(7112));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), ctx.gpr[30]);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (0u | 5u);
    g5 = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), hot_regs.g31);
    g4 = (2234u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g5);
    g4 = (g4 + static_cast<std::uint32_t>(26880));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), g4);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(20), 0u);
    g4 = (0u | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g5);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[23] = (0u | 3u);
    ctx.gpr[21] = (0u | 4u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
    goto L_089ECCD0;
}
L_089ECCD0:
{
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    g19 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (0u | 0u);
    g19 = (g19 + hot_regs.g4);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = g19;
    goto L_089ECCE8;
}
L_089ECCE8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
      if (branch_taken) {
          goto L_089ECD74;
      }
      goto L_089ECCF0;
    }
L_089ECCF0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x089ECCFCu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 146u, 0x08AEC930u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089ECCFCu) goto L_089ECCFC;
    return;
L_089ECCFC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089ECD74;
      }
      goto L_089ECD04;
    }
L_089ECD04:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089ECD1C;
      }
      goto L_089ECD0C;
    }
L_089ECD0C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089ECD1C;
      }
      goto L_089ECD14;
    }
L_089ECD14:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_089ECD74;
      }
      goto L_089ECD1C;
    }
L_089ECD1C:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g6) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_089ECD40;
      }
      goto L_089ECD30;
    }
L_089ECD30:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g6 = (g6 << 2u);
    g4 = (g4 + g6);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_089ECD40;
}
L_089ECD40:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g5 | 0u);
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    g7 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    { const bool branch_taken = g7 == 0u;
    hot_regs.g6 = (0u | 0u);
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089ECD64;
      }
      goto L_089ECD54;
    }
}
L_089ECD54:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (g5 << 2u);
    g5 = (g6 + g5);
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_089ECD64;
}
L_089ECD64:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(20)));
    g6 = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(20), hot_regs.g5);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(g6));
    hot_regs.g6 = g6;
    goto L_089ECD74;
}
L_089ECD74:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < 6 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_089ECCE8;
      }
      goto L_089ECD8C;
    }
}
L_089ECD8C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    g4 = (g4 + static_cast<std::uint32_t>(24));
    g20 = (g20 + static_cast<std::uint32_t>(1));
    g5 = (g5 + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g4);
    hot_regs.g6 = (static_cast<std::int32_t>(g20) < 7 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_089ECCD0;
      }
      goto L_089ECDB0;
    }
}
L_089ECDB0:
    ctx.gpr[23] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10000));
    ctx.gpr[30] = (0u | 0u);
    goto L_089ECDC0;
L_089ECDC0:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    ctx.gpr[19] = (0u | 0u);
    g18 = (ctx.gpr[30] + g18);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.gpr[18] = g18;
    goto L_089ECDD4;
}
L_089ECDD4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), ctx.gpr[22]);
      if (branch_taken) {
          goto L_089ECE00;
      }
      goto L_089ECDDC;
    }
L_089ECDDC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x089ECDE8u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 146u, 0x08AEC930u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089ECDE8u) goto L_089ECDE8;
    return;
L_089ECDE8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089ECE00;
      }
      goto L_089ECDF0;
    }
L_089ECDF0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    hot_regs.g5 = (0u | 5u);
    hot_regs.g31 = (0x089ECE00u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089ECE00u) goto L_089ECE00;
    return;
L_089ECE00:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    hot_regs.g4 = (static_cast<std::int32_t>(g19) < 3 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_089ECDD4;
      }
      goto L_089ECE18;
    }
}
L_089ECE18:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (g20 + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(12));
    hot_regs.g4 = (static_cast<std::int32_t>(g20) < 7 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_089ECDC0;
      }
      goto L_089ECE2C;
    }
}
L_089ECE2C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-10229));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(276), ctx.gpr[22]);
    hot_regs.g31 = (0x089ECE40u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 146u, 0x08AEC930u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089ECE40u) goto L_089ECE40;
    return;
L_089ECE40:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (50281u << 16u);
    g4 = (g4 | 22577u);
    f12 = std::bit_cast<float>(g4);
    g6 = (13218u << 16u);
    g4 = (50313u << 16u);
    g4 = (g4 | 51855u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f20 = std::bit_cast<float>(0u);
    f12 = std::bit_cast<float>(g4);
    g6 = (g6 | 8553u);
    g4 = (16733u << 16u);
    hot_regs.f15 = std::bit_cast<float>(g6);
    g4 = (g4 | 16253u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    ctx.gpr[16] = (g29 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f20));
    g6 = (49024u << 16u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.f14 = std::bit_cast<float>(g6);
    hot_regs.g31 = (0x089ECEA4u);
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
    goto L_089EC124;
}
}
L_089ECEA4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (50327u << 16u);
    g4 = (g4 | 5874u);
    f12 = std::bit_cast<float>(g4);
    g6 = (48959u << 16u);
    g4 = (50210u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 | 17957u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g6 = (g6 | 42933u);
    g4 = (16683u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g6);
    g4 = (g4 | 24642u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g6 = (16169u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    g6 = (g6 | 47079u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.f15 = std::bit_cast<float>(g6);
    hot_regs.g31 = (0x089ECF00u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    goto L_089EC124;
}
}
L_089ECF00:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (50280u << 16u);
    g4 = (g4 | 15696u);
    f12 = std::bit_cast<float>(g4);
    g6 = (49023u << 16u);
    g4 = (50219u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 | 41665u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g6 = (g6 | 49568u);
    g4 = (16675u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g6);
    g4 = (g4 | 16253u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g6 = (48434u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    g6 = (g6 | 43559u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.f15 = std::bit_cast<float>(g6);
    hot_regs.g31 = (0x089ECF5Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    goto L_089EC124;
}
}
L_089ECF5C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (50289u << 16u);
    g4 = (g4 | 1787u);
    f12 = std::bit_cast<float>(g4);
    g6 = (16170u << 16u);
    g4 = (50182u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 | 65398u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g6 = (g6 | 11280u);
    g4 = (16671u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g6);
    g4 = (g4 | 12814u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g6 = (48959u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    g6 = (g6 | 16536u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.f15 = std::bit_cast<float>(g6);
    hot_regs.g31 = (0x089ECFB8u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    goto L_089EC124;
}
}
L_089ECFB8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (50319u << 16u);
    g4 = (g4 | 62497u);
    f12 = std::bit_cast<float>(g4);
    g6 = (48346u << 16u);
    g4 = (50055u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 | 33128u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g6 = (g6 | 32957u);
    g4 = (16677u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g6);
    g4 = (g4 | 4719u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g6 = (16255u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    g6 = (g6 | 59567u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.f15 = std::bit_cast<float>(g6);
    hot_regs.g31 = (0x089ED014u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    goto L_089EC124;
}
}
L_089ED014:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (50269u << 16u);
    g4 = (g4 | 44597u);
    f12 = std::bit_cast<float>(g4);
    g6 = (48946u << 16u);
    g4 = (50013u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 | 2753u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g6 = (g6 | 32818u);
    g4 = (16672u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g6);
    g4 = (g4 | 34603u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g6 = (16183u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    g6 = (g6 | 32987u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.f15 = std::bit_cast<float>(g6);
    hot_regs.g31 = (0x089ED070u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    goto L_089EC124;
}
}
L_089ED070:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (50326u << 16u);
    g4 = (g4 | 15507u);
    f12 = std::bit_cast<float>(g4);
    g6 = (48949u << 16u);
    g4 = (49870u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 | 58589u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g6 = (g6 | 1267u);
    g4 = (16678u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g6);
    g4 = (g4 | 32506u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    g6 = (16181u << 16u);
    f12 = std::bit_cast<float>(g4);
    g6 = (g6 | 1267u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    ctx.fpr[24] = std::bit_cast<float>(g6);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089ED0D4u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    goto L_089EC124;
}
}
L_089ED0D4:
    hot_regs.g4 = (50288u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 35766u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g6 = (48595u << 16u);
    hot_regs.g4 = (17218u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 33030u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g6 = (hot_regs.g6 | 28036u);
    hot_regs.g4 = (16651u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 16253u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089ED11Cu);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 650u, 0x089EBFB4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089ED11Cu) goto L_089ED11C;
    return;
L_089ED11C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (50224u << 16u);
    g4 = (g4 | 8845u);
    f12 = std::bit_cast<float>(g4);
    g6 = (48938u << 16u);
    g4 = (17434u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 | 6551u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g6 = (g6 | 42005u);
    g4 = (16672u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g6);
    g4 = (g4 | 53175u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g6 = (16190u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    g6 = (g6 | 54666u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.f15 = std::bit_cast<float>(g6);
    hot_regs.g31 = (0x089ED178u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    goto L_089EC124;
}
}
L_089ED178:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (50130u << 16u);
    g4 = (g4 | 15183u);
    f12 = std::bit_cast<float>(g4);
    g6 = (16213u << 16u);
    g4 = (17497u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 | 8343u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g6 = (g6 | 5660u);
    g4 = (16672u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g6);
    g4 = (g4 | 32764u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g6 = (48909u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    g6 = (g6 | 57734u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.f15 = std::bit_cast<float>(g6);
    hot_regs.g31 = (0x089ED1D4u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    goto L_089EC124;
}
}
L_089ED1D4:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (50291u << 16u);
    g4 = (g4 | 26804u);
    f12 = std::bit_cast<float>(g4);
    g4 = (17537u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 | 34120u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    g4 = (16672u << 16u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 | 47186u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(g4);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x089ED220u);
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    goto L_089EC124;
}
}
L_089ED220:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (50212u << 16u);
    g4 = (g4 | 25412u);
    f12 = std::bit_cast<float>(g4);
    g4 = (17544u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 | 26518u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    g4 = (16672u << 16u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 | 63963u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(g4);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x089ED26Cu);
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    goto L_089EC124;
}
}
L_089ED26C:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (50210u << 16u);
    g4 = (g4 | 705u);
    f12 = std::bit_cast<float>(g4);
    g4 = (17594u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 | 30384u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    g4 = (16686u << 16u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 | 48234u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(g4);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x089ED2B8u);
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    goto L_089EC124;
}
}
L_089ED2B8:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (50118u << 16u);
    g4 = (g4 | 59245u);
    f12 = std::bit_cast<float>(g4);
    g4 = (17583u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 | 5349u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    g4 = (16672u << 16u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 | 32508u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(g4);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x089ED304u);
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    goto L_089EC124;
}
}
L_089ED304:
    hot_regs.g4 = (17392u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 44767u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g6 = (48652u << 16u);
    hot_regs.g4 = (17571u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 40372u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g6 = (hot_regs.g6 | 53402u);
    hot_regs.g4 = (16772u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 29834u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089ED34Cu);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 650u, 0x089EBFB4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089ED34Cu) goto L_089ED34C;
    return;
L_089ED34C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (17280u << 16u);
    g4 = (g4 | 7574u);
    f12 = std::bit_cast<float>(g4);
    g6 = (48983u << 16u);
    g4 = (17542u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 | 60842u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g6 = (g6 | 33065u);
    g4 = (16729u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g6);
    g4 = (g4 | 44953u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g6 = (16138u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    g6 = (g6 | 11815u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.f15 = std::bit_cast<float>(g6);
    hot_regs.g31 = (0x089ED3A8u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    goto L_089EC124;
}
}
L_089ED3A8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (17296u << 16u);
    g4 = (g4 | 18355u);
    f12 = std::bit_cast<float>(g4);
    g6 = (48935u << 16u);
    g4 = (17504u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 | 63094u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g6 = (g6 | 21203u);
    g4 = (16676u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g6);
    g4 = (g4 | 51666u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g6 = (16193u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    g6 = (g6 | 49113u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.f15 = std::bit_cast<float>(g6);
    hot_regs.g31 = (0x089ED404u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    goto L_089EC124;
}
}
L_089ED404:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (17401u << 16u);
    g4 = (g4 | 51320u);
    f12 = std::bit_cast<float>(g4);
    g4 = (17436u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 | 54208u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    g4 = (16672u << 16u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 | 23442u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(g4);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x089ED450u);
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    goto L_089EC124;
}
}
L_089ED450:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (17357u << 16u);
    g4 = (g4 | 13686u);
    f12 = std::bit_cast<float>(g4);
    g6 = (48919u << 16u);
    g4 = (17345u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 | 30743u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g6 = (g6 | 22205u);
    g4 = (16681u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g6);
    g4 = (g4 | 50090u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g6 = (16206u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    g6 = (g6 | 31230u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.f15 = std::bit_cast<float>(g6);
    hot_regs.g31 = (0x089ED4ACu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    goto L_089EC124;
}
}
L_089ED4AC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (17338u << 16u);
    g4 = (g4 | 49109u);
    f12 = std::bit_cast<float>(g4);
    g6 = (48942u << 16u);
    g4 = (17233u << 16u);
    g4 = (g4 | 57857u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g6 = (g6 | 16126u);
    g4 = (16672u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g6);
    g4 = (g4 | 24401u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(g4);
    g6 = (16187u << 16u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f13));
    g6 = (g6 | 35924u);
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.f15 = std::bit_cast<float>(g6);
    hot_regs.g31 = (0x089ED508u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_089EC124;
}
}
L_089ED508:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (17293u << 16u);
    g4 = (g4 | 59212u);
    f12 = std::bit_cast<float>(g4);
    g6 = (48904u << 16u);
    g4 = (49864u << 16u);
    g4 = (g4 | 36100u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g6 = (g6 | 32479u);
    g4 = (16676u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g6);
    g4 = (g4 | 54122u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(g4);
    g6 = (16216u << 16u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f13));
    g6 = (g6 | 37717u);
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.f15 = std::bit_cast<float>(g6);
    hot_regs.g31 = (0x089ED564u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_089EC124;
}
}
L_089ED564:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (17301u << 16u);
    g4 = (g4 | 44104u);
    f12 = std::bit_cast<float>(g4);
    g6 = (48948u << 16u);
    g4 = (50067u << 16u);
    g4 = (g4 | 19048u);
    f13 = std::bit_cast<float>(g4);
    g6 = (g6 | 63977u);
    g4 = (16686u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 | 64620u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g6 = (16181u << 16u);
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f13));
    g6 = (g6 | 4093u);
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f14));
    ctx.fpr[28] = std::bit_cast<float>(g6);
    g4 = (ctx.gpr[19] | 0u);
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089ED5C8u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_089EC124;
}
}
L_089ED5C8:
{
    float f12 = hot_regs.f12;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g6 = (16882u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (17383u << 16u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    g6 = (g6 | 64435u);
    g4 = (g4 | 60982u);
    f15 = std::bit_cast<float>(g6);
    f12 = std::bit_cast<float>(g4);
    g6 = (16673u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    g6 = (g6 | 4283u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f15));
    ctx.fpr[16] = std::bit_cast<float>(g6);
    g4 = (ctx.gpr[19] | 0u);
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089ED614u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f15 = f15;
    goto L_089EC124;
}
}
L_089ED614:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (17324u << 16u);
    g4 = (g4 | 50188u);
    g5 = (50135u << 16u);
    f12 = std::bit_cast<float>(g4);
    g5 = (g5 | 51590u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f14 = std::bit_cast<float>(g5);
    g6 = (16657u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    g6 = (g6 | 56493u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    f14 = std::bit_cast<float>(g6);
    g4 = (ctx.gpr[19] | 0u);
    g6 = (48829u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f14));
    g6 = (g6 | 18057u);
    f14 = std::bit_cast<float>(g6);
    g5 = (ctx.gpr[16] | 0u);
    g6 = (16237u << 16u);
    g6 = (g6 | 56680u);
    hot_regs.g31 = (0x089ED670u);
    hot_regs.f15 = std::bit_cast<float>(g6);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    goto L_089EC124;
}
}
L_089ED670:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (17288u << 16u);
    g6 = (50272u << 16u);
    g4 = (g4 | 53732u);
    g6 = (g6 | 59137u);
    f12 = std::bit_cast<float>(g4);
    f14 = std::bit_cast<float>(g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    g6 = (16658u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    g6 = (g6 | 41340u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    f14 = std::bit_cast<float>(g6);
    g4 = (ctx.gpr[19] | 0u);
    g6 = (16217u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f14));
    g6 = (g6 | 19232u);
    f14 = std::bit_cast<float>(g6);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    g6 = (48903u << 16u);
    g6 = (g6 | 22921u);
    hot_regs.g31 = (0x089ED6CCu);
    hot_regs.f15 = std::bit_cast<float>(g6);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    goto L_089EC124;
}
}
L_089ED6CC:
    hot_regs.g6 = (17227u << 16u);
    hot_regs.g6 = (hot_regs.g6 | 53482u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (50219u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g6 | 31330u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (16663u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g6 | 29490u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (48727u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g6 | 9332u);
    hot_regs.g31 = (0x089ED714u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 650u, 0x089EBFB4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089ED714u) goto L_089ED714;
    return;
L_089ED714:
{
    float f15 = hot_regs.f15;
    float f20 = hot_regs.f20;
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g6 = (49683u << 16u);
    g6 = (g6 | 16267u);
    f15 = std::bit_cast<float>(g6);
    g6 = (50292u << 16u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f15));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f20));
    g6 = (g6 | 25189u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f20));
    f15 = std::bit_cast<float>(g6);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    g6 = (16675u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f15));
    g6 = (g6 | 38944u);
    f15 = std::bit_cast<float>(g6);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f15));
    g6 = (16256u << 16u);
    hot_regs.g31 = (0x089ED764u);
    f15 = std::bit_cast<float>(g6);
    hot_regs.g6 = g6;
    hot_regs.f15 = f15;
    goto L_089EC124;
}
}
L_089ED764:
{
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g6 = (16994u << 16u);
    g6 = (g6 | 33411u);
    f15 = std::bit_cast<float>(g6);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    g6 = (50314u << 16u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g6 = (g6 | 40343u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    f16 = std::bit_cast<float>(g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f15));
    g6 = (16662u << 16u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f16));
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    g6 = (g6 | 50647u);
    f16 = std::bit_cast<float>(g6);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089ED7B0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f16));
    hot_regs.g6 = g6;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    goto L_089EC124;
}
}
L_089ED7B0:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g6 = (49794u << 16u);
    g6 = (g6 | 22928u);
    f14 = std::bit_cast<float>(g6);
    g6 = (50348u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f14));
    g6 = (g6 | 39349u);
    f14 = std::bit_cast<float>(g6);
    g6 = (16662u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    g6 = (g6 | 48404u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    f14 = std::bit_cast<float>(g6);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    g6 = (48940u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f14));
    g6 = (g6 | 62331u);
    f14 = std::bit_cast<float>(g6);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    g6 = (16188u << 16u);
    g6 = (g6 | 48693u);
    hot_regs.g31 = (0x089ED80Cu);
    hot_regs.f15 = std::bit_cast<float>(g6);
    hot_regs.g6 = g6;
    hot_regs.f14 = f14;
    goto L_089EC124;
}
}
L_089ED80C:
    hot_regs.g6 = (17225u << 16u);
    hot_regs.g6 = (hot_regs.g6 | 46563u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (50327u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g6 | 17769u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (16662u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g6 | 28248u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (16531u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g6 | 38273u);
    hot_regs.g31 = (0x089ED854u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 650u, 0x089EBFB4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089ED854u) goto L_089ED854;
    return;
L_089ED854:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(280));
    goto L_089ED860;
L_089ED860:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 255u);
    hot_regs.g6 = (0u | 255u);
    hot_regs.g7 = (0u | 255u);
    hot_regs.g31 = (0x089ED878u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089ED878u) goto L_089ED878;
    return;
L_089ED878:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(1)));
    hot_regs.g5 = (ctx.gpr[19] + g16);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(2)));
    g16 = (g16 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(316), static_cast<std::uint8_t>(0u));
    g4 = (static_cast<std::int32_t>(g16) < 9 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g17 = (g17 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089ED860;
      }
      goto L_089ED8B0;
    }
}
L_089ED8B0:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-10001), static_cast<std::uint8_t>(0u));
    hot_regs.g2 = (ctx.gpr[19] | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089ED8FC:
{
    std::uint32_t g5 = hot_regs.g5;
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(48);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089ED924:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED92C:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED934:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED93C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED944:
    jump_target = hot_regs.g31;
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1704)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED94C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g6 = (hot_regs.g6 & 255u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x089ED970u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 92u, 0x08834A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089ED970u) goto L_089ED970;
    return;
L_089ED970:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (2234u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(26896));
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(92), g4);
    g4 = (0u | 4u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(852), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1924), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1928), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1932), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1936), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1940), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(f12));
    g4 = (16672u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1948), std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1921))))));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1960), std::bit_cast<std::uint32_t>(f13));
    g5 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1952), std::bit_cast<std::uint32_t>(f13));
    g4 = (g4 & g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1956), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(1921), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1964), std::bit_cast<std::uint32_t>(f12));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1921))))));
    g5 = (0u + static_cast<std::uint32_t>(-3));
    g4 = (g4 & g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(1921), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(2040), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(236)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(2064), 0u);
    g5 = (128u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(2060), 0u);
    g4 = (g4 | g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(236), g4);
    g4 = (0u | 4u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(1969), static_cast<std::uint8_t>(g4));
    g4 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_089EDA04;
}
}
L_089EDA04:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g4 + ctx.gpr[16]);
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(1970), static_cast<std::uint8_t>(0u));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089EDA04;
      }
      goto L_089EDA1C;
    }
}
L_089EDA1C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g5 = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2024), g4);
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    goto L_089EDA2C;
}
L_089EDA2C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(1976), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(2000), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 6 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089EDA2C;
      }
      goto L_089EDA44;
    }
}
L_089EDA44:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2044), 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(618))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2048), hot_regs.g4);
    hot_regs.g4 = (hot_regs.g5 | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(537), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (0u | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2052), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1968), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (16640u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2053), static_cast<std::uint8_t>(0u));
    hot_regs.g31 = (0x089EDA88u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EDA88u) goto L_089EDA88;
    return;
L_089EDA88:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    f12 = hot_regs.f22 - f20;
    hot_regs.g2 = (g16 | 0u);
    { const float fs = f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f20 + f12;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(2056), std::bit_cast<std::uint32_t>(f12));
    f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_089EDAB4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089EDAFC;
      }
      goto L_089EDAD0;
    }
}
L_089EDAD0:
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(26896));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089EDAE8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 297u, 0x08831598u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EDAE8u) goto L_089EDAE8;
    return;
L_089EDAE8:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDAFC;
      }
      goto L_089EDAF4;
    }
L_089EDAF4:
    hot_regs.g31 = (0x089EDAFCu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 734u, 0x08AFF2E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EDAFCu) goto L_089EDAFC;
    return;
L_089EDAFC:
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
L_089EDB10:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDB18:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g16);
    g16 = (g4 | 0u);
    g6 = (15969u << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(86))))));
    g6 = (g6 | 18350u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    hot_regs.f22 = std::bit_cast<float>(0u);
    g6 = (16320u << 16u);
    ctx.gpr[19] = (0u | 0u);
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    { const bool branch_taken = g5 == 0u;
    ctx.fpr[26] = std::bit_cast<float>(g6);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089EDB88;
      }
      goto L_089EDB78;
    }
}
L_089EDB78:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    ctx.gpr[19] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_089EDB88;
}
L_089EDB88:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(548));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(652), hot_regs.g4);
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(552));
    hot_regs.g31 = (0x089EDBA4u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 434u, 0x08AA1BA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EDBA4u) goto L_089EDBA4;
    return;
L_089EDBA4:
{
    float f12 = hot_regs.f12;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1640)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9968)));
    ctx.gpr[19] = (hot_regs.g29 | 0u);
    ctx.set_fpu_condition((f12 < hot_regs.f22));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1312)));
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f12 = f12;
        goto L_089EDBC8;
    }
    goto L_089EDBC8;
}
L_089EDBC8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16345u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 / ctx.fpr[24];
    ctx.set_fpu_condition((f12 <= ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
        goto L_089EDBEC;
    }
    goto L_089EDBEC;
}
}
L_089EDBEC:
    hot_regs.g31 = (0x089EDBF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EDBF4u) goto L_089EDBF4;
    return;
L_089EDBF4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9956)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9960)));
    hot_regs.g7 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x089EDC08u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EDC08u) goto L_089EDC08;
    return;
L_089EDC08:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9948)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9952)));
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x089EDC1Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EDC1Cu) goto L_089EDC1C;
    return;
L_089EDC1C:
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x089EDC28u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 496u, 0x08B626A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EDC28u) goto L_089EDC28;
    return;
L_089EDC28:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 256 ? 1u : 0u);
    if (hot_regs.g4 != 0u) {
    { const float fs = hot_regs.f20; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
        goto L_089EDC40;
    }
    goto L_089EDC38;
L_089EDC38:
    ctx.gpr[17] = (0u | 255u);
    { const float fs = hot_regs.f20; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    goto L_089EDC40;
L_089EDC40:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = f12 / ctx.fpr[24];
    g4 = (16076u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 - hot_regs.f13;
    ctx.set_fpu_condition((f12 < hot_regs.f22));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
        goto L_089EDC64;
    }
    goto L_089EDC64;
}
}
L_089EDC64:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(ctx.gpr[20]);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089EDC88;
      }
      goto L_089EDC84;
    }
}
L_089EDC84:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    goto L_089EDC88;
L_089EDC88:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDCC0;
      }
      goto L_089EDC90;
    }
L_089EDC90:
    hot_regs.g5 = (2179u << 16u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089EDCA4u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(992));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 626u, 0x08972E68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EDCA4u) goto L_089EDCA4;
    return;
L_089EDCA4:
    ctx.gpr[21] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDCC0;
      }
      goto L_089EDCB0;
    }
L_089EDCB0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x089EDCC0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 502u, 0x08B01DD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EDCC0u) goto L_089EDCC0;
    return;
L_089EDCC0:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDCFC;
      }
      goto L_089EDCD0;
    }
L_089EDCD0:
    hot_regs.g5 = (2179u << 16u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089EDCE0u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(992));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 626u, 0x08972E68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EDCE0u) goto L_089EDCE0;
    return;
L_089EDCE0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDCFC;
      }
      goto L_089EDCEC;
    }
L_089EDCEC:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089EDCFCu);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 502u, 0x08B01DD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EDCFCu) goto L_089EDCFC;
    return;
L_089EDCFC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1316)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDD38;
      }
      goto L_089EDD0C;
    }
L_089EDD0C:
    hot_regs.g5 = (2179u << 16u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089EDD1Cu);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(992));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 626u, 0x08972E68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EDD1Cu) goto L_089EDD1C;
    return;
L_089EDD1C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDD38;
      }
      goto L_089EDD28;
    }
L_089EDD28:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089EDD38u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 502u, 0x08B01DD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EDD38u) goto L_089EDD38;
    return;
L_089EDD38:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1324)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDD74;
      }
      goto L_089EDD48;
    }
L_089EDD48:
    hot_regs.g5 = (2179u << 16u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089EDD58u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(992));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 626u, 0x08972E68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EDD58u) goto L_089EDD58;
    return;
L_089EDD58:
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDD74;
      }
      goto L_089EDD64;
    }
L_089EDD64:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089EDD74u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 502u, 0x08B01DD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EDD74u) goto L_089EDD74;
    return;
L_089EDD74:
    hot_regs.g31 = (0x089EDD7Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 129u, 0x08AD0934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EDD7Cu) goto L_089EDD7C;
    return;
L_089EDD7C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089EDDB0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (g6 | 0u);
    g6 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g6 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089EDDF4;
      }
      goto L_089EDDC0;
    }
}
L_089EDDC0:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    hot_regs.g6 = (48896u << 16u);
      if (branch_taken) {
          goto L_089EDE74;
      }
      goto L_089EDDC8;
    }
L_089EDDC8:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.f13 = std::bit_cast<float>(g6);
    g6 = (49024u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) > 0;
    hot_regs.f12 = std::bit_cast<float>(g6);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089EDE58;
      }
      goto L_089EDDD8;
    }
}
L_089EDDD8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (49049u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EDE84;
      }
      goto L_089EDDF4;
    }
}
L_089EDDF4:
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EDE2C;
      }
      goto L_089EDDFC;
    }
L_089EDDFC:
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.g4 = (16281u << 16u);
      if (branch_taken) {
          goto L_089EDE74;
      }
      goto L_089EDE04;
    }
L_089EDE04:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 | 39322u);
    f12 = std::bit_cast<float>(g4);
    g4 = (16256u << 16u);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (48896u << 16u);
    f12 = std::bit_cast<float>(g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089EDE84;
      }
      goto L_089EDE2C;
    }
}
}
L_089EDE2C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (49049u << 16u);
    g4 = (g4 | 39322u);
    f12 = std::bit_cast<float>(g4);
    g4 = (16256u << 16u);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (48896u << 16u);
    f12 = std::bit_cast<float>(g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089EDE84;
      }
      goto L_089EDE58;
    }
}
}
L_089EDE58:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (16281u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EDE84;
      }
      goto L_089EDE74;
    }
}
L_089EDE74:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_089EDE84;
}
}
L_089EDE84:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDE8C:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDE94:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDE9C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x089EDEB4u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(944));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 366u, 0x08B0D814u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EDEB4u) goto L_089EDEB4;
    return;
L_089EDEB4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(615))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-3));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(g4));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089EDED4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(615))))));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-3));
    g5 = (g5 & hot_regs.g6);
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(g5));
    local_pc = jump_target;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089EDEE8:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    g4 = (2279u << 16u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (ctx.gpr[28] | 0u);
    g4 = (g4 + static_cast<std::uint32_t>(20288));
    hot_regs.g4 = g4;
    goto L_089EDEFC;
}
L_089EDEFC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(9688), 0u);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (static_cast<std::int32_t>(g5) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(4));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089EDEFC;
      }
      goto L_089EDF10;
    }
}
L_089EDF10:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(0u);
    g7 = (0u | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g6 = (g7 + g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (0u | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    g4 = (g7 + g4);
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
    goto L_089EDF34;
}
}
L_089EDF34:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g6 = (g6 + static_cast<std::uint32_t>(96));
    hot_regs.g7 = (static_cast<std::int32_t>(g5) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(96));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089EDF34;
      }
      goto L_089EDF60;
    }
}
L_089EDF60:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7612), 0u);
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-9980), static_cast<std::uint8_t>(hot_regs.g4));
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDF74:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(32));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (16025u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EDFA0;
      }
      goto L_089EDF98;
    }
}
L_089EDF98:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089EDFA4;
      }
      goto L_089EDFA0;
    }
L_089EDFA0:
    hot_regs.g2 = (0u | 1u);
    goto L_089EDFA4;
L_089EDFA4:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDFAC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x089EDFBCu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(944));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 382u, 0x08B0D940u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EDFBCu) goto L_089EDFBC;
    return;
L_089EDFBC:
    hot_regs.g4 = (hot_regs.g2 & 255u);
    hot_regs.g5 = (0u | 3u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089EDFD4;
      }
      goto L_089EDFCC;
    }
L_089EDFCC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_089EDFD8;
      }
      goto L_089EDFD4;
    }
L_089EDFD4:
    hot_regs.g2 = (0u | 0u);
    goto L_089EDFD8;
L_089EDFD8:
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
L_089EDFE4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g28 = ctx.gpr[28];
    g9 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7612)));
    g9 = (g9 << 5u);
    g10 = (g9 + g9);
    g9 = (g9 + g10);
    g10 = (2279u << 16u);
    g10 = (g10 + static_cast<std::uint32_t>(20288));
    g9 = (g9 + g10);
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7612)));
    g4 = (g4 << 5u);
    g9 = (g4 + g4);
    g4 = (g4 + g9);
    g9 = (g10 + static_cast<std::uint32_t>(16));
    g4 = (g4 + g9);
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
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
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7612)));
    g5 = (g4 << 5u);
    g9 = (g5 + g5);
    g5 = (g5 + g9);
    g5 = (g5 + g10);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(40), hot_regs.g6);
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(hot_regs.g7));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[8]));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7612), g4);
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089EE05C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(124), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), hot_regs.g31);
    ctx.gpr[19] = (0u | 0u);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g6 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = hot_regs.f13 - hot_regs.f14;
    hot_regs.g6 = (16128u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g6);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.gpr[30] = (hot_regs.g5 | 0u);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), hot_regs.g4);
      if (branch_taken) {
          goto L_089EE24C;
      }
      goto L_089EE0EC;
    }
L_089EE0EC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (48860u << 16u);
    g4 = (g4 | 10486u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    ctx.gpr[21] = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-9972)));
    g4 = (16318u << 16u);
    g4 = (g4 | 47186u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    ctx.gpr[17] = (0u | 0u);
    g4 = (16204u << 16u);
    g4 = (g4 | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(g4);
    ctx.gpr[22] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    g4 = (16320u << 16u);
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    ctx.fpr[24] = std::bit_cast<float>(g4);
    ctx.gpr[20] = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-9976)));
    ctx.gpr[16] = (g28 | 0u);
    ctx.gpr[23] = (2u << 16u);
    hot_regs.g4 = g4;
    goto L_089EE134;
}
L_089EE134:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9688)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE23C;
      }
      goto L_089EE140;
    }
L_089EE140:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9688)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(236)));
    g4 = (g4 & ctx.gpr[23]);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EE23C;
      }
      goto L_089EE154;
    }
}
L_089EE154:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9688)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(48);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    hot_regs.g31 = (0x089EE194u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 186u, 0x088B1424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EE194u) goto L_089EE194;
    return;
L_089EE194:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EE23C;
      }
      goto L_089EE1A4;
    }
L_089EE1A4:
    hot_regs.g31 = (0x089EE1ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EE1ACu) goto L_089EE1AC;
    return;
L_089EE1AC:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x089EE1C0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EE1C0u) goto L_089EE1C0;
    return;
L_089EE1C0:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    g4 = (hot_regs.g2 >> 31u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    g4 = (ctx.gpr[1] | g4);
    g4 = (g4 | 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (48460u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EE1EC;
      }
      goto L_089EE1DC;
    }
}
L_089EE1DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15692u << 16u);
    g4 = (g4 | 52429u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EE1F4;
      }
      goto L_089EE1EC;
    }
}
L_089EE1EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    goto L_089EE1F4;
}
L_089EE1F4:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9688)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(1720), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9688)));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1969), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9688)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (hot_regs.g5 + static_cast<std::uint32_t>(328));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    hot_regs.g31 = (0x089EE220u);
    ctx.gpr[18] = (hot_regs.g4 + hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EE220u) goto L_089EE220;
    return;
L_089EE220:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x089EE234u);
    hot_regs.g6 = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EE234u) goto L_089EE234;
    return;
L_089EE234:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    goto L_089EE23C;
L_089EE23C:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089EE134;
      }
      goto L_089EE24C;
    }
}
L_089EE24C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[19] | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089EE290:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[28] | 0u);
    hot_regs.g29 = g29;
    goto L_089EE2A8;
}
L_089EE2A8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9688)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE2BC;
      }
      goto L_089EE2B4;
    }
L_089EE2B4:
    hot_regs.g31 = (0x089EE2BCu);
    // nop
    goto L_089EDB10;
L_089EE2BC:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089EE2A8;
      }
      goto L_089EE2CC;
    }
}
L_089EE2CC:
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
L_089EE2E0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-400));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(340), hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(332), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(348), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(352), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(356), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(360), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(364), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(368), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(372), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(376), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(380), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(384), hot_regs.g31);
    g4 = (0u | 0u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(336), static_cast<std::uint8_t>(g4));
    g4 = (0u | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(328), g4);
    g4 = (17024u << 16u);
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(176));
    hot_regs.f20 = std::bit_cast<float>(g4);
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(128));
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(160));
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(208));
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(144));
    ctx.gpr[17] = (g29 + static_cast<std::uint32_t>(192));
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(48));
    ctx.gpr[23] = (ctx.gpr[28] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
    goto L_089EE350;
}
L_089EE350:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(9688)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE5F0;
      }
      goto L_089EE35C;
    }
L_089EE35C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(9688)));
    hot_regs.g5 = (4u << 16u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & hot_regs.g5);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EE5F0;
      }
      goto L_089EE37C;
    }
}
L_089EE37C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(9688)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(332)));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
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
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EE5F0;
      }
      goto L_089EE3C4;
    }
L_089EE3C4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(9688)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (hot_regs.g5 << 2u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    hot_regs.g5 = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), 0u);
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    hot_regs.g5 = (hot_regs.g5 & hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), hot_regs.g5);
    hot_regs.g31 = (0x089EE404u);
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 934u, 0x0885FE8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EE404u) goto L_089EE404;
    return;
L_089EE404:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    std::uint32_t g30 = ctx.gpr[30];
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(332)));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g30 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g30 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g30 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g30 + static_cast<std::uint32_t>(48);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(340)));
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
    g4 = (g29 + static_cast<std::uint32_t>(32));
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g30 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g30 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g30 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g30 + static_cast<std::uint32_t>(48);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (0u | 0u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089EE540;
      }
      goto L_089EE474;
    }
}
L_089EE474:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    hot_regs.g7 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(12)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f13));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g6 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EE520;
      }
      goto L_089EE4D0;
    }
L_089EE4D0:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(hot_regs.f13));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g6 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EE52C;
      }
      goto L_089EE520;
    }
L_089EE520:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_089EE540;
      }
      goto L_089EE52C;
    }
L_089EE52C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g6 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(32));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089EE474;
      }
      goto L_089EE540;
    }
}
L_089EE540:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE5CC;
      }
      goto L_089EE54C;
    }
L_089EE54C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(9688)));
    hot_regs.g31 = (0x089EE558u);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1969), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EE558u) goto L_089EE558;
    return;
L_089EE558:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9972)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9976)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x089EE56Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EE56Cu) goto L_089EE56C;
    return;
L_089EE56C:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    g4 = (hot_regs.g2 >> 31u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    g4 = (ctx.gpr[1] | g4);
    g4 = (g4 | 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (48460u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EE598;
      }
      goto L_089EE588;
    }
}
L_089EE588:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15692u << 16u);
    g4 = (g4 | 52429u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EE5A0;
      }
      goto L_089EE598;
    }
}
L_089EE598:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    goto L_089EE5A0;
}
L_089EE5A0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g23 = ctx.gpr[23];
    g4 = (aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(9688)));
    g5 = (0u | 3u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(1720), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(9688)));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(1920), static_cast<std::uint8_t>(g5));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g5 = (aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(9688)));
    g4 = (g4 + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(2060), g4);
    g4 = (0u | 1u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(336), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089EE5CC;
}
L_089EE5CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EE5F0;
      }
      goto L_089EE5DC;
    }
}
L_089EE5DC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE5F0;
      }
      goto L_089EE5E8;
    }
L_089EE5E8:
    hot_regs.g31 = (0x089EE5F0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EE5F0u) goto L_089EE5F0;
    return;
L_089EE5F0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(328)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(328), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EE350;
      }
      goto L_089EE608;
    }
}
L_089EE608:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(336)));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(344)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(348)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(352)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(356)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(360)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(364)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(368)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(372)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(376)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(380)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(384)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089EE640:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), ctx.gpr[18]);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[18] = (g4 | 0u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(ctx.gpr[9]));
    g4 = (16544u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(224), ctx.gpr[20]);
    hot_regs.f20 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), hot_regs.g7);
    ctx.gpr[20] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(220), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(228), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(232), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(236), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(240), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), hot_regs.g31);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(188), hot_regs.g6);
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089EE698;
      }
      goto L_089EE698;
    }
}
L_089EE698:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (16256u << 16u);
    ctx.gpr[19] = (0u | 0u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (g29 + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(64));
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (0u | 2u);
    ctx.gpr[16] = (ctx.gpr[28] | 0u);
    goto L_089EE6BC;
}
L_089EE6BC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9688)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE8BC;
      }
      goto L_089EE6C8;
    }
L_089EE6C8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9688)));
    hot_regs.g5 = (1024u << 16u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EE8BC;
      }
      goto L_089EE6E0;
    }
}
L_089EE6E0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9688)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x089EE700u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 186u, 0x088B1424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EE700u) goto L_089EE700;
    return;
L_089EE700:
    ctx.set_fpu_condition((ctx.fpr[0] < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EE8BC;
      }
      goto L_089EE710;
    }
L_089EE710:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9688)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f13 = hot_regs.f13 - hot_regs.f20;
    ctx.set_fpu_condition((hot_regs.f22 <= hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
        goto L_089EE784;
    }
    goto L_089EE784;
L_089EE784:
    hot_regs.f12 = hot_regs.f13 / hot_regs.f12;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(188)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(184)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9688)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(2064)));
    hot_regs.g4 = (hot_regs.g6 + hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(2064), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9688)));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(1922)));
    if (hot_regs.g4 != ctx.gpr[21]) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9688)));
        goto L_089EE7F4;
    }
    goto L_089EE7DC;
L_089EE7DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9688)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(2064)));
    g4 = (g4 < static_cast<std::uint32_t>(401) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EE814;
      }
      goto L_089EE7F0;
    }
}
L_089EE7F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9688)));
    goto L_089EE7F4;
L_089EE7F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(1922)));
    { const bool branch_taken = g4 == ctx.gpr[21];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EE8B4;
      }
      goto L_089EE800;
    }
}
L_089EE800:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9688)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(2064)));
    g4 = (g4 < static_cast<std::uint32_t>(501) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EE8B4;
      }
      goto L_089EE814;
    }
}
L_089EE814:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9688)));
    hot_regs.g31 = (0x089EE820u);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1969), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EE820u) goto L_089EE820;
    return;
L_089EE820:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9972)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9976)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x089EE834u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EE834u) goto L_089EE834;
    return;
L_089EE834:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    g4 = (hot_regs.g2 >> 31u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    g4 = (ctx.gpr[1] | g4);
    g4 = (g4 | 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (48460u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EE868;
      }
      goto L_089EE850;
    }
}
L_089EE850:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15692u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    g4 = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f22 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EE870;
      }
      goto L_089EE868;
    }
}
L_089EE868:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    goto L_089EE870;
}
L_089EE870:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), ctx.gpr[21]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9688)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(1720), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9688)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (hot_regs.g5 + static_cast<std::uint32_t>(328));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    hot_regs.g31 = (0x089EE898u);
    ctx.gpr[22] = (hot_regs.g4 + hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EE898u) goto L_089EE898;
    return;
L_089EE898:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x089EE8ACu);
    hot_regs.g6 = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EE8ACu) goto L_089EE8AC;
    return;
L_089EE8AC:
    ctx.gpr[21] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(192)));
    ctx.gpr[22] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
    goto L_089EE8B4;
L_089EE8B4:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089EE8BC;
L_089EE8BC:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g19) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_089EE6BC;
      }
      goto L_089EE8CC;
    }
}
L_089EE8CC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(180)));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(204)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(208)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(212)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(220)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(224)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(228)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(232)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(236)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089EE908:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-528));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(476), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(484), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(488), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(492), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(496), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(500), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(504), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(508), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(512), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(516), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(520), hot_regs.g31);
    hot_regs.g31 = (0x089EE950u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 525u, 0x08837B78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EE950u) goto L_089EE950;
    return;
L_089EE950:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    hot_regs.f22 = std::bit_cast<float>(0u);
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    ctx.gpr[18] = (0u | 27u);
      if (branch_taken) {
          goto L_089EE97C;
      }
      goto L_089EE968;
    }
L_089EE968:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = g6 != hot_regs.g5;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089EE97C;
      }
      goto L_089EE978;
    }
}
L_089EE978:
    hot_regs.g4 = (0u | 1u);
    goto L_089EE97C;
L_089EE97C:
    hot_regs.g31 = (0x089EE984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EE984u) goto L_089EE984;
    return;
L_089EE984:
    hot_regs.g31 = (0x089EE98Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 333u, 0x0898CF00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EE98Cu) goto L_089EE98C;
    return;
L_089EE98C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE9A0;
      }
      goto L_089EE994;
    }
L_089EE994:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2053)));
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2053), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_089EE9A0;
}
L_089EE9A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (32u << 16u);
    ctx.gpr[20] = (0u | 0u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EF0B0;
      }
      goto L_089EE9B8;
    }
}
L_089EE9B8:
    hot_regs.g31 = (0x089EE9C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 542u, 0x08AAE9E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EE9C0u) goto L_089EE9C0;
    return;
L_089EE9C0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089EF0B0;
      }
      goto L_089EE9C8;
    }
L_089EE9C8:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(533))))));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089EEA28;
      }
      goto L_089EE9D4;
    }
L_089EE9D4:
    hot_regs.g31 = (0x089EE9DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EE9DCu) goto L_089EE9DC;
    return;
L_089EE9DC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EEA14;
      }
      goto L_089EE9E4;
    }
L_089EE9E4:
    hot_regs.g31 = (0x089EE9ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EE9ECu) goto L_089EE9EC;
    return;
L_089EE9EC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 4u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089EEA28;
      }
      goto L_089EE9FC;
    }
L_089EE9FC:
    hot_regs.g31 = (0x089EEA04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EEA04u) goto L_089EEA04;
    return;
L_089EEA04:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 5u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089EEA28;
      }
      goto L_089EEA14;
    }
L_089EEA14:
    ctx.gpr[20] = (0u | 1u);
    hot_regs.g31 = (0x089EEA20u);
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 34u, 0x08960350u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EEA20u) goto L_089EEA20;
    return;
L_089EEA20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_089EEA9C;
      }
      goto L_089EEA28;
    }
L_089EEA28:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(533))))));
    hot_regs.g5 = (0u | 29u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089EEA64;
      }
      goto L_089EEA38;
    }
L_089EEA38:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EEA64;
      }
      goto L_089EEA44;
    }
L_089EEA44:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1921))))));
    g4 = (g4 & 2u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EEA64;
      }
      goto L_089EEA54;
    }
}
L_089EEA54:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089EEA9C;
      }
      goto L_089EEA64;
    }
L_089EEA64:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EEA9C;
      }
      goto L_089EEA74;
    }
}
L_089EEA74:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 261u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089EEA9C;
      }
      goto L_089EEA84;
    }
L_089EEA84:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2053)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EEA9C;
      }
      goto L_089EEA90;
    }
L_089EEA90:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    goto L_089EEA9C;
L_089EEA9C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    g4 = (g4 & 256u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EEAB4;
      }
      goto L_089EEAAC;
    }
}
L_089EEAAC:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_089EEAB4;
L_089EEAB4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2053), static_cast<std::uint8_t>(ctx.gpr[20]));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2053)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF0A8;
      }
      goto L_089EEAC4;
    }
L_089EEAC4:
    hot_regs.g6 = (16256u << 16u);
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089EEAFC;
      }
      goto L_089EEADC;
    }
L_089EEADC:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
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
    g6 = (ctx.gpr[19] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089EEB80;
      }
      goto L_089EEAFC;
    }
}
L_089EEAFC:
    hot_regs.g6 = (16672u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g7 = (49648u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g7);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g7);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089EEB80;
L_089EEB80:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2024)));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g6 = (g5 - g6);
    g5 = (static_cast<std::int32_t>(g6) < 1001 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    hot_regs.g7 = (16968u << 16u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089EEC10;
      }
      goto L_089EEB98;
    }
}
L_089EEB98:
{
    std::uint32_t g7 = hot_regs.g7;
    hot_regs.f12 = std::bit_cast<float>(g7);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2024)));
    g7 = (16384u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g7);
    hot_regs.g7 = g7;
    goto L_089EEBA8;
}
L_089EEBA8:
    hot_regs.g7 = (0u | 5u);
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    goto L_089EEBB0;
L_089EEBB0:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(1972)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(1996)));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(1976), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(2000), std::bit_cast<std::uint32_t>(hot_regs.f15));
    g7 = (g7 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(g7) > 0;
    g8 = (g8 + static_cast<std::uint32_t>(-4));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_089EEBB0;
      }
      goto L_089EEBCC;
    }
}
L_089EEBCC:
{
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    { const float fs = f14; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    { const float fs = f15; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    g6 = (g6 + static_cast<std::uint32_t>(-1000));
    { const float fs = f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    { const float fs = f15; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1000));
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < 1001 ? 1u : 0u);
    f14 = ctx.fpr[16] + f14;
    f15 = ctx.fpr[17] + f15;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1976), std::bit_cast<std::uint32_t>(f14));
    { const bool branch_taken = hot_regs.g7 == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2000), std::bit_cast<std::uint32_t>(f15));
    hot_regs.g6 = g6;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_089EEBA8;
      }
      goto L_089EEC0C;
    }
}
}
L_089EEC0C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2024), hot_regs.g5);
    goto L_089EEC10;
L_089EEC10:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g5 = (17530u << 16u);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f13 = std::bit_cast<float>(hot_regs.g5);
    f12 = f12 / f13;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1980)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1984)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2004)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2008)));
    f18 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(2036), std::bit_cast<std::uint32_t>(f18));
    f18 = hot_regs.f20 - f12;
    { const float fs = f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f15; const float ft = f18; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f17; const float ft = f18; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f13 = f13 + f15;
    f12 = f12 + f17;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(2028), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(2032), std::bit_cast<std::uint32_t>(f12));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    f13 = f13 - ctx.fpr[19];
    f12 = f12 - f14;
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f13 + f12;
    f12 = std::sqrt(f12);
    g4 = (17008u << 16u);
    f15 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((f12 <= f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
      if (branch_taken) {
          goto L_089EECA0;
      }
      goto L_089EEC98;
    }
}
}
L_089EEC98:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2040), std::bit_cast<std::uint32_t>(hot_regs.f22));
      if (branch_taken) {
          goto L_089EECD4;
      }
      goto L_089EECA0;
    }
L_089EECA0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16928u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (16800u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EECC0;
      }
      goto L_089EECB8;
    }
}
L_089EECB8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2040), std::bit_cast<std::uint32_t>(hot_regs.f20));
      if (branch_taken) {
          goto L_089EECD4;
      }
      goto L_089EECC0;
    }
L_089EECC0:
{
    float f12 = hot_regs.f12;
    f12 = f12 - hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    f12 = f12 / hot_regs.f14;
    f12 = hot_regs.f20 - f12;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2040), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_089EECD4;
}
L_089EECD4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2028)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2032)));
    f12 = f12 - f13;
    g4 = (16230u << 16u);
    f14 = f14 - hot_regs.f15;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2040)));
    g4 = (g4 | 26214u);
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(g4);
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    f12 = f12 + f13;
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_089EED2C;
      }
      goto L_089EED14;
    }
}
}
L_089EED14:
    hot_regs.g4 = (16964u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EED3C;
      }
      goto L_089EED2C;
    }
L_089EED2C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2044), g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(684), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EED84;
      }
      goto L_089EED3C;
    }
}
L_089EED3C:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2048)));
    g4 = (g4 < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EED84;
      }
      goto L_089EED50;
    }
}
L_089EED50:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x089EED68u);
    hot_regs.g6 = (0u | 113u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EED68u) goto L_089EED68;
    return;
L_089EED68:
    hot_regs.g31 = (0x089EED70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EED70u) goto L_089EED70;
    return;
L_089EED70:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    g4 = (g4 & 4095u);
    g4 = (ctx.gpr[21] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(4500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2048), g4);
    hot_regs.g4 = g4;
    goto L_089EED84;
}
L_089EED84:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF0A8;
      }
      goto L_089EED8C;
    }
L_089EED8C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF0A8;
      }
      goto L_089EED98;
    }
L_089EED98:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EF0A8;
      }
      goto L_089EEDB0;
    }
L_089EEDB0:
    hot_regs.g31 = (0x089EEDB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EEDB8u) goto L_089EEDB8;
    return;
L_089EEDB8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(2320)));
    hot_regs.g5 = (hot_regs.g4 < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EEE08;
      }
      goto L_089EEDC8;
    }
L_089EEDC8:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-1800)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089EEDE0:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (15u << 16u);
    { const bool branch_taken = 0u == 0u;
    g17 = (g17 + static_cast<std::uint32_t>(16959));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089EEE08;
      }
      goto L_089EEDEC;
    }
}
L_089EEDEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 10000u);
      if (branch_taken) {
          goto L_089EEE08;
      }
      goto L_089EEDF4;
    }
L_089EEDF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 5000u);
      if (branch_taken) {
          goto L_089EEE08;
      }
      goto L_089EEDFC;
    }
L_089EEDFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 3500u);
      if (branch_taken) {
          goto L_089EEE08;
      }
      goto L_089EEE04;
    }
L_089EEE04:
    ctx.gpr[17] = (0u | 2000u);
    goto L_089EEE08;
L_089EEE08:
    hot_regs.g31 = (0x089EEE10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 526u, 0x08AAE958u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EEE10u) goto L_089EEE10;
    return;
L_089EEE10:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EEE28;
      }
      goto L_089EEE18;
    }
L_089EEE18:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 1u));
    g4 = (g4 >> 31u);
    g17 = (g17 + g4);
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 1u));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    goto L_089EEE28;
}
L_089EEE28:
    hot_regs.g31 = (0x089EEE30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EEE30u) goto L_089EEE30;
    return;
L_089EEE30:
    { const bool branch_taken = ctx.gpr[19] == hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_089EEE3C;
      }
      goto L_089EEE38;
    }
L_089EEE38:
    ctx.gpr[17] = (0u | 5000u);
    goto L_089EEE3C;
L_089EEE3C:
    hot_regs.g31 = (0x089EEE44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EEE44u) goto L_089EEE44;
    return;
L_089EEE44:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(2318))))));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EF09C;
      }
      goto L_089EEE54;
    }
}
L_089EEE54:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f22));
    g4 = (16480u << 16u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(f12));
    g4 = (49024u << 16u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(f12));
    g4 = (g29 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(48);
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
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2044)));
    g4 = (g4 + ctx.gpr[17]);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089EEF08;
      }
      goto L_089EEEB0;
    }
}
}
L_089EEEB0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2044)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7668)));
    g4 = (g4 + ctx.gpr[17]);
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EEF08;
      }
      goto L_089EEEC8;
    }
}
L_089EEEC8:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x089EEEF4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EEEF4u) goto L_089EEEF4;
    return;
L_089EEEF4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089EEF08;
      }
      goto L_089EEEFC;
    }
L_089EEEFC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2044), g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(684), g4);
    hot_regs.g4 = g4;
    goto L_089EEF08;
}
L_089EEF08:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2044)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + ctx.gpr[17]);
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EF094;
      }
      goto L_089EEF20;
    }
}
L_089EEF20:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(684)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EF094;
      }
      goto L_089EEF34;
    }
}
L_089EEF34:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x089EEF48u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EEF48u) goto L_089EEF48;
    return;
L_089EEF48:
    hot_regs.g4 = (hot_regs.g2 & 255u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-128));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (15523u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    ctx.fpr[26] = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[24] + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x089EEF78u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(164)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EEF78u) goto L_089EEF78;
    return;
L_089EEF78:
    hot_regs.g4 = (hot_regs.g2 & 255u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-128));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[28] + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(144));
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
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(176));
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (16448u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089EEFFCu);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EEFFCu) goto L_089EEFFC;
    return;
L_089EEFFC:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089EF028u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF028u) goto L_089EF028;
    return;
L_089EF028:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089EF038u);
    hot_regs.g6 = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 524u, 0x08A43300u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF038u) goto L_089EF038;
    return;
L_089EF038:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.g6 = (0u | 55u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x089EF050u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF050u) goto L_089EF050;
    return;
L_089EF050:
    hot_regs.g31 = (0x089EF058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF058u) goto L_089EF058;
    return;
L_089EF058:
{
    float f12 = hot_regs.f12;
    f12 = hot_regs.f20 - hot_regs.f22;
    { const float fs = f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f22 + f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9936)));
    ctx.set_fpu_condition((f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089EF088;
      }
      goto L_089EF078;
    }
}
L_089EF078:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(400));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(684), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EF094;
      }
      goto L_089EF088;
    }
}
L_089EF088:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(150));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(684), g4);
    hot_regs.g4 = g4;
    goto L_089EF094;
}
L_089EF094:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF0A8;
      }
      goto L_089EF09C;
    }
L_089EF09C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2044), g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(684), g4);
    hot_regs.g4 = g4;
    goto L_089EF0A8;
}
L_089EF0A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF0B4;
      }
      goto L_089EF0B0;
    }
L_089EF0B0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2040), std::bit_cast<std::uint32_t>(hot_regs.f22));
    goto L_089EF0B4;
L_089EF0B4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(533))))));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089EF0D4;
      }
      goto L_089EF0C0;
    }
L_089EF0C0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1969)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_089EF0D4;
      }
      goto L_089EF0CC;
    }
L_089EF0CC:
    hot_regs.g31 = (0x089EF0D4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 115u, 0x089F095Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF0D4u) goto L_089EF0D4;
    return;
L_089EF0D4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (15692u << 16u);
    g4 = (g4 | 52429u);
    ctx.gpr[17] = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(224));
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(208));
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(256));
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(240));
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(272));
    hot_regs.g4 = g4;
    goto L_089EF0F8;
}
L_089EF0F8:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (ctx.gpr[17] + ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load8(g18 + static_cast<std::uint32_t>(1970)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[30] = (g18 | 0u);
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089EF1C0;
      }
      goto L_089EF108;
    }
}
L_089EF108:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1970)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1970), static_cast<std::uint8_t>(g4));
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[17]);
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089EF128u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = g4;
    goto L_089EDDB0;
}
L_089EF128:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(48);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x089EF160u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 828u, 0x0893FA88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF160u) goto L_089EF160;
    return;
L_089EF160:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1970)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089EF1C0;
      }
      goto L_089EF16C;
    }
L_089EF16C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x089EF17Cu);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    goto L_089EDDB0;
L_089EF17C:
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(hot_regs.f22));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089EF1C0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 852u, 0x0893FE6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF1C0u) goto L_089EF1C0;
    return;
L_089EF1C0:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089EF0F8;
      }
      goto L_089EF1D0;
    }
}
L_089EF1D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (2u << 16u);
    g4 = (g4 & hot_regs.g5);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EF1EC;
      }
      goto L_089EF1EC;
    }
}
L_089EF1EC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(464)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(468)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(472)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(476)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(480)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(484)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(488)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(492)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(496)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(500)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(504)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(508)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(512)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(516)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(520)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089EF230:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    ctx.gpr[17] = (g5 & 255u);
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(900)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    hot_regs.f20 = std::bit_cast<float>(0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), hot_regs.g31);
    { const bool branch_taken = g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089EF270;
      }
      goto L_089EF268;
    }
}
L_089EF268:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089EF29C;
      }
      goto L_089EF270;
    }
L_089EF270:
    hot_regs.g31 = (0x089EF278u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF278u) goto L_089EF278;
    return;
L_089EF278:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089EF29C;
      }
      goto L_089EF280;
    }
L_089EF280:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    hot_regs.g5 = (0u | 55u);
    g4 = (g4 + static_cast<std::uint32_t>(2228));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EF29C;
      }
      goto L_089EF298;
    }
}
L_089EF298:
    ctx.gpr[18] = (0u | 1u);
    goto L_089EF29C;
L_089EF29C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EF300;
      }
      goto L_089EF2A4;
    }
L_089EF2A4:
    hot_regs.g31 = (0x089EF2ACu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF2ACu) goto L_089EF2AC;
    return;
L_089EF2AC:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x089EF2B8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF2B8u) goto L_089EF2B8;
    return;
L_089EF2B8:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x089EF2C4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF2C4u) goto L_089EF2C4;
    return;
L_089EF2C4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[18] - hot_regs.g2);
    f12 = std::bit_cast<float>(g4);
    g4 = (17279u << 16u);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 / hot_regs.f13;
    g4 = (15360u << 16u);
    hot_regs.g5 = (16256u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1936), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-9979)));
    { const bool branch_taken = g4 == 0u;
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089EF314;
      }
      goto L_089EF2F8;
    }
}
}
L_089EF2F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF37C;
      }
      goto L_089EF300;
    }
L_089EF300:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1936), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1928), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1932), std::bit_cast<std::uint32_t>(f20));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1924), std::bit_cast<std::uint32_t>(f20));
      if (branch_taken) {
          goto L_089EF5F8;
      }
      goto L_089EF314;
    }
}
}
L_089EF314:
    hot_regs.g31 = (0x089EF31Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 52u, 0x0898C1C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF31Cu) goto L_089EF31C;
    return;
L_089EF31C:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g2);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x089EF334u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1928), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 1086u, 0x0898F36Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF334u) goto L_089EF334;
    return;
L_089EF334:
    hot_regs.g4 = (0u - hot_regs.g2);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x089EF350u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1932), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 200u, 0x0898C924u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF350u) goto L_089EF350;
    return;
L_089EF350:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g31 = (0x089EF364u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1924), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 148u, 0x0898C6D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF364u) goto L_089EF364;
    return;
L_089EF364:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF3DC;
      }
      goto L_089EF36C;
    }
L_089EF36C:
    hot_regs.g4 = (49024u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1924), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_089EF3DC;
      }
      goto L_089EF37C;
    }
L_089EF37C:
    hot_regs.g31 = (0x089EF384u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 52u, 0x0898C1C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF384u) goto L_089EF384;
    return;
L_089EF384:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g2);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x089EF39Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1928), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 148u, 0x0898C6D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF39Cu) goto L_089EF39C;
    return;
L_089EF39C:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g31 = (0x089EF3B0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1932), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 200u, 0x0898C924u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF3B0u) goto L_089EF3B0;
    return;
L_089EF3B0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF3C4;
      }
      goto L_089EF3B8;
    }
L_089EF3B8:
    hot_regs.g4 = (49024u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1932), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_089EF3C4;
L_089EF3C4:
    hot_regs.g31 = (0x089EF3CCu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 1086u, 0x0898F36Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF3CCu) goto L_089EF3CC;
    return;
L_089EF3CC:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(hot_regs.g2);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    { const float fs = f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1924), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_089EF3DC;
}
L_089EF3DC:
    hot_regs.g31 = (0x089EF3E4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 319u, 0x0898CE74u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF3E4u) goto L_089EF3E4;
    return;
L_089EF3E4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089EF52C;
      }
      goto L_089EF3EC;
    }
L_089EF3EC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EF52C;
      }
      goto L_089EF400;
    }
L_089EF400:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
    hot_regs.g5 = (49152u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (16384u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g6 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(356)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(32)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
        goto L_089EF484;
    }
    goto L_089EF484;
L_089EF484:
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f14));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
        goto L_089EF494;
    }
    goto L_089EF494;
L_089EF494:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1928), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(356)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(24)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
        goto L_089EF514;
    }
    goto L_089EF514;
L_089EF514:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.set_fpu_condition((f13 < hot_regs.f12));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = f13;
        goto L_089EF528;
    }
    goto L_089EF528;
}
L_089EF528:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1932), std::bit_cast<std::uint32_t>(hot_regs.f13));
    goto L_089EF52C;
L_089EF52C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089EF544u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF544u) goto L_089EF544;
    return;
L_089EF544:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF5B8;
      }
      goto L_089EF550;
    }
L_089EF550:
    hot_regs.g31 = (0x089EF558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF558u) goto L_089EF558;
    return;
L_089EF558:
    hot_regs.g31 = (0x089EF560u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 221u, 0x0894CE40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF560u) goto L_089EF560;
    return;
L_089EF560:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (16015u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 23593u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EF5B8;
      }
      goto L_089EF594;
    }
L_089EF594:
    hot_regs.f12 = hot_regs.f13 / hot_regs.f12;
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x089EF5B8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF5B8u) goto L_089EF5B8;
    return;
L_089EF5B8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    hot_regs.g4 = (17274u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EF5F8;
      }
      goto L_089EF5D4;
    }
L_089EF5D4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1924)));
    hot_regs.g5 = (16128u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    g4 = (48588u << 16u);
    f12 = f12 + hot_regs.f14;
    g4 = (g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1936), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1924), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_089EF5F8;
}
}
L_089EF5F8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089EF61C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-688));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(636), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(640), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(656), ctx.gpr[21]);
    ctx.gpr[21] = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(620), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(628), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(632), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(644), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(648), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(652), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(660), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(664), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(668), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(672), hot_regs.g31);
    hot_regs.g31 = (0x089EF66Cu);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF66Cu) goto L_089EF66C;
    return;
L_089EF66C:
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_089EF698;
      }
      goto L_089EF674;
    }
L_089EF674:
    hot_regs.g31 = (0x089EF67Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF67Cu) goto L_089EF67C;
    return;
L_089EF67C:
    hot_regs.g31 = (0x089EF684u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF684u) goto L_089EF684;
    return;
L_089EF684:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(208)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089EF698;
      }
      goto L_089EF694;
    }
L_089EF694:
    ctx.gpr[17] = (0u | 1u);
    goto L_089EF698;
L_089EF698:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EF6B4;
      }
      goto L_089EF6A8;
    }
}
L_089EF6A8:
    hot_regs.g4 = (16448u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9932), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_089EF6B4;
L_089EF6B4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 == 0u;
    g4 = (16968u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EF708;
      }
      goto L_089EF6C4;
    }
}
L_089EF6C4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u | 192u);
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (16968u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EF708;
      }
      goto L_089EF6D8;
    }
}
L_089EF6D8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u | 48u);
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (16968u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EF708;
      }
      goto L_089EF6EC;
    }
}
L_089EF6EC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9932)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EFCA8;
      }
      goto L_089EF704;
    }
L_089EF704:
    hot_regs.g4 = (16968u << 16u);
    goto L_089EF708;
L_089EF708:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g28 = ctx.gpr[28];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7676)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    f12 = f12 / hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-9932)));
    hot_regs.g4 = (0u | 0u);
    f12 = hot_regs.f14 - f12;
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(-9932), std::bit_cast<std::uint32_t>(f12));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(617))))));
    g5 = (g5 & 4u);
    { const bool branch_taken = g5 != 0u;
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-972));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089EF7AC;
      }
      goto L_089EF734;
    }
}
}
L_089EF734:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(236)));
    hot_regs.g6 = (1024u << 16u);
    g5 = (g5 & hot_regs.g6);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089EF7AC;
      }
      goto L_089EF748;
    }
}
L_089EF748:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(352)));
    hot_regs.g6 = (8u << 16u);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(204)));
    g5 = (g5 & hot_regs.g6);
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089EF7AC;
      }
      goto L_089EF768;
    }
}
L_089EF768:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1936)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EF798;
      }
      goto L_089EF780;
    }
L_089EF780:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (15897u << 16u);
    g5 = (g5 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089EF7AC;
      }
      goto L_089EF798;
    }
}
L_089EF798:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(236)));
    g6 = (64512u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g5 = (g5 & g6);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(236), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_089EF7AC;
}
L_089EF7AC:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089EF89C;
      }
      goto L_089EF7B4;
    }
L_089EF7B4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(617))))));
    g5 = (g5 & 4u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089EF89C;
      }
      goto L_089EF7C4;
    }
}
L_089EF7C4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF89C;
      }
      goto L_089EF7D0;
    }
L_089EF7D0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EF89C;
      }
      goto L_089EF7D8;
    }
L_089EF7D8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (15969u << 16u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1640)));
    g5 = (g5 | 18350u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089EF89C;
      }
      goto L_089EF7F8;
    }
}
L_089EF7F8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(236)));
    g5 = (g5 & 256u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089EF828;
      }
      goto L_089EF808;
    }
}
L_089EF808:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(352)));
    hot_regs.g6 = (8u << 16u);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(204)));
    g5 = (g5 & hot_regs.g6);
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089EF89C;
      }
      goto L_089EF828;
    }
}
L_089EF828:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = g5 == ctx.gpr[20];
    g5 = (15172u << 16u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089EF848;
      }
      goto L_089EF834;
    }
}
L_089EF834:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(86))))));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-971));
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_089EF860;
      }
      goto L_089EF844;
    }
L_089EF844:
    hot_regs.g5 = (15172u << 16u);
    goto L_089EF848;
L_089EF848:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1640)));
    g5 = (g5 | 39846u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    f12 = f12 + hot_regs.f13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089EF89C;
      }
      goto L_089EF860;
    }
}
}
L_089EF860:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = g5 == 0u;
    g5 = (14979u << 16u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089EF888;
      }
      goto L_089EF86C;
    }
}
L_089EF86C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (15692u << 16u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1640)));
    g5 = (g5 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    f12 = f12 + hot_regs.f13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089EF89C;
      }
      goto L_089EF888;
    }
}
}
L_089EF888:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1640)));
    g5 = (g5 | 4719u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    f12 = f12 + hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    goto L_089EF89C;
}
}
L_089EF89C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(617))))));
    g5 = (g5 & 4u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089EF9A0;
      }
      goto L_089EF8AC;
    }
}
L_089EF8AC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (15897u << 16u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1640)));
    g5 = (g5 | 39322u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089EF9A0;
      }
      goto L_089EF8CC;
    }
}
L_089EF8CC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(618))))));
    g5 = (g5 & 8u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089EF900;
      }
      goto L_089EF8DC;
    }
}
L_089EF8DC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1924)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1928)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1932)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1936)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x089EF8F8u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 475u, 0x08B061F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF8F8u) goto L_089EF8F8;
    return;
L_089EF8F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF9A0;
      }
      goto L_089EF900;
    }
L_089EF900:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1884)));
    g5 = (static_cast<std::int32_t>(g5) < 4 ? 1u : 0u);
    if (g5 == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1936)));
    hot_regs.g5 = g5;
        goto L_089EF91C;
    }
    goto L_089EF910;
}
L_089EF910:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF984;
      }
      goto L_089EF918;
    }
L_089EF918:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1936)));
    goto L_089EF91C;
L_089EF91C:
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EF984;
      }
      goto L_089EF930;
    }
L_089EF930:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(320)));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) & 0x7FFFFFFFu);
    g4 = (15523u << 16u);
    g4 = (g4 | 55050u);
    f12 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f13 <= f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089EF984;
      }
      goto L_089EF954;
    }
}
}
L_089EF954:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(324)));
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089EF984;
      }
      goto L_089EF96C;
    }
}
L_089EF96C:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(328)));
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089EF9A0;
      }
      goto L_089EF984;
    }
}
L_089EF984:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1924)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1928)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1932)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1936)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x089EF9A0u);
    hot_regs.g5 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 475u, 0x08B061F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EF9A0u) goto L_089EF9A0;
    return;
L_089EF9A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15477u << 16u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1640)));
    g4 = (g4 | 49808u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EFC18;
      }
      goto L_089EF9C0;
    }
}
L_089EF9C0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1312)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EFC18;
      }
      goto L_089EF9CC;
    }
L_089EF9CC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    hot_regs.f20 = std::bit_cast<float>(0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), 0u);
    g4 = (g4 & ctx.gpr[19]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1312)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EFA04;
      }
      goto L_089EF9EC;
    }
}
L_089EF9EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 1u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = g4;
        goto L_089EFA08;
    }
    goto L_089EF9FC;
}
L_089EF9FC:
    hot_regs.g31 = (0x089EFA04u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EFA04u) goto L_089EFA04;
    return;
L_089EFA04:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    goto L_089EFA08;
L_089EFA08:
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g31 = (0x089EFA20u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EFA20u) goto L_089EFA20;
    return;
L_089EFA20:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), 0u);
    hot_regs.g5 = (2179u << 16u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1312)));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g31 = (0x089EFA38u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(992));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 626u, 0x08972E68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EFA38u) goto L_089EFA38;
    return;
L_089EFA38:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EFA50;
      }
      goto L_089EFA44;
    }
L_089EFA44:
    hot_regs.g31 = (0x089EFA4Cu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 525u, 0x0895B9F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EFA4Cu) goto L_089EFA4C;
    return;
L_089EFA4C:
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(12)));
    goto L_089EFA50;
L_089EFA50:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15820u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EFB30;
      }
      goto L_089EFA6C;
    }
}
L_089EFA6C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (16256u << 16u);
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[20];
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
      if (branch_taken) {
          goto L_089EFA8C;
      }
      goto L_089EFA7C;
    }
L_089EFA7C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-971));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089EFA9C;
      }
      goto L_089EFA8C;
    }
L_089EFA8C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16230u << 16u);
    g4 = (g4 | 26214u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EFAE4;
      }
      goto L_089EFA9C;
    }
}
L_089EFA9C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-995));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089EFABC;
      }
      goto L_089EFAAC;
    }
L_089EFAAC:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 263u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089EFACC;
      }
      goto L_089EFABC;
    }
L_089EFABC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16204u << 16u);
    g4 = (g4 | 52429u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EFAE4;
      }
      goto L_089EFACC;
    }
}
L_089EFACC:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 275u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089EFAE4;
      }
      goto L_089EFADC;
    }
L_089EFADC:
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    goto L_089EFAE4;
L_089EFAE4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 496u);
    if (g4 == 0u) {
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
        goto L_089EFB0C;
    }
    goto L_089EFAF4;
}
L_089EFAF4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u | 192u);
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EFB30;
      }
      goto L_089EFB08;
    }
}
L_089EFB08:
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_089EFB0C;
L_089EFB0C:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (0u + static_cast<std::uint32_t>(-3));
    hot_regs.g31 = (0x089EFB30u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 236u, 0x08B08D74u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EFB30u) goto L_089EFB30;
    return;
L_089EFB30:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 == 0u;
    g4 = (15349u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EFB58;
      }
      goto L_089EFB40;
    }
}
L_089EFB40:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u | 48u);
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EFBC0;
      }
      goto L_089EFB54;
    }
}
L_089EFB54:
    hot_regs.g4 = (15349u << 16u);
    goto L_089EFB58;
L_089EFB58:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1640)));
    g4 = (g4 | 49808u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EFBC0;
      }
      goto L_089EFB74;
    }
}
L_089EFB74:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1640)));
    g5 = (15897u << 16u);
    g5 = (g5 | 39322u);
    f13 = std::bit_cast<float>(g5);
    f12 = f12 / f13;
    g5 = (16256u << 16u);
    f13 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((f12 <= f13));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_089EFBB0;
    }
    goto L_089EFBB0;
}
}
L_089EFBB0:
    hot_regs.g31 = (0x089EFBB8u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 193u, 0x089DD3C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EFBB8u) goto L_089EFBB8;
    return;
L_089EFBB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EFBF4;
      }
      goto L_089EFBC0;
    }
L_089EFBC0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u | 32u);
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EFBF4;
      }
      goto L_089EFBD4;
    }
}
L_089EFBD4:
    hot_regs.g4 = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    hot_regs.g5 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g31 = (0x089EFBF4u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 193u, 0x089DD3C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EFBF4u) goto L_089EFBF4;
    return;
L_089EFBF4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EFC18;
      }
      goto L_089EFC04;
    }
}
L_089EFC04:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EFC18;
      }
      goto L_089EFC10;
    }
L_089EFC10:
    hot_regs.g31 = (0x089EFC18u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EFC18u) goto L_089EFC18;
    return;
L_089EFC18:
    hot_regs.g31 = (0x089EFC20u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EFC20u) goto L_089EFC20;
    return;
L_089EFC20:
    hot_regs.g31 = (0x089EFC28u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 347u, 0x0898CF8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EFC28u) goto L_089EFC28;
    return;
L_089EFC28:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089EFC48;
      }
      goto L_089EFC30;
    }
L_089EFC30:
    hot_regs.g31 = (0x089EFC38u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EFC38u) goto L_089EFC38;
    return;
L_089EFC38:
    hot_regs.g31 = (0x089EFC40u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 367u, 0x0898D050u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EFC40u) goto L_089EFC40;
    return;
L_089EFC40:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EFC50;
      }
      goto L_089EFC48;
    }
L_089EFC48:
    hot_regs.g31 = (0x089EFC50u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 320u, 0x089F19A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EFC50u) goto L_089EFC50;
    return;
L_089EFC50:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089EFCA8;
      }
      goto L_089EFC5C;
    }
L_089EFC5C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-971));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (15901u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EFCA8;
      }
      goto L_089EFC6C;
    }
}
L_089EFC6C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1640)));
    g4 = (g4 | 45613u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (15248u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EFCA8;
      }
      goto L_089EFC88;
    }
}
L_089EFC88:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1640)));
    g4 = (g4 | 11744u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EFCA8;
      }
      goto L_089EFCA4;
    }
}
L_089EFCA4:
    ctx.gpr[16] = (0u | 1u);
    goto L_089EFCA8;
L_089EFCA8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EFCBC;
      }
      goto L_089EFCB4;
    }
L_089EFCB4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EFD90;
      }
      goto L_089EFCBC;
    }
L_089EFCBC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(352)));
    hot_regs.g5 = (512u << 16u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(208)));
    g4 = (g4 & hot_regs.g5);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EFD90;
      }
      goto L_089EFCDC;
    }
}
L_089EFCDC:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g21 = ctx.gpr[21];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g21 + static_cast<std::uint32_t>(613))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-17));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store8(g21 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(g4));
    g4 = (14864u << 16u);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    g4 = (g4 | 11744u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(1640)));
    { const float fs = f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f14 <= f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    g4 = (0u + static_cast<std::uint32_t>(-972));
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089EFD30;
      }
      goto L_089EFD14;
    }
}
}
L_089EFD14:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g21 = ctx.gpr[21];
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(1640)));
    { const float fs = hot_regs.f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store8(g21 + static_cast<std::uint32_t>(309), static_cast<std::uint8_t>(0u));
    f12 = hot_regs.f14 - f12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g21 + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089EFD38;
      }
      goto L_089EFD30;
    }
}
}
L_089EFD30:
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_089EFD38;
L_089EFD38:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = hot_regs.g5 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_089EFD90;
      }
      goto L_089EFD44;
    }
L_089EFD44:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-971));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (15901u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EFD90;
      }
      goto L_089EFD54;
    }
}
L_089EFD54:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1640)));
    g4 = (g4 | 45613u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (15248u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EFD90;
      }
      goto L_089EFD70;
    }
}
L_089EFD70:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1640)));
    g4 = (g4 | 11744u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EFD90;
      }
      goto L_089EFD8C;
    }
}
L_089EFD8C:
    ctx.gpr[16] = (0u | 1u);
    goto L_089EFD90;
L_089EFD90:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EFF88;
      }
      goto L_089EFD98;
    }
L_089EFD98:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1312)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EFF88;
      }
      goto L_089EFDA4;
    }
L_089EFDA4:
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(160));
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17352u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EFF88;
      }
      goto L_089EFDF0;
    }
L_089EFDF0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1876)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1608)));
    f12 = f12 - hot_regs.f13;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) & 0x7FFFFFFFu);
    g4 = (16134u << 16u);
    g4 = (g4 | 2706u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089EFF88;
      }
      goto L_089EFE1C;
    }
}
}
L_089EFE1C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(280)));
    g16 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), 0u);
    g4 = (g4 & g16);
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(360)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(280), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(352), 0u);
    g4 = (hot_regs.g5 & g16);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1312)));
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(208));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(360), g4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(368));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_089EFE68;
      }
      goto L_089EFE50;
    }
}
L_089EFE50:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(280)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EFE6C;
      }
      goto L_089EFE60;
    }
}
L_089EFE60:
    hot_regs.g31 = (0x089EFE68u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(272)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EFE68u) goto L_089EFE68;
    return;
L_089EFE68:
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    goto L_089EFE6C;
L_089EFE6C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(272), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(280)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(280), hot_regs.g4);
    hot_regs.g31 = (0x089EFE84u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EFE84u) goto L_089EFE84;
    return;
L_089EFE84:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g21 = ctx.gpr[21];
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g20 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g21 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g21 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g21 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g20 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
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
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
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
      const std::uint32_t vfpu_address = g20 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::sqrt(f20);
    g4 = (15395u << 16u);
    g4 = (g4 | 55050u);
    f20 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((f20 <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f20));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
        goto L_089EFED0;
    }
    goto L_089EFED0;
}
}
L_089EFED0:
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
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
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) & 0x7FFFFFFFu);
    hot_regs.g4 = (16243u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 13107u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EFF40;
      }
      goto L_089EFF1C;
    }
L_089EFF1C:
    hot_regs.g7 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g7);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g31 = (0x089EFF38u);
    hot_regs.g6 = (0u | 31u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EFF38u) goto L_089EFF38;
    return;
L_089EFF38:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1608)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1876), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_089EFF40;
L_089EFF40:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(360)));
    g4 = (g4 & 1u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(280)));
    hot_regs.g4 = g4;
        goto L_089EFF68;
    }
    goto L_089EFF50;
}
L_089EFF50:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(352)));
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(280)));
    hot_regs.g4 = g4;
        goto L_089EFF68;
    }
    goto L_089EFF5C;
}
L_089EFF5C:
    hot_regs.g31 = (0x089EFF64u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EFF64u) goto L_089EFF64;
    return;
L_089EFF64:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(280)));
    goto L_089EFF68;
L_089EFF68:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EFF88;
      }
      goto L_089EFF74;
    }
}
L_089EFF74:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EFF88;
      }
      goto L_089EFF80;
    }
L_089EFF80:
    hot_regs.g31 = (0x089EFF88u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(272)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EFF88u) goto L_089EFF88;
    return;
L_089EFF88:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 173u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 12u, 0x089F015Cu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_089EFF98;
    }
L_089EFF98:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = (hot_regs.g4 & 496u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 12u, 0x089F015Cu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_089EFFA8;
    }
L_089EFFA8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (48844u << 16u);
    g4 = (g4 | 52429u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(f12));
    g4 = (16371u << 16u);
    g4 = (g4 | 13107u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(f12));
    g4 = (48960u << 16u);
    f13 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(f13));
    g4 = (g29 + static_cast<std::uint32_t>(384));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g5 = (g29 + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g5 = (16076u << 16u);
    g5 = (g5 | 52429u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(f13));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    ctx.pc = 0x089F0000u; return;}
}

}

void recomp_unit_0122(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0122_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_122(Runtime &runtime) {
    runtime.register_generated_unit(122u, 0x089EC000u, 16384u, &recomp_unit_0122, &recomp_unit_0122_entry);
    runtime.register_function(0x089EC000u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC014u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC028u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC030u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC040u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC04Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC0BCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC0C8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC0E8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC104u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC124u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC164u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC170u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC180u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC1C8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC1D0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC1DCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC1F4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC204u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC208u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC20Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC214u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC224u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC238u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC240u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC244u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC260u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC2B8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC2C8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC2DCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC2ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC2FCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC310u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC318u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC320u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC330u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC340u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC34Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC364u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC378u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC380u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC390u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC3A0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC3B0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC3B8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC3C8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC3FCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC428u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC434u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC448u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC460u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC4BCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC4D8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC4E0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC4E8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC4F4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC4FCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC510u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC520u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC528u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC530u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC538u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC540u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC55Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC574u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC58Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC594u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC5B0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC5BCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC5C4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC5DCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC5E4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC5ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC5F0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC604u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC614u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC658u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC66Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC6B4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC6BCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC6CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC6D8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC6E0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC6E8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC6F0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC700u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC70Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC718u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC740u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC760u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC764u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC790u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC79Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC7A4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC7C8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC7CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC7E0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC800u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC80Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC814u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC81Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC824u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC838u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC844u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC84Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC854u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC85Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC864u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC86Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC878u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC884u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC890u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC898u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC89Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC8A4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC8CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC90Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC920u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC928u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC930u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC96Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC97Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC990u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC998u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC9A4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC9B4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC9CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC9E8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC9F0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC9FCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA18u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA1Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA2Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA50u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA60u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA70u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA78u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA80u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA90u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA98u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECAA0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECAACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECAB8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECAC4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECACCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECAD0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECAD8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECAF8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECB38u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECB4Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECB54u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECB5Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECB94u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECBA4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECBB8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECBD4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECBF0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECBF8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECC04u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECC20u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECC24u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECC34u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECCD0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECCE8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECCF0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECCFCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECD04u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECD0Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECD14u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECD1Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECD30u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECD40u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECD54u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECD64u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECD74u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECD8Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECDB0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECDC0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECDD4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECDDCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECDE8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECDF0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECE00u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECE18u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECE2Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECE40u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECEA4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECF00u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECF5Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECFB8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED014u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED070u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED0D4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED11Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED178u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED1D4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED220u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED26Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED2B8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED304u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED34Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED3A8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED404u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED450u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED4ACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED508u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED564u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED5C8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED614u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED670u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED6CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED714u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED764u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED7B0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED80Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED854u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED860u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED878u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED8B0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED8FCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED924u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED92Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED934u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED93Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED944u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED94Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED970u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDA04u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDA1Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDA2Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDA44u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDA88u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDAB4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDAD0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDAE8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDAF4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDAFCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDB10u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDB18u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDB78u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDB88u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDBA4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDBC8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDBECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDBF4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC08u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC1Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC28u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC38u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC40u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC64u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC84u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC88u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC90u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDCA4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDCB0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDCC0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDCD0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDCE0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDCECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDCFCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD0Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD1Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD28u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD38u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD48u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD58u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD64u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD74u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD7Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDDB0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDDC0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDDC8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDDD8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDDF4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDDFCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDE04u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDE2Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDE58u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDE74u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDE84u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDE8Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDE94u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDE9Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDEB4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDED4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDEE8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDEFCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDF10u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDF34u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDF60u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDF74u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDF98u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDFA0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDFA4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDFACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDFBCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDFCCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDFD4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDFD8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDFE4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE05Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE0ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE134u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE140u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE154u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE194u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE1A4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE1ACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE1C0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE1DCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE1ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE1F4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE220u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE234u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE23Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE24Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE290u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE2A8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE2B4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE2BCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE2CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE2E0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE350u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE35Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE37Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE3C4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE404u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE474u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE4D0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE520u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE52Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE540u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE54Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE558u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE56Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE588u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE598u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE5A0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE5CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE5DCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE5E8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE5F0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE608u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE640u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE698u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE6BCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE6C8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE6E0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE700u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE710u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE784u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE7DCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE7F0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE7F4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE800u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE814u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE820u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE834u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE850u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE868u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE870u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE898u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE8ACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE8B4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE8BCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE8CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE908u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE950u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE968u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE978u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE97Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE984u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE98Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE994u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE9A0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE9B8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE9C0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE9C8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE9D4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE9DCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE9E4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE9ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE9FCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA04u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA14u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA20u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA28u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA38u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA44u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA54u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA64u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA74u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA84u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA90u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA9Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEAACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEAB4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEAC4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEADCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEAFCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEB80u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEB98u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEBA8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEBB0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEBCCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEC0Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEC10u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEC98u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EECA0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EECB8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EECC0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EECD4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EED14u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EED2Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EED3Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EED50u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EED68u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EED70u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EED84u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EED8Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EED98u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEDB0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEDB8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEDC8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEDE0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEDECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEDF4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEDFCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEE04u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEE08u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEE10u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEE18u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEE28u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEE30u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEE38u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEE3Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEE44u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEE54u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEEB0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEEC8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEEF4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEEFCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEF08u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEF20u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEF34u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEF48u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEF78u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEFFCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF028u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF038u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF050u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF058u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF078u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF088u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF094u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF09Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF0A8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF0B0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF0B4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF0C0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF0CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF0D4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF0F8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF108u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF128u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF160u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF16Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF17Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF1C0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF1D0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF1ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF230u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF268u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF270u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF278u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF280u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF298u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF29Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF2A4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF2ACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF2B8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF2C4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF2F8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF300u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF314u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF31Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF334u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF350u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF364u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF36Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF37Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF384u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF39Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF3B0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF3B8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF3C4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF3CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF3DCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF3E4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF3ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF400u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF484u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF494u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF514u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF528u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF52Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF544u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF550u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF558u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF560u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF594u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF5B8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF5D4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF5F8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF61Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF66Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF674u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF67Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF684u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF694u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF698u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF6A8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF6B4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF6C4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF6D8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF6ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF704u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF708u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF734u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF748u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF768u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF780u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF798u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF7ACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF7B4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF7C4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF7D0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF7D8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF7F8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF808u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF828u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF834u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF844u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF848u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF860u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF86Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF888u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF89Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF8ACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF8CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF8DCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF8F8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF900u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF910u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF918u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF91Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF930u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF954u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF96Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF984u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF9A0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF9C0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF9CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF9ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF9FCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA04u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA08u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA20u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA38u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA44u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA4Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA50u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA6Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA7Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA8Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA9Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFAACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFABCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFACCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFADCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFAE4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFAF4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFB08u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFB0Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFB30u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFB40u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFB54u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFB58u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFB74u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFBB0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFBB8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFBC0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFBD4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFBF4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFC04u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFC10u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFC18u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFC20u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFC28u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFC30u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFC38u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFC40u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFC48u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFC50u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFC5Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFC6Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFC88u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFCA4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFCA8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFCB4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFCBCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFCDCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFD14u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFD30u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFD38u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFD44u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFD54u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFD70u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFD8Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFD90u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFD98u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFDA4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFDF0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFE1Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFE50u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFE60u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFE68u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFE6Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFE84u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFED0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFF1Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFF38u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFF40u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFF50u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFF5Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFF64u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFF68u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFF74u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFF80u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFF88u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFF98u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFFA8u, &recomp_unit_0122, "recomp_unit_0122");
}
} // namespace psprecomp
