#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0179[4095] = {
    1, 2, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 8, 0, 9, 0, 0, 0, 10, 0, 11, 0, 12, 0, 13,
    0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0,
    0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27,
    0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 57, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0,
    68, 0, 69, 0, 70, 0, 71, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 0, 0, 79, 0, 0,
    0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0,
    90, 0, 0, 91, 0, 92, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 99, 0, 100, 0, 101, 0, 0, 102,
    0, 0, 103, 0, 0, 0, 0, 104, 0, 105, 0, 106, 0, 107, 0, 0, 0, 0, 108, 0, 0, 109, 0, 110, 0, 111, 112, 0, 0, 0, 113, 0,
    0, 114, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 123,
    0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 127, 128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 133,
    0, 134, 0, 135, 0, 0, 0, 136, 0, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144,
    0, 0, 145, 0, 0, 0, 146, 0, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 155,
    0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0,
    0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 165, 166, 0, 0, 0, 0, 0, 167, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0,
    0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0,
    191, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0,
    0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 205, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210,
    0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0,
    225, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0,
    0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 235, 236, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0,
    0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 247, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0,
    0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 258, 0, 0, 259, 0, 260, 0, 261,
    0, 262, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0, 0, 0, 270, 0, 0, 271, 0, 272, 0,
    273, 0, 274, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 280, 281, 0, 0, 282, 0, 0, 283, 0, 284, 0, 0, 0,
    285, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0,
    0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0,
    0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0,
    0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 310, 0, 0, 311, 0, 312, 0, 313, 0, 314, 0, 315, 0, 0, 316, 0, 0,
    317, 0, 0, 318, 0, 0, 319, 0, 0, 320, 0, 0, 321, 0, 0, 0, 322, 0, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0, 0, 328, 0,
    0, 329, 0, 0, 330, 0, 0, 331, 0, 0, 332, 333, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 338, 0, 339, 0,
    340, 0, 341, 0, 342, 0, 343, 0, 344, 345, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 355, 0, 356, 0,
    0, 0, 357, 0, 0, 358, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 0, 0, 366, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 369, 0, 0, 0, 0, 370, 0, 371, 0, 372, 0,
    373, 0, 374, 0, 0, 0, 0, 375, 0, 376, 0, 377, 0, 378, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0,
    0, 0, 383, 0, 384, 0, 385, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0,
    0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0, 397, 0, 0, 398, 0, 0, 0, 399, 0, 400, 0, 401, 0, 402, 0, 403,
    0, 0, 0, 404, 0, 405, 0, 406, 0, 407, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 411, 0, 0, 0, 0,
    412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0,
    0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 422, 0, 423, 0, 0, 0, 0, 424, 0, 425, 0,
    426, 0, 0, 0, 0, 427, 0, 428, 0, 429, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 435, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0,
    0, 439, 0, 440, 0, 441, 0, 442, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 449, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0,
    0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 456, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0,
    0, 0, 0, 0, 464, 465, 466, 0, 467, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 469, 470, 471, 0, 472, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 476, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0,
    0, 0, 0, 480, 481, 482, 0, 483, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 485, 486, 487, 0, 488, 0, 0, 0, 0, 0,
    0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 491, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0, 0,
    495, 0, 0, 0, 0, 0, 0, 496, 497, 498, 0, 499, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0,
    0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 511, 0, 512, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 518,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 522, 523, 0, 524, 0, 0,
    0, 525, 0, 0, 526, 0, 0, 0, 527, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 532,
    0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0, 539, 0,
    0, 540, 0, 0, 0, 541, 0, 0, 542, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 0, 0, 547, 0, 0,
    548, 0, 0, 0, 0, 0, 0, 549, 0, 0, 550, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 553, 0, 0,
    554, 0, 0, 0, 0, 0, 0, 555, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 558, 0, 0, 0, 0, 559, 0, 0,
    0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 564, 0,
    0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0, 567, 0, 0, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0,
    571, 0, 0, 572, 0, 0, 0, 573, 0, 0, 0, 0, 574, 0, 0, 575, 0, 0, 0, 576, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 579, 0,
    0, 0, 0, 580, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 585, 0, 0, 0, 0, 586, 0, 0, 587, 0,
    0, 0, 0, 588, 0, 0, 589, 0, 590, 0, 591, 0, 0, 0, 0, 592, 0, 0, 593, 0, 594, 0, 0, 0, 595, 0, 0, 596, 0, 0, 0, 0,
    0, 597, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 600, 0, 0, 0, 601, 0, 0, 602, 0, 0, 0, 0, 603, 0, 0, 604, 0, 0, 0,
    605, 0, 0, 606, 0, 0, 607, 0, 0, 0, 0, 608, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 613,
    0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 618, 0, 0, 0, 619, 0, 620, 0, 0,
    621, 0, 0, 0, 0, 622, 0, 0, 623, 0, 0, 0, 0, 624, 0, 0, 625, 0, 0, 0, 0, 626, 0, 0, 627, 0, 0, 0, 0, 628, 0, 0,
    629, 0, 0, 0, 0, 630, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0, 0, 633, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 0, 636, 0, 0,
    637, 0, 0, 0, 0, 638, 0, 0, 639, 0, 0, 0, 640, 0, 0, 641, 0, 0, 0, 0, 642, 0, 0, 643, 0, 0, 0, 644, 0, 0, 645, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 647, 0, 0, 648, 0, 0, 0, 649, 0, 0, 0, 650, 0, 0, 0, 0, 0, 651, 0,
    0, 652, 0, 653, 0, 654, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 657, 0, 0, 0, 658, 659, 660, 0,
    0, 0, 661, 0, 0, 662, 0, 0, 663, 0, 664, 665, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 668, 0, 0, 669, 0, 0, 670,
    0, 0, 671, 0, 672, 673, 0, 674, 0, 0, 0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 677, 678, 679, 0, 680, 0, 0, 681, 0, 682, 683, 0,
    684, 0, 0, 0, 0, 0, 685, 0, 686, 687, 0, 688, 0, 0, 0, 689, 0, 0, 0, 690, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0,
    0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 695, 0, 0, 696, 0, 0, 0,
    697, 0, 0, 698, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 702, 703, 0,
    0, 704, 0, 705, 0, 0, 0, 0, 706, 0, 0, 0, 707, 708, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 710, 0, 0, 711, 0, 0, 712, 0,
    0, 0, 713, 0, 714, 0, 0, 715, 0, 0, 0, 0, 0, 716, 0, 717, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 720, 0, 721, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 723, 0, 724, 0, 0, 0, 0, 725, 0, 0, 726, 0,
    0, 0, 727, 0, 728, 0, 0, 729, 0, 0, 730, 731, 0, 0, 0, 732, 0, 733, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0,
    0, 735, 0, 0, 736, 0, 737, 0, 738, 0, 739, 0, 740, 0, 741, 0, 742, 0, 743, 0, 0, 0, 744, 0, 0, 0, 745, 0, 0, 0, 0, 0,
    0, 0, 746, 0, 0, 747, 0, 748, 0, 0, 749, 0, 750, 0, 0, 0, 0, 0, 751, 0, 752, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 754,
    755, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 758, 0, 0, 759, 0, 0, 760, 0, 0, 0, 761, 0, 0, 0, 762,
};
void recomp_unit_0179_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AD0000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0179[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AD0000;
    case 2u: goto L_08AD0004;
    case 3u: goto L_08AD000C;
    case 4u: goto L_08AD001C;
    case 5u: goto L_08AD002C;
    case 6u: goto L_08AD003C;
    case 7u: goto L_08AD0044;
    case 8u: goto L_08AD004C;
    case 9u: goto L_08AD0054;
    case 10u: goto L_08AD0064;
    case 11u: goto L_08AD006C;
    case 12u: goto L_08AD0074;
    case 13u: goto L_08AD007C;
    case 14u: goto L_08AD0090;
    case 15u: goto L_08AD0098;
    case 16u: goto L_08AD00B0;
    case 17u: goto L_08AD00C0;
    case 18u: goto L_08AD00C8;
    case 19u: goto L_08AD00E4;
    case 20u: goto L_08AD00F0;
    case 21u: goto L_08AD0108;
    case 22u: goto L_08AD0134;
    case 23u: goto L_08AD01A4;
    case 24u: goto L_08AD01C0;
    case 25u: goto L_08AD01D4;
    case 26u: goto L_08AD01E8;
    case 27u: goto L_08AD01FC;
    case 28u: goto L_08AD0218;
    case 29u: goto L_08AD0234;
    case 30u: goto L_08AD0248;
    case 31u: goto L_08AD025C;
    case 32u: goto L_08AD0270;
    case 33u: goto L_08AD029C;
    case 34u: goto L_08AD02B8;
    case 35u: goto L_08AD02CC;
    case 36u: goto L_08AD02E0;
    case 37u: goto L_08AD02F4;
    case 38u: goto L_08AD0310;
    case 39u: goto L_08AD032C;
    case 40u: goto L_08AD0340;
    case 41u: goto L_08AD0354;
    case 42u: goto L_08AD0368;
    case 43u: goto L_08AD03B8;
    case 44u: goto L_08AD043C;
    case 45u: goto L_08AD0444;
    case 46u: goto L_08AD044C;
    case 47u: goto L_08AD04B4;
    case 48u: goto L_08AD04E8;
    case 49u: goto L_08AD0510;
    case 50u: goto L_08AD0530;
    case 51u: goto L_08AD0598;
    case 52u: goto L_08AD05AC;
    case 53u: goto L_08AD05C0;
    case 54u: goto L_08AD05DC;
    case 55u: goto L_08AD05E4;
    case 56u: goto L_08AD05EC;
    case 57u: goto L_08AD05F4;
    case 58u: goto L_08AD0600;
    case 59u: goto L_08AD061C;
    case 60u: goto L_08AD0624;
    case 61u: goto L_08AD0634;
    case 62u: goto L_08AD063C;
    case 63u: goto L_08AD0644;
    case 64u: goto L_08AD064C;
    case 65u: goto L_08AD0654;
    case 66u: goto L_08AD065C;
    case 67u: goto L_08AD0670;
    case 68u: goto L_08AD0680;
    case 69u: goto L_08AD0688;
    case 70u: goto L_08AD0690;
    case 71u: goto L_08AD0698;
    case 72u: goto L_08AD06A0;
    case 73u: goto L_08AD06AC;
    case 74u: goto L_08AD06C4;
    case 75u: goto L_08AD06CC;
    case 76u: goto L_08AD06D4;
    case 77u: goto L_08AD06DC;
    case 78u: goto L_08AD06E4;
    case 79u: goto L_08AD06F4;
    case 80u: goto L_08AD0708;
    case 81u: goto L_08AD0714;
    case 82u: goto L_08AD0720;
    case 83u: goto L_08AD072C;
    case 84u: goto L_08AD0738;
    case 85u: goto L_08AD0744;
    case 86u: goto L_08AD0750;
    case 87u: goto L_08AD075C;
    case 88u: goto L_08AD0768;
    case 89u: goto L_08AD0774;
    case 90u: goto L_08AD0780;
    case 91u: goto L_08AD078C;
    case 92u: goto L_08AD0794;
    case 93u: goto L_08AD079C;
    case 94u: goto L_08AD07A8;
    case 95u: goto L_08AD07B4;
    case 96u: goto L_08AD07C0;
    case 97u: goto L_08AD07CC;
    case 98u: goto L_08AD07D8;
    case 99u: goto L_08AD07E0;
    case 100u: goto L_08AD07E8;
    case 101u: goto L_08AD07F0;
    case 102u: goto L_08AD07FC;
    case 103u: goto L_08AD0808;
    case 104u: goto L_08AD081C;
    case 105u: goto L_08AD0824;
    case 106u: goto L_08AD082C;
    case 107u: goto L_08AD0834;
    case 108u: goto L_08AD0848;
    case 109u: goto L_08AD0854;
    case 110u: goto L_08AD085C;
    case 111u: goto L_08AD0864;
    case 112u: goto L_08AD0868;
    case 113u: goto L_08AD0878;
    case 114u: goto L_08AD0884;
    case 115u: goto L_08AD088C;
    case 116u: goto L_08AD0894;
    case 117u: goto L_08AD08B0;
    case 118u: goto L_08AD08C0;
    case 119u: goto L_08AD08CC;
    case 120u: goto L_08AD08D8;
    case 121u: goto L_08AD08E4;
    case 122u: goto L_08AD08F0;
    case 123u: goto L_08AD08FC;
    case 124u: goto L_08AD0908;
    case 125u: goto L_08AD0914;
    case 126u: goto L_08AD0920;
    case 127u: goto L_08AD0928;
    case 128u: goto L_08AD092C;
    case 129u: goto L_08AD0934;
    case 130u: goto L_08AD0948;
    case 131u: goto L_08AD0964;
    case 132u: goto L_08AD0974;
    case 133u: goto L_08AD097C;
    case 134u: goto L_08AD0984;
    case 135u: goto L_08AD098C;
    case 136u: goto L_08AD099C;
    case 137u: goto L_08AD09A8;
    case 138u: goto L_08AD09B0;
    case 139u: goto L_08AD09B8;
    case 140u: goto L_08AD09C0;
    case 141u: goto L_08AD09C8;
    case 142u: goto L_08AD09D0;
    case 143u: goto L_08AD09DC;
    case 144u: goto L_08AD09FC;
    case 145u: goto L_08AD0A08;
    case 146u: goto L_08AD0A18;
    case 147u: goto L_08AD0A20;
    case 148u: goto L_08AD0A28;
    case 149u: goto L_08AD0A30;
    case 150u: goto L_08AD0A38;
    case 151u: goto L_08AD0A40;
    case 152u: goto L_08AD0A48;
    case 153u: goto L_08AD0A60;
    case 154u: goto L_08AD0A74;
    case 155u: goto L_08AD0A7C;
    case 156u: goto L_08AD0A8C;
    case 157u: goto L_08AD0A94;
    case 158u: goto L_08AD0AB0;
    case 159u: goto L_08AD0AD0;
    case 160u: goto L_08AD0AE4;
    case 161u: goto L_08AD0B08;
    case 162u: goto L_08AD0B30;
    case 163u: goto L_08AD0B40;
    case 164u: goto L_08AD0B50;
    case 165u: goto L_08AD0B58;
    case 166u: goto L_08AD0B5C;
    case 167u: goto L_08AD0B74;
    case 168u: goto L_08AD0B90;
    case 169u: goto L_08AD0BB8;
    case 170u: goto L_08AD0BD0;
    case 171u: goto L_08AD0BDC;
    case 172u: goto L_08AD0C14;
    case 173u: goto L_08AD0C2C;
    case 174u: goto L_08AD0C38;
    case 175u: goto L_08AD0C70;
    case 176u: goto L_08AD0CA8;
    case 177u: goto L_08AD0CB4;
    case 178u: goto L_08AD0D20;
    case 179u: goto L_08AD0D34;
    case 180u: goto L_08AD0D44;
    case 181u: goto L_08AD0D54;
    case 182u: goto L_08AD0D64;
    case 183u: goto L_08AD0D74;
    case 184u: goto L_08AD0D84;
    case 185u: goto L_08AD0D94;
    case 186u: goto L_08AD0DA4;
    case 187u: goto L_08AD0DAC;
    case 188u: goto L_08AD0DB4;
    case 189u: goto L_08AD0DD4;
    case 190u: goto L_08AD0DF8;
    case 191u: goto L_08AD0E00;
    case 192u: goto L_08AD0E08;
    case 193u: goto L_08AD0E18;
    case 194u: goto L_08AD0E24;
    case 195u: goto L_08AD0E2C;
    case 196u: goto L_08AD0E44;
    case 197u: goto L_08AD0E68;
    case 198u: goto L_08AD0E78;
    case 199u: goto L_08AD0E90;
    case 200u: goto L_08AD0E98;
    case 201u: goto L_08AD0EAC;
    case 202u: goto L_08AD0EBC;
    case 203u: goto L_08AD0EC4;
    case 204u: goto L_08AD0F54;
    case 205u: goto L_08AD0F58;
    case 206u: goto L_08AD0F60;
    case 207u: goto L_08AD0FA4;
    case 208u: goto L_08AD0FE0;
    case 209u: goto L_08AD0FF0;
    case 210u: goto L_08AD0FFC;
    case 211u: goto L_08AD1004;
    case 212u: goto L_08AD1020;
    case 213u: goto L_08AD1028;
    case 214u: goto L_08AD109C;
    case 215u: goto L_08AD10D0;
    case 216u: goto L_08AD111C;
    case 217u: goto L_08AD1150;
    case 218u: goto L_08AD119C;
    case 219u: goto L_08AD11D0;
    case 220u: goto L_08AD11D8;
    case 221u: goto L_08AD11E0;
    case 222u: goto L_08AD11E8;
    case 223u: goto L_08AD11F0;
    case 224u: goto L_08AD11F8;
    case 225u: goto L_08AD1200;
    case 226u: goto L_08AD1204;
    case 227u: goto L_08AD120C;
    case 228u: goto L_08AD1260;
    case 229u: goto L_08AD1278;
    case 230u: goto L_08AD128C;
    case 231u: goto L_08AD12A0;
    case 232u: goto L_08AD1328;
    case 233u: goto L_08AD1334;
    case 234u: goto L_08AD1344;
    case 235u: goto L_08AD1358;
    case 236u: goto L_08AD135C;
    case 237u: goto L_08AD138C;
    case 238u: goto L_08AD13D8;
    case 239u: goto L_08AD1458;
    case 240u: goto L_08AD1468;
    case 241u: goto L_08AD1488;
    case 242u: goto L_08AD1494;
    case 243u: goto L_08AD14B4;
    case 244u: goto L_08AD14C0;
    case 245u: goto L_08AD14E0;
    case 246u: goto L_08AD14EC;
    case 247u: goto L_08AD14F4;
    case 248u: goto L_08AD151C;
    case 249u: goto L_08AD1528;
    case 250u: goto L_08AD1550;
    case 251u: goto L_08AD155C;
    case 252u: goto L_08AD1570;
    case 253u: goto L_08AD1588;
    case 254u: goto L_08AD159C;
    case 255u: goto L_08AD15B0;
    case 256u: goto L_08AD15C8;
    case 257u: goto L_08AD15D0;
    case 258u: goto L_08AD15E0;
    case 259u: goto L_08AD15EC;
    case 260u: goto L_08AD15F4;
    case 261u: goto L_08AD15FC;
    case 262u: goto L_08AD1604;
    case 263u: goto L_08AD160C;
    case 264u: goto L_08AD1618;
    case 265u: goto L_08AD1624;
    case 266u: goto L_08AD1630;
    case 267u: goto L_08AD163C;
    case 268u: goto L_08AD1648;
    case 269u: goto L_08AD1654;
    case 270u: goto L_08AD1664;
    case 271u: goto L_08AD1670;
    case 272u: goto L_08AD1678;
    case 273u: goto L_08AD1680;
    case 274u: goto L_08AD1688;
    case 275u: goto L_08AD1690;
    case 276u: goto L_08AD169C;
    case 277u: goto L_08AD16A8;
    case 278u: goto L_08AD16B4;
    case 279u: goto L_08AD16C0;
    case 280u: goto L_08AD16CC;
    case 281u: goto L_08AD16D0;
    case 282u: goto L_08AD16DC;
    case 283u: goto L_08AD16E8;
    case 284u: goto L_08AD16F0;
    case 285u: goto L_08AD1700;
    case 286u: goto L_08AD1708;
    case 287u: goto L_08AD171C;
    case 288u: goto L_08AD1738;
    case 289u: goto L_08AD1768;
    case 290u: goto L_08AD17B4;
    case 291u: goto L_08AD1834;
    case 292u: goto L_08AD1844;
    case 293u: goto L_08AD1864;
    case 294u: goto L_08AD1870;
    case 295u: goto L_08AD1890;
    case 296u: goto L_08AD189C;
    case 297u: goto L_08AD18BC;
    case 298u: goto L_08AD18C8;
    case 299u: goto L_08AD18D0;
    case 300u: goto L_08AD18F8;
    case 301u: goto L_08AD1904;
    case 302u: goto L_08AD192C;
    case 303u: goto L_08AD1938;
    case 304u: goto L_08AD194C;
    case 305u: goto L_08AD1964;
    case 306u: goto L_08AD1978;
    case 307u: goto L_08AD198C;
    case 308u: goto L_08AD19A4;
    case 309u: goto L_08AD19AC;
    case 310u: goto L_08AD19BC;
    case 311u: goto L_08AD19C8;
    case 312u: goto L_08AD19D0;
    case 313u: goto L_08AD19D8;
    case 314u: goto L_08AD19E0;
    case 315u: goto L_08AD19E8;
    case 316u: goto L_08AD19F4;
    case 317u: goto L_08AD1A00;
    case 318u: goto L_08AD1A0C;
    case 319u: goto L_08AD1A18;
    case 320u: goto L_08AD1A24;
    case 321u: goto L_08AD1A30;
    case 322u: goto L_08AD1A40;
    case 323u: goto L_08AD1A4C;
    case 324u: goto L_08AD1A54;
    case 325u: goto L_08AD1A5C;
    case 326u: goto L_08AD1A64;
    case 327u: goto L_08AD1A6C;
    case 328u: goto L_08AD1A78;
    case 329u: goto L_08AD1A84;
    case 330u: goto L_08AD1A90;
    case 331u: goto L_08AD1A9C;
    case 332u: goto L_08AD1AA8;
    case 333u: goto L_08AD1AAC;
    case 334u: goto L_08AD1AB8;
    case 335u: goto L_08AD1AC4;
    case 336u: goto L_08AD1ADC;
    case 337u: goto L_08AD1AE4;
    case 338u: goto L_08AD1AF0;
    case 339u: goto L_08AD1AF8;
    case 340u: goto L_08AD1B00;
    case 341u: goto L_08AD1B08;
    case 342u: goto L_08AD1B10;
    case 343u: goto L_08AD1B18;
    case 344u: goto L_08AD1B20;
    case 345u: goto L_08AD1B24;
    case 346u: goto L_08AD1B2C;
    case 347u: goto L_08AD1B3C;
    case 348u: goto L_08AD1B58;
    case 349u: goto L_08AD1B88;
    case 350u: goto L_08AD1BA0;
    case 351u: goto L_08AD1EDC;
    case 352u: goto L_08AD1F18;
    case 353u: goto L_08AD1F54;
    case 354u: goto L_08AD1F68;
    case 355u: goto L_08AD1F70;
    case 356u: goto L_08AD1F78;
    case 357u: goto L_08AD1F88;
    case 358u: goto L_08AD1F94;
    case 359u: goto L_08AD1F9C;
    case 360u: goto L_08AD1FAC;
    case 361u: goto L_08AD1FC4;
    case 362u: goto L_08AD1FCC;
    case 363u: goto L_08AD1FD4;
    case 364u: goto L_08AD1FDC;
    case 365u: goto L_08AD1FE4;
    case 366u: goto L_08AD1FF4;
    case 367u: goto L_08AD2040;
    case 368u: goto L_08AD204C;
    case 369u: goto L_08AD2054;
    case 370u: goto L_08AD2068;
    case 371u: goto L_08AD2070;
    case 372u: goto L_08AD2078;
    case 373u: goto L_08AD2080;
    case 374u: goto L_08AD2088;
    case 375u: goto L_08AD209C;
    case 376u: goto L_08AD20A4;
    case 377u: goto L_08AD20AC;
    case 378u: goto L_08AD20B4;
    case 379u: goto L_08AD20BC;
    case 380u: goto L_08AD20D0;
    case 381u: goto L_08AD20E4;
    case 382u: goto L_08AD20F8;
    case 383u: goto L_08AD2108;
    case 384u: goto L_08AD2110;
    case 385u: goto L_08AD2118;
    case 386u: goto L_08AD2120;
    case 387u: goto L_08AD2130;
    case 388u: goto L_08AD2148;
    case 389u: goto L_08AD2200;
    case 390u: goto L_08AD2258;
    case 391u: goto L_08AD22EC;
    case 392u: goto L_08AD22F4;
    case 393u: goto L_08AD2308;
    case 394u: goto L_08AD2318;
    case 395u: goto L_08AD2328;
    case 396u: goto L_08AD2338;
    case 397u: goto L_08AD2340;
    case 398u: goto L_08AD234C;
    case 399u: goto L_08AD235C;
    case 400u: goto L_08AD2364;
    case 401u: goto L_08AD236C;
    case 402u: goto L_08AD2374;
    case 403u: goto L_08AD237C;
    case 404u: goto L_08AD238C;
    case 405u: goto L_08AD2394;
    case 406u: goto L_08AD239C;
    case 407u: goto L_08AD23A4;
    case 408u: goto L_08AD23AC;
    case 409u: goto L_08AD23BC;
    case 410u: goto L_08AD2464;
    case 411u: goto L_08AD246C;
    case 412u: goto L_08AD2480;
    case 413u: goto L_08AD2528;
    case 414u: goto L_08AD2530;
    case 415u: goto L_08AD2540;
    case 416u: goto L_08AD25E8;
    case 417u: goto L_08AD25F0;
    case 418u: goto L_08AD2604;
    case 419u: goto L_08AD2654;
    case 420u: goto L_08AD26B8;
    case 421u: goto L_08AD26CC;
    case 422u: goto L_08AD26D4;
    case 423u: goto L_08AD26DC;
    case 424u: goto L_08AD26F0;
    case 425u: goto L_08AD26F8;
    case 426u: goto L_08AD2700;
    case 427u: goto L_08AD2714;
    case 428u: goto L_08AD271C;
    case 429u: goto L_08AD2724;
    case 430u: goto L_08AD2738;
    case 431u: goto L_08AD2740;
    case 432u: goto L_08AD2764;
    case 433u: goto L_08AD27A4;
    case 434u: goto L_08AD27AC;
    case 435u: goto L_08AD27B4;
    case 436u: goto L_08AD27CC;
    case 437u: goto L_08AD27D4;
    case 438u: goto L_08AD27EC;
    case 439u: goto L_08AD2804;
    case 440u: goto L_08AD280C;
    case 441u: goto L_08AD2814;
    case 442u: goto L_08AD281C;
    case 443u: goto L_08AD2824;
    case 444u: goto L_08AD2840;
    case 445u: goto L_08AD2858;
    case 446u: goto L_08AD28D0;
    case 447u: goto L_08AD2924;
    case 448u: goto L_08AD2934;
    case 449u: goto L_08AD2940;
    case 450u: goto L_08AD2948;
    case 451u: goto L_08AD2964;
    case 452u: goto L_08AD29F8;
    case 453u: goto L_08AD2A14;
    case 454u: goto L_08AD2A64;
    case 455u: goto L_08AD2A6C;
    case 456u: goto L_08AD2A74;
    case 457u: goto L_08AD2AB4;
    case 458u: goto L_08AD2ABC;
    case 459u: goto L_08AD2AE8;
    case 460u: goto L_08AD2B20;
    case 461u: goto L_08AD2B28;
    case 462u: goto L_08AD2B54;
    case 463u: goto L_08AD2B74;
    case 464u: goto L_08AD2B90;
    case 465u: goto L_08AD2B94;
    case 466u: goto L_08AD2B98;
    case 467u: goto L_08AD2BA0;
    case 468u: goto L_08AD2BC0;
    case 469u: goto L_08AD2BDC;
    case 470u: goto L_08AD2BE0;
    case 471u: goto L_08AD2BE4;
    case 472u: goto L_08AD2BEC;
    case 473u: goto L_08AD2C2C;
    case 474u: goto L_08AD2C34;
    case 475u: goto L_08AD2C60;
    case 476u: goto L_08AD2C98;
    case 477u: goto L_08AD2CA0;
    case 478u: goto L_08AD2CCC;
    case 479u: goto L_08AD2CF0;
    case 480u: goto L_08AD2D0C;
    case 481u: goto L_08AD2D10;
    case 482u: goto L_08AD2D14;
    case 483u: goto L_08AD2D1C;
    case 484u: goto L_08AD2D3C;
    case 485u: goto L_08AD2D58;
    case 486u: goto L_08AD2D5C;
    case 487u: goto L_08AD2D60;
    case 488u: goto L_08AD2D68;
    case 489u: goto L_08AD2D84;
    case 490u: goto L_08AD2DA0;
    case 491u: goto L_08AD2DA8;
    case 492u: goto L_08AD2DB4;
    case 493u: goto L_08AD2DD8;
    case 494u: goto L_08AD2DE0;
    case 495u: goto L_08AD2E00;
    case 496u: goto L_08AD2E1C;
    case 497u: goto L_08AD2E20;
    case 498u: goto L_08AD2E24;
    case 499u: goto L_08AD2E2C;
    case 500u: goto L_08AD2E48;
    case 501u: goto L_08AD2E70;
    case 502u: goto L_08AD2E8C;
    case 503u: goto L_08AD2EA0;
    case 504u: goto L_08AD2EA8;
    case 505u: goto L_08AD2EF8;
    case 506u: goto L_08AD2F20;
    case 507u: goto L_08AD2F28;
    case 508u: goto L_08AD2F5C;
    case 509u: goto L_08AD2F98;
    case 510u: goto L_08AD2FA8;
    case 511u: goto L_08AD2FB4;
    case 512u: goto L_08AD2FBC;
    case 513u: goto L_08AD2FD4;
    case 514u: goto L_08AD2FF0;
    case 515u: goto L_08AD3028;
    case 516u: goto L_08AD3034;
    case 517u: goto L_08AD306C;
    case 518u: goto L_08AD307C;
    case 519u: goto L_08AD30AC;
    case 520u: goto L_08AD30B0;
    case 521u: goto L_08AD30D8;
    case 522u: goto L_08AD30E8;
    case 523u: goto L_08AD30EC;
    case 524u: goto L_08AD30F4;
    case 525u: goto L_08AD3104;
    case 526u: goto L_08AD3110;
    case 527u: goto L_08AD3120;
    case 528u: goto L_08AD312C;
    case 529u: goto L_08AD314C;
    case 530u: goto L_08AD315C;
    case 531u: goto L_08AD316C;
    case 532u: goto L_08AD317C;
    case 533u: goto L_08AD319C;
    case 534u: goto L_08AD31AC;
    case 535u: goto L_08AD31BC;
    case 536u: goto L_08AD31CC;
    case 537u: goto L_08AD31DC;
    case 538u: goto L_08AD31E8;
    case 539u: goto L_08AD31F8;
    case 540u: goto L_08AD3204;
    case 541u: goto L_08AD3214;
    case 542u: goto L_08AD3220;
    case 543u: goto L_08AD3230;
    case 544u: goto L_08AD323C;
    case 545u: goto L_08AD324C;
    case 546u: goto L_08AD3258;
    case 547u: goto L_08AD3274;
    case 548u: goto L_08AD3280;
    case 549u: goto L_08AD329C;
    case 550u: goto L_08AD32A8;
    case 551u: goto L_08AD32C4;
    case 552u: goto L_08AD32D8;
    case 553u: goto L_08AD32F4;
    case 554u: goto L_08AD3300;
    case 555u: goto L_08AD331C;
    case 556u: goto L_08AD3328;
    case 557u: goto L_08AD334C;
    case 558u: goto L_08AD3360;
    case 559u: goto L_08AD3374;
    case 560u: goto L_08AD3398;
    case 561u: goto L_08AD33AC;
    case 562u: goto L_08AD33C0;
    case 563u: goto L_08AD33E4;
    case 564u: goto L_08AD33F8;
    case 565u: goto L_08AD340C;
    case 566u: goto L_08AD3420;
    case 567u: goto L_08AD342C;
    case 568u: goto L_08AD3448;
    case 569u: goto L_08AD3454;
    case 570u: goto L_08AD3464;
    case 571u: goto L_08AD3480;
    case 572u: goto L_08AD348C;
    case 573u: goto L_08AD349C;
    case 574u: goto L_08AD34B0;
    case 575u: goto L_08AD34BC;
    case 576u: goto L_08AD34CC;
    case 577u: goto L_08AD34D8;
    case 578u: goto L_08AD34EC;
    case 579u: goto L_08AD34F8;
    case 580u: goto L_08AD350C;
    case 581u: goto L_08AD3518;
    case 582u: goto L_08AD352C;
    case 583u: goto L_08AD3538;
    case 584u: goto L_08AD354C;
    case 585u: goto L_08AD3558;
    case 586u: goto L_08AD356C;
    case 587u: goto L_08AD3578;
    case 588u: goto L_08AD358C;
    case 589u: goto L_08AD3598;
    case 590u: goto L_08AD35A0;
    case 591u: goto L_08AD35A8;
    case 592u: goto L_08AD35BC;
    case 593u: goto L_08AD35C8;
    case 594u: goto L_08AD35D0;
    case 595u: goto L_08AD35E0;
    case 596u: goto L_08AD35EC;
    case 597u: goto L_08AD3604;
    case 598u: goto L_08AD3610;
    case 599u: goto L_08AD3628;
    case 600u: goto L_08AD3634;
    case 601u: goto L_08AD3644;
    case 602u: goto L_08AD3650;
    case 603u: goto L_08AD3664;
    case 604u: goto L_08AD3670;
    case 605u: goto L_08AD3680;
    case 606u: goto L_08AD368C;
    case 607u: goto L_08AD3698;
    case 608u: goto L_08AD36AC;
    case 609u: goto L_08AD36B8;
    case 610u: goto L_08AD36CC;
    case 611u: goto L_08AD36D8;
    case 612u: goto L_08AD36E8;
    case 613u: goto L_08AD36FC;
    case 614u: goto L_08AD3708;
    case 615u: goto L_08AD371C;
    case 616u: goto L_08AD372C;
    case 617u: goto L_08AD3748;
    case 618u: goto L_08AD375C;
    case 619u: goto L_08AD376C;
    case 620u: goto L_08AD3774;
    case 621u: goto L_08AD3780;
    case 622u: goto L_08AD3794;
    case 623u: goto L_08AD37A0;
    case 624u: goto L_08AD37B4;
    case 625u: goto L_08AD37C0;
    case 626u: goto L_08AD37D4;
    case 627u: goto L_08AD37E0;
    case 628u: goto L_08AD37F4;
    case 629u: goto L_08AD3800;
    case 630u: goto L_08AD3814;
    case 631u: goto L_08AD3820;
    case 632u: goto L_08AD3830;
    case 633u: goto L_08AD3844;
    case 634u: goto L_08AD3850;
    case 635u: goto L_08AD3860;
    case 636u: goto L_08AD3874;
    case 637u: goto L_08AD3880;
    case 638u: goto L_08AD3894;
    case 639u: goto L_08AD38A0;
    case 640u: goto L_08AD38B0;
    case 641u: goto L_08AD38BC;
    case 642u: goto L_08AD38D0;
    case 643u: goto L_08AD38DC;
    case 644u: goto L_08AD38EC;
    case 645u: goto L_08AD38F8;
    case 646u: goto L_08AD3930;
    case 647u: goto L_08AD3934;
    case 648u: goto L_08AD3940;
    case 649u: goto L_08AD3950;
    case 650u: goto L_08AD3960;
    case 651u: goto L_08AD3978;
    case 652u: goto L_08AD3984;
    case 653u: goto L_08AD398C;
    case 654u: goto L_08AD3994;
    case 655u: goto L_08AD399C;
    case 656u: goto L_08AD39D0;
    case 657u: goto L_08AD39E0;
    case 658u: goto L_08AD39F0;
    case 659u: goto L_08AD39F4;
    case 660u: goto L_08AD39F8;
    case 661u: goto L_08AD3A08;
    case 662u: goto L_08AD3A14;
    case 663u: goto L_08AD3A20;
    case 664u: goto L_08AD3A28;
    case 665u: goto L_08AD3A2C;
    case 666u: goto L_08AD3A34;
    case 667u: goto L_08AD3A5C;
    case 668u: goto L_08AD3A64;
    case 669u: goto L_08AD3A70;
    case 670u: goto L_08AD3A7C;
    case 671u: goto L_08AD3A88;
    case 672u: goto L_08AD3A90;
    case 673u: goto L_08AD3A94;
    case 674u: goto L_08AD3A9C;
    case 675u: goto L_08AD3AB0;
    case 676u: goto L_08AD3AC0;
    case 677u: goto L_08AD3AD0;
    case 678u: goto L_08AD3AD4;
    case 679u: goto L_08AD3AD8;
    case 680u: goto L_08AD3AE0;
    case 681u: goto L_08AD3AEC;
    case 682u: goto L_08AD3AF4;
    case 683u: goto L_08AD3AF8;
    case 684u: goto L_08AD3B00;
    case 685u: goto L_08AD3B18;
    case 686u: goto L_08AD3B20;
    case 687u: goto L_08AD3B24;
    case 688u: goto L_08AD3B2C;
    case 689u: goto L_08AD3B3C;
    case 690u: goto L_08AD3B4C;
    case 691u: goto L_08AD3B54;
    case 692u: goto L_08AD3B78;
    case 693u: goto L_08AD3B88;
    case 694u: goto L_08AD3BD0;
    case 695u: goto L_08AD3BE4;
    case 696u: goto L_08AD3BF0;
    case 697u: goto L_08AD3C00;
    case 698u: goto L_08AD3C0C;
    case 699u: goto L_08AD3C1C;
    case 700u: goto L_08AD3C44;
    case 701u: goto L_08AD3C64;
    case 702u: goto L_08AD3C74;
    case 703u: goto L_08AD3C78;
    case 704u: goto L_08AD3C84;
    case 705u: goto L_08AD3C8C;
    case 706u: goto L_08AD3CA0;
    case 707u: goto L_08AD3CB0;
    case 708u: goto L_08AD3CB4;
    case 709u: goto L_08AD3CC4;
    case 710u: goto L_08AD3CE0;
    case 711u: goto L_08AD3CEC;
    case 712u: goto L_08AD3CF8;
    case 713u: goto L_08AD3D08;
    case 714u: goto L_08AD3D10;
    case 715u: goto L_08AD3D1C;
    case 716u: goto L_08AD3D34;
    case 717u: goto L_08AD3D3C;
    case 718u: goto L_08AD3D44;
    case 719u: goto L_08AD3D58;
    case 720u: goto L_08AD3D8C;
    case 721u: goto L_08AD3D94;
    case 722u: goto L_08AD3DB0;
    case 723u: goto L_08AD3DD0;
    case 724u: goto L_08AD3DD8;
    case 725u: goto L_08AD3DEC;
    case 726u: goto L_08AD3DF8;
    case 727u: goto L_08AD3E08;
    case 728u: goto L_08AD3E10;
    case 729u: goto L_08AD3E1C;
    case 730u: goto L_08AD3E28;
    case 731u: goto L_08AD3E2C;
    case 732u: goto L_08AD3E3C;
    case 733u: goto L_08AD3E44;
    case 734u: goto L_08AD3E60;
    case 735u: goto L_08AD3E84;
    case 736u: goto L_08AD3E90;
    case 737u: goto L_08AD3E98;
    case 738u: goto L_08AD3EA0;
    case 739u: goto L_08AD3EA8;
    case 740u: goto L_08AD3EB0;
    case 741u: goto L_08AD3EB8;
    case 742u: goto L_08AD3EC0;
    case 743u: goto L_08AD3EC8;
    case 744u: goto L_08AD3ED8;
    case 745u: goto L_08AD3EE8;
    case 746u: goto L_08AD3F08;
    case 747u: goto L_08AD3F14;
    case 748u: goto L_08AD3F1C;
    case 749u: goto L_08AD3F28;
    case 750u: goto L_08AD3F30;
    case 751u: goto L_08AD3F48;
    case 752u: goto L_08AD3F50;
    case 753u: goto L_08AD3F60;
    case 754u: goto L_08AD3F7C;
    case 755u: goto L_08AD3F80;
    case 756u: goto L_08AD3F88;
    case 757u: goto L_08AD3FBC;
    case 758u: goto L_08AD3FC0;
    case 759u: goto L_08AD3FCC;
    case 760u: goto L_08AD3FD8;
    case 761u: goto L_08AD3FE8;
    case 762u: goto L_08AD3FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AD0000:
    // nop
    goto L_08AD0004;
L_08AD0004:
    hot_regs.g31 = (0x08AD000Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD000Cu) goto L_08AD000C;
    return;
L_08AD000C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD00F0;
      }
      goto L_08AD001C;
    }
