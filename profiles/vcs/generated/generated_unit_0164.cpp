#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0164[4088] = {
    1, 0, 0, 2, 0, 0, 3, 0, 4, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 9, 0, 0, 10, 0, 0, 0, 11,
    0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 19, 0, 0, 20, 0, 0, 0, 21, 0, 22, 0, 23, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33,
    0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0,
    48, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 52, 0, 53, 0, 0, 54, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0,
    0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0,
    0, 79, 0, 80, 0, 81, 0, 0, 82, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0,
    0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0,
    0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0,
    0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 104, 0, 105, 0, 106, 0, 0, 0,
    0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0,
    113, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 118, 0, 0, 0, 119, 0, 0, 120, 121, 0, 0, 0,
    0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 130, 0, 131, 0, 132, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0,
    0, 135, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 141, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 148, 0, 0, 0, 149, 0, 0,
    150, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157,
    0, 158, 159, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0,
    0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 170, 171, 0, 0, 172, 0, 0, 173, 0, 174, 0, 175, 0, 0, 0, 0, 176, 0, 177,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 183, 0, 184, 0,
    185, 0, 186, 0, 187, 0, 188, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 193, 0, 0, 0, 194, 0,
    195, 0, 0, 0, 0, 0, 196, 197, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0,
    202, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 205, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0,
    0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0,
    0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0,
    0, 233, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 240, 0, 241,
    0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 247, 0,
    0, 248, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255,
    256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 259, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 273,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 0, 281, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300,
    0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 307, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0,
    0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 320,
    0, 0, 0, 321, 0, 0, 0, 322, 0, 323, 324, 0, 0, 0, 0, 0, 325, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 331, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0,
    0, 341, 0, 342, 343, 0, 0, 344, 0, 345, 0, 346, 0, 347, 348, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 361, 0, 0, 0, 362, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0,
    379, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 386, 387, 0, 0, 0, 0, 0, 388,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 399, 0, 400, 0, 401, 0, 0, 402, 0, 0, 403,
    0, 0, 404, 0, 405, 0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 412, 0,
    0, 0, 0, 413, 0, 0, 414, 0, 0, 415, 0, 0, 416, 0, 417, 0, 0, 0, 418, 0, 0, 419, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0,
    422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 425, 0, 0, 426, 0, 0, 427, 0, 428,
    0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0,
    0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0,
    0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0,
    0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0,
    448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0,
    0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0,
    474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 477, 0, 478, 0,
    0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 483, 484, 0, 0, 0, 485, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 488,
    0, 0, 0, 0, 489, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0,
    0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0, 497, 0, 0, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0,
    0, 500, 501, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 504, 505, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0,
    0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 513, 0, 0, 0, 0, 0, 514, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 516, 0, 517, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 520, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 523, 0,
    524, 0, 525, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 530,
    531, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0, 0, 535, 0, 536, 0, 537, 0, 0, 0, 0, 0, 538, 539, 0,
    0, 0, 540, 0, 0, 0, 0, 0, 541, 542, 0, 0, 0, 543, 0, 0, 0, 0, 0, 544, 545, 0, 546, 0, 547, 0, 0, 0, 0, 0, 0, 0,
    548, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 552, 0, 0, 553, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    555, 0, 556, 0, 0, 0, 0, 0, 557, 0, 558, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 561, 0, 0, 0, 0, 0, 0,
    0, 562, 0, 563, 0, 0, 564, 0, 565, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 568, 0, 569, 0, 570, 0, 0, 571, 0, 572,
    0, 573, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 576, 0, 577, 0, 578, 0, 579, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 582,
    0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 588, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 591, 0, 592, 0, 593, 0, 594, 0, 0, 0, 0, 0, 0,
    0, 0, 595, 0, 0, 0, 0, 596, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 599,
};
void recomp_unit_0164_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A94000u;
        entry_id = (entry_delta < 16352u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0164[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A94000;
    case 2u: goto L_08A9400C;
    case 3u: goto L_08A94018;
    case 4u: goto L_08A94020;
    case 5u: goto L_08A94024;
    case 6u: goto L_08A9402C;
    case 7u: goto L_08A9404C;
    case 8u: goto L_08A94058;
    case 9u: goto L_08A94060;
    case 10u: goto L_08A9406C;
    case 11u: goto L_08A9407C;
    case 12u: goto L_08A94084;
    case 13u: goto L_08A940A4;
    case 14u: goto L_08A940B0;
    case 15u: goto L_08A940B8;
    case 16u: goto L_08A940C8;
    case 17u: goto L_08A940D4;
    case 18u: goto L_08A94100;
    case 19u: goto L_08A9410C;
    case 20u: goto L_08A94118;
    case 21u: goto L_08A94128;
    case 22u: goto L_08A94130;
    case 23u: goto L_08A94138;
    case 24u: goto L_08A94144;
    case 25u: goto L_08A94158;
    case 26u: goto L_08A94168;
    case 27u: goto L_08A94178;
    case 28u: goto L_08A94190;
    case 29u: goto L_08A941BC;
    case 30u: goto L_08A941C8;
    case 31u: goto L_08A941D0;
    case 32u: goto L_08A941F4;
    case 33u: goto L_08A941FC;
    case 34u: goto L_08A94214;
    case 35u: goto L_08A94240;
    case 36u: goto L_08A94270;
    case 37u: goto L_08A94294;
    case 38u: goto L_08A942C4;
    case 39u: goto L_08A94308;
    case 40u: goto L_08A94348;
    case 41u: goto L_08A94388;
    case 42u: goto L_08A943CC;
    case 43u: goto L_08A94414;
    case 44u: goto L_08A94424;
    case 45u: goto L_08A9444C;
    case 46u: goto L_08A94454;
    case 47u: goto L_08A94474;
    case 48u: goto L_08A94480;
    case 49u: goto L_08A94494;
    case 50u: goto L_08A944A4;
    case 51u: goto L_08A944AC;
    case 52u: goto L_08A944B4;
    case 53u: goto L_08A944BC;
    case 54u: goto L_08A944C8;
    case 55u: goto L_08A944CC;
    case 56u: goto L_08A944D4;
    case 57u: goto L_08A9450C;
    case 58u: goto L_08A94520;
    case 59u: goto L_08A94538;
    case 60u: goto L_08A94540;
    case 61u: goto L_08A94554;
    case 62u: goto L_08A9455C;
    case 63u: goto L_08A9459C;
    case 64u: goto L_08A945B0;
    case 65u: goto L_08A945C8;
    case 66u: goto L_08A945D0;
    case 67u: goto L_08A94610;
    case 68u: goto L_08A9462C;
    case 69u: goto L_08A94644;
    case 70u: goto L_08A94678;
    case 71u: goto L_08A946AC;
    case 72u: goto L_08A946F4;
    case 73u: goto L_08A94704;
    case 74u: goto L_08A9472C;
    case 75u: goto L_08A94734;
    case 76u: goto L_08A94754;
    case 77u: goto L_08A94760;
    case 78u: goto L_08A94774;
    case 79u: goto L_08A94784;
    case 80u: goto L_08A9478C;
    case 81u: goto L_08A94794;
    case 82u: goto L_08A947A0;
    case 83u: goto L_08A947A4;
    case 84u: goto L_08A947AC;
    case 85u: goto L_08A947E4;
    case 86u: goto L_08A947F8;
    case 87u: goto L_08A94810;
    case 88u: goto L_08A94818;
    case 89u: goto L_08A9482C;
    case 90u: goto L_08A94834;
    case 91u: goto L_08A94874;
    case 92u: goto L_08A94888;
    case 93u: goto L_08A948A0;
    case 94u: goto L_08A948A8;
    case 95u: goto L_08A948E8;
    case 96u: goto L_08A94904;
    case 97u: goto L_08A9491C;
    case 98u: goto L_08A94950;
    case 99u: goto L_08A94984;
    case 100u: goto L_08A949A0;
    case 101u: goto L_08A949BC;
    case 102u: goto L_08A949CC;
    case 103u: goto L_08A949DC;
    case 104u: goto L_08A949E0;
    case 105u: goto L_08A949E8;
    case 106u: goto L_08A949F0;
    case 107u: goto L_08A94A04;
    case 108u: goto L_08A94A38;
    case 109u: goto L_08A94A50;
    case 110u: goto L_08A94A60;
    case 111u: goto L_08A94A6C;
    case 112u: goto L_08A94A78;
    case 113u: goto L_08A94A80;
    case 114u: goto L_08A94A8C;
    case 115u: goto L_08A94A94;
    case 116u: goto L_08A94AB8;
    case 117u: goto L_08A94AC8;
    case 118u: goto L_08A94AD0;
    case 119u: goto L_08A94AE0;
    case 120u: goto L_08A94AEC;
    case 121u: goto L_08A94AF0;
    case 122u: goto L_08A94B0C;
    case 123u: goto L_08A94B2C;
    case 124u: goto L_08A94B34;
    case 125u: goto L_08A94B3C;
    case 126u: goto L_08A94B54;
    case 127u: goto L_08A94B98;
    case 128u: goto L_08A94BA4;
    case 129u: goto L_08A94BB8;
    case 130u: goto L_08A94BC4;
    case 131u: goto L_08A94BCC;
    case 132u: goto L_08A94BD4;
    case 133u: goto L_08A94BE8;
    case 134u: goto L_08A94BF0;
    case 135u: goto L_08A94C04;
    case 136u: goto L_08A94C08;
    case 137u: goto L_08A94C18;
    case 138u: goto L_08A94C24;
    case 139u: goto L_08A94C38;
    case 140u: goto L_08A94C40;
    case 141u: goto L_08A94C50;
    case 142u: goto L_08A94C54;
    case 143u: goto L_08A94C64;
    case 144u: goto L_08A94C80;
    case 145u: goto L_08A94CB0;
    case 146u: goto L_08A94CD0;
    case 147u: goto L_08A94CD8;
    case 148u: goto L_08A94CE4;
    case 149u: goto L_08A94CF4;
    case 150u: goto L_08A94D00;
    case 151u: goto L_08A94D08;
    case 152u: goto L_08A94D14;
    case 153u: goto L_08A94D1C;
    case 154u: goto L_08A94D30;
    case 155u: goto L_08A94D40;
    case 156u: goto L_08A94D5C;
    case 157u: goto L_08A94D7C;
    case 158u: goto L_08A94D84;
    case 159u: goto L_08A94D88;
    case 160u: goto L_08A94D98;
    case 161u: goto L_08A94DA0;
    case 162u: goto L_08A94DB4;
    case 163u: goto L_08A94DD4;
    case 164u: goto L_08A94DE0;
    case 165u: goto L_08A94DEC;
    case 166u: goto L_08A94DF8;
    case 167u: goto L_08A94E04;
    case 168u: goto L_08A94E20;
    case 169u: goto L_08A94E2C;
    case 170u: goto L_08A94E34;
    case 171u: goto L_08A94E38;
    case 172u: goto L_08A94E44;
    case 173u: goto L_08A94E50;
    case 174u: goto L_08A94E58;
    case 175u: goto L_08A94E60;
    case 176u: goto L_08A94E74;
    case 177u: goto L_08A94E7C;
    case 178u: goto L_08A94EA0;
    case 179u: goto L_08A94EB4;
    case 180u: goto L_08A94ED0;
    case 181u: goto L_08A94EDC;
    case 182u: goto L_08A94EE8;
    case 183u: goto L_08A94EF0;
    case 184u: goto L_08A94EF8;
    case 185u: goto L_08A94F00;
    case 186u: goto L_08A94F08;
    case 187u: goto L_08A94F10;
    case 188u: goto L_08A94F18;
    case 189u: goto L_08A94F1C;
    case 190u: goto L_08A94F30;
    case 191u: goto L_08A94F50;
    case 192u: goto L_08A94F60;
    case 193u: goto L_08A94F68;
    case 194u: goto L_08A94F78;
    case 195u: goto L_08A94F80;
    case 196u: goto L_08A94F98;
    case 197u: goto L_08A94F9C;
    case 198u: goto L_08A94FB0;
    case 199u: goto L_08A94FC0;
    case 200u: goto L_08A94FE8;
    case 201u: goto L_08A94FF8;
    case 202u: goto L_08A95000;
    case 203u: goto L_08A95010;
    case 204u: goto L_08A95018;
    case 205u: goto L_08A95030;
    case 206u: goto L_08A95034;
    case 207u: goto L_08A95048;
    case 208u: goto L_08A9505C;
    case 209u: goto L_08A95070;
    case 210u: goto L_08A9508C;
    case 211u: goto L_08A95098;
    case 212u: goto L_08A950C0;
    case 213u: goto L_08A950D8;
    case 214u: goto L_08A950F0;
    case 215u: goto L_08A95118;
    case 216u: goto L_08A9512C;
    case 217u: goto L_08A95144;
    case 218u: goto L_08A9516C;
    case 219u: goto L_08A95184;
    case 220u: goto L_08A9519C;
    case 221u: goto L_08A951C4;
    case 222u: goto L_08A951DC;
    case 223u: goto L_08A951F4;
    case 224u: goto L_08A95210;
    case 225u: goto L_08A95220;
    case 226u: goto L_08A95248;
    case 227u: goto L_08A95268;
    case 228u: goto L_08A95280;
    case 229u: goto L_08A952A8;
    case 230u: goto L_08A952BC;
    case 231u: goto L_08A952D4;
    case 232u: goto L_08A952F8;
    case 233u: goto L_08A95304;
    case 234u: goto L_08A95310;
    case 235u: goto L_08A95318;
    case 236u: goto L_08A95338;
    case 237u: goto L_08A95348;
    case 238u: goto L_08A95360;
    case 239u: goto L_08A95368;
    case 240u: goto L_08A95374;
    case 241u: goto L_08A9537C;
    case 242u: goto L_08A95394;
    case 243u: goto L_08A953A0;
    case 244u: goto L_08A953B0;
    case 245u: goto L_08A953C8;
    case 246u: goto L_08A953F4;
    case 247u: goto L_08A953F8;
    case 248u: goto L_08A95404;
    case 249u: goto L_08A9540C;
    case 250u: goto L_08A95414;
    case 251u: goto L_08A95430;
    case 252u: goto L_08A95438;
    case 253u: goto L_08A95448;
    case 254u: goto L_08A95458;
    case 255u: goto L_08A9547C;
    case 256u: goto L_08A95480;
    case 257u: goto L_08A954A0;
    case 258u: goto L_08A954B8;
    case 259u: goto L_08A954C4;
    case 260u: goto L_08A954C8;
    case 261u: goto L_08A954E4;
    case 262u: goto L_08A954F4;
    case 263u: goto L_08A95500;
    case 264u: goto L_08A95544;
    case 265u: goto L_08A9559C;
    case 266u: goto L_08A95618;
    case 267u: goto L_08A95630;
    case 268u: goto L_08A95638;
    case 269u: goto L_08A95698;
    case 270u: goto L_08A956C4;
    case 271u: goto L_08A956D0;
    case 272u: goto L_08A956F4;
    case 273u: goto L_08A956FC;
    case 274u: goto L_08A957C8;
    case 275u: goto L_08A957D4;
    case 276u: goto L_08A95984;
    case 277u: goto L_08A959C4;
    case 278u: goto L_08A959D0;
    case 279u: goto L_08A959DC;
    case 280u: goto L_08A959E8;
    case 281u: goto L_08A959F8;
    case 282u: goto L_08A95A9C;
    case 283u: goto L_08A95AA8;
    case 284u: goto L_08A95AB4;
    case 285u: goto L_08A95AC0;
    case 286u: goto L_08A95ACC;
    case 287u: goto L_08A95BB0;
    case 288u: goto L_08A95BC0;
    case 289u: goto L_08A95BCC;
    case 290u: goto L_08A95C44;
    case 291u: goto L_08A95C4C;
    case 292u: goto L_08A95C70;
    case 293u: goto L_08A95D50;
    case 294u: goto L_08A95D94;
    case 295u: goto L_08A95DCC;
    case 296u: goto L_08A95E80;
    case 297u: goto L_08A95EF4;
    case 298u: goto L_08A95F4C;
    case 299u: goto L_08A95FC0;
    case 300u: goto L_08A95FFC;
    case 301u: goto L_08A96020;
    case 302u: goto L_08A96044;
    case 303u: goto L_08A9605C;
    case 304u: goto L_08A96074;
    case 305u: goto L_08A9609C;
    case 306u: goto L_08A960A4;
    case 307u: goto L_08A960AC;
    case 308u: goto L_08A960B8;
    case 309u: goto L_08A960C8;
    case 310u: goto L_08A960D8;
    case 311u: goto L_08A960E8;
    case 312u: goto L_08A960F8;
    case 313u: goto L_08A96108;
    case 314u: goto L_08A9611C;
    case 315u: goto L_08A9612C;
    case 316u: goto L_08A9613C;
    case 317u: goto L_08A9614C;
    case 318u: goto L_08A9615C;
    case 319u: goto L_08A9616C;
    case 320u: goto L_08A9617C;
    case 321u: goto L_08A9618C;
    case 322u: goto L_08A9619C;
    case 323u: goto L_08A961A4;
    case 324u: goto L_08A961A8;
    case 325u: goto L_08A961C0;
    case 326u: goto L_08A961C4;
    case 327u: goto L_08A961D8;
    case 328u: goto L_08A961EC;
    case 329u: goto L_08A96218;
    case 330u: goto L_08A96220;
    case 331u: goto L_08A9622C;
    case 332u: goto L_08A9623C;
    case 333u: goto L_08A96244;
    case 334u: goto L_08A96284;
    case 335u: goto L_08A9628C;
    case 336u: goto L_08A962C8;
    case 337u: goto L_08A9635C;
    case 338u: goto L_08A96364;
    case 339u: goto L_08A96448;
    case 340u: goto L_08A96478;
    case 341u: goto L_08A96484;
    case 342u: goto L_08A9648C;
    case 343u: goto L_08A96490;
    case 344u: goto L_08A9649C;
    case 345u: goto L_08A964A4;
    case 346u: goto L_08A964AC;
    case 347u: goto L_08A964B4;
    case 348u: goto L_08A964B8;
    case 349u: goto L_08A964D4;
    case 350u: goto L_08A964DC;
    case 351u: goto L_08A964E4;
    case 352u: goto L_08A96524;
    case 353u: goto L_08A96540;
    case 354u: goto L_08A96548;
    case 355u: goto L_08A965B0;
    case 356u: goto L_08A965BC;
    case 357u: goto L_08A96610;
    case 358u: goto L_08A96658;
    case 359u: goto L_08A966A8;
    case 360u: goto L_08A966B0;
    case 361u: goto L_08A966B8;
    case 362u: goto L_08A966C8;
    case 363u: goto L_08A966D0;
    case 364u: goto L_08A966E0;
    case 365u: goto L_08A96700;
    case 366u: goto L_08A96728;
    case 367u: goto L_08A967D4;
    case 368u: goto L_08A967DC;
    case 369u: goto L_08A967EC;
    case 370u: goto L_08A96830;
    case 371u: goto L_08A96838;
    case 372u: goto L_08A96840;
    case 373u: goto L_08A96864;
    case 374u: goto L_08A96874;
    case 375u: goto L_08A968A8;
    case 376u: goto L_08A968D0;
    case 377u: goto L_08A968E0;
    case 378u: goto L_08A968F0;
    case 379u: goto L_08A96900;
    case 380u: goto L_08A96910;
    case 381u: goto L_08A96918;
    case 382u: goto L_08A9692C;
    case 383u: goto L_08A96938;
    case 384u: goto L_08A96948;
    case 385u: goto L_08A96958;
    case 386u: goto L_08A96960;
    case 387u: goto L_08A96964;
    case 388u: goto L_08A9697C;
    case 389u: goto L_08A969C8;
    case 390u: goto L_08A969D4;
    case 391u: goto L_08A969DC;
    case 392u: goto L_08A96A28;
    case 393u: goto L_08A96A64;
    case 394u: goto L_08A96AA0;
    case 395u: goto L_08A96AA8;
    case 396u: goto L_08A96AB4;
    case 397u: goto L_08A96AC0;
    case 398u: goto L_08A96ACC;
    case 399u: goto L_08A96AD4;
    case 400u: goto L_08A96ADC;
    case 401u: goto L_08A96AE4;
    case 402u: goto L_08A96AF0;
    case 403u: goto L_08A96AFC;
    case 404u: goto L_08A96B08;
    case 405u: goto L_08A96B10;
    case 406u: goto L_08A96B1C;
    case 407u: goto L_08A96B28;
    case 408u: goto L_08A96B34;
    case 409u: goto L_08A96B3C;
    case 410u: goto L_08A96B48;
    case 411u: goto L_08A96B70;
    case 412u: goto L_08A96B78;
    case 413u: goto L_08A96B8C;
    case 414u: goto L_08A96B98;
    case 415u: goto L_08A96BA4;
    case 416u: goto L_08A96BB0;
    case 417u: goto L_08A96BB8;
    case 418u: goto L_08A96BC8;
    case 419u: goto L_08A96BD4;
    case 420u: goto L_08A96BE0;
    case 421u: goto L_08A96BF0;
    case 422u: goto L_08A96C00;
    case 423u: goto L_08A96C10;
    case 424u: goto L_08A96C58;
    case 425u: goto L_08A96C5C;
    case 426u: goto L_08A96C68;
    case 427u: goto L_08A96C74;
    case 428u: goto L_08A96C7C;
    case 429u: goto L_08A96C98;
    case 430u: goto L_08A96CF8;
    case 431u: goto L_08A96D10;
    case 432u: goto L_08A96D28;
    case 433u: goto L_08A96D44;
    case 434u: goto L_08A96D54;
    case 435u: goto L_08A96D74;
    case 436u: goto L_08A96D90;
    case 437u: goto L_08A96DDC;
    case 438u: goto L_08A96DF0;
    case 439u: goto L_08A96E04;
    case 440u: goto L_08A96E18;
    case 441u: goto L_08A96E5C;
    case 442u: goto L_08A96E88;
    case 443u: goto L_08A96EB8;
    case 444u: goto L_08A96EC0;
    case 445u: goto L_08A96ED4;
    case 446u: goto L_08A96F08;
    case 447u: goto L_08A96F68;
    case 448u: goto L_08A96F80;
    case 449u: goto L_08A96F98;
    case 450u: goto L_08A96FB4;
    case 451u: goto L_08A96FD4;
    case 452u: goto L_08A96FF0;
    case 453u: goto L_08A9703C;
    case 454u: goto L_08A97050;
    case 455u: goto L_08A97064;
    case 456u: goto L_08A97078;
    case 457u: goto L_08A970BC;
    case 458u: goto L_08A970E8;
    case 459u: goto L_08A97118;
    case 460u: goto L_08A97120;
    case 461u: goto L_08A97134;
    case 462u: goto L_08A97168;
    case 463u: goto L_08A97184;
    case 464u: goto L_08A97190;
    case 465u: goto L_08A9719C;
    case 466u: goto L_08A971A8;
    case 467u: goto L_08A971C0;
    case 468u: goto L_08A971C8;
    case 469u: goto L_08A971DC;
    case 470u: goto L_08A971F0;
    case 471u: goto L_08A97250;
    case 472u: goto L_08A9725C;
    case 473u: goto L_08A97278;
    case 474u: goto L_08A97280;
    case 475u: goto L_08A972BC;
    case 476u: goto L_08A972E8;
    case 477u: goto L_08A972F0;
    case 478u: goto L_08A972F8;
    case 479u: goto L_08A97308;
    case 480u: goto L_08A97318;
    case 481u: goto L_08A97334;
    case 482u: goto L_08A973D0;
    case 483u: goto L_08A973D8;
    case 484u: goto L_08A973DC;
    case 485u: goto L_08A973EC;
    case 486u: goto L_08A97418;
    case 487u: goto L_08A974F0;
    case 488u: goto L_08A974FC;
    case 489u: goto L_08A97510;
    case 490u: goto L_08A97518;
    case 491u: goto L_08A975F4;
    case 492u: goto L_08A97604;
    case 493u: goto L_08A97618;
    case 494u: goto L_08A97638;
    case 495u: goto L_08A976BC;
    case 496u: goto L_08A976C4;
    case 497u: goto L_08A976CC;
    case 498u: goto L_08A976E4;
    case 499u: goto L_08A976F0;
    case 500u: goto L_08A97704;
    case 501u: goto L_08A97708;
    case 502u: goto L_08A97720;
    case 503u: goto L_08A97750;
    case 504u: goto L_08A97770;
    case 505u: goto L_08A97774;
    case 506u: goto L_08A9779C;
    case 507u: goto L_08A977BC;
    case 508u: goto L_08A977E4;
    case 509u: goto L_08A977F8;
    case 510u: goto L_08A9780C;
    case 511u: goto L_08A97820;
    case 512u: goto L_08A97834;
    case 513u: goto L_08A97838;
    case 514u: goto L_08A97850;
    case 515u: goto L_08A97858;
    case 516u: goto L_08A97898;
    case 517u: goto L_08A978A0;
    case 518u: goto L_08A978A8;
    case 519u: goto L_08A978C0;
    case 520u: goto L_08A978D4;
    case 521u: goto L_08A978E0;
    case 522u: goto L_08A9796C;
    case 523u: goto L_08A97978;
    case 524u: goto L_08A97980;
    case 525u: goto L_08A97988;
    case 526u: goto L_08A9798C;
    case 527u: goto L_08A979D4;
    case 528u: goto L_08A97A1C;
    case 529u: goto L_08A97A74;
    case 530u: goto L_08A97A7C;
    case 531u: goto L_08A97A80;
    case 532u: goto L_08A97A8C;
    case 533u: goto L_08A97AAC;
    case 534u: goto L_08A97AC0;
    case 535u: goto L_08A97ACC;
    case 536u: goto L_08A97AD4;
    case 537u: goto L_08A97ADC;
    case 538u: goto L_08A97AF4;
    case 539u: goto L_08A97AF8;
    case 540u: goto L_08A97B08;
    case 541u: goto L_08A97B20;
    case 542u: goto L_08A97B24;
    case 543u: goto L_08A97B34;
    case 544u: goto L_08A97B4C;
    case 545u: goto L_08A97B50;
    case 546u: goto L_08A97B58;
    case 547u: goto L_08A97B60;
    case 548u: goto L_08A97B80;
    case 549u: goto L_08A97B8C;
    case 550u: goto L_08A97BDC;
    case 551u: goto L_08A97C2C;
    case 552u: goto L_08A97C38;
    case 553u: goto L_08A97C44;
    case 554u: goto L_08A97C50;
    case 555u: goto L_08A97C80;
    case 556u: goto L_08A97C88;
    case 557u: goto L_08A97CA0;
    case 558u: goto L_08A97CA8;
    case 559u: goto L_08A97CB4;
    case 560u: goto L_08A97CDC;
    case 561u: goto L_08A97CE4;
    case 562u: goto L_08A97D04;
    case 563u: goto L_08A97D0C;
    case 564u: goto L_08A97D18;
    case 565u: goto L_08A97D20;
    case 566u: goto L_08A97D2C;
    case 567u: goto L_08A97D50;
    case 568u: goto L_08A97D58;
    case 569u: goto L_08A97D60;
    case 570u: goto L_08A97D68;
    case 571u: goto L_08A97D74;
    case 572u: goto L_08A97D7C;
    case 573u: goto L_08A97D84;
    case 574u: goto L_08A97D8C;
    case 575u: goto L_08A97DB8;
    case 576u: goto L_08A97E08;
    case 577u: goto L_08A97E10;
    case 578u: goto L_08A97E18;
    case 579u: goto L_08A97E20;
    case 580u: goto L_08A97E28;
    case 581u: goto L_08A97E58;
    case 582u: goto L_08A97E7C;
    case 583u: goto L_08A97EA0;
    case 584u: goto L_08A97EB0;
    case 585u: goto L_08A97EC0;
    case 586u: goto L_08A97ECC;
    case 587u: goto L_08A97EE0;
    case 588u: goto L_08A97F08;
    case 589u: goto L_08A97F14;
    case 590u: goto L_08A97F44;
    case 591u: goto L_08A97F4C;
    case 592u: goto L_08A97F54;
    case 593u: goto L_08A97F5C;
    case 594u: goto L_08A97F64;
    case 595u: goto L_08A97F88;
    case 596u: goto L_08A97F9C;
    case 597u: goto L_08A97FA4;
    case 598u: goto L_08A97FC8;
    case 599u: goto L_08A97FDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A94000:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g7 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A94020;
      }
      goto L_08A9400C;
    }
