#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0146[4088] = {
    1, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0,
    8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 20, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 38, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0,
    0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0,
    0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 0, 61, 0, 0, 0, 0,
    0, 0, 62, 0, 63, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 94, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100,
    0, 0, 0, 0, 101, 102, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0,
    0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 113, 0, 114, 115, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 130, 0, 0, 131, 0, 132, 133,
    0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 136, 0, 137, 138, 0, 0, 0, 0, 0, 139, 140, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 143,
    0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 151,
    0, 152, 0, 153, 0, 154, 0, 155, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0,
    0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 179, 0,
    0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0,
    186, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 192, 0, 193, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 197, 0, 0, 198, 199, 0, 0, 0, 200, 0, 0, 0,
    0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 205, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208,
    0, 209, 0, 0, 210, 0, 211, 0, 212, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 217, 0, 218, 0, 219, 0,
    0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 224, 0, 0, 225, 0, 226, 0, 227, 0, 0, 228, 0, 229, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 242, 0, 243, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255,
    0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258,
    0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 261, 0, 262, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 264, 0, 0, 265, 0, 266, 0, 267, 0, 268, 0, 269, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 285, 0,
    0, 286, 0, 287, 0, 288, 0, 289, 0, 290, 291, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    299, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 309, 0, 310, 0, 311, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0,
    0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0,
    0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 326, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330,
    0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0,
    0, 0, 335, 0, 336, 0, 0, 0, 0, 337, 0, 338, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0,
    0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 350, 351, 0, 0, 352, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 358, 0, 359,
    0, 0, 0, 0, 360, 0, 361, 362, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 365, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0,
    0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 371, 0, 372, 0, 0, 373, 0, 0, 374, 375, 0, 0, 0, 0, 376, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 387, 0, 388, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 391, 0, 392, 0,
    0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 404, 0, 0,
    0, 0, 405, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 410, 0, 411, 0, 0, 0, 412,
    0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 418, 0, 419, 0, 0, 0, 420,
    0, 421, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0,
    0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 0, 432, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0,
    0, 440, 0, 0, 0, 441, 0, 0, 0, 442, 0, 443, 0, 444, 0, 445, 0, 446, 0, 447, 448, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0,
    451, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 0, 0,
    458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0,
    462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    466, 0, 0, 0, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 477, 0, 478, 0, 0, 479, 0, 480, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0,
    490, 0, 491, 0, 0, 0, 492, 0, 493, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 495, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 498, 0, 499, 0, 0, 0, 500, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 504, 0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    521, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 524, 0, 0, 0, 0, 525, 0, 526, 0, 527, 0,
    0, 0, 0, 0, 528, 0, 0, 529, 0, 530, 0, 0, 531, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 533, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0,
    536, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 542, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 546, 0,
    547, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 549, 0, 0, 550, 0, 551, 0, 0, 0, 552, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 554, 0, 555, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 558, 559, 0, 560, 0, 0, 561, 0, 562, 0, 0, 563, 0, 564,
    0, 565, 0, 566, 0, 0, 567, 0, 568, 569, 0, 0, 570, 0, 571, 0, 0, 572, 0, 573, 574, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0, 0,
    577, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0,
    583, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 587,
};
void recomp_unit_0146_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A4C000u;
        entry_id = (entry_delta < 16352u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0146[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A4C000;
    case 2u: goto L_08A4C008;
    case 3u: goto L_08A4C010;
    case 4u: goto L_08A4C024;
    case 5u: goto L_08A4C030;
    case 6u: goto L_08A4C070;
    case 7u: goto L_08A4C0EC;
    case 8u: goto L_08A4C100;
    case 9u: goto L_08A4C10C;
    case 10u: goto L_08A4C128;
    case 11u: goto L_08A4C134;
    case 12u: goto L_08A4C13C;
    case 13u: goto L_08A4C158;
    case 14u: goto L_08A4C170;
    case 15u: goto L_08A4C1A8;
    case 16u: goto L_08A4C250;
    case 17u: goto L_08A4C260;
    case 18u: goto L_08A4C29C;
    case 19u: goto L_08A4C2A4;
    case 20u: goto L_08A4C2AC;
    case 21u: goto L_08A4C2B8;
    case 22u: goto L_08A4C2C0;
    case 23u: goto L_08A4C304;
    case 24u: goto L_08A4C3D4;
    case 25u: goto L_08A4C41C;
    case 26u: goto L_08A4C434;
    case 27u: goto L_08A4C494;
    case 28u: goto L_08A4C49C;
    case 29u: goto L_08A4C4B0;
    case 30u: goto L_08A4C4C0;
    case 31u: goto L_08A4C4C8;
    case 32u: goto L_08A4C4F8;
    case 33u: goto L_08A4C508;
    case 34u: goto L_08A4C510;
    case 35u: goto L_08A4C520;
    case 36u: goto L_08A4C568;
    case 37u: goto L_08A4C570;
    case 38u: goto L_08A4C578;
    case 39u: goto L_08A4C580;
    case 40u: goto L_08A4C5EC;
    case 41u: goto L_08A4C5F4;
    case 42u: goto L_08A4C60C;
    case 43u: goto L_08A4C630;
    case 44u: goto L_08A4C63C;
    case 45u: goto L_08A4C648;
    case 46u: goto L_08A4C650;
    case 47u: goto L_08A4C678;
    case 48u: goto L_08A4C68C;
    case 49u: goto L_08A4C69C;
    case 50u: goto L_08A4C6C4;
    case 51u: goto L_08A4C6F0;
    case 52u: goto L_08A4C714;
    case 53u: goto L_08A4C7CC;
    case 54u: goto L_08A4C7D4;
    case 55u: goto L_08A4C814;
    case 56u: goto L_08A4C81C;
    case 57u: goto L_08A4C82C;
    case 58u: goto L_08A4C854;
    case 59u: goto L_08A4C85C;
    case 60u: goto L_08A4C864;
    case 61u: goto L_08A4C86C;
    case 62u: goto L_08A4C888;
    case 63u: goto L_08A4C890;
    case 64u: goto L_08A4C898;
    case 65u: goto L_08A4C8A8;
    case 66u: goto L_08A4C8B8;
    case 67u: goto L_08A4C94C;
    case 68u: goto L_08A4C964;
    case 69u: goto L_08A4C9CC;
    case 70u: goto L_08A4C9F8;
    case 71u: goto L_08A4CA04;
    case 72u: goto L_08A4CA20;
    case 73u: goto L_08A4CA38;
    case 74u: goto L_08A4CA54;
    case 75u: goto L_08A4CA74;
    case 76u: goto L_08A4CAA4;
    case 77u: goto L_08A4CAAC;
    case 78u: goto L_08A4CAB4;
    case 79u: goto L_08A4CABC;
    case 80u: goto L_08A4CAC4;
    case 81u: goto L_08A4CADC;
    case 82u: goto L_08A4CB14;
    case 83u: goto L_08A4CB34;
    case 84u: goto L_08A4CB48;
    case 85u: goto L_08A4CB50;
    case 86u: goto L_08A4CB5C;
    case 87u: goto L_08A4CBA8;
    case 88u: goto L_08A4CBB8;
    case 89u: goto L_08A4CBE0;
    case 90u: goto L_08A4CBEC;
    case 91u: goto L_08A4CC28;
    case 92u: goto L_08A4CC40;
    case 93u: goto L_08A4CC50;
    case 94u: goto L_08A4CC54;
    case 95u: goto L_08A4CC64;
    case 96u: goto L_08A4CC6C;
    case 97u: goto L_08A4CCBC;
    case 98u: goto L_08A4CCC4;
    case 99u: goto L_08A4CCF4;
    case 100u: goto L_08A4CCFC;
    case 101u: goto L_08A4CD10;
    case 102u: goto L_08A4CD14;
    case 103u: goto L_08A4CD20;
    case 104u: goto L_08A4CD28;
    case 105u: goto L_08A4CD40;
    case 106u: goto L_08A4CD64;
    case 107u: goto L_08A4CD74;
    case 108u: goto L_08A4CD8C;
    case 109u: goto L_08A4CD94;
    case 110u: goto L_08A4CDAC;
    case 111u: goto L_08A4CDB8;
    case 112u: goto L_08A4CDC8;
    case 113u: goto L_08A4CDD0;
    case 114u: goto L_08A4CDD8;
    case 115u: goto L_08A4CDDC;
    case 116u: goto L_08A4CE44;
    case 117u: goto L_08A4CE4C;
    case 118u: goto L_08A4CE5C;
    case 119u: goto L_08A4CE9C;
    case 120u: goto L_08A4CEB0;
    case 121u: goto L_08A4CEB8;
    case 122u: goto L_08A4CEC4;
    case 123u: goto L_08A4CF28;
    case 124u: goto L_08A4CF30;
    case 125u: goto L_08A4CF40;
    case 126u: goto L_08A4CFB0;
    case 127u: goto L_08A4CFC4;
    case 128u: goto L_08A4CFD0;
    case 129u: goto L_08A4CFDC;
    case 130u: goto L_08A4CFE4;
    case 131u: goto L_08A4CFF0;
    case 132u: goto L_08A4CFF8;
    case 133u: goto L_08A4CFFC;
    case 134u: goto L_08A4D014;
    case 135u: goto L_08A4D01C;
    case 136u: goto L_08A4D028;
    case 137u: goto L_08A4D030;
    case 138u: goto L_08A4D034;
    case 139u: goto L_08A4D04C;
    case 140u: goto L_08A4D050;
    case 141u: goto L_08A4D058;
    case 142u: goto L_08A4D064;
    case 143u: goto L_08A4D07C;
    case 144u: goto L_08A4D088;
    case 145u: goto L_08A4D0A4;
    case 146u: goto L_08A4D0B0;
    case 147u: goto L_08A4D0C0;
    case 148u: goto L_08A4D0D0;
    case 149u: goto L_08A4D0D8;
    case 150u: goto L_08A4D0F4;
    case 151u: goto L_08A4D0FC;
    case 152u: goto L_08A4D104;
    case 153u: goto L_08A4D10C;
    case 154u: goto L_08A4D114;
    case 155u: goto L_08A4D11C;
    case 156u: goto L_08A4D12C;
    case 157u: goto L_08A4D134;
    case 158u: goto L_08A4D14C;
    case 159u: goto L_08A4D178;
    case 160u: goto L_08A4D188;
    case 161u: goto L_08A4D204;
    case 162u: goto L_08A4D218;
    case 163u: goto L_08A4D29C;
    case 164u: goto L_08A4D2A4;
    case 165u: goto L_08A4D2D0;
    case 166u: goto L_08A4D314;
    case 167u: goto L_08A4D328;
    case 168u: goto L_08A4D338;
    case 169u: goto L_08A4D348;
    case 170u: goto L_08A4D350;
    case 171u: goto L_08A4D358;
    case 172u: goto L_08A4D380;
    case 173u: goto L_08A4D390;
    case 174u: goto L_08A4D3A0;
    case 175u: goto L_08A4D3A8;
    case 176u: goto L_08A4D3B0;
    case 177u: goto L_08A4D3DC;
    case 178u: goto L_08A4D3F0;
    case 179u: goto L_08A4D3F8;
    case 180u: goto L_08A4D404;
    case 181u: goto L_08A4D424;
    case 182u: goto L_08A4D438;
    case 183u: goto L_08A4D458;
    case 184u: goto L_08A4D468;
    case 185u: goto L_08A4D478;
    case 186u: goto L_08A4D480;
    case 187u: goto L_08A4D488;
    case 188u: goto L_08A4D4A0;
    case 189u: goto L_08A4D4C8;
    case 190u: goto L_08A4D4D8;
    case 191u: goto L_08A4D4E8;
    case 192u: goto L_08A4D4F0;
    case 193u: goto L_08A4D4F8;
    case 194u: goto L_08A4D524;
    case 195u: goto L_08A4D538;
    case 196u: goto L_08A4D540;
    case 197u: goto L_08A4D550;
    case 198u: goto L_08A4D55C;
    case 199u: goto L_08A4D560;
    case 200u: goto L_08A4D570;
    case 201u: goto L_08A4D584;
    case 202u: goto L_08A4D590;
    case 203u: goto L_08A4D5B0;
    case 204u: goto L_08A4D5BC;
    case 205u: goto L_08A4D5C4;
    case 206u: goto L_08A4D5CC;
    case 207u: goto L_08A4D5D4;
    case 208u: goto L_08A4D5FC;
    case 209u: goto L_08A4D604;
    case 210u: goto L_08A4D610;
    case 211u: goto L_08A4D618;
    case 212u: goto L_08A4D620;
    case 213u: goto L_08A4D62C;
    case 214u: goto L_08A4D634;
    case 215u: goto L_08A4D654;
    case 216u: goto L_08A4D65C;
    case 217u: goto L_08A4D668;
    case 218u: goto L_08A4D670;
    case 219u: goto L_08A4D678;
    case 220u: goto L_08A4D684;
    case 221u: goto L_08A4D68C;
    case 222u: goto L_08A4D6A8;
    case 223u: goto L_08A4D6B4;
    case 224u: goto L_08A4D6BC;
    case 225u: goto L_08A4D6C8;
    case 226u: goto L_08A4D6D0;
    case 227u: goto L_08A4D6D8;
    case 228u: goto L_08A4D6E4;
    case 229u: goto L_08A4D6EC;
    case 230u: goto L_08A4D714;
    case 231u: goto L_08A4D71C;
    case 232u: goto L_08A4D744;
    case 233u: goto L_08A4D74C;
    case 234u: goto L_08A4D788;
    case 235u: goto L_08A4D798;
    case 236u: goto L_08A4D7A8;
    case 237u: goto L_08A4D7C8;
    case 238u: goto L_08A4D7DC;
    case 239u: goto L_08A4D824;
    case 240u: goto L_08A4D8A4;
    case 241u: goto L_08A4D8B4;
    case 242u: goto L_08A4D8BC;
    case 243u: goto L_08A4D8C4;
    case 244u: goto L_08A4D8C8;
    case 245u: goto L_08A4D93C;
    case 246u: goto L_08A4D944;
    case 247u: goto L_08A4D978;
    case 248u: goto L_08A4D9B8;
    case 249u: goto L_08A4DA14;
    case 250u: goto L_08A4DA64;
    case 251u: goto L_08A4DAB4;
    case 252u: goto L_08A4DB00;
    case 253u: goto L_08A4DB18;
    case 254u: goto L_08A4DB60;
    case 255u: goto L_08A4DB7C;
    case 256u: goto L_08A4DB90;
    case 257u: goto L_08A4DBAC;
    case 258u: goto L_08A4DBFC;
    case 259u: goto L_08A4DC14;
    case 260u: goto L_08A4DC24;
    case 261u: goto L_08A4DC2C;
    case 262u: goto L_08A4DC34;
    case 263u: goto L_08A4DC38;
    case 264u: goto L_08A4DC8C;
    case 265u: goto L_08A4DC98;
    case 266u: goto L_08A4DCA0;
    case 267u: goto L_08A4DCA8;
    case 268u: goto L_08A4DCB0;
    case 269u: goto L_08A4DCB8;
    case 270u: goto L_08A4DCBC;
    case 271u: goto L_08A4DCD8;
    case 272u: goto L_08A4DCE4;
    case 273u: goto L_08A4DD54;
    case 274u: goto L_08A4DDA0;
    case 275u: goto L_08A4DDA8;
    case 276u: goto L_08A4DDB0;
    case 277u: goto L_08A4DDB8;
    case 278u: goto L_08A4DDC0;
    case 279u: goto L_08A4DDCC;
    case 280u: goto L_08A4DDD8;
    case 281u: goto L_08A4DDF8;
    case 282u: goto L_08A4DE30;
    case 283u: goto L_08A4DE68;
    case 284u: goto L_08A4DE74;
    case 285u: goto L_08A4DE78;
    case 286u: goto L_08A4DE84;
    case 287u: goto L_08A4DE8C;
    case 288u: goto L_08A4DE94;
    case 289u: goto L_08A4DE9C;
    case 290u: goto L_08A4DEA4;
    case 291u: goto L_08A4DEA8;
    case 292u: goto L_08A4DEB0;
    case 293u: goto L_08A4DEE0;
    case 294u: goto L_08A4DF10;
    case 295u: goto L_08A4DF40;
    case 296u: goto L_08A4DF70;
    case 297u: goto L_08A4DFA0;
    case 298u: goto L_08A4DFD0;
    case 299u: goto L_08A4E000;
    case 300u: goto L_08A4E004;
    case 301u: goto L_08A4E018;
    case 302u: goto L_08A4E070;
    case 303u: goto L_08A4E078;
    case 304u: goto L_08A4E0C8;
    case 305u: goto L_08A4E140;
    case 306u: goto L_08A4E150;
    case 307u: goto L_08A4E1B4;
    case 308u: goto L_08A4E1BC;
    case 309u: goto L_08A4E1C4;
    case 310u: goto L_08A4E1CC;
    case 311u: goto L_08A4E1D4;
    case 312u: goto L_08A4E1E0;
    case 313u: goto L_08A4E1EC;
    case 314u: goto L_08A4E20C;
    case 315u: goto L_08A4E218;
    case 316u: goto L_08A4E22C;
    case 317u: goto L_08A4E248;
    case 318u: goto L_08A4E260;
    case 319u: goto L_08A4E268;
    case 320u: goto L_08A4E284;
    case 321u: goto L_08A4E290;
    case 322u: goto L_08A4E2A8;
    case 323u: goto L_08A4E2B4;
    case 324u: goto L_08A4E35C;
    case 325u: goto L_08A4E374;
    case 326u: goto L_08A4E378;
    case 327u: goto L_08A4E3A0;
    case 328u: goto L_08A4E418;
    case 329u: goto L_08A4E454;
    case 330u: goto L_08A4E47C;
    case 331u: goto L_08A4E484;
    case 332u: goto L_08A4E48C;
    case 333u: goto L_08A4E4F0;
    case 334u: goto L_08A4E4F8;
    case 335u: goto L_08A4E508;
    case 336u: goto L_08A4E510;
    case 337u: goto L_08A4E524;
    case 338u: goto L_08A4E52C;
    case 339u: goto L_08A4E530;
    case 340u: goto L_08A4E53C;
    case 341u: goto L_08A4E578;
    case 342u: goto L_08A4E5A4;
    case 343u: goto L_08A4E5AC;
    case 344u: goto L_08A4E5D0;
    case 345u: goto L_08A4E5F4;
    case 346u: goto L_08A4E618;
    case 347u: goto L_08A4E63C;
    case 348u: goto L_08A4E6A4;
    case 349u: goto L_08A4E6AC;
    case 350u: goto L_08A4E6B8;
    case 351u: goto L_08A4E6BC;
    case 352u: goto L_08A4E6C8;
    case 353u: goto L_08A4E6CC;
    case 354u: goto L_08A4E6E0;
    case 355u: goto L_08A4E6F4;
    case 356u: goto L_08A4E75C;
    case 357u: goto L_08A4E764;
    case 358u: goto L_08A4E774;
    case 359u: goto L_08A4E77C;
    case 360u: goto L_08A4E790;
    case 361u: goto L_08A4E798;
    case 362u: goto L_08A4E79C;
    case 363u: goto L_08A4E7A8;
    case 364u: goto L_08A4E7E4;
    case 365u: goto L_08A4E810;
    case 366u: goto L_08A4E818;
    case 367u: goto L_08A4E83C;
    case 368u: goto L_08A4E860;
    case 369u: goto L_08A4E884;
    case 370u: goto L_08A4E8A8;
    case 371u: goto L_08A4E910;
    case 372u: goto L_08A4E918;
    case 373u: goto L_08A4E924;
    case 374u: goto L_08A4E930;
    case 375u: goto L_08A4E934;
    case 376u: goto L_08A4E948;
    case 377u: goto L_08A4E94C;
    case 378u: goto L_08A4E990;
    case 379u: goto L_08A4EA08;
    case 380u: goto L_08A4EA38;
    case 381u: goto L_08A4EA68;
    case 382u: goto L_08A4EA98;
    case 383u: goto L_08A4EAC8;
    case 384u: goto L_08A4EAF8;
    case 385u: goto L_08A4EB28;
    case 386u: goto L_08A4EB58;
    case 387u: goto L_08A4EB5C;
    case 388u: goto L_08A4EB64;
    case 389u: goto L_08A4EC54;
    case 390u: goto L_08A4EC68;
    case 391u: goto L_08A4EC70;
    case 392u: goto L_08A4EC78;
    case 393u: goto L_08A4EC98;
    case 394u: goto L_08A4ECC4;
    case 395u: goto L_08A4ED24;
    case 396u: goto L_08A4ED2C;
    case 397u: goto L_08A4ED60;
    case 398u: goto L_08A4ED88;
    case 399u: goto L_08A4ED94;
    case 400u: goto L_08A4EDB4;
    case 401u: goto L_08A4EDC8;
    case 402u: goto L_08A4EDDC;
    case 403u: goto L_08A4EDEC;
    case 404u: goto L_08A4EDF4;
    case 405u: goto L_08A4EE08;
    case 406u: goto L_08A4EE10;
    case 407u: goto L_08A4EE18;
    case 408u: goto L_08A4EE4C;
    case 409u: goto L_08A4EE5C;
    case 410u: goto L_08A4EE64;
    case 411u: goto L_08A4EE6C;
    case 412u: goto L_08A4EE7C;
    case 413u: goto L_08A4EE84;
    case 414u: goto L_08A4EE9C;
    case 415u: goto L_08A4EEB0;
    case 416u: goto L_08A4EEC4;
    case 417u: goto L_08A4EED8;
    case 418u: goto L_08A4EEE4;
    case 419u: goto L_08A4EEEC;
    case 420u: goto L_08A4EEFC;
    case 421u: goto L_08A4EF04;
    case 422u: goto L_08A4EF10;
    case 423u: goto L_08A4EF20;
    case 424u: goto L_08A4EF48;
    case 425u: goto L_08A4EF90;
    case 426u: goto L_08A4EFDC;
    case 427u: goto L_08A4EFF0;
    case 428u: goto L_08A4F004;
    case 429u: goto L_08A4F014;
    case 430u: goto L_08A4F030;
    case 431u: goto L_08A4F038;
    case 432u: goto L_08A4F044;
    case 433u: goto L_08A4F04C;
    case 434u: goto L_08A4F060;
    case 435u: goto L_08A4F0B8;
    case 436u: goto L_08A4F0CC;
    case 437u: goto L_08A4F0D0;
    case 438u: goto L_08A4F110;
    case 439u: goto L_08A4F16C;
    case 440u: goto L_08A4F184;
    case 441u: goto L_08A4F194;
    case 442u: goto L_08A4F1A4;
    case 443u: goto L_08A4F1AC;
    case 444u: goto L_08A4F1B4;
    case 445u: goto L_08A4F1BC;
    case 446u: goto L_08A4F1C4;
    case 447u: goto L_08A4F1CC;
    case 448u: goto L_08A4F1D0;
    case 449u: goto L_08A4F1E0;
    case 450u: goto L_08A4F1F0;
    case 451u: goto L_08A4F200;
    case 452u: goto L_08A4F210;
    case 453u: goto L_08A4F21C;
    case 454u: goto L_08A4F22C;
    case 455u: goto L_08A4F244;
    case 456u: goto L_08A4F25C;
    case 457u: goto L_08A4F268;
    case 458u: goto L_08A4F280;
    case 459u: goto L_08A4F2A8;
    case 460u: goto L_08A4F2B0;
    case 461u: goto L_08A4F2F8;
    case 462u: goto L_08A4F300;
    case 463u: goto L_08A4F318;
    case 464u: goto L_08A4F328;
    case 465u: goto L_08A4F33C;
    case 466u: goto L_08A4F380;
    case 467u: goto L_08A4F398;
    case 468u: goto L_08A4F3A0;
    case 469u: goto L_08A4F3D8;
    case 470u: goto L_08A4F3F0;
    case 471u: goto L_08A4F41C;
    case 472u: goto L_08A4F494;
    case 473u: goto L_08A4F4A8;
    case 474u: goto L_08A4F4B0;
    case 475u: goto L_08A4F4C0;
    case 476u: goto L_08A4F4C8;
    case 477u: goto L_08A4F4DC;
    case 478u: goto L_08A4F4E4;
    case 479u: goto L_08A4F4F0;
    case 480u: goto L_08A4F4F8;
    case 481u: goto L_08A4F554;
    case 482u: goto L_08A4F55C;
    case 483u: goto L_08A4F594;
    case 484u: goto L_08A4F59C;
    case 485u: goto L_08A4F5AC;
    case 486u: goto L_08A4F5B4;
    case 487u: goto L_08A4F5CC;
    case 488u: goto L_08A4F5F8;
    case 489u: goto L_08A4F670;
    case 490u: goto L_08A4F680;
    case 491u: goto L_08A4F688;
    case 492u: goto L_08A4F698;
    case 493u: goto L_08A4F6A0;
    case 494u: goto L_08A4F6AC;
    case 495u: goto L_08A4F704;
    case 496u: goto L_08A4F70C;
    case 497u: goto L_08A4F744;
    case 498u: goto L_08A4F788;
    case 499u: goto L_08A4F790;
    case 500u: goto L_08A4F7A0;
    case 501u: goto L_08A4F7A8;
    case 502u: goto L_08A4F820;
    case 503u: goto L_08A4F830;
    case 504u: goto L_08A4F838;
    case 505u: goto L_08A4F848;
    case 506u: goto L_08A4F850;
    case 507u: goto L_08A4F8AC;
    case 508u: goto L_08A4F8B4;
    case 509u: goto L_08A4F8D8;
    case 510u: goto L_08A4F930;
    case 511u: goto L_08A4F93C;
    case 512u: goto L_08A4F954;
    case 513u: goto L_08A4F960;
    case 514u: goto L_08A4F97C;
    case 515u: goto L_08A4F9A4;
    case 516u: goto L_08A4F9AC;
    case 517u: goto L_08A4F9F4;
    case 518u: goto L_08A4FA34;
    case 519u: goto L_08A4FA44;
    case 520u: goto L_08A4FA4C;
    case 521u: goto L_08A4FA80;
    case 522u: goto L_08A4FA9C;
    case 523u: goto L_08A4FACC;
    case 524u: goto L_08A4FAD4;
    case 525u: goto L_08A4FAE8;
    case 526u: goto L_08A4FAF0;
    case 527u: goto L_08A4FAF8;
    case 528u: goto L_08A4FB10;
    case 529u: goto L_08A4FB1C;
    case 530u: goto L_08A4FB24;
    case 531u: goto L_08A4FB30;
    case 532u: goto L_08A4FB38;
    case 533u: goto L_08A4FB94;
    case 534u: goto L_08A4FB9C;
    case 535u: goto L_08A4FBF8;
    case 536u: goto L_08A4FC00;
    case 537u: goto L_08A4FC18;
    case 538u: goto L_08A4FC68;
    case 539u: goto L_08A4FCB0;
    case 540u: goto L_08A4FCC8;
    case 541u: goto L_08A4FCD8;
    case 542u: goto L_08A4FCE4;
    case 543u: goto L_08A4FD2C;
    case 544u: goto L_08A4FD4C;
    case 545u: goto L_08A4FD68;
    case 546u: goto L_08A4FD78;
    case 547u: goto L_08A4FD80;
    case 548u: goto L_08A4FDA0;
    case 549u: goto L_08A4FDAC;
    case 550u: goto L_08A4FDB8;
    case 551u: goto L_08A4FDC0;
    case 552u: goto L_08A4FDD0;
    case 553u: goto L_08A4FDD8;
    case 554u: goto L_08A4FE14;
    case 555u: goto L_08A4FE1C;
    case 556u: goto L_08A4FE28;
    case 557u: goto L_08A4FE38;
    case 558u: goto L_08A4FE48;
    case 559u: goto L_08A4FE4C;
    case 560u: goto L_08A4FE54;
    case 561u: goto L_08A4FE60;
    case 562u: goto L_08A4FE68;
    case 563u: goto L_08A4FE74;
    case 564u: goto L_08A4FE7C;
    case 565u: goto L_08A4FE84;
    case 566u: goto L_08A4FE8C;
    case 567u: goto L_08A4FE98;
    case 568u: goto L_08A4FEA0;
    case 569u: goto L_08A4FEA4;
    case 570u: goto L_08A4FEB0;
    case 571u: goto L_08A4FEB8;
    case 572u: goto L_08A4FEC4;
    case 573u: goto L_08A4FECC;
    case 574u: goto L_08A4FED0;
    case 575u: goto L_08A4FEE0;
    case 576u: goto L_08A4FEF4;
    case 577u: goto L_08A4FF00;
    case 578u: goto L_08A4FF08;
    case 579u: goto L_08A4FF20;
    case 580u: goto L_08A4FF4C;
    case 581u: goto L_08A4FF6C;
    case 582u: goto L_08A4FF74;
    case 583u: goto L_08A4FF80;
    case 584u: goto L_08A4FF90;
    case 585u: goto L_08A4FFAC;
    case 586u: goto L_08A4FFC4;
    case 587u: goto L_08A4FFDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A4C000:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A4C024;
      }
      goto L_08A4C008;
    }