L_08AD001C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08AD0054;
      }
      goto L_08AD002C;
    }
L_08AD002C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AD003Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 702u, 0x0887F3C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD003Cu) goto L_08AD003C;
    return;
L_08AD003C:
    hot_regs.g31 = (0x08AD0044u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 518u, 0x0895B97Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD0044u) goto L_08AD0044;
    return;
L_08AD0044:
    hot_regs.g31 = (0x08AD004Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 658u, 0x089730ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD004Cu) goto L_08AD004C;
    return;
L_08AD004C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0098;
      }
      goto L_08AD0054;
    }
L_08AD0054:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08AD0098;
      }
      goto L_08AD0064;
    }
L_08AD0064:
    hot_regs.g31 = (0x08AD006Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 704u, 0x0887F3F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD006Cu) goto L_08AD006C;
    return;
L_08AD006C:
    hot_regs.g31 = (0x08AD0074u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 603u, 0x0889E994u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD0074u) goto L_08AD0074;
    return;
L_08AD0074:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0090;
      }
      goto L_08AD007C;
    }
L_08AD007C:
    hot_regs.g5 = (2221u << 16u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08AD0090u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1908));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD0090u) goto L_08AD0090;
    return;
L_08AD0090:
    hot_regs.g31 = (0x08AD0098u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 74u, 0x089D868Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD0098u) goto L_08AD0098;
    return;
