#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0088[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0,
    0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 19, 0, 20, 0, 0, 21, 0, 0, 22, 0, 23, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 30,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 0, 38, 0,
    0, 39, 0, 0, 0, 40, 0, 0, 41, 42, 43, 0, 44, 0, 0, 45, 46, 0, 0, 0, 0, 47, 0, 48, 49, 50, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 55, 56, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0,
    0, 59, 60, 0, 0, 0, 0, 61, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 0, 0,
    0, 67, 0, 0, 68, 0, 69, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0,
    0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98,
    0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 102, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 108, 109, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0,
    0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 115, 116, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 120, 121, 0, 122, 0, 0,
    0, 123, 0, 0, 0, 124, 0, 125, 126, 127, 0, 128, 0, 0, 0, 129, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 133,
    0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 0, 0, 0, 140, 141, 142, 0, 143, 144, 0, 0, 0,
    0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 150, 0, 0, 0, 0, 151, 0, 152, 0,
    0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 155, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166,
    0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 176, 0, 0, 0,
    177, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0,
    183, 0, 0, 184, 0, 0, 185, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0,
    0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0,
    0, 204, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0,
    0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0,
    0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0,
    0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 234,
    0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0,
    0, 240, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0,
    0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256,
    0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 259, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0,
    272, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 279, 0, 280, 0, 281, 0, 282, 0, 0,
    0, 0, 283, 0, 0, 284, 0, 285, 0, 286, 0, 0, 0, 287, 0, 0, 288, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 291, 0, 0, 0, 292, 0, 0, 0, 293, 0, 294, 295, 296, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0,
    300, 301, 302, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 309, 310, 0,
    0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 315, 316, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 319, 0,
    0, 320, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 331, 332, 0, 0, 0, 0,
    0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0,
    347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0,
    0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 355, 0, 0,
    0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 359, 0, 0, 360, 0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 0, 366,
    0, 367, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 373, 0, 374, 375, 0, 0, 376, 0, 377, 0, 0, 378,
    0, 0, 379, 0, 0, 380, 381, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0,
    0, 0, 388, 0, 0, 389, 0, 0, 390, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0, 394, 0, 395, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0,
    398, 0, 399, 0, 0, 400, 0, 0, 401, 0, 402, 0, 0, 0, 403, 0, 0, 404, 0, 405, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 408,
    0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 413, 0, 414, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0,
    422, 0, 0, 423, 0, 424, 0, 425, 0, 0, 426, 0, 0, 0, 427, 0, 428, 0, 429, 0, 0, 430, 0, 431, 0, 432, 0, 0, 0, 0, 0, 0,
    433, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 0, 438,
    0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 446, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 449, 450, 0, 451,
    0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 458,
    0, 459, 0, 460, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 464,
    0, 0, 0, 465, 0, 0, 466, 467, 0, 0, 0, 468, 469, 0, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 0,
    473, 0, 0, 474, 0, 475, 476, 0, 0, 477, 478, 0, 0, 479, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 483, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0,
    0, 0, 0, 0, 487, 0, 0, 488, 0, 489, 490, 0, 0, 491, 0, 0, 0, 492, 493, 0, 0, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 496,
    0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0,
    504, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 507, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 509, 0, 510, 0, 511, 0, 0, 0,
    0, 512, 0, 0, 0, 0, 513, 0, 0, 514, 0, 0, 0, 0, 0, 515, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527,
    0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 532, 0, 0,
    0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 536, 0, 0, 0, 0,
    0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 539, 540, 0, 0, 541, 0, 0, 542, 0, 543, 0, 544, 0, 545, 0,
    0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 548, 0, 549, 0, 550, 0, 551, 0, 0, 0, 0, 0, 552, 0, 553,
    0, 554, 0, 0, 0, 0, 555, 0, 556, 0, 557, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 560, 0, 0, 0, 0, 0, 0, 561,
    0, 0, 0, 0, 562, 0, 563, 0, 564, 0, 0, 0, 0, 0, 0, 0, 565, 0, 566, 0, 0, 0, 0, 567, 0, 568, 0, 569, 0, 570, 0, 571,
    0, 0, 0, 572, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 577,
    0, 578, 0, 579, 0, 580, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 583, 0, 584, 585, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 587, 0,
    0, 588, 0, 589, 590, 0, 0, 0, 0, 0, 0, 591, 0, 592, 0, 0, 0, 0, 593, 0, 0, 0, 594, 0, 0, 595, 0, 596, 597, 0, 0, 0,
    0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 600, 0, 0, 601, 0, 602, 0, 603, 0, 0, 604, 0, 605, 0, 0, 606, 0, 607, 0, 0, 608, 0,
    609, 0, 0, 0, 610, 0, 0, 0, 0, 0, 611, 0, 612, 0, 613, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0,
    617, 0, 618, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0, 624, 0,
    625, 0, 0, 626, 0, 627, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 630, 0, 0, 631, 0, 632, 0, 0, 633,
    0, 0, 0, 0, 0, 0, 634, 0, 0, 635, 0, 636, 0, 0, 637, 0, 0, 0, 638, 0, 639, 0, 640, 0, 641, 0, 0, 0, 0, 0, 0, 642,
    0, 643, 0, 644, 0, 645, 0, 646, 0, 647, 0, 648, 0, 649, 0, 650, 0, 651, 0, 652, 653, 0, 0, 654, 0, 655, 0, 0, 0, 0, 656, 0,
    657, 0, 658, 0, 659, 0, 660, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0,
    0, 0, 0, 665, 0, 0, 666, 0, 667, 0, 668, 0, 669, 0, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 672, 0, 0, 0, 673,
    0, 0, 0, 0, 0, 674, 0, 675, 0, 676, 0, 677, 0, 0, 678, 0, 679, 0, 680, 0, 0, 681, 0, 0, 0, 682, 0, 683, 0, 0, 684, 0,
    685, 0, 0, 686, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 689, 0, 690, 0, 691, 0, 692, 0, 0, 0, 0, 0, 0,
    0, 0, 693, 0, 0, 694, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 696, 0, 697, 0, 698, 0, 699, 0, 0, 700, 0, 0, 0, 701, 0,
    0, 0, 0, 702, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 706, 0, 707, 0, 708, 0,
    709, 0, 0, 0, 710, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 713, 0, 714, 0, 715, 0, 0, 716, 0,
    717, 0, 718, 0, 0, 719, 0, 0, 0, 720, 0, 721, 0, 0, 722, 0, 723, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0,
    726, 0, 727, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 730, 0, 731, 0, 732, 0, 0, 0, 0, 733, 0,
    734, 0, 735, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 739, 0, 0, 0, 740, 0, 741,
};
void recomp_unit_0088_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08964000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0088[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08964000;
    case 2u: goto L_08964084;
    case 3u: goto L_0896408C;
    case 4u: goto L_08964094;
    case 5u: goto L_0896409C;
    case 6u: goto L_089640B8;
    case 7u: goto L_089640C0;
    case 8u: goto L_08964108;
    case 9u: goto L_08964138;
    case 10u: goto L_08964144;
    case 11u: goto L_0896414C;
    case 12u: goto L_0896415C;
    case 13u: goto L_089641EC;
    case 14u: goto L_089641F8;
    case 15u: goto L_0896420C;
    case 16u: goto L_08964224;
    case 17u: goto L_08964230;
    case 18u: goto L_0896423C;
    case 19u: goto L_08964244;
    case 20u: goto L_0896424C;
    case 21u: goto L_08964258;
    case 22u: goto L_08964264;
    case 23u: goto L_0896426C;
    case 24u: goto L_08964280;
    case 25u: goto L_0896433C;
    case 26u: goto L_089644F8;
    case 27u: goto L_08964534;
    case 28u: goto L_08964540;
    case 29u: goto L_08964578;
    case 30u: goto L_0896457C;
    case 31u: goto L_089645A0;
    case 32u: goto L_089645B0;
    case 33u: goto L_089645B8;
    case 34u: goto L_089645C4;
    case 35u: goto L_089645D0;
    case 36u: goto L_089645DC;
    case 37u: goto L_089645E8;
    case 38u: goto L_089645F8;
    case 39u: goto L_08964604;
    case 40u: goto L_08964614;
    case 41u: goto L_08964620;
    case 42u: goto L_08964624;
    case 43u: goto L_08964628;
    case 44u: goto L_08964630;
    case 45u: goto L_0896463C;
    case 46u: goto L_08964640;
    case 47u: goto L_08964654;
    case 48u: goto L_0896465C;
    case 49u: goto L_08964660;
    case 50u: goto L_08964664;
    case 51u: goto L_08964698;
    case 52u: goto L_089646A0;
    case 53u: goto L_089646B0;
    case 54u: goto L_089646C4;
    case 55u: goto L_089646D0;
    case 56u: goto L_089646D4;
    case 57u: goto L_089646EC;
    case 58u: goto L_089646F4;
    case 59u: goto L_08964704;
    case 60u: goto L_08964708;
    case 61u: goto L_0896471C;
    case 62u: goto L_08964728;
    case 63u: goto L_08964730;
    case 64u: goto L_0896475C;
    case 65u: goto L_08964768;
    case 66u: goto L_08964770;
    case 67u: goto L_08964784;
    case 68u: goto L_08964790;
    case 69u: goto L_08964798;
    case 70u: goto L_089647AC;
    case 71u: goto L_089647B4;
    case 72u: goto L_089647C8;
    case 73u: goto L_089647D0;
    case 74u: goto L_08964A14;
    case 75u: goto L_08964B98;
    case 76u: goto L_08964BD8;
    case 77u: goto L_08964C1C;
    case 78u: goto L_08964C24;
    case 79u: goto L_08964CC8;
    case 80u: goto L_08964E08;
    case 81u: goto L_08964EE0;
    case 82u: goto L_08964F14;
    case 83u: goto L_08964F28;
    case 84u: goto L_08964F54;
    case 85u: goto L_08964F68;
    case 86u: goto L_08964FC0;
    case 87u: goto L_08964FD4;
    case 88u: goto L_08964FE8;
    case 89u: goto L_08964FF4;
    case 90u: goto L_08965008;
    case 91u: goto L_08965034;
    case 92u: goto L_08965070;
    case 93u: goto L_089650F8;
    case 94u: goto L_0896512C;
    case 95u: goto L_08965144;
    case 96u: goto L_08965154;
    case 97u: goto L_0896516C;
    case 98u: goto L_0896517C;
    case 99u: goto L_08965194;
    case 100u: goto L_089651A4;
    case 101u: goto L_089651BC;
    case 102u: goto L_089651C0;
    case 103u: goto L_089651DC;
    case 104u: goto L_089651E4;
    case 105u: goto L_08965214;
    case 106u: goto L_0896522C;
    case 107u: goto L_08965244;
    case 108u: goto L_08965248;
    case 109u: goto L_0896524C;
    case 110u: goto L_08965254;
    case 111u: goto L_08965264;
    case 112u: goto L_08965274;
    case 113u: goto L_0896528C;
    case 114u: goto L_089652A4;
    case 115u: goto L_089652A8;
    case 116u: goto L_089652AC;
    case 117u: goto L_089652B4;
    case 118u: goto L_089652CC;
    case 119u: goto L_089652E4;
    case 120u: goto L_089652E8;
    case 121u: goto L_089652EC;
    case 122u: goto L_089652F4;
    case 123u: goto L_08965304;
    case 124u: goto L_08965314;
    case 125u: goto L_0896531C;
    case 126u: goto L_08965320;
    case 127u: goto L_08965324;
    case 128u: goto L_0896532C;
    case 129u: goto L_0896533C;
    case 130u: goto L_08965340;
    case 131u: goto L_08965360;
    case 132u: goto L_0896536C;
    case 133u: goto L_0896537C;
    case 134u: goto L_08965388;
    case 135u: goto L_089653A8;
    case 136u: goto L_089653B0;
    case 137u: goto L_089653B8;
    case 138u: goto L_089653C0;
    case 139u: goto L_089653C8;
    case 140u: goto L_089653DC;
    case 141u: goto L_089653E0;
    case 142u: goto L_089653E4;
    case 143u: goto L_089653EC;
    case 144u: goto L_089653F0;
    case 145u: goto L_0896540C;
    case 146u: goto L_08965428;
    case 147u: goto L_0896543C;
    case 148u: goto L_08965448;
    case 149u: goto L_08965454;
    case 150u: goto L_0896545C;
    case 151u: goto L_08965470;
    case 152u: goto L_08965478;
    case 153u: goto L_0896549C;
    case 154u: goto L_089654A8;
    case 155u: goto L_089654B0;
    case 156u: goto L_089654B4;
    case 157u: goto L_089654C4;
    case 158u: goto L_089654D4;
    case 159u: goto L_089654F0;
    case 160u: goto L_089654FC;
    case 161u: goto L_08965528;
    case 162u: goto L_08965534;
    case 163u: goto L_08965540;
    case 164u: goto L_0896555C;
    case 165u: goto L_089655E8;
    case 166u: goto L_089655FC;
    case 167u: goto L_08965610;
    case 168u: goto L_0896561C;
    case 169u: goto L_08965630;
    case 170u: goto L_08965650;
    case 171u: goto L_08965680;
    case 172u: goto L_089656A0;
    case 173u: goto L_089656BC;
    case 174u: goto L_089656D4;
    case 175u: goto L_089656EC;
    case 176u: goto L_089656F0;
    case 177u: goto L_08965700;
    case 178u: goto L_08965714;
    case 179u: goto L_08965720;
    case 180u: goto L_08965740;
    case 181u: goto L_0896575C;
    case 182u: goto L_0896576C;
    case 183u: goto L_08965780;
    case 184u: goto L_0896578C;
    case 185u: goto L_08965798;
    case 186u: goto L_089657A0;
    case 187u: goto L_089657B4;
    case 188u: goto L_089657D4;
    case 189u: goto L_089657E4;
    case 190u: goto L_089657F0;
    case 191u: goto L_08965804;
    case 192u: goto L_08965818;
    case 193u: goto L_08965830;
    case 194u: goto L_08965840;
    case 195u: goto L_0896584C;
    case 196u: goto L_08965864;
    case 197u: goto L_0896589C;
    case 198u: goto L_089658AC;
    case 199u: goto L_089658B8;
    case 200u: goto L_089658D4;
    case 201u: goto L_089659AC;
    case 202u: goto L_089659CC;
    case 203u: goto L_089659EC;
    case 204u: goto L_08965A04;
    case 205u: goto L_08965A14;
    case 206u: goto L_08965A20;
    case 207u: goto L_08965A38;
    case 208u: goto L_08965A60;
    case 209u: goto L_08965A70;
    case 210u: goto L_08965A7C;
    case 211u: goto L_08965AAC;
    case 212u: goto L_08965AC4;
    case 213u: goto L_08965AD4;
    case 214u: goto L_08965AE0;
    case 215u: goto L_08965AF8;
    case 216u: goto L_08965B18;
    case 217u: goto L_08965B28;
    case 218u: goto L_08965B34;
    case 219u: goto L_08965B50;
    case 220u: goto L_08965B68;
    case 221u: goto L_08965B78;
    case 222u: goto L_08965B84;
    case 223u: goto L_08965B9C;
    case 224u: goto L_08965BBC;
    case 225u: goto L_08965BCC;
    case 226u: goto L_08965BD8;
    case 227u: goto L_08965BF4;
    case 228u: goto L_08965C0C;
    case 229u: goto L_08965C1C;
    case 230u: goto L_08965C28;
    case 231u: goto L_08965C40;
    case 232u: goto L_08965C60;
    case 233u: goto L_08965C70;
    case 234u: goto L_08965C7C;
    case 235u: goto L_08965C98;
    case 236u: goto L_08965CB0;
    case 237u: goto L_08965CC0;
    case 238u: goto L_08965CCC;
    case 239u: goto L_08965CE4;
    case 240u: goto L_08965D04;
    case 241u: goto L_08965D14;
    case 242u: goto L_08965D20;
    case 243u: goto L_08965D3C;
    case 244u: goto L_08965D54;
    case 245u: goto L_08965D64;
    case 246u: goto L_08965D70;
    case 247u: goto L_08965D88;
    case 248u: goto L_08965D9C;
    case 249u: goto L_08965DA8;
    case 250u: goto L_08965DF8;
    case 251u: goto L_08965E10;
    case 252u: goto L_08965E24;
    case 253u: goto L_08965E44;
    case 254u: goto L_08965E4C;
    case 255u: goto L_08965E64;
    case 256u: goto L_08965E7C;
    case 257u: goto L_08965E90;
    case 258u: goto L_08965EA8;
    case 259u: goto L_08965F04;
    case 260u: goto L_08965F10;
    case 261u: goto L_08965F1C;
    case 262u: goto L_08965F28;
    case 263u: goto L_08965F34;
    case 264u: goto L_08965F40;
    case 265u: goto L_08965FA4;
    case 266u: goto L_08965FB0;
    case 267u: goto L_08965FBC;
    case 268u: goto L_08965FC8;
    case 269u: goto L_08965FD4;
    case 270u: goto L_08965FE0;
    case 271u: goto L_08965FF4;
    case 272u: goto L_08966000;
    case 273u: goto L_08966014;
    case 274u: goto L_08966020;
    case 275u: goto L_08966084;
    case 276u: goto L_089660A0;
    case 277u: goto L_089660C8;
    case 278u: goto L_089660D0;
    case 279u: goto L_089660DC;
    case 280u: goto L_089660E4;
    case 281u: goto L_089660EC;
    case 282u: goto L_089660F4;
    case 283u: goto L_08966108;
    case 284u: goto L_08966114;
    case 285u: goto L_0896611C;
    case 286u: goto L_08966124;
    case 287u: goto L_08966134;
    case 288u: goto L_08966140;
    case 289u: goto L_08966148;
    case 290u: goto L_08966158;
    case 291u: goto L_08966184;
    case 292u: goto L_08966194;
    case 293u: goto L_089661A4;
    case 294u: goto L_089661AC;
    case 295u: goto L_089661B0;
    case 296u: goto L_089661B4;
    case 297u: goto L_089661C4;
    case 298u: goto L_089661D0;
    case 299u: goto L_089661E8;
    case 300u: goto L_08966200;
    case 301u: goto L_08966204;
    case 302u: goto L_08966208;
    case 303u: goto L_08966218;
    case 304u: goto L_08966224;
    case 305u: goto L_08966234;
    case 306u: goto L_08966240;
    case 307u: goto L_08966258;
    case 308u: goto L_08966270;
    case 309u: goto L_08966274;
    case 310u: goto L_08966278;
    case 311u: goto L_08966288;
    case 312u: goto L_08966294;
    case 313u: goto L_089662AC;
    case 314u: goto L_089662C4;
    case 315u: goto L_089662C8;
    case 316u: goto L_089662CC;
    case 317u: goto L_089662DC;
    case 318u: goto L_089662E8;
    case 319u: goto L_089662F8;
    case 320u: goto L_08966304;
    case 321u: goto L_08966314;
    case 322u: goto L_08966320;
    case 323u: goto L_08966330;
    case 324u: goto L_0896633C;
    case 325u: goto L_08966358;
    case 326u: goto L_08966398;
    case 327u: goto L_089663AC;
    case 328u: goto L_089663B8;
    case 329u: goto L_089663C4;
    case 330u: goto L_089663E0;
    case 331u: goto L_089663E8;
    case 332u: goto L_089663EC;
    case 333u: goto L_0896640C;
    case 334u: goto L_08966498;
    case 335u: goto L_089664A4;
    case 336u: goto L_089664B0;
    case 337u: goto L_089664BC;
    case 338u: goto L_089664C8;
    case 339u: goto L_089664D4;
    case 340u: goto L_08966590;
    case 341u: goto L_0896659C;
    case 342u: goto L_089665A8;
    case 343u: goto L_089665B4;
    case 344u: goto L_089665C0;
    case 345u: goto L_089665CC;
    case 346u: goto L_089665F4;
    case 347u: goto L_08966600;
    case 348u: goto L_08966628;
    case 349u: goto L_08966634;
    case 350u: goto L_089666F0;
    case 351u: goto L_08966708;
    case 352u: goto L_08966748;
    case 353u: goto L_08966758;
    case 354u: goto L_08966764;
    case 355u: goto L_08966774;
    case 356u: goto L_08966784;
    case 357u: goto L_089667A4;
    case 358u: goto L_089667B0;
    case 359u: goto L_089667BC;
    case 360u: goto L_089667C8;
    case 361u: goto L_089667D0;
    case 362u: goto L_089667D8;
    case 363u: goto L_089667E0;
    case 364u: goto L_089667E8;
    case 365u: goto L_089667F0;
    case 366u: goto L_089667FC;
    case 367u: goto L_08966804;
    case 368u: goto L_0896680C;
    case 369u: goto L_08966824;
    case 370u: goto L_08966830;
    case 371u: goto L_0896683C;
    case 372u: goto L_08966848;
    case 373u: goto L_08966850;
    case 374u: goto L_08966858;
    case 375u: goto L_0896685C;
    case 376u: goto L_08966868;
    case 377u: goto L_08966870;
    case 378u: goto L_0896687C;
    case 379u: goto L_08966888;
    case 380u: goto L_08966894;
    case 381u: goto L_08966898;
    case 382u: goto L_089668A8;
    case 383u: goto L_089668B4;
    case 384u: goto L_089668CC;
    case 385u: goto L_089668D4;
    case 386u: goto L_089668E4;
    case 387u: goto L_089668F8;
    case 388u: goto L_08966908;
    case 389u: goto L_08966914;
    case 390u: goto L_08966920;
    case 391u: goto L_0896692C;
    case 392u: goto L_08966938;
    case 393u: goto L_08966944;
    case 394u: goto L_0896694C;
    case 395u: goto L_08966954;
    case 396u: goto L_0896695C;
    case 397u: goto L_08966974;
    case 398u: goto L_08966980;
    case 399u: goto L_08966988;
    case 400u: goto L_08966994;
    case 401u: goto L_089669A0;
    case 402u: goto L_089669A8;
    case 403u: goto L_089669B8;
    case 404u: goto L_089669C4;
    case 405u: goto L_089669CC;
    case 406u: goto L_089669DC;
    case 407u: goto L_089669EC;
    case 408u: goto L_089669FC;
    case 409u: goto L_08966A08;
    case 410u: goto L_08966A14;
    case 411u: goto L_08966A2C;
    case 412u: goto L_08966A38;
    case 413u: goto L_08966A44;
    case 414u: goto L_08966A4C;
    case 415u: goto L_08966A58;
    case 416u: goto L_08966A64;
    case 417u: goto L_08966A94;
    case 418u: goto L_08966ABC;
    case 419u: goto L_08966AC8;
    case 420u: goto L_08966AD4;
    case 421u: goto L_08966AE4;
    case 422u: goto L_08966B00;
    case 423u: goto L_08966B0C;
    case 424u: goto L_08966B14;
    case 425u: goto L_08966B1C;
    case 426u: goto L_08966B28;
    case 427u: goto L_08966B38;
    case 428u: goto L_08966B40;
    case 429u: goto L_08966B48;
    case 430u: goto L_08966B54;
    case 431u: goto L_08966B5C;
    case 432u: goto L_08966B64;
    case 433u: goto L_08966B80;
    case 434u: goto L_08966B8C;
    case 435u: goto L_08966BA0;
    case 436u: goto L_08966BD8;
    case 437u: goto L_08966BE0;
    case 438u: goto L_08966BFC;
    case 439u: goto L_08966C20;
    case 440u: goto L_08966C58;
    case 441u: goto L_08966C74;
    case 442u: goto L_08966CA8;
    case 443u: goto L_08966CB0;
    case 444u: goto L_08966CB8;
    case 445u: goto L_08966CD0;
    case 446u: goto L_08966D04;
    case 447u: goto L_08966D0C;
    case 448u: goto L_08966D68;
    case 449u: goto L_08966D70;
    case 450u: goto L_08966D74;
    case 451u: goto L_08966D7C;
    case 452u: goto L_08966D94;
    case 453u: goto L_08966DA0;
    case 454u: goto L_08966DAC;
    case 455u: goto L_08966DC8;
    case 456u: goto L_08966DE0;
    case 457u: goto L_08966DF4;
    case 458u: goto L_08966DFC;
    case 459u: goto L_08966E04;
    case 460u: goto L_08966E0C;
    case 461u: goto L_08966E14;
    case 462u: goto L_08966E48;
    case 463u: goto L_08966E58;
    case 464u: goto L_08966E7C;
    case 465u: goto L_08966E8C;
    case 466u: goto L_08966E98;
    case 467u: goto L_08966E9C;
    case 468u: goto L_08966EAC;
    case 469u: goto L_08966EB0;
    case 470u: goto L_08966EBC;
    case 471u: goto L_08966ED8;
    case 472u: goto L_08966EE8;
    case 473u: goto L_08966F00;
    case 474u: goto L_08966F0C;
    case 475u: goto L_08966F14;
    case 476u: goto L_08966F18;
    case 477u: goto L_08966F24;
    case 478u: goto L_08966F28;
    case 479u: goto L_08966F34;
    case 480u: goto L_08966F40;
    case 481u: goto L_08966F70;
    case 482u: goto L_08966FA8;
    case 483u: goto L_08966FB0;
    case 484u: goto L_08966FCC;
    case 485u: goto L_08966FE4;
    case 486u: goto L_08966FF4;
    case 487u: goto L_08967010;
    case 488u: goto L_0896701C;
    case 489u: goto L_08967024;
    case 490u: goto L_08967028;
    case 491u: goto L_08967034;
    case 492u: goto L_08967044;
    case 493u: goto L_08967048;
    case 494u: goto L_0896705C;
    case 495u: goto L_08967070;
    case 496u: goto L_0896707C;
    case 497u: goto L_0896708C;
    case 498u: goto L_0896709C;
    case 499u: goto L_089670AC;
    case 500u: goto L_089670BC;
    case 501u: goto L_089670CC;
    case 502u: goto L_089670E4;
    case 503u: goto L_089670F8;
    case 504u: goto L_08967100;
    case 505u: goto L_08967108;
    case 506u: goto L_08967130;
    case 507u: goto L_08967134;
    case 508u: goto L_08967140;
    case 509u: goto L_08967160;
    case 510u: goto L_08967168;
    case 511u: goto L_08967170;
    case 512u: goto L_08967184;
    case 513u: goto L_08967198;
    case 514u: goto L_089671A4;
    case 515u: goto L_089671BC;
    case 516u: goto L_089671C8;
    case 517u: goto L_0896720C;
    case 518u: goto L_0896721C;
    case 519u: goto L_08967244;
    case 520u: goto L_0896724C;
    case 521u: goto L_0896725C;
    case 522u: goto L_0896726C;
    case 523u: goto L_089672A8;
    case 524u: goto L_089672B0;
    case 525u: goto L_089672CC;
    case 526u: goto L_089672D4;
    case 527u: goto L_089672FC;
    case 528u: goto L_0896731C;
    case 529u: goto L_08967330;
    case 530u: goto L_08967338;
    case 531u: goto L_0896736C;
    case 532u: goto L_08967374;
    case 533u: goto L_08967388;
    case 534u: goto L_089673A0;
    case 535u: goto L_089673E8;
    case 536u: goto L_089673EC;
    case 537u: goto L_0896740C;
    case 538u: goto L_0896743C;
    case 539u: goto L_08967444;
    case 540u: goto L_08967448;
    case 541u: goto L_08967454;
    case 542u: goto L_08967460;
    case 543u: goto L_08967468;
    case 544u: goto L_08967470;
    case 545u: goto L_08967478;
    case 546u: goto L_08967484;
    case 547u: goto L_089674B8;
    case 548u: goto L_089674C4;
    case 549u: goto L_089674CC;
    case 550u: goto L_089674D4;
    case 551u: goto L_089674DC;
    case 552u: goto L_089674F4;
    case 553u: goto L_089674FC;
    case 554u: goto L_08967504;
    case 555u: goto L_08967518;
    case 556u: goto L_08967520;
    case 557u: goto L_08967528;
    case 558u: goto L_08967530;
    case 559u: goto L_08967554;
    case 560u: goto L_08967560;
    case 561u: goto L_0896757C;
    case 562u: goto L_08967590;
    case 563u: goto L_08967598;
    case 564u: goto L_089675A0;
    case 565u: goto L_089675C0;
    case 566u: goto L_089675C8;
    case 567u: goto L_089675DC;
    case 568u: goto L_089675E4;
    case 569u: goto L_089675EC;
    case 570u: goto L_089675F4;
    case 571u: goto L_089675FC;
    case 572u: goto L_0896760C;
    case 573u: goto L_08967620;
    case 574u: goto L_08967630;
    case 575u: goto L_08967650;
    case 576u: goto L_08967670;
    case 577u: goto L_0896767C;
    case 578u: goto L_08967684;
    case 579u: goto L_0896768C;
    case 580u: goto L_08967694;
    case 581u: goto L_089676A0;
    case 582u: goto L_089676B4;
    case 583u: goto L_089676C0;
    case 584u: goto L_089676C8;
    case 585u: goto L_089676CC;
    case 586u: goto L_089676F0;
    case 587u: goto L_089676F8;
    case 588u: goto L_08967704;
    case 589u: goto L_0896770C;
    case 590u: goto L_08967710;
    case 591u: goto L_0896772C;
    case 592u: goto L_08967734;
    case 593u: goto L_08967748;
    case 594u: goto L_08967758;
    case 595u: goto L_08967764;
    case 596u: goto L_0896776C;
    case 597u: goto L_08967770;
    case 598u: goto L_08967788;
    case 599u: goto L_089677A0;
    case 600u: goto L_089677A8;
    case 601u: goto L_089677B4;
    case 602u: goto L_089677BC;
    case 603u: goto L_089677C4;
    case 604u: goto L_089677D0;
    case 605u: goto L_089677D8;
    case 606u: goto L_089677E4;
    case 607u: goto L_089677EC;
    case 608u: goto L_089677F8;
    case 609u: goto L_08967800;
    case 610u: goto L_08967810;
    case 611u: goto L_08967828;
    case 612u: goto L_08967830;
    case 613u: goto L_08967838;
    case 614u: goto L_08967848;
    case 615u: goto L_08967864;
    case 616u: goto L_08967878;
    case 617u: goto L_08967880;
    case 618u: goto L_08967888;
    case 619u: goto L_08967890;
    case 620u: goto L_089678B4;
    case 621u: goto L_089678C0;
    case 622u: goto L_089678DC;
    case 623u: goto L_089678F0;
    case 624u: goto L_089678F8;
    case 625u: goto L_08967900;
    case 626u: goto L_0896790C;
    case 627u: goto L_08967914;
    case 628u: goto L_08967928;
    case 629u: goto L_08967944;
    case 630u: goto L_0896795C;
    case 631u: goto L_08967968;
    case 632u: goto L_08967970;
    case 633u: goto L_0896797C;
    case 634u: goto L_08967998;
    case 635u: goto L_089679A4;
    case 636u: goto L_089679AC;
    case 637u: goto L_089679B8;
    case 638u: goto L_089679C8;
    case 639u: goto L_089679D0;
    case 640u: goto L_089679D8;
    case 641u: goto L_089679E0;
    case 642u: goto L_089679FC;
    case 643u: goto L_08967A04;
    case 644u: goto L_08967A0C;
    case 645u: goto L_08967A14;
    case 646u: goto L_08967A1C;
    case 647u: goto L_08967A24;
    case 648u: goto L_08967A2C;
    case 649u: goto L_08967A34;
    case 650u: goto L_08967A3C;
    case 651u: goto L_08967A44;
    case 652u: goto L_08967A4C;
    case 653u: goto L_08967A50;
    case 654u: goto L_08967A5C;
    case 655u: goto L_08967A64;
    case 656u: goto L_08967A78;
    case 657u: goto L_08967A80;
    case 658u: goto L_08967A88;
    case 659u: goto L_08967A90;
    case 660u: goto L_08967A98;
    case 661u: goto L_08967AA8;
    case 662u: goto L_08967ABC;
    case 663u: goto L_08967ACC;
    case 664u: goto L_08967AEC;
    case 665u: goto L_08967B0C;
    case 666u: goto L_08967B18;
    case 667u: goto L_08967B20;
    case 668u: goto L_08967B28;
    case 669u: goto L_08967B30;
    case 670u: goto L_08967B40;
    case 671u: goto L_08967B54;
    case 672u: goto L_08967B6C;
    case 673u: goto L_08967B7C;
    case 674u: goto L_08967B94;
    case 675u: goto L_08967B9C;
    case 676u: goto L_08967BA4;
    case 677u: goto L_08967BAC;
    case 678u: goto L_08967BB8;
    case 679u: goto L_08967BC0;
    case 680u: goto L_08967BC8;
    case 681u: goto L_08967BD4;
    case 682u: goto L_08967BE4;
    case 683u: goto L_08967BEC;
    case 684u: goto L_08967BF8;
    case 685u: goto L_08967C00;
    case 686u: goto L_08967C0C;
    case 687u: goto L_08967C1C;
    case 688u: goto L_08967C38;
    case 689u: goto L_08967C4C;
    case 690u: goto L_08967C54;
    case 691u: goto L_08967C5C;
    case 692u: goto L_08967C64;
    case 693u: goto L_08967C88;
    case 694u: goto L_08967C94;
    case 695u: goto L_08967CB0;
    case 696u: goto L_08967CC4;
    case 697u: goto L_08967CCC;
    case 698u: goto L_08967CD4;
    case 699u: goto L_08967CDC;
    case 700u: goto L_08967CE8;
    case 701u: goto L_08967CF8;
    case 702u: goto L_08967D0C;
    case 703u: goto L_08967D1C;
    case 704u: goto L_08967D3C;
    case 705u: goto L_08967D5C;
    case 706u: goto L_08967D68;
    case 707u: goto L_08967D70;
    case 708u: goto L_08967D78;
    case 709u: goto L_08967D80;
    case 710u: goto L_08967D90;
    case 711u: goto L_08967DA4;
    case 712u: goto L_08967DBC;
    case 713u: goto L_08967DDC;
    case 714u: goto L_08967DE4;
    case 715u: goto L_08967DEC;
    case 716u: goto L_08967DF8;
    case 717u: goto L_08967E00;
    case 718u: goto L_08967E08;
    case 719u: goto L_08967E14;
    case 720u: goto L_08967E24;
    case 721u: goto L_08967E2C;
    case 722u: goto L_08967E38;
    case 723u: goto L_08967E40;
    case 724u: goto L_08967E4C;
    case 725u: goto L_08967E6C;
    case 726u: goto L_08967E80;
    case 727u: goto L_08967E88;
    case 728u: goto L_08967E90;
    case 729u: goto L_08967EBC;
    case 730u: goto L_08967ED4;
    case 731u: goto L_08967EDC;
    case 732u: goto L_08967EE4;
    case 733u: goto L_08967EF8;
    case 734u: goto L_08967F00;
    case 735u: goto L_08967F08;
    case 736u: goto L_08967F30;
    case 737u: goto L_08967F64;
    case 738u: goto L_08967FD4;
    case 739u: goto L_08967FE0;
    case 740u: goto L_08967FF0;
    case 741u: goto L_08967FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08964000:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    hot_regs.g31 = (0x08964084u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08964084u) goto L_08964084;
    return;
L_08964084:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089640B8;
      }
      goto L_0896408C;
    }