L_08A9400C:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 641u, 0x08A93FF4u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A94018;
    }
L_08A94018:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24464));
      if (branch_taken) {
          goto L_08A94024;
      }
      goto L_08A94020;
    }
L_08A94020:
    hot_regs.g2 = (hot_regs.g6 + static_cast<std::uint32_t>(8));
    goto L_08A94024;
L_08A94024:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9402C:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g7 = (hot_regs.g5 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(hot_regs.g6) < 4 ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    hot_regs.g4 = (g7 | 0u);
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A94060;
      }
      goto L_08A9404C;
    }
}
L_08A9404C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (static_cast<std::int32_t>(g6) < 3 ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A940B8;
      }
      goto L_08A94058;
    }
}
L_08A94058:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A94084;
      }
      goto L_08A94060;
    }
L_08A94060:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (static_cast<std::int32_t>(g6) < 5 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A940B8;
      }
      goto L_08A9406C;
    }
}
L_08A9406C:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x08A9407Cu);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 640u, 0x08A93FC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9407Cu) goto L_08A9407C;
    return;
L_08A9407C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A940C8;
      }
      goto L_08A94084;
    }
L_08A94084:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    f14 = std::bit_cast<float>(hot_regs.g6);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    ctx.set_fpu_condition((!(std::isnan(f14) || std::isnan(f12)) && f14 == f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A940B8;
      }
      goto L_08A940A4;
    }
}
L_08A940A4:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x08A940B0u);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 629u, 0x08A93F1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A940B0u) goto L_08A940B0;
    return;
L_08A940B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A940C8;
      }
      goto L_08A940B8;
    }
L_08A940B8:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x08A940C8u);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 619u, 0x08A93EA0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A940C8u) goto L_08A940C8;
    return;
L_08A940C8:
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
L_08A940D4:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    g17 = (hot_regs.g5 | 0u);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (hot_regs.g6 | 0u);
    hot_regs.g4 = (g17 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08A94100u);
    hot_regs.g5 = (g16 | 0u);
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    goto L_08A9402C;
}
L_08A94100:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24464));
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A94130;
      }
      goto L_08A9410C;
    }
L_08A9410C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A94138;
      }
      goto L_08A94118;
    }
L_08A94118:
    hot_regs.g5 = (2232u << 16u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A94128u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(9448));
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 743u, 0x089E77C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94128u) goto L_08A94128;
    return;
L_08A94128:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94168;
      }
      goto L_08A94130;
    }
L_08A94130:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94178;
      }
      goto L_08A94138;
    }
L_08A94138:
    hot_regs.g5 = (0u | 3u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A94168;
      }
      goto L_08A94144;
    }
L_08A94144:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f12)) && f12 == f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A94168;
      }
      goto L_08A94158;
    }
}
L_08A94158:
    hot_regs.g5 = (2232u << 16u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A94168u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(9468));
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 743u, 0x089E77C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94168u) goto L_08A94168;
    return;
L_08A94168:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A94178u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 599u, 0x08A93D44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94178u) goto L_08A94178;
    return;
L_08A94178:
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
L_08A94190:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x08A941BCu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 629u, 0x08A93F1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A941BCu) goto L_08A941BC;
    return;
L_08A941BC:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24464));
    { const bool branch_taken = hot_regs.g2 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A941D0;
      }
      goto L_08A941C8;
    }
L_08A941C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A941FC;
      }
      goto L_08A941D0;
    }
L_08A941D0:
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[16]);
    hot_regs.g4 = (0u | 3u);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x08A941F4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 599u, 0x08A93D44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A941F4u) goto L_08A941F4;
    return;
L_08A941F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A941FC;
      }
      goto L_08A941FC;
    }