L_08AD0098:
{
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AD00C0;
      }
      goto L_08AD00B0;
    }
}
L_08AD00B0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (g5 << 2u);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08AD00C0;
}
L_08AD00C0:
    hot_regs.g31 = (0x08AD00C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 460u, 0x088DF770u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD00C8u) goto L_08AD00C8;
    return;
L_08AD00C8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 2u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD00F0;
      }
      goto L_08AD00E4;
    }
}
L_08AD00E4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-680)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-680), g4);
    hot_regs.g4 = g4;
    goto L_08AD00F0;
}
L_08AD00F0:
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
L_08AD0108:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08AD0134u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 291u, 0x089D1AECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD0134u) goto L_08AD0134;
    return;
L_08AD0134:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
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
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08AD01A4u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 233u, 0x088618A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD01A4u) goto L_08AD01A4;
    return;
L_08AD01A4:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g29 = hot_regs.g29;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((f13 < hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
        goto L_08AD01C0;
    }
    goto L_08AD01C0;
}
}
L_08AD01C0:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f13));
        goto L_08AD01D4;
    }
    goto L_08AD01D4;
L_08AD01D4:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f12));
        goto L_08AD01E8;
    }
    goto L_08AD01E8;
L_08AD01E8:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
        goto L_08AD01FC;
    }
    goto L_08AD01FC;
L_08AD01FC:
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
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08AD0218u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 233u, 0x088618A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD0218u) goto L_08AD0218;
    return;
L_08AD0218:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g29 = hot_regs.g29;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((f13 < hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
        goto L_08AD0234;
    }
    goto L_08AD0234;
}
}
L_08AD0234:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f13));
        goto L_08AD0248;
    }
    goto L_08AD0248;
L_08AD0248:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f12));
        goto L_08AD025C;
    }
    goto L_08AD025C;
L_08AD025C:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
        goto L_08AD0270;
    }
    goto L_08AD0270;
L_08AD0270:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08AD029Cu);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 233u, 0x088618A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD029Cu) goto L_08AD029C;
    return;
L_08AD029C:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g29 = hot_regs.g29;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((f13 < hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
        goto L_08AD02B8;
    }
    goto L_08AD02B8;
}
}
L_08AD02B8:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f13));
        goto L_08AD02CC;
    }
    goto L_08AD02CC;
L_08AD02CC:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f12));
        goto L_08AD02E0;
    }
    goto L_08AD02E0;
L_08AD02E0:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
        goto L_08AD02F4;
    }
    goto L_08AD02F4;
L_08AD02F4:
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
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08AD0310u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 233u, 0x088618A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD0310u) goto L_08AD0310;
    return;
L_08AD0310:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g29 = hot_regs.g29;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((f13 < hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
        goto L_08AD032C;
    }
    goto L_08AD032C;
}
}
L_08AD032C:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f13));
        goto L_08AD0340;
    }
    goto L_08AD0340;
L_08AD0340:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f12));
        goto L_08AD0354;
    }
    goto L_08AD0354;
L_08AD0354:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
        goto L_08AD0368;
    }
    goto L_08AD0368;
L_08AD0368:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(0), g4);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(4), hot_regs.g5);
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(8), hot_regs.g6);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(12), g4);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AD03B8:
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    hot_regs.g6 = (hot_regs.g6 << 2u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g6 = (hot_regs.g7 + hot_regs.g6);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    hot_regs.g7 = (hot_regs.g7 + ctx.gpr[8]);
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(20)));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<9u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<10u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<11u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<35u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<43u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 32u, 4u);
      ctx.read_vfpu_vector_ct<4u, 4u>(vfpu_target_raw);
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 5u, vfpu_side); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 40u, 4u);
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 13u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<108u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<5u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<5u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<4u, 5u, 5u, 3u>();
    ctx.execute_vfpu_vcmp_ct<4u, 100u, 1u, 7u>();
    hot_regs.g4 = (0u | 0u);
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08AD0444;
      }
      goto L_08AD043C;
    }
L_08AD043C:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (0u + static_cast<std::uint32_t>(1));
    g2 = (g2 & 255u);
    hot_regs.g2 = g2;
    goto L_08AD0444;
}
L_08AD0444:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD044C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), hot_regs.g31);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08AD04B4u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 1009u, 0x08ACF85Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD04B4u) goto L_08AD04B4;
    return;
L_08AD04B4:
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
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.f20 = hot_regs.f20 + hot_regs.f12;
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x08AD04E8u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD04E8u) goto L_08AD04E8;
    return;
L_08AD04E8:
    hot_regs.g4 = (0u | 0u);
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.g4 = (0u | 1u);
        goto L_08AD0510;
    }
    goto L_08AD0510;
L_08AD0510:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (hot_regs.g4 & 255u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AD0530:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (hot_regs.g5 << 2u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 32u, 4u);
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 13u, vfpu_side); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<13u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 12u, 4u, 3u>();
    // vflush: architectural no-op that retains VFPU prefixes
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<131u>());
    hot_regs.g2 = (hot_regs.g4 & 32u);
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u < hot_regs.g2 ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0598:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08AD05E4;
      }
      goto L_08AD05AC;
    }
}
L_08AD05AC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (8u << 16u);
    g5 = (g5 & hot_regs.g6);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD05E4;
      }
      goto L_08AD05C0;
    }
}
L_08AD05C0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(76)));
    hot_regs.g6 = (16u << 16u);
    g5 = (g5 & hot_regs.g6);
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD05EC;
      }
      goto L_08AD05DC;
    }
}
L_08AD05DC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AD05F4;
      }
      goto L_08AD05E4;
    }
L_08AD05E4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AD05F4;
      }
      goto L_08AD05EC;
    }
L_08AD05EC:
    hot_regs.g31 = (0x08AD05F4u);
    // nop
    goto L_08AD0530;
L_08AD05F4:
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
L_08AD0600:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 14u);
    g5 = (g5 ^ 14u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD0624;
      }
      goto L_08AD061C;
    }
}
L_08AD061C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AD0634;
      }
      goto L_08AD0624;
    }
L_08AD0624:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(352)));
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8)));
    g2 = (g4 ^ 1u);
    g2 = (g2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    goto L_08AD0634;
}
L_08AD0634:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD063C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0644:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD064C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0654:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD065C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08AD0690;
      }
      goto L_08AD0670;
    }
}
L_08AD0670:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (0u | 1u);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08AD0698;
      }
      goto L_08AD0680;
    }
L_08AD0680:
    hot_regs.g31 = (0x08AD0688u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 621u, 0x08972D80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD0688u) goto L_08AD0688;
    return;
L_08AD0688:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD06A0;
      }
      goto L_08AD0690;
    }
L_08AD0690:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD06A0;
      }
      goto L_08AD0698;
    }
L_08AD0698:
    hot_regs.g31 = (0x08AD06A0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 621u, 0x08972D80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD06A0u) goto L_08AD06A0;
    return;
L_08AD06A0:
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
L_08AD06AC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08AD06C4u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 603u, 0x0889E994u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD06C4u) goto L_08AD06C4;
    return;
L_08AD06C4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD06D4;
      }
      goto L_08AD06CC;
    }
L_08AD06CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD06E4;
      }
      goto L_08AD06D4;
    }
L_08AD06D4:
    hot_regs.g31 = (0x08AD06DCu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD06DCu) goto L_08AD06DC;
    return;
L_08AD06DC:
    hot_regs.g31 = (0x08AD06E4u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 258u, 0x089691F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD06E4u) goto L_08AD06E4;
    return;
L_08AD06E4:
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
L_08AD06F4:
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08AD078C;
      }
      goto L_08AD0708;
    }
L_08AD0708:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08AD078C;
      }
      goto L_08AD0714;
    }
L_08AD0714:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08AD078C;
      }
      goto L_08AD0720;
    }
L_08AD0720:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08AD078C;
      }
      goto L_08AD072C;
    }
L_08AD072C:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(210)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08AD078C;
      }
      goto L_08AD0738;
    }
L_08AD0738:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08AD078C;
      }
      goto L_08AD0744;
    }
L_08AD0744:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(214)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08AD078C;
      }
      goto L_08AD0750;
    }
L_08AD0750:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08AD078C;
      }
      goto L_08AD075C;
    }
L_08AD075C:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(218)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08AD078C;
      }
      goto L_08AD0768;
    }
L_08AD0768:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08AD078C;
      }
      goto L_08AD0774;
    }
L_08AD0774:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(222)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08AD078C;
      }
      goto L_08AD0780;
    }
L_08AD0780:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = hot_regs.g6 != g7;
    g7 = (0u | 0u);
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08AD0794;
      }
      goto L_08AD078C;
    }
}
L_08AD078C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g7 = (0u | 1u);
      if (branch_taken) {
          goto L_08AD0794;
      }
      goto L_08AD0794;
    }
L_08AD0794:
    { const bool branch_taken = hot_regs.g7 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD082C;
      }
      goto L_08AD079C;
    }
L_08AD079C:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(78)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08AD0824;
      }
      goto L_08AD07A8;
    }
L_08AD07A8:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08AD0824;
      }
      goto L_08AD07B4;
    }
L_08AD07B4:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(82)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08AD0824;
      }
      goto L_08AD07C0;
    }
L_08AD07C0:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08AD0824;
      }
      goto L_08AD07CC;
    }
L_08AD07CC:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = hot_regs.g6 == g7;
    g7 = (0u | 345u);
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08AD0824;
      }
      goto L_08AD07D8;
    }
}
L_08AD07D8:
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    hot_regs.g7 = (0u | 342u);
      if (branch_taken) {
          goto L_08AD0824;
      }
      goto L_08AD07E0;
    }
L_08AD07E0:
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    hot_regs.g7 = (0u | 344u);
      if (branch_taken) {
          goto L_08AD0824;
      }
      goto L_08AD07E8;
    }
L_08AD07E8:
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08AD0824;
      }
      goto L_08AD07F0;
    }
L_08AD07F0:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08AD0824;
      }
      goto L_08AD07FC;
    }
L_08AD07FC:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08AD0824;
      }
      goto L_08AD0808;
    }
L_08AD0808:
{
    std::uint32_t g9 = ctx.gpr[9];
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    g9 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g9 = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(g9) ? 1u : 0u);
    { const bool branch_taken = g9 != 0u;
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08AD0834;
      }
      goto L_08AD081C;
    }
}
L_08AD081C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g7 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08AD0848;
      }
      goto L_08AD0824;
    }
L_08AD0824:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08AD092C;
      }
      goto L_08AD082C;
    }
L_08AD082C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08AD092C;
      }
      goto L_08AD0834;
    }
L_08AD0834:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g7 = (g8 << 2u);
    g8 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g7 = (g8 + g7);
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_08AD0848;
}
L_08AD0848:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[8] == g9;
    g9 = (0u | 3u);
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08AD0864;
      }
      goto L_08AD0854;
    }
}
L_08AD0854:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    ctx.gpr[8] = (hot_regs.g7 | 0u);
      if (branch_taken) {
          goto L_08AD0868;
      }
      goto L_08AD085C;
    }
L_08AD085C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g7 = (0u | 0u);
      if (branch_taken) {
          goto L_08AD088C;
      }
      goto L_08AD0864;
    }
L_08AD0864:
    ctx.gpr[8] = (hot_regs.g7 | 0u);
    goto L_08AD0868;
L_08AD0868:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (aot_mem.aot_load16(g8 + static_cast<std::uint32_t>(58)));
    ctx.gpr[9] = (g8 & 8192u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08AD0884;
      }
      goto L_08AD0878;
    }
}
L_08AD0878:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 & 16384u);
    { const bool branch_taken = g8 == 0u;
    hot_regs.g7 = (hot_regs.g7 & 255u);
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08AD088C;
      }
      goto L_08AD0884;
    }
}
L_08AD0884:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (0u | 1u);
    g7 = (g7 & 255u);
    hot_regs.g7 = g7;
    goto L_08AD088C;
}
L_08AD088C:
    { const bool branch_taken = hot_regs.g7 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0824;
      }
      goto L_08AD0894;
    }
L_08AD0894:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    g7 = (g7 & 14u);
    g7 = (g7 ^ 8u);
    g7 = (g7 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g7 = (g7 & 255u);
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08AD08C0;
      }
      goto L_08AD08B0;
    }
}
L_08AD08B0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(482))))));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD0824;
      }
      goto L_08AD08C0;
    }
}
L_08AD08C0:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08AD0920;
      }
      goto L_08AD08CC;
    }
L_08AD08CC:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08AD0920;
      }
      goto L_08AD08D8;
    }
L_08AD08D8:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08AD0920;
      }
      goto L_08AD08E4;
    }
L_08AD08E4:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08AD0920;
      }
      goto L_08AD08F0;
    }
L_08AD08F0:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08AD0920;
      }
      goto L_08AD08FC;
    }
L_08AD08FC:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08AD0920;
      }
      goto L_08AD0908;
    }
L_08AD0908:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08AD0920;
      }
      goto L_08AD0914;
    }
L_08AD0914:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = hot_regs.g6 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08AD0928;
      }
      goto L_08AD0920;
    }
L_08AD0920:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08AD092C;
      }
      goto L_08AD0928;
    }
L_08AD0928:
    hot_regs.g2 = (0u | 0u);
    goto L_08AD092C;
L_08AD092C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0934:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08AD0984;
      }
      goto L_08AD0948;
    }
}
L_08AD0948:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(76)));
    hot_regs.g6 = (16u << 16u);
    g4 = (g4 & hot_regs.g6);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD097C;
      }
      goto L_08AD0964;
    }
}
L_08AD0964:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08AD098C;
      }
      goto L_08AD0974;
    }