L_08A4C008:
    hot_regs.g31 = (0x08A4C010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4C010u) goto L_08A4C010;
    return;
L_08A4C010:
    hot_regs.g4 = (hot_regs.g2 + ctx.gpr[18]);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1784)));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A4C024u);
    hot_regs.g6 = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4C024u) goto L_08A4C024;
    return;
L_08A4C024:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 715u, 0x08A4BF94u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A4C030;
    }
L_08A4C030:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[23] | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(264)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(268)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(276)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(280)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(284)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(288)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(292)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(296)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(300)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(304)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(308)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A4C070:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-1472));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1404), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1408), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1412), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1416), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1420), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1424), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1428), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1432), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1436), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1440), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1444), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1448), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1452), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1456), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1460), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1464), hot_regs.g31);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[20] = (hot_regs.g6 | 0u);
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    ctx.gpr[21] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g7 & 255u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(1384), static_cast<std::uint8_t>(hot_regs.g4));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    hot_regs.f22 = std::bit_cast<float>(0u);
    hot_regs.g31 = (0x08A4C0ECu);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4C0ECu) goto L_08A4C0EC;
    return;
L_08A4C0EC:
    ctx.gpr[22] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 22 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1392), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A4C128;
      }
      goto L_08A4C100;
    }
L_08A4C100:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    if (g4 != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1388), ctx.gpr[17]);
    hot_regs.g4 = g4;
        goto L_08A4C170;
    }
    goto L_08A4C10C;
}
L_08A4C10C:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[30] = (0u | 3u);
    ctx.gpr[17] = (0u | 1u);
    g4 = (15904u << 16u);
    g4 = (g4 | 55676u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1388), ctx.gpr[17]);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4C170;
      }
      goto L_08A4C128;
    }
}
L_08A4C128:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 23 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    g4 = (static_cast<std::int32_t>(g4) < 24 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4C158;
      }
      goto L_08A4C134;
    }
}
L_08A4C134:
    if (hot_regs.g4 == 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1388), ctx.gpr[17]);
        goto L_08A4C170;
    }
    goto L_08A4C13C;