L_08A941FC:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A94214:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    f12 = std::bit_cast<float>(0u);
    g7 = (2280u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    g5 = (2280u << 16u);
    hot_regs.g4 = (0u | 0u);
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    g7 = (g7 + static_cast<std::uint32_t>(-12432));
    g5 = (g5 + static_cast<std::uint32_t>(-12304));
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    goto L_08A94240;
}
}
L_08A94240:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g4 << 4u);
    g8 = (g8 + hot_regs.g7);
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g8 = (g4 << 2u);
    g8 = (g8 + hot_regs.g5);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g4 = (g4 & 65535u);
    g8 = (static_cast<std::int32_t>(g4) < 8 ? 1u : 0u);
    { const bool branch_taken = g8 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08A94240;
      }
      goto L_08A94270;
    }
}
L_08A94270:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f12));
    g7 = (2280u << 16u);
    g5 = (2280u << 16u);
    hot_regs.g4 = (0u | 0u);
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f12));
    g7 = (g7 + static_cast<std::uint32_t>(-12272));
    g5 = (g5 + static_cast<std::uint32_t>(-12144));
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    goto L_08A94294;
}
}
L_08A94294:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g4 << 4u);
    g8 = (g8 + hot_regs.g7);
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g8 = (g4 << 2u);
    g8 = (g8 + hot_regs.g5);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g4 = (g4 & 65535u);
    g8 = (static_cast<std::int32_t>(g4) < 8 ? 1u : 0u);
    { const bool branch_taken = g8 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08A94294;
      }
      goto L_08A942C4;
    }
}
L_08A942C4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store16(g28 + static_cast<std::uint32_t>(10096), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(g28 + static_cast<std::uint32_t>(10098), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(10100), static_cast<std::uint8_t>(0u));
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
    g4 = (g28 + static_cast<std::uint32_t>(10112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(10128), std::bit_cast<std::uint32_t>(f12));
    g4 = (0u | 1u);
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(9192), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(9193), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(9189), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(9190), static_cast<std::uint8_t>(0u));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08A94308:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g28 = ctx.gpr[28];
    g5 = (aot_mem.aot_load16(g28 + static_cast<std::uint32_t>(10096)));
    g5 = (g5 << 4u);
    g6 = (2280u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-12432));
    g5 = (g5 + g6);
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load16(g28 + static_cast<std::uint32_t>(10096)));
    g5 = (g4 << 2u);
    g6 = (2280u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-12304));
    g5 = (g5 + g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    jump_target = hot_regs.g31;
    aot_mem.aot_store16(g28 + static_cast<std::uint32_t>(10096), static_cast<std::uint16_t>(g4));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A94348:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g28 = ctx.gpr[28];
    g5 = (aot_mem.aot_load16(g28 + static_cast<std::uint32_t>(10098)));
    g5 = (g5 << 4u);
    g6 = (2280u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-12272));
    g5 = (g5 + g6);
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load16(g28 + static_cast<std::uint32_t>(10098)));
    g5 = (g4 << 2u);
    g6 = (2280u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-12144));
    g5 = (g5 + g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    jump_target = hot_regs.g31;
    aot_mem.aot_store16(g28 + static_cast<std::uint32_t>(10098), static_cast<std::uint16_t>(g4));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A94388:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(4))))));
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
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
L_08A943CC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), ctx.gpr[21]);
    ctx.gpr[21] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), ctx.gpr[30]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[30] = (hot_regs.g6 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(156), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), hot_regs.g31);
    hot_regs.g31 = (0x08A94414u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 382u, 0x08A8DF08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94414u) goto L_08A94414;
    return;
L_08A94414:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10100)));
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g7 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A94454;
      }
      goto L_08A94424;
    }
L_08A94424:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), hot_regs.g7);
    g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(10096)));
    g5 = (19316u << 16u);
    ctx.gpr[16] = (0u | 0u);
    g5 = (g5 | 9216u);
    ctx.gpr[20] = (0u | 8u);
    hot_regs.f20 = std::bit_cast<float>(g5);
    g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[23] = (0u | 8u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A94474;
      }
      goto L_08A9444C;
    }
}
L_08A9444C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94538;
      }
      goto L_08A94454;
    }
L_08A94454:
{
    std::uint32_t g28 = ctx.gpr[28];
    hot_regs.g4 = (g28 + static_cast<std::uint32_t>(10112));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(10128)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(10100), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94678;
      }
      goto L_08A94474;
    }
}
L_08A94474:
{
    std::uint32_t g22 = ctx.gpr[22];
    g22 = (2280u << 16u);
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    g22 = (g22 + static_cast<std::uint32_t>(-12432));
    ctx.gpr[22] = g22;
    goto L_08A94480;
}
L_08A94480:
    ctx.gpr[17] = (ctx.gpr[16] << 4u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[22]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g31 = (0x08A94494u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 382u, 0x08A8DF08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94494u) goto L_08A94494;
    return;
L_08A94494:
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9189)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_08A944BC;
      }
      goto L_08A944A4;
    }
L_08A944A4:
    { const bool branch_taken = ctx.gpr[19] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A944B4;
      }
      goto L_08A944AC;
    }
L_08A944AC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A944CC;
      }
      goto L_08A944B4;
    }
L_08A944B4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (0u | 1u);
      if (branch_taken) {
          goto L_08A944CC;
      }
      goto L_08A944BC;
    }
L_08A944BC:
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9189)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08A944CC;
      }
      goto L_08A944C8;
    }
L_08A944C8:
    hot_regs.g5 = (0u | 1u);
    goto L_08A944CC;
L_08A944CC:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94520;
      }
      goto L_08A944D4;
    }
L_08A944D4:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
          goto L_08A94520;
      }
      goto L_08A9450C;
    }
L_08A9450C:
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    goto L_08A94520;
L_08A94520:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(10096)));
    g16 = (g16 & 65535u);
    g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A94480;
      }
      goto L_08A94538;
    }
}
L_08A94538:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A945C8;
      }
      goto L_08A94540;
    }
L_08A94540:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(10096)));
    hot_regs.g4 = (0u | 0u);
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (2280u << 16u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A945C8;
      }
      goto L_08A94554;
    }
}
L_08A94554:
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-12432));
    goto L_08A9455C;
L_08A9455C:
    hot_regs.g7 = (hot_regs.g4 << 4u);
    hot_regs.g7 = (hot_regs.g7 + hot_regs.g5);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    hot_regs.g7 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g7);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A945B0;
      }
      goto L_08A9459C;
    }
L_08A9459C:
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g7 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g7);
    ctx.gpr[20] = (hot_regs.g4 | 0u);
    goto L_08A945B0;
L_08A945B0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g7 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(10096)));
    g4 = (g4 & 65535u);
    g7 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A9455C;
      }
      goto L_08A945C8;
    }
}
L_08A945C8:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A94644;
      }
      goto L_08A945D0;
    }
L_08A945D0:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (18804u << 16u);
    hot_regs.g6 = (hot_regs.g6 | 9214u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A94610u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 650u, 0x08976FBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94610u) goto L_08A94610;
    return;
L_08A94610:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (g2 << 3u);
    g4 = (g2 + g4);
    g4 = (g2 + g4);
    g4 = (g17 + g4);
    g17 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x08A9462Cu);
    hot_regs.g5 = (g17 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    goto L_08A94388;
}
L_08A9462C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94678;
      }
      goto L_08A94644;
    }
L_08A94644:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[20] << 4u);
    g5 = (2280u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-12432));
    g4 = (g4 + g5);
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (ctx.gpr[20] << 2u);
    g5 = (2280u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-12304));
    g4 = (g4 + g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A94678;
}
L_08A94678:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A946AC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    ctx.gpr[20] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), ctx.gpr[30]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[30] = (hot_regs.g6 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(156), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), hot_regs.g31);
    hot_regs.g31 = (0x08A946F4u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 382u, 0x08A8DF08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A946F4u) goto L_08A946F4;
    return;
L_08A946F4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10100)));
    ctx.gpr[22] = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g7 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A94734;
      }
      goto L_08A94704;
    }
L_08A94704:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), hot_regs.g7);
    g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(10098)));
    g5 = (19316u << 16u);
    ctx.gpr[16] = (0u | 0u);
    g5 = (g5 | 9216u);
    ctx.gpr[19] = (0u | 8u);
    hot_regs.f20 = std::bit_cast<float>(g5);
    g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[23] = (0u | 8u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A94754;
      }
      goto L_08A9472C;
    }
}
L_08A9472C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94810;
      }
      goto L_08A94734;
    }
L_08A94734:
{
    std::uint32_t g28 = ctx.gpr[28];
    hot_regs.g4 = (g28 + static_cast<std::uint32_t>(10112));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(10128)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(10100), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94950;
      }
      goto L_08A94754;
    }
}
L_08A94754:
{
    std::uint32_t g21 = ctx.gpr[21];
    g21 = (2280u << 16u);
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    g21 = (g21 + static_cast<std::uint32_t>(-12272));
    ctx.gpr[21] = g21;
    goto L_08A94760;
}
L_08A94760:
    ctx.gpr[17] = (ctx.gpr[16] << 4u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[21]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g31 = (0x08A94774u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 382u, 0x08A8DF08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94774u) goto L_08A94774;
    return;
L_08A94774:
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9190)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_08A94794;
      }
      goto L_08A94784;
    }
L_08A94784:
    { const bool branch_taken = ctx.gpr[22] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A947A4;
      }
      goto L_08A9478C;
    }
L_08A9478C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (0u | 1u);
      if (branch_taken) {
          goto L_08A947A4;
      }
      goto L_08A94794;
    }
L_08A94794:
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9190)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08A947A4;
      }
      goto L_08A947A0;
    }
L_08A947A0:
    hot_regs.g5 = (0u | 1u);
    goto L_08A947A4;
L_08A947A4:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A947F8;
      }
      goto L_08A947AC;
    }
L_08A947AC:
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
          goto L_08A947F8;
      }
      goto L_08A947E4;
    }
L_08A947E4:
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    goto L_08A947F8;
L_08A947F8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(10098)));
    g16 = (g16 & 65535u);
    g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A94760;
      }
      goto L_08A94810;
    }
}
L_08A94810:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A948A0;
      }
      goto L_08A94818;
    }
L_08A94818:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(10098)));
    hot_regs.g4 = (0u | 0u);
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (2280u << 16u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A948A0;
      }
      goto L_08A9482C;
    }
}
L_08A9482C:
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-12272));
    goto L_08A94834;
L_08A94834:
    hot_regs.g7 = (hot_regs.g4 << 4u);
    hot_regs.g7 = (hot_regs.g7 + hot_regs.g5);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    hot_regs.g7 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g7);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A94888;
      }
      goto L_08A94874;
    }
L_08A94874:
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g7 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g7);
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    goto L_08A94888;
L_08A94888:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g7 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(10098)));
    g4 = (g4 & 65535u);
    g7 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A94834;
      }
      goto L_08A948A0;
    }
}
L_08A948A0:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A9491C;
      }
      goto L_08A948A8;
    }
L_08A948A8:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (18804u << 16u);
    hot_regs.g6 = (hot_regs.g6 | 9214u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A948E8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 650u, 0x08976FBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A948E8u) goto L_08A948E8;
    return;
L_08A948E8:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (g2 << 3u);
    g4 = (g2 + g4);
    g4 = (g2 + g4);
    g4 = (g17 + g4);
    g17 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x08A94904u);
    hot_regs.g5 = (g17 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    goto L_08A94388;
}
L_08A94904:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94950;
      }
      goto L_08A9491C;
    }
L_08A9491C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[19] << 4u);
    g5 = (2280u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-12272));
    g4 = (g4 + g5);
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (ctx.gpr[19] << 2u);
    g5 = (2280u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-12144));
    g4 = (g4 + g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A94950;
}
L_08A94950:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A94984:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g28 + static_cast<std::uint32_t>(10112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(10128), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (0u | 1u);
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(10100), static_cast<std::uint8_t>(g4));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A949A0:
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
          goto L_08A949F0;
      }
      goto L_08A949BC;
    }
}
L_08A949BC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    if (g4 == hot_regs.g5) {
    g4 = (ctx.gpr[16] & 1u);
    hot_regs.g4 = g4;
        goto L_08A949E0;
    }
    goto L_08A949CC;
}
L_08A949CC:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g31 = (0x08A949DCu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A949DCu) goto L_08A949DC;
    return;
L_08A949DC:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    goto L_08A949E0;
L_08A949E0:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A949F0;
      }
      goto L_08A949E8;
    }
L_08A949E8:
    hot_regs.g31 = (0x08A949F0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A949F0u) goto L_08A949F0;
    return;
L_08A949F0:
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
L_08A94A04:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10140)));
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    hot_regs.g31 = (0x08A94A38u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10136)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94A38u) goto L_08A94A38;
    return;
L_08A94A38:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A94A50u);
    ctx.gpr[8] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 7u, 0x08B6804Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94A50u) goto L_08A94A50;
    return;
L_08A94A50:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08A94A60u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 319u, 0x08B655B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94A60u) goto L_08A94A60;
    return;
L_08A94A60:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 == ctx.gpr[17];
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A94A78;
      }
      goto L_08A94A6C;
    }
}
L_08A94A6C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08A94A78u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94A78u) goto L_08A94A78;
    return;
L_08A94A78:
    hot_regs.g31 = (0x08A94A80u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94A80u) goto L_08A94A80;
    return;
L_08A94A80:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94AD0;
      }
      goto L_08A94A8C;
    }
L_08A94A8C:
    hot_regs.g31 = (0x08A94A94u);
    hot_regs.g4 = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94A94u) goto L_08A94A94;
    return;
L_08A94A94:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(8), g4);
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(16), 0u);
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = g4 == hot_regs.g5;
    ctx.gpr[16] = (g2 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A94AC8;
      }
      goto L_08A94AB8;
    }
}
L_08A94AB8:
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (0x08A94AC8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94AC8u) goto L_08A94AC8;
    return;
L_08A94AC8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A94AF0;
      }
      goto L_08A94AD0;
    }
L_08A94AD0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A94AEC;
      }
      goto L_08A94AE0;
    }
}
L_08A94AE0:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (0x08A94AECu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94AECu) goto L_08A94AEC;
    return;
L_08A94AEC:
    hot_regs.g2 = (0u | 0u);
    goto L_08A94AF0;
L_08A94AF0:
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
L_08A94B0C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A94B2Cu);
    ctx.gpr[17] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94B2Cu) goto L_08A94B2C;
    return;
L_08A94B2C:
    hot_regs.g31 = (0x08A94B34u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94B34u) goto L_08A94B34;
    return;
L_08A94B34:
    hot_regs.g31 = (0x08A94B3Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94B3Cu) goto L_08A94B3C;
    return;
L_08A94B3C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
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
L_08A94B54:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g18);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g19);
    g18 = (0u | 0u);
    ctx.gpr[16] = (g4 | 0u);
    g19 = (ctx.lo);
    g4 = (g18 < g19 ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[17] = (hot_regs.g7 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A94C80;
      }
      goto L_08A94B98;
    }
}
L_08A94B98:
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-32768));
    ctx.gpr[21] = (0u | 32768u);
    ctx.gpr[22] = (0u | 32768u);
    goto L_08A94BA4;
L_08A94BA4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g6 = (hot_regs.g4 & ctx.gpr[20]);
    { const bool branch_taken = hot_regs.g6 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A94C24;
      }
      goto L_08A94BB8;
    }
L_08A94BB8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A94BD4;
      }
      goto L_08A94BC4;
    }
L_08A94BC4:
    hot_regs.g31 = (0x08A94BCCu);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94BCCu) goto L_08A94BCC;
    return;
L_08A94BCC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), hot_regs.g2);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08A94BD4;
L_08A94BD4:
    hot_regs.g5 = (hot_regs.g4 & ctx.gpr[20]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), hot_regs.g5);
    hot_regs.g31 = (0x08A94BE8u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94BE8u) goto L_08A94BE8;
    return;
L_08A94BE8:
    hot_regs.g31 = (0x08A94BF0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 262u, 0x08938FD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94BF0u) goto L_08A94BF0;
    return;
L_08A94BF0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    g4 = (hot_regs.g2 - g4);
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A94C08;
      }
      goto L_08A94C04;
    }
}
L_08A94C04:
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    goto L_08A94C08;
L_08A94C08:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08A94C18u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94C18u) goto L_08A94C18;
    return;
L_08A94C18:
{
    std::uint32_t g17 = ctx.gpr[17];
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(12), hot_regs.g2);
    hot_regs.g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    goto L_08A94C24;
}
L_08A94C24:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    g4 = (g4 - g5);
    g5 = (hot_regs.g6 - g4);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A94C40;
      }
      goto L_08A94C38;
    }
}
L_08A94C38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94C80;
      }
      goto L_08A94C40;
    }
L_08A94C40:
    ctx.gpr[23] = (ctx.gpr[19] - ctx.gpr[18]);
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A94C54;
      }
      goto L_08A94C50;
    }
L_08A94C50:
    ctx.gpr[23] = (hot_regs.g5 | 0u);
    goto L_08A94C54;
L_08A94C54:
    hot_regs.g5 = (hot_regs.g6 + hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + ctx.gpr[18]);
    hot_regs.g31 = (0x08A94C64u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94C64u) goto L_08A94C64;
    return;
L_08A94C64:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    g18 = (g18 + ctx.gpr[23]);
    g4 = (g4 + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), g4);
    g4 = (g18 < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08A94BA4;
      }
      goto L_08A94C80;
    }
}
L_08A94C80:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A94CB0:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g16);
    g16 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 != 0u;
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A94CD8;
      }
      goto L_08A94CD0;
    }
}
L_08A94CD0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A94D14;
      }
      goto L_08A94CD8;
    }
L_08A94CD8:
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g6 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A94CF4;
      }
      goto L_08A94CE4;
    }
L_08A94CE4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    g5 = (g5 + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A94D14;
      }
      goto L_08A94CF4;
    }
}
L_08A94CF4:
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g6 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A94D14;
      }
      goto L_08A94D00;
    }