L_0896408C:
    hot_regs.g31 = (0x08964094u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 82u, 0x08970464u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08964094u) goto L_08964094;
    return;
L_08964094:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089640B8;
      }
      goto L_0896409C;
    }
L_0896409C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(236)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(232)));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(228)));
    hot_regs.g31 = (0x089640B8u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 96u, 0x08960814u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089640B8u) goto L_089640B8;
    return;
L_089640B8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 785u, 0x08963C8Cu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_089640C0;
    }
L_089640C0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(248)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(252)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(264)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(268)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(276)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(280)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(284)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(288)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(292)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(296)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(300)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08964108:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g16);
    g6 = (g5 | 0u);
    g16 = (hot_regs.g4 | 0u);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g6 = (g6 & 255u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(2318))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    { const bool branch_taken = g6 == 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-17));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0896426C;
      }
      goto L_08964138;
    }
}
L_08964138:
    hot_regs.g4 = (hot_regs.g4 | 2u);
    hot_regs.g31 = (0x08964144u);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(2318), static_cast<std::uint8_t>(hot_regs.g4));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 249u, 0x08895340u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08964144u) goto L_08964144;
    return;
L_08964144:
    hot_regs.g31 = (0x0896414Cu);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896414Cu) goto L_0896414C;
    return;