L_08A4C13C:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[30] = (0u | 5u);
    ctx.gpr[17] = (0u | 2u);
    g4 = (16032u << 16u);
    g4 = (g4 | 55676u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1388), ctx.gpr[17]);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4C170;
      }
      goto L_08A4C158;
    }
}
L_08A4C158:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[30] = (0u | 3u);
    ctx.gpr[17] = (0u | 1u);
    g4 = (15830u << 16u);
    g4 = (g4 | 30544u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1388), ctx.gpr[17]);
    hot_regs.g4 = g4;
    goto L_08A4C170;
}
L_08A4C170:
{
    float f12 = hot_regs.f12;
    float f22 = hot_regs.f22;
    float f24 = ctx.fpr[24];
{
    std::uint32_t g4 = hot_regs.g4;
    f24 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f22));
    g4 = (16128u << 16u);
    f22 = std::bit_cast<float>(g4);
    { const float fs = f24; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    g4 = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f24 = f24 / f12;
    g4 = (0u | 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(1385), static_cast<std::uint8_t>(g4));
    ctx.gpr[23] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f22 = f22;
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_08A4D7DC;
      }
      goto L_08A4C1A8;
    }
}
}
L_08A4C1A8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (0u | 1u);
    f12 = std::bit_cast<float>(ctx.gpr[23]);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    { const float fs = f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f22 - f12;
    g4 = (17204u << 16u);
    f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (16457u << 16u);
    g4 = (g4 | 4059u);
    f14 = std::bit_cast<float>(g4);
    f12 = f12 / f14;
    f12 = hot_regs.f20 + f12;
    g4 = (15502u << 16u);
    g4 = (g4 | 64012u);
    f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
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
    f13 = std::bit_cast<float>(g4);
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) ^ 0x80000000u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(f13));
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
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<1u>());
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(f14));
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f14;
    hot_regs.f15 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f12 <= hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1388)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A4C260;
      }
      goto L_08A4C250;
    }
}
}
L_08A4C250:
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08A4C29C;
      }
      goto L_08A4C260;
    }
L_08A4C260:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (std::bit_cast<std::uint32_t>(f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<0u>());
    f13 = std::bit_cast<float>(g4);
    hot_regs.f14 = std::bit_cast<float>(g4);
    g4 = (16256u << 16u);
    f12 = std::bit_cast<float>(g4);
    { const float fs = hot_regs.f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08A4C29C;
}
}
L_08A4C29C:
    hot_regs.g31 = (0x08A4C2A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4C2A4u) goto L_08A4C2A4;
    return;
L_08A4C2A4:
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g2;
    hot_regs.g4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A4C434;
      }
      goto L_08A4C2AC;
    }
L_08A4C2AC:
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g31 = (0x08A4C2B8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 124u, 0x08999134u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4C2B8u) goto L_08A4C2B8;
    return;
L_08A4C2B8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C434;
      }
      goto L_08A4C2C0;
    }
L_08A4C2C0:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1380), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1388), ctx.gpr[17]);
    hot_regs.g4 = (2236u << 16u);
    ctx.gpr[16] = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1396), ctx.gpr[20]);
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    hot_regs.g31 = (0x08A4C304u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 25u, 0x08A1C148u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4C304u) goto L_08A4C304;
    return;
L_08A4C304:
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 1u));
    hot_regs.g5 = (hot_regs.g5 >> 31u);
    hot_regs.g5 = (ctx.gpr[30] + hot_regs.g5);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 1u));
    hot_regs.g5 = (hot_regs.g5 << 16u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 16u));
    hot_regs.g5 = (ctx.gpr[23] - hot_regs.g5);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g5 = (hot_regs.g5 << 5u);
    hot_regs.g6 = (0u - hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 << 2u);
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 << 2u);
    hot_regs.g5 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    hot_regs.g6 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(208));
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g7);
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(224));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
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
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A4C3D4u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4C3D4u) goto L_08A4C3D4;
    return;
L_08A4C3D4:
    hot_regs.g2 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8072), static_cast<std::uint8_t>(hot_regs.g2));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8423), static_cast<std::uint8_t>(hot_regs.g2));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    hot_regs.g31 = (0x08A4C41Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 354u, 0x08A41D28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4C41Cu) goto L_08A4C41C;
    return;
L_08A4C41C:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8072), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8423), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1388)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1380)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1396)));
      if (branch_taken) {
          goto L_08A4C81C;
      }
      goto L_08A4C434;
    }
}
L_08A4C434:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(f13));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(f12));
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(0)));
    f12 = f12 + hot_regs.f15;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(f12));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(4)));
    f13 = f13 + ctx.fpr[16];
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(f13));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A4C568;
      }
      goto L_08A4C494;
    }
}
}
L_08A4C494:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C568;
      }
      goto L_08A4C49C;
    }
L_08A4C49C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2076)));
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4C4C8;
      }
      goto L_08A4C4B0;
    }
}
L_08A4C4B0:
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A4C4C0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 85u, 0x08A5071Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4C4C0u) goto L_08A4C4C0;
    return;
L_08A4C4C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C568;
      }
      goto L_08A4C4C8;
    }
L_08A4C4C8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2076)));
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 14u);
    g5 = (g5 ^ 6u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A4C510;
      }
      goto L_08A4C4F8;
    }
}
}
L_08A4C4F8:
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(816));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(336));
    hot_regs.g31 = (0x08A4C508u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 608u, 0x089F3910u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4C508u) goto L_08A4C508;
    return;
L_08A4C508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C520;
      }
      goto L_08A4C510;
    }
L_08A4C510:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = g4;
    goto L_08A4C520;
}
L_08A4C520:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(336)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    f12 = f12 - f13;
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(340)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    f14 = f14 - f15;
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f14;
    f12 = std::sqrt(f12);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(344)));
    f16 = f16 - f13;
    f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    f12 = f15 / f12;
    { const float fs = f16; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f13 + f12;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    goto L_08A4C568;
}
}
L_08A4C568:
    hot_regs.g31 = (0x08A4C570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4C570u) goto L_08A4C570;
    return;
L_08A4C570:
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A4C580;
      }
      goto L_08A4C578;
    }
L_08A4C578:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8072), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A4C580;
L_08A4C580:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8423), static_cast<std::uint8_t>(hot_regs.g4));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (16512u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(240));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (0u | 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C5F4;
      }
      goto L_08A4C5EC;
    }
L_08A4C5EC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A4C60C;
      }
      goto L_08A4C5F4;
    }
L_08A4C5F4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 255u);
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    g4 = (g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_08A4C60C;
    }
    goto L_08A4C60C;
}
L_08A4C60C:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 3u));
    hot_regs.g5 = (hot_regs.g5 >> 29u);
    hot_regs.g7 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 3u));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(304));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(320));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(288));
    hot_regs.g31 = (0x08A4C630u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 345u, 0x089EE640u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4C630u) goto L_08A4C630;
    return;
L_08A4C630:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C7D4;
      }
      goto L_08A4C63C;
    }
L_08A4C63C:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(1392)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C7D4;
      }
      goto L_08A4C648;
    }
L_08A4C648:
    if (ctx.gpr[23] != ctx.gpr[17]) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1400), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08A4C678;
    }
    goto L_08A4C650;
L_08A4C650:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(f12));
    g4 = (g29 + static_cast<std::uint32_t>(416));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A4C6F0;
      }
      goto L_08A4C678;
    }
}
}
L_08A4C678:
    hot_regs.g4 = (48896u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16128u << 16u);
    hot_regs.g31 = (0x08A4C68Cu);
    ctx.fpr[28] = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4C68Cu) goto L_08A4C68C;
    return;
L_08A4C68C:
    hot_regs.f12 = ctx.fpr[28] - ctx.fpr[26];
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x08A4C69Cu);
    ctx.fpr[30] = ctx.fpr[26] + hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4C69Cu) goto L_08A4C69C;
    return;
L_08A4C69C:
    hot_regs.f13 = ctx.fpr[28] - ctx.fpr[26];
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    ctx.fpr[26] = ctx.fpr[26] + hot_regs.f13;
    hot_regs.g4 = (48588u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.g31 = (0x08A4C6C4u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4C6C4u) goto L_08A4C6C4;
    return;
L_08A4C6C4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    f12 = ctx.fpr[24] - ctx.fpr[28];
    { const float fs = f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = ctx.fpr[28] + f12;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(f12));
    g4 = (g29 + static_cast<std::uint32_t>(432));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1400)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08A4C6F0;
}
}
L_08A4C6F0:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(384));
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
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A4C714u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4C714u) goto L_08A4C714;
    return;
L_08A4C714:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (15948u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(352));
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g2 = (0u | 1u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    hot_regs.g31 = (0x08A4C7CCu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 354u, 0x08A41D28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4C7CCu) goto L_08A4C7CC;
    return;
L_08A4C7CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C814;
      }
      goto L_08A4C7D4;
    }
L_08A4C7D4:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g2 = (0u | 1u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    hot_regs.g31 = (0x08A4C814u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 354u, 0x08A41D28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4C814u) goto L_08A4C814;
    return;
L_08A4C814:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8072), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8423), static_cast<std::uint8_t>(0u));
    goto L_08A4C81C;
L_08A4C81C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1388), ctx.gpr[17]);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D74C;
      }
      goto L_08A4C82C;
    }
L_08A4C82C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1388), ctx.gpr[17]);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A4C854u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(448));
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 584u, 0x08827CD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4C854u) goto L_08A4C854;
    return;
L_08A4C854:
    hot_regs.g31 = (0x08A4C85Cu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 290u, 0x08A4182Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4C85Cu) goto L_08A4C85C;
    return;
L_08A4C85C:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A4CADC;
      }
      goto L_08A4C864;
    }
L_08A4C864:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CADC;
      }
      goto L_08A4C86C;
    }
L_08A4C86C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4CADC;
      }
      goto L_08A4C888;
    }
}
L_08A4C888:
    hot_regs.g31 = (0x08A4C890u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4C890u) goto L_08A4C890;
    return;
L_08A4C890:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CADC;
      }
      goto L_08A4C898;
    }
L_08A4C898:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CADC;
      }
      goto L_08A4C8A8;
    }
L_08A4C8A8:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08A4CADC;
      }
      goto L_08A4C8B8;
    }
L_08A4C8B8:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(2076)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(480));
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(512));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g6 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (15820u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 52429u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g5 = (15820u << 16u);
      if (branch_taken) {
          goto L_08A4CADC;
      }
      goto L_08A4C94C;
    }
L_08A4C94C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 | 52429u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4CADC;
      }
      goto L_08A4C964;
    }
}
L_08A4C964:
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g5);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(496));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g6);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(512));
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (16051u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 13107u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4C9F8;
      }
      goto L_08A4C9CC;
    }
L_08A4C9CC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.set_vfpu_scalar_bits_ct<0u>(g5);
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
    g5 = (ctx.vfpu_scalar_bits_ct<64u>());
    hot_regs.f14 = std::bit_cast<float>(g5);
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4CA04;
      }
      goto L_08A4C9F8;
    }
}
L_08A4C9F8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16457u << 16u);
    g5 = (g5 | 4059u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    hot_regs.g5 = g5;
    goto L_08A4CA04;
}
L_08A4CA04:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16201u << 16u);
    g5 = (g5 | 4059u);
    hot_regs.f15 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g5 = (16006u << 16u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4CA74;
      }
      goto L_08A4CA20;
    }
}
L_08A4CA20:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 | 2706u);
    hot_regs.f15 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4CA54;
      }
      goto L_08A4CA38;
    }
}
L_08A4CA38:
    hot_regs.f14 = hot_regs.f13 / hot_regs.f12;
    hot_regs.g5 = (16192u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f14 < hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4CA74;
      }
      goto L_08A4CA54;
    }
L_08A4CA54:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    f13 = f13 / hot_regs.f12;
    g5 = (16253u << 16u);
    g5 = (g5 | 28836u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((f13 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A4CAC4;
      }
      goto L_08A4CA74;
    }
}
}
L_08A4CA74:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(460)));
    hot_regs.g6 = (64u << 16u);
    g5 = (g5 | hot_regs.g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(460), g5);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(1772), g5);
    g5 = (16672u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4CAB4;
      }
      goto L_08A4CAA4;
    }
}
L_08A4CAA4:
    hot_regs.g31 = (0x08A4CAACu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20328)));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 598u, 0x0890A484u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4CAACu) goto L_08A4CAAC;
    return;
L_08A4CAAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CADC;
      }
      goto L_08A4CAB4;
    }
L_08A4CAB4:
    hot_regs.g31 = (0x08A4CABCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20324)));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 598u, 0x0890A484u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4CABCu) goto L_08A4CABC;
    return;
L_08A4CABC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CADC;
      }
      goto L_08A4CAC4;
    }
L_08A4CAC4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(460)));
    g6 = (65472u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g5 = (g5 & g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(460), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(1772), 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08A4CADC;
}
L_08A4CADC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(464));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A4CB14u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 324u, 0x088AA4A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4CB14u) goto L_08A4CB14;
    return;
L_08A4CB14:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4D0D8;
      }
      goto L_08A4CB34;
    }
}
L_08A4CB34:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    g4 = (0u | 57u);
    { const bool branch_taken = ctx.gpr[17] == g4;
    g4 = (0u | 58u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4CEB8;
      }
      goto L_08A4CB48;
    }
}
L_08A4CB48:
    { const bool branch_taken = ctx.gpr[17] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A4CEB8;
      }
      goto L_08A4CB50;
    }
L_08A4CB50:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A4CEB8;
      }
      goto L_08A4CB5C;
    }
L_08A4CB5C:
    ctx.gpr[16] = (0u | 1u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(132)));
    hot_regs.f14 = hot_regs.f14 - hot_regs.f15;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    hot_regs.g31 = (0x08A4CBA8u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 618u, 0x08906DC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4CBA8u) goto L_08A4CBA8;
    return;
L_08A4CBA8:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A4CBB8u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 108u, 0x089387ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4CBB8u) goto L_08A4CBB8;
    return;
L_08A4CBB8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    hot_regs.f14 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A4CBEC;
      }
      goto L_08A4CBE0;
    }
}
L_08A4CBE0:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08A4CC28;
      }
      goto L_08A4CBEC;
    }
L_08A4CBEC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (std::bit_cast<std::uint32_t>(f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<0u>());
    f13 = std::bit_cast<float>(g4);
    hot_regs.f14 = std::bit_cast<float>(g4);
    g4 = (16256u << 16u);
    f12 = std::bit_cast<float>(g4);
    { const float fs = hot_regs.f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08A4CC28;
}
}
L_08A4CC28:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(-3000));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1732)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4CC50;
      }
      goto L_08A4CC40;
    }
}
L_08A4CC40:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(468)));
    g4 = (g4 & 4u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4CC54;
      }
      goto L_08A4CC50;
    }
}
L_08A4CC50:
    ctx.gpr[16] = (0u | 0u);
    goto L_08A4CC54;
L_08A4CC54:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(456)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4CCC4;
      }
      goto L_08A4CC64;
    }
}
L_08A4CC64:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CCC4;
      }
      goto L_08A4CC6C;
    }
L_08A4CC6C:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g4 = (hot_regs.g4 & 1u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(456)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g5 = (hot_regs.g5 & hot_regs.g6);
    hot_regs.g4 = (hot_regs.g5 | hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(456), hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = (49344u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (16544u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g31 = (0x08A4CCBCu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4CCBCu) goto L_08A4CCBC;
    return;
L_08A4CCBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CCF4;
      }
      goto L_08A4CCC4;
    }
L_08A4CCC4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = (49152u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(560), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(564), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(568), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g31 = (0x08A4CCF4u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4CCF4u) goto L_08A4CCF4;
    return;
L_08A4CCF4:
    if (ctx.gpr[16] == 0u) {
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(1384)));
        goto L_08A4CD14;
    }
    goto L_08A4CCFC;
L_08A4CCFC:
    hot_regs.g6 = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (0u | 1500u);
    hot_regs.g31 = (0x08A4CD10u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4CD10u) goto L_08A4CD10;
    return;
L_08A4CD10:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(1384)));
    goto L_08A4CD14;
L_08A4CD14:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4CD28;
      }
      goto L_08A4CD20;
    }
}
L_08A4CD20:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A4CD40;
      }
      goto L_08A4CD28;
    }
L_08A4CD28:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 255u);
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    g4 = (g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_08A4CD40;
    }
    goto L_08A4CD40;
}
L_08A4CD40:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g7 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(79)));
    ctx.gpr[8] = (ctx.gpr[17] & 255u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A4CD64u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4CD64u) goto L_08A4CD64;
    return;
L_08A4CD64:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1360)));
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A4CD94;
      }
      goto L_08A4CD74;
    }
L_08A4CD74:
    hot_regs.g4 = (0u | 12u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A4CD8Cu);
    ctx.gpr[8] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4CD8Cu) goto L_08A4CD8C;
    return;