L_08AD0974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD09C8;
      }
      goto L_08AD097C;
    }
L_08AD097C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD09D0;
      }
      goto L_08AD0984;
    }
L_08AD0984:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD09D0;
      }
      goto L_08AD098C;
    }
L_08AD098C:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (g5 | 0u);
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = g5 == 0u;
    hot_regs.g6 = (43691u << 16u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD09B8;
      }
      goto L_08AD099C;
    }
}
L_08AD099C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(-21846));
    { const bool branch_taken = hot_regs.g5 == g6;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AD09B8;
      }
      goto L_08AD09A8;
    }
}
L_08AD09A8:
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08AD09B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD09B0u) goto L_08AD09B0;
    return;
L_08AD09B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD09C0;
      }
      goto L_08AD09B8;
    }
L_08AD09B8:
    hot_regs.g31 = (0x08AD09C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD09C0u) goto L_08AD09C0;
    return;
L_08AD09C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD09D0;
      }
      goto L_08AD09C8;
    }
L_08AD09C8:
    hot_regs.g31 = (0x08AD09D0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 90u, 0x089D8788u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD09D0u) goto L_08AD09D0;
    return;
L_08AD09D0:
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
L_08AD09DC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24896)));
    hot_regs.g6 = (0u | 1u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08AD0A40;
      }
      goto L_08AD09FC;
    }
}
L_08AD09FC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0A38;
      }
      goto L_08AD0A08;
    }
L_08AD0A08:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (0u | 2u);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08AD0A30;
      }
      goto L_08AD0A18;
    }
L_08AD0A18:
    hot_regs.g31 = (0x08AD0A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD0A20u) goto L_08AD0A20;
    return;
L_08AD0A20:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0A48;
      }
      goto L_08AD0A28;
    }
L_08AD0A28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0AD0;
      }
      goto L_08AD0A30;
    }
L_08AD0A30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0AD0;
      }
      goto L_08AD0A38;
    }
L_08AD0A38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0AD0;
      }
      goto L_08AD0A40;
    }
L_08AD0A40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0AD0;
      }
      goto L_08AD0A48;
    }
L_08AD0A48:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    hot_regs.g5 = (0u | 8u);
    hot_regs.g6 = (16968u << 16u);
    { const bool branch_taken = g4 != hot_regs.g5;
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD0A7C;
      }
      goto L_08AD0A60;
    }
}
L_08AD0A60:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7684)));
    hot_regs.f12 = hot_regs.f12 / hot_regs.f20;
    hot_regs.g31 = (0x08AD0A74u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 148u, 0x0884CC80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD0A74u) goto L_08AD0A74;
    return;
L_08AD0A74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0AD0;
      }
      goto L_08AD0A7C;
    }
L_08AD0A7C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g4 = (g4 & 1024u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD0AB0;
      }
      goto L_08AD0A8C;
    }
}
L_08AD0A8C:
    hot_regs.g31 = (0x08AD0A94u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08AD0530;
L_08AD0A94:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (hot_regs.g2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-1025));
    g5 = (g5 & hot_regs.g6);
    g4 = (g4 << 10u);
    g4 = (g5 | g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08AD0AB0;
}
L_08AD0AB0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.f12 = hot_regs.f12 / hot_regs.f20;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (hot_regs.g5 & 1024u);
    hot_regs.g5 = (hot_regs.g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g31 = (0x08AD0AD0u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 148u, 0x0884CC80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD0AD0u) goto L_08AD0AD0;
    return;
L_08AD0AD0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
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
L_08AD0AE4:
{
    float f0 = ctx.fpr[0];
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(86))))));
    g4 = (g4 << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (hot_regs.g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    f0 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    f0 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f0) ^ 0x80000000u);
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.fpr[0] = f0;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08AD0B08:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), hot_regs.g31);
    g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8360)));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7713)));
    g5 = (g5 | hot_regs.g6);
    { const bool branch_taken = g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08AD0E2C;
      }
      goto L_08AD0B30;
    }
}
L_08AD0B30:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AD0B58;
      }
      goto L_08AD0B40;
    }
L_08AD0B40:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    g4 = (g4 & 1u);
    if (g4 == 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    hot_regs.g4 = g4;
        goto L_08AD0B5C;
    }
    goto L_08AD0B50;
}
L_08AD0B50:
    hot_regs.g31 = (0x08AD0B58u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD0B58u) goto L_08AD0B58;
    return;
L_08AD0B58:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    goto L_08AD0B5C;
L_08AD0B5C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), hot_regs.g4);
    hot_regs.g31 = (0x08AD0B74u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD0B74u) goto L_08AD0B74;
    return;
L_08AD0B74:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD0C70;
      }
      goto L_08AD0B90;
    }
L_08AD0B90:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
    g4 = (15948u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    g4 = (15048u << 16u);
    g4 = (g4 | 62915u);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f12 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD0C14;
      }
      goto L_08AD0BB8;
    }
}
L_08AD0BB8:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + ctx.gpr[16]);
    g4 = (g4 & 4095u);
    f13 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08AD0BDC;
      }
      goto L_08AD0BD0;
    }
}
}
L_08AD0BD0:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = hot_regs.f13 + hot_regs.f14;
    goto L_08AD0BDC;
L_08AD0BDC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
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
    g4 = (48035u << 16u);
    g4 = (g4 | 55050u);
    f12 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08AD0D20;
      }
      goto L_08AD0C14;
    }
}
}
L_08AD0C14:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + ctx.gpr[16]);
    g4 = (g4 & 4095u);
    f13 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08AD0C38;
      }
      goto L_08AD0C2C;
    }
}
}
L_08AD0C2C:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = hot_regs.f13 + hot_regs.f14;
    goto L_08AD0C38;
L_08AD0C38:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
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
    g4 = (48131u << 16u);
    g4 = (g4 | 4719u);
    f12 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08AD0D20;
      }
      goto L_08AD0C70;
    }
}
}
L_08AD0C70:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 << 3u);
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g6 = (16320u << 16u);
    g5 = (g5 & hot_regs.g6);
    g5 = (g5 >> 22u);
    g4 = (g4 + g5);
    g5 = (g4 & 65535u);
    g4 = (g5 >> 12u);
    g4 = (g4 & 15u);
    g5 = (g5 & 4095u);
    f12 = std::bit_cast<float>(g5);
    { const bool branch_taken = static_cast<std::int32_t>(g5) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08AD0CB4;
      }
      goto L_08AD0CA8;
    }
}
}
L_08AD0CA8:
    hot_regs.g5 = (20352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    goto L_08AD0CB4;
L_08AD0CB4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (14720u << 16u);
    f13 = std::bit_cast<float>(g5);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g5 = (16256u << 16u);
    f14 = std::bit_cast<float>(g5);
    f15 = f14 - f12;
    g5 = (g4 << 2u);
    g6 = (2234u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(13040));
    g5 = (g5 + g6);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    { const float fs = f15; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = f13 + f14;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g4 = (g4 & 15u);
    g4 = (g4 << 2u);
    g4 = (g4 + g6);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const float fs = f12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f13 + f12;
    g4 = (48245u << 16u);
    g4 = (g4 | 49807u);
    f14 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
    { const float fs = f12; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    goto L_08AD0D20;
}
}
L_08AD0D20:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(210)));
    { const bool branch_taken = hot_regs.g4 == g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD0DA4;
      }
      goto L_08AD0D34;
    }
}
L_08AD0D34:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = hot_regs.g4 == g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD0DA4;
      }
      goto L_08AD0D44;
    }
}
L_08AD0D44:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(214)));
    { const bool branch_taken = hot_regs.g4 == g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD0DA4;
      }
      goto L_08AD0D54;
    }
}
L_08AD0D54:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = hot_regs.g4 == g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD0DA4;
      }
      goto L_08AD0D64;
    }
}
L_08AD0D64:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(218)));
    { const bool branch_taken = hot_regs.g4 == g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD0DA4;
      }
      goto L_08AD0D74;
    }
}
L_08AD0D74:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = hot_regs.g4 == g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD0DA4;
      }
      goto L_08AD0D84;
    }
}
L_08AD0D84:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(222)));
    { const bool branch_taken = hot_regs.g4 == g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD0DA4;
      }
      goto L_08AD0D94;
    }
}
L_08AD0D94:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = hot_regs.g4 != g5;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD0DAC;
      }
      goto L_08AD0DA4;
    }
}
L_08AD0DA4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08AD0DAC;
      }
      goto L_08AD0DAC;
    }
L_08AD0DAC:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0DD4;
      }
      goto L_08AD0DB4;
    }
L_08AD0DB4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
    g4 = (48527u << 16u);
    g4 = (g4 | 23593u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08AD0DD4;
}
}
L_08AD0DD4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(52));
    hot_regs.g31 = (0x08AD0DF8u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 197u, 0x089DD460u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD0DF8u) goto L_08AD0DF8;
    return;
L_08AD0DF8:
    hot_regs.g31 = (0x08AD0E00u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD0E00u) goto L_08AD0E00;
    return;
L_08AD0E00:
    hot_regs.g31 = (0x08AD0E08u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08AD065C;
L_08AD0E08:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD0E2C;
      }
      goto L_08AD0E18;
    }
}
L_08AD0E18:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0E2C;
      }
      goto L_08AD0E24;
    }
L_08AD0E24:
    hot_regs.g31 = (0x08AD0E2Cu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD0E2Cu) goto L_08AD0E2C;
    return;
L_08AD0E2C:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_08AD0E44:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    g16 = (hot_regs.g4 | 0u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(86))))));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08AD0E78;
      }
      goto L_08AD0E68;
    }
}
L_08AD0E68:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g5 << 2u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08AD0E78;
}
L_08AD0E78:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(58)));
    g4 = (g4 & 16384u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD0EAC;
      }
      goto L_08AD0E90;
    }
}
L_08AD0E90:
    hot_regs.g31 = (0x08AD0E98u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 544u, 0x08827944u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD0E98u) goto L_08AD0E98;
    return;
L_08AD0E98:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g5 = (65528u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08AD0EAC;
}
L_08AD0EAC:
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
L_08AD0EBC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0EC4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(172), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), hot_regs.g31);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[18] = (hot_regs.g29 | 0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.f13 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g5 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f20) || std::isnan(hot_regs.f13)) && hot_regs.f20 == hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_08AD0F58;
      }
      goto L_08AD0F54;
    }
L_08AD0F54:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08AD0F58;
L_08AD0F58:
    hot_regs.g31 = (0x08AD0F60u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08AD0AE4;
L_08AD0F60:
    hot_regs.f12 = ctx.fpr[0] / hot_regs.f20;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = hot_regs.f15 + hot_regs.f12;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AD0FA4u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD0FA4u) goto L_08AD0FA4;
    return;
L_08AD0FA4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AD0FE0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD0FE0u) goto L_08AD0FE0;
    return;
L_08AD0FE0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD1004;
      }
      goto L_08AD0FF0;
    }
}
L_08AD0FF0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1004;
      }
      goto L_08AD0FFC;
    }
L_08AD0FFC:
    hot_regs.g31 = (0x08AD1004u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD1004u) goto L_08AD1004;
    return;
L_08AD1004:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AD1020:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD1028:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = hot_regs.f12 - ctx.fpr[16];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = hot_regs.f13 - hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = hot_regs.f14 - hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (hot_regs.g5 << 2u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(16));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = hot_regs.f13 - hot_regs.f15;
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD11F8;
      }
      goto L_08AD109C;
    }
L_08AD109C:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    g5 = (g5 << 2u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (hot_regs.g6 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    g5 = (g5 + static_cast<std::uint32_t>(32));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    f13 = f13 + hot_regs.f15;
    ctx.set_fpu_condition((hot_regs.f12 <= f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08AD11F0;
      }
      goto L_08AD10D0;
    }
}
}
L_08AD10D0:
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (hot_regs.g5 << 2u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(16));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = hot_regs.f13 - hot_regs.f15;
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD11E8;
      }
      goto L_08AD111C;
    }
L_08AD111C:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    g5 = (g5 << 2u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (hot_regs.g6 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    g5 = (g5 + static_cast<std::uint32_t>(32));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    f13 = f13 + hot_regs.f15;
    ctx.set_fpu_condition((hot_regs.f12 <= f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08AD11E0;
      }
      goto L_08AD1150;
    }
}
}
L_08AD1150:
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (hot_regs.g5 << 2u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(16));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = hot_regs.f13 - hot_regs.f15;
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD11D8;
      }
      goto L_08AD119C;
    }
L_08AD119C:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(86))))));
    g4 = (g4 << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (hot_regs.g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g4 = (g4 + static_cast<std::uint32_t>(32));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    f13 = f13 + hot_regs.f15;
    ctx.set_fpu_condition((hot_regs.f12 <= f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08AD1200;
      }
      goto L_08AD11D0;
    }
}
}
L_08AD11D0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AD1204;
      }
      goto L_08AD11D8;
    }
L_08AD11D8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AD1204;
      }
      goto L_08AD11E0;
    }
L_08AD11E0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AD1204;
      }
      goto L_08AD11E8;
    }
L_08AD11E8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AD1204;
      }
      goto L_08AD11F0;
    }
L_08AD11F0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AD1204;
      }
      goto L_08AD11F8;
    }
L_08AD11F8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AD1204;
      }
      goto L_08AD1200;
    }
L_08AD1200:
    hot_regs.g2 = (0u | 1u);
    goto L_08AD1204;
L_08AD1204:
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD120C:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(140), g22);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), hot_regs.g31);
    g22 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24056)));
    g22 = (g22 + static_cast<std::uint32_t>(160));
    g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    g6 = (g6 & 14u);
    g6 = (g6 ^ 6u);
    g6 = (g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g6 = (g6 & 255u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    { const bool branch_taken = g6 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), hot_regs.g5);
    hot_regs.g6 = g6;
    ctx.gpr[22] = g22;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08AD1278;
      }
      goto L_08AD1260;
    }
}
L_08AD1260:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(216));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08AD1278u);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD1278u) goto L_08AD1278;
    return;
L_08AD1278:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[21] = (0u | 0u);
    g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(52)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[30] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD1358;
      }
      goto L_08AD128C;
    }
}
L_08AD128C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(64));
    ctx.gpr[16] = (0u | 0u);
    goto L_08AD12A0;
}
L_08AD12A0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(56)));
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[16]);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
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
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(56)));
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[16]);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g31 = (0x08AD1328u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD1328u) goto L_08AD1328;
    return;
L_08AD1328:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1344;
      }
      goto L_08AD1334;
    }
L_08AD1334:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08AD135C;
      }
      goto L_08AD1344;
    }
L_08AD1344:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g21 = ctx.gpr[21];
    g21 = (g21 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(52)));
    g4 = (static_cast<std::int32_t>(g21) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    hot_regs.g4 = g4;
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_08AD12A0;
      }
      goto L_08AD1358;
    }
}
L_08AD1358:
    hot_regs.g2 = (0u | 0u);
    goto L_08AD135C;
L_08AD135C:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_08AD138C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), hot_regs.g31);
    ctx.gpr[21] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(80));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08AD13D8u);
    hot_regs.g5 = (ctx.gpr[21] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD13D8u) goto L_08AD13D8;
    return;
L_08AD13D8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    g5 = (std::bit_cast<std::uint32_t>(f13));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    g6 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g6);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    g4 = (std::bit_cast<std::uint32_t>(f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g4);
    g5 = (0u | 49u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    g4 = (17056u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(g4);
    f13 = f12 / ctx.fpr[16];
    g4 = (16880u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(g4);
    f13 = f13 + ctx.fpr[17];
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g4 = (std::bit_cast<std::uint32_t>(f13));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    g6 = (16840u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(g6);
    g6 = (16128u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(g6);
    if (g5 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
        goto L_08AD1458;
    }
    goto L_08AD1458;
}
}
L_08AD1458:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g4 | 0u);
    g4 = (static_cast<std::int32_t>(g6) < 0 ? 1u : 0u);
    if (g4 != 0u) {
    g6 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
        goto L_08AD1468;
    }
    goto L_08AD1468;
}
L_08AD1468:
{
    float f0 = ctx.fpr[0];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 49u);
    f0 = hot_regs.f15 / ctx.fpr[16];
    f0 = f0 + ctx.fpr[18];
    f0 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f0));
    g4 = (std::bit_cast<std::uint32_t>(f0));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g5 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.fpr[0] = f0;
        goto L_08AD1488;
    }
    goto L_08AD1488;
}
}
L_08AD1488:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_08AD1494;
    }
    goto L_08AD1494;
L_08AD1494:
{
    float f0 = ctx.fpr[0];
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g30 = ctx.gpr[30];
    g5 = (0u | 49u);
    f0 = hot_regs.f14 / ctx.fpr[16];
    f0 = f0 + ctx.fpr[17];
    f0 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f0));
    g30 = (std::bit_cast<std::uint32_t>(f0));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g30) ? 1u : 0u);
    if (g5 != 0u) {
    g30 = (0u | 49u);
    hot_regs.g5 = g5;
    ctx.gpr[30] = g30;
    ctx.fpr[0] = f0;
        goto L_08AD14B4;
    }
    goto L_08AD14B4;
}
}
L_08AD14B4:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[30]) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[30] = (0u | 0u);
        goto L_08AD14C0;
    }
    goto L_08AD14C0;
L_08AD14C0:
{
    float f0 = ctx.fpr[0];
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (0u | 49u);
    f0 = hot_regs.f13 / ctx.fpr[16];
    f0 = f0 + ctx.fpr[18];
    f0 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f0));
    g5 = (std::bit_cast<std::uint32_t>(f0));
    g7 = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g7 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.fpr[0] = f0;
        goto L_08AD14E0;
    }
    goto L_08AD14E0;
}
}
L_08AD14E0:
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), hot_regs.g5);
      if (branch_taken) {
          goto L_08AD14F4;
      }
      goto L_08AD14EC;
    }
L_08AD14EC:
    hot_regs.g5 = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), hot_regs.g5);
    goto L_08AD14F4;