L_0896414C:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(154)));
    hot_regs.g4 = (hot_regs.g4 | 32u);
    hot_regs.g31 = (0x0896415Cu);
    aot_mem.aot_store16(hot_regs.g2 + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(hot_regs.g4));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 844u, 0x0898B4F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896415Cu) goto L_0896415C;
    return;
L_0896415C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (16384u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (hot_regs.g6 | hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(72), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (1024u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (hot_regs.g6 | hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(72), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (2048u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (hot_regs.g6 | hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(72), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (4u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (hot_regs.g6 | hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(72), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (4096u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (hot_regs.g6 | hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(72), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (8192u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (hot_regs.g6 | hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(72), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(3261))))));
    hot_regs.g5 = (hot_regs.g5 & ctx.gpr[17]);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g31 = (0x089641ECu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 676u, 0x08947574u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089641ECu) goto L_089641EC;
    return;
L_089641EC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089641F8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 264u, 0x089616E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089641F8u) goto L_089641F8;
    return;
L_089641F8:
    hot_regs.g6 = (2238u << 16u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x0896420Cu);
    ctx.gpr[17] = (hot_regs.g6 + static_cast<std::uint32_t>(14864));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 111u, 0x089609B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896420Cu) goto L_0896420C;
    return;
L_0896420C:
    hot_regs.g6 = (17786u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x08964224u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 32u, 0x089D0284u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08964224u) goto L_08964224;
    return;
L_08964224:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08964230u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 111u, 0x089609B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08964230u) goto L_08964230;
    return;
L_08964230:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x0896423Cu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 262u, 0x089E94F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896423Cu) goto L_0896423C;
    return;
L_0896423C:
    hot_regs.g31 = (0x08964244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 66u, 0x088807A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08964244u) goto L_08964244;
    return;
L_08964244:
    hot_regs.g31 = (0x0896424Cu);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 165u, 0x08894CA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896424Cu) goto L_0896424C;
    return;
L_0896424C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08964258u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 111u, 0x089609B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08964258u) goto L_08964258;
    return;
L_08964258:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x08964264u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 177u, 0x08894D40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08964264u) goto L_08964264;
    return;
L_08964264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896433C;
      }
      goto L_0896426C;
    }
L_0896426C:
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-3));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g6);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(2318), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g31 = (0x08964280u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08964280u) goto L_08964280;
    return;
L_08964280:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(154)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-33));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store16(hot_regs.g2 + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (49152u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = (hot_regs.g6 & hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(72), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (64512u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = (hot_regs.g6 & hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(72), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (63488u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = (hot_regs.g6 & hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(72), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (65532u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = (hot_regs.g6 & hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(72), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (61440u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = (hot_regs.g6 & hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(72), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (57344u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = (hot_regs.g6 & hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(72), hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (0u | 1u);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(3261))))));
    hot_regs.g6 = (hot_regs.g6 & ctx.gpr[17]);
    hot_regs.g6 = (hot_regs.g6 | 16u);
    hot_regs.g31 = (0x0896433Cu);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(hot_regs.g6));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 165u, 0x08894CA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896433Cu) goto L_0896433C;
    return;
L_0896433C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089644F8:
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<4u>(ctx.gpr[8]);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<4u, 96u, 1u, 2u>();
    if (((ctx.vfpu_ctrl[3] >> 5u) & 1u) != 0u) {
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
        goto L_08964534;
    }
    goto L_08964534;
L_08964534:
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<0u>());
    jump_target = hot_regs.g31;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964540:
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<4u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<36u>(ctx.gpr[9]);
    ctx.vfpu_ctrl[1u] = 0x000030E0u;
    ctx.execute_vfpu_vcmp_ct<4u, 4u, 2u, 1u>();
    ctx.vfpu_ctrl[0u] = 0x000010E5u;
    ctx.execute_vfpu_vcmov_ct<4u, 4u, 1u, 5u, false>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = std::fabs(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<5u, 2u>(vfpu_d); }
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vcmp_ct<5u, 37u, 1u, 6u>();
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<68u, 1u>(vfpu_value); }
    if (((ctx.vfpu_ctrl[3] >> 5u) & 1u) != 0u) {
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<36u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<8u, 1u>(vfpu_d); }
        goto L_0896457C;
    }
    goto L_08964578;
L_08964578:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<36u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<8u, 1u>(vfpu_d); }
    goto L_0896457C;
L_0896457C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<8u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<8u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    if (((ctx.vfpu_ctrl[3] >> 5u) & 1u) != 0u) {
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
        goto L_089645A0;
    }
    goto L_089645A0;
L_089645A0:
    ctx.execute_vfpu_vcmp_ct<4u, 68u, 1u, 6u>();
    { const float vfpu_constant = std::bit_cast<float>(0x40490FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) != 0u;
    ctx.execute_vfpu_vcmp_ct<36u, 68u, 1u, 6u>();
      if (branch_taken) {
          goto L_089645C4;
      }
      goto L_089645B0;
    }
L_089645B0:
    if (((ctx.vfpu_ctrl[3] >> 5u) & 1u) != 0u) {
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<68u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
        goto L_089645D0;
    }
    goto L_089645B8;
L_089645B8:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<96u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_d); }
    { const bool branch_taken = 0u == 0u;
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<96u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
      if (branch_taken) {
          goto L_089645D0;
      }
      goto L_089645C4;
    }
L_089645C4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<96u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    if (((ctx.vfpu_ctrl[3] >> 5u) & 1u) != 0u) {
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<96u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
        goto L_089645D0;
    }
    goto L_089645D0;
L_089645D0:
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<0u>());
    jump_target = hot_regs.g31;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089645DC:
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g6) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    hot_regs.g2 = (hot_regs.g4 + 0u);
      if (branch_taken) {
          goto L_089647AC;
      }
      goto L_089645E8;
    }
L_089645E8:
{
    std::uint32_t g9 = ctx.gpr[9];
    hot_regs.g7 = (hot_regs.g4 ^ hot_regs.g5);
    g9 = (hot_regs.g7 & 3u);
    { const bool branch_taken = g9 != 0u;
    g9 = (0u - hot_regs.g5);
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_089646A0;
      }
      goto L_089645F8;
    }
}
L_089645F8:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (g9 & 3u);
    { const bool branch_taken = g9 == 0u;
    hot_regs.g6 = (hot_regs.g6 - g9);
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08964614;
      }
      goto L_08964604;
    }
}
L_08964604:
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    hot_regs.g5 = (hot_regs.g5 + ctx.gpr[9]);
    rt.memory().aot_store_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[9]);
    goto L_08964614;
L_08964614:
    ctx.gpr[9] = (hot_regs.g6 & 15u);
    { const bool branch_taken = ctx.gpr[9] == hot_regs.g6;
    hot_regs.g7 = (hot_regs.g7 & 15u);
      if (branch_taken) {
          goto L_08964624;
      }
      goto L_08964620;
    }
L_08964620:
    { const bool branch_taken = hot_regs.g7 == 0u;
    ctx.gpr[8] = (hot_regs.g6 & 31u);
      if (branch_taken) {
          goto L_089646F4;
      }
      goto L_08964628;
    }
L_08964624:
    ctx.gpr[8] = (hot_regs.g6 & 31u);
    goto L_08964628;
L_08964628:
    { const bool branch_taken = ctx.gpr[8] == hot_regs.g6;
    hot_regs.g7 = (0u - hot_regs.g4);
      if (branch_taken) {
          goto L_08964784;
      }
      goto L_08964630;
    }
L_08964630:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g7 & 15u);
    { const bool branch_taken = g7 == 0u;
    hot_regs.g6 = (hot_regs.g6 - g7);
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_0896465C;
      }
      goto L_0896463C;
    }
}
L_0896463C:
    hot_regs.g7 = (hot_regs.g7 + hot_regs.g5);
    goto L_08964640;
L_08964640:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[8] = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = hot_regs.g7 != g5;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(-4), ctx.gpr[8]);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08964640;
      }
      goto L_08964654;
    }
}
L_08964654:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g6 & 31u);
    { const bool branch_taken = g8 == g6;
    hot_regs.g7 = (g6 - g8);
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08964784;
      }
      goto L_08964660;
    }
}
L_0896465C:
    hot_regs.g7 = (hot_regs.g6 - ctx.gpr[8]);
    goto L_08964660;
L_08964660:
    hot_regs.g7 = (hot_regs.g7 + hot_regs.g5);
    goto L_08964664;
L_08964664:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<64u>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    ctx.set_vfpu_scalar_bits_ct<96u>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(12)));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(16)));
    ctx.set_vfpu_scalar_bits_ct<33u>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    ctx.set_vfpu_scalar_bits_ct<65u>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(24)));
    ctx.set_vfpu_scalar_bits_ct<97u>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(28)));
    g4 = (g4 + static_cast<std::uint32_t>(32));
    g5 = (g5 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(-32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = g5 != hot_regs.g7;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(-16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08964664;
      }
      goto L_08964698;
    }
}
L_08964698:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_08964784;
      }
      goto L_089646A0;
    }
L_089646A0:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (0u - hot_regs.g4);
    g7 = (g7 & 3u);
    { const bool branch_taken = g7 == 0u;
    hot_regs.g6 = (hot_regs.g6 - g7);
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089646C4;
      }
      goto L_089646B0;
    }
}
L_089646B0:
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g7);
    rt.memory().aot_store_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g7);
    goto L_089646C4;
L_089646C4:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g6 & 3u);
    { const bool branch_taken = g8 == g6;
    hot_regs.g7 = (g6 - g8);
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_089647AC;
      }
      goto L_089646D0;
    }
}
L_089646D0:
    hot_regs.g7 = (hot_regs.g7 + hot_regs.g5);
    goto L_089646D4;
L_089646D4:
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = hot_regs.g5 != hot_regs.g7;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(-4), ctx.gpr[9]);
      if (branch_taken) {
          goto L_089646D4;
      }
      goto L_089646EC;
    }
L_089646EC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_089647AC;
      }
      goto L_089646F4;
    }
L_089646F4:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (0u - hot_regs.g5);
    g9 = (g9 & 15u);
    { const bool branch_taken = g9 == 0u;
    hot_regs.g6 = (hot_regs.g6 - g9);
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_0896471C;
      }
      goto L_08964704;
    }
}
L_08964704:
    hot_regs.g7 = (ctx.gpr[9] + hot_regs.g5);
    goto L_08964708;
L_08964708:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[8] = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = hot_regs.g7 != g5;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(-4), ctx.gpr[8]);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08964708;
      }
      goto L_0896471C;
    }
}
L_0896471C:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g6 & 63u);
    { const bool branch_taken = g8 == g6;
    hot_regs.g7 = (g6 - g8);
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_0896475C;
      }
      goto L_08964728;
    }
}
L_08964728:
    hot_regs.g7 = (hot_regs.g7 + hot_regs.g5);
    hot_regs.g6 = (ctx.gpr[8] + 0u);
    goto L_08964730;
L_08964730:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    g5 = (g5 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = g5 != hot_regs.g7;
    g4 = (g4 + static_cast<std::uint32_t>(64));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08964730;
      }
      goto L_0896475C;
    }
}
L_0896475C:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g6 & 15u);
    { const bool branch_taken = g8 == g6;
    hot_regs.g7 = (g6 - g8);
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08964784;
      }
      goto L_08964768;
    }
}
L_08964768:
    hot_regs.g7 = (hot_regs.g7 + hot_regs.g5);
    hot_regs.g6 = (ctx.gpr[8] + 0u);
    goto L_08964770;
L_08964770:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g4 + static_cast<std::uint32_t>(16));
    g5 = (g5 + static_cast<std::uint32_t>(16));
    { const bool branch_taken = g5 != hot_regs.g7;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(-16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08964770;
      }
      goto L_08964784;
    }
}
L_08964784:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g6 & 3u);
    { const bool branch_taken = g8 == g6;
    hot_regs.g7 = (g6 - g8);
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_089647AC;
      }
      goto L_08964790;
    }
}
L_08964790:
    hot_regs.g7 = (hot_regs.g7 + hot_regs.g5);
    hot_regs.g6 = (ctx.gpr[8] + 0u);
    goto L_08964798;
L_08964798:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[8] = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = g5 != hot_regs.g7;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(-4), ctx.gpr[8]);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08964798;
      }
      goto L_089647AC;
    }
}
L_089647AC:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g6) <= 0;
    hot_regs.g7 = (hot_regs.g6 + hot_regs.g5);
      if (branch_taken) {
          goto L_089647C8;
      }
      goto L_089647B4;
    }
L_089647B4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0))))));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = g5 != hot_regs.g7;
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089647B4;
      }
      goto L_089647C8;
    }
}
L_089647C8:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089647D0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (hot_regs.g7 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g4 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    hot_regs.g7 = (hot_regs.g7 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g4 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.g6 = (hot_regs.g6 >> 16u);
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g6 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g4 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (hot_regs.g4 + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (hot_regs.g7 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g4 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    hot_regs.g7 = (hot_regs.g7 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g4 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.g6 = (hot_regs.g6 >> 16u);
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g6 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g4 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (hot_regs.g4 + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g6 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g4 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (hot_regs.g4 + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (hot_regs.g5 >> 16u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (hot_regs.g4 + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964A14:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (hot_regs.g7 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g4 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    hot_regs.g7 = (hot_regs.g7 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g4 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.g6 = (hot_regs.g6 >> 16u);
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g6 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g4 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (hot_regs.g4 + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g6 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g4 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (hot_regs.g4 + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (hot_regs.g5 >> 16u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (hot_regs.g4 + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964B98:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (hot_regs.g4 + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (hot_regs.g6 + hot_regs.g7);
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08964C1C;
      }
      goto L_08964BD8;
    }
L_08964BD8:
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (hot_regs.g7 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g4 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (hot_regs.g7 + ctx.gpr[8]);
    { const bool branch_taken = hot_regs.g6 != hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08964BD8;
      }
      goto L_08964C1C;
    }
L_08964C1C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964C24:
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (hot_regs.g4 + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(1)));
    hot_regs.g7 = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (hot_regs.g4 + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(2)));
    hot_regs.g7 = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (hot_regs.g4 + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(3)));
    hot_regs.g6 = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964CC8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g4 = (g4 + static_cast<std::uint32_t>(4));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g7 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g7);
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g7 = (g7 << 8u);
    g6 = (g6 | g7);
    g6 = (g6 & 65535u);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    g7 = (g7 & 65535u);
    g7 = (g7 << 16u);
    g6 = (g6 | g7);
    f12 = std::bit_cast<float>(g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g7 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g7);
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g7 = (g7 << 8u);
    g6 = (g6 | g7);
    g6 = (g6 & 65535u);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    g7 = (g7 & 65535u);
    g7 = (g7 << 16u);
    g6 = (g6 | g7);
    f12 = std::bit_cast<float>(g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g7 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g7);
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g7 = (g7 << 8u);
    g6 = (g6 | g7);
    g6 = (g6 & 65535u);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g9);
    g4 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g4 = (g4 << 8u);
    g4 = (g7 | g4);
    g4 = (g4 & 65535u);
    g4 = (g4 << 16u);
    g4 = (g6 | g4);
    f12 = std::bit_cast<float>(g4);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08964E08:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g4 = (g4 + static_cast<std::uint32_t>(4));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g7 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g7);
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g7 = (g7 << 8u);
    g6 = (g6 | g7);
    g6 = (g6 & 65535u);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    g7 = (g7 & 65535u);
    g7 = (g7 << 16u);
    g6 = (g6 | g7);
    f12 = std::bit_cast<float>(g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g7 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g7);
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g7 = (g7 << 8u);
    g6 = (g6 | g7);
    g6 = (g6 & 65535u);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g9);
    g4 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g4 = (g4 << 8u);
    g4 = (g7 | g4);
    g4 = (g4 & 65535u);
    g4 = (g4 << 16u);
    g4 = (g6 | g4);
    f12 = std::bit_cast<float>(g4);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08964EE0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08964F14u);
    hot_regs.g6 = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 272u, 0x08B652B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08964F14u) goto L_08964F14;
    return;
L_08964F14:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g5 = (g4 + g5);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08964F54;
      }
      goto L_08964F28;
    }
}
L_08964F28:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    g6 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g5));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g5 = (g5 + g6);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08964F28;
      }
      goto L_08964F54;
    }
}
L_08964F54:
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
L_08964F68:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g4 = (g4 + static_cast<std::uint32_t>(4));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g7 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g7);
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g6));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g7 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g7);
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(g6));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g7 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g7);
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(g6));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g7 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g7);
    g4 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(g4));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08964FC0:
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
L_08964FD4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x08964FE8u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(32))))));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 338u, 0x08A9AC30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08964FE8u) goto L_08964FE8;
    return;