L_08A4CD8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CDAC;
      }
      goto L_08A4CD94;
    }
L_08A4CD94:
    hot_regs.g4 = (0u | 11u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A4CDACu);
    ctx.gpr[8] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4CDACu) goto L_08A4CDAC;
    return;
L_08A4CDAC:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CEB0;
      }
      goto L_08A4CDB8;
    }
L_08A4CDB8:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[17] = (0u | 8u);
    g4 = (0u | 23u);
    { const bool branch_taken = ctx.gpr[21] == g4;
    g4 = (0u | 22u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4CDD8;
      }
      goto L_08A4CDC8;
    }
}
L_08A4CDC8:
    { const bool branch_taken = ctx.gpr[21] == hot_regs.g4;
    hot_regs.g4 = (0u | 21u);
      if (branch_taken) {
          goto L_08A4CDD8;
      }
      goto L_08A4CDD0;
    }
L_08A4CDD0:
    { const bool branch_taken = ctx.gpr[21] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A4CDDC;
      }
      goto L_08A4CDD8;
    }
L_08A4CDD8:
    ctx.gpr[17] = (0u | 32u);
    goto L_08A4CDDC;
L_08A4CDDC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(596), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(592));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(576));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (15395u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 55050u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(608));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A4CE44u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4CE44u) goto L_08A4CE44;
    return;
L_08A4CE44:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CEB0;
      }
      goto L_08A4CE4C;
    }
L_08A4CE4C:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CEB0;
      }
      goto L_08A4CE5C;
    }
L_08A4CE5C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(628), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(632), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(624));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(608));
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = (0u | 7u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A4CE9Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4CE9Cu) goto L_08A4CE9C;
    return;
L_08A4CE9C:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    g16 = (g16 & 255u);
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A4CE5C;
      }
      goto L_08A4CEB0;
    }
}
L_08A4CEB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D07C;
      }
      goto L_08A4CEB8;
    }
L_08A4CEB8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D07C;
      }
      goto L_08A4CEC4;
    }
L_08A4CEC4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(656));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(640));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (15395u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 55050u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(672));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(680), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A4CF28u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4CF28u) goto L_08A4CF28;
    return;
L_08A4CF28:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CFC4;
      }
      goto L_08A4CF30;
    }
L_08A4CF30:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CFC4;
      }
      goto L_08A4CF40;
    }
L_08A4CF40:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(704), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(708), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(712), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(720), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(724), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (15897u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(728), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(704));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(720));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(688));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(672));
    hot_regs.g4 = (0u | 7u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A4CFB0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4CFB0u) goto L_08A4CFB0;
    return;
L_08A4CFB0:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    g16 = (g16 & 255u);
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < 8 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A4CF40;
      }
      goto L_08A4CFC4;
    }
}
L_08A4CFC4:
    hot_regs.g4 = (0u | 58u);
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A4D07C;
      }
      goto L_08A4CFD0;
    }
L_08A4CFD0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08A4CFDCu);
    hot_regs.g5 = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 211u, 0x0886D4F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4CFDCu) goto L_08A4CFDC;
    return;
L_08A4CFDC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D01C;
      }
      goto L_08A4CFE4;
    }
L_08A4CFE4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    hot_regs.g4 = g4;
        goto L_08A4CFFC;
    }
    goto L_08A4CFF0;
}
L_08A4CFF0:
    hot_regs.g31 = (0x08A4CFF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4CFF8u) goto L_08A4CFF8;
    return;
L_08A4CFF8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08A4CFFC;
L_08A4CFFC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    hot_regs.g6 = (16640u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08A4D014u);
    hot_regs.g7 = (0u | 42u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D014u) goto L_08A4D014;
    return;
L_08A4D014:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A4D050;
      }
      goto L_08A4D01C;
    }
L_08A4D01C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    hot_regs.g4 = g4;
        goto L_08A4D034;
    }
    goto L_08A4D028;
}
L_08A4D028:
    hot_regs.g31 = (0x08A4D030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D030u) goto L_08A4D030;
    return;
L_08A4D030:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08A4D034;
L_08A4D034:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    hot_regs.g6 = (16640u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08A4D04Cu);
    hot_regs.g7 = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D04Cu) goto L_08A4D04C;
    return;
L_08A4D04C:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    goto L_08A4D050;
L_08A4D050:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D07C;
      }
      goto L_08A4D058;
    }
L_08A4D058:
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g31 = (0x08A4D064u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D064u) goto L_08A4D064;
    return;
L_08A4D064:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g4 = (g4 | 1u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), g4);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-9));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), g4);
    hot_regs.g4 = g4;
    goto L_08A4D07C;
}
L_08A4D07C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D0D0;
      }
      goto L_08A4D088;
    }
L_08A4D088:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1252)));
    f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A4D0D0;
      }
      goto L_08A4D0A4;
    }
}
L_08A4D0A4:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D0D0;
      }
      goto L_08A4D0B0;
    }
L_08A4D0B0:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08A4D0D0;
      }
      goto L_08A4D0C0;
    }
L_08A4D0C0:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(1748), 0u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(1744), 0u);
    hot_regs.g31 = (0x08A4D0D0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 598u, 0x0890A484u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D0D0u) goto L_08A4D0D0;
    return;
L_08A4D0D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D590;
      }
      goto L_08A4D0D8;
    }
L_08A4D0D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 >> 1u);
    g5 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (0u | 4u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4D10C;
      }
      goto L_08A4D0F4;
    }
}
L_08A4D0F4:
{
    std::uint32_t g4 = hot_regs.g4;
    { const bool branch_taken = static_cast<std::int32_t>(g4) <= 0;
    g4 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4D590;
      }
      goto L_08A4D0FC;
    }
}
L_08A4D0FC:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D3F8;
      }
      goto L_08A4D104;
    }
L_08A4D104:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D11C;
      }
      goto L_08A4D10C;
    }
L_08A4D10C:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A4D3F8;
      }
      goto L_08A4D114;
    }
L_08A4D114:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D590;
      }
      goto L_08A4D11C;
    }
L_08A4D11C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(1384)));
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4D134;
      }
      goto L_08A4D12C;
    }
}
L_08A4D12C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A4D14C;
      }
      goto L_08A4D134;
    }
L_08A4D134:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 255u);
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    g4 = (g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_08A4D14C;
    }
    goto L_08A4D14C;
}
L_08A4D14C:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(740), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(744), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(736));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A4D178u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 71u, 0x08B0452Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D178u) goto L_08A4D178;
    return;
L_08A4D178:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 16 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D218;
      }
      goto L_08A4D188;
    }
L_08A4D188:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(816), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(820), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(824), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(816));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(852), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(856), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (15692u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(848));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(832));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A4D204u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D204u) goto L_08A4D204;
    return;
L_08A4D204:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    g16 = (g16 & 65535u);
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < 16 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A4D188;
      }
      goto L_08A4D218;
    }
}
L_08A4D218:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(760), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(752));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(768));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(784), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(788), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(792), std::bit_cast<std::uint32_t>(hot_regs.f12));
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
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15948u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4D2A4;
      }
      goto L_08A4D29C;
    }
L_08A4D29C:
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    goto L_08A4D2A4;
L_08A4D2A4:
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(768));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(784));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(736));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A4D2D0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D2D0u) goto L_08A4D2D0;
    return;
L_08A4D2D0:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(800));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(740), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(744), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (0u | 68u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A4D314u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D314u) goto L_08A4D314;
    return;
L_08A4D314:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    g4 = (g4 & 4u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4D3F0;
      }
      goto L_08A4D328;
    }
}
L_08A4D328:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 2048u);
    { const bool branch_taken = g5 != 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4D348;
      }
      goto L_08A4D338;
    }
}
L_08A4D338:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g5 = (g5 & 2048u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4D350;
      }
      goto L_08A4D348;
    }
}
L_08A4D348:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08A4D350;
}
L_08A4D350:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D380;
      }
      goto L_08A4D358;
    }
L_08A4D358:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g4 = (hot_regs.g4 & 1u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2049));
    hot_regs.g5 = (hot_regs.g5 & hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 << 11u);
    hot_regs.g4 = (hot_regs.g5 | hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g31 = (0x08A4D380u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D380u) goto L_08A4D380;
    return;
L_08A4D380:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 2048u);
    { const bool branch_taken = g5 != 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4D3A0;
      }
      goto L_08A4D390;
    }
}
L_08A4D390:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g5 = (g5 & 2048u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4D3A8;
      }
      goto L_08A4D3A0;
    }
}
L_08A4D3A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08A4D3A8;
}
L_08A4D3A8:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D3F0;
      }
      goto L_08A4D3B0;
    }
L_08A4D3B0:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(864));
    hot_regs.g5 = (49480u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(880), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(884), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(888), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x08A4D3DCu);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(880));
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 570u, 0x08A3FB90u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D3DCu) goto L_08A4D3DC;
    return;
L_08A4D3DC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(864)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(868)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(872)));
    hot_regs.g31 = (0x08A4D3F0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D3F0u) goto L_08A4D3F0;
    return;
L_08A4D3F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D590;
      }
      goto L_08A4D3F8;
    }
L_08A4D3F8:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x08A4D404u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 503u, 0x08A42E70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D404u) goto L_08A4D404;
    return;
L_08A4D404:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 8u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4D590;
      }
      goto L_08A4D424;
    }
}
L_08A4D424:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    g4 = (g4 & 4u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4D540;
      }
      goto L_08A4D438;
    }
}
L_08A4D438:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    g4 = (17095u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4D540;
      }
      goto L_08A4D458;
    }
}
L_08A4D458:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 2048u);
    { const bool branch_taken = g5 != 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4D478;
      }
      goto L_08A4D468;
    }
}
L_08A4D468:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g5 = (g5 & 2048u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4D480;
      }
      goto L_08A4D478;
    }
}
L_08A4D478:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08A4D480;
}
L_08A4D480:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D4C8;
      }
      goto L_08A4D488;
    }
L_08A4D488:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4D4C8;
      }
      goto L_08A4D4A0;
    }
L_08A4D4A0:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g4 = (hot_regs.g4 & 1u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2049));
    hot_regs.g5 = (hot_regs.g5 & hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 << 11u);
    hot_regs.g4 = (hot_regs.g5 | hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g31 = (0x08A4D4C8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D4C8u) goto L_08A4D4C8;
    return;
L_08A4D4C8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 2048u);
    { const bool branch_taken = g5 != 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4D4E8;
      }
      goto L_08A4D4D8;
    }
}
L_08A4D4D8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g5 = (g5 & 2048u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4D4F0;
      }
      goto L_08A4D4E8;
    }
}
L_08A4D4E8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08A4D4F0;
}
L_08A4D4F0:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D584;
      }
      goto L_08A4D4F8;
    }
L_08A4D4F8:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(896));
    hot_regs.g5 = (49312u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(912), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(916), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(920), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x08A4D524u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 570u, 0x08A3FB90u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D524u) goto L_08A4D524;
    return;
L_08A4D524:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(896)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(900)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(904)));
    hot_regs.g31 = (0x08A4D538u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D538u) goto L_08A4D538;
    return;
L_08A4D538:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D584;
      }
      goto L_08A4D540;
    }
L_08A4D540:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(473)));
    g4 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = g4;
        goto L_08A4D560;
    }
    goto L_08A4D550;
}
L_08A4D550:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(478))))));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D584;
      }
      goto L_08A4D55C;
    }
L_08A4D55C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_08A4D560;
L_08A4D560:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (1024u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4D584;
      }
      goto L_08A4D570;
    }
}
L_08A4D570:
    hot_regs.g4 = (16968u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A4D584u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 482u, 0x0882BFC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D584u) goto L_08A4D584;
    return;
L_08A4D584:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[21] << 24u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 24u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08A4D590;
}
L_08A4D590:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 >> 1u);
    g5 = (g4 + static_cast<std::uint32_t>(-1));
    g5 = (g5 < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4D744;
      }
      goto L_08A4D5B0;
    }
}
L_08A4D5B0:
{
    std::uint32_t g1 = ctx.gpr[1];
    g1 = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = hot_regs.g4 == g1;
    g1 = (0u + static_cast<std::uint32_t>(2));
    ctx.gpr[1] = g1;
      if (branch_taken) {
          goto L_08A4D604;
      }
      goto L_08A4D5BC;
    }
}
L_08A4D5BC:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A4D65C;
      }
      goto L_08A4D5C4;
    }
L_08A4D5C4:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A4D6BC;
      }
      goto L_08A4D5CC;
    }
L_08A4D5CC:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A4D71C;
      }
      goto L_08A4D5D4;
    }
L_08A4D5D4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(928), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(932), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(936), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(928));
    hot_regs.g4 = (0u | 72u);
    hot_regs.g31 = (0x08A4D5FCu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D5FCu) goto L_08A4D5FC;
    return;
L_08A4D5FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D744;
      }
      goto L_08A4D604;
    }
L_08A4D604:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(1385)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D634;
      }
      goto L_08A4D610;
    }
L_08A4D610:
    hot_regs.g31 = (0x08A4D618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D618u) goto L_08A4D618;
    return;
L_08A4D618:
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A4D62C;
      }
      goto L_08A4D620;
    }
L_08A4D620:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9328)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9328), g4);
    hot_regs.g4 = g4;
    goto L_08A4D62C;
}
L_08A4D62C:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(1385), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A4D634;
L_08A4D634:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(96)));
    hot_regs.g6 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (0u | 62u);
    hot_regs.g31 = (0x08A4D654u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D654u) goto L_08A4D654;
    return;
L_08A4D654:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D744;
      }
      goto L_08A4D65C;
    }
L_08A4D65C:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(1385)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D68C;
      }
      goto L_08A4D668;
    }
L_08A4D668:
    hot_regs.g31 = (0x08A4D670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D670u) goto L_08A4D670;
    return;
L_08A4D670:
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A4D684;
      }
      goto L_08A4D678;
    }
L_08A4D678:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9328)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9328), g4);
    hot_regs.g4 = g4;
    goto L_08A4D684;
}
L_08A4D684:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(1385), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A4D68C;
L_08A4D68C:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    hot_regs.g6 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (0u | 61u);
    hot_regs.g31 = (0x08A4D6A8u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D6A8u) goto L_08A4D6A8;
    return;
L_08A4D6A8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (0x08A4D6B4u);
    hot_regs.g5 = (0u | 106u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D6B4u) goto L_08A4D6B4;
    return;
L_08A4D6B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D744;
      }
      goto L_08A4D6BC;
    }
L_08A4D6BC:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(1385)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D6EC;
      }
      goto L_08A4D6C8;
    }
L_08A4D6C8:
    hot_regs.g31 = (0x08A4D6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D6D0u) goto L_08A4D6D0;
    return;
L_08A4D6D0:
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A4D6E4;
      }
      goto L_08A4D6D8;
    }
L_08A4D6D8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9328)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9328), g4);
    hot_regs.g4 = g4;
    goto L_08A4D6E4;
}
L_08A4D6E4:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(1385), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A4D6EC;
L_08A4D6EC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(928), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(932), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(936), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(928));
    hot_regs.g4 = (0u | 73u);
    hot_regs.g31 = (0x08A4D714u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D714u) goto L_08A4D714;
    return;
L_08A4D714:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D744;
      }
      goto L_08A4D71C;
    }
L_08A4D71C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(928), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(932), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(936), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(928));
    hot_regs.g4 = (0u | 74u);
    hot_regs.g31 = (0x08A4D744u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D744u) goto L_08A4D744;
    return;
L_08A4D744:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D7C8;
      }
      goto L_08A4D74C;
    }
L_08A4D74C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (g29 + static_cast<std::uint32_t>(944));
    hot_regs.g4 = (g29 + static_cast<std::uint32_t>(960));
    g5 = (g29 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
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
    g5 = (g29 + static_cast<std::uint32_t>(976));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (16880u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g6);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((f12 < f13));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_08A4D788;
    }
    goto L_08A4D788;
}
}
L_08A4D788:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = hot_regs.f13 / hot_regs.f12;
    hot_regs.g31 = (0x08A4D798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 571u, 0x08A3FBACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D798u) goto L_08A4D798;
    return;