L_08A94D00:
    hot_regs.g31 = (0x08A94D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 262u, 0x08938FD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94D08u) goto L_08A94D08;
    return;
L_08A94D08:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 - ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_08A94D14;
}
L_08A94D14:
    hot_regs.g31 = (0x08A94D1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 262u, 0x08938FD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94D1Cu) goto L_08A94D1C;
    return;
L_08A94D1C:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g6) < 0 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A94D40;
      }
      goto L_08A94D30;
    }
L_08A94D30:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g5 | 0u);
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(hot_regs.g6) ? 1u : 0u);
    if (g5 == 0u) {
    g4 = (hot_regs.g6 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_08A94D40;
    }
    goto L_08A94D40;
}
L_08A94D40:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g2 = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A94D5C:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    g16 = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(10136));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = g16 == 0u;
    hot_regs.g4 = (0u | 0u);
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A94D88;
      }
      goto L_08A94D7C;
    }
}
L_08A94D7C:
    hot_regs.g31 = (0x08A94D84u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94D84u) goto L_08A94D84;
    return;
L_08A94D84:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    goto L_08A94D88;
L_08A94D88:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A94D98u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 319u, 0x08B655B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94D98u) goto L_08A94D98;
    return;
L_08A94D98:
    hot_regs.g31 = (0x08A94DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 223u, 0x08941910u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94DA0u) goto L_08A94DA0;
    return;
L_08A94DA0:
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
L_08A94DB4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    hot_regs.g7 = (0u | 2u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g7;
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A94E38;
      }
      goto L_08A94DD4;
    }
}
L_08A94DD4:
    hot_regs.g5 = (ctx.gpr[17] & 1u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (hot_regs.g29 | 0u);
      if (branch_taken) {
          goto L_08A94DEC;
      }
      goto L_08A94DE0;
    }
L_08A94DE0:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (0u | 114u);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
    goto L_08A94DEC;
}
L_08A94DEC:
    hot_regs.g5 = (ctx.gpr[17] & 2u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94E04;
      }
      goto L_08A94DF8;
    }
L_08A94DF8:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (0u | 119u);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
    goto L_08A94E04;
}
L_08A94E04:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 98u);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g5));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A94E20u);
    g5 = (hot_regs.g29 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A94A04;
}
L_08A94E20:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A94E34;
      }
      goto L_08A94E2C;
    }
L_08A94E2C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A94EA0;
      }
      goto L_08A94E34;
    }
L_08A94E34:
    hot_regs.g4 = (0u | 1u);
    goto L_08A94E38;
L_08A94E38:
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A94E58;
      }
      goto L_08A94E44;
    }
L_08A94E44:
    hot_regs.g5 = (0u | 3u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A94E74;
      }
      goto L_08A94E50;
    }
L_08A94E50:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A94EA0;
      }
      goto L_08A94E58;
    }
L_08A94E58:
    hot_regs.g31 = (0x08A94E60u);
    hot_regs.g4 = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94E60u) goto L_08A94E60;
    return;
L_08A94E60:
{
    std::uint32_t g2 = hot_regs.g2;
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(0), hot_regs.g4);
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A94EA0;
      }
      goto L_08A94E74;
    }
}
L_08A94E74:
    hot_regs.g31 = (0x08A94E7Cu);
    hot_regs.g4 = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94E7Cu) goto L_08A94E7C;
    return;
L_08A94E7C:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 3u);
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(0), g4);
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(20), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(12), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(16), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A94EA0;
      }
      goto L_08A94EA0;
    }
}
L_08A94EA0:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A94EB4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A94F10;
      }
      goto L_08A94ED0;
    }
}
L_08A94ED0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A94EF8;
      }
      goto L_08A94EDC;
    }
L_08A94EDC:
    hot_regs.g5 = (0u | 3u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A94F18;
      }
      goto L_08A94EE8;
    }
L_08A94EE8:
    hot_regs.g31 = (0x08A94EF0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94EF0u) goto L_08A94EF0;
    return;
L_08A94EF0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A94F1C;
      }
      goto L_08A94EF8;
    }
L_08A94EF8:
    hot_regs.g31 = (0x08A94F00u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08A94B0C;
L_08A94F00:
    hot_regs.g31 = (0x08A94F08u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A94F08u) goto L_08A94F08;
    return;
L_08A94F08:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A94F1C;
      }
      goto L_08A94F10;
    }
L_08A94F10:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A94F1C;
      }
      goto L_08A94F18;
    }
L_08A94F18:
    hot_regs.g2 = (0u | 0u);
    goto L_08A94F1C;
L_08A94F1C:
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
L_08A94F30:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (g4 | 0u);
    hot_regs.g7 = (0u | 1u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    g4 = (hot_regs.g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A94F68;
      }
      goto L_08A94F50;
    }
}
L_08A94F50:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (0u | 3u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08A94F80;
      }
      goto L_08A94F60;
    }
L_08A94F60:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A94FB0;
      }
      goto L_08A94F68;
    }
L_08A94F68:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (0x08A94F78u);
    hot_regs.g6 = (0u | 1u);
    goto L_08A94CB0;
L_08A94F78:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A94FB0;
      }
      goto L_08A94F80;
    }
L_08A94F80:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    g5 = (g5 - g6);
    g6 = (g5 < hot_regs.g4 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A94F9C;
      }
      goto L_08A94F98;
    }
}
L_08A94F98:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    goto L_08A94F9C;
L_08A94F9C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(12)));
    hot_regs.g2 = (g16 | 0u);
    g4 = (hot_regs.g5 + g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(12), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A94FB0;
      }
      goto L_08A94FB0;
    }
}
L_08A94FB0:
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
L_08A94FC0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    hot_regs.g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (g4 | 0u);
    ctx.gpr[8] = (0u | 1u);
    g4 = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = hot_regs.g7 == ctx.gpr[8];
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A95000;
      }
      goto L_08A94FE8;
    }
}
L_08A94FE8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (0u | 3u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08A95018;
      }
      goto L_08A94FF8;
    }
L_08A94FF8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A9505C;
      }
      goto L_08A95000;
    }
L_08A95000:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (0u | 1u);
    hot_regs.g31 = (0x08A95010u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    goto L_08A94B54;
L_08A95010:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9505C;
      }
      goto L_08A95018;
    }
L_08A95018:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    g5 = (g5 - g6);
    g6 = (g5 < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A95034;
      }
      goto L_08A95030;
    }
}
L_08A95030:
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    goto L_08A95034;
L_08A95034:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g31 = (0x08A95048u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A95048u) goto L_08A95048;
    return;
L_08A95048:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    hot_regs.g2 = (ctx.gpr[16] | 0u);
    g4 = (g4 + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A9505C;
      }
      goto L_08A9505C;
    }
}
L_08A9505C:
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
L_08A95070:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10136), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10140), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A9508Cu);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-5096));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9508Cu) goto L_08A9508C;
    return;
L_08A9508C:
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
L_08A95098:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 3u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A950C0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A950C0u) goto L_08A950C0;
    return;
L_08A950C0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (hot_regs.g4 << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08A950D8u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 515u, 0x08A87590u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A950D8u) goto L_08A950D8;
    return;
L_08A950D8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08A950F0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A95118u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A95118u) goto L_08A95118;
    return;
L_08A95118:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (hot_regs.g4 << 16u);
    hot_regs.g31 = (0x08A9512Cu);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 514u, 0x08A87568u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9512Cu) goto L_08A9512C;
    return;
L_08A9512C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08A95144:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 3u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A9516Cu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9516Cu) goto L_08A9516C;
    return;
L_08A9516C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (hot_regs.g4 << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08A95184u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 516u, 0x08A875BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A95184u) goto L_08A95184;
    return;
L_08A95184:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08A9519C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A951C4u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A951C4u) goto L_08A951C4;
    return;
L_08A951C4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g4 = (hot_regs.g4 << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    hot_regs.g31 = (0x08A951DCu);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 517u, 0x08A875E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A951DCu) goto L_08A951DC;
    return;
L_08A951DC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08A951F4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g7 = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 3u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x08A95210u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A95210u) goto L_08A95210;
    return;
L_08A95210:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A95220:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 3u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A95248u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A95248u) goto L_08A95248;
    return;
L_08A95248:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (hot_regs.g4 << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g31 = (0x08A95268u);
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 530u, 0x08A87708u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A95268u) goto L_08A95268;
    return;
L_08A95268:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08A95280:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A952A8u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A952A8u) goto L_08A952A8;
    return;
L_08A952A8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (hot_regs.g4 << 16u);
    hot_regs.g31 = (0x08A952BCu);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 519u, 0x08A87624u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A952BCu) goto L_08A952BC;
    return;
L_08A952BC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08A952D4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08A952F8u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A952F8u) goto L_08A952F8;
    return;
L_08A952F8:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95310;
      }
      goto L_08A95304;
    }
L_08A95304:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g5 != 0u;
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A95318;
      }
      goto L_08A95310;
    }
}
L_08A95310:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A95338;
      }
      goto L_08A95318;
    }
L_08A95318:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), g4);
    g4 = (g16 + static_cast<std::uint32_t>(4));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0))))));
    g2 = (g2 & 255u);
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A95338;
}
L_08A95338:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A95348:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A95394;
      }
      goto L_08A95360;
    }
}
L_08A95360:
    hot_regs.g31 = (0x08A95368u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08A952D4;
L_08A95368:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A9537C;
      }
      goto L_08A95374;
    }
L_08A95374:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A953A0;
      }
      goto L_08A9537C;
    }
L_08A9537C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g4 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), g4);
    hot_regs.g4 = g4;
    goto L_08A95394;
}
L_08A95394:
{
    std::uint32_t g2 = hot_regs.g2;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    g2 = (g2 & 255u);
    hot_regs.g2 = g2;
    goto L_08A953A0;
}
L_08A953A0:
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
L_08A953B0:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), hot_regs.g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), hot_regs.g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), hot_regs.g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), 0u);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A953C8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 == 0u;
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A9547C;
      }
      goto L_08A953F4;
    }
}
L_08A953F4:
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A953F8;
L_08A953F8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A95438;
      }
      goto L_08A95404;
    }
L_08A95404:
    hot_regs.g31 = (0x08A9540Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    goto L_08A952D4;
L_08A9540C:
    { const bool branch_taken = hot_regs.g2 == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A95430;
      }
      goto L_08A95414;
    }
L_08A95414:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g4);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(4), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A95438;
      }
      goto L_08A95430;
    }
}
L_08A95430:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A95480;
      }
      goto L_08A95438;
    }
L_08A95438:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (hot_regs.g4 < ctx.gpr[16] ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[19] = (hot_regs.g4 | 0u);
        goto L_08A95448;
    }
    goto L_08A95448;
L_08A95448:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A95458u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A95458u) goto L_08A95458;
    return;
L_08A95458:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(4)));
    g4 = (g4 - g19);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g4);
    g4 = (hot_regs.g5 + g19);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(4), g4);
    g16 = (g16 - g19);
    { const bool branch_taken = g16 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + g19);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A953F8;
      }
      goto L_08A9547C;
    }
}
L_08A9547C:
    hot_regs.g2 = (0u | 0u);
    goto L_08A95480;
L_08A95480:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A954A0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[8] = (hot_regs.g7 < hot_regs.g6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A954F4;
      }
      goto L_08A954B8;
    }
}
L_08A954B8:
    ctx.gpr[8] = (hot_regs.g6 < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A954C8;
      }
      goto L_08A954C4;
    }
L_08A954C4:
    hot_regs.g6 = (0u | 32u);
    goto L_08A954C8;
L_08A954C8:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g6);
    ctx.gpr[8] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g6 = (hot_regs.g7 | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A954E4u);
    hot_regs.g7 = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A954E4u) goto L_08A954E4;
    return;
L_08A954E4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), hot_regs.g2);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), hot_regs.g5);
    hot_regs.g4 = g4;
    goto L_08A954F4;
}
L_08A954F4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A95500:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g28 = ctx.gpr[28];
    g5 = (2236u << 16u);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(29552)));
    hot_regs.f14 = std::bit_cast<float>(0u);
    g5 = (g5 + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(10144), g5);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(10148), g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(10160), g5);
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(10164), g4);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(10168), g5);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(10172), std::bit_cast<std::uint32_t>(hot_regs.f14));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A95544:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10160)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10164)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10168)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g6 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10172)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10172)));
        goto L_08A9559C;
    }
    goto L_08A9559C;
L_08A9559C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g28 = ctx.gpr[28];
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(10172), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(10148)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(10148)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7744)));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(10148)));
    f12 = f12 + f13;
    g6 = (15692u << 16u);
    g6 = (g6 | 52429u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7748)));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(10148)));
    f12 = f12 + hot_regs.f14;
    f13 = std::bit_cast<float>(g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7752)));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(10148)));
    f12 = f12 + hot_regs.f15;
    f12 = f12 + f13;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(10148)));
    g4 = (g4 + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(10148), g4);
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08A95618:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10148)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10144)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    if (hot_regs.g5 != hot_regs.g6) {
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g29 = g29;
        goto L_08A95638;
    }
    goto L_08A95630;
}
L_08A95630:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A956C4;
      }
      goto L_08A95638;
    }
L_08A95638:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10172)));
    hot_regs.f12 = std::sqrt(hot_regs.f12);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10172), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10160)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10164)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10168)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(4), hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10172)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(12), hot_regs.g6);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10148)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10144)));
    hot_regs.g5 = (hot_regs.g5 - hot_regs.g6);
    hot_regs.g6 = (0u | 20u);
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g5); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    hot_regs.g5 = (ctx.lo);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(8), hot_regs.g5);
    hot_regs.g4 = (hot_regs.g5 << 4u);
    hot_regs.g5 = (hot_regs.g5 << 2u);
    hot_regs.g31 = (0x08A95698u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 771u, 0x08A0735Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A95698u) goto L_08A95698;
    return;
L_08A95698:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(7744));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10144)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10148)));
    hot_regs.g31 = (0x08A956C4u);
    hot_regs.g6 = (hot_regs.g6 - hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A956C4u) goto L_08A956C4;
    return;
L_08A956C4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A956D0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g7 = (g5 & 255u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10148)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10144)));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 != g5;
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A956FC;
      }
      goto L_08A956F4;
    }
}
L_08A956F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A957C8;
      }
      goto L_08A956FC;
    }