L_08964FE8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08964FF4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08965008u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 844u, 0x089E7E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965008u) goto L_08965008;
    return;
L_08965008:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (2235u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-27076));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), g4);
    g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(36), g4);
    hot_regs.g2 = (g16 | 0u);
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
L_08965034:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x08965070u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 846u, 0x089E7E64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965070u) goto L_08965070;
    return;
L_08965070:
{
    float f12 = hot_regs.f12;
    float f24 = ctx.fpr[24];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (2235u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-27076));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), g4);
    g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(36), g4);
    g4 = (16179u << 16u);
    g4 = (g4 | 13107u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    g4 = (16204u << 16u);
    g4 = (g4 | 52429u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g4 = (0u | 480u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(52), g4);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(f24));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(f24));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (0u | 1u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(g4));
    hot_regs.g2 = (g16 | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    f24 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    ctx.fpr[24] = f24;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_089650F8:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(60)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(64)));
    ctx.fpr[16] = f12 + f14;
    f15 = f15 + hot_regs.f13;
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_fpu_condition((f14 < f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f15));
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08965144;
      }
      goto L_0896512C;
    }
}
}
L_0896512C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(68)));
    ctx.set_fpu_condition((hot_regs.f15 <= ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(68)));
        goto L_089651C0;
    }
    goto L_08965144;
}
L_08965144:
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896516C;
      }
      goto L_08965154;
    }
L_08965154:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(68)));
    ctx.set_fpu_condition((hot_regs.f14 < hot_regs.f15));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(68)));
        goto L_089651C0;
    }
    goto L_0896516C;
}
L_0896516C:
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08965194;
      }
      goto L_0896517C;
    }
L_0896517C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f15));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(68)));
        goto L_089651C0;
    }
    goto L_08965194;
}
L_08965194:
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089651DC;
      }
      goto L_089651A4;
    }
L_089651A4:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089651DC;
      }
      goto L_089651BC;
    }
L_089651BC:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(68)));
    goto L_089651C0;
L_089651C0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(f12));
    goto L_089651DC;
}
}
L_089651DC:
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089651E4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(40)));
    hot_regs.g7 = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 != hot_regs.g7;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08965340;
      }
      goto L_08965214;
    }
}
L_08965214:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08965248;
      }
      goto L_0896522C;
    }
}
L_0896522C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0896524C;
      }
      goto L_08965244;
    }
}
L_08965244:
    hot_regs.g4 = (0u | 1u);
    goto L_08965248;
L_08965248:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_0896524C;
L_0896524C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08965340;
      }
      goto L_08965254;
    }
L_08965254:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08965340;
      }
      goto L_08965264;
    }
L_08965264:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08965340;
      }
      goto L_08965274;
    }
L_08965274:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089652A8;
      }
      goto L_0896528C;
    }
}
L_0896528C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089652AC;
      }
      goto L_089652A4;
    }
}
L_089652A4:
    hot_regs.g4 = (0u | 1u);
    goto L_089652A8;
L_089652A8:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_089652AC;
L_089652AC:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08965340;
      }
      goto L_089652B4;
    }
L_089652B4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089652E8;
      }
      goto L_089652CC;
    }
}
L_089652CC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089652EC;
      }
      goto L_089652E4;
    }
}
L_089652E4:
    hot_regs.g4 = (0u | 1u);
    goto L_089652E8;
L_089652E8:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_089652EC;
L_089652EC:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08965340;
      }
      goto L_089652F4;
    }
L_089652F4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08965320;
      }
      goto L_08965304;
    }
L_08965304:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    hot_regs.g31 = (0x08965314u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965314u) goto L_08965314;
    return;
L_08965314:
    { const bool branch_taken = hot_regs.g2 != 0u;
    hot_regs.g4 = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_08965324;
      }
      goto L_0896531C;
    }
L_0896531C:
    ctx.gpr[19] = (0u | 1u);
    goto L_08965320;
L_08965320:
    hot_regs.g4 = (ctx.gpr[19] & 255u);
    goto L_08965324;
L_08965324:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08965340;
      }
      goto L_0896532C;
    }
L_0896532C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08965340;
      }
      goto L_0896533C;
    }
L_0896533C:
    ctx.gpr[18] = (0u | 1u);
    goto L_08965340;
L_08965340:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[18] & 255u);
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
L_08965360:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (2198u << 16u);
    jump_target = hot_regs.g31;
    g2 = (g2 + static_cast<std::uint32_t>(21344));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0896536C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x0896537Cu);
    // nop
    hot_regs.g29 = g29;
    goto L_08965360;
}
L_0896537C:
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
L_08965388:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x089653A8u);
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g29 = g29;
    goto L_08965360;
}
L_089653A8:
    if (hot_regs.g2 == ctx.gpr[16]) {
    ctx.gpr[18] = (0u | 1u);
        goto L_089653F0;
    }
    goto L_089653B0;
L_089653B0:
    hot_regs.g31 = (0x089653B8u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 849u, 0x089E7F48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089653B8u) goto L_089653B8;
    return;
L_089653B8:
    if (hot_regs.g2 == ctx.gpr[16]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_089653E0;
    }
    goto L_089653C0;
L_089653C0:
    hot_regs.g31 = (0x089653C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 295u, 0x08A9A6CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089653C8u) goto L_089653C8;
    return;
L_089653C8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 ^ ctx.gpr[16]);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[17] & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089653E4;
      }
      goto L_089653DC;
    }
}
L_089653DC:
    ctx.gpr[17] = (0u | 1u);
    goto L_089653E0;
L_089653E0:
    hot_regs.g4 = (ctx.gpr[17] & 255u);
    goto L_089653E4;
L_089653E4:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089653F0;
      }
      goto L_089653EC;
    }
L_089653EC:
    ctx.gpr[18] = (0u | 1u);
    goto L_089653F0;
L_089653F0:
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
L_0896540C:
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
          goto L_0896545C;
      }
      goto L_08965428;
    }
}
L_08965428:
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-27252));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), hot_regs.g4);
    hot_regs.g31 = (0x0896543Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 425u, 0x08A9B6A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896543Cu) goto L_0896543C;
    return;
L_0896543C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08965448u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 24u, 0x089E815Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965448u) goto L_08965448;
    return;
L_08965448:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0896545C;
      }
      goto L_08965454;
    }
L_08965454:
    hot_regs.g31 = (0x0896545Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896545Cu) goto L_0896545C;
    return;
L_0896545C:
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
L_08965470:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 6u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965478:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g5 = (0u | 84u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x0896549Cu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896549Cu) goto L_0896549C;
    return;
L_0896549C:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089654B4;
      }
      goto L_089654A8;
    }
L_089654A8:
    hot_regs.g31 = (0x089654B0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08964FF4;
L_089654B0:
    hot_regs.g2 = (ctx.gpr[16] | 0u);
    goto L_089654B4;
L_089654B4:
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
L_089654C4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089654F0;
      }
      goto L_089654D4;
    }
}
L_089654D4:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 3u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(8));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089654F0u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g7);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089654F0u) goto L_089654F0;
    return;
L_089654F0:
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
L_089654FC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g5 = (0u | 84u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08965528u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965528u) goto L_08965528;
    return;
L_08965528:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_08965534;
    }
L_08965534:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08965540u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 848u, 0x089E7EF8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965540u) goto L_08965540;
    return;
L_08965540:
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-27076));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (0x0896555Cu);
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896555Cu) goto L_0896555C;
    return;
L_0896555C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(40)));
    g5 = (g16 + static_cast<std::uint32_t>(44));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(g4));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g4 = (g17 + static_cast<std::uint32_t>(44));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g5 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(52)));
    g5 = (g16 + static_cast<std::uint32_t>(60));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(52), g4);
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(56)));
    g6 = (g17 + static_cast<std::uint32_t>(60));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(g4));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    g5 = (g16 + static_cast<std::uint32_t>(68));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), hot_regs.g7);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g4 = (g17 + static_cast<std::uint32_t>(68));
    g5 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g2 = (g17 | 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(76), g4);
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_089655E8;
}
}
L_089655E8:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089655FC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08965610u);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    hot_regs.g29 = g29;
    goto L_089651E4;
}
L_08965610:
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
L_0896561C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08965630u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 858u, 0x089E7FCCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965630u) goto L_08965630;
    return;
L_08965630:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (2234u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(23640));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(108), g4);
    hot_regs.g2 = (g16 | 0u);
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
L_08965650:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g6);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), hot_regs.g31);
    hot_regs.g31 = (0x08965680u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 858u, 0x089E7FCCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965680u) goto L_08965680;
    return;
L_08965680:
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(23640));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(152));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089656A0u);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089656A0u) goto L_089656A0;
    return;
L_089656A0:
    hot_regs.g4 = (0u | 0u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g4);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g5 = (0u | 84u);
    hot_regs.g31 = (0x089656BCu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089656BCu) goto L_089656BC;
    return;
L_089656BC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089656F0;
      }
      goto L_089656D4;
    }
}
L_089656D4:
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089656ECu);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    goto L_08965034;
L_089656EC:
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    goto L_089656F0;
L_089656F0:
    hot_regs.g6 = (hot_regs.g5 | 0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08965700u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 456u, 0x08A9B9F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965700u) goto L_08965700;
    return;
L_08965700:
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(116));
    hot_regs.g31 = (0x08965714u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 759u, 0x08933F0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965714u) goto L_08965714;
    return;
L_08965714:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08965720u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 623u, 0x088BAFE8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965720u) goto L_08965720;
    return;
L_08965720:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08965740:
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
          goto L_089657A0;
      }
      goto L_0896575C;
    }
}
L_0896575C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2234u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(23640));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896578C;
      }
      goto L_0896576C;
    }
}
L_0896576C:
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-27252));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), hot_regs.g4);
    hot_regs.g31 = (0x08965780u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 425u, 0x08A9B6A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965780u) goto L_08965780;
    return;
L_08965780:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0896578Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 24u, 0x089E815Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896578Cu) goto L_0896578C;
    return;
L_0896578C:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089657A0;
      }
      goto L_08965798;
    }
L_08965798:
    hot_regs.g31 = (0x089657A0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089657A0u) goto L_089657A0;
    return;
L_089657A0:
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
L_089657B4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 != 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089657F0;
      }
      goto L_089657D4;
    }
}
L_089657D4:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x089657E4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089657E4u) goto L_089657E4;
    return;
L_089657E4:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089657F0;
L_089657F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08965804u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 319u, 0x08B655B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965804u) goto L_08965804;
    return;
L_08965804:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08965818:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0896584C;
      }
      goto L_08965830;
    }
}
L_08965830:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08965840u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965840u) goto L_08965840;
    return;
L_08965840:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_0896584C;
L_0896584C:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g29 = hot_regs.g29;
    g2 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    g2 = (g2 + static_cast<std::uint32_t>(32));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08965864:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-160));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), ctx.gpr[16]);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089658B8;
      }
      goto L_0896589C;
    }
}
L_0896589C:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g31 = (0x089658ACu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089658ACu) goto L_089658AC;
    return;
L_089658AC:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089658B8;
L_089658B8:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((hot_regs.f20 <= ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_089659AC;
      }
      goto L_089658D4;
    }
}
L_089658D4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (16256u << 16u);
    f12 = std::bit_cast<float>(g4);
    f12 = f12 / hot_regs.f20;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(68)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(12)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(72)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    f13 = f13 - f14;
    f15 = f15 - f16;
    g4 = (std::bit_cast<std::uint32_t>(f13));
    g5 = (std::bit_cast<std::uint32_t>(f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g5);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    g5 = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g5);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(f15));
    { const float fs = f12; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), g4);
    g5 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), g5);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    g4 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(f14));
    g5 = (std::bit_cast<std::uint32_t>(f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), g5);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f14));
    g5 = (std::bit_cast<std::uint32_t>(f16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g5);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(f15));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(f14));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_089659CC;
      }
      goto L_089659AC;
    }
}
}
L_089659AC:
{
    float f26 = ctx.fpr[26];
{
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f26));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(f26));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(f26));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(f26));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f13));
    goto L_089659CC;
}
}
L_089659CC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089659EC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08965A20;
      }
      goto L_08965A04;
    }
}
L_08965A04:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08965A14u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965A14u) goto L_08965A14;
    return;
L_08965A14:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08965A20;
L_08965A20:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g29 = hot_regs.g29;
    g2 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    g2 = (g2 + static_cast<std::uint32_t>(68));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08965A38:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08965A7C;
      }
      goto L_08965A60;
    }
}
L_08965A60:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(24));
    hot_regs.g31 = (0x08965A70u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965A70u) goto L_08965A70;
    return;
L_08965A70:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08965A7C;
L_08965A7C:
{
    float f20 = hot_regs.f20;
    float f22 = hot_regs.f22;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f22));
    g4 = (g4 + static_cast<std::uint32_t>(44));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f22));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f20));
    f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
    hot_regs.f20 = f20;
    hot_regs.f22 = f22;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08965AAC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08965AE0;
      }
      goto L_08965AC4;
    }
}
L_08965AC4:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08965AD4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965AD4u) goto L_08965AD4;
    return;
L_08965AD4:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08965AE0;
L_08965AE0:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g29 = hot_regs.g29;
    g2 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    g2 = (g2 + static_cast<std::uint32_t>(44));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08965AF8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 != 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08965B34;
      }
      goto L_08965B18;
    }
}
L_08965B18:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08965B28u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965B28u) goto L_08965B28;
    return;
L_08965B28:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08965B34;
L_08965B34:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08965B50:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08965B84;
      }
      goto L_08965B68;
    }
}
L_08965B68:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08965B78u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965B78u) goto L_08965B78;
    return;
L_08965B78:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08965B84;
L_08965B84:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08965B9C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 != 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08965BD8;
      }
      goto L_08965BBC;
    }
}
L_08965BBC:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08965BCCu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965BCCu) goto L_08965BCC;
    return;
L_08965BCC:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08965BD8;
L_08965BD8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08965BF4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08965C28;
      }
      goto L_08965C0C;
    }
}
L_08965C0C:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08965C1Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965C1Cu) goto L_08965C1C;
    return;
L_08965C1C:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08965C28;
L_08965C28:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08965C40:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 != 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08965C7C;
      }
      goto L_08965C60;
    }
}
L_08965C60:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08965C70u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965C70u) goto L_08965C70;
    return;
L_08965C70:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08965C7C;
L_08965C7C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08965C98:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08965CCC;
      }
      goto L_08965CB0;
    }
}
L_08965CB0:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08965CC0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965CC0u) goto L_08965CC0;
    return;
L_08965CC0:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08965CCC;
L_08965CCC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08965CE4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 != 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08965D20;
      }
      goto L_08965D04;
    }
}
L_08965D04:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08965D14u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965D14u) goto L_08965D14;
    return;
L_08965D14:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08965D20;
L_08965D20:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08965D3C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08965D70;
      }
      goto L_08965D54;
    }
}
L_08965D54:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08965D64u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965D64u) goto L_08965D64;
    return;
L_08965D64:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08965D70;
L_08965D70:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(76)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08965D88:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08965D9Cu);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    hot_regs.g29 = g29;
    goto L_089650F8;
}
L_08965D9C:
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
L_08965DA8:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), g7);
    g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(68))))));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(22))))));
    g6 = (g7 - g6);
    g6 = (g6 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    g6 = (static_cast<std::int32_t>(g6) < 0 ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    g6 = (g6 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    { const bool branch_taken = g6 == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08965E4C;
      }
      goto L_08965DF8;
    }
}
L_08965DF8:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(64))))));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(24))))));
    hot_regs.g31 = (0x08965E10u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965E10u) goto L_08965E10;
    return;