L_08A4D798:
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(960));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A4D7A8u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 569u, 0x08A3FB78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D7A8u) goto L_08A4D7A8;
    return;
L_08A4D7A8:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(944));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A4D7C8u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 324u, 0x088AA4A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D7C8u) goto L_08A4D7C8;
    return;
L_08A4D7C8:
{
    std::uint32_t g23 = ctx.gpr[23];
    g23 = (g23 + static_cast<std::uint32_t>(1));
    g23 = (g23 & 65535u);
    hot_regs.g4 = (static_cast<std::int32_t>(g23) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[23] = g23;
      if (branch_taken) {
          goto L_08A4C1A8;
      }
      goto L_08A4D7DC;
    }
}
L_08A4D7DC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1404)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1408)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1412)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1416)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1420)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1424)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1428)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1432)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1436)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1440)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1444)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1448)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1452)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1456)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1460)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1464)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(1472));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A4D824:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(264), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(268), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), g18);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(276), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(280), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(284), hot_regs.g31);
    g18 = (g29 + static_cast<std::uint32_t>(32));
    f20 = std::bit_cast<float>(0u);
    g7 = (17204u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g7);
    g7 = (16457u << 16u);
    g7 = (g7 | 4059u);
    ctx.fpr[24] = std::bit_cast<float>(g7);
    g7 = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(g7);
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(56));
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    g17 = (hot_regs.g5 | 0u);
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g18 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(16)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f20)) && f12 == f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(20)));
    hot_regs.g7 = g7;
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08A4D8BC;
      }
      goto L_08A4D8A4;
    }
}
}
L_08A4D8A4:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f13) || std::isnan(hot_regs.f20)) && hot_regs.f13 == hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4D8BC;
      }
      goto L_08A4D8B4;
    }
L_08A4D8B4:
    { const bool branch_taken = 0u == 0u;
    { const float fs = hot_regs.f20; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
      if (branch_taken) {
          goto L_08A4D8C8;
      }
      goto L_08A4D8BC;
    }
L_08A4D8BC:
    hot_regs.g31 = (0x08A4D8C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D8C4u) goto L_08A4D8C4;
    return;
L_08A4D8C4:
    { const float fs = ctx.fpr[0]; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    goto L_08A4D8C8;
L_08A4D8C8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = f12 / ctx.fpr[24];
    g4 = (15502u << 16u);
    g4 = (g4 | 64012u);
    f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
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
    f13 = std::bit_cast<float>(g4);
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(f13));
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
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<1u>());
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(f14));
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f14;
    ctx.set_fpu_condition((f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A4D944;
      }
      goto L_08A4D93C;
    }
}
}
L_08A4D93C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08A4D978;
      }
      goto L_08A4D944;
    }
L_08A4D944:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (std::bit_cast<std::uint32_t>(f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<0u>());
    f13 = std::bit_cast<float>(g4);
    f14 = std::bit_cast<float>(g4);
    { const float fs = f14; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_08A4D978;
}
}
L_08A4D978:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A4D9B8u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 368u, 0x088AA874u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4D9B8u) goto L_08A4D9B8;
    return;
L_08A4D9B8:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    hot_regs.g4 = (0u | 18u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A4DA14u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4DA14u) goto L_08A4DA14;
    return;
L_08A4DA14:
    hot_regs.g4 = (15897u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.g4 = (0u | 18u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A4DA64u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4DA64u) goto L_08A4DA64;
    return;
L_08A4DA64:
    hot_regs.g4 = (15948u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    hot_regs.g4 = (0u | 18u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A4DAB4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4DAB4u) goto L_08A4DAB4;
    return;
L_08A4DAB4:
    hot_regs.g4 = (16000u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    hot_regs.g4 = (0u | 18u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A4DB00u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4DB00u) goto L_08A4DB00;
    return;
L_08A4DB00:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A4DB18u);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4DB18u) goto L_08A4DB18;
    return;
L_08A4DB18:
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
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (16544u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16204u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08A4DB60u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4DB60u) goto L_08A4DB60;
    return;
L_08A4DB60:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4DBFC;
      }
      goto L_08A4DB7C;
    }
}
L_08A4DB7C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2076)));
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4DBFC;
      }
      goto L_08A4DB90;
    }
}
L_08A4DB90:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2076)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (0x08A4DBACu);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 561u, 0x08A8EF1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4DBACu) goto L_08A4DBAC;
    return;
L_08A4DBAC:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2076)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    rt.memory().aot_store_word_left(hot_regs.g6 + static_cast<std::uint32_t>(3), hot_regs.g5);
    rt.memory().aot_store_word_right(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(52));
    rt.memory().aot_store_word_left(hot_regs.g6 + static_cast<std::uint32_t>(3), hot_regs.g5);
    rt.memory().aot_store_word_right(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    rt.memory().aot_store_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g4);
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DC8C;
      }
      goto L_08A4DBFC;
    }
L_08A4DBFC:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f20)) && f12 == hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A4DC2C;
      }
      goto L_08A4DC14;
    }
}
L_08A4DC14:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f13) || std::isnan(hot_regs.f20)) && hot_regs.f13 == hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4DC2C;
      }
      goto L_08A4DC24;
    }
L_08A4DC24:
{
    float f22 = hot_regs.f22;
    { const bool branch_taken = 0u == 0u;
    { const float fs = hot_regs.f20; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_08A4DC38;
      }
      goto L_08A4DC2C;
    }
}
L_08A4DC2C:
    hot_regs.g31 = (0x08A4DC34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4DC34u) goto L_08A4DC34;
    return;
L_08A4DC34:
{
    float f22 = hot_regs.f22;
    { const float fs = ctx.fpr[0]; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    hot_regs.f22 = f22;
    goto L_08A4DC38;
}
L_08A4DC38:
    ctx.fpr[24] = hot_regs.f22 / ctx.fpr[24];
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    rt.memory().aot_store_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1))))));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1))))));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(hot_regs.g4));
    ctx.gpr[19] = (0u | 0u);
    goto L_08A4DC8C;
L_08A4DC8C:
    ctx.gpr[20] = (0u | 0u);
    hot_regs.g31 = (0x08A4DC98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4DC98u) goto L_08A4DC98;
    return;
L_08A4DC98:
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A4DCBC;
      }
      goto L_08A4DCA0;
    }
L_08A4DCA0:
    hot_regs.g31 = (0x08A4DCA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4DCA8u) goto L_08A4DCA8;
    return;
L_08A4DCA8:
    hot_regs.g31 = (0x08A4DCB0u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 707u, 0x089476BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4DCB0u) goto L_08A4DCB0;
    return;
L_08A4DCB0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DCBC;
      }
      goto L_08A4DCB8;
    }
L_08A4DCB8:
    ctx.gpr[20] = (0u | 1u);
    goto L_08A4DCBC;
L_08A4DCBC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A4DCD8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A4C070;
L_08A4DCD8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DDA0;
      }
      goto L_08A4DCE4;
    }
L_08A4DCE4:
    hot_regs.g4 = (0u | 35u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(208), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9640)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(210), static_cast<std::uint8_t>(hot_regs.g4));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(212));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(211), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    rt.memory().aot_store_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g7);
    rt.memory().aot_store_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g7);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    rt.memory().aot_store_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    rt.memory().aot_store_word_left(hot_regs.g6 + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g4 = (2237u << 16u);
    ctx.gpr[16] = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A4DD54u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 456u, 0x08A427C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4DD54u) goto L_08A4DD54;
    return;
L_08A4DD54:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(228), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(48))))));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(50))))));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(52))))));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(230), static_cast<std::uint16_t>(hot_regs.g4));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(232), static_cast<std::uint16_t>(hot_regs.g5));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(234), static_cast<std::uint16_t>(hot_regs.g6));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(54))))));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(56))))));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(58))))));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(236), static_cast<std::uint16_t>(hot_regs.g4));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(238), static_cast<std::uint16_t>(hot_regs.g5));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(240), static_cast<std::uint16_t>(hot_regs.g6));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(242), static_cast<std::uint8_t>(ctx.gpr[19]));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A4DDA0u);
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 186u, 0x08ADC9FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4DDA0u) goto L_08A4DDA0;
    return;
L_08A4DDA0:
    hot_regs.g31 = (0x08A4DDA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4DDA8u) goto L_08A4DDA8;
    return;
L_08A4DDA8:
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A4DDF8;
      }
      goto L_08A4DDB0;
    }
L_08A4DDB0:
    hot_regs.g31 = (0x08A4DDB8u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4DDB8u) goto L_08A4DDB8;
    return;
L_08A4DDB8:
    hot_regs.g31 = (0x08A4DDC0u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4DDC0u) goto L_08A4DDC0;
    return;
L_08A4DDC0:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x08A4DDCCu);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4DDCCu) goto L_08A4DDCC;
    return;
L_08A4DDCC:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x08A4DDD8u);
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4DDD8u) goto L_08A4DDD8;
    return;
L_08A4DDD8:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 240u);
    hot_regs.g6 = (0u | 128u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08A4DDF8u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 955u, 0x0898BB44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4DDF8u) goto L_08A4DDF8;
    return;
L_08A4DDF8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 1u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(248)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(252)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(264)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(268)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(276)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(280)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(284)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A4DE30:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g31 = (0x08A4DE68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4DE68u) goto L_08A4DE68;
    return;
L_08A4DE68:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (2236u << 16u);
    { const bool branch_taken = hot_regs.g2 != ctx.gpr[16];
    g19 = (g19 + static_cast<std::uint32_t>(32304));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A4DE78;
      }
      goto L_08A4DE74;
    }
}
L_08A4DE74:
    ctx.gpr[18] = (0u | 1u);
    goto L_08A4DE78;
L_08A4DE78:
    ctx.gpr[20] = (0u | 0u);
    hot_regs.g31 = (0x08A4DE84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4DE84u) goto L_08A4DE84;
    return;
L_08A4DE84:
    { const bool branch_taken = ctx.gpr[16] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A4DEA8;
      }
      goto L_08A4DE8C;
    }
L_08A4DE8C:
    hot_regs.g31 = (0x08A4DE94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4DE94u) goto L_08A4DE94;
    return;
L_08A4DE94:
    hot_regs.g31 = (0x08A4DE9Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 707u, 0x089476BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4DE9Cu) goto L_08A4DE9C;
    return;
L_08A4DE9C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DEA8;
      }
      goto L_08A4DEA4;
    }
L_08A4DEA4:
    ctx.gpr[20] = (0u | 1u);
    goto L_08A4DEA8;
L_08A4DEA8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    hot_regs.g7 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A4E004;
      }
      goto L_08A4DEB0;
    }
L_08A4DEB0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[19]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 34u);
    { const bool branch_taken = g4 == g5;
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4E004;
      }
      goto L_08A4DEE0;
    }
}
L_08A4DEE0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[19]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 7u);
    { const bool branch_taken = g4 == g5;
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4E004;
      }
      goto L_08A4DF10;
    }
}
L_08A4DF10:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[19]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 46u);
    { const bool branch_taken = g4 == g5;
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4E004;
      }
      goto L_08A4DF40;
    }
}
L_08A4DF40:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[19]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 8u);
    { const bool branch_taken = g4 == g5;
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4E004;
      }
      goto L_08A4DF70;
    }
}
L_08A4DF70:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[19]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 42u);
    { const bool branch_taken = g4 == g5;
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4E004;
      }
      goto L_08A4DFA0;
    }
}
L_08A4DFA0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[19]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 39u);
    { const bool branch_taken = g4 == g5;
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4E004;
      }
      goto L_08A4DFD0;
    }
}
L_08A4DFD0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[19]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 40u);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4E070;
      }
      goto L_08A4E000;
    }
}
L_08A4E000:
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    goto L_08A4E004;
L_08A4E004:
    hot_regs.g6 = (ctx.gpr[19] + static_cast<std::uint32_t>(144));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g5 = (ctx.gpr[19] + static_cast<std::uint32_t>(128));
    { const bool branch_taken = hot_regs.g7 == 0u;
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A4E078;
      }
      goto L_08A4E018;
    }
L_08A4E018:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g7 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    g7 = (g7 << 5u);
    g8 = (0u - g7);
    g7 = (g7 << 2u);
    g8 = (g8 + g7);
    g7 = (g7 << 2u);
    g7 = (g8 + g7);
    g6 = (g7 + g6);
    { const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
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
    g6 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    g6 = (g6 << 5u);
    g7 = (0u - g6);
    g6 = (g6 << 2u);
    g7 = (g7 + g6);
    g6 = (g6 << 2u);
    g6 = (g7 + g6);
    g6 = (g6 + hot_regs.g5);
    { const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08A4E0C8;
      }
      goto L_08A4E070;
    }
}
L_08A4E070:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A4E378;
      }
      goto L_08A4E078;
    }
L_08A4E078:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g7 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    g7 = (g7 << 5u);
    g8 = (0u - g7);
    g7 = (g7 << 2u);
    g8 = (g8 + g7);
    g7 = (g7 << 2u);
    g7 = (g8 + g7);
    g6 = (g7 + g6);
    { const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
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
    g6 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    g6 = (g6 << 5u);
    g7 = (0u - g6);
    g6 = (g6 << 2u);
    g7 = (g7 + g6);
    g6 = (g6 << 2u);
    g6 = (g7 + g6);
    g6 = (g6 + hot_regs.g5);
    { const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
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
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_08A4E0C8;
}
L_08A4E0C8:
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    hot_regs.g6 = (hot_regs.g6 << 5u);
    hot_regs.g7 = (0u - hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 << 2u);
    hot_regs.g7 = (hot_regs.g7 + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 << 2u);
    hot_regs.g6 = (hot_regs.g7 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (49021u << 16u);
    hot_regs.g6 = (hot_regs.g6 | 18770u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (15892u << 16u);
    hot_regs.g6 = (hot_regs.g6 | 31457u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (16255u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 15204u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4E150;
      }
      goto L_08A4E140;
    }
L_08A4E140:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16580)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g5 = (g5 & 7u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16580), g5);
    hot_regs.g5 = g5;
    goto L_08A4E150;
}
L_08A4E150:
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
    hot_regs.g5 = (16768u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g5);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
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
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x08A4E1B4u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 780u, 0x08ACE694u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4E1B4u) goto L_08A4E1B4;
    return;
L_08A4E1B4:
    hot_regs.g31 = (0x08A4E1BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4E1BCu) goto L_08A4E1BC;
    return;
L_08A4E1BC:
    { const bool branch_taken = ctx.gpr[16] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A4E22C;
      }
      goto L_08A4E1C4;
    }
L_08A4E1C4:
    hot_regs.g31 = (0x08A4E1CCu);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4E1CCu) goto L_08A4E1CC;
    return;
L_08A4E1CC:
    hot_regs.g31 = (0x08A4E1D4u);
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4E1D4u) goto L_08A4E1D4;
    return;
L_08A4E1D4:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x08A4E1E0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4E1E0u) goto L_08A4E1E0;
    return;
L_08A4E1E0:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x08A4E1ECu);
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4E1ECu) goto L_08A4E1EC;
    return;
L_08A4E1EC:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (0u | 240u);
    hot_regs.g6 = (0u | 128u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08A4E20Cu);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 955u, 0x0898BB44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4E20Cu) goto L_08A4E20C;
    return;
L_08A4E20C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A4E218u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 413u, 0x08A4230Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4E218u) goto L_08A4E218;
    return;
L_08A4E218:
    hot_regs.g4 = (15948u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08A4E22Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 391u, 0x08A1A8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4E22Cu) goto L_08A4E22C;
    return;
L_08A4E22C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4E268;
      }
      goto L_08A4E248;
    }
}
L_08A4E248:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A4E260u);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4E260u) goto L_08A4E260;
    return;
L_08A4E260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E2A8;
      }
      goto L_08A4E268;
    }
L_08A4E268:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4E2A8;
      }
      goto L_08A4E284;
    }
}
L_08A4E284:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E2A8;
      }
      goto L_08A4E290;
    }