L_08A956FC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g28 = ctx.gpr[28];
    g8 = (g4 | 0u);
    g4 = (g6 - g5);
    g5 = (g4 + static_cast<std::uint32_t>(3));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 2u));
    g5 = (g5 >> 30u);
    g4 = (g4 + g5);
    g4 = (g4 + static_cast<std::uint32_t>(3));
    g5 = (2236u << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 2u));
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 << 2u);
    g4 = (g6 + g4);
    g4 = (g4 + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (g7 | 0u);
    g10 = (g4 >> 8u);
    ctx.gpr[11] = (15u << 16u);
    g7 = (g5 + static_cast<std::uint32_t>(29552));
    g10 = (g10 & ctx.gpr[11]);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(20), g10);
    g7 = (4096u << 16u);
    g7 = (g10 | g7);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g7);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(29552)));
    g7 = (256u << 16u);
    g7 = (g7 + static_cast<std::uint32_t>(-1));
    g6 = (g6 + static_cast<std::uint32_t>(4));
    g7 = (g4 & g7);
    g10 = (2048u << 16u);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(29552), g6);
    g7 = (g7 | g10);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g7);
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(29552)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(10172)));
    g6 = (g6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(29552), g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(29552), g4);
    f12 = std::sqrt(f12);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(10172), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(10144)));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(10148)));
    g6 = (0u | 20u);
    g5 = (g5 - g4);
    { const std::int32_t dividend = static_cast<std::int32_t>(g5); const std::int32_t divisor = static_cast<std::int32_t>(g6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    g6 = (g8 | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    g7 = (g28 + static_cast<std::uint32_t>(10160));
    g5 = (ctx.lo);
    hot_regs.g31 = (0x08A957C8u);
    g8 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[10] = g10;
    hot_regs.f12 = f12;
    goto L_08A95BCC;
}
}
L_08A957C8:
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
L_08A957D4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g7 = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g7 + static_cast<std::uint32_t>(29552));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (14848u << 16u);
    hot_regs.g6 = (16256u << 16u);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g5 = (15104u << 16u);
    hot_regs.g6 = (hot_regs.g6 >> 8u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(4));
    hot_regs.g6 = (hot_regs.g6 | hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g4 >> 8u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g7 >> 8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g6 = (hot_regs.g6 | hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g7 >> 8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g6 = (hot_regs.g6 | hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g6 = (hot_regs.g7 >> 8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g6 = (hot_regs.g6 | hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g7 >> 8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g6 = (hot_regs.g6 | hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g7 >> 8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g6 = (hot_regs.g6 | hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g7 >> 8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g6 = (hot_regs.g6 | hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g6 = (hot_regs.g7 >> 8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g5 = (hot_regs.g6 | hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.g5 = (51440u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (57088u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.g5 = (57344u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.g5 = (57600u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (8448u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A95984u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A95984u) goto L_08A95984;
    return;
L_08A95984:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (16512u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (18176u << 16u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (hot_regs.g6 >> 8u);
    hot_regs.g5 = (hot_regs.g6 | hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g31 = (0x08A959C4u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A959C4u) goto L_08A959C4;
    return;
L_08A959C4:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g31 = (0x08A959D0u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A959D0u) goto L_08A959D0;
    return;
L_08A959D0:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x08A959DCu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A959DCu) goto L_08A959DC;
    return;
L_08A959DC:
    hot_regs.g4 = (0u | 2u);
    hot_regs.g31 = (0x08A959E8u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A959E8u) goto L_08A959E8;
    return;
L_08A959E8:
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
L_08A959F8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (2236u << 16u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(29552)));
    hot_regs.g6 = (22016u << 16u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(29552)));
    hot_regs.g6 = (22528u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(29552)));
    hot_regs.g6 = (22272u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(29552)));
    hot_regs.g6 = (22528u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(29552)));
    hot_regs.g6 = (hot_regs.g5 + static_cast<std::uint32_t>(29552));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(16)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.g7 = (18176u << 16u);
    hot_regs.g6 = (hot_regs.g6 >> 8u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g6 = (hot_regs.g6 | hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(29552)));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = (0u | 10u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(29552), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A95A9Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A95A9Cu) goto L_08A95A9C;
    return;
L_08A95A9C:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x08A95AA8u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A95AA8u) goto L_08A95AA8;
    return;
L_08A95AA8:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g31 = (0x08A95AB4u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A95AB4u) goto L_08A95AB4;
    return;
L_08A95AB4:
    hot_regs.g4 = (0u | 2u);
    hot_regs.g31 = (0x08A95AC0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A95AC0u) goto L_08A95AC0;
    return;
L_08A95AC0:
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
L_08A95ACC:
    hot_regs.g5 = (14848u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(9));
    hot_regs.g6 = (2236u << 16u);
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(29552)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(29552), hot_regs.g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7744)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = (hot_regs.g7 >> 8u);
    ctx.gpr[8] = (15104u << 16u);
    hot_regs.g7 = (hot_regs.g7 | ctx.gpr[8]);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g7);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(29552)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(29552), hot_regs.g5);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7748)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = hot_regs.f13 - hot_regs.f12;
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = (hot_regs.g7 >> 8u);
    hot_regs.g7 = (hot_regs.g7 | ctx.gpr[8]);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g7);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(29552)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(29552), hot_regs.g5);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7752)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = hot_regs.f14 - hot_regs.f13;
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = (hot_regs.g7 >> 8u);
    hot_regs.g7 = (hot_regs.g7 | ctx.gpr[8]);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g7);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(29552)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(29552), hot_regs.g5);
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    hot_regs.g5 = (2246u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1840));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<40u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<41u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<42u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<43u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<15u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 3u>(vfpu_d); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<31u, 4u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 40u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 0u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 16u, 4u);
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 36u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 0u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 20u, 4u);
      ctx.eat_vfpu_prefixes(); }
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95BB0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A95BC0u);
    // nop
    hot_regs.g29 = g29;
    goto L_08A95ACC;
}
L_08A95BC0:
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
L_08A95BCC:
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    hot_regs.g7 = (ctx.gpr[9] & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    g8 = (g8 & 255u);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g7);
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[23] = (0u | 255u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    ctx.gpr[30] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[20] = (15u << 16u);
    ctx.gpr[19] = (4096u << 16u);
    ctx.gpr[22] = (18432u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), hot_regs.g31);
    { const bool branch_taken = g8 == 0u;
    ctx.gpr[21] = (18688u << 16u);
    ctx.gpr[8] = g8;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A95C4C;
      }
      goto L_08A95C44;
    }
}
L_08A95C44:
    hot_regs.g31 = (0x08A95C4Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 776u, 0x08A073D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A95C4Cu) goto L_08A95C4C;
    return;
L_08A95C4C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(29552));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    hot_regs.g31 = (0x08A95C70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 260u, 0x08A09CF4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A95C70u) goto L_08A95C70;
    return;
L_08A95C70:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g23 = ctx.gpr[23];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (2816u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(-8));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    g5 = (g4 >> 8u);
    g5 = (g5 & ctx.gpr[20]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(20), g5);
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 | ctx.gpr[19]);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g6 = (256u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g7 = (g4 & g6);
    g8 = (2048u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    g7 = (g7 | g8);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g7);
    g5 = (g23 & g6);
    g7 = (21760u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g7 = (g5 | g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g7);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g7 = (g23 >> 24u);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    g8 = (22528u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g7 = (g7 | g8);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g7);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g7 = (22016u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g7 = (g5 | g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g7);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g7 = (22272u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g5 = (g5 | g7);
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f22) || std::isnan(ctx.fpr[24])) && hot_regs.f22 == ctx.fpr[24]));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (ctx.gpr[17] & g6);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g4 = (2560u << 16u);
    g4 = (g5 | g4);
    { const bool branch_taken = ctx.fpu_condition();
    g23 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[23] = g23;
      if (branch_taken) {
          goto L_08A95F4C;
      }
      goto L_08A95D50;
    }
}
L_08A95D50:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    g6 = (50944u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(257));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g6 = (16256u << 16u);
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    hot_regs.f12 = std::bit_cast<float>(g6);
    g6 = (16670u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g6 = (g6 | 26214u);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(29552), g5);
    f13 = std::bit_cast<float>(g6);
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f22) || std::isnan(f13)) && hot_regs.f22 == f13));
    g6 = (18944u << 16u);
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g7 = (19200u << 16u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A95DCC;
      }
      goto L_08A95D94;
    }
}
}
L_08A95D94:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    g8 = (std::bit_cast<std::uint32_t>(hot_regs.f22));
    g8 = (g8 >> 8u);
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    g8 = (g8 | hot_regs.g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g8 = (ctx.gpr[9] >> 8u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    g8 = (g8 | hot_regs.g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
    ctx.gpr[8] = g8;
    goto L_08A95DCC;
}
L_08A95DCC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    g8 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    g8 = (g8 >> 8u);
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    g8 = (g8 | ctx.gpr[22]);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g8 = (ctx.gpr[9] >> 8u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    g8 = (g8 | ctx.gpr[21]);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g8 = (ctx.gpr[17] >> 8u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    g5 = (g8 & ctx.gpr[20]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(20), g5);
    g8 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 | ctx.gpr[19]);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g8 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(20), ctx.gpr[23]);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    g5 = (g8 >> 8u);
    g8 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 | g6);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), g5);
    g6 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g6 = (g6 >> 8u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    g6 = (g6 | hot_regs.g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = g6 == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08A95EF4;
      }
      goto L_08A95E80;
    }
}
L_08A95E80:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 >> 8u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    g5 = (g5 | ctx.gpr[22]);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g6 = (hot_regs.g7 >> 8u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    g6 = (g6 | ctx.gpr[21]);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g6 = (ctx.gpr[17] >> 8u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    g5 = (g6 & ctx.gpr[20]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(20), g5);
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 | ctx.gpr[19]);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(20), ctx.gpr[23]);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08A95EF4;
}
L_08A95EF4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    g5 = (50944u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (g4 >> 8u);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(29552), g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 | ctx.gpr[22]);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (hot_regs.g6 >> 8u);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g5 = (g5 | ctx.gpr[21]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A95FC0;
      }
      goto L_08A95F4C;
    }
}
L_08A95F4C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 >> 8u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    g5 = (g5 | ctx.gpr[22]);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g6 = (hot_regs.g7 >> 8u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    g6 = (g6 | ctx.gpr[21]);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g6 = (ctx.gpr[17] >> 8u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    g5 = (g6 & ctx.gpr[20]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(20), g5);
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 | ctx.gpr[19]);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(20), ctx.gpr[23]);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08A95FC0;
}
L_08A95FC0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A95FFC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
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
    ctx.fpr[0] = std::bit_cast<float>(g4);
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A96020:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
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
    ctx.fpr[0] = std::bit_cast<float>(g4);
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A96044:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A9605Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 773u, 0x08A073A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9605Cu) goto L_08A9605C;
    return;
L_08A9605C:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), 0u);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A96074:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2280u << 16u);
    ctx.gpr[16] = (2280u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-9040));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-3664));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A9609Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 640u, 0x08AAEFC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9609Cu) goto L_08A9609C;
    return;
L_08A9609C:
    hot_regs.g31 = (0x08A960A4u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-4996));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A960A4u) goto L_08A960A4;
    return;
L_08A960A4:
    hot_regs.g31 = (0x08A960ACu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 632u, 0x08AAEF5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A960ACu) goto L_08A960AC;
    return;
L_08A960AC:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-4984));
    hot_regs.g31 = (0x08A960B8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A960B8u) goto L_08A960B8;
    return;
L_08A960B8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5068), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-4972));
    hot_regs.g31 = (0x08A960C8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A960C8u) goto L_08A960C8;
    return;
L_08A960C8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5064), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-4960));
    hot_regs.g31 = (0x08A960D8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A960D8u) goto L_08A960D8;
    return;
L_08A960D8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5060), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-4948));
    hot_regs.g31 = (0x08A960E8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A960E8u) goto L_08A960E8;
    return;
L_08A960E8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5056), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-4936));
    hot_regs.g31 = (0x08A960F8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A960F8u) goto L_08A960F8;
    return;
L_08A960F8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5052), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-4920));
    hot_regs.g31 = (0x08A96108u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A96108u) goto L_08A96108;
    return;
L_08A96108:
    hot_regs.g4 = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5048), hot_regs.g2);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08A9611Cu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(9488));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9611Cu) goto L_08A9611C;
    return;
L_08A9611C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5044), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-4908));
    hot_regs.g31 = (0x08A9612Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9612Cu) goto L_08A9612C;
    return;
L_08A9612C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5040), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-4896));
    hot_regs.g31 = (0x08A9613Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9613Cu) goto L_08A9613C;
    return;
L_08A9613C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5036), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-4884));
    hot_regs.g31 = (0x08A9614Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9614Cu) goto L_08A9614C;
    return;
L_08A9614C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5032), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-4872));
    hot_regs.g31 = (0x08A9615Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9615Cu) goto L_08A9615C;
    return;
L_08A9615C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5028), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-4856));
    hot_regs.g31 = (0x08A9616Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9616Cu) goto L_08A9616C;
    return;
L_08A9616C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5024), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-4844));
    hot_regs.g31 = (0x08A9617Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9617Cu) goto L_08A9617C;
    return;
L_08A9617C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5016), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-4832));
    hot_regs.g31 = (0x08A9618Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9618Cu) goto L_08A9618C;
    return;
L_08A9618C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5012), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-4816));
    hot_regs.g31 = (0x08A9619Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9619Cu) goto L_08A9619C;
    return;
L_08A9619C:
    hot_regs.g31 = (0x08A961A4u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5008), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 642u, 0x08AAEFE8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A961A4u) goto L_08A961A4;
    return;
L_08A961A4:
    hot_regs.g4 = (0u | 0u);
    goto L_08A961A8;
L_08A961A8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(4), 0u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 48 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    g17 = (g17 + static_cast<std::uint32_t>(112));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A961A8;
      }
      goto L_08A961C0;
    }
}
L_08A961C0:
    hot_regs.g4 = (0u | 0u);
    goto L_08A961C4;
L_08A961C4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 48 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    g16 = (g16 + static_cast<std::uint32_t>(64));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A961C4;
      }
      goto L_08A961D8;
    }
}
L_08A961D8:
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
L_08A961EC:
{
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[13] = (ctx.gpr[10] | 0u);
    ctx.gpr[12] = (g4 & 255u);
    g3 = (hot_regs.g7 << 16u);
    hot_regs.g2 = (ctx.gpr[8] & 255u);
    ctx.gpr[10] = (ctx.gpr[9] & 255u);
    g4 = (2280u << 16u);
    g3 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g3) >> 16u));
    ctx.gpr[9] = (ctx.gpr[13] & 255u);
    ctx.gpr[8] = (0u | 0u);
    hot_regs.g7 = (0u | 1u);
    g4 = (g4 + static_cast<std::uint32_t>(-3664));
    ctx.gpr[3] = g3;
    hot_regs.g4 = g4;
    goto L_08A96218;
}
L_08A96218:
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9623C;
      }
      goto L_08A96220;
    }
L_08A96220:
    ctx.gpr[13] = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(54)));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9623C;
      }
      goto L_08A9622C;
    }
L_08A9622C:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g7 = (static_cast<std::int32_t>(g8) < 48 ? 1u : 0u);
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08A96218;
      }
      goto L_08A9623C;
    }
}
L_08A9623C:
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96284;
      }
      goto L_08A96244;
    }
L_08A96244:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[12]));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(48), g5);
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[3]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(hot_regs.g2));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(40), g5);
    hot_regs.g5 = g5;
    goto L_08A96284;
}
L_08A96284:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9628C:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g12 = ctx.gpr[12];
    g12 = (ctx.gpr[11] | 0u);
    g2 = (g7 << 16u);
    ctx.gpr[11] = (ctx.gpr[8] & 255u);
    g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (g12 & 255u);
    ctx.gpr[13] = (ctx.gpr[10] | 0u);
    g12 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(10176)));
    ctx.gpr[3] = (hot_regs.g4 & 255u);
    ctx.gpr[10] = (ctx.gpr[9] & 255u);
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g2) >> 16u));
    ctx.gpr[9] = (ctx.gpr[13] & 255u);
    g7 = (g7 & 255u);
    g12 = (static_cast<std::int32_t>(g12) < 48 ? 1u : 0u);
    { const bool branch_taken = g12 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g2 = g2;
    hot_regs.g7 = g7;
    ctx.gpr[12] = g12;
      if (branch_taken) {
          goto L_08A9635C;
      }
      goto L_08A962C8;
    }
}
L_08A962C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g12 = ctx.gpr[12];
    std::uint32_t g13 = ctx.gpr[13];
    std::uint32_t g28 = ctx.gpr[28];
    g12 = (aot_mem.aot_load16(g28 + static_cast<std::uint32_t>(10176)));
    g12 = (g12 << 6u);
    g13 = (2280u << 16u);
    g13 = (g13 + static_cast<std::uint32_t>(-12112));
    g12 = (g12 + g13);
    aot_mem.aot_store8(g12 + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_store32(g12 + static_cast<std::uint32_t>(44), g5);
    { const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g12 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(g12 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g12 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g12 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g12 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store16(g12 + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(hot_regs.g2));
    aot_mem.aot_store8(g12 + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(g12 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(g12 + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store32(g12 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g12 + static_cast<std::uint32_t>(54))))));
    g6 = (0u + static_cast<std::uint32_t>(-2));
    g5 = (g5 & g6);
    g6 = (ctx.gpr[8] & 1u);
    g5 = (g5 | g6);
    aot_mem.aot_store8(g12 + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(g5));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g12 + static_cast<std::uint32_t>(54))))));
    g6 = (0u + static_cast<std::uint32_t>(-5));
    g5 = (g5 & g6);
    g6 = (hot_regs.g7 & 1u);
    g6 = (g6 << 2u);
    g5 = (g5 | g6);
    aot_mem.aot_store8(g12 + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store32(g12 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store8(g12 + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g12 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    g4 = (aot_mem.aot_load16(g28 + static_cast<std::uint32_t>(10176)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g28 + static_cast<std::uint32_t>(10176), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[12] = g12;
    ctx.gpr[13] = g13;
    goto L_08A9635C;
}
L_08A9635C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96364:
{
    float f2 = ctx.fpr[2];
    float f19 = ctx.fpr[19];
    float f20 = hot_regs.f20;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    std::uint32_t g30 = ctx.gpr[30];
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), g23);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), g30);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), hot_regs.g31);
    ctx.gpr[19] = (g8 & 255u);
    ctx.gpr[20] = (ctx.gpr[9] & 255u);
    ctx.gpr[21] = (ctx.gpr[10] & 255u);
    ctx.gpr[22] = (ctx.gpr[11] & 255u);
    g23 = (2236u << 16u);
    g23 = (g23 + static_cast<std::uint32_t>(32304));
    g30 = (g23 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g30 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g5 = (g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    f19 = f19 - ctx.fpr[0];
    { const float fs = f19; const float ft = f19; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    f2 = std::bit_cast<float>(aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    f2 = f2 - ctx.fpr[1];
    { const float fs = f2; const float ft = f2; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f2 = std::bit_cast<float>(0x7FC00000u); else f2 = fs * ft; }
    f20 = f20 + f2;
    g5 = (aot_mem.aot_load8(g23 + static_cast<std::uint32_t>(80)));
    g5 = (g5 << 5u);
    g8 = (0u - g5);
    g5 = (g5 << 2u);
    g8 = (g8 + g5);
    g5 = (g5 << 2u);
    g5 = (g8 + g5);
    g5 = (g5 + g23);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(112))))));
    g8 = (0u | 1u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    ctx.gpr[18] = (g7 | 0u);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const bool branch_taken = g5 == g8;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    hot_regs.g5 = g5;
    ctx.gpr[8] = g8;
    ctx.gpr[23] = g23;
    hot_regs.g29 = g29;
    ctx.gpr[30] = g30;
    ctx.fpr[2] = f2;
    ctx.fpr[19] = f19;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08A964AC;
      }
      goto L_08A96448;
    }
}
}
L_08A96448:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[23]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 37u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A964AC;
      }
      goto L_08A96478;
    }
}
L_08A96478:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    hot_regs.g4 = g4;
        goto L_08A96490;
    }
    goto L_08A96484;
}
L_08A96484:
    hot_regs.g31 = (0x08A9648Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9648Cu) goto L_08A9648C;
    return;