L_08965E10:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g31 = (0x08965E24u);
    hot_regs.g6 = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965E24u) goto L_08965E24;
    return;
L_08965E24:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g5);
    g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08965E44u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = g5;
    goto L_0896640C;
}
L_08965E44:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08965E90;
      }
      goto L_08965E4C;
    }
L_08965E4C:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(64))))));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(26))))));
    hot_regs.g31 = (0x08965E64u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965E64u) goto L_08965E64;
    return;
L_08965E64:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(68))))));
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(28))))));
    hot_regs.g31 = (0x08965E7Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 440u, 0x08A9B864u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965E7Cu) goto L_08965E7C;
    return;
L_08965E7C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08965E90u);
    hot_regs.g7 = (hot_regs.g2 | 0u);
    goto L_08966358;
L_08965E90:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08965EA8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (hot_regs.g6 | 0u);
    hot_regs.g6 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), hot_regs.g7);
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    hot_regs.g6 = (hot_regs.g6 << 8u);
    ctx.gpr[17] = (hot_regs.g5 | hot_regs.g6);
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x08965F04u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 40u, 0x089E825Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08965F04u) goto L_08965F04;
    return;
L_08965F04:
    hot_regs.g4 = (ctx.gpr[17] & 2u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08965F1C;
      }
      goto L_08965F10;
    }
L_08965F10:
    hot_regs.g5 = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    hot_regs.g31 = (0x08965F1Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08964EE0;
L_08965F1C:
    hot_regs.g4 = (ctx.gpr[17] & 8u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08965F34;
      }
      goto L_08965F28;
    }
L_08965F28:
    hot_regs.g5 = (ctx.gpr[19] + static_cast<std::uint32_t>(44));
    hot_regs.g31 = (0x08965F34u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08964E08;
L_08965F34:
    hot_regs.g4 = (ctx.gpr[17] & 16u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08965FA4;
      }
      goto L_08965F40;
    }
L_08965F40:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g6 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (g5 << 8u);
    g7 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g7);
    g7 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (g7 + static_cast<std::uint32_t>(1));
    g4 = (g4 | g5);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    g5 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 65535u);
    g5 = (g5 << 8u);
    g5 = (g6 | g5);
    g5 = (g5 & 65535u);
    g5 = (g5 << 16u);
    g4 = (g4 | g5);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_08965FA4;
}
L_08965FA4:
    hot_regs.g4 = (ctx.gpr[17] & 32u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08965FBC;
      }
      goto L_08965FB0;
    }
L_08965FB0:
    hot_regs.g5 = (ctx.gpr[19] + static_cast<std::uint32_t>(60));
    hot_regs.g31 = (0x08965FBCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08964E08;
L_08965FBC:
    hot_regs.g4 = (ctx.gpr[17] & 64u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08965FD4;
      }
      goto L_08965FC8;
    }
L_08965FC8:
    hot_regs.g5 = (ctx.gpr[19] + static_cast<std::uint32_t>(68));
    hot_regs.g31 = (0x08965FD4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08964E08;
L_08965FD4:
    hot_regs.g4 = (ctx.gpr[17] & 128u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08965FF4;
      }
      goto L_08965FE0;
    }
L_08965FE0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), hot_regs.g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08965FF4;
}
L_08965FF4:
    hot_regs.g4 = (ctx.gpr[17] & 4u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08966014;
      }
      goto L_08966000;
    }
L_08966000:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), hot_regs.g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08966014;
}
L_08966014:
    hot_regs.g4 = (ctx.gpr[17] & 256u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08966084;
      }
      goto L_08966020;
    }
L_08966020:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g6 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (g5 << 8u);
    g7 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g7);
    g7 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (g7 + static_cast<std::uint32_t>(1));
    g4 = (g4 | g5);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    g5 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 65535u);
    g5 = (g5 << 8u);
    g5 = (g6 | g5);
    g5 = (g5 & 65535u);
    g5 = (g5 << 16u);
    g4 = (g4 | g5);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(76), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_08966084;
}
L_08966084:
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
L_089660A0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    hot_regs.g5 = (2237u << 16u);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(-28736));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    hot_regs.g31 = (0x089660C8u);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 8u, 0x08ADC0B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089660C8u) goto L_089660C8;
    return;
L_089660C8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089660E4;
      }
      goto L_089660D0;
    }
L_089660D0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4203)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089660EC;
      }
      goto L_089660DC;
    }
L_089660DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966108;
      }
      goto L_089660E4;
    }
L_089660E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966148;
      }
      goto L_089660EC;
    }
L_089660EC:
    hot_regs.g31 = (0x089660F4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 65u, 0x089E8590u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089660F4u) goto L_089660F4;
    return;
L_089660F4:
    hot_regs.f12 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896611C;
      }
      goto L_08966108;
    }
L_08966108:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08966124;
      }
      goto L_08966114;
    }
L_08966114:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966140;
      }
      goto L_0896611C;
    }
L_0896611C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966148;
      }
      goto L_08966124;
    }
L_08966124:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08966134u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966134u) goto L_08966134;
    return;
L_08966134:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08966140;
L_08966140:
    hot_regs.g31 = (0x08966148u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08966A94;
L_08966148:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08966158:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (hot_regs.g7 | 0u);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x08966184u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 69u, 0x089E85DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966184u) goto L_08966184;
    return;
L_08966184:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089661B0;
      }
      goto L_08966194;
    }
L_08966194:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    hot_regs.g31 = (0x089661A4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089661A4u) goto L_089661A4;
    return;
L_089661A4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    hot_regs.g4 = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_089661B4;
      }
      goto L_089661AC;
    }
L_089661AC:
    ctx.gpr[19] = (0u | 1u);
    goto L_089661B0;
L_089661B0:
    hot_regs.g4 = (ctx.gpr[19] & 255u);
    goto L_089661B4;
L_089661B4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089661D0;
      }
      goto L_089661C4;
    }
}
L_089661C4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 2u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
    goto L_089661D0;
}
L_089661D0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08966204;
      }
      goto L_089661E8;
    }
}
L_089661E8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08966208;
      }
      goto L_08966200;
    }
}
L_08966200:
    hot_regs.g4 = (0u | 1u);
    goto L_08966204;
L_08966204:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_08966208;
L_08966208:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08966224;
      }
      goto L_08966218;
    }
}
L_08966218:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 8u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
    goto L_08966224;
}
L_08966224:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08966240;
      }
      goto L_08966234;
    }
L_08966234:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 16u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
    goto L_08966240;
}
L_08966240:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08966274;
      }
      goto L_08966258;
    }
}
L_08966258:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08966278;
      }
      goto L_08966270;
    }
}
L_08966270:
    hot_regs.g4 = (0u | 1u);
    goto L_08966274;
L_08966274:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_08966278;
L_08966278:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08966294;
      }
      goto L_08966288;
    }
}
L_08966288:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 32u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
    goto L_08966294;
}
L_08966294:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089662C8;
      }
      goto L_089662AC;
    }
}
L_089662AC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089662CC;
      }
      goto L_089662C4;
    }
}
L_089662C4:
    hot_regs.g4 = (0u | 1u);
    goto L_089662C8;
L_089662C8:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_089662CC;
L_089662CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089662E8;
      }
      goto L_089662DC;
    }
}
L_089662DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 64u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
    goto L_089662E8;
}
L_089662E8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08966304;
      }
      goto L_089662F8;
    }
L_089662F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 128u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
    goto L_08966304;
}
L_08966304:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08966320;
      }
      goto L_08966314;
    }
L_08966314:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 4u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
    goto L_08966320;
}
L_08966320:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0896633C;
      }
      goto L_08966330;
    }
L_08966330:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 256u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
    goto L_0896633C;
}
L_0896633C:
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
L_08966358:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    ctx.gpr[19] = (hot_regs.g7 | 0u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), hot_regs.g31);
    hot_regs.g31 = (0x08966398u);
    hot_regs.g6 = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966398u) goto L_08966398;
    return;
L_08966398:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089663ACu);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    goto L_08966158;
L_089663AC:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089663C4;
      }
      goto L_089663B8;
    }
L_089663B8:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089663E8;
      }
      goto L_089663C4;
    }
L_089663C4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089663E0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = g5;
    goto L_0896640C;
}
L_089663E0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_089663EC;
      }
      goto L_089663E8;
    }
L_089663E8:
    hot_regs.g2 = (0u | 0u);
    goto L_089663EC;
L_089663EC:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0896640C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g7);
    ctx.gpr[18] = (aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g5 = (ctx.gpr[18] & 65535u);
    hot_regs.g6 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[17] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(34))))));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08966498u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 103u, 0x089E87C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966498u) goto L_08966498;
    return;
L_08966498:
    hot_regs.g4 = (ctx.gpr[18] & 2u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089664B0;
      }
      goto L_089664A4;
    }
L_089664A4:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    hot_regs.g31 = (0x089664B0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_08964B98;
L_089664B0:
    hot_regs.g4 = (ctx.gpr[18] & 8u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089664C8;
      }
      goto L_089664BC;
    }
L_089664BC:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
    hot_regs.g31 = (0x089664C8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_08964A14;
L_089664C8:
    hot_regs.g4 = (ctx.gpr[18] & 16u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08966590;
      }
      goto L_089664D4;
    }
L_089664D4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    hot_regs.g5 = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g6 = (hot_regs.g4 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[17] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (hot_regs.g5 & 65535u);
    hot_regs.g5 = (hot_regs.g4 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08966590;
L_08966590:
    hot_regs.g4 = (ctx.gpr[18] & 32u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089665A8;
      }
      goto L_0896659C;
    }
L_0896659C:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(60));
    hot_regs.g31 = (0x089665A8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_08964A14;
L_089665A8:
    hot_regs.g4 = (ctx.gpr[18] & 64u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089665C0;
      }
      goto L_089665B4;
    }
L_089665B4:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    hot_regs.g31 = (0x089665C0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_08964A14;
L_089665C0:
    hot_regs.g4 = (ctx.gpr[18] & 128u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089665F4;
      }
      goto L_089665CC;
    }
L_089665CC:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089665F4;
L_089665F4:
    hot_regs.g4 = (ctx.gpr[18] & 4u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08966628;
      }
      goto L_08966600;
    }
L_08966600:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08966628;
L_08966628:
    hot_regs.g4 = (ctx.gpr[18] & 256u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089666F0;
      }
      goto L_08966634;
    }
L_08966634:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g6 = (hot_regs.g4 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[17] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (hot_regs.g5 & 65535u);
    hot_regs.g5 = (hot_regs.g4 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089666F0;
L_089666F0:
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
L_08966708:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), hot_regs.g31);
    ctx.gpr[21] = (hot_regs.g5 | 0u);
    ctx.gpr[20] = (hot_regs.g4 | 0u);
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-17544));
    hot_regs.g31 = (0x08966748u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966748u) goto L_08966748;
    return;
L_08966748:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08966758u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966758u) goto L_08966758;
    return;
L_08966758:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08966764u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 103u, 0x08B6C9FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966764u) goto L_08966764;
    return;
L_08966764:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[22];
    ctx.gpr[16] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08966784;
      }
      goto L_08966774;
    }
L_08966774:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g31 = (0x08966784u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966784u) goto L_08966784;
    return;
L_08966784:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g20 = ctx.gpr[20];
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    g5 = (hot_regs.g4 + g5);
    if (ctx.gpr[18] != g5) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), g20);
    hot_regs.g5 = g5;
        goto L_08966804;
    }
    goto L_089667A4;
}
L_089667A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    hot_regs.g5 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_089667E0;
      }
      goto L_089667B0;
    }
L_089667B0:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x089667BCu);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089667BCu) goto L_089667BC;
    return;
L_089667BC:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    if (ctx.gpr[17] == 0u) {
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
        goto L_089667D8;
    }
    goto L_089667C8;
L_089667C8:
    hot_regs.g31 = (0x089667D0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089667D0u) goto L_089667D0;
    return;
L_089667D0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_089667D8;
L_089667D8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    goto L_089667E0;
L_089667E0:
    hot_regs.g31 = (0x089667E8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089667E8u) goto L_089667E8;
    return;
L_089667E8:
    hot_regs.g31 = (0x089667F0u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089667F0u) goto L_089667F0;
    return;
L_089667F0:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x089667FCu);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 737u, 0x08B670D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089667FCu) goto L_089667FC;
    return;
L_089667FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966A64;
      }
      goto L_08966804;
    }
L_08966804:
    { const bool branch_taken = ctx.gpr[16] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08966898;
      }
      goto L_0896680C;
    }
L_0896680C:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(56));
    hot_regs.g31 = (0x08966824u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 116u, 0x08B6CA88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966824u) goto L_08966824;
    return;
L_08966824:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[17] != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), ctx.gpr[20]);
        goto L_0896685C;
    }
    goto L_08966830;
L_08966830:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g31 = (0x0896683Cu);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896683Cu) goto L_0896683C;
    return;
L_0896683C:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    if (ctx.gpr[19] == 0u) {
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
        goto L_08966858;
    }
    goto L_08966848;
L_08966848:
    hot_regs.g31 = (0x08966850u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966850u) goto L_08966850;
    return;
L_08966850:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08966858;
L_08966858:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    goto L_0896685C;
L_0896685C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (0x08966868u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966868u) goto L_08966868;
    return;
L_08966868:
    hot_regs.g31 = (0x08966870u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966870u) goto L_08966870;
    return;
L_08966870:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x0896687Cu);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 737u, 0x08B670D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896687Cu) goto L_0896687C;
    return;
L_0896687C:
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[22];
    hot_regs.g4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08966894;
      }
      goto L_08966888;
    }
L_08966888:
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    hot_regs.g31 = (0x08966894u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966894u) goto L_08966894;
    return;
L_08966894:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    goto L_08966898;
L_08966898:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    g4 = (g4 + hot_regs.g5);
    { const bool branch_taken = ctx.gpr[16] == g4;
    ctx.gpr[20] = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08966A64;
      }
      goto L_089668A8;
    }
}
L_089668A8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(25856));
    ctx.gpr[30] = (hot_regs.g29 + static_cast<std::uint32_t>(40));
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    goto L_089668B4;
L_089668B4:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    g18 = (g18 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g18 + static_cast<std::uint32_t>(0))))));
    g6 = (0u | 84u);
    { const bool branch_taken = hot_regs.g5 == g6;
    g6 = (0u | 116u);
    hot_regs.g6 = g6;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089668D4;
      }
      goto L_089668CC;
    }
}
L_089668CC:
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_089669B8;
      }
      goto L_089668D4;
    }
L_089668D4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    hot_regs.g31 = (0x089668E4u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089668E4u) goto L_089668E4;
    return;
L_089668E4:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(24));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x089668F8u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089668F8u) goto L_089668F8;
    return;
L_089668F8:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08966908u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 105u, 0x08B6CA18u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966908u) goto L_08966908;
    return;
L_08966908:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[22];
    ctx.gpr[19] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08966920;
      }
      goto L_08966914;
    }
L_08966914:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08966920u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966920u) goto L_08966920;
    return;
L_08966920:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (hot_regs.g4 != 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_0896695C;
    }
    goto L_0896692C;
L_0896692C:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g31 = (0x08966938u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966938u) goto L_08966938;
    return;
L_08966938:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    if (ctx.gpr[16] == 0u) {
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
        goto L_08966954;
    }
    goto L_08966944;
L_08966944:
    hot_regs.g31 = (0x0896694Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896694Cu) goto L_0896694C;
    return;
L_0896694C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08966954;
L_08966954:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0896695C;
L_0896695C:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(57));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08966974u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 116u, 0x08B6CA88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966974u) goto L_08966974;
    return;
L_08966974:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g31 = (0x08966980u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966980u) goto L_08966980;
    return;
L_08966980:
    hot_regs.g31 = (0x08966988u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966988u) goto L_08966988;
    return;
L_08966988:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08966994u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 737u, 0x08B670D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966994u) goto L_08966994;
    return;
L_08966994:
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[22];
    hot_regs.g4 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089669A8;
      }
      goto L_089669A0;
    }
L_089669A0:
    hot_regs.g31 = (0x089669A8u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089669A8u) goto L_089669A8;
    return;
L_089669A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    g4 = (g4 + hot_regs.g5);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08966A58;
      }
      goto L_089669B8;
    }
}
L_089669B8:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 83u);
    { const bool branch_taken = hot_regs.g5 == g6;
    g6 = (0u | 115u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089669CC;
      }
      goto L_089669C4;
    }
}
L_089669C4:
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08966A58;
      }
      goto L_089669CC;
    }
L_089669CC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    hot_regs.g31 = (0x089669DCu);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089669DCu) goto L_089669DC;
    return;
L_089669DC:
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x089669ECu);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089669ECu) goto L_089669EC;
    return;
L_089669EC:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    hot_regs.g31 = (0x089669FCu);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 105u, 0x08B6CA18u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089669FCu) goto L_089669FC;
    return;
L_089669FC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[22];
    ctx.gpr[19] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08966A14;
      }
      goto L_08966A08;
    }