L_08AD14F4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g23 = ctx.gpr[23];
    g5 = (0u | 49u);
    f12 = f12 + hot_regs.f14;
    { const float fs = f12; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 / ctx.fpr[16];
    f12 = f12 + ctx.fpr[17];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g23 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g23) ? 1u : 0u);
    if (g5 != 0u) {
    g23 = (0u | 49u);
    hot_regs.g5 = g5;
    ctx.gpr[23] = g23;
    hot_regs.f12 = f12;
        goto L_08AD151C;
    }
    goto L_08AD151C;
}
}
L_08AD151C:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[23]) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[23] = (0u | 0u);
        goto L_08AD1528;
    }
    goto L_08AD1528;
L_08AD1528:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g22 = ctx.gpr[22];
    g5 = (0u | 49u);
    f12 = hot_regs.f15 + hot_regs.f13;
    { const float fs = f12; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 / ctx.fpr[16];
    f12 = f12 + ctx.fpr[18];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g22 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g22) ? 1u : 0u);
    if (g5 != 0u) {
    g22 = (0u | 49u);
    hot_regs.g5 = g5;
    ctx.gpr[22] = g22;
    hot_regs.f12 = f12;
        goto L_08AD1550;
    }
    goto L_08AD1550;
}
}
L_08AD1550:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[22]) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[22] = (0u | 0u);
        goto L_08AD155C;
    }
    goto L_08AD155C;
L_08AD155C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (hot_regs.g4 | 0u);
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD1738;
      }
      goto L_08AD1570;
    }
}
L_08AD1570:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), hot_regs.g6);
    g5 = (g4 << 4u);
    g4 = (g4 + g5);
    g5 = (g5 + g4);
    g4 = (g5 + g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08AD1588;
}
L_08AD1588:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD171C;
      }
      goto L_08AD159C;
    }
L_08AD159C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    g4 = (g4 + hot_regs.g5);
    g19 = (g4 << 6u);
    g4 = (g4 << 3u);
    g19 = (g19 - g4);
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
    goto L_08AD15B0;
}
L_08AD15B0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    g4 = (g4 + ctx.gpr[19]);
    g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 14u);
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[18];
    g5 = (g5 >> 1u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD1654;
      }
      goto L_08AD15C8;
    }
}
L_08AD15C8:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AD1654;
      }
      goto L_08AD15D0;
    }
L_08AD15D0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g6 = (g5 < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD16D0;
      }
      goto L_08AD15E0;
    }
}
L_08AD15E0:
{
    std::uint32_t g1 = ctx.gpr[1];
    g1 = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = hot_regs.g5 == g1;
    g1 = (0u + static_cast<std::uint32_t>(2));
    ctx.gpr[1] = g1;
      if (branch_taken) {
          goto L_08AD1618;
      }
      goto L_08AD15EC;
    }
}
L_08AD15EC:
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AD1624;
      }
      goto L_08AD15F4;
    }
L_08AD15F4:
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD1630;
      }
      goto L_08AD15FC;
    }
L_08AD15FC:
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08AD163C;
      }
      goto L_08AD1604;
    }
L_08AD1604:
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08AD1648;
      }
      goto L_08AD160C;
    }
L_08AD160C:
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD16D0;
      }
      goto L_08AD1618;
    }
L_08AD1618:
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(28));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD16D0;
      }
      goto L_08AD1624;
    }
L_08AD1624:
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(36));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD16D0;
      }
      goto L_08AD1630;
    }
L_08AD1630:
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD16D0;
      }
      goto L_08AD163C;
    }
L_08AD163C:
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(20));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD16D0;
      }
      goto L_08AD1648;
    }
L_08AD1648:
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD16D0;
      }
      goto L_08AD1654;
    }
L_08AD1654:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g6 = (g5 < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD16D0;
      }
      goto L_08AD1664;
    }
}
L_08AD1664:
{
    std::uint32_t g1 = ctx.gpr[1];
    g1 = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = hot_regs.g5 == g1;
    g1 = (0u + static_cast<std::uint32_t>(2));
    ctx.gpr[1] = g1;
      if (branch_taken) {
          goto L_08AD169C;
      }
      goto L_08AD1670;
    }
}
L_08AD1670:
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AD16A8;
      }
      goto L_08AD1678;
    }
L_08AD1678:
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD16B4;
      }
      goto L_08AD1680;
    }
L_08AD1680:
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08AD16C0;
      }
      goto L_08AD1688;
    }
L_08AD1688:
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08AD16CC;
      }
      goto L_08AD1690;
    }
L_08AD1690:
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD16D0;
      }
      goto L_08AD169C;
    }
L_08AD169C:
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(32));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD16D0;
      }
      goto L_08AD16A8;
    }
L_08AD16A8:
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(40));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD16D0;
      }
      goto L_08AD16B4;
    }
L_08AD16B4:
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD16D0;
      }
      goto L_08AD16C0;
    }
L_08AD16C0:
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD16D0;
      }
      goto L_08AD16CC;
    }
L_08AD16CC:
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(52));
    goto L_08AD16D0;
L_08AD16D0:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08AD16DCu);
    hot_regs.g4 = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 593u, 0x08807C9Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD16DCu) goto L_08AD16DC;
    return;
L_08AD16DC:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD16F0;
      }
      goto L_08AD16E8;
    }
L_08AD16E8:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    goto L_08AD16F0;
L_08AD16F0:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD1708;
      }
      goto L_08AD1700;
    }
}
L_08AD1700:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_08AD1708;
L_08AD1708:
{
    std::uint32_t g18 = ctx.gpr[18];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    g18 = (g18 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(g18) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(56));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08AD15B0;
      }
      goto L_08AD171C;
    }
}
L_08AD171C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    g20 = (g20 + static_cast<std::uint32_t>(1));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    g4 = (g4 + static_cast<std::uint32_t>(50));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g20) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_08AD1588;
      }
      goto L_08AD1738;
    }
}
L_08AD1738:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AD1768:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), hot_regs.g31);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(80));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08AD17B4u);
    hot_regs.g5 = (ctx.gpr[18] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD17B4u) goto L_08AD17B4;
    return;
L_08AD17B4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    g5 = (std::bit_cast<std::uint32_t>(f13));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    g6 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g6);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    g4 = (std::bit_cast<std::uint32_t>(f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g4);
    g5 = (0u | 49u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    g4 = (17056u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(g4);
    f13 = f12 / ctx.fpr[16];
    g4 = (16880u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(g4);
    f13 = f13 + ctx.fpr[17];
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g4 = (std::bit_cast<std::uint32_t>(f13));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    g6 = (16840u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(g6);
    g6 = (16128u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(g6);
    if (g5 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
        goto L_08AD1834;
    }
    goto L_08AD1834;
}
}
L_08AD1834:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g4 | 0u);
    g4 = (static_cast<std::int32_t>(g6) < 0 ? 1u : 0u);
    if (g4 != 0u) {
    g6 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
        goto L_08AD1844;
    }
    goto L_08AD1844;
}
L_08AD1844:
{
    float f0 = ctx.fpr[0];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 49u);
    f0 = hot_regs.f15 / ctx.fpr[16];
    f0 = f0 + ctx.fpr[18];
    f0 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f0));
    g4 = (std::bit_cast<std::uint32_t>(f0));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g5 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.fpr[0] = f0;
        goto L_08AD1864;
    }
    goto L_08AD1864;
}
}
L_08AD1864:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_08AD1870;
    }
    goto L_08AD1870;
L_08AD1870:
{
    float f0 = ctx.fpr[0];
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g30 = ctx.gpr[30];
    g5 = (0u | 49u);
    f0 = hot_regs.f14 / ctx.fpr[16];
    f0 = f0 + ctx.fpr[17];
    f0 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f0));
    g30 = (std::bit_cast<std::uint32_t>(f0));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g30) ? 1u : 0u);
    if (g5 != 0u) {
    g30 = (0u | 49u);
    hot_regs.g5 = g5;
    ctx.gpr[30] = g30;
    ctx.fpr[0] = f0;
        goto L_08AD1890;
    }
    goto L_08AD1890;
}
}
L_08AD1890:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[30]) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[30] = (0u | 0u);
        goto L_08AD189C;
    }
    goto L_08AD189C;
L_08AD189C:
{
    float f0 = ctx.fpr[0];
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (0u | 49u);
    f0 = hot_regs.f13 / ctx.fpr[16];
    f0 = f0 + ctx.fpr[18];
    f0 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f0));
    g5 = (std::bit_cast<std::uint32_t>(f0));
    g7 = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g7 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.fpr[0] = f0;
        goto L_08AD18BC;
    }
    goto L_08AD18BC;
}
}
L_08AD18BC:
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), hot_regs.g5);
      if (branch_taken) {
          goto L_08AD18D0;
      }
      goto L_08AD18C8;
    }
L_08AD18C8:
    hot_regs.g5 = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), hot_regs.g5);
    goto L_08AD18D0;
L_08AD18D0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g23 = ctx.gpr[23];
    g5 = (0u | 49u);
    f12 = f12 + hot_regs.f14;
    { const float fs = f12; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 / ctx.fpr[16];
    f12 = f12 + ctx.fpr[17];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g23 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g23) ? 1u : 0u);
    if (g5 != 0u) {
    g23 = (0u | 49u);
    hot_regs.g5 = g5;
    ctx.gpr[23] = g23;
    hot_regs.f12 = f12;
        goto L_08AD18F8;
    }
    goto L_08AD18F8;
}
}
L_08AD18F8:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[23]) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[23] = (0u | 0u);
        goto L_08AD1904;
    }
    goto L_08AD1904;
L_08AD1904:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g22 = ctx.gpr[22];
    g5 = (0u | 49u);
    f12 = hot_regs.f15 + hot_regs.f13;
    { const float fs = f12; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 / ctx.fpr[16];
    f12 = f12 + ctx.fpr[18];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g22 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g22) ? 1u : 0u);
    if (g5 != 0u) {
    g22 = (0u | 49u);
    hot_regs.g5 = g5;
    ctx.gpr[22] = g22;
    hot_regs.f12 = f12;
        goto L_08AD192C;
    }
    goto L_08AD192C;
}
}
L_08AD192C:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[22]) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[22] = (0u | 0u);
        goto L_08AD1938;
    }
    goto L_08AD1938;
L_08AD1938:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (hot_regs.g4 | 0u);
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD1B58;
      }
      goto L_08AD194C;
    }
}
L_08AD194C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), hot_regs.g6);
    g5 = (g4 << 4u);
    g4 = (g4 + g5);
    g5 = (g5 + g4);
    g4 = (g5 + g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08AD1964;
}
L_08AD1964:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1B3C;
      }
      goto L_08AD1978;
    }
L_08AD1978:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    g4 = (g4 + hot_regs.g5);
    g20 = (g4 << 6u);
    g4 = (g4 << 3u);
    g20 = (g20 - g4);
    hot_regs.g4 = g4;
    ctx.gpr[20] = g20;
    goto L_08AD198C;
}
L_08AD198C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    g4 = (g4 + ctx.gpr[20]);
    g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 14u);
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[19];
    g5 = (g5 >> 1u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD1A30;
      }
      goto L_08AD19A4;
    }
}
L_08AD19A4:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08AD1A30;
      }
      goto L_08AD19AC;
    }
L_08AD19AC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g6 = (g5 < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD1AAC;
      }
      goto L_08AD19BC;
    }
}
L_08AD19BC:
{
    std::uint32_t g1 = ctx.gpr[1];
    g1 = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = hot_regs.g5 == g1;
    g1 = (0u + static_cast<std::uint32_t>(2));
    ctx.gpr[1] = g1;
      if (branch_taken) {
          goto L_08AD19F4;
      }
      goto L_08AD19C8;
    }
}
L_08AD19C8:
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AD1A00;
      }
      goto L_08AD19D0;
    }
L_08AD19D0:
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD1A0C;
      }
      goto L_08AD19D8;
    }
L_08AD19D8:
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08AD1A18;
      }
      goto L_08AD19E0;
    }
L_08AD19E0:
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08AD1A24;
      }
      goto L_08AD19E8;
    }
L_08AD19E8:
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1AAC;
      }
      goto L_08AD19F4;
    }
L_08AD19F4:
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(28));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1AAC;
      }
      goto L_08AD1A00;
    }
L_08AD1A00:
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(36));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1AAC;
      }
      goto L_08AD1A0C;
    }
L_08AD1A0C:
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1AAC;
      }
      goto L_08AD1A18;
    }
L_08AD1A18:
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(20));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1AAC;
      }
      goto L_08AD1A24;
    }
L_08AD1A24:
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1AAC;
      }
      goto L_08AD1A30;
    }
L_08AD1A30:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g6 = (g5 < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD1AAC;
      }
      goto L_08AD1A40;
    }
}
L_08AD1A40:
{
    std::uint32_t g1 = ctx.gpr[1];
    g1 = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = hot_regs.g5 == g1;
    g1 = (0u + static_cast<std::uint32_t>(2));
    ctx.gpr[1] = g1;
      if (branch_taken) {
          goto L_08AD1A78;
      }
      goto L_08AD1A4C;
    }
}
L_08AD1A4C:
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AD1A84;
      }
      goto L_08AD1A54;
    }
L_08AD1A54:
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD1A90;
      }
      goto L_08AD1A5C;
    }
L_08AD1A5C:
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08AD1A9C;
      }
      goto L_08AD1A64;
    }
L_08AD1A64:
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08AD1AA8;
      }
      goto L_08AD1A6C;
    }
L_08AD1A6C:
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1AAC;
      }
      goto L_08AD1A78;
    }
L_08AD1A78:
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(32));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1AAC;
      }
      goto L_08AD1A84;
    }
L_08AD1A84:
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(40));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1AAC;
      }
      goto L_08AD1A90;
    }
L_08AD1A90:
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1AAC;
      }
      goto L_08AD1A9C;
    }
L_08AD1A9C:
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1AAC;
      }
      goto L_08AD1AA8;
    }
L_08AD1AA8:
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(52));
    goto L_08AD1AAC;
L_08AD1AAC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1B2C;
      }
      goto L_08AD1AB8;
    }
L_08AD1AB8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g5 != ctx.gpr[18];
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AD1B20;
      }
      goto L_08AD1AC4;
    }
L_08AD1AC4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g4 | 0u);
    g4 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (g5 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g6 != g4;
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD1AE4;
      }
      goto L_08AD1ADC;
    }
}
L_08AD1ADC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    goto L_08AD1AE4;
L_08AD1AE4:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1AF8;
      }
      goto L_08AD1AF0;
    }
L_08AD1AF0:
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(8), hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    goto L_08AD1AF8;
L_08AD1AF8:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1B08;
      }
      goto L_08AD1B00;
    }
L_08AD1B00:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(4), hot_regs.g6);
    goto L_08AD1B08;
L_08AD1B08:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1B18;
      }
      goto L_08AD1B10;
    }
L_08AD1B10:
    hot_regs.g31 = (0x08AD1B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 595u, 0x08807CB8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD1B18u) goto L_08AD1B18;
    return;
L_08AD1B18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1B24;
      }
      goto L_08AD1B20;
    }
L_08AD1B20:
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    goto L_08AD1B24;
L_08AD1B24:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1AB8;
      }
      goto L_08AD1B2C;
    }
L_08AD1B2C:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(g19) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(56));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08AD198C;
      }
      goto L_08AD1B3C;
    }
}
L_08AD1B3C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    g21 = (g21 + static_cast<std::uint32_t>(1));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    g4 = (g4 + static_cast<std::uint32_t>(50));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g21) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_08AD1964;
      }
      goto L_08AD1B58;
    }
}
L_08AD1B58:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AD1B88:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08AD1BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 783u, 0x08AAF864u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD1BA0u) goto L_08AD1BA0;
    return;
L_08AD1BA0:
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-32624));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-15));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-497));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-513));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-1025));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g6);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g7 = (0u + static_cast<std::uint32_t>(-2049));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g7);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-4097));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-8193));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-16385));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[11] = (65535u << 16u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(32767));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g2 = (65535u << 16u);
    hot_regs.g2 = (hot_regs.g2 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g2);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[3] = (65534u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[12] = (65532u << 16u);
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[13] = (8u << 16u);
    hot_regs.g4 = (hot_regs.g4 | ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[13] = (65520u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[14] = (65504u << 16u);
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[15] = (65472u << 16u);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[15] = (65408u << 16u);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[15] = (65280u << 16u);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[15] = (65024u << 16u);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[15] = (64512u << 16u);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[15] = (63488u << 16u);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[15] = (61440u << 16u);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[15] = (57344u << 16u);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[15] = (49152u << 16u);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[15] = (32768u << 16u);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[15] = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[15] = (0u + static_cast<std::uint32_t>(-3));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[15] = (0u + static_cast<std::uint32_t>(-9));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[15] = (0u + static_cast<std::uint32_t>(-17));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[15] = (0u + static_cast<std::uint32_t>(-33));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[15] = (0u + static_cast<std::uint32_t>(-65));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[15] = (0u + static_cast<std::uint32_t>(-5));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[15] = (0u + static_cast<std::uint32_t>(-129));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[15] = (0u + static_cast<std::uint32_t>(-257));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g6);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g7);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(0u));
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint16_t>(hot_regs.g4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(90))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-249));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g2);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (65528u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g31 = (0x08AD1EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD1EDCu) goto L_08AD1EDC;
    return;
L_08AD1EDC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (hot_regs.g2 & 65535u);
    g4 = (g4 & 255u);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(76)));
    g6 = (49216u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g5 = (g5 & g6);
    g4 = (g4 << 22u);
    g4 = (g5 | g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(76), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), 0u);
    hot_regs.g2 = (g16 | 0u);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AD1F18:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-544));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(524), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(528), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(532), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(536), hot_regs.g31);
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(76)));
    hot_regs.g6 = (16u << 16u);
    g5 = (g5 & hot_regs.g6);
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08AD1F70;
      }
      goto L_08AD1F54;
    }
}
L_08AD1F54:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g6 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AD1F78;
      }
      goto L_08AD1F68;
    }
}
L_08AD1F68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1F88;
      }
      goto L_08AD1F70;
    }
L_08AD1F70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2740;
      }
      goto L_08AD1F78;
    }
L_08AD1F78:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 << 2u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g5 + g4);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08AD1F88;
}
L_08AD1F88:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1F9C;
      }
      goto L_08AD1F94;
    }
L_08AD1F94:
    hot_regs.g31 = (0x08AD1F9Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 344u, 0x0898171Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD1F9Cu) goto L_08AD1F9C;
    return;
L_08AD1F9C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g4 = (g4 & 16384u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD1FCC;
      }
      goto L_08AD1FAC;
    }
}
L_08AD1FAC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 >> 1u);
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD26B8;
      }
      goto L_08AD1FC4;
    }
}
L_08AD1FC4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (0u | 4u);
      if (branch_taken) {
          goto L_08AD1FD4;
      }
      goto L_08AD1FCC;
    }