L_08A4E290:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    hot_regs.g4 = (0u | 4u);
    hot_regs.g5 = (0u | 2u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A4E2A8u);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4E2A8u) goto L_08A4E2A8;
    return;
L_08A4E2A8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E374;
      }
      goto L_08A4E2B4;
    }
L_08A4E2B4:
    hot_regs.g4 = (0u | 30u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9639)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(hot_regs.g4));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(68));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    ctx.gpr[8] = (hot_regs.g7 + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (hot_regs.g7 + static_cast<std::uint32_t>(8));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(67), static_cast<std::uint8_t>(ctx.gpr[10]));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    rt.memory().aot_store_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), ctx.gpr[10]);
    rt.memory().aot_store_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    rt.memory().aot_store_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    rt.memory().aot_store_word_left(hot_regs.g6 + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    rt.memory().aot_store_word_left(hot_regs.g7 + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(hot_regs.g7 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    rt.memory().aot_store_word_left(ctx.gpr[8] + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(ctx.gpr[8] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    rt.memory().aot_store_word_left(ctx.gpr[9] + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(ctx.gpr[9] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (2237u << 16u);
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A4E35Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 456u, 0x08A427C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4E35Cu) goto L_08A4E35C;
    return;
L_08A4E35C:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(92), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A4E374u);
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 186u, 0x08ADC9FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4E374u) goto L_08A4E374;
    return;
L_08A4E374:
    hot_regs.g2 = (0u | 1u);
    goto L_08A4E378;
L_08A4E378:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A4E3A0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-416));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(364), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(368), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(372), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(376), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(380), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(384), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(388), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(392), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(396), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(400), hot_regs.g31);
    g16 = (2236u << 16u);
    g16 = (g16 + static_cast<std::uint32_t>(32304));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + g16);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 46u);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A4E484;
      }
      goto L_08A4E418;
    }
}
L_08A4E418:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(340), ctx.gpr[16]);
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-24896), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24900), 0u);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28320));
    hot_regs.g5 = (0u | 42u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 22050u);
    ctx.gpr[10] = (0u | 127u);
    ctx.gpr[11] = (0u | 20u);
    hot_regs.g31 = (0x08A4E454u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 35u, 0x089B8320u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4E454u) goto L_08A4E454;
    return;
L_08A4E454:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (0u | 1u);
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(7592), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(9372)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(9372), g4);
    ctx.gpr[21] = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-15976)));
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (g4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = g4 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(332), ctx.gpr[18]);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4E48C;
      }
      goto L_08A4E47C;
    }
}
L_08A4E47C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E6E0;
      }
      goto L_08A4E484;
    }
L_08A4E484:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A4E94C;
      }
      goto L_08A4E48C;
    }
L_08A4E48C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(340), g16);
    g4 = (g16 + static_cast<std::uint32_t>(48));
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(128));
    hot_regs.g5 = (17146u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(328), g4);
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(64));
    g4 = (16204u << 16u);
    g4 = (g4 | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(g4);
    g4 = (15820u << 16u);
    g4 = (g4 | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    g4 = (16230u << 16u);
    g4 = (g4 | 26214u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    g4 = (16384u << 16u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    g4 = (g16 + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(160));
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(144));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(336), g4);
    g4 = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(g4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[20] = (ctx.lo);
    hot_regs.g4 = g4;
    goto L_08A4E4F0;
}
L_08A4E4F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A4E508;
      }
      goto L_08A4E4F8;
    }
L_08A4E4F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
        goto L_08A4E510;
    }
    goto L_08A4E508;
}
L_08A4E508:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4E530;
      }
      goto L_08A4E510;
    }
L_08A4E510:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + ctx.gpr[18]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 128u);
    if (g4 == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
        goto L_08A4E52C;
    }
    goto L_08A4E524;
}
L_08A4E524:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4E530;
      }
      goto L_08A4E52C;
    }
L_08A4E52C:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[20]);
    goto L_08A4E530;
L_08A4E530:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    if (ctx.gpr[16] == 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(332)));
        goto L_08A4E6CC;
    }
    goto L_08A4E53C;
L_08A4E53C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(328)));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4E6C8;
      }
      goto L_08A4E578;
    }
L_08A4E578:
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.f12 = hot_regs.f12 + ctx.fpr[26];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(36));
    hot_regs.g31 = (0x08A4E5A4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 32u, 0x08AA82D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4E5A4u) goto L_08A4E5A4;
    return;
L_08A4E5A4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E6C8;
      }
      goto L_08A4E5AC;
    }
L_08A4E5AC:
{
    float f13 = hot_regs.f13;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    f13 = std::bit_cast<float>(hot_regs.g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const float fs = f13; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f12 <= f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A4E6C8;
      }
      goto L_08A4E5D0;
    }
}
L_08A4E5D0:
{
    float f13 = hot_regs.f13;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    f13 = std::bit_cast<float>(hot_regs.g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const float fs = f13; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f12 < f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A4E6C8;
      }
      goto L_08A4E5F4;
    }
}
L_08A4E5F4:
{
    float f13 = hot_regs.f13;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    f13 = std::bit_cast<float>(hot_regs.g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const float fs = f13; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f12 <= f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A4E6C8;
      }
      goto L_08A4E618;
    }
}
L_08A4E618:
{
    float f13 = hot_regs.f13;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    f13 = std::bit_cast<float>(hot_regs.g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const float fs = f13; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f12 < f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A4E6C8;
      }
      goto L_08A4E63C;
    }
}
L_08A4E63C:
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(336)));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(328)));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    hot_regs.g2 = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    hot_regs.g31 = (0x08A4E6A4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4E6A4u) goto L_08A4E6A4;
    return;
L_08A4E6A4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (128u << 16u);
      if (branch_taken) {
          goto L_08A4E6BC;
      }
      goto L_08A4E6AC;
    }
L_08A4E6AC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A4E6C8;
      }
      goto L_08A4E6B8;
    }
L_08A4E6B8:
    hot_regs.g4 = (128u << 16u);
    goto L_08A4E6BC;
L_08A4E6BC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    g4 = (hot_regs.g5 | g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), g4);
    hot_regs.g4 = g4;
    goto L_08A4E6C8;
}
L_08A4E6C8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(332)));
    goto L_08A4E6CC;
L_08A4E6CC:
{
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.g5 = (g18 | 0u);
    g18 = (hot_regs.g4 + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-3344));
    { const bool branch_taken = hot_regs.g5 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(332), g18);
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08A4E4F0;
      }
      goto L_08A4E6E0;
    }
}
L_08A4E6E0:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (g4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(332), ctx.gpr[18]);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4E948;
      }
      goto L_08A4E6F4;
    }
}
L_08A4E6F4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(340)));
    g5 = (g4 + static_cast<std::uint32_t>(48));
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(176));
    hot_regs.g6 = (17146u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(328), g5);
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(64));
    g5 = (16204u << 16u);
    g5 = (g5 | 52429u);
    hot_regs.f22 = std::bit_cast<float>(g5);
    g5 = (15820u << 16u);
    g5 = (g5 | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(g5);
    g5 = (16230u << 16u);
    g5 = (g5 | 26214u);
    ctx.fpr[26] = std::bit_cast<float>(g5);
    g5 = (16384u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(g5);
    g4 = (g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(208));
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(192));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(336), g4);
    g4 = (ctx.gpr[18] << 5u);
    g19 = (0u + g4);
    g4 = (g4 << 6u);
    g19 = (g19 + g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[19] = g19;
    goto L_08A4E75C;
}
L_08A4E75C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A4E774;
      }
      goto L_08A4E764;
    }
L_08A4E764:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
        goto L_08A4E77C;
    }
    goto L_08A4E774;
}
L_08A4E774:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4E79C;
      }
      goto L_08A4E77C;
    }
L_08A4E77C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + ctx.gpr[18]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 128u);
    if (g4 == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
        goto L_08A4E798;
    }
    goto L_08A4E790;
}
L_08A4E790:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4E79C;
      }
      goto L_08A4E798;
    }
L_08A4E798:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_08A4E79C;
L_08A4E79C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    if (ctx.gpr[16] == 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(332)));
        goto L_08A4E934;
    }
    goto L_08A4E7A8;
L_08A4E7A8:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(328)));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4E930;
      }
      goto L_08A4E7E4;
    }
L_08A4E7E4:
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f22;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(36));
    hot_regs.g31 = (0x08A4E810u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 32u, 0x08AA82D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4E810u) goto L_08A4E810;
    return;
L_08A4E810:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E930;
      }
      goto L_08A4E818;
    }
L_08A4E818:
{
    float f13 = hot_regs.f13;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    f13 = std::bit_cast<float>(hot_regs.g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const float fs = f13; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f12 <= f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A4E930;
      }
      goto L_08A4E83C;
    }
}
L_08A4E83C:
{
    float f13 = hot_regs.f13;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    f13 = std::bit_cast<float>(hot_regs.g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const float fs = f13; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f12 < f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A4E930;
      }
      goto L_08A4E860;
    }
}
L_08A4E860:
{
    float f13 = hot_regs.f13;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    f13 = std::bit_cast<float>(hot_regs.g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const float fs = f13; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f12 <= f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A4E930;
      }
      goto L_08A4E884;
    }
}
L_08A4E884:
{
    float f13 = hot_regs.f13;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    f13 = std::bit_cast<float>(hot_regs.g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const float fs = f13; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f12 < f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A4E930;
      }
      goto L_08A4E8A8;
    }
}
L_08A4E8A8:
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(336)));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(328)));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    hot_regs.g2 = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    hot_regs.g31 = (0x08A4E910u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4E910u) goto L_08A4E910;
    return;
L_08A4E910:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E924;
      }
      goto L_08A4E918;
    }
L_08A4E918:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A4E930;
      }
      goto L_08A4E924;
    }
L_08A4E924:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(619))))));
    g4 = (g4 | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(619), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08A4E930;
}
L_08A4E930:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(332)));
    goto L_08A4E934;
L_08A4E934:
{
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.g5 = (g18 | 0u);
    g18 = (hot_regs.g4 + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2080));
    { const bool branch_taken = hot_regs.g5 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(332), g18);
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08A4E75C;
      }
      goto L_08A4E948;
    }
}
L_08A4E948:
    hot_regs.g2 = (0u | 1u);
    goto L_08A4E94C;
L_08A4E94C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(344)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(348)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(352)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(356)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(360)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(364)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(368)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(372)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(376)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(380)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(384)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(388)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(392)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(396)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(400)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(416));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A4E990:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(276), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(280), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(284), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(288), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(292), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(296), g22);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(300), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(304), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(308), hot_regs.g31);
    g22 = (2236u << 16u);
    g22 = (g22 + static_cast<std::uint32_t>(32304));
    g6 = (aot_mem.aot_load8(g22 + static_cast<std::uint32_t>(80)));
    g6 = (g6 << 5u);
    g7 = (0u - g6);
    g6 = (g6 << 2u);
    g7 = (g7 + g6);
    g6 = (g6 << 2u);
    g6 = (g7 + g6);
    g6 = (g6 + g22);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(112))))));
    g7 = (0u | 34u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), hot_regs.g4);
    { const bool branch_taken = g6 == g7;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(248), hot_regs.g5);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[22] = g22;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A4EB58;
      }
      goto L_08A4EA08;
    }
}
L_08A4EA08:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[22]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 7u);
    if (g4 == g5) {
    ctx.gpr[20] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_08A4EB5C;
    }
    goto L_08A4EA38;
}
L_08A4EA38:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[22]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 46u);
    if (g4 == g5) {
    ctx.gpr[20] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_08A4EB5C;
    }
    goto L_08A4EA68;
}
L_08A4EA68:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[22]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 8u);
    if (g4 == g5) {
    ctx.gpr[20] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_08A4EB5C;
    }
    goto L_08A4EA98;
}
L_08A4EA98:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[22]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 42u);
    if (g4 == g5) {
    ctx.gpr[20] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_08A4EB5C;
    }
    goto L_08A4EAC8;
}
L_08A4EAC8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[22]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 39u);
    if (g4 == g5) {
    ctx.gpr[20] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_08A4EB5C;
    }
    goto L_08A4EAF8;
}
L_08A4EAF8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[22]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 40u);
    if (g4 == g5) {
    ctx.gpr[20] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_08A4EB5C;
    }
    goto L_08A4EB28;
}
L_08A4EB28:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[22]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 45u);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4EC70;
      }
      goto L_08A4EB58;
    }
}
L_08A4EB58:
    ctx.gpr[20] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
    goto L_08A4EB5C;
L_08A4EB5C:
    hot_regs.g31 = (0x08A4EB64u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4EB64u) goto L_08A4EB64;
    return;
L_08A4EB64:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(252), hot_regs.g2);
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g5 = (0u - hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[22] + static_cast<std::uint32_t>(144));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[23] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g5 = (0u - hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[22] + static_cast<std::uint32_t>(128));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(8)));
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
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
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
    ctx.gpr[30] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g2 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8072), static_cast<std::uint8_t>(hot_regs.g2));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8422), static_cast<std::uint8_t>(hot_regs.g2));
    ctx.gpr[9] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(248)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8423), static_cast<std::uint8_t>(hot_regs.g2));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8068), ctx.gpr[9]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    hot_regs.g31 = (0x08A4EC54u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 354u, 0x08A41D28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4EC54u) goto L_08A4EC54;
    return;
L_08A4EC54:
    hot_regs.f20 = std::bit_cast<float>(0u);
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    { const bool branch_taken = hot_regs.g2 != 0u;
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A4EC78;
      }
      goto L_08A4EC68;
    }
L_08A4EC68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EC98;
      }
      goto L_08A4EC70;
    }
L_08A4EC70:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A4F0D0;
      }
      goto L_08A4EC78;
    }
L_08A4EC78:
    ctx.gpr[19] = (0u | 1u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08A4EC98u);
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 169u, 0x08A51450u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4EC98u) goto L_08A4EC98;
    return;
L_08A4EC98:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A4ECC4u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 220u, 0x08A41030u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4ECC4u) goto L_08A4ECC4;
    return;
L_08A4ECC4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g28 = ctx.gpr[28];
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(8072), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(8422), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(8423), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8068), 0u);
    g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[22]);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(f13));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    ctx.set_fpu_condition((f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A4ED2C;
      }
      goto L_08A4ED24;
    }
}
}
L_08A4ED24:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f22));
      if (branch_taken) {
          goto L_08A4ED60;
      }
      goto L_08A4ED2C;
    }
L_08A4ED2C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (std::bit_cast<std::uint32_t>(f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<0u>());
    f13 = std::bit_cast<float>(g4);
    f14 = std::bit_cast<float>(g4);
    { const float fs = f14; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_08A4ED60;
}
}
L_08A4ED60:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(248)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (hot_regs.g29 + static_cast<std::uint32_t>(148));
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A4ED88u);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 277u, 0x08A499A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4ED88u) goto L_08A4ED88;
    return;
L_08A4ED88:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EDC8;
      }
      goto L_08A4ED94;
    }
L_08A4ED94:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 8u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4EDC8;
      }
      goto L_08A4EDB4;
    }
}
L_08A4EDB4:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    g5 = (g5 << 24u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 24u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(g5));
    hot_regs.g5 = g5;
    goto L_08A4EDC8;
}
L_08A4EDC8:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (0u | 34u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08A4EDEC;
      }
      goto L_08A4EDDC;
    }
L_08A4EDDC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (0u | 37u);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    hot_regs.g7 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_08A4EDF4;
      }
      goto L_08A4EDEC;
    }
L_08A4EDEC:
    hot_regs.g4 = (0u | 20u);
    hot_regs.g7 = (hot_regs.g4 | 0u);
    goto L_08A4EDF4;
L_08A4EDF4:
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A4EE08u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 345u, 0x089EE640u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4EE08u) goto L_08A4EE08;
    return;
L_08A4EE08:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EE5C;
      }
      goto L_08A4EE10;
    }
L_08A4EE10:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    goto L_08A4EE18;
L_08A4EE18:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A4EE4Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4EE4Cu) goto L_08A4EE4C;
    return;