L_08A9648C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_08A96490;
L_08A96490:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A964AC;
      }
      goto L_08A9649C;
    }
}
L_08A9649C:
    hot_regs.g31 = (0x08A964A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A964A4u) goto L_08A964A4;
    return;
L_08A964A4:
    { const bool branch_taken = ctx.gpr[16] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A964B4;
      }
      goto L_08A964AC;
    }
L_08A964AC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08A964B8;
      }
      goto L_08A964B4;
    }
L_08A964B4:
    hot_regs.g4 = (0u | 0u);
    goto L_08A964B8;
L_08A964B8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (17462u << 16u);
    g5 = (g5 | 16384u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A964DC;
      }
      goto L_08A964D4;
    }
}
L_08A964D4:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96610;
      }
      goto L_08A964DC;
    }
L_08A964DC:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96524;
      }
      goto L_08A964E4;
    }
L_08A964E4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    f12 = f12 - f13;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    f14 = f14 - hot_regs.f15;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(96)));
    { const float fs = f12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f14; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22) ^ 0x80000000u);
    f12 = f12 + f14;
    ctx.set_fpu_condition((f12 <= f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A96610;
      }
      goto L_08A96524;
    }
}
L_08A96524:
{
    float f20 = hot_regs.f20;
    f20 = std::sqrt(f20);
    hot_regs.g5 = (16802u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((f20 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08A965B0;
      }
      goto L_08A96540;
    }
}
L_08A96540:
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g4 = (16784u << 16u);
      if (branch_taken) {
          goto L_08A965B0;
      }
      goto L_08A96548;
    }
L_08A96548:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g21 = ctx.gpr[21];
    f12 = std::bit_cast<float>(g4);
    g4 = (16656u << 16u);
    f12 = hot_regs.f20 - f12;
    f13 = std::bit_cast<float>(g4);
    f12 = f12 / f13;
    g4 = (16256u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    f15 = std::bit_cast<float>(g19);
    f16 = std::bit_cast<float>(g20);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f16)));
    f12 = hot_regs.f14 - f12;
    f13 = std::bit_cast<float>(g21);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const float fs = f15; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    { const float fs = f16; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f16 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f16));
    g19 = (std::bit_cast<std::uint32_t>(f15));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g19 = (g19 & 255u);
    g20 = (std::bit_cast<std::uint32_t>(f16));
    g20 = (g20 & 255u);
    g21 = (std::bit_cast<std::uint32_t>(f12));
    g21 = (g21 & 255u);
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
    ctx.gpr[20] = g20;
    ctx.gpr[21] = g21;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    goto L_08A965B0;
}
}
L_08A965B0:
    hot_regs.g4 = (16576u << 16u);
    hot_regs.g31 = (0x08A965BCu);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A965BCu) goto L_08A965BC;
    return;
L_08A965BC:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (ctx.gpr[16] ^ g2);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g2 = (g4 & 255u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g2);
    g4 = (0u | 2u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (0u | 128u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08A96610u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    goto L_08A9628C;
}
L_08A96610:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A96658:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (8u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    g5 = (g5 & hot_regs.g6);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    { const bool branch_taken = g5 == 0u;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A96700;
      }
      goto L_08A966A8;
    }
}
L_08A966A8:
    hot_regs.g31 = (0x08A966B0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A966B0u) goto L_08A966B0;
    return;
L_08A966B0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A966D0;
      }
      goto L_08A966B8;
    }
L_08A966B8:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    g5 = (0u | 60u);
    { const bool branch_taken = hot_regs.g4 == g5;
    g5 = (0u | 63u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A966D0;
      }
      goto L_08A966C8;
    }
}
L_08A966C8:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A96700;
      }
      goto L_08A966D0;
    }
L_08A966D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(11140))))));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A96700;
      }
      goto L_08A966E0;
    }
}
L_08A966E0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08A96700u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_08A96728;
L_08A96700:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A96728:
{
    float f2 = ctx.fpr[2];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
    float f20 = hot_regs.f20;
    float f22 = hot_regs.f22;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(188), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), g19);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(204), hot_regs.g31);
    g5 = (16720u << 16u);
    f20 = std::bit_cast<float>(g5);
    { const float fs = f20; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    g19 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g19 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g17 = (g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    g5 = (2236u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(32304));
    g5 = (g5 + static_cast<std::uint32_t>(48));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    f19 = f19 - ctx.fpr[0];
    { const float fs = f19; const float ft = f19; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    f2 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    f2 = f2 - ctx.fpr[1];
    { const float fs = f2; const float ft = f2; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f2 = std::bit_cast<float>(0x7FC00000u); else f2 = fs * ft; }
    f22 = f22 + f2;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.set_fpu_condition((f22 < f18));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
    ctx.fpr[2] = f2;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
    hot_regs.f20 = f20;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_08A96A28;
      }
      goto L_08A967D4;
    }
}
}
L_08A967D4:
    hot_regs.g31 = (0x08A967DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A967DCu) goto L_08A967DC;
    return;
L_08A967DC:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (hot_regs.g2 ^ ctx.gpr[16]);
    g18 = (g18 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] == hot_regs.g2;
    // nop
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08A96840;
      }
      goto L_08A967EC;
    }
}
L_08A967EC:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
          goto L_08A96838;
      }
      goto L_08A96830;
    }
L_08A96830:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u + static_cast<std::uint32_t>(1));
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08A96838;
}
L_08A96838:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96A28;
      }
      goto L_08A96840;
    }
L_08A96840:
{
    float f12 = hot_regs.f12;
    float f22 = hot_regs.f22;
{
    std::uint32_t g4 = hot_regs.g4;
    f22 = std::sqrt(f22);
    g4 = (16128u << 16u);
    f12 = std::bit_cast<float>(g4);
    { const float fs = hot_regs.f20; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (16256u << 16u);
    ctx.set_fpu_condition((f22 < f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f20 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_08A96874;
      }
      goto L_08A96864;
    }
}
}
L_08A96864:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(11140))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_08A968A8;
      }
      goto L_08A96874;
    }
L_08A96874:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(11140))))));
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    hot_regs.f14 = hot_regs.f22 - f12;
    f12 = hot_regs.f14 / f12;
    f12 = hot_regs.f20 - f12;
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g19 = (g4 << 16u);
    g19 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g19) >> 16u));
    ctx.gpr[20] = (g19 & 255u);
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08A968A8;
}
}
L_08A968A8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    f12 = f12 + ctx.fpr[26];
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    f12 = f12 + ctx.fpr[24];
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 61u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A96910;
      }
      goto L_08A968D0;
    }
}
}
L_08A968D0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 63u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A96910;
      }
      goto L_08A968E0;
    }
L_08A968E0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 52u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A96910;
      }
      goto L_08A968F0;
    }
L_08A968F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 53u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A96910;
      }
      goto L_08A96900;
    }
L_08A96900:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 45u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A969DC;
      }
      goto L_08A96910;
    }
L_08A96910:
    hot_regs.g31 = (0x08A96918u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A96918u) goto L_08A96918;
    return;
L_08A96918:
    ctx.gpr[21] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(704)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (0x08A9692Cu);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9692Cu) goto L_08A9692C;
    return;
L_08A9692C:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A96938u);
    ctx.gpr[21] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A96938u) goto L_08A96938;
    return;
L_08A96938:
{
    std::uint32_t g21 = ctx.gpr[21];
    g21 = (g21 << 6u);
    g21 = (hot_regs.g2 + g21);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), 0u);
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_08A96960;
      }
      goto L_08A96948;
    }
}
L_08A96948:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    g4 = (g4 & 1u);
    if (g4 == 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), ctx.gpr[21]);
    hot_regs.g4 = g4;
        goto L_08A96964;
    }
    goto L_08A96958;
}
L_08A96958:
    hot_regs.g31 = (0x08A96960u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A96960u) goto L_08A96960;
    return;
L_08A96960:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), ctx.gpr[21]);
    goto L_08A96964;
L_08A96964:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), hot_regs.g4);
    hot_regs.g31 = (0x08A9697Cu);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9697Cu) goto L_08A9697C;
    return;
L_08A9697C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g29 + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    g4 = (g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    f12 = f12 + hot_regs.f13;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    f12 = f12 + hot_regs.f14;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A969DC;
      }
      goto L_08A969C8;
    }
}
}
L_08A969C8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A969DC;
      }
      goto L_08A969D4;
    }
L_08A969D4:
    hot_regs.g31 = (0x08A969DCu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A969DCu) goto L_08A969DC;
    return;
L_08A969DC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5064)));
    g4 = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(g4);
    ctx.fpr[18] = std::bit_cast<float>(0u);
    g4 = (0u | 1u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (g20 | 0u);
    ctx.gpr[9] = (g20 | 0u);
    ctx.gpr[10] = (g20 | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g31 = (0x08A96A28u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    hot_regs.g4 = g4;
    goto L_08A9628C;
}
L_08A96A28:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(196)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(204)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A96A64:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    g4 = (g4 & 255u);
    g5 = (0u | 0u);
    g6 = (5888u << 16u);
    g7 = (2236u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), g6);
    g6 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(29552)));
    g6 = (g6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(29552), g6);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-24632), static_cast<std::uint8_t>(g5));
    g5 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A96AD4;
      }
      goto L_08A96AA0;
    }
}
L_08A96AA0:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A96B3C;
      }
      goto L_08A96AA8;
    }
L_08A96AA8:
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x08A96AB4u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A96AB4u) goto L_08A96AB4;
    return;
L_08A96AB4:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x08A96AC0u);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A96AC0u) goto L_08A96AC0;
    return;
L_08A96AC0:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x08A96ACCu);
    hot_regs.g5 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A96ACCu) goto L_08A96ACC;
    return;
L_08A96ACC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96B3C;
      }
      goto L_08A96AD4;
    }
L_08A96AD4:
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A96B10;
      }
      goto L_08A96ADC;
    }
L_08A96ADC:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96B3C;
      }
      goto L_08A96AE4;
    }
L_08A96AE4:
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x08A96AF0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A96AF0u) goto L_08A96AF0;
    return;
L_08A96AF0:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x08A96AFCu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A96AFCu) goto L_08A96AFC;
    return;
L_08A96AFC:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x08A96B08u);
    hot_regs.g5 = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A96B08u) goto L_08A96B08;
    return;
L_08A96B08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96B3C;
      }
      goto L_08A96B10;
    }
L_08A96B10:
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x08A96B1Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A96B1Cu) goto L_08A96B1C;
    return;
L_08A96B1C:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x08A96B28u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A96B28u) goto L_08A96B28;
    return;
L_08A96B28:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x08A96B34u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A96B34u) goto L_08A96B34;
    return;
L_08A96B34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96B3C;
      }
      goto L_08A96B3C;
    }
L_08A96B3C:
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
L_08A96B48:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    g17 = (2280u << 16u);
    g17 = (g17 + static_cast<std::uint32_t>(-9040));
    hot_regs.g31 = (0x08A96B70u);
    // nop
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    goto L_08A957D4;
}
L_08A96B70:
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_08A96B78;
L_08A96B78:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 48 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(112));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A96B78;
      }
      goto L_08A96B8C;
    }
}
L_08A96B8C:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(5376));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96C74;
      }
      goto L_08A96B98;
    }
L_08A96B98:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96C68;
      }
      goto L_08A96BA4;
    }
L_08A96BA4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96C68;
      }
      goto L_08A96BB0;
    }
L_08A96BB0:
    hot_regs.g31 = (0x08A96BB8u);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    goto L_08A96A64;
L_08A96BB8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08A96BC8u);
    hot_regs.g4 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A96BC8u) goto L_08A96BC8;
    return;
L_08A96BC8:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A96C68;
      }
      goto L_08A96BD4;
    }
L_08A96BD4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96C5C;
      }
      goto L_08A96BE0;
    }
L_08A96BE0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(94)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A96C5C;
      }
      goto L_08A96BF0;
    }
L_08A96BF0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A96C5C;
      }
      goto L_08A96C00;
    }
L_08A96C00:
{
    std::uint32_t g19 = ctx.gpr[19];
    hot_regs.g4 = (g19 + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (g19 + static_cast<std::uint32_t>(4));
    hot_regs.g31 = (0x08A96C10u);
    hot_regs.g6 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(8)));
    goto L_08A95BB0;
}
L_08A96C10:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g19 = ctx.gpr[19];
    hot_regs.g4 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(8)));
    g6 = (aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(96)));
    g6 = (g6 << 8u);
    g7 = (aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(95)));
    g6 = (g6 | g7);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g19 + static_cast<std::uint32_t>(92))))));
    g7 = (g7 << 24u);
    g6 = (g6 | g7);
    g7 = (aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(97)));
    g7 = (g7 << 16u);
    g6 = (g6 | g7);
    g7 = (g19 + static_cast<std::uint32_t>(16));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(84)));
    ctx.gpr[9] = (aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(106)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(100)));
    hot_regs.g31 = (0x08A96C58u);
    ctx.gpr[8] = (0u | 1u);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_08A95BCC;
}
L_08A96C58:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_08A96C5C;
L_08A96C5C:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(112));
    { const bool branch_taken = g19 != ctx.gpr[16];
    // nop
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A96BD4;
      }
      goto L_08A96C68;
    }
}
L_08A96C68:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(112));
    { const bool branch_taken = g17 != ctx.gpr[16];
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A96B98;
      }
      goto L_08A96C74;
    }
}
L_08A96C74:
    hot_regs.g31 = (0x08A96C7Cu);
    // nop
    goto L_08A959F8;
L_08A96C7C:
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
L_08A96C98:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), hot_regs.g31);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    g17 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    { const bool branch_taken = g17 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A96ED4;
      }
      goto L_08A96CF8;
    }
}
L_08A96CF8:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(32));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f13));
    goto L_08A96D10;
}
L_08A96D10:
{
    std::uint32_t g17 = ctx.gpr[17];
    ctx.gpr[18] = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = hot_regs.g5 == hot_regs.g4;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A96EB8;
      }
      goto L_08A96D28;
    }
}
L_08A96D28:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 512u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A96EB8;
      }
      goto L_08A96D44;
    }
}
L_08A96D44:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    g4 = (g4 & 512u);
    { const bool branch_taken = g4 != 0u;
    g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A96EB8;
      }
      goto L_08A96D54;
    }
}
L_08A96D54:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (16248u << 16u);
    g4 = (g4 | 20972u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A96EB8;
      }
      goto L_08A96D74;
    }
}
L_08A96D74:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(80));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (ctx.gpr[18] + hot_regs.g5);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08A96D90u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A96D90u) goto L_08A96D90;
    return;
L_08A96D90:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f13));
    f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    g6 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g4);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f14));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    ctx.fpr[30] = std::bit_cast<float>(g4);
    f13 = std::bit_cast<float>(g6);
    ctx.set_fpu_condition((ctx.fpr[28] < f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A96EB8;
      }
      goto L_08A96DDC;
    }
}
}
L_08A96DDC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[24] <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A96EB8;
      }
      goto L_08A96DF0;
    }
L_08A96DF0:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((ctx.fpr[26] < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A96EB8;
      }
      goto L_08A96E04;
    }
L_08A96E04:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f22 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A96EB8;
      }
      goto L_08A96E18;
    }