L_08AD1FCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2740;
      }
      goto L_08AD1FD4;
    }
L_08AD1FD4:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 1u);
      if (branch_taken) {
          goto L_08AD2054;
      }
      goto L_08AD1FDC;
    }
L_08AD1FDC:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08AD2740;
      }
      goto L_08AD1FE4;
    }
L_08AD1FE4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g4 = (g4 & 32768u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD204C;
      }
      goto L_08AD1FF4;
    }
}
L_08AD1FF4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    g4 = (g4 + static_cast<std::uint32_t>(48));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    f12 = f12 - f13;
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    f14 = f14 - hot_regs.f15;
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f13 = f12 + f14;
    f13 = std::sqrt(f13);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30400)));
    ctx.set_fpu_condition((f13 <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
        goto L_08AD2040;
    }
    goto L_08AD2040;
}
}
L_08AD2040:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-30400), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x08AD204Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08AD0B08;
L_08AD204C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2740;
      }
      goto L_08AD2054;
    }
L_08AD2054:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(78)));
    { const bool branch_taken = hot_regs.g4 != g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD2088;
      }
      goto L_08AD2068;
    }
}
L_08AD2068:
    hot_regs.g31 = (0x08AD2070u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 630u, 0x088F3134u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD2070u) goto L_08AD2070;
    return;
L_08AD2070:
    hot_regs.g31 = (0x08AD2078u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD2078u) goto L_08AD2078;
    return;
L_08AD2078:
    hot_regs.g31 = (0x08AD2080u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08AD065C;
L_08AD2080:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD26B8;
      }
      goto L_08AD2088;
    }
L_08AD2088:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g4 != g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD20BC;
      }
      goto L_08AD209C;
    }
}
L_08AD209C:
    hot_regs.g31 = (0x08AD20A4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 622u, 0x088F2EB0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD20A4u) goto L_08AD20A4;
    return;
L_08AD20A4:
    hot_regs.g31 = (0x08AD20ACu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD20ACu) goto L_08AD20AC;
    return;
L_08AD20AC:
    hot_regs.g31 = (0x08AD20B4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08AD065C;
L_08AD20B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD26B8;
      }
      goto L_08AD20BC;
    }
L_08AD20BC:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(82)));
    { const bool branch_taken = hot_regs.g4 == g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD20F8;
      }
      goto L_08AD20D0;
    }
}
L_08AD20D0:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = hot_regs.g4 == g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD20F8;
      }
      goto L_08AD20E4;
    }
}
L_08AD20E4:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = hot_regs.g4 != g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD2120;
      }
      goto L_08AD20F8;
    }
}
L_08AD20F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(482))))));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD26B8;
      }
      goto L_08AD2108;
    }
}
L_08AD2108:
    hot_regs.g31 = (0x08AD2110u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD2110u) goto L_08AD2110;
    return;
L_08AD2110:
    hot_regs.g31 = (0x08AD2118u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08AD065C;
L_08AD2118:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD26B8;
      }
      goto L_08AD2120;
    }
L_08AD2120:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 345u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08AD22F4;
      }
      goto L_08AD2130;
    }
L_08AD2130:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08AD2148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD2148u) goto L_08AD2148;
    return;
L_08AD2148:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 15u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (15744u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f20 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f20 = fs * ft; }
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5048)));
    hot_regs.g4 = (16640u << 16u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    hot_regs.g4 = (49408u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17224u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    hot_regs.g4 = (17184u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    hot_regs.g4 = (17136u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    hot_regs.g4 = (16800u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 2u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g7 = (0u | 255u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g31 = (0x08AD2200u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 335u, 0x08A9628Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD2200u) goto L_08AD2200;
    return;
L_08AD2200:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (16204u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.g4 = (16153u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    ctx.gpr[18] = (0u | 1u);
    hot_regs.g4 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08AD2258u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD2258u) goto L_08AD2258;
    return;
L_08AD2258:
    hot_regs.g4 = (17279u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g4 = (17244u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g4 = (17214u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = (hot_regs.g7 & 255u);
    hot_regs.g4 = (16576u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (17056u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (2234u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4264)));
    hot_regs.g4 = (16320u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x08AD22ECu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 634u, 0x08983B9Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD22ECu) goto L_08AD22EC;
    return;
L_08AD22EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD26B8;
      }
      goto L_08AD22F4;
    }
L_08AD22F4:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g6 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AD2318;
      }
      goto L_08AD2308;
    }
}
L_08AD2308:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 << 2u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g5 + g4);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08AD2318;
}
L_08AD2318:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    g6 = (0u | 1u);
    if (hot_regs.g4 == g6) {
    g6 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(58)));
    hot_regs.g6 = g6;
        goto L_08AD2340;
    }
    goto L_08AD2328;
}
L_08AD2328:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    g6 = (0u | 3u);
    if (hot_regs.g4 == g6) {
    g6 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(58)));
    hot_regs.g6 = g6;
        goto L_08AD2340;
    }
    goto L_08AD2338;
}
L_08AD2338:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AD2364;
      }
      goto L_08AD2340;
    }
L_08AD2340:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 & 8192u);
    { const bool branch_taken = g6 != 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AD235C;
      }
      goto L_08AD234C;
    }
}
L_08AD234C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(58)));
    g5 = (g5 & 16384u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD2364;
      }
      goto L_08AD235C;
    }
}
L_08AD235C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08AD2364;
}
L_08AD2364:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD237C;
      }
      goto L_08AD236C;
    }
L_08AD236C:
    hot_regs.g31 = (0x08AD2374u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08AD0E44;
L_08AD2374:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD26B8;
      }
      goto L_08AD237C;
    }
L_08AD237C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(482))))));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD23AC;
      }
      goto L_08AD238C;
    }
}
L_08AD238C:
    hot_regs.g31 = (0x08AD2394u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 465u, 0x088F5D98u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD2394u) goto L_08AD2394;
    return;
L_08AD2394:
    hot_regs.g31 = (0x08AD239Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD239Cu) goto L_08AD239C;
    return;
L_08AD239C:
    hot_regs.g31 = (0x08AD23A4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08AD065C;
L_08AD23A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD26B8;
      }
      goto L_08AD23AC;
    }
L_08AD23AC:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 342u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08AD246C;
      }
      goto L_08AD23BC;
    }
L_08AD23BC:
    hot_regs.g4 = (15759u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 23593u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[9] = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    ctx.gpr[10] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g7);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 100u);
    hot_regs.g6 = (0u | 100u);
    hot_regs.g7 = (0u | 100u);
    hot_regs.g31 = (0x08AD2464u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 413u, 0x088AAD00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD2464u) goto L_08AD2464;
    return;
L_08AD2464:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD26B8;
      }
      goto L_08AD246C;
    }
L_08AD246C:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = hot_regs.g4 != g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD2530;
      }
      goto L_08AD2480;
    }
}
L_08AD2480:
    hot_regs.g4 = (15759u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 23593u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[9] = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    ctx.gpr[10] = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g7);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 100u);
    hot_regs.g6 = (0u | 100u);
    hot_regs.g7 = (0u | 100u);
    hot_regs.g31 = (0x08AD2528u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 413u, 0x088AAD00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD2528u) goto L_08AD2528;
    return;
L_08AD2528:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD26B8;
      }
      goto L_08AD2530;
    }
L_08AD2530:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 344u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08AD25F0;
      }
      goto L_08AD2540;
    }
L_08AD2540:
    hot_regs.g4 = (15759u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 23593u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[9] = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    ctx.gpr[10] = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g7);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(256));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 100u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08AD25E8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 413u, 0x088AAD00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD25E8u) goto L_08AD25E8;
    return;
L_08AD25E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD26B8;
      }
      goto L_08AD25F0;
    }
L_08AD25F0:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = hot_regs.g4 != g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD26B8;
      }
      goto L_08AD2604;
    }
}
L_08AD2604:
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
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(272));
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (16968u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD26B8;
      }
      goto L_08AD2654;
    }
L_08AD2654:
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5064)));
    hot_regs.g4 = (16076u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(11140))))));
    ctx.gpr[8] = (hot_regs.g7 & 255u);
    hot_regs.g4 = (16800u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 1u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g31 = (0x08AD26B8u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 335u, 0x08A9628Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD26B8u) goto L_08AD26B8;
    return;
L_08AD26B8:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = hot_regs.g4 != g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD26DC;
      }
      goto L_08AD26CC;
    }
}
L_08AD26CC:
    hot_regs.g31 = (0x08AD26D4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 643u, 0x08A0F9A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD26D4u) goto L_08AD26D4;
    return;
L_08AD26D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2740;
      }
      goto L_08AD26DC;
    }
L_08AD26DC:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 != g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD2700;
      }
      goto L_08AD26F0;
    }
}
L_08AD26F0:
    hot_regs.g31 = (0x08AD26F8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 643u, 0x08A0F9A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD26F8u) goto L_08AD26F8;
    return;
L_08AD26F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2740;
      }
      goto L_08AD2700;
    }
L_08AD2700:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = hot_regs.g4 != g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD2724;
      }
      goto L_08AD2714;
    }
}
L_08AD2714:
    hot_regs.g31 = (0x08AD271Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 643u, 0x08A0F9A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD271Cu) goto L_08AD271C;
    return;
L_08AD271C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2740;
      }
      goto L_08AD2724;
    }
L_08AD2724:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = hot_regs.g4 != g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD2740;
      }
      goto L_08AD2738;
    }
}
L_08AD2738:
    hot_regs.g31 = (0x08AD2740u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 643u, 0x08A0F9A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD2740u) goto L_08AD2740;
    return;
L_08AD2740:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(512)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(516)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(520)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(524)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(528)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(532)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(536)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AD2764:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-560));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(540), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(548), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(552), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(556), hot_regs.g31);
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 14u);
    g5 = (g5 ^ 14u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08AD281C;
      }
      goto L_08AD27A4;
    }
}
L_08AD27A4:
    hot_regs.g31 = (0x08AD27ACu);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 168u, 0x08AECA18u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD27ACu) goto L_08AD27AC;
    return;
L_08AD27AC:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD281C;
      }
      goto L_08AD27B4;
    }
L_08AD27B4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(40));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08AD27CCu);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD27CCu) goto L_08AD27CC;
    return;
L_08AD27CC:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD281C;
      }
      goto L_08AD27D4;
    }
L_08AD27D4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 512u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD2814;
      }
      goto L_08AD27EC;
    }
}
L_08AD27EC:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08AD2804u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 323u, 0x08809984u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD2804u) goto L_08AD2804;
    return;
L_08AD2804:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2824;
      }
      goto L_08AD280C;
    }
L_08AD280C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD29F8;
      }
      goto L_08AD2814;
    }
L_08AD2814:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AD30B0;
      }
      goto L_08AD281C;
    }
L_08AD281C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AD30B0;
      }
      goto L_08AD2824;
    }
L_08AD2824:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (16u << 16u);
    g4 = (g4 & hot_regs.g5);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD2948;
      }
      goto L_08AD2840;
    }
}
L_08AD2840:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8620)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD2948;
      }
      goto L_08AD2858;
    }
L_08AD2858:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g4 = (hot_regs.g4 & 1u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g6 = (65520u << 16u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = (hot_regs.g5 & hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 << 20u);
    hot_regs.g4 = (hot_regs.g5 | hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
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
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AD28D0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD28D0u) goto L_08AD28D0;
    return;
L_08AD28D0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AD2924u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD2924u) goto L_08AD2924;
    return;
L_08AD2924:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD2948;
      }
      goto L_08AD2934;
    }
}
L_08AD2934:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2948;
      }
      goto L_08AD2940;
    }
L_08AD2940:
    hot_regs.g31 = (0x08AD2948u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD2948u) goto L_08AD2948;
    return;
L_08AD2948:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (16u << 16u);
    g4 = (g4 & hot_regs.g5);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD2FD4;
      }
      goto L_08AD2964;
    }
}
L_08AD2964:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (0u | 0u);
    g4 = (g4 & 1u);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(72)));
    g6 = (0u + static_cast<std::uint32_t>(-2049));
    g5 = (g5 & g6);
    g4 = (g4 << 11u);
    g4 = (g5 | g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(72), g4);
    g4 = (0u | 1u);
    g4 = (g4 & 1u);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(76)));
    g6 = (65520u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g5 = (g5 & g6);
    g4 = (g4 << 20u);
    g4 = (g5 | g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(76), g4);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8620)));
    g4 = (16128u << 16u);
    f13 = std::bit_cast<float>(g4);
    f12 = f12 + f13;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(86))))));
    g4 = (g4 << 2u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    f12 = f12 + f13;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f15));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08AD2FD4;
      }
      goto L_08AD29F8;
    }
}
}
L_08AD29F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (16u << 16u);
    g4 = (g4 & hot_regs.g5);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD2FD4;
      }
      goto L_08AD2A14;
    }
}
L_08AD2A14:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g4 = (hot_regs.g4 & 1u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g6 = (65520u << 16u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = (hot_regs.g5 & hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 << 20u);
    hot_regs.g4 = (hot_regs.g5 | hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (17008u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16928u << 16u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17948u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 16384u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g31 = (0x08AD2A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD2A64u) goto L_08AD2A64;
    return;
L_08AD2A64:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2B54;
      }
      goto L_08AD2A6C;
    }
L_08AD2A6C:
    hot_regs.g31 = (0x08AD2A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD2A74u) goto L_08AD2A74;
    return;
L_08AD2A74:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f20;
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g31 = (0x08AD2AB4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD2AB4u) goto L_08AD2AB4;
    return;
L_08AD2AB4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2AE8;
      }
      goto L_08AD2ABC;
    }
L_08AD2ABC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(f12));
    g4 = (g29 + static_cast<std::uint32_t>(256));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08AD2AE8;
}
}
L_08AD2AE8:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f22;
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g31 = (0x08AD2B20u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD2B20u) goto L_08AD2B20;
    return;
L_08AD2B20:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2B54;
      }
      goto L_08AD2B28;
    }
L_08AD2B28:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(f12));
    g4 = (g29 + static_cast<std::uint32_t>(272));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08AD2B54;
}
}
L_08AD2B54:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.f12 = ctx.fpr[26] - ctx.fpr[24];
    g5 = (46470u << 16u);
    g5 = (g5 | 14269u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD2B94;
      }
      goto L_08AD2B74;
    }
}
L_08AD2B74:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (13702u << 16u);
    g5 = (g5 | 14269u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD2B98;
      }
      goto L_08AD2B90;
    }
}
L_08AD2B90:
    hot_regs.g4 = (0u | 1u);
    goto L_08AD2B94;
L_08AD2B94:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_08AD2B98;
L_08AD2B98:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2CCC;
      }
      goto L_08AD2BA0;
    }
L_08AD2BA0:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.f12 = ctx.fpr[28] - ctx.fpr[24];
    g5 = (46470u << 16u);
    g5 = (g5 | 14269u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD2BE0;
      }
      goto L_08AD2BC0;
    }
}
L_08AD2BC0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (13702u << 16u);
    g5 = (g5 | 14269u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD2BE4;
      }
      goto L_08AD2BDC;
    }
}
L_08AD2BDC:
    hot_regs.g4 = (0u | 1u);
    goto L_08AD2BE0;
L_08AD2BE0:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_08AD2BE4;
L_08AD2BE4:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2CCC;
      }
      goto L_08AD2BEC;
    }
L_08AD2BEC:
    hot_regs.g4 = (16656u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f20;
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g31 = (0x08AD2C2Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD2C2Cu) goto L_08AD2C2C;
    return;
L_08AD2C2C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2C60;
      }
      goto L_08AD2C34;
    }
L_08AD2C34:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(f12));
    g4 = (g29 + static_cast<std::uint32_t>(288));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08AD2C60;
}
}
L_08AD2C60:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f22;
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g31 = (0x08AD2C98u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD2C98u) goto L_08AD2C98;
    return;
L_08AD2C98:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2CCC;
      }
      goto L_08AD2CA0;
    }
L_08AD2CA0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(f12));
    g4 = (g29 + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08AD2CCC;
}
}
L_08AD2CCC:
{
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[17] = (0u | 0u);
    hot_regs.f12 = ctx.fpr[26] - ctx.fpr[24];
    g5 = (46470u << 16u);
    g5 = (g5 | 14269u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD2D10;
      }
      goto L_08AD2CF0;
    }
}
L_08AD2CF0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (13702u << 16u);
    g5 = (g5 | 14269u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD2D14;
      }
      goto L_08AD2D0C;
    }
}
L_08AD2D0C:
    hot_regs.g4 = (0u | 1u);
    goto L_08AD2D10;
L_08AD2D10:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_08AD2D14;
L_08AD2D14:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2DE0;
      }
      goto L_08AD2D1C;
    }
L_08AD2D1C:
{
    float f24 = ctx.fpr[24];
{
    std::uint32_t g5 = hot_regs.g5;
    f24 = ctx.fpr[28] - f24;
    g5 = (46470u << 16u);
    g5 = (g5 | 14269u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((f24 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_08AD2D5C;
      }
      goto L_08AD2D3C;
    }
}
}
L_08AD2D3C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (13702u << 16u);
    g5 = (g5 | 14269u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((ctx.fpr[24] <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD2D60;
      }
      goto L_08AD2D58;
    }
}
L_08AD2D58:
    hot_regs.g4 = (0u | 1u);
    goto L_08AD2D5C;
L_08AD2D5C:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_08AD2D60;
L_08AD2D60:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2D84;
      }
      goto L_08AD2D68;
    }
L_08AD2D68:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[17] = (0u | 1u);
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD2EA0;
      }
      goto L_08AD2D84;
    }
}
L_08AD2D84:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    hot_regs.g4 = (16656u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(320));
    hot_regs.g31 = (0x08AD2DA0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD2DA0u) goto L_08AD2DA0;
    return;
L_08AD2DA0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2DB4;
      }
      goto L_08AD2DA8;
    }
L_08AD2DA8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08AD2DD8;
      }
      goto L_08AD2DB4;
    }
L_08AD2DB4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (0u | 1u);
    g4 = (g4 & 1u);
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g6 = (65520u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g5 = (g5 & g6);
    g4 = (g4 << 20u);
    g4 = (g5 | g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08AD2DD8;
}
L_08AD2DD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2EA0;
      }
      goto L_08AD2DE0;
    }