L_08966A08:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08966A14u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966A14u) goto L_08966A14;
    return;
L_08966A14:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(58));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08966A2Cu);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 116u, 0x08B6CA88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966A2Cu) goto L_08966A2C;
    return;
L_08966A2C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g31 = (0x08966A38u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 737u, 0x08B670D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966A38u) goto L_08966A38;
    return;
L_08966A38:
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[22];
    hot_regs.g4 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08966A4C;
      }
      goto L_08966A44;
    }
L_08966A44:
    hot_regs.g31 = (0x08966A4Cu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966A4Cu) goto L_08966A4C;
    return;
L_08966A4C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    g4 = (g4 + hot_regs.g5);
    hot_regs.g4 = g4;
    goto L_08966A58;
}
L_08966A58:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_089668B4;
      }
      goto L_08966A64;
    }
L_08966A64:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_08966A94:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), hot_regs.g31);
    g16 = (hot_regs.g4 | 0u);
    hot_regs.g5 = (g16 + static_cast<std::uint32_t>(32));
    hot_regs.g31 = (0x08966ABCu);
    hot_regs.g4 = (g29 | 0u);
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_08966708;
}
L_08966ABC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966AD4;
      }
      goto L_08966AC8;
    }
L_08966AC8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08966D74;
      }
      goto L_08966AD4;
    }
L_08966AD4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g31 = (0x08966AE4u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966AE4u) goto L_08966AE4;
    return;
L_08966AE4:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08966B00u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966B00u) goto L_08966B00;
    return;
L_08966B00:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08966B0Cu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966B0Cu) goto L_08966B0C;
    return;
L_08966B0C:
    hot_regs.g31 = (0x08966B14u);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966B14u) goto L_08966B14;
    return;
L_08966B14:
    hot_regs.g31 = (0x08966B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966B1Cu) goto L_08966B1C;
    return;
L_08966B1C:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(12));
    hot_regs.g31 = (0x08966B28u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 731u, 0x088733D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966B28u) goto L_08966B28;
    return;
L_08966B28:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    hot_regs.g5 = (17288u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) > 0;
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g5);
      if (branch_taken) {
          goto L_08966B48;
      }
      goto L_08966B38;
    }
L_08966B38:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_08966CB0;
      }
      goto L_08966B40;
    }
L_08966B40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966B5C;
      }
      goto L_08966B48;
    }
L_08966B48:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08966BD8;
      }
      goto L_08966B54;
    }
}
L_08966B54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966CB0;
      }
      goto L_08966B5C;
    }
L_08966B5C:
    hot_regs.g31 = (0x08966B64u);
    hot_regs.g4 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966B64u) goto L_08966B64;
    return;
L_08966B64:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(28));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(12)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(52)));
    f12 = std::bit_cast<float>(g5);
    { const bool branch_taken = static_cast<std::int32_t>(g5) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08966B8C;
      }
      goto L_08966B80;
    }
}
}
L_08966B80:
    hot_regs.g5 = (20352u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f15;
    goto L_08966B8C;
L_08966B8C:
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g31 = (0x08966BA0u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966BA0u) goto L_08966BA0;
    return;
L_08966BA0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g6);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g4);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08966D04;
      }
      goto L_08966BD8;
    }
}
L_08966BD8:
    hot_regs.g31 = (0x08966BE0u);
    hot_regs.g4 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966BE0u) goto L_08966BE0;
    return;
L_08966BE0:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (17160u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08966C58;
      }
      goto L_08966BFC;
    }
L_08966BFC:
    hot_regs.g4 = (17389u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 32768u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f15 - hot_regs.f14;
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(44));
    hot_regs.f12 = hot_regs.f14 - hot_regs.f12;
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g31 = (0x08966C20u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966C20u) goto L_08966C20;
    return;
L_08966C20:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g6);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g4);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08966CA8;
      }
      goto L_08966C58;
    }
}
L_08966C58:
    hot_regs.g4 = (16544u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = hot_regs.f14 - hot_regs.f12;
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(60));
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    hot_regs.g31 = (0x08966C74u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966C74u) goto L_08966C74;
    return;
L_08966C74:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g6);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g4);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    hot_regs.g4 = g4;
    goto L_08966CA8;
}
L_08966CA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966D04;
      }
      goto L_08966CB0;
    }
L_08966CB0:
    hot_regs.g31 = (0x08966CB8u);
    hot_regs.g4 = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966CB8u) goto L_08966CB8;
    return;
L_08966CB8:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(76));
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (0x08966CD0u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966CD0u) goto L_08966CD0;
    return;
L_08966CD0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g6);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g4);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    hot_regs.g4 = g4;
    goto L_08966D04;
}
L_08966D04:
    hot_regs.g31 = (0x08966D0Cu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966D0Cu) goto L_08966D0C;
    return;
L_08966D0C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.g7 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g7 = (hot_regs.g7 & 255u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(hot_regs.g7));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[9]));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(8));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08966D68u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 24u, 0x08B0C1B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966D68u) goto L_08966D68;
    return;
L_08966D68:
    hot_regs.g31 = (0x08966D70u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966D70u) goto L_08966D70;
    return;
L_08966D70:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    goto L_08966D74;
L_08966D74:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08966D94;
      }
      goto L_08966D7C;
    }
L_08966D7C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(76), g5);
    g5 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(80)));
    g5 = (g5 ^ 1u);
    g5 = (0u < g5 ? 1u : 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(g5));
    hot_regs.g5 = g5;
    goto L_08966D94;
}
L_08966D94:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = hot_regs.g4 == g5;
    g5 = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08966DAC;
      }
      goto L_08966DA0;
    }
}
L_08966DA0:
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g31 = (0x08966DACu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966DACu) goto L_08966DAC;
    return;
L_08966DAC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08966DC8:
{
    std::uint32_t g28 = ctx.gpr[28];
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(9092), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(9093), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8968), 0u);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(9160), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08966DE0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08966DF4u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 127u, 0x08A11208u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966DF4u) goto L_08966DF4;
    return;
L_08966DF4:
    hot_regs.g31 = (0x08966DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 787u, 0x08A07508u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966DFCu) goto L_08966DFC;
    return;
L_08966DFC:
    hot_regs.g31 = (0x08966E04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 544u, 0x08AD323Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966E04u) goto L_08966E04;
    return;
L_08966E04:
    hot_regs.g31 = (0x08966E0Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 591u, 0x08AD35A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966E0Cu) goto L_08966E0C;
    return;
L_08966E0C:
    hot_regs.g31 = (0x08966E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 128u, 0x08A11214u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966E14u) goto L_08966E14;
    return;
L_08966E14:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    hot_regs.g6 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g7 = (hot_regs.g4 << 8u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g5 = (2238u << 16u);
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g7 + hot_regs.g4);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-6992));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08966E48u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 257u, 0x08809600u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966E48u) goto L_08966E48;
    return;
L_08966E48:
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
L_08966E58:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7649)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (hot_regs.g4 | 0u);
    g5 = (g5 + g16);
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 60 ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08966E8C;
      }
      goto L_08966E7C;
    }
}
L_08966E7C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(-60));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 60 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08966E7C;
      }
      goto L_08966E8C;
    }
}
L_08966E8C:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 24 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08966EB0;
      }
      goto L_08966E98;
    }
L_08966E98:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8912)));
    goto L_08966E9C;
L_08966E9C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(-24));
    hot_regs.g7 = (static_cast<std::int32_t>(g4) < 24 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08966E9C;
      }
      goto L_08966EAC;
    }
}
L_08966EAC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8912), hot_regs.g6);
    goto L_08966EB0;
L_08966EB0:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g31 = (0x08966EBCu);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 225u, 0x08941948u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966EBCu) goto L_08966EBC;
    return;
L_08966EBC:
    hot_regs.g4 = (ctx.gpr[16] << 3u);
    hot_regs.g5 = (0u + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g31 = (0x08966ED8u);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 644u, 0x088F3420u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966ED8u) goto L_08966ED8;
    return;
L_08966ED8:
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
L_08966EE8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7649)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    g5 = (g5 - hot_regs.g4);
    { const bool branch_taken = static_cast<std::int32_t>(g5) >= 0;
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08966F0C;
      }
      goto L_08966F00;
    }
}
L_08966F00:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(60));
    { const bool branch_taken = static_cast<std::int32_t>(g5) < 0;
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08966F00;
      }
      goto L_08966F0C;
    }
}
L_08966F0C:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) >= 0;
    // nop
      if (branch_taken) {
          goto L_08966F28;
      }
      goto L_08966F14;
    }
L_08966F14:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8912)));
    goto L_08966F18;
L_08966F18:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(24));
    { const bool branch_taken = static_cast<std::int32_t>(g4) < 0;
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08966F18;
      }
      goto L_08966F24;
    }
}
L_08966F24:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8912), hot_regs.g6);
    goto L_08966F28;
L_08966F28:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g31 = (0x08966F34u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 225u, 0x08941948u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966F34u) goto L_08966F34;
    return;
L_08966F34:
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
L_08966F40:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x08966F70u);
    // nop
    hot_regs.g29 = g29;
    goto L_08966FCC;
}
L_08966F70:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9093), static_cast<std::uint8_t>(hot_regs.g4));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9104));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9120), std::bit_cast<std::uint32_t>(hot_regs.f22));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9136));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9152), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-17520));
    hot_regs.g4 = (0u | 183u);
    hot_regs.g31 = (0x08966FA8u);
    hot_regs.g5 = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966FA8u) goto L_08966FA8;
    return;
L_08966FA8:
    hot_regs.g31 = (0x08966FB0u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08966FB0u) goto L_08966FB0;
    return;
L_08966FB0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08966FCC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08967048;
      }
      goto L_08966FE4;
    }
}
L_08966FE4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(612)));
    hot_regs.g6 = (0u | 2u);
    { const bool branch_taken = g5 != hot_regs.g6;
    g5 = (0u | 1u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08967010;
      }
      goto L_08966FF4;
    }
}
L_08966FF4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g28 = ctx.gpr[28];
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(612), static_cast<std::uint8_t>(g5));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(5444)));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(5436)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(5444), g4);
    g4 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(5436), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08967010;
}
L_08967010:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g4 = g4;
        goto L_08967028;
    }
    goto L_0896701C;
}
L_0896701C:
    hot_regs.g31 = (0x08967024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967024u) goto L_08967024;
    return;
L_08967024:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    goto L_08967028;
L_08967028:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g31 = (0x08967034u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 139u, 0x08B6CC28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967034u) goto L_08967034;
    return;
L_08967034:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g31 = (0x08967044u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 422u, 0x0880DD60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967044u) goto L_08967044;
    return;
L_08967044:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8968), 0u);
    goto L_08967048;
L_08967048:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9093), static_cast<std::uint8_t>(0u));
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
L_0896705C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08967198;
      }
      goto L_08967070;
    }
}
L_08967070:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = g4 == 0u;
    hot_regs.g6 = (g4 + static_cast<std::uint32_t>(2228));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089670F8;
      }
      goto L_0896707C;
    }
}
L_0896707C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (0u | 58u);
    { const bool branch_taken = g6 == hot_regs.g7;
    g6 = (hot_regs.g4 + static_cast<std::uint32_t>(2228));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089670F8;
      }
      goto L_0896708C;
    }
}
L_0896708C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (0u | 57u);
    { const bool branch_taken = g6 == hot_regs.g7;
    g6 = (hot_regs.g4 + static_cast<std::uint32_t>(2228));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089670F8;
      }
      goto L_0896709C;
    }
}
L_0896709C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (0u | 60u);
    { const bool branch_taken = g6 == hot_regs.g7;
    g6 = (hot_regs.g4 + static_cast<std::uint32_t>(2228));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089670F8;
      }
      goto L_089670AC;
    }
}
L_089670AC:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (0u | 32u);
    { const bool branch_taken = g6 == hot_regs.g7;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089670F8;
      }
      goto L_089670BC;
    }
}
L_089670BC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(2196)));
    hot_regs.g6 = (0u | 38u);
    { const bool branch_taken = g4 == hot_regs.g6;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089670F8;
      }
      goto L_089670CC;
    }
}
L_089670CC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(636)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(632)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089670F8;
      }
      goto L_089670E4;
    }
L_089670E4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(72)));
    g5 = (32u << 16u);
    g4 = (g4 & g5);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08967198;
      }
      goto L_089670F8;
    }
}
L_089670F8:
    hot_regs.g31 = (0x08967100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967100u) goto L_08967100;
    return;
L_08967100:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
      if (branch_taken) {
          goto L_08967134;
      }
      goto L_08967108;
    }
L_08967108:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    hot_regs.g6 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g7 = (hot_regs.g4 << 8u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g6 = (2238u << 16u);
    hot_regs.g4 = (hot_regs.g7 + hot_regs.g4);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-6992));
    hot_regs.g31 = (0x08967130u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 264u, 0x089616E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967130u) goto L_08967130;
    return;
L_08967130:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    goto L_08967134;
L_08967134:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = g4 == 0u;
    g4 = (hot_regs.g5 + static_cast<std::uint32_t>(384));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08967160;
      }
      goto L_08967140;
    }
}
L_08967140:
    hot_regs.g5 = (0u | 1u);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g5 = (0u | 18u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(384));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(151), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g31 = (0x08967160u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967160u) goto L_08967160;
    return;
L_08967160:
    hot_regs.g31 = (0x08967168u);
    // nop
    goto L_08966FCC;
L_08967168:
    hot_regs.g31 = (0x08967170u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967170u) goto L_08967170;
    return;
L_08967170:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(154)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-257));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    hot_regs.g31 = (0x08967184u);
    aot_mem.aot_store16(hot_regs.g2 + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(hot_regs.g4));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967184u) goto L_08967184;
    return;
L_08967184:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(2318));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2));
    g5 = (g5 & hot_regs.g6);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g5));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08967198;
}
L_08967198:
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
L_089671A4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0896724C;
      }
      goto L_089671BC;
    }
}
L_089671BC:
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x089671C8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089671C8u) goto L_089671C8;
    return;
L_089671C8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17224u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896724C;
      }
      goto L_0896720C;
    }
L_0896720C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08967244;
      }
      goto L_0896721C;
    }
}
L_0896721C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g5 = (0u | 1u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(384));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g5 = (0u | 18u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(384));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(151), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g31 = (0x08967244u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967244u) goto L_08967244;
    return;
L_08967244:
    hot_regs.g31 = (0x0896724Cu);
    // nop
    goto L_08966FCC;
L_0896724C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0896725C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9160)));
    g5 = (static_cast<std::int32_t>(g5) < 16 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089672A8;
      }
      goto L_0896726C;
    }
}
L_0896726C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g28 = ctx.gpr[28];
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(9160)));
    g5 = (g5 << 4u);
    g6 = (2247u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(14448));
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
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(9160)));
    g5 = (g4 << 2u);
    g6 = (2247u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(14704));
    g5 = (g5 + g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(9160), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_089672A8;
}
L_089672A8:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089672B0:
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
    g4 = (g28 + static_cast<std::uint32_t>(9168));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(9184), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (0u | 1u);
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(9188), static_cast<std::uint8_t>(g4));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089672CC:
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9188), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089672D4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9188)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089673EC;
      }
      goto L_089672FC;
    }
}
L_089672FC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9160)));
    g5 = (18371u << 16u);
    ctx.gpr[18] = (0u | 0u);
    g5 = (g5 | 20467u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    hot_regs.f20 = std::bit_cast<float>(g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08967388;
      }
      goto L_0896731C;
    }
}
L_0896731C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (2247u << 16u);
    g17 = (0u | 0u);
    g4 = (g4 + static_cast<std::uint32_t>(14448));
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    g17 = (g17 + g4);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    goto L_08967330;
}
L_08967330:
    hot_regs.g31 = (0x08967338u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967338u) goto L_08967338;
    return;
L_08967338:
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
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08967374;
      }
      goto L_0896736C;
    }
L_0896736C:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08967374;
L_08967374:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9160)));
    g18 = (g18 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08967330;
      }
      goto L_08967388;
    }
}
L_08967388:
    hot_regs.g4 = (17096u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089673E8;
      }
      goto L_089673A0;
    }
L_089673A0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (ctx.gpr[19] << 4u);
    g5 = (2247u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(14448));
    g4 = (g4 + g5);
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
    g5 = (ctx.gpr[19] << 2u);
    g6 = (2247u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(14704));
    g5 = (g5 + g6);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9168));
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x089673E8u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9184)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08966F40;
}
L_089673E8:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9188), static_cast<std::uint8_t>(0u));
    goto L_089673EC;
L_089673EC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0896740C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-224));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(204), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(220), hot_regs.g31);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
        goto L_08967448;
    }
    goto L_0896743C;
}
L_0896743C:
    hot_regs.g31 = (0x08967444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967444u) goto L_08967444;
    return;
L_08967444:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_08967448;
L_08967448:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(19)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08967468;
      }
      goto L_08967454;
    }
}
L_08967454:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08967470;
      }
      goto L_08967460;
    }
L_08967460:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
      if (branch_taken) {
          goto L_08967E90;
      }
      goto L_08967468;
    }
L_08967468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967F08;
      }
      goto L_08967470;
    }
L_08967470:
    hot_regs.g31 = (0x08967478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 96u, 0x08968588u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967478u) goto L_08967478;
    return;