L_08A96E18:
{
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = hot_regs.f12 - hot_regs.f20;
    g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    g6 = (g4 << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g6 = (hot_regs.g5 + g6);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(20)));
    g6 = (g6 + static_cast<std::uint32_t>(32));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(8)));
    f15 = hot_regs.f13 + f15;
    ctx.set_fpu_condition((hot_regs.f14 < f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08A96EB8;
      }
      goto L_08A96E5C;
    }
}
}
L_08A96E5C:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g4 = (g4 + static_cast<std::uint32_t>(16));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    f13 = f13 + hot_regs.f14;
    ctx.set_fpu_condition((hot_regs.f12 <= f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A96EB8;
      }
      goto L_08A96E88;
    }
}
}
L_08A96E88:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g31 = (0x08A96EB8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 112u, 0x08A98B40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A96EB8u) goto L_08A96EB8;
    return;
L_08A96EB8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96D10;
      }
      goto L_08A96EC0;
    }
L_08A96EC0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_08A96ED4;
}
L_08A96ED4:
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
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A96F08:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), hot_regs.g31);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    g17 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    { const bool branch_taken = g17 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A97134;
      }
      goto L_08A96F68;
    }
}
L_08A96F68:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(32));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f13));
    goto L_08A96F80;
}
L_08A96F80:
{
    std::uint32_t g17 = ctx.gpr[17];
    ctx.gpr[18] = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = hot_regs.g5 == hot_regs.g4;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A97118;
      }
      goto L_08A96F98;
    }
}
L_08A96F98:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    aot_mem.aot_store16(g18 + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 512u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    g4 = (g18 + static_cast<std::uint32_t>(32));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A97118;
      }
      goto L_08A96FB4;
    }
}
L_08A96FB4:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (16248u << 16u);
    g4 = (g4 | 20972u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A97118;
      }
      goto L_08A96FD4;
    }
}
L_08A96FD4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(80));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (ctx.gpr[18] + hot_regs.g5);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08A96FF0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A96FF0u) goto L_08A96FF0;
    return;
L_08A96FF0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f13));
    f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    g6 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g4);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f14));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    ctx.fpr[30] = std::bit_cast<float>(g4);
    f13 = std::bit_cast<float>(g6);
    ctx.set_fpu_condition((ctx.fpr[28] < f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A97118;
      }
      goto L_08A9703C;
    }
}
}
L_08A9703C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[24] <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A97118;
      }
      goto L_08A97050;
    }
L_08A97050:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((ctx.fpr[26] < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A97118;
      }
      goto L_08A97064;
    }
L_08A97064:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f22 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A97118;
      }
      goto L_08A97078;
    }
L_08A97078:
{
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = hot_regs.f12 - hot_regs.f20;
    g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    g6 = (g4 << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g6 = (hot_regs.g5 + g6);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(20)));
    g6 = (g6 + static_cast<std::uint32_t>(32));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(8)));
    f15 = hot_regs.f13 + f15;
    ctx.set_fpu_condition((hot_regs.f14 < f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08A97118;
      }
      goto L_08A970BC;
    }
}
}
L_08A970BC:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g4 = (g4 + static_cast<std::uint32_t>(16));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    f13 = f13 + hot_regs.f14;
    ctx.set_fpu_condition((hot_regs.f12 <= f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A97118;
      }
      goto L_08A970E8;
    }
}
}
L_08A970E8:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g31 = (0x08A97118u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 112u, 0x08A98B40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A97118u) goto L_08A97118;
    return;
L_08A97118:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96F80;
      }
      goto L_08A97120;
    }
L_08A97120:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_08A97134;
}
L_08A97134:
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
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A97168:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    g16 = (2280u << 16u);
    g16 = (g16 + static_cast<std::uint32_t>(-9040));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_08A97184;
}
L_08A97184:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A971C8;
      }
      goto L_08A97190;
    }
L_08A97190:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(98)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A971C8;
      }
      goto L_08A9719C;
    }
L_08A9719C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(105)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A971C0;
      }
      goto L_08A971A8;
    }
L_08A971A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    g4 = (g4 + static_cast<std::uint32_t>(5000));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A971C8;
      }
      goto L_08A971C0;
    }
}
L_08A971C0:
    hot_regs.g31 = (0x08A971C8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08A96044;
L_08A971C8:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(0u));
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 48 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    g16 = (g16 + static_cast<std::uint32_t>(112));
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A97184;
      }
      goto L_08A971DC;
    }
}
L_08A971DC:
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
L_08A971F0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    g17 = (2280u << 16u);
    g17 = (g17 + static_cast<std::uint32_t>(-3664));
    ctx.gpr[16] = (0u | 0u);
    g4 = (16256u << 16u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    g4 = (16928u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    g4 = (20352u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(g4);
    g4 = (16448u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(g4);
    g4 = (16000u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    goto L_08A97250;
}
L_08A97250:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A973DC;
      }
      goto L_08A9725C;
    }
L_08A9725C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g5 = (g6 - g5);
    g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    hot_regs.g7 = (g5 < g6 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A97280;
      }
      goto L_08A97278;
    }
}
L_08A97278:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A973DC;
      }
      goto L_08A97280;
    }
L_08A97280:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g17 = ctx.gpr[17];
    g7 = (g6 + g6);
    g7 = (g6 + g7);
    g7 = (g7 >> 2u);
    hot_regs.g2 = (hot_regs.g5 < g7 ? 1u : 0u);
    g7 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(48)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(24)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g17 + static_cast<std::uint32_t>(52))))));
    ctx.gpr[9] = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(55)));
    ctx.gpr[10] = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(56)));
    ctx.gpr[11] = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(57)));
    { const bool branch_taken = hot_regs.g2 == 0u;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(32)));
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A972F8;
      }
      goto L_08A972BC;
    }
}
L_08A972BC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (hot_regs.g7 | 0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g31 = (0x08A972E8u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08A97518;
}
L_08A972E8:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A973DC;
      }
      goto L_08A972F0;
    }
L_08A972F0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A973DC;
      }
      goto L_08A972F8;
    }
L_08A972F8:
{
    float f17 = ctx.fpr[17];
    f17 = std::bit_cast<float>(hot_regs.g5);
    f17 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f17)));
    if (static_cast<std::int32_t>(hot_regs.g5) < 0) {
    f17 = f17 + ctx.fpr[26];
    ctx.fpr[17] = f17;
        goto L_08A97308;
    }
    goto L_08A97308;
}
L_08A97308:
{
    float f18 = ctx.fpr[18];
    f18 = std::bit_cast<float>(hot_regs.g6);
    f18 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    if (static_cast<std::int32_t>(hot_regs.g6) < 0) {
    f18 = f18 + ctx.fpr[26];
    ctx.fpr[18] = f18;
        goto L_08A97318;
    }
    goto L_08A97318;
}
L_08A97318:
{
    float f18 = ctx.fpr[18];
    { const float fs = f18; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    { const float fs = f18; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] - f18;
    f18 = std::bit_cast<float>(hot_regs.g6);
    f18 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    if (static_cast<std::int32_t>(hot_regs.g6) < 0) {
    f18 = f18 + ctx.fpr[26];
    ctx.fpr[18] = f18;
        goto L_08A97334;
    }
    goto L_08A97334;
}
L_08A97334:
{
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (g4 | 0u);
    { const float fs = f18; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    f17 = f17 / f18;
    f17 = hot_regs.f20 - f17;
    f19 = std::bit_cast<float>(g8);
    f19 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f19)));
    { const float fs = f19; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    f19 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f19));
    g4 = (std::bit_cast<std::uint32_t>(f19));
    g8 = (g4 << 16u);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g8) >> 16u));
    f18 = std::bit_cast<float>(g9);
    f18 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    { const float fs = f18; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    f18 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f18));
    g9 = (std::bit_cast<std::uint32_t>(f18));
    g9 = (g9 & 255u);
    f19 = std::bit_cast<float>(g10);
    f19 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f19)));
    { const float fs = f19; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    f19 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f19));
    g10 = (std::bit_cast<std::uint32_t>(f19));
    g10 = (g10 & 255u);
    f18 = std::bit_cast<float>(g11);
    f18 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    { const float fs = f18; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f17 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f17));
    g11 = (std::bit_cast<std::uint32_t>(f17));
    g11 = (g11 & 255u);
    g4 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (hot_regs.g7 | 0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    f17 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    f18 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), 0u);
    f19 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g31 = (0x08A973D0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
    goto L_08A97518;
}
}
L_08A973D0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A973DC;
      }
      goto L_08A973D8;
    }
L_08A973D8:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    goto L_08A973DC;
L_08A973DC:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < 48 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A97250;
      }
      goto L_08A973EC;
    }
}
L_08A973EC:
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
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A97418:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f14 + f12;
    f12 = std::sqrt(f12);
    ctx.gpr[11] = (16256u << 16u);
    f15 = std::bit_cast<float>(ctx.gpr[11]);
    f15 = f12 + f15;
    f15 = f15 / f12;
    { const float fs = f13; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    { const float fs = f13; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) ^ 0x80000000u);
    f13 = f13 / f12;
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f12 = f13 / f12;
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    aot_mem.aot_store32(g10 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g4 = (16128u << 16u);
    f12 = std::bit_cast<float>(g4);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(0)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(0)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g10 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08A974F0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2280u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-3664));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = g4;
    goto L_08A974FC;
}
L_08A974FC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 48 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(64));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A974FC;
      }
      goto L_08A97510;
    }
}
L_08A97510:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97518:
{
    float f0 = ctx.fpr[0];
    float f1 = ctx.fpr[1];
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    std::uint32_t g30 = ctx.gpr[30];
    g29 = (g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), g19);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), g30);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), hot_regs.g31);
    hot_regs.g2 = (ctx.gpr[8] | 0u);
    g19 = (hot_regs.g7 | 0u);
    ctx.gpr[3] = (hot_regs.g6 | 0u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    ctx.gpr[8] = (g5 & 255u);
    g30 = (hot_regs.g2 << 16u);
    g30 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g30) >> 16u));
    ctx.gpr[23] = (ctx.gpr[9] & 255u);
    ctx.gpr[22] = (ctx.gpr[10] & 255u);
    ctx.gpr[21] = (ctx.gpr[11] & 255u);
    hot_regs.g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(0)));
    g5 = (2236u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(32304));
    g5 = (g5 + static_cast<std::uint32_t>(48));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    f12 = f12 - f13;
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f0 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    f0 = f0 - ctx.fpr[2];
    { const float fs = f0; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    f12 = f12 + f0;
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f1 = std::bit_cast<float>(0x7FC00000u); else f1 = fs * ft; }
    f13 = std::bit_cast<float>(0u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    ctx.gpr[9] = (ctx.gpr[3] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_fpu_condition((f12 < f1));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    hot_regs.g5 = g5;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
    ctx.gpr[30] = g30;
    ctx.fpr[0] = f0;
    ctx.fpr[1] = f1;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A97604;
      }
      goto L_08A975F4;
    }
}
}
L_08A975F4:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[18]) || std::isnan(hot_regs.f13)) && ctx.fpr[18] == hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A97988;
      }
      goto L_08A97604;
    }
L_08A97604:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (2280u << 16u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[18]) || std::isnan(hot_regs.f13)) && ctx.fpr[18] == hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    g17 = (g17 + static_cast<std::uint32_t>(-9040));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A976BC;
      }
      goto L_08A97618;
    }
}
L_08A97618:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::sqrt(f12);
    hot_regs.g4 = (16192u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = ctx.fpr[18]; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((f12 < f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A976BC;
      }
      goto L_08A97638;
    }
}
L_08A97638:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g30 = ctx.gpr[30];
    f12 = f12 - f13;
    g4 = (16512u << 16u);
    f15 = std::bit_cast<float>(g4);
    f15 = f15 / ctx.fpr[18];
    { const float fs = f12; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(g4);
    f12 = ctx.fpr[16] - f12;
    f13 = std::bit_cast<float>(g30);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g4 = (std::bit_cast<std::uint32_t>(f13));
    g30 = (g4 << 16u);
    g30 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g30) >> 16u));
    f15 = std::bit_cast<float>(g23);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    { const float fs = f15; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    g23 = (std::bit_cast<std::uint32_t>(f15));
    g23 = (g23 & 255u);
    f13 = std::bit_cast<float>(g22);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g22 = (std::bit_cast<std::uint32_t>(f13));
    g22 = (g22 & 255u);
    f15 = std::bit_cast<float>(g21);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    { const float fs = f15; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g21 = (std::bit_cast<std::uint32_t>(f12));
    g21 = (g21 & 255u);
    hot_regs.g4 = g4;
    ctx.gpr[21] = g21;
    ctx.gpr[22] = g22;
    ctx.gpr[23] = g23;
    ctx.gpr[30] = g30;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f15 = f15;
    goto L_08A976BC;
}
}
L_08A976BC:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g5 = (0u | 1u);
    goto L_08A976C4;
L_08A976C4:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (ctx.gpr[16] << 7u);
      if (branch_taken) {
          goto L_08A97704;
      }
      goto L_08A976CC;
    }
L_08A976CC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (ctx.gpr[16] << 4u);
    g4 = (g4 - g10);
    g4 = (g4 + ctx.gpr[17]);
    g10 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] != g10;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_08A976F0;
      }
      goto L_08A976E4;
    }
}
L_08A976E4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    if (g4 != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    hot_regs.g4 = g4;
        goto L_08A97708;
    }
    goto L_08A976F0;
}
L_08A976F0:
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g4 = (g16 + static_cast<std::uint32_t>(1));
    g16 = (hot_regs.g4 << 16u);
    g16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g16) >> 16u));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (static_cast<std::int32_t>(g16) < 48 ? 1u : 0u);
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A976C4;
      }
      goto L_08A97704;
    }
}
L_08A97704:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    goto L_08A97708;
L_08A97708:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g6);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97898;
      }
      goto L_08A97720;
    }
}
L_08A97720:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    g4 = (ctx.gpr[16] << 7u);
    hot_regs.g5 = (ctx.gpr[16] << 4u);
    g4 = (g4 - hot_regs.g5);
    g4 = (g4 + ctx.gpr[17]);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(48)));
    f12 = f12 - hot_regs.f13;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((f12 < ctx.fpr[19]));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
        goto L_08A97774;
    }
    goto L_08A97750;
}
}
L_08A97750:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(52)));
    f12 = f12 - hot_regs.f13;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((f12 < ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A97858;
      }
      goto L_08A97770;
    }
}
L_08A97770:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08A97774;
L_08A97774:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(48)));
    f12 = f12 - hot_regs.f13;
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) & 0x7FFFFFFFu);
    g5 = (15692u << 16u);
    g5 = (g5 | 52429u);
    f12 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f15 < f12));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
        goto L_08A97838;
    }
    goto L_08A9779C;
}
}
L_08A9779C:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(52)));
    f13 = f13 - hot_regs.f15;
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((f13 < hot_regs.f12));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    hot_regs.f13 = f13;
        goto L_08A97838;
    }
    goto L_08A977BC;
}
L_08A977BC:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(56)));
    f12 = f12 - hot_regs.f13;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) & 0x7FFFFFFFu);
    hot_regs.g5 = (16384u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((f12 < hot_regs.f15));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    hot_regs.f12 = f12;
        goto L_08A97838;
    }
    goto L_08A977E4;
}
L_08A977E4:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[28]) || std::isnan(f12)) && ctx.fpr[28] == f12));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    hot_regs.f12 = f12;
        goto L_08A97838;
    }
    goto L_08A977F8;
}
L_08A977F8:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(68)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[26]) || std::isnan(f12)) && ctx.fpr[26] == f12));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    hot_regs.f12 = f12;
        goto L_08A97838;
    }
    goto L_08A9780C;
}
L_08A9780C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[24]) || std::isnan(f12)) && ctx.fpr[24] == f12));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    hot_regs.f12 = f12;
        goto L_08A97838;
    }
    goto L_08A97820;
}
L_08A97820:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(76)));
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f22) || std::isnan(f12)) && hot_regs.f22 == f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A97858;
      }
      goto L_08A97834;
    }
}
L_08A97834:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    goto L_08A97838;
L_08A97838:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g31 = (0x08A97850u);
    // nop
    goto L_08A96044;
}
L_08A97850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A978E0;
      }
      goto L_08A97858;
    }
L_08A97858:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(88), ctx.gpr[9]);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(92), static_cast<std::uint16_t>(ctx.gpr[30]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), hot_regs.g5);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A9798C;
      }
      goto L_08A97898;
    }
}
L_08A97898:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g4 = (0u | 1u);
    goto L_08A978A0;
L_08A978A0:
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.g4 = (ctx.gpr[16] << 7u);
      if (branch_taken) {
          goto L_08A978D4;
      }
      goto L_08A978A8;
    }