L_08AD2DE0:
{
    float f24 = ctx.fpr[24];
{
    std::uint32_t g5 = hot_regs.g5;
    f24 = ctx.fpr[28] - f24;
    g5 = (46470u << 16u);
    g5 = (g5 | 14269u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((f24 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_08AD2E20;
      }
      goto L_08AD2E00;
    }
}
}
L_08AD2E00:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (13702u << 16u);
    g5 = (g5 | 14269u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((ctx.fpr[24] <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD2E24;
      }
      goto L_08AD2E1C;
    }
}
L_08AD2E1C:
    hot_regs.g4 = (0u | 1u);
    goto L_08AD2E20;
L_08AD2E20:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_08AD2E24;
L_08AD2E24:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2E48;
      }
      goto L_08AD2E2C;
    }
L_08AD2E2C:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[17] = (0u | 1u);
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(240));
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
          goto L_08AD2EA0;
      }
      goto L_08AD2E48;
    }
}
L_08AD2E48:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    f13 = ctx.fpr[28] - f12;
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) & 0x7FFFFFFFu);
    f12 = ctx.fpr[26] - f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((f13 < f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08AD2E8C;
      }
      goto L_08AD2E70;
    }
}
L_08AD2E70:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[17] = (0u | 1u);
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD2EA0;
      }
      goto L_08AD2E8C;
    }
}
L_08AD2E8C:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[17] = (0u | 1u);
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = g4;
    goto L_08AD2EA0;
}
L_08AD2EA0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2FBC;
      }
      goto L_08AD2EA8;
    }
L_08AD2EA8:
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(336));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16181u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 1153u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD2F20;
      }
      goto L_08AD2EF8;
    }
L_08AD2EF8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(f12));
    g4 = (16256u << 16u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g29 + static_cast<std::uint32_t>(448));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08AD2F20;
}
}
L_08AD2F20:
    hot_regs.g31 = (0x08AD2F28u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08AD0AE4;
L_08AD2F28:
    hot_regs.f12 = ctx.fpr[0] / hot_regs.f20;
    hot_regs.f12 = ctx.fpr[26] + hot_regs.f12;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(368));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AD2F5Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD2F5Cu) goto L_08AD2F5C;
    return;
L_08AD2F5C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(352)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(356)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(360)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(248)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AD2F98u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD2F98u) goto L_08AD2F98;
    return;
L_08AD2F98:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(440)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD2FBC;
      }
      goto L_08AD2FA8;
    }
}
L_08AD2FA8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2FBC;
      }
      goto L_08AD2FB4;
    }
L_08AD2FB4:
    hot_regs.g31 = (0x08AD2FBCu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(432)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD2FBCu) goto L_08AD2FBC;
    return;
L_08AD2FBC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(176));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08AD2FD4u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD2FD4u) goto L_08AD2FD4;
    return;
L_08AD2FD4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (16u << 16u);
    g4 = (g4 & hot_regs.g5);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD30AC;
      }
      goto L_08AD2FF0;
    }
}
L_08AD2FF0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (0u | 0u);
    g5 = (0u | 49u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    g6 = (17056u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g6);
    f12 = f12 / hot_regs.f13;
    g6 = (16880u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g6);
    f12 = f12 + hot_regs.f14;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g6 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.g7 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    if (hot_regs.g7 != 0u) {
    g6 = (g5 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
        goto L_08AD3028;
    }
    goto L_08AD3028;
}
}
L_08AD3028:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g6) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    hot_regs.g6 = (hot_regs.g4 | 0u);
        goto L_08AD3034;
    }
    goto L_08AD3034;
L_08AD3034:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    hot_regs.g4 = (0u | 0u);
    g5 = (0u | 49u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    g7 = (17056u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g7);
    f12 = f12 / hot_regs.f13;
    g7 = (16840u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g7);
    f12 = f12 + hot_regs.f14;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g7 = (std::bit_cast<std::uint32_t>(f12));
    ctx.gpr[8] = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    g7 = (g5 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
        goto L_08AD306C;
    }
    goto L_08AD306C;
}
}
L_08AD306C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    g5 = (g7 | 0u);
    g7 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (g7 != 0u) {
    g5 = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
        goto L_08AD307C;
    }
    goto L_08AD307C;
}
L_08AD307C:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    g4 = (g5 << 4u);
    g5 = (g5 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + g5);
    g4 = (hot_regs.g6 + g4);
    g5 = (g4 << 6u);
    g4 = (g4 << 3u);
    g4 = (g5 - g4);
    g2 = (g2 + g4);
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD30B0;
      }
      goto L_08AD30AC;
    }
}
L_08AD30AC:
    hot_regs.g2 = (0u | 0u);
    goto L_08AD30B0;
L_08AD30B0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(528)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(532)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(536)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(540)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(544)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(548)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(552)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(556)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(560));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AD30D8:
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(40))))));
    hot_regs.g7 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g6 != hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08AD30EC;
      }
      goto L_08AD30E8;
    }
L_08AD30E8:
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(hot_regs.g5));
    goto L_08AD30EC;
L_08AD30EC:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD30F4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD3104u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-664), hot_regs.g4);
    hot_regs.g29 = g29;
    goto L_08AD3D58;
}
L_08AD3104:
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
L_08AD3110:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD3120u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    hot_regs.g29 = g29;
    goto L_08AD3DB0;
}
L_08AD3120:
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
L_08AD312C:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (ctx.gpr[28] + static_cast<std::uint32_t>(-648));
    hot_regs.g4 = (0u | 14u);
    hot_regs.g5 = (0u | 1u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08AD314Cu);
    hot_regs.g6 = (g16 | 0u);
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_08AD3258;
}
L_08AD314C:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g31 = (0x08AD315Cu);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    goto L_08AD3258;
L_08AD315C:
    hot_regs.g4 = (0u | 35u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g31 = (0x08AD316Cu);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    goto L_08AD3258;
L_08AD316C:
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
L_08AD317C:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (ctx.gpr[28] + static_cast<std::uint32_t>(-636));
    hot_regs.g4 = (0u | 334u);
    hot_regs.g5 = (0u | 1u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08AD319Cu);
    hot_regs.g6 = (g16 | 0u);
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_08AD3258;
}
L_08AD319C:
    hot_regs.g4 = (0u | 364u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g31 = (0x08AD31ACu);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    goto L_08AD3258;
L_08AD31AC:
    hot_regs.g4 = (0u | 345u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g31 = (0x08AD31BCu);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    goto L_08AD3258;
L_08AD31BC:
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
L_08AD31CC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD31DCu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    hot_regs.g29 = g29;
    goto L_08AD3EE8;
}
L_08AD31DC:
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
L_08AD31E8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD31F8u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    hot_regs.g29 = g29;
    goto L_08AD3F14;
}
L_08AD31F8:
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
L_08AD3204:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD3214u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    hot_regs.g29 = g29;
    goto L_08AD3F1C;
}
L_08AD3214:
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
L_08AD3220:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD3230u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    hot_regs.g29 = g29;
    goto L_08AD3F28;
}
L_08AD3230:
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
L_08AD323C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD324Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    hot_regs.g29 = g29;
    goto L_08AD3F88;
}
L_08AD324C:
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
L_08AD3258:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g7 = (hot_regs.g6 | 0u);
    hot_regs.g6 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD3274u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 4u, 0x08AD4040u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3274u) goto L_08AD3274;
    return;
L_08AD3274:
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
L_08AD3280:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g7 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD329Cu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 4u, 0x08AD4040u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD329Cu) goto L_08AD329C;
    return;
L_08AD329C:
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
L_08AD32A8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08AD32C4u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    hot_regs.g29 = g29;
    goto L_08AD3F30;
}
L_08AD32C4:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store16(hot_regs.g2 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[16]));
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
L_08AD32D8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g7 = (hot_regs.g6 | 0u);
    hot_regs.g6 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD32F4u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 879u, 0x08AD7400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD32F4u) goto L_08AD32F4;
    return;
L_08AD32F4:
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
L_08AD3300:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g7 = (hot_regs.g6 | 0u);
    hot_regs.g6 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD331Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 879u, 0x08AD7400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD331Cu) goto L_08AD331C;
    return;
L_08AD331C:
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
L_08AD3328:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08AD334Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 559u, 0x08AD6118u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD334Cu) goto L_08AD334C;
    return;
L_08AD334C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AD3360u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 4u, 0x08AD4040u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3360u) goto L_08AD3360;
    return;
L_08AD3360:
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
L_08AD3374:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08AD3398u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 558u, 0x08AD610Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3398u) goto L_08AD3398;
    return;
L_08AD3398:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AD33ACu);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 4u, 0x08AD4040u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD33ACu) goto L_08AD33AC;
    return;
L_08AD33AC:
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
L_08AD33C0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08AD33E4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 557u, 0x08AD6100u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD33E4u) goto L_08AD33E4;
    return;
L_08AD33E4:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AD33F8u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 4u, 0x08AD4040u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD33F8u) goto L_08AD33F8;
    return;
L_08AD33F8:
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
L_08AD340C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD3420u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 69u, 0x08AD43F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3420u) goto L_08AD3420;
    return;
L_08AD3420:
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
L_08AD342C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08AD3448u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 558u, 0x08AD610Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3448u) goto L_08AD3448;
    return;
L_08AD3448:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AD3454u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 69u, 0x08AD43F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3454u) goto L_08AD3454;
    return;
L_08AD3454:
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
L_08AD3464:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08AD3480u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 559u, 0x08AD6118u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3480u) goto L_08AD3480;
    return;
L_08AD3480:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AD348Cu);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 69u, 0x08AD43F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD348Cu) goto L_08AD348C;
    return;
L_08AD348C:
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
L_08AD349C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD34B0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(164));
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 136u, 0x08B70B9Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD34B0u) goto L_08AD34B0;
    return;
L_08AD34B0:
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
L_08AD34BC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD34CCu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 126u, 0x08AD4784u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD34CCu) goto L_08AD34CC;
    return;
L_08AD34CC:
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
L_08AD34D8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD34ECu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 557u, 0x08AD6100u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD34ECu) goto L_08AD34EC;
    return;
L_08AD34EC:
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
L_08AD34F8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD350Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 558u, 0x08AD610Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD350Cu) goto L_08AD350C;
    return;
L_08AD350C:
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
L_08AD3518:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD352Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 559u, 0x08AD6118u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD352Cu) goto L_08AD352C;
    return;
L_08AD352C:
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
L_08AD3538:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD354Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    hot_regs.g29 = g29;
    goto L_08AD3F48;
}
L_08AD354C:
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
L_08AD3558:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD356Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 236u, 0x08AD4E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD356Cu) goto L_08AD356C;
    return;
L_08AD356C:
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
L_08AD3578:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD358Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 267u, 0x08AD4FC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD358Cu) goto L_08AD358C;
    return;
L_08AD358C:
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
L_08AD3598:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD35A0:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD35A8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD35BCu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 479u, 0x08AD5BACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD35BCu) goto L_08AD35BC;
    return;
L_08AD35BC:
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
L_08AD35C8:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD35D0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD35E0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    hot_regs.g29 = g29;
    goto L_08AD3E60;
}
L_08AD35E0:
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
L_08AD35EC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    hot_regs.g5 = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD3604u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 164u, 0x08AD49ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3604u) goto L_08AD3604;
    return;
L_08AD3604:
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
L_08AD3610:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g6 = (hot_regs.g4 & 255u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD3628u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 164u, 0x08AD49ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3628u) goto L_08AD3628;
    return;
L_08AD3628:
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
L_08AD3634:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD3644u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 140u, 0x08AD4850u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3644u) goto L_08AD3644;
    return;
L_08AD3644:
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
L_08AD3650:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD3664u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 971u, 0x08AD78DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3664u) goto L_08AD3664;
    return;
L_08AD3664:
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
L_08AD3670:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD3680u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 458u, 0x08AD5A3Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3680u) goto L_08AD3680;
    return;
L_08AD3680:
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
L_08AD368C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3698:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD36ACu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 234u, 0x08AD4E34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD36ACu) goto L_08AD36AC;
    return;
L_08AD36AC:
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
L_08AD36B8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08AD36CCu);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    hot_regs.g29 = g29;
    goto L_08AD3518;
}
L_08AD36CC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AD36D8u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 234u, 0x08AD4E34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD36D8u) goto L_08AD36D8;
    return;
L_08AD36D8:
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
L_08AD36E8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD36FCu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 234u, 0x08AD4E34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD36FCu) goto L_08AD36FC;
    return;
L_08AD36FC:
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
L_08AD3708:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD371Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    hot_regs.g29 = g29;
    goto L_08AD3F30;
}
L_08AD371C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(9)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AD372C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08AD3748u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    hot_regs.g29 = g29;
    goto L_08AD3F30;
}
L_08AD3748:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(hot_regs.g2 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[16]));
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
L_08AD375C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD376Cu);
    // nop
    hot_regs.g29 = g29;
    goto L_08AD34D8;
}
L_08AD376C:
    hot_regs.g31 = (0x08AD3774u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    goto L_08AD3708;
L_08AD3774:
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
L_08AD3780:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD3794u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 521u, 0x08AD5EF8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3794u) goto L_08AD3794;
    return;
L_08AD3794:
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
L_08AD37A0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD37B4u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 541u, 0x08AD6020u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD37B4u) goto L_08AD37B4;
    return;
L_08AD37B4:
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
L_08AD37C0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD37D4u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 281u, 0x08AD50DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD37D4u) goto L_08AD37D4;
    return;
L_08AD37D4:
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
L_08AD37E0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD37F4u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 318u, 0x08AD52ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD37F4u) goto L_08AD37F4;
    return;
L_08AD37F4:
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
L_08AD3800:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08AD3814u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    hot_regs.g29 = g29;
    goto L_08AD3518;
}
L_08AD3814:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AD3820u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 281u, 0x08AD50DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3820u) goto L_08AD3820;
    return;
L_08AD3820:
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
L_08AD3830:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08AD3844u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    hot_regs.g29 = g29;
    goto L_08AD3518;
}
L_08AD3844:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AD3850u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 281u, 0x08AD50DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3850u) goto L_08AD3850;
    return;
L_08AD3850:
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
L_08AD3860:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD3874u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 281u, 0x08AD50DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3874u) goto L_08AD3874;
    return;
L_08AD3874:
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
L_08AD3880:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD3894u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 318u, 0x08AD52ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3894u) goto L_08AD3894;
    return;
L_08AD3894:
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
L_08AD38A0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD38B0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 503u, 0x08AD5DE8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD38B0u) goto L_08AD38B0;
    return;
L_08AD38B0:
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
L_08AD38BC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD38D0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 520u, 0x08AD5EE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD38D0u) goto L_08AD38D0;
    return;
L_08AD38D0:
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
L_08AD38DC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD38ECu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 439u, 0x08AD5914u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD38ECu) goto L_08AD38EC;
    return;
L_08AD38EC:
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
L_08AD38F8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    g4 = (2237u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-28736));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g17);
    g17 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(37)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    g4 = (static_cast<std::int32_t>(g17) < 2 ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), hot_regs.g31);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08AD3934;
      }
      goto L_08AD3930;
    }
}
L_08AD3930:
    ctx.gpr[17] = (0u | 0u);
    goto L_08AD3934;
L_08AD3934:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 << 2u);
    ctx.gpr[16] = (0u | 0u);
    g17 = (ctx.gpr[28] + g17);
    ctx.gpr[17] = g17;
    goto L_08AD3940;
}
L_08AD3940:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    hot_regs.g5 = (0u | 5u);
    hot_regs.g31 = (0x08AD3950u);
    hot_regs.g6 = (0u | 0u);
    goto L_08AD3258;
L_08AD3950:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < 1 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08AD3940;
      }
      goto L_08AD3960;
    }
}
L_08AD3960:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (2233u << 16u);
    ctx.gpr[16] = (0u | 15u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(8));
    ctx.gpr[18] = (0u | 0u);
    g20 = (g20 + static_cast<std::uint32_t>(-20960));
    ctx.gpr[20] = g20;
    goto L_08AD3978;
}
L_08AD3978:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = g19 != 0u;
    hot_regs.g4 = (g19 | 0u);
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08AD3994;
      }
      goto L_08AD3984;
    }
}
L_08AD3984:
    hot_regs.g31 = (0x08AD398Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD398Cu) goto L_08AD398C;
    return;
L_08AD398C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    goto L_08AD3994;
L_08AD3994:
    hot_regs.g31 = (0x08AD399Cu);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 80u, 0x08A545ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD399Cu) goto L_08AD399C;
    return;
L_08AD399C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (0u | 255u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(g4));
    g19 = (hot_regs.g2 + static_cast<std::uint32_t>(10));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g19 = (g19 + ctx.gpr[18]);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(g4));
    hot_regs.g5 = (aot_mem.aot_load16(g19 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    g4 = (0u | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08AD39F4;
      }
      goto L_08AD39D0;
    }
}
L_08AD39D0:
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    hot_regs.g6 = (aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(2)));
    if (hot_regs.g5 != hot_regs.g6) {
    hot_regs.g4 = (hot_regs.g4 & 255u);
        goto L_08AD39F8;
    }
    goto L_08AD39E0;
L_08AD39E0:
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    hot_regs.g4 = (hot_regs.g4 & 255u);
      if (branch_taken) {
          goto L_08AD39F8;
      }
      goto L_08AD39F0;
    }
L_08AD39F0:
    hot_regs.g4 = (0u | 1u);
    goto L_08AD39F4;
L_08AD39F4:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_08AD39F8;
L_08AD39F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD3B3C;
      }
      goto L_08AD3A08;
    }
}
L_08AD3A08:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    hot_regs.g31 = (0x08AD3A14u);
    hot_regs.g4 = (0u | 15u);
    goto L_08AD340C;
L_08AD3A14:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3A2C;
      }
      goto L_08AD3A20;
    }
L_08AD3A20:
    hot_regs.g31 = (0x08AD3A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3A28u) goto L_08AD3A28;
    return;
L_08AD3A28:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AD3A2C;
L_08AD3A2C:
    hot_regs.g31 = (0x08AD3A34u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 80u, 0x08A545ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3A34u) goto L_08AD3A34;
    return;
L_08AD3A34:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(10));
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[18]);
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(6)));
    hot_regs.g5 = (hot_regs.g4 << 4u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[20]);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08AD3A5Cu);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 146u, 0x08AEC930u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3A5Cu) goto L_08AD3A5C;
    return;
L_08AD3A5C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3A7C;
      }
      goto L_08AD3A64;
    }