L_08967478:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4211)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08967F08;
      }
      goto L_08967484;
    }
L_08967484:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g21 = ctx.gpr[21];
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    g5 = (g4 + g4);
    hot_regs.g6 = (g4 << 8u);
    g4 = (g4 + g5);
    g4 = (g4 << 5u);
    g21 = (hot_regs.g6 + g4);
    g4 = (2238u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-6992));
    g21 = (g21 + g4);
    g4 = (aot_mem.aot_load8(g21 + static_cast<std::uint32_t>(208)));
    g5 = (g4 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_08967F08;
      }
      goto L_089674B8;
    }
}
L_089674B8:
{
    std::uint32_t g1 = ctx.gpr[1];
    g1 = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = hot_regs.g4 == g1;
    g1 = (0u + static_cast<std::uint32_t>(2));
    ctx.gpr[1] = g1;
      if (branch_taken) {
          goto L_08967530;
      }
      goto L_089674C4;
    }
}
L_089674C4:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08967890;
      }
      goto L_089674CC;
    }
L_089674CC:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08967C64;
      }
      goto L_089674D4;
    }
L_089674D4:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08967E88;
      }
      goto L_089674DC;
    }
L_089674DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 58u);
    g4 = (g4 + static_cast<std::uint32_t>(2228));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 != hot_regs.g5;
    ctx.gpr[16] = (0u | 65u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08967504;
      }
      goto L_089674F4;
    }
}
L_089674F4:
    hot_regs.g31 = (0x089674FCu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 676u, 0x08947574u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089674FCu) goto L_089674FC;
    return;
L_089674FC:
    hot_regs.g31 = (0x08967504u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 222u, 0x089614B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967504u) goto L_08967504;
    return;
L_08967504:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(2228));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 != ctx.gpr[16];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08967528;
      }
      goto L_08967518;
    }
}
L_08967518:
    hot_regs.g31 = (0x08967520u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 676u, 0x08947574u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967520u) goto L_08967520;
    return;
L_08967520:
    hot_regs.g31 = (0x08967528u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 241u, 0x089615ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967528u) goto L_08967528;
    return;
L_08967528:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967F08;
      }
      goto L_08967530;
    }
L_08967530:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(212)));
    g17 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7668)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g17 = (g17 - g4);
    g19 = (hot_regs.g5 - g4);
    g4 = (g19 < static_cast<std::uint32_t>(2049) ? 1u : 0u);
    ctx.gpr[16] = (g19 < static_cast<std::uint32_t>(4096) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g19 = (g19 < static_cast<std::uint32_t>(4608) ? 1u : 0u);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08967590;
      }
      goto L_08967554;
    }
}
L_08967554:
    hot_regs.g4 = (ctx.gpr[17] < static_cast<std::uint32_t>(2049) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08967590;
      }
      goto L_08967560;
    }
L_08967560:
    hot_regs.g4 = (2236u << 16u);
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 200u);
    hot_regs.g6 = (0u | 200u);
    hot_regs.g31 = (0x0896757Cu);
    hot_regs.g7 = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 156u, 0x08A1CF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896757Cu) goto L_0896757C;
    return;
L_0896757C:
    hot_regs.g6 = (16384u << 16u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g31 = (0x08967590u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967590u) goto L_08967590;
    return;
L_08967590:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    hot_regs.g4 = (ctx.gpr[17] < static_cast<std::uint32_t>(4097) ? 1u : 0u);
      if (branch_taken) {
          goto L_089677F8;
      }
      goto L_08967598;
    }
L_08967598:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089677F8;
      }
      goto L_089675A0;
    }
L_089675A0:
{
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(339)));
    hot_regs.f20 = std::bit_cast<float>(0u);
    g20 = (2236u << 16u);
    ctx.gpr[16] = (g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (g29 + static_cast<std::uint32_t>(32));
    g20 = (g20 + static_cast<std::uint32_t>(32304));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_089675C8;
      }
      goto L_089675C0;
    }
}
L_089675C0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(339), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089675EC;
      }
      goto L_089675C8;
    }
L_089675C8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(172)));
    g4 = (g4 + static_cast<std::uint32_t>(-100));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    g4 = (0u | 0u);
    hot_regs.g4 = g4;
        goto L_089675DC;
    }
    goto L_089675DC;
}
L_089675DC:
    hot_regs.g31 = (0x089675E4u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(172), hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 622u, 0x08863530u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089675E4u) goto L_089675E4;
    return;
L_089675E4:
    hot_regs.g31 = (0x089675ECu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 79u, 0x0890849Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089675ECu) goto L_089675EC;
    return;
L_089675EC:
    hot_regs.g31 = (0x089675F4u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089675F4u) goto L_089675F4;
    return;
L_089675F4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0896767C;
      }
      goto L_089675FC;
    }
L_089675FC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896767C;
      }
      goto L_0896760C;
    }
}
L_0896760C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1152)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = g5 != g4;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08967670;
      }
      goto L_08967620;
    }
}
L_08967620:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08967630u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 72u, 0x08B00520u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967630u) goto L_08967630;
    return;
L_08967630:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 5u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1152)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 496u);
    g4 = (g4 >> 4u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896767C;
      }
      goto L_08967650;
    }
}
L_08967650:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    g5 = (0u + static_cast<std::uint32_t>(-497));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1152)));
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g5 = (hot_regs.g6 & g5);
    g5 = (g5 | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(72), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0896767C;
      }
      goto L_08967670;
    }
}
L_08967670:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x0896767Cu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 40u, 0x08B00384u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896767Cu) goto L_0896767C;
    return;
L_0896767C:
    hot_regs.g31 = (0x08967684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 969u, 0x0897FE60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967684u) goto L_08967684;
    return;
L_08967684:
    hot_regs.g31 = (0x0896768Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 231u, 0x08AB92E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896768Cu) goto L_0896768C;
    return;
L_0896768C:
    hot_regs.g31 = (0x08967694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 366u, 0x08B41628u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967694u) goto L_08967694;
    return;
L_08967694:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x089676A0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 111u, 0x089609B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089676A0u) goto L_089676A0;
    return;
L_089676A0:
    hot_regs.g6 = (17786u << 16u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g31 = (0x089676B4u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 595u, 0x0889B6ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089676B4u) goto L_089676B4;
    return;
L_089676B4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    hot_regs.g4 = g4;
        goto L_089676CC;
    }
    goto L_089676C0;
}
L_089676C0:
    hot_regs.g31 = (0x089676C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089676C8u) goto L_089676C8;
    return;
L_089676C8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089676CC;
L_089676CC:
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6864));
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
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089676F0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 461u, 0x08A93198u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089676F0u) goto L_089676F0;
    return;
L_089676F0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08967734;
      }
      goto L_089676F8;
    }
L_089676F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    hot_regs.g4 = g4;
        goto L_08967710;
    }
    goto L_08967704;
}
L_08967704:
    hot_regs.g31 = (0x0896770Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896770Cu) goto L_0896770C;
    return;
L_0896770C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08967710;
L_08967710:
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6864));
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
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0896772Cu);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 42u, 0x08A943CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896772Cu) goto L_0896772C;
    return;
L_0896772C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967748;
      }
      goto L_08967734;
    }
L_08967734:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x08967748u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 42u, 0x08A943CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967748u) goto L_08967748;
    return;
L_08967748:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9189), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9190), static_cast<std::uint8_t>(0u));
    hot_regs.g31 = (0x08967758u);
    hot_regs.g4 = (0u | 720u);
    goto L_08966E58;
L_08967758:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    hot_regs.g4 = g4;
        goto L_08967770;
    }
    goto L_08967764;
}
L_08967764:
    hot_regs.g31 = (0x0896776Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896776Cu) goto L_0896776C;
    return;
L_0896776C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08967770;
L_08967770:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(11240), 0u);
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5432), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08967788u);
    hot_regs.g4 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 64u, 0x08A90840u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967788u) goto L_08967788;
    return;
L_08967788:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x089677A0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    goto L_08967F30;
L_089677A0:
    hot_regs.g31 = (0x089677A8u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 316u, 0x08A225A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089677A8u) goto L_089677A8;
    return;
L_089677A8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089677BC;
      }
      goto L_089677B4;
    }
L_089677B4:
    hot_regs.g31 = (0x089677BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089677BCu) goto L_089677BC;
    return;
L_089677BC:
    hot_regs.g31 = (0x089677C4u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 27u, 0x089EC260u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089677C4u) goto L_089677C4;
    return;
L_089677C4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x089677D0u);
    g4 = (g4 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
    goto L_08966DE0;
}
L_089677D0:
    hot_regs.g31 = (0x089677D8u);
    // nop
    goto L_089672D4;
L_089677D8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1936), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x089677E4u);
    hot_regs.g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(2856));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 518u, 0x088BA740u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089677E4u) goto L_089677E4;
    return;
L_089677E4:
    hot_regs.g31 = (0x089677ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 376u, 0x08A92D5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089677ECu) goto L_089677EC;
    return;
L_089677EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(5464), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9191), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_089677F8;
}
L_089677F8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08967888;
      }
      goto L_08967800;
    }
L_08967800:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08967830;
      }
      goto L_08967810;
    }
L_08967810:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(3292)));
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08967830;
      }
      goto L_08967828;
    }
}
L_08967828:
    hot_regs.g31 = (0x08967830u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 573u, 0x08946F00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967830u) goto L_08967830;
    return;
L_08967830:
    hot_regs.g31 = (0x08967838u);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967838u) goto L_08967838;
    return;
L_08967838:
    aot_mem.aot_store16(hot_regs.g2 + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(0u));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9192)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08967880;
      }
      goto L_08967848;
    }
L_08967848:
    hot_regs.g4 = (2236u << 16u);
    ctx.gpr[16] = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 200u);
    hot_regs.g6 = (0u | 200u);
    hot_regs.g31 = (0x08967864u);
    hot_regs.g7 = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 156u, 0x08A1CF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967864u) goto L_08967864;
    return;
L_08967864:
    hot_regs.g6 = (16448u << 16u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g31 = (0x08967878u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967878u) goto L_08967878;
    return;
L_08967878:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967888;
      }
      goto L_08967880;
    }
L_08967880:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9192), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08967888;
L_08967888:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967F08;
      }
      goto L_08967890;
    }
L_08967890:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g19 = ctx.gpr[19];
    g16 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(212)));
    g19 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7668)));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g19 = (g19 - g16);
    g16 = (g4 - g16);
    g4 = (g16 < static_cast<std::uint32_t>(2049) ? 1u : 0u);
    ctx.gpr[18] = (g16 < static_cast<std::uint32_t>(4096) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[17] = (g16 < static_cast<std::uint32_t>(4608) ? 1u : 0u);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_089678F0;
      }
      goto L_089678B4;
    }
}
L_089678B4:
    hot_regs.g4 = (ctx.gpr[19] < static_cast<std::uint32_t>(2049) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089678F0;
      }
      goto L_089678C0;
    }
L_089678C0:
    hot_regs.g4 = (2236u << 16u);
    ctx.gpr[20] = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x089678DCu);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 156u, 0x08A1CF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089678DCu) goto L_089678DC;
    return;
L_089678DC:
    hot_regs.g6 = (16384u << 16u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g31 = (0x089678F0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089678F0u) goto L_089678F0;
    return;
L_089678F0:
    hot_regs.g31 = (0x089678F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 617u, 0x088634F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089678F8u) goto L_089678F8;
    return;
L_089678F8:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089679AC;
      }
      goto L_08967900;
    }
L_08967900:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(341)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089679AC;
      }
      goto L_0896790C;
    }
L_0896790C:
    hot_regs.g31 = (0x08967914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967914u) goto L_08967914;
    return;
L_08967914:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17452)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17456)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08967928u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967928u) goto L_08967928;
    return;
L_08967928:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    g4 = (hot_regs.g2 >> 31u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    g4 = (ctx.gpr[1] | g4);
    g4 = (g4 | 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089679A4;
      }
      goto L_08967944;
    }
}
L_08967944:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u | 1u);
    g5 = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(342)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(341), static_cast<std::uint8_t>(g4));
    g5 = (static_cast<std::int32_t>(g5) < 10 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08967970;
      }
      goto L_0896795C;
    }
}
L_0896795C:
    hot_regs.g6 = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(342)));
    hot_regs.g31 = (0x08967968u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-17488));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967968u) goto L_08967968;
    return;
L_08967968:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896797C;
      }
      goto L_08967970;
    }
L_08967970:
    hot_regs.g6 = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(342)));
    hot_regs.g31 = (0x0896797Cu);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-17476));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896797Cu) goto L_0896797C;
    return;
L_0896797C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g21 = ctx.gpr[21];
    g4 = (aot_mem.aot_load16(g21 + static_cast<std::uint32_t>(342)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g21 + static_cast<std::uint32_t>(342), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load16(g21 + static_cast<std::uint32_t>(342)));
    g4 = (static_cast<std::int32_t>(g4) < 29 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089679AC;
      }
      goto L_08967998;
    }
}
L_08967998:
    hot_regs.g4 = (0u | 20u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(342), static_cast<std::uint16_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_089679AC;
      }
      goto L_089679A4;
    }
L_089679A4:
    hot_regs.g4 = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(341), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089679AC;
L_089679AC:
    hot_regs.g4 = (ctx.gpr[16] < static_cast<std::uint32_t>(4001) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089679D0;
      }
      goto L_089679B8;
    }
L_089679B8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(341)));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089679D0;
      }
      goto L_089679C8;
    }
L_089679C8:
    hot_regs.g4 = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(341), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089679D0;
L_089679D0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    hot_regs.g4 = (ctx.gpr[19] < static_cast<std::uint32_t>(4097) ? 1u : 0u);
      if (branch_taken) {
          goto L_08967BF8;
      }
      goto L_089679D8;
    }
L_089679D8:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08967BF8;
      }
      goto L_089679E0;
    }
L_089679E0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    g16 = (2236u << 16u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(2320)));
    g4 = (g4 + static_cast<std::uint32_t>(-2));
    hot_regs.g5 = (g4 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    g16 = (g16 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08967A24;
      }
      goto L_089679FC;
    }
}
L_089679FC:
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08967A2C;
      }
      goto L_08967A04;
    }
L_08967A04:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08967A34;
      }
      goto L_08967A0C;
    }
L_08967A0C:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08967A3C;
      }
      goto L_08967A14;
    }
L_08967A14:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08967A44;
      }
      goto L_08967A1C;
    }
L_08967A1C:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08967A4C;
      }
      goto L_08967A24;
    }
L_08967A24:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 100u);
      if (branch_taken) {
          goto L_08967A50;
      }
      goto L_08967A2C;
    }
L_08967A2C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 200u);
      if (branch_taken) {
          goto L_08967A50;
      }
      goto L_08967A34;
    }
L_08967A34:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 400u);
      if (branch_taken) {
          goto L_08967A50;
      }
      goto L_08967A3C;
    }
L_08967A3C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 600u);
      if (branch_taken) {
          goto L_08967A50;
      }
      goto L_08967A44;
    }
L_08967A44:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 900u);
      if (branch_taken) {
          goto L_08967A50;
      }
      goto L_08967A4C;
    }
L_08967A4C:
    hot_regs.g4 = (0u | 1500u);
    goto L_08967A50;
L_08967A50:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(338)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08967A64;
      }
      goto L_08967A5C;
    }
L_08967A5C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(338), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08967A88;
      }
      goto L_08967A64;
    }
L_08967A64:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(172)));
    g4 = (g5 - g4);
    g5 = (static_cast<std::int32_t>(g4) < 0 ? 1u : 0u);
    if (g5 != 0u) {
    g4 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_08967A78;
    }
    goto L_08967A78;
}
L_08967A78:
    hot_regs.g31 = (0x08967A80u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(172), hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 622u, 0x08863530u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967A80u) goto L_08967A80;
    return;
L_08967A80:
    hot_regs.g31 = (0x08967A88u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 79u, 0x0890849Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967A88u) goto L_08967A88;
    return;
L_08967A88:
    hot_regs.g31 = (0x08967A90u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967A90u) goto L_08967A90;
    return;
L_08967A90:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08967B18;
      }
      goto L_08967A98;
    }
L_08967A98:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08967B18;
      }
      goto L_08967AA8;
    }
}
L_08967AA8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1152)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = g5 != g4;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08967B0C;
      }
      goto L_08967ABC;
    }
}
L_08967ABC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08967ACCu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 72u, 0x08B00520u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967ACCu) goto L_08967ACC;
    return;
L_08967ACC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 5u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1152)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 496u);
    g4 = (g4 >> 4u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08967B18;
      }
      goto L_08967AEC;
    }
}
L_08967AEC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    g5 = (0u + static_cast<std::uint32_t>(-497));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1152)));
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g5 = (hot_regs.g6 & g5);
    g5 = (g5 | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(72), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08967B18;
      }
      goto L_08967B0C;
    }
}
L_08967B0C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08967B18u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 40u, 0x08B00384u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967B18u) goto L_08967B18;
    return;
L_08967B18:
    hot_regs.g31 = (0x08967B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 969u, 0x0897FE60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967B20u) goto L_08967B20;
    return;
L_08967B20:
    hot_regs.g31 = (0x08967B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 231u, 0x08AB92E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967B28u) goto L_08967B28;
    return;