L_08A978A8:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (ctx.gpr[16] << 4u);
    g4 = (g4 - hot_regs.g5);
    g4 = (g4 + ctx.gpr[17]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A978D4;
      }
      goto L_08A978C0;
    }
}
L_08A978C0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (g16 + static_cast<std::uint32_t>(1));
    g16 = (g4 << 16u);
    g16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g16) >> 16u));
    { const bool branch_taken = 0u == 0u;
    g4 = (static_cast<std::int32_t>(g16) < 48 ? 1u : 0u);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A978A0;
      }
      goto L_08A978D4;
    }
}
L_08A978D4:
    hot_regs.g4 = (0u | 48u);
    { const bool branch_taken = ctx.gpr[16] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A97980;
      }
      goto L_08A978E0;
    }
L_08A978E0:
    hot_regs.g4 = (ctx.gpr[16] << 7u);
    hot_regs.g5 = (ctx.gpr[16] << 4u);
    hot_regs.g4 = (hot_regs.g4 - hot_regs.g5);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (hot_regs.g4 + ctx.gpr[17]);
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), hot_regs.g7);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint16_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[22]));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.g6 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), hot_regs.g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08A9796Cu);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 85u, 0x08A9882Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9796Cu) goto L_08A9796C;
    return;
L_08A9796C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97988;
      }
      goto L_08A97978;
    }
L_08A97978:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A9798C;
      }
      goto L_08A97980;
    }
L_08A97980:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A9798C;
      }
      goto L_08A97988;
    }
L_08A97988:
    hot_regs.g2 = (ctx.gpr[20] | 0u);
    goto L_08A9798C;
L_08A9798C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A979D4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(156), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), hot_regs.g31);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5068)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(11140))))));
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    ctx.gpr[17] = (hot_regs.g5 | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 34u, 0x08A98300u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A97A1C;
    }
L_08A97A1C:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    g4 = (g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    f12 = f12 - hot_regs.f13;
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    f14 = f14 - hot_regs.f15;
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f20 = f20 + f14;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    hot_regs.f20 = f20;
        goto L_08A97A80;
    }
    goto L_08A97A74;
}
}
L_08A97A74:
    hot_regs.g31 = (0x08A97A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A97A7Cu) goto L_08A97A7C;
    return;
L_08A97A7C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_08A97A80;
L_08A97A80:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A97AAC;
      }
      goto L_08A97A8C;
    }
}
L_08A97A8C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1960)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (16512u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f20 = hot_regs.f20 / f12;
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08A97AAC;
}
}
L_08A97AAC:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (0u | 0u);
    g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 3 ? 1u : 0u);
    if (hot_regs.g6 == 0u) {
    g5 = (static_cast<std::int32_t>(g5) < 5 ? 1u : 0u);
    hot_regs.g5 = g5;
        goto L_08A97AD4;
    }
    goto L_08A97AC0;
}
L_08A97AC0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::int32_t>(g5) < 2 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A97B34;
      }
      goto L_08A97ACC;
    }
}
L_08A97ACC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97B08;
      }
      goto L_08A97AD4;
    }
L_08A97AD4:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97B34;
      }
      goto L_08A97ADC;
    }
L_08A97ADC:
    hot_regs.g5 = (18082u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A97AF8;
      }
      goto L_08A97AF4;
    }
L_08A97AF4:
    hot_regs.g4 = (0u | 1u);
    goto L_08A97AF8;
L_08A97AF8:
    hot_regs.g5 = (17168u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97B58;
      }
      goto L_08A97B08;
    }
L_08A97B08:
    hot_regs.g5 = (18082u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A97B24;
      }
      goto L_08A97B20;
    }
L_08A97B20:
    hot_regs.g4 = (0u | 1u);
    goto L_08A97B24;
L_08A97B24:
    hot_regs.g5 = (17168u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97B58;
      }
      goto L_08A97B34;
    }
L_08A97B34:
    hot_regs.g5 = (17314u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A97B50;
      }
      goto L_08A97B4C;
    }
L_08A97B4C:
    hot_regs.g4 = (0u | 1u);
    goto L_08A97B50;
L_08A97B50:
    hot_regs.g5 = (16784u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    goto L_08A97B58;
L_08A97B58:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 34u, 0x08A98300u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A97B60;
    }
L_08A97B60:
{
    float f13 = hot_regs.f13;
    float f20 = hot_regs.f20;
    f20 = std::sqrt(f20);
    hot_regs.g4 = (16192u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((f20 < f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08A97B8C;
      }
      goto L_08A97B80;
    }
}
L_08A97B80:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(11140))))));
      if (branch_taken) {
          goto L_08A97BDC;
      }
      goto L_08A97B8C;
    }
L_08A97B8C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(11140))))));
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    g4 = (16192u << 16u);
    f14 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f14 = hot_regs.f20 - f14;
    g4 = (16000u << 16u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f14 / f12;
    g4 = (16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(g4);
    f12 = ctx.fpr[16] - f12;
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g19 = (g4 << 16u);
    g19 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g19) >> 16u));
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_08A97BDC;
}
}
L_08A97BDC:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
    float f22 = hot_regs.f22;
    float f24 = ctx.fpr[24];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g4 = (g20 << 2u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    f20 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(36)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    f20 = f20 - f12;
    f22 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(32)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    f22 = f22 - hot_regs.f13;
    f24 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(40)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(24)));
    f24 = f24 - hot_regs.f14;
    g5 = (16256u << 16u);
    f12 = std::bit_cast<float>(g5);
    g5 = (static_cast<std::int32_t>(g20) < 212 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (static_cast<std::int32_t>(g20) < 233 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[20] = g20;
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
    hot_regs.f22 = f22;
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_08A97D04;
      }
      goto L_08A97C2C;
    }
}
}
L_08A97C2C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::int32_t>(ctx.gpr[20]) < -963 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (static_cast<std::int32_t>(ctx.gpr[20]) < -949 ? 1u : 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A97CA0;
      }
      goto L_08A97C38;
    }
}
L_08A97C38:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::int32_t>(ctx.gpr[20]) < -994 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (static_cast<std::int32_t>(ctx.gpr[20]) < -973 ? 1u : 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A97C80;
      }
      goto L_08A97C44;
    }
}
L_08A97C44:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[20]) < -996 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97DB8;
      }
      goto L_08A97C50;
    }
L_08A97C50:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
    float f22 = hot_regs.f22;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16448u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    { const float fs = f22; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    g5 = (16307u << 16u);
    g5 = (g5 | 13107u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    { const float fs = f20; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    g5 = (16128u << 16u);
    hot_regs.f15 = std::bit_cast<float>(g5);
    { const float fs = f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_08A97DB8;
      }
      goto L_08A97C80;
    }
}
}
L_08A97C80:
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g5 = (ctx.gpr[20] + static_cast<std::uint32_t>(973));
      if (branch_taken) {
          goto L_08A97DB8;
      }
      goto L_08A97C88;
    }
L_08A97C88:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g5);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(9528)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A97CA0:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g5 = (0u | 205u);
      if (branch_taken) {
          goto L_08A97CDC;
      }
      goto L_08A97CA8;
    }
L_08A97CA8:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[20]) < -950 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97DB8;
      }
      goto L_08A97CB4;
    }
L_08A97CB4:
{
    float f20 = hot_regs.f20;
    float f22 = hot_regs.f22;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16230u << 16u);
    g5 = (g5 | 26214u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    { const float fs = f20; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    g5 = (16076u << 16u);
    g5 = (g5 | 52429u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    { const float fs = f22; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.f20 = f20;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_08A97DB8;
      }
      goto L_08A97CDC;
    }
}
}
L_08A97CDC:
    { const bool branch_taken = ctx.gpr[20] != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A97DB8;
      }
      goto L_08A97CE4;
    }
L_08A97CE4:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16320u << 16u);
    f12 = std::bit_cast<float>(g5);
    { const float fs = f20; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    g5 = (15605u << 16u);
    g5 = (g5 | 49807u);
    f12 = std::bit_cast<float>(g5);
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08A97DB8;
      }
      goto L_08A97D04;
    }
}
}
L_08A97D04:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[20]) < 262 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97D60;
      }
      goto L_08A97D0C;
    }
L_08A97D0C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::int32_t>(ctx.gpr[20]) < 231 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (static_cast<std::int32_t>(ctx.gpr[20]) < 229 ? 1u : 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A97CE4;
      }
      goto L_08A97D18;
    }
}
L_08A97D18:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[20]) < 230 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97D50;
      }
      goto L_08A97D20;
    }
L_08A97D20:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[20]) < 213 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97DB8;
      }
      goto L_08A97D2C;
    }
L_08A97D2C:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16281u << 16u);
    g5 = (g5 | 39322u);
    f12 = std::bit_cast<float>(g5);
    { const float fs = f20; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    g5 = (15692u << 16u);
    g5 = (g5 | 52429u);
    f12 = std::bit_cast<float>(g5);
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08A97DB8;
      }
      goto L_08A97D50;
    }
}
}
L_08A97D50:
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97D2C;
      }
      goto L_08A97D58;
    }
L_08A97D58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97DB8;
      }
      goto L_08A97D60;
    }
L_08A97D60:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g5 = (0u | 275u);
      if (branch_taken) {
          goto L_08A97D7C;
      }
      goto L_08A97D68;
    }
L_08A97D68:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[20]) < 261 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97C50;
      }
      goto L_08A97D74;
    }
L_08A97D74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97DB8;
      }
      goto L_08A97D7C;
    }
L_08A97D7C:
    { const bool branch_taken = ctx.gpr[20] == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A97C50;
      }
      goto L_08A97D84;
    }
L_08A97D84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97DB8;
      }
      goto L_08A97D8C;
    }
L_08A97D8C:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
    float f22 = hot_regs.f22;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16320u << 16u);
    f12 = std::bit_cast<float>(g5);
    { const float fs = f20; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    g5 = (16384u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    { const float fs = f22; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    g5 = (15948u << 16u);
    g5 = (g5 | 52429u);
    f12 = std::bit_cast<float>(g5);
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_08A97DB8;
      }
      goto L_08A97DB8;
    }
}
}
L_08A97DB8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (16128u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g5);
    { const float fs = hot_regs.f20; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(36)));
    f13 = f13 - f14;
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const float fs = f16; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f15 = f15 - f16;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f15));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f14 - f12;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    g4 = (ctx.gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_08A97F14;
      }
      goto L_08A97E08;
    }
}
}
L_08A97E08:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A97F08;
      }
      goto L_08A97E10;
    }
L_08A97E10:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A97EC0;
      }
      goto L_08A97E18;
    }
L_08A97E18:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A97ECC;
      }
      goto L_08A97E20;
    }
L_08A97E20:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A97EE0;
      }
      goto L_08A97E28;
    }
L_08A97E28:
    hot_regs.g4 = (16546u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 63875u);
    ctx.fpr[26] = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    hot_regs.g4 = (16256u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(432));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08A97E58u);
    hot_regs.g4 = (ctx.gpr[18] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A97E58u) goto L_08A97E58;
    return;
L_08A97E58:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(8)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) & 0x7FFFFFFFu);
    { const float fs = f12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = ctx.fpr[28] + f12;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 496u);
    hot_regs.g5 = (0u | 64u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A97EB0;
      }
      goto L_08A97E7C;
    }
}
}
L_08A97E7C:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) & 0x7FFFFFFFu);
    g4 = (16153u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((f13 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A97EB0;
      }
      goto L_08A97EA0;
    }
}
}
L_08A97EA0:
{
    float f13 = hot_regs.f13;
    hot_regs.g4 = (16512u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + f13;
    hot_regs.f13 = f13;
    goto L_08A97EB0;
}
L_08A97EB0:
{
    float f22 = hot_regs.f22;
    { const float fs = f22; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5056)));
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_08A97F14;
      }
      goto L_08A97EC0;
    }
}
L_08A97EC0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5060)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97F14;
      }
      goto L_08A97ECC;
    }
L_08A97ECC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5052)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(11140))))));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97F14;
      }
      goto L_08A97EE0;
    }
L_08A97EE0:
{
    float f20 = hot_regs.f20;
    float f22 = hot_regs.f22;
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5052)));
    g4 = (16320u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    { const float fs = f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    g4 = (16396u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    { const float fs = f22; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f20 = f20;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_08A97F14;
      }
      goto L_08A97F08;
    }
}
}
L_08A97F08:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5068)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97F14;
      }
      goto L_08A97F14;
    }
L_08A97F14:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g16 + static_cast<std::uint32_t>(16));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(f12));
    g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A97F54;
      }
      goto L_08A97F44;
    }
}
}
L_08A97F44:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 3u, 0x08A98020u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A97F4C;
    }
L_08A97F4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97F64;
      }
      goto L_08A97F54;
    }
L_08A97F54:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97FA4;
      }
      goto L_08A97F5C;
    }
L_08A97F5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 3u, 0x08A98020u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A97F64;
    }
L_08A97F64:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) & 0x7FFFFFFFu);
    g4 = (16153u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A97F9C;
      }
      goto L_08A97F88;
    }
}
}
L_08A97F88:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08A97F9C;
}
}
L_08A97F9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 20u, 0x08A98190u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A97FA4;
    }
L_08A97FA4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) & 0x7FFFFFFFu);
    g4 = (16145u << 16u);
    g4 = (g4 | 60293u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A97FDC;
      }
      goto L_08A97FC8;
    }
}
}
L_08A97FC8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08A97FDC;
}
}
L_08A97FDC:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) & 0x7FFFFFFFu);
    hot_regs.g4 = (16145u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 60293u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 2u, 0x08A98018u>(ctx, &aot_mem, &hot_regs); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 1u, 0x08A98004u>(ctx, &aot_mem, &hot_regs); return;
    }
}

void recomp_unit_0164(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0164_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_164(Runtime &runtime) {
    runtime.register_generated_unit(164u, 0x08A94000u, 16384u, &recomp_unit_0164, &recomp_unit_0164_entry);
    runtime.register_function(0x08A94000u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9400Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94018u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94020u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94024u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9402Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9404Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94058u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94060u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9406Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9407Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94084u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A940A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A940B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A940B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A940C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A940D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94100u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9410Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94118u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94128u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94130u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94138u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94144u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94158u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94168u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94178u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94190u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A941BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A941C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A941D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A941F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A941FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94214u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94240u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94270u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94294u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A942C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94308u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94348u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94388u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A943CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94414u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94424u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9444Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94454u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94474u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94480u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94494u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9450Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94520u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94538u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94540u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94554u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9455Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9459Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A945B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A945C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A945D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94610u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9462Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94644u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94678u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A946ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A946F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94704u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9472Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94734u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94754u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94760u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94774u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94784u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9478Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94794u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A947A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A947A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A947ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A947E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A947F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94810u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94818u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9482Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94834u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94874u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94888u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A948A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A948A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A948E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94904u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9491Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94950u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94984u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A949A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A949BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A949CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A949DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A949E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A949E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A949F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A6Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A94u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94AB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94AC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94AD0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94AE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94AECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94AF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94BA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94BB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94BC4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94BCCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94BD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94BE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94BF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CD0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CD8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CF4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94EA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94EB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94ED0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94EDCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94EE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94EF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94EF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94FB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94FC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94FE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94FF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95000u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95010u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95018u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95030u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95034u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95048u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9505Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95070u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9508Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95098u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95118u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9512Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95144u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9516Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95184u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9519Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95210u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95220u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95248u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95268u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95280u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A952A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A952BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A952D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A952F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95304u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95310u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95318u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95338u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95348u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95360u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95368u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95374u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9537Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95394u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95404u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9540Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95414u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95430u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95438u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95448u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95458u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9547Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95480u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A954A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A954B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A954C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A954C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A954E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A954F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95500u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95544u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9559Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95618u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95630u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95638u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95698u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A956C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A956D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A956F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A956FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95984u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95AA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95AB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95AC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95ACCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95BB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95BC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95BCCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D94u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95DCCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95EF4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FFCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96020u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96044u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9605Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96074u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9609Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96108u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9611Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9612Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9613Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9614Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9615Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9616Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9617Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9618Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9619Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96218u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96220u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9622Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9623Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96244u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96284u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9628Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9635Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96364u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96448u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96478u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96484u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9648Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96490u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9649Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96524u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96540u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96548u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A965B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A965BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96610u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96658u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96700u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96728u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A967D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A967DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A967ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96830u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96838u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96840u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96864u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96874u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A968A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A968D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A968E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A968F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96900u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96910u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96918u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9692Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96938u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96948u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96958u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96960u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96964u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9697Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A969C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A969D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A969DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96ACCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96ADCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AFCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96CF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D90u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DDCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96ED4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9703Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97050u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97064u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97078u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97118u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97120u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97134u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97168u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97184u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97190u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9719Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97250u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9725Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97278u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97280u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97308u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97318u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97334u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97418u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97510u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97518u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97604u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97618u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97638u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97704u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97708u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97720u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97750u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97770u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97774u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9779Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A977BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A977E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A977F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9780Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97820u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97834u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97838u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97850u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97858u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97898u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9796Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97978u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97980u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97988u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9798Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A979D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97ACCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97ADCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AF4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BDCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CDCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97ECCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FDCu, &recomp_unit_0164, "recomp_unit_0164");
}
} // namespace psprecomp