L_08AD3A64:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3A7C;
      }
      goto L_08AD3A70;
    }
L_08AD3A70:
    hot_regs.g5 = (0u | 5u);
    hot_regs.g31 = (0x08AD3A7Cu);
    hot_regs.g6 = (0u | 0u);
    goto L_08AD3258;
L_08AD3A7C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3A94;
      }
      goto L_08AD3A88;
    }
L_08AD3A88:
    hot_regs.g31 = (0x08AD3A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3A90u) goto L_08AD3A90;
    return;
L_08AD3A90:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AD3A94;
L_08AD3A94:
    hot_regs.g31 = (0x08AD3A9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 247u, 0x08A54F5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3A9Cu) goto L_08AD3A9C;
    return;
L_08AD3A9C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g7 != hot_regs.g6;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_08AD3AD4;
      }
      goto L_08AD3AB0;
    }
L_08AD3AB0:
    hot_regs.g6 = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(2)));
    if (hot_regs.g6 != hot_regs.g7) {
    hot_regs.g4 = (hot_regs.g5 & 255u);
        goto L_08AD3AD8;
    }
    goto L_08AD3AC0;
L_08AD3AC0:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g6 != g4;
    g4 = (hot_regs.g5 & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD3AD8;
      }
      goto L_08AD3AD0;
    }
}
L_08AD3AD0:
    hot_regs.g5 = (0u | 1u);
    goto L_08AD3AD4;
L_08AD3AD4:
    hot_regs.g4 = (hot_regs.g5 & 255u);
    goto L_08AD3AD8;
L_08AD3AD8:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3B3C;
      }
      goto L_08AD3AE0;
    }
L_08AD3AE0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3AF8;
      }
      goto L_08AD3AEC;
    }
L_08AD3AEC:
    hot_regs.g31 = (0x08AD3AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3AF4u) goto L_08AD3AF4;
    return;
L_08AD3AF4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AD3AF8;
L_08AD3AF8:
    hot_regs.g31 = (0x08AD3B00u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 80u, 0x08A545ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3B00u) goto L_08AD3B00;
    return;
L_08AD3B00:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(10));
    g4 = (g4 + ctx.gpr[18]);
    hot_regs.g5 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(6)));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = g4 != 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7076), hot_regs.g5);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AD3B24;
      }
      goto L_08AD3B18;
    }
}
L_08AD3B18:
    hot_regs.g31 = (0x08AD3B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3B20u) goto L_08AD3B20;
    return;
L_08AD3B20:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AD3B24;
L_08AD3B24:
    hot_regs.g31 = (0x08AD3B2Cu);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 80u, 0x08A545ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3B2Cu) goto L_08AD3B2C;
    return;
L_08AD3B2C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(10));
    g4 = (g4 + ctx.gpr[18]);
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7072), g4);
    hot_regs.g4 = g4;
    goto L_08AD3B3C;
}
L_08AD3B3C:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 7 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08AD3978;
      }
      goto L_08AD3B4C;
    }
}
L_08AD3B4C:
    hot_regs.g31 = (0x08AD3B54u);
    hot_regs.g4 = (0u | 0u);
    goto L_08AD3610;
L_08AD3B54:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AD3B78:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD3B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3B88u) goto L_08AD3B88;
    return;
L_08AD3B88:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (hot_regs.g2 | 0u);
    g5 = (0u | 0u);
    ctx.gpr[1] = (g5 << 1u);
    g4 = (g4 >> 31u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 31u));
    g4 = (ctx.gpr[1] | g4);
    g5 = (2237u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-28736));
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(37)));
    g4 = (g4 | 0u);
    g5 = (g5 << 2u);
    g4 = (g4 << 2u);
    g5 = (ctx.gpr[28] + g5);
    g4 = (g5 + g4);
    hot_regs.g2 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(108)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AD3BD0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD3BE4u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 546u, 0x08AD6070u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3BE4u) goto L_08AD3BE4;
    return;
L_08AD3BE4:
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
L_08AD3BF0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD3C00u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 564u, 0x08AD6150u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3C00u) goto L_08AD3C00;
    return;
L_08AD3C00:
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
L_08AD3C0C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-664)));
    g4 = (g4 & 255u);
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(g4));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AD3C1C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AD3C44:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (0u | 0u);
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08AD3C78;
      }
      goto L_08AD3C64;
    }
}
L_08AD3C64:
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    hot_regs.g31 = (0x08AD3C74u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(31984));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3C74u) goto L_08AD3C74;
    return;
L_08AD3C74:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    goto L_08AD3C78;
L_08AD3C78:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), hot_regs.g4);
    { const bool branch_taken = hot_regs.g4 != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_08AD3C8C;
      }
      goto L_08AD3C84;
    }
L_08AD3C84:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AD3CB4;
      }
      goto L_08AD3C8C;
    }
L_08AD3C8C:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08AD3CA0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(31984));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 563u, 0x08ABE988u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3CA0u) goto L_08AD3CA0;
    return;
L_08AD3CA0:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08AD3CB0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3CB0u) goto L_08AD3CB0;
    return;
L_08AD3CB0:
    hot_regs.g2 = (ctx.gpr[16] | 0u);
    goto L_08AD3CB4;
L_08AD3CB4:
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
L_08AD3CC4:
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
          goto L_08AD3D44;
      }
      goto L_08AD3CE0;
    }
}
L_08AD3CE0:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    hot_regs.g31 = (0x08AD3CECu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3CECu) goto L_08AD3CEC;
    return;
L_08AD3CEC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3D08;
      }
      goto L_08AD3CF8;
    }
L_08AD3CF8:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g31 = (0x08AD3D08u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(31984));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3D08u) goto L_08AD3D08;
    return;
L_08AD3D08:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g4 = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08AD3D34;
      }
      goto L_08AD3D10;
    }
L_08AD3D10:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (g4 == 0u) {
    g4 = (ctx.gpr[16] & 1u);
    hot_regs.g4 = g4;
        goto L_08AD3D34;
    }
    goto L_08AD3D1C;
}
L_08AD3D1C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(0), 0u);
    g4 = (ctx.gpr[16] & 1u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08AD3D34;
}
L_08AD3D34:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3D44;
      }
      goto L_08AD3D3C;
    }
L_08AD3D3C:
    hot_regs.g31 = (0x08AD3D44u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3D44u) goto L_08AD3D44;
    return;
L_08AD3D44:
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
L_08AD3D58:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (2238u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(14304));
    hot_regs.g5 = (2232u << 16u);
    hot_regs.g6 = (2235u << 16u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(16216));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08AD3D8Cu);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1289));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3D8Cu) goto L_08AD3D8C;
    return;
L_08AD3D8C:
    hot_regs.g31 = (0x08AD3D94u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3D94u) goto L_08AD3D94;
    return;
L_08AD3D94:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(148), hot_regs.g2);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(185), static_cast<std::uint8_t>(0u));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AD3DB0:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08AD3DD0u);
    hot_regs.g4 = (g16 | 0u);
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_08AD3F88;
}
L_08AD3DD0:
    hot_regs.g31 = (0x08AD3DD8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 270u, 0x08AD4FFCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3DD8u) goto L_08AD3DD8;
    return;
L_08AD3DD8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD3E3C;
      }
      goto L_08AD3DEC;
    }
L_08AD3DEC:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AD3E08;
      }
      goto L_08AD3DF8;
    }
L_08AD3DF8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 + ctx.gpr[17]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    goto L_08AD3E08;
}
L_08AD3E08:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3E2C;
      }
      goto L_08AD3E10;
    }
L_08AD3E10:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AD3E1Cu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 281u, 0x08AD50DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3E1Cu) goto L_08AD3E1C;
    return;
L_08AD3E1C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AD3E28u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 318u, 0x08AD52ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3E28u) goto L_08AD3E28;
    return;
L_08AD3E28:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    goto L_08AD3E2C;
L_08AD3E2C:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08AD3DEC;
      }
      goto L_08AD3E3C;
    }
}
L_08AD3E3C:
    hot_regs.g31 = (0x08AD3E44u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 126u, 0x08AD4784u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3E44u) goto L_08AD3E44;
    return;
L_08AD3E44:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
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
L_08AD3E60:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8360)));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7713)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (g4 | 0u);
    g4 = (hot_regs.g5 | hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08AD3E98;
      }
      goto L_08AD3E84;
    }
}
L_08AD3E84:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3EA0;
      }
      goto L_08AD3E90;
    }
L_08AD3E90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3EA8;
      }
      goto L_08AD3E98;
    }
L_08AD3E98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3ED8;
      }
      goto L_08AD3EA0;
    }
L_08AD3EA0:
    hot_regs.g31 = (0x08AD3EA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3EA8u) goto L_08AD3EA8;
    return;
L_08AD3EA8:
    hot_regs.g31 = (0x08AD3EB0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x08958764u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3EB0u) goto L_08AD3EB0;
    return;
L_08AD3EB0:
    hot_regs.g31 = (0x08AD3EB8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 565u, 0x08AD6158u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3EB8u) goto L_08AD3EB8;
    return;
L_08AD3EB8:
    hot_regs.g31 = (0x08AD3EC0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 597u, 0x08AD62DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3EC0u) goto L_08AD3EC0;
    return;
L_08AD3EC0:
    hot_regs.g31 = (0x08AD3EC8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 618u, 0x08AD63BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3EC8u) goto L_08AD3EC8;
    return;
L_08AD3EC8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08AD3ED8u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 164u, 0x08AD49ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3ED8u) goto L_08AD3ED8;
    return;
L_08AD3ED8:
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
L_08AD3EE8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(112), 0u);
    hot_regs.g5 = (0u | 207u);
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AD3F08u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 4u, 0x08AD4040u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AD3F08u) goto L_08AD3F08;
    return;
L_08AD3F08:
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
L_08AD3F14:
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3F1C:
    hot_regs.g5 = (0u | 1u);
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3F28:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3F30:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g2 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(152)));
    g4 = (g5 << 4u);
    g5 = (g5 << 2u);
    g4 = (g4 + g5);
    jump_target = hot_regs.g31;
    g2 = (g2 + g4);
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AD3F48:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) < 0;
    hot_regs.g6 = (0u | 0u);
      if (branch_taken) {
          goto L_08AD3F80;
      }
      goto L_08AD3F50;
    }
L_08AD3F50:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    g7 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    { const bool branch_taken = g7 == 0u;
    g7 = (hot_regs.g5 << 4u);
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08AD3F80;
      }
      goto L_08AD3F60;
    }
}
L_08AD3F60:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(152)));
    g5 = (g5 << 2u);
    g5 = (hot_regs.g7 + g5);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(g4) <= 0;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AD3F80;
      }
      goto L_08AD3F7C;
    }
}
L_08AD3F7C:
    hot_regs.g6 = (0u | 1u);
    goto L_08AD3F80;
L_08AD3F80:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g6 & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3F88:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (hot_regs.g4 + static_cast<std::uint32_t>(164));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[19] = (ctx.gpr[19] - 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 3u, 0x08AD4020u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08AD3FBC;
    }
L_08AD3FBC:
    ctx.gpr[17] = (0u | 3u);
    goto L_08AD3FC0;
L_08AD3FC0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[18];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 2u, 0x08AD4014u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08AD3FCC;
    }
L_08AD3FCC:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08AD3FD8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08AD3F30;
L_08AD3FD8:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = hot_regs.g5 != ctx.gpr[17];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 2u, 0x08AD4014u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08AD3FE8;
    }
L_08AD3FE8:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(9)));
    hot_regs.g4 = (hot_regs.g4 & 131u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 2u, 0x08AD4014u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08AD3FF8;
    }
L_08AD3FF8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08AD4004u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08AD3F30;
}

void recomp_unit_0179(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0179_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_179(Runtime &runtime) {
    runtime.register_generated_unit(179u, 0x08AD0000u, 16384u, &recomp_unit_0179, &recomp_unit_0179_entry);
    runtime.register_function(0x08AD0000u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0004u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD000Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD001Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD002Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD003Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0044u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD004Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0054u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0064u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD006Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0074u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD007Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0090u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0098u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD00B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD00C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD00C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD00E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD00F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0108u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0134u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD01A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD01C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD01D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD01E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD01FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0218u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0234u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0248u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD025Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0270u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD029Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD02B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD02CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD02E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD02F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0310u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD032Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0340u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0354u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0368u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD03B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD043Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0444u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD044Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD04B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD04E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0510u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0530u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0598u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD05ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD05C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD05DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD05E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD05ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD05F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0600u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD061Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0624u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0634u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD063Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0644u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD064Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0654u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD065Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0670u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0680u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0688u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0690u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0698u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD06A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD06ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD06C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD06CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD06D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD06DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD06E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD06F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0708u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0714u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0720u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD072Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0738u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0744u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0750u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD075Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0768u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0774u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0780u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD078Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0794u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD079Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD07A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD07B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD07C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD07CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD07D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD07E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD07E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD07F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD07FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0808u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD081Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0824u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD082Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0834u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0848u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0854u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD085Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0864u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0868u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0878u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0884u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD088Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0894u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD08B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD08C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD08CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD08D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD08E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD08F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD08FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0908u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0914u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0920u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0928u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD092Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0934u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0948u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0964u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0974u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD097Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0984u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD098Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD099Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD09A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD09B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD09B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD09C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD09C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD09D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD09DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD09FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A08u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A18u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A20u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A28u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A30u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A38u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A40u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A48u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A74u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A7Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A8Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0AB0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0AD0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0AE4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B08u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B30u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B40u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B50u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B58u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B74u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BB8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BD0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BDCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C38u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C70u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CA8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CB4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D20u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D54u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D64u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D74u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D84u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DA4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DB4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DD4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DF8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E00u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E08u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E18u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E68u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E78u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E98u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0EACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0EBCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0EC4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F54u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F58u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FA4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FF0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FFCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1004u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1020u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1028u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD109Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD10D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD111Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1150u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD119Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1200u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1204u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD120Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1260u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1278u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD128Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD12A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1328u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1334u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1344u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1358u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD135Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD138Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD13D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1458u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1468u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1488u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1494u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD14B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD14C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD14E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD14ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD14F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD151Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1528u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1550u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD155Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1570u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1588u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD159Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD15B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD15C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD15D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD15E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD15ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD15F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD15FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1604u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD160Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1618u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1624u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1630u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD163Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1648u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1654u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1664u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1670u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1678u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1680u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1688u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1690u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD169Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1700u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1708u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD171Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1738u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1768u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD17B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1834u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1844u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1864u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1870u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1890u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD189Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD18BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD18C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD18D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD18F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1904u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD192Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1938u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD194Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1964u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1978u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD198Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD19A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD19ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD19BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD19C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD19D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD19D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD19E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD19E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD19F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A00u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A18u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A30u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A40u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A4Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A54u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A64u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A6Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A78u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A84u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A9Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1AA8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1AACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1AB8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1AC4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1ADCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1AE4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1AF0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1AF8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B00u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B08u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B10u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B18u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B20u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B58u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B88u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1BA0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1EDCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F18u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F54u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F68u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F70u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F78u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F88u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F9Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1FACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1FC4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1FCCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1FD4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1FDCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1FE4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1FF4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2040u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD204Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2054u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2068u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2070u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2078u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2080u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2088u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD209Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2108u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2110u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2118u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2120u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2130u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2148u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2200u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2258u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD22ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD22F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2308u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2318u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2328u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2338u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2340u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD234Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD235Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2364u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD236Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2374u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD237Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD238Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2394u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD239Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD23A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD23ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD23BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2464u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD246Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2480u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2528u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2530u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2540u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD25E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD25F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2604u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2654u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD26B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD26CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD26D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD26DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD26F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD26F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2700u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2714u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD271Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2724u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2738u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2740u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2764u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD27A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD27ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD27B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD27CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD27D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD27ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2804u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD280Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2814u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD281Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2824u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2840u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2858u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD28D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2924u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2934u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2940u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2948u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2964u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD29F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A64u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A6Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A74u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2AB4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2ABCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2AE8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B20u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B28u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B54u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B74u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B98u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2BA0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2BC0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2BDCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2BE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2BE4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2BECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2C2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2C34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2C60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2C98u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2CA0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2CCCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2CF0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D10u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D58u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D68u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D84u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2DA0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2DA8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2DB4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2DD8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2DE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E00u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E20u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E48u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E70u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E8Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2EA0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2EA8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2EF8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F20u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F28u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F98u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2FA8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2FB4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2FBCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2FD4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2FF0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3028u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3034u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD306Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD307Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD30ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD30B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD30D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD30E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD30ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD30F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3104u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3110u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3120u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD312Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD314Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD315Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD316Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD317Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD319Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD31ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD31BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD31CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD31DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD31E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD31F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3204u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3214u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3220u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3230u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD323Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD324Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3258u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3274u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3280u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD329Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD32A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD32C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD32D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD32F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3300u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD331Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3328u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD334Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3360u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3374u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3398u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD33ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD33C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD33E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD33F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD340Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3420u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD342Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3448u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3454u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3464u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3480u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD348Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD349Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD34B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD34BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD34CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD34D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD34ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD34F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD350Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3518u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD352Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3538u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD354Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3558u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD356Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3578u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD358Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3598u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD35A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD35A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD35BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD35C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD35D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD35E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD35ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3604u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3610u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3628u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3634u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3644u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3650u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3664u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3670u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3680u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD368Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3698u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD36ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD36B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD36CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD36D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD36E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD36FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3708u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD371Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD372Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3748u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD375Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD376Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3774u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3780u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3794u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD37A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD37B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD37C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD37D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD37E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD37F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3800u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3814u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3820u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3830u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3844u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3850u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3860u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3874u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3880u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3894u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD38A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD38B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD38BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD38D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD38DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD38ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD38F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3930u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3934u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3940u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3950u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3960u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3978u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3984u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD398Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3994u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD399Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD39D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD39E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD39F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD39F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD39F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A08u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A20u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A28u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A64u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A70u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A7Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A88u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A9Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3AB0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3AC0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3AD0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3AD4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3AD8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3AE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3AECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3AF4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3AF8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B00u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B18u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B20u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B4Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B54u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B78u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B88u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3BD0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3BE4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3BF0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C00u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C64u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C74u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C78u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C84u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C8Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3CA0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3CB0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3CB4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3CC4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3CE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3CECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3CF8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D08u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D10u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D58u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D8Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3DB0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3DD0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3DD8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3DECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3DF8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E08u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E10u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E28u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E84u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E98u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3EA0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3EA8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3EB0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3EB8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3EC0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3EC8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3ED8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3EE8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F08u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F28u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F30u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F48u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F50u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F7Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F80u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F88u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3FBCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3FC0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3FCCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3FD8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3FE8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3FF8u, &recomp_unit_0179, "recomp_unit_0179");
}
} // namespace psprecomp