L_08967B28:
    hot_regs.g31 = (0x08967B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 366u, 0x08B41628u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967B30u) goto L_08967B30;
    return;
L_08967B30:
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08967B40u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 111u, 0x089609B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967B40u) goto L_08967B40;
    return;
L_08967B40:
    hot_regs.g4 = (17786u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08967B54u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 595u, 0x0889B6ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967B54u) goto L_08967B54;
    return;
L_08967B54:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08967B6Cu);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 71u, 0x08A946ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967B6Cu) goto L_08967B6C;
    return;
L_08967B6C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9189), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9190), static_cast<std::uint8_t>(0u));
    hot_regs.g31 = (0x08967B7Cu);
    hot_regs.g4 = (0u | 720u);
    goto L_08966E58;
L_08967B7C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08967B94u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    goto L_08967F30;
L_08967B94:
    hot_regs.g31 = (0x08967B9Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 79u, 0x0890849Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967B9Cu) goto L_08967B9C;
    return;
L_08967B9C:
    hot_regs.g31 = (0x08967BA4u);
    // nop
    goto L_089672D4;
L_08967BA4:
    hot_regs.g31 = (0x08967BACu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 316u, 0x08A225A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967BACu) goto L_08967BAC;
    return;
L_08967BAC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08967BC0;
      }
      goto L_08967BB8;
    }
L_08967BB8:
    hot_regs.g31 = (0x08967BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967BC0u) goto L_08967BC0;
    return;
L_08967BC0:
    hot_regs.g31 = (0x08967BC8u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 27u, 0x089EC260u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967BC8u) goto L_08967BC8;
    return;
L_08967BC8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08967BD4u);
    g4 = (g4 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
    goto L_08966DE0;
}
L_08967BD4:
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(2856));
    hot_regs.g31 = (0x08967BE4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1936), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 518u, 0x088BA740u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967BE4u) goto L_08967BE4;
    return;
L_08967BE4:
    hot_regs.g31 = (0x08967BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 376u, 0x08A92D5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967BECu) goto L_08967BEC;
    return;
L_08967BEC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(5464), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9191), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08967BF8;
}
L_08967BF8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08967C5C;
      }
      goto L_08967C00;
    }
L_08967C00:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(0u));
    hot_regs.g31 = (0x08967C0Cu);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967C0Cu) goto L_08967C0C;
    return;
L_08967C0C:
    aot_mem.aot_store16(hot_regs.g2 + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(0u));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9193)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08967C54;
      }
      goto L_08967C1C;
    }
L_08967C1C:
    hot_regs.g4 = (2236u << 16u);
    ctx.gpr[16] = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08967C38u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 156u, 0x08A1CF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967C38u) goto L_08967C38;
    return;
L_08967C38:
    hot_regs.g6 = (16448u << 16u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g31 = (0x08967C4Cu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967C4Cu) goto L_08967C4C;
    return;
L_08967C4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967C5C;
      }
      goto L_08967C54;
    }
L_08967C54:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9193), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08967C5C;
L_08967C5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967F08;
      }
      goto L_08967C64;
    }
L_08967C64:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(212)));
    g16 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7668)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g16 = (g16 - g4);
    g18 = (hot_regs.g5 - g4);
    g4 = (g18 < static_cast<std::uint32_t>(2049) ? 1u : 0u);
    ctx.gpr[17] = (g18 < static_cast<std::uint32_t>(4096) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g18 = (g18 < static_cast<std::uint32_t>(4608) ? 1u : 0u);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08967CC4;
      }
      goto L_08967C88;
    }
}
L_08967C88:
    hot_regs.g4 = (ctx.gpr[16] < static_cast<std::uint32_t>(2049) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08967CC4;
      }
      goto L_08967C94;
    }
L_08967C94:
    hot_regs.g4 = (2236u << 16u);
    ctx.gpr[19] = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08967CB0u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 156u, 0x08A1CF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967CB0u) goto L_08967CB0;
    return;
L_08967CB0:
    hot_regs.g6 = (16384u << 16u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g31 = (0x08967CC4u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967CC4u) goto L_08967CC4;
    return;
L_08967CC4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    hot_regs.g4 = (ctx.gpr[16] < static_cast<std::uint32_t>(4097) ? 1u : 0u);
      if (branch_taken) {
          goto L_08967E38;
      }
      goto L_08967CCC;
    }
L_08967CCC:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08967E38;
      }
      goto L_08967CD4;
    }
L_08967CD4:
    hot_regs.g31 = (0x08967CDCu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967CDCu) goto L_08967CDC;
    return;
L_08967CDC:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (2236u << 16u);
    { const bool branch_taken = hot_regs.g2 == 0u;
    g16 = (g16 + static_cast<std::uint32_t>(32304));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08967D68;
      }
      goto L_08967CE8;
    }
}
L_08967CE8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08967D68;
      }
      goto L_08967CF8;
    }
}
L_08967CF8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1152)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = g5 != g4;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08967D5C;
      }
      goto L_08967D0C;
    }
}
L_08967D0C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08967D1Cu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 72u, 0x08B00520u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967D1Cu) goto L_08967D1C;
    return;
L_08967D1C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 5u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1152)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 496u);
    g4 = (g4 >> 4u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08967D68;
      }
      goto L_08967D3C;
    }
}
L_08967D3C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    g5 = (0u + static_cast<std::uint32_t>(-497));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1152)));
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g5 = (hot_regs.g6 & g5);
    g5 = (g5 | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(72), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08967D68;
      }
      goto L_08967D5C;
    }
}
L_08967D5C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08967D68u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 40u, 0x08B00384u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967D68u) goto L_08967D68;
    return;
L_08967D68:
    hot_regs.g31 = (0x08967D70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 969u, 0x0897FE60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967D70u) goto L_08967D70;
    return;
L_08967D70:
    hot_regs.g31 = (0x08967D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 231u, 0x08AB92E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967D78u) goto L_08967D78;
    return;
L_08967D78:
    hot_regs.g31 = (0x08967D80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 366u, 0x08B41628u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967D80u) goto L_08967D80;
    return;
L_08967D80:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08967D90u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 111u, 0x089609B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967D90u) goto L_08967D90;
    return;
L_08967D90:
    hot_regs.g4 = (17786u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08967DA4u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 595u, 0x0889B6ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967DA4u) goto L_08967DA4;
    return;
L_08967DA4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08967DBCu);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 71u, 0x08A946ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967DBCu) goto L_08967DBC;
    return;
L_08967DBC:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9189), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9190), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08967DDCu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    goto L_08967F30;
L_08967DDC:
    hot_regs.g31 = (0x08967DE4u);
    // nop
    goto L_089672CC;
L_08967DE4:
    hot_regs.g31 = (0x08967DECu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 316u, 0x08A225A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967DECu) goto L_08967DEC;
    return;
L_08967DEC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08967E00;
      }
      goto L_08967DF8;
    }
L_08967DF8:
    hot_regs.g31 = (0x08967E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967E00u) goto L_08967E00;
    return;
L_08967E00:
    hot_regs.g31 = (0x08967E08u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 27u, 0x089EC260u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967E08u) goto L_08967E08;
    return;
L_08967E08:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08967E14u);
    g4 = (g4 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
    goto L_08966DE0;
}
L_08967E14:
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(2856));
    hot_regs.g31 = (0x08967E24u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1936), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 518u, 0x088BA740u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967E24u) goto L_08967E24;
    return;
L_08967E24:
    hot_regs.g31 = (0x08967E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 376u, 0x08A92D5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967E2Cu) goto L_08967E2C;
    return;
L_08967E2C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(5464), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9191), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08967E38;
}
L_08967E38:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08967E80;
      }
      goto L_08967E40;
    }
L_08967E40:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(0u));
    hot_regs.g31 = (0x08967E4Cu);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967E4Cu) goto L_08967E4C;
    return;
L_08967E4C:
    hot_regs.g4 = (2236u << 16u);
    ctx.gpr[16] = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    aot_mem.aot_store16(hot_regs.g2 + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(0u));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08967E6Cu);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 156u, 0x08A1CF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967E6Cu) goto L_08967E6C;
    return;
L_08967E6C:
    hot_regs.g6 = (16448u << 16u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g31 = (0x08967E80u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967E80u) goto L_08967E80;
    return;
L_08967E80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967F08;
      }
      goto L_08967E88;
    }
L_08967E88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967F08;
      }
      goto L_08967E90;
    }
L_08967E90:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g5 = (g4 + g4);
    hot_regs.g6 = (g4 << 8u);
    g4 = (g4 + hot_regs.g5);
    g4 = (g4 << 5u);
    g16 = (hot_regs.g6 + g4);
    g4 = (2238u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-6992));
    g16 = (g16 + g4);
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08967F08;
      }
      goto L_08967EBC;
    }
}
L_08967EBC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 58u);
    g4 = (g4 + static_cast<std::uint32_t>(2228));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 != hot_regs.g5;
    ctx.gpr[17] = (0u | 65u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08967EE4;
      }
      goto L_08967ED4;
    }
}
L_08967ED4:
    hot_regs.g31 = (0x08967EDCu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 676u, 0x08947574u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967EDCu) goto L_08967EDC;
    return;
L_08967EDC:
    hot_regs.g31 = (0x08967EE4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 222u, 0x089614B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967EE4u) goto L_08967EE4;
    return;
L_08967EE4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(2228));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 != ctx.gpr[17];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08967F08;
      }
      goto L_08967EF8;
    }
}
L_08967EF8:
    hot_regs.g31 = (0x08967F00u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 676u, 0x08947574u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967F00u) goto L_08967F00;
    return;
L_08967F00:
    hot_regs.g31 = (0x08967F08u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 241u, 0x089615ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967F08u) goto L_08967F08;
    return;
L_08967F08:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(196)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(204)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(208)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(212)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(220)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08967F30:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), hot_regs.g31);
    hot_regs.g31 = (0x08967F64u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
    goto L_08966FCC;
}
L_08967F64:
    hot_regs.g4 = (17096u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.f22 = std::bit_cast<float>(0u);
    hot_regs.g5 = (8u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-12289));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1768), 0u);
    hot_regs.g4 = (hot_regs.g5 & hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), hot_regs.g4);
    hot_regs.g4 = (49152u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g5 & hot_regs.g4);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3261))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), hot_regs.g4);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3258), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (hot_regs.g5 & ctx.gpr[19]);
    ctx.gpr[18] = (2236u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(hot_regs.g4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32304));
    hot_regs.g31 = (0x08967FD4u);
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(2856));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 517u, 0x088BA728u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967FD4u) goto L_08967FD4;
    return;
L_08967FD4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3259), static_cast<std::uint8_t>(0u));
    hot_regs.g31 = (0x08967FE0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 676u, 0x08947574u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967FE0u) goto L_08967FE0;
    return;
L_08967FE0:
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(3160)));
    hot_regs.g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1712)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(3264), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08967FF8;
      }
      goto L_08967FF0;
    }
}
L_08967FF0:
    hot_regs.g31 = (0x08967FF8u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1712)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 649u, 0x089CF934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08967FF8u) goto L_08967FF8;
    return;
L_08967FF8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    hot_regs.g5 = (0u | 17u);
    ctx.pc = 0x08968000u; return;
}

void recomp_unit_0088(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0088_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_88(Runtime &runtime) {
    runtime.register_generated_unit(88u, 0x08964000u, 16384u, &recomp_unit_0088, &recomp_unit_0088_entry);
    runtime.register_function(0x08964000u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964084u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896408Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964094u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896409Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089640B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089640C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964108u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964138u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964144u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896414Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896415Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089641ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089641F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896420Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964224u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964230u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896423Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964244u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896424Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964258u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964264u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896426Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964280u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896433Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089644F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964534u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964540u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964578u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896457Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964604u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964614u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964620u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964624u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964628u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964630u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896463Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964640u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964654u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896465Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964660u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964664u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964698u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089646A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089646B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089646C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089646D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089646D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089646ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089646F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964704u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964708u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896471Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964728u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964730u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896475Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964768u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964770u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964784u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964790u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964798u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089647ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089647B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089647C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089647D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B98u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964BD8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C1Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C24u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964CC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E08u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964EE0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F28u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F68u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964FC0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964FD4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964FE8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964FF4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965008u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965034u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965070u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896512Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965144u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965154u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896516Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896517Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965194u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965214u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896522Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965244u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965248u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896524Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965254u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965264u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965274u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896528Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965304u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965314u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896531Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965320u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965324u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896532Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896533Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965340u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965360u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896536Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896537Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965388u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896540Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965428u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896543Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965448u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965454u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896545Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965470u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965478u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896549Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965528u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965534u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965540u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896555Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965610u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896561Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965630u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965650u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965680u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089656A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089656BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089656D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089656ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089656F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965700u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965714u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965720u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965740u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896575Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896576Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965780u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896578Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965798u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089657A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089657B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089657D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089657E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089657F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965804u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965818u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965830u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965840u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896584Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965864u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896589Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089658ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089658B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089658D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089659ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089659CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089659ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A20u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A60u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A70u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A7Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AC4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AD4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AE0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AF8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B18u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B28u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B34u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B50u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B68u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B78u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B84u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965BBCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965BCCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965BD8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965BF4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C1Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C28u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C60u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C70u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C7Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C98u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CB0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CC0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CCCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CE4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D20u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D3Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D70u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D88u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965DA8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965DF8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E24u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E44u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E7Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E90u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965EA8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F1Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F28u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F34u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965FA4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965FB0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965FBCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965FC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965FD4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965FE0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965FF4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966000u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966014u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966020u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966084u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089660A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089660C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089660D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089660DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089660E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089660ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089660F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966108u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966114u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896611Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966124u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966134u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966140u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966148u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966158u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966184u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966194u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089661A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089661ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089661B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089661B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089661C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089661D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089661E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966200u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966204u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966208u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966218u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966224u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966234u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966240u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966258u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966270u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966274u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966278u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966288u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966294u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966304u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966314u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966320u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966330u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896633Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966358u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966398u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089663ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089663B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089663C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089663E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089663E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089663ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896640Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966498u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966590u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896659Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966600u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966628u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966634u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966708u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966748u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966758u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966764u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966774u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966784u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089667A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089667B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089667BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089667C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089667D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089667D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089667E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089667E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089667F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089667FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966804u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896680Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966824u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966830u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896683Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966848u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966850u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966858u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896685Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966868u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966870u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896687Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966888u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966894u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966898u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089668A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089668B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089668CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089668D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089668E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089668F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966908u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966914u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966920u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896692Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966938u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966944u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896694Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966954u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896695Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966974u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966980u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966988u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966994u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A08u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A2Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A44u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A58u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A94u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966ABCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966AC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966AD4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966AE4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B1Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B28u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B48u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B5Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B8Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966BA0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966BD8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966BE0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966BFCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C20u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C58u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C74u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966CA8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966CB0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966CB8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966CD0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D68u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D70u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D74u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D7Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D94u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966DA0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966DACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966DC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966DE0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966DF4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966DFCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E48u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E58u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E7Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E8Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E98u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966EACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966EB0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966EBCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966ED8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966EE8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F18u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F24u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F28u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F34u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F70u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966FA8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966FB0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966FCCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966FE4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966FF4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967010u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896701Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967024u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967028u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967034u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967044u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967048u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896705Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967070u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896707Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896708Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896709Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089670ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089670BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089670CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089670E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089670F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967100u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967108u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967130u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967134u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967140u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967160u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967168u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967170u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967184u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967198u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089671A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089671BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089671C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896720Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896721Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967244u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896724Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896725Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896726Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089672A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089672B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089672CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089672D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089672FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896731Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967330u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967338u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896736Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967374u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967388u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089673A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089673E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089673ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896740Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896743Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967444u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967448u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967454u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967460u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967468u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967470u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967478u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967484u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089674B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089674C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089674CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089674D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089674DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089674F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089674FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967504u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967518u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967520u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967528u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967530u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967554u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967560u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896757Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967590u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967598u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089675A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089675C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089675C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089675DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089675E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089675ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089675F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089675FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896760Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967620u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967630u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967650u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967670u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896767Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967684u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896768Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967694u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089676A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089676B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089676C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089676C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089676CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089676F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089676F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967704u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896770Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967710u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896772Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967734u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967748u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967758u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967764u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896776Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967770u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967788u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967800u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967810u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967828u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967830u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967838u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967848u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967864u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967878u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967880u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967888u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967890u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089678B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089678C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089678DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089678F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089678F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967900u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896790Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967914u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967928u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967944u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896795Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967968u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967970u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896797Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967998u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089679A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089679ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089679B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089679C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089679D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089679D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089679E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089679FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A1Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A24u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A2Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A34u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A3Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A44u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A50u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A5Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A78u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A88u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A90u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A98u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967AA8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967ABCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967ACCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967AECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B18u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B20u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B28u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B30u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B6Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B7Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B94u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967BA4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967BACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967BB8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967BC0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967BC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967BD4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967BE4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967BECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967BF8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C1Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C5Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C88u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C94u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967CB0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967CC4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967CCCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967CD4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967CDCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967CE8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967CF8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D1Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D3Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D5Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D68u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D70u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D78u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D90u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DA4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DBCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DDCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DE4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DF8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E08u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E24u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E2Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E6Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E88u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E90u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967EBCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967ED4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967EDCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967EE4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967EF8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F08u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F30u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967FD4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967FE0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967FF0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967FF8u, &recomp_unit_0088, "recomp_unit_0088");
}
} // namespace psprecomp