L_08A4EE4C:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (g16 < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A4EE18;
      }
      goto L_08A4EE5C;
    }
}
L_08A4EE5C:
    hot_regs.g31 = (0x08A4EE64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4EE64u) goto L_08A4EE64;
    return;
L_08A4EE64:
    { const bool branch_taken = ctx.gpr[19] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A4F0CC;
      }
      goto L_08A4EE6C;
    }
L_08A4EE6C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    g5 = (static_cast<std::int32_t>(g4) < 28 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    g5 = (static_cast<std::int32_t>(g4) < 38 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4EED8;
      }
      goto L_08A4EE7C;
    }
}
L_08A4EE7C:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28));
      if (branch_taken) {
          goto L_08A4EED8;
      }
      goto L_08A4EE84;
    }
L_08A4EE84:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(6976)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A4EE9C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (14621u << 16u);
    g4 = (g4 | 18770u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4EEE4;
      }
      goto L_08A4EEB0;
    }
}
L_08A4EEB0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (14749u << 16u);
    g4 = (g4 | 18770u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4EEE4;
      }
      goto L_08A4EEC4;
    }
}
L_08A4EEC4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (14749u << 16u);
    g4 = (g4 | 18770u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4EEE4;
      }
      goto L_08A4EED8;
    }
}
L_08A4EED8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (14673u << 16u);
    g4 = (g4 | 46871u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    goto L_08A4EEE4;
}
L_08A4EEE4:
    hot_regs.g31 = (0x08A4EEECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4EEECu) goto L_08A4EEEC;
    return;
L_08A4EEEC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(460)));
    g4 = (g4 & 8192u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4EF10;
      }
      goto L_08A4EEFC;
    }
}
L_08A4EEFC:
    hot_regs.g31 = (0x08A4EF04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4EF04u) goto L_08A4EF04;
    return;
L_08A4EF04:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EF20;
      }
      goto L_08A4EF10;
    }
L_08A4EF10:
{
    float f24 = ctx.fpr[24];
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16025u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    { const float fs = f24; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f24 = std::bit_cast<float>(0x7FC00000u); else f24 = fs * ft; }
    hot_regs.g4 = g4;
    ctx.fpr[24] = f24;
    goto L_08A4EF20;
}
}
L_08A4EF20:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g5 = (0u - hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[22]);
    hot_regs.g31 = (0x08A4EF48u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(236)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4EF48u) goto L_08A4EF48;
    return;
L_08A4EF48:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 127u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-64));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[26] + hot_regs.f12;
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g5 = (0u - hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A4EF90u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(232)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4EF90u) goto L_08A4EF90;
    return;
L_08A4EF90:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 127u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-64));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[26] + hot_regs.f12;
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g5 = (0u - hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[22]);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(252)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A4EFDCu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 482u, 0x08B625C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4EFDCu) goto L_08A4EFDC;
    return;
L_08A4EFDC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6260)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6264)));
    hot_regs.g7 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x08A4EFF0u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4EFF0u) goto L_08A4EFF0;
    return;
L_08A4EFF0:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6252)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6256)));
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x08A4F004u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 445u, 0x08B62348u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F004u) goto L_08A4F004;
    return;
L_08A4F004:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A4F014u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F014u) goto L_08A4F014;
    return;
L_08A4F014:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A4F030u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F030u) goto L_08A4F030;
    return;
L_08A4F030:
    if (static_cast<std::int32_t>(hot_regs.g2) <= 0) {
    hot_regs.g5 = (ctx.gpr[19] | 0u);
        goto L_08A4F044;
    }
    goto L_08A4F038;
L_08A4F038:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    goto L_08A4F044;
L_08A4F044:
    hot_regs.g31 = (0x08A4F04Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F04Cu) goto L_08A4F04C;
    return;
L_08A4F04C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((hot_regs.f22 < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f12 = f12;
        goto L_08A4F060;
    }
    goto L_08A4F060;
}
L_08A4F060:
    hot_regs.g4 = (17056u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (17154u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f14;
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[16] = (hot_regs.g4 & 255u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g4 = (18076u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 16384u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[16]);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.f12 = hot_regs.f13 / hot_regs.f12;
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[17] = (hot_regs.g4 & 65535u);
    hot_regs.g31 = (0x08A4F0B8u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F0B8u) goto L_08A4F0B8;
    return;
L_08A4F0B8:
    hot_regs.g5 = (ctx.gpr[17] << 16u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 16u));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A4F0CCu);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 954u, 0x0898BB3Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F0CCu) goto L_08A4F0CC;
    return;
L_08A4F0CC:
    hot_regs.g2 = (0u | 1u);
    goto L_08A4F0D0;
L_08A4F0D0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(264)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(268)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(276)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(280)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(284)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(288)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(292)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(296)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(300)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(304)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(308)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A4F110:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-1296));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1236), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1240), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1244), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1252), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1256), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1260), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1264), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1268), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1272), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1276), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1280), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1284), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1288), hot_regs.g31);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (hot_regs.g6 & 255u);
    ctx.gpr[19] = (hot_regs.g7 & 255u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), 0u);
    ctx.gpr[20] = (0u | 0u);
    hot_regs.g31 = (0x08A4F16Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F16Cu) goto L_08A4F16C;
    return;
L_08A4F16C:
{
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[21] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[22] = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4F194;
      }
      goto L_08A4F184;
    }
}
L_08A4F184:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (hot_regs.g5 + g4);
    ctx.gpr[22] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_08A4F194;
}
L_08A4F194:
    ctx.gpr[23] = (0u | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F1D0;
      }
      goto L_08A4F1A4;
    }
L_08A4F1A4:
    hot_regs.g31 = (0x08A4F1ACu);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F1ACu) goto L_08A4F1AC;
    return;
L_08A4F1AC:
    { const bool branch_taken = ctx.gpr[30] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A4F1D0;
      }
      goto L_08A4F1B4;
    }
L_08A4F1B4:
    hot_regs.g31 = (0x08A4F1BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F1BCu) goto L_08A4F1BC;
    return;
L_08A4F1BC:
    hot_regs.g31 = (0x08A4F1C4u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 707u, 0x089476BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F1C4u) goto L_08A4F1C4;
    return;
L_08A4F1C4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F1D0;
      }
      goto L_08A4F1CC;
    }
L_08A4F1CC:
    ctx.gpr[23] = (0u | 1u);
    goto L_08A4F1D0;
L_08A4F1D0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A4F210;
      }
      goto L_08A4F1E0;
    }
L_08A4F1E0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 9u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A4F210;
      }
      goto L_08A4F1F0;
    }
L_08A4F1F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A4F210;
      }
      goto L_08A4F200;
    }
L_08A4F200:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 8u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A4F8AC;
      }
      goto L_08A4F210;
    }
L_08A4F210:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F398;
      }
      goto L_08A4F21C;
    }
L_08A4F21C:
    ctx.gpr[22] = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A4F22Cu);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 116u, 0x08A40A78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F22Cu) goto L_08A4F22C;
    return;
L_08A4F22C:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[30] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    hot_regs.g31 = (0x08A4F244u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F244u) goto L_08A4F244;
    return;
L_08A4F244:
    ctx.gpr[22] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(724)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (0x08A4F25Cu);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F25Cu) goto L_08A4F25C;
    return;
L_08A4F25C:
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08A4F268u);
    ctx.gpr[22] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F268u) goto L_08A4F268;
    return;
L_08A4F268:
    hot_regs.g7 = (ctx.gpr[22] << 6u);
    hot_regs.g7 = (hot_regs.g2 + hot_regs.g7);
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    hot_regs.g31 = (0x08A4F280u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 239u, 0x088619ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F280u) goto L_08A4F280;
    return;
L_08A4F280:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A4F2A8u);
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F2A8u) goto L_08A4F2A8;
    return;
L_08A4F2A8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F2F8;
      }
      goto L_08A4F2B0;
    }
L_08A4F2B0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F380;
      }
      goto L_08A4F2F8;
    }
L_08A4F2F8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F33C;
      }
      goto L_08A4F300;
    }
L_08A4F300:
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A4F318u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 570u, 0x08A3FB90u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F318u) goto L_08A4F318;
    return;
L_08A4F318:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g31 = (0x08A4F328u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 569u, 0x08A3FB78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F328u) goto L_08A4F328;
    return;
L_08A4F328:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F380;
      }
      goto L_08A4F33C;
    }
L_08A4F33C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(256));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A4F380;
L_08A4F380:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4FA44;
      }
      goto L_08A4F398;
    }
}
L_08A4F398:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F554;
      }
      goto L_08A4F3A0;
    }
L_08A4F3A0:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    hot_regs.g4 = (16000u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f20 = hot_regs.f12 - hot_regs.f13;
    hot_regs.g31 = (0x08A4F3D8u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 383u, 0x08A420FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F3D8u) goto L_08A4F3D8;
    return;
L_08A4F3D8:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (15692u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08A4F3F0u);
    hot_regs.f22 = hot_regs.f14 - hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F3F0u) goto L_08A4F3F0;
    return;
L_08A4F3F0:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g4 = (14979u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 4719u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f22 = hot_regs.f22 + hot_regs.f12;
    hot_regs.g31 = (0x08A4F41Cu);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 383u, 0x08A420FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F41Cu) goto L_08A4F41C;
    return;
L_08A4F41C:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (16161u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 18350u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = hot_regs.f14 + hot_regs.f15;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(304));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
    hot_regs.g6 = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A4F494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F494u) goto L_08A4F494;
    return;
L_08A4F494:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(84)));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A4F4B0;
      }
      goto L_08A4F4A8;
    }
}
L_08A4F4A8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A4F4C8;
      }
      goto L_08A4F4B0;
    }
L_08A4F4B0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(84)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = g4 != hot_regs.g5;
    g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(160));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4F4C8;
      }
      goto L_08A4F4C0;
    }
}
L_08A4F4C0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A4F4C8;
      }
      goto L_08A4F4C8;
    }
L_08A4F4C8:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(84)));
    hot_regs.g5 = (0u | 1u);
    if (g4 != hot_regs.g5) {
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(84)));
    hot_regs.g4 = g4;
        goto L_08A4F4E4;
    }
    goto L_08A4F4DC;
}
L_08A4F4DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A4F4F8;
      }
      goto L_08A4F4E4;
    }
L_08A4F4E4:
    hot_regs.g5 = (0u | 2u);
    if (hot_regs.g4 != hot_regs.g5) {
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(160));
        goto L_08A4F4F8;
    }
    goto L_08A4F4F0;
L_08A4F4F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A4F4F8;
      }
      goto L_08A4F4F8;
    }
L_08A4F4F8:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    g4 = (16153u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    f14 = f14 + hot_regs.f15;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(f14));
    g4 = (g29 + static_cast<std::uint32_t>(288));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(48);
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
    g4 = (g29 + static_cast<std::uint32_t>(304));
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
    g4 = (g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A4FA44;
      }
      goto L_08A4F554;
    }
}
}
L_08A4F554:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F704;
      }
      goto L_08A4F55C;
    }
L_08A4F55C:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    g4 = (g4 << 2u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g4 = (g4 + static_cast<std::uint32_t>(32));
    f20 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (16000u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(84)));
    g5 = (0u | 1u);
    { const bool branch_taken = g4 != g5;
    f20 = f20 + hot_regs.f12;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08A4F59C;
      }
      goto L_08A4F594;
    }
}
}
L_08A4F594:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A4F5B4;
      }
      goto L_08A4F59C;
    }
L_08A4F59C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(84)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = g4 != hot_regs.g5;
    g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(160));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4F5B4;
      }
      goto L_08A4F5AC;
    }
}
L_08A4F5AC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A4F5B4;
      }
      goto L_08A4F5B4;
    }
L_08A4F5B4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (15928u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 20972u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08A4F5CCu);
    hot_regs.f22 = hot_regs.f12 - hot_regs.f13;
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F5CCu) goto L_08A4F5CC;
    return;
L_08A4F5CC:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    hot_regs.g4 = (14979u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 4719u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f14; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f22 = hot_regs.f22 + hot_regs.f12;
    hot_regs.g31 = (0x08A4F5F8u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 383u, 0x08A420FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F5F8u) goto L_08A4F5F8;
    return;
L_08A4F5F8:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (16133u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 7864u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = hot_regs.f13 + hot_regs.f15;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(336));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(320));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
    hot_regs.g6 = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A4F670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F670u) goto L_08A4F670;
    return;
L_08A4F670:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(84)));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A4F688;
      }
      goto L_08A4F680;
    }
L_08A4F680:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A4F6A0;
      }
      goto L_08A4F688;
    }
L_08A4F688:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(84)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = g4 != hot_regs.g5;
    g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(160));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4F6A0;
      }
      goto L_08A4F698;
    }
}
L_08A4F698:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A4F6A0;
      }
      goto L_08A4F6A0;
    }
L_08A4F6A0:
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08A4F6ACu);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 383u, 0x08A420FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F6ACu) goto L_08A4F6AC;
    return;
L_08A4F6AC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(8)));
    g4 = (16128u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 + hot_regs.f13;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(f12));
    g4 = (g29 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(48);
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
    g4 = (g29 + static_cast<std::uint32_t>(336));
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
    g4 = (g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A4FA44;
      }
      goto L_08A4F704;
    }
}
}
L_08A4F704:
    hot_regs.g31 = (0x08A4F70Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F70Cu) goto L_08A4F70C;
    return;
L_08A4F70C:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (14979u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 4719u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f20 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f20 = fs * ft; }
    hot_regs.g4 = (48844u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f20 = hot_regs.f20 + hot_regs.f14;
    hot_regs.g31 = (0x08A4F744u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 383u, 0x08A420FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F744u) goto L_08A4F744;
    return;
L_08A4F744:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(4)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    g4 = (g4 << 2u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g4 = (g4 + static_cast<std::uint32_t>(32));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    f12 = f12 + hot_regs.f13;
    g4 = (15948u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(84)));
    g5 = (0u | 1u);
    { const bool branch_taken = g4 != g5;
    f12 = f12 + hot_regs.f14;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A4F790;
      }
      goto L_08A4F788;
    }
}
}
L_08A4F788:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A4F7A8;
      }
      goto L_08A4F790;
    }
L_08A4F790:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(84)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = g4 != hot_regs.g5;
    g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(160));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4F7A8;
      }
      goto L_08A4F7A0;
    }
}
L_08A4F7A0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A4F7A8;
      }
      goto L_08A4F7A8;
    }
L_08A4F7A8:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (16140u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = hot_regs.f13 + hot_regs.f14;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(368));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(352));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
    hot_regs.g6 = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A4F820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F820u) goto L_08A4F820;
    return;
L_08A4F820:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(84)));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A4F838;
      }
      goto L_08A4F830;
    }
L_08A4F830:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A4F850;
      }
      goto L_08A4F838;
    }
L_08A4F838:
{
    std::uint32_t g22 = ctx.gpr[22];
    hot_regs.g4 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(84)));
    hot_regs.g5 = (0u | 2u);
    if (hot_regs.g4 != hot_regs.g5) {
    g22 = (g22 + static_cast<std::uint32_t>(160));
    ctx.gpr[22] = g22;
        goto L_08A4F850;
    }
    goto L_08A4F848;
}
L_08A4F848:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A4F850;
      }
      goto L_08A4F850;
    }
L_08A4F850:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    g4 = (16128u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 + hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(f12));
    g4 = (g29 + static_cast<std::uint32_t>(352));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(48);
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
    g4 = (g29 + static_cast<std::uint32_t>(368));
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
    g4 = (g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A4FA44;
      }
      goto L_08A4F8AC;
    }
}
}
L_08A4F8AC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F8D8;
      }
      goto L_08A4F8B4;
    }
L_08A4F8B4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(400));
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
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4F930;
      }
      goto L_08A4F8D8;
    }
}
L_08A4F8D8:
    hot_regs.g4 = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (16358u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 26214u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(416));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A4F930;
L_08A4F930:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    hot_regs.g31 = (0x08A4F93Cu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F93Cu) goto L_08A4F93C;
    return;
L_08A4F93C:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(724)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (0x08A4F954u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F954u) goto L_08A4F954;
    return;
L_08A4F954:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A4F960u);
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F960u) goto L_08A4F960;
    return;
L_08A4F960:
    hot_regs.g7 = (ctx.gpr[19] << 6u);
    hot_regs.g7 = (hot_regs.g2 + hot_regs.g7);
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A4F97Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 239u, 0x088619ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F97Cu) goto L_08A4F97C;
    return;
L_08A4F97C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A4F9A4u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4F9A4u) goto L_08A4F9A4;
    return;
L_08A4F9A4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F9F4;
      }
      goto L_08A4F9AC;
    }
L_08A4F9AC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(448));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FA34;
      }
      goto L_08A4F9F4;
    }
L_08A4F9F4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(480));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A4FA34;
L_08A4FA34:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = g4;
    goto L_08A4FA44;
}
L_08A4FA44:
    hot_regs.g31 = (0x08A4FA4Cu);
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FA4Cu) goto L_08A4FA4C;
    return;
L_08A4FA4C:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (15395u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (16291u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08A4FA80u);
    ctx.fpr[24] = hot_regs.f12 - hot_regs.f22;
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FA80u) goto L_08A4FA80;
    return;
L_08A4FA80:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g31 = (0x08A4FA9Cu);
    ctx.fpr[26] = hot_regs.f13 - hot_regs.f22;
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FA9Cu) goto L_08A4FA9C;
    return;
L_08A4FA9C:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 - hot_regs.f22;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g31 = (0x08A4FACCu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FACCu) goto L_08A4FACC;
    return;
L_08A4FACC:
    hot_regs.g31 = (0x08A4FAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FAD4u) goto L_08A4FAD4;
    return;
L_08A4FAD4:
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A4FAE8u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 135u, 0x08A50F48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FAE8u) goto L_08A4FAE8;
    return;
L_08A4FAE8:
    hot_regs.g31 = (0x08A4FAF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FAF0u) goto L_08A4FAF0;
    return;
L_08A4FAF0:
    hot_regs.g31 = (0x08A4FAF8u);
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FAF8u) goto L_08A4FAF8;
    return;
L_08A4FAF8:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A4FB10u);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FB10u) goto L_08A4FB10;
    return;
L_08A4FB10:
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g31 = (0x08A4FB1Cu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 68u, 0x08A1C714u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FB1Cu) goto L_08A4FB1C;
    return;
L_08A4FB1C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FB9C;
      }
      goto L_08A4FB24;
    }
L_08A4FB24:
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g31 = (0x08A4FB30u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 63u, 0x08A1C6C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FB30u) goto L_08A4FB30;
    return;
L_08A4FB30:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FBF8;
      }
      goto L_08A4FB38;
    }
L_08A4FB38:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(544));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(512));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(528));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A4FB94u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 368u, 0x088AA874u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FB94u) goto L_08A4FB94;
    return;
L_08A4FB94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FBF8;
      }
      goto L_08A4FB9C;
    }
L_08A4FB9C:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(592));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(560));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(576));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A4FBF8u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 368u, 0x088AA874u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FBF8u) goto L_08A4FBF8;
    return;
L_08A4FBF8:
    hot_regs.g31 = (0x08A4FC00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FC00u) goto L_08A4FC00;
    return;
L_08A4FC00:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g5 = (0u | 2u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A4FC18u);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FC18u) goto L_08A4FC18;
    return;
L_08A4FC18:
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f15 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (16544u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16204u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08A4FC68u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FC68u) goto L_08A4FC68;
    return;
L_08A4FC68:
    hot_regs.g2 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8423), static_cast<std::uint8_t>(hot_regs.g2));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8068), ctx.gpr[17]);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    hot_regs.g31 = (0x08A4FCB0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 354u, 0x08A41D28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FCB0u) goto L_08A4FCB0;
    return;
L_08A4FCB0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8068), 0u);
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(8423), static_cast<std::uint8_t>(0u));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7764)));
    g4 = (g4 & 3u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4FCD8;
      }
      goto L_08A4FCC8;
    }
}
L_08A4FCC8:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g31 = (0x08A4FCD8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 318u, 0x08A41AACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FCD8u) goto L_08A4FCD8;
    return;
L_08A4FCD8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 70u, 0x08A5050Cu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A4FCE4;
    }
L_08A4FCE4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(612), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(f12));
    g4 = (g29 + static_cast<std::uint32_t>(608));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A4FD80;
      }
      goto L_08A4FD2C;
    }
}
}
L_08A4FD2C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = (hot_regs.g4 & 14u);
    hot_regs.g4 = (hot_regs.g4 ^ 14u);
    hot_regs.g4 = (hot_regs.g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 17u, 0x08A50174u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A4FD4C;
    }
L_08A4FD4C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(352)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (hot_regs.g5 + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    hot_regs.g31 = (0x08A4FD68u);
    ctx.gpr[19] = (hot_regs.g4 + hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 419u, 0x089D273Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FD68u) goto L_08A4FD68;
    return;
L_08A4FD68:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08A4FD78u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FD78u) goto L_08A4FD78;
    return;
L_08A4FD78:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 17u, 0x08A50174u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A4FD80;
    }
L_08A4FD80:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4FDAC;
      }
      goto L_08A4FDA0;
    }
}
L_08A4FDA0:
    ctx.gpr[20] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4FDB8;
      }
      goto L_08A4FDAC;
    }
L_08A4FDAC:
    ctx.gpr[20] = (0u | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(352)));
    goto L_08A4FDB8;
L_08A4FDB8:
    hot_regs.g31 = (0x08A4FDC0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 244u, 0x088E289Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FDC0u) goto L_08A4FDC0;
    return;
L_08A4FDC0:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 57u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 58u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 16u, 0x08A5016Cu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A4FDD0;
    }
L_08A4FDD0:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 16u, 0x08A5016Cu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A4FDD8;
    }
L_08A4FDD8:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    g4 = (g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(656));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(656)));
    f12 = f12 - hot_regs.f13;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(660)));
    f14 = f14 - hot_regs.f15;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(676), std::bit_cast<std::uint32_t>(f14));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A4FE1C;
      }
      goto L_08A4FE14;
    }
}
}
L_08A4FE14:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2256)));
      if (branch_taken) {
          goto L_08A4FE4C;
      }
      goto L_08A4FE1C;
    }
L_08A4FE1C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
        goto L_08A4FE48;
    }
    goto L_08A4FE28;
}
L_08A4FE28:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(1184));
    hot_regs.g31 = (0x08A4FE38u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FE38u) goto L_08A4FE38;
    return;
L_08A4FE38:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(1184)));
    aot_mem.aot_store8(g18 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_08A4FE48;
}
L_08A4FE48:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(184)));
    goto L_08A4FE4C;
L_08A4FE4C:
    hot_regs.g31 = (0x08A4FE54u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(672));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 605u, 0x08906CD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FE54u) goto L_08A4FE54;
    return;
L_08A4FE54:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF4C;
      }
      goto L_08A4FE60;
    }
L_08A4FE60:
    hot_regs.g31 = (0x08A4FE68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FE68u) goto L_08A4FE68;
    return;
L_08A4FE68:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A4FE74u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 108u, 0x089387ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FE74u) goto L_08A4FE74;
    return;
L_08A4FE74:
    hot_regs.g31 = (0x08A4FE7Cu);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 327u, 0x08911284u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FE7Cu) goto L_08A4FE7C;
    return;
L_08A4FE7C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FEF4;
      }
      goto L_08A4FE84;
    }
L_08A4FE84:
    hot_regs.g31 = (0x08A4FE8Cu);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 281u, 0x088E2A9Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FE8Cu) goto L_08A4FE8C;
    return;
L_08A4FE8C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    hot_regs.g4 = g4;
        goto L_08A4FEA4;
    }
    goto L_08A4FE98;
}
L_08A4FE98:
    hot_regs.g31 = (0x08A4FEA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FEA0u) goto L_08A4FEA0;
    return;
L_08A4FEA0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08A4FEA4;
L_08A4FEA4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08A4FEB0u);
    hot_regs.g6 = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 600u, 0x0893E5E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FEB0u) goto L_08A4FEB0;
    return;
L_08A4FEB0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FEF4;
      }
      goto L_08A4FEB8;
    }
L_08A4FEB8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    hot_regs.g4 = g4;
        goto L_08A4FED0;
    }
    goto L_08A4FEC4;
}
L_08A4FEC4:
    hot_regs.g31 = (0x08A4FECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FECCu) goto L_08A4FECC;
    return;
L_08A4FECC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08A4FED0;
L_08A4FED0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    hot_regs.g7 = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    hot_regs.g31 = (0x08A4FEE0u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FEE0u) goto L_08A4FEE0;
    return;
L_08A4FEE0:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = (16640u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08A4FEF4;
}
L_08A4FEF4:
    hot_regs.g4 = (ctx.gpr[23] & 255u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF08;
      }
      goto L_08A4FF00;
    }
L_08A4FF00:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A4FF20;
      }
      goto L_08A4FF08;
    }
L_08A4FF08:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 255u);
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    g4 = (g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_08A4FF20;
    }
    goto L_08A4FF20;
}
L_08A4FF20:
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g7 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(143)));
    ctx.gpr[8] = (ctx.gpr[19] & 255u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 45u);
    hot_regs.g31 = (0x08A4FF4Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FF4Cu) goto L_08A4FF4C;
    return;
L_08A4FF4C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(664)));
    hot_regs.g4 = (16204u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A4FF6Cu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FF6Cu) goto L_08A4FF6C;
    return;
L_08A4FF6C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 3u, 0x08A50024u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A4FF74;
    }
L_08A4FF74:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 3u, 0x08A50024u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A4FF80;
    }
L_08A4FF80:
    ctx.gpr[22] = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[22] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 3u, 0x08A50024u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A4FF90;
    }
L_08A4FF90:
    hot_regs.g4 = (48588u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.g31 = (0x08A4FFACu);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FFACu) goto L_08A4FFAC;
    return;
L_08A4FFAC:
    hot_regs.f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A4FFC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FFC4u) goto L_08A4FFC4;
    return;
L_08A4FFC4:
    hot_regs.f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A4FFDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4FFDCu) goto L_08A4FFDC;
    return;
L_08A4FFDC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f20 + f12;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = (g29 + static_cast<std::uint32_t>(656));
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(640));
    f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = (0u | 6u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = f12;
    ctx.pc = 0x08A50000u; return;}
}

}

void recomp_unit_0146(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0146_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_146(Runtime &runtime) {
    runtime.register_generated_unit(146u, 0x08A4C000u, 16384u, &recomp_unit_0146, &recomp_unit_0146_entry);
    runtime.register_function(0x08A4C000u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C008u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C010u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C024u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C030u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C070u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C0ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C100u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C10Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C128u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C134u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C13Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C158u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C170u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C1A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C250u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C260u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C29Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C2A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C2ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C2B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C2C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C304u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C3D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C41Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C434u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C494u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C49Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C4B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C4C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C4C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C4F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C508u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C510u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C520u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C568u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C570u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C578u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C580u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C5ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C5F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C60Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C630u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C63Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C648u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C650u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C678u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C68Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C69Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C6C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C6F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C714u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C7CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C7D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C814u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C81Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C82Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C854u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C85Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C864u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C86Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C888u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C890u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C898u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C8A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C8B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C94Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C964u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C9CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C9F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA04u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA20u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA38u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA54u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA74u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CAA4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CAACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CAB4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CABCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CAC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CADCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB34u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB48u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB50u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB5Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBB8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBE0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC28u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC40u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC50u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC54u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC64u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC6Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CCBCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CCC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CCF4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CCFCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD10u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD20u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD28u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD40u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD64u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD74u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD8Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD94u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CDACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CDB8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CDC8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CDD0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CDD8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CDDCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE44u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE5Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE9Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CEB0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CEB8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CEC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF28u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF30u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF40u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CFB0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CFC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CFD0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CFDCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CFE4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CFF0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CFF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CFFCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D014u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D01Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D028u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D030u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D034u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D04Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D050u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D058u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D064u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D07Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D088u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D0A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D0B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D0C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D0D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D0D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D0F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D0FCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D104u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D10Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D114u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D11Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D12Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D134u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D14Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D178u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D188u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D204u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D218u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D29Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D2A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D2D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D314u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D328u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D338u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D348u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D350u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D358u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D380u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D390u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D3A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D3A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D3B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D3DCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D3F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D3F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D404u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D424u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D438u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D458u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D468u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D478u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D480u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D488u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D4A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D4C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D4D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D4E8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D4F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D4F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D524u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D538u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D540u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D550u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D55Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D560u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D570u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D584u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D590u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D5B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D5BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D5C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D5CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D5D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D5FCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D604u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D610u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D618u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D620u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D62Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D634u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D654u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D65Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D668u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D670u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D678u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D684u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D68Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D714u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D71Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D744u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D74Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D788u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D798u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D7A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D7C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D7DCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D824u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D8A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D8B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D8BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D8C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D8C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D93Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D944u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D978u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D9B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA64u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DAB4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB00u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB18u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB60u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB7Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB90u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DBACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DBFCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC24u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC2Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC34u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC38u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC8Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC98u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DCA0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DCA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DCB0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DCB8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DCBCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DCD8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DCE4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD54u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDA0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDB0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDB8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDC0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDCCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDD8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE30u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE74u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE78u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE84u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE8Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE94u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE9Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DEA4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DEA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DEB0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DEE0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF10u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF40u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF70u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DFA0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DFD0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E000u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E004u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E018u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E070u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E078u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E0C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E140u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E150u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E1B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E1BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E1C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E1CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E1D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E1E0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E1ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E20Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E218u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E22Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E248u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E260u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E268u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E284u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E290u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E2A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E2B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E35Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E374u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E378u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E3A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E418u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E454u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E47Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E484u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E48Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E508u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E510u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E524u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E52Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E530u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E53Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E578u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E5A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E5ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E5D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E5F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E618u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E63Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E6A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E6ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E6B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E6BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E6C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E6CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E6E0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E6F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E75Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E764u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E774u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E77Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E790u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E798u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E79Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E7A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E7E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E810u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E818u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E83Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E860u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E884u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E8A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E910u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E918u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E924u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E930u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E934u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E948u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E94Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E990u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA08u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA38u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA98u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EAC8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EAF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EB28u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EB58u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EB5Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EB64u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EC54u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EC68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EC70u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EC78u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EC98u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ECC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ED24u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ED2Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ED60u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ED88u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ED94u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EDB4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EDC8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EDDCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EDECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EDF4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE08u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE10u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE18u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE5Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE64u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE6Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE7Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE84u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE9Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EEB0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EEC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EED8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EEE4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EEECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EEFCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EF04u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EF10u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EF20u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EF48u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EF90u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EFDCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EFF0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F004u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F014u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F030u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F038u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F044u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F04Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F060u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F0B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F0CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F0D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F110u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F16Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F184u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F194u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F1A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F1ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F1B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F1BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F1C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F1CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F1D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F1E0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F1F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F200u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F210u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F21Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F22Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F244u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F25Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F268u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F280u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F2A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F2B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F2F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F300u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F318u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F328u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F33Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F380u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F398u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F3A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F3D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F3F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F41Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F494u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F4A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F4B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F4C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F4C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F4DCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F4E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F4F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F4F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F554u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F55Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F594u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F59Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F5ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F5B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F5CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F5F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F670u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F680u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F688u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F698u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F6A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F6ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F704u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F70Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F744u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F788u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F790u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F7A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F7A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F820u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F830u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F838u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F848u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F850u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F8ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F8B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F8D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F930u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F93Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F954u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F960u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F97Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F9A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F9ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F9F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA34u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA44u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA80u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA9Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FACCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FAD4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FAE8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FAF0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FAF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB10u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB1Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB24u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB30u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB38u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB94u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB9Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FBF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC00u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC18u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FCB0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FCC8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FCD8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FCE4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD2Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD78u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD80u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FDA0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FDACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FDB8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FDC0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FDD0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FDD8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE1Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE28u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE38u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE48u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE54u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE60u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE74u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE7Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE84u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE8Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE98u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FEA0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FEA4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FEB0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FEB8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FEC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FECCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FED0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FEE0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FEF4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF00u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF08u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF20u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF6Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF74u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF80u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF90u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FFACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FFC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FFDCu, &recomp_unit_0146, "recomp_unit_0146");
}
} // namespace psprecomp
