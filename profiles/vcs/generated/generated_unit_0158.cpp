#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0158[4093] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0,
    0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 18, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0,
    0, 32, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 47,
    0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 54,
    0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 61, 0,
    0, 62, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0,
    0, 0, 68, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0,
    0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 81,
    0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0,
    0, 0, 85, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 99,
    0, 100, 0, 0, 101, 0, 102, 103, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0, 0, 109, 0, 110, 0, 111,
    0, 112, 0, 113, 114, 0, 0, 115, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0,
    122, 0, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0,
    0, 0, 0, 131, 0, 132, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0,
    0, 0, 0, 139, 140, 0, 0, 0, 0, 141, 0, 0, 0, 142, 143, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 147, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 151, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162,
    0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 171,
    0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 178, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 183, 0, 184, 0,
    0, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192,
    0, 193, 0, 194, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0,
    0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0, 0, 0, 208, 0, 209, 0, 210, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 216, 0, 217, 0,
    218, 0, 219, 0, 220, 0, 0, 0, 221, 0, 222, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0,
    0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 230, 0, 231, 232, 0, 0, 0,
    0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 0, 241,
    0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 249, 0, 0, 250,
    0, 0, 0, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 258, 0, 0, 259, 0, 0, 0, 0, 260, 0,
    0, 0, 261, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 269, 0, 0,
    270, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 274, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 279,
    0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 285, 286, 0, 0, 287, 0, 0, 0,
    0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0, 293, 0, 294, 0, 0, 295, 0, 0, 0, 296, 0, 297, 0, 298, 0, 299, 0, 0, 0, 0, 0,
    0, 300, 0, 301, 0, 302, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 309, 310, 0, 0, 0, 311, 0,
    0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 314, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0,
    317, 0, 318, 0, 319, 0, 0, 0, 0, 0, 320, 321, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 325,
    0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0,
    0, 330, 331, 0, 0, 0, 332, 0, 0, 0, 0, 333, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 338,
    0, 0, 339, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 344, 0, 0, 345, 0, 346, 0, 347, 0, 348, 349, 0, 0,
    0, 350, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 355, 0, 356, 0, 0,
    0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 363, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 368, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0,
    0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 375, 0, 376, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 380, 381, 0, 0,
    0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0,
    0, 0, 0, 389, 0, 390, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 397,
    0, 0, 0, 398, 0, 0, 399, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0,
    406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 409, 0, 410, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 413, 414, 0, 0, 0, 0, 0, 0, 0,
    0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0,
    434, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 442, 0,
    0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 448, 0, 0, 0, 0, 449, 0,
    450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 457,
    0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0,
    0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0,
    0, 0, 0, 0, 0, 0, 472, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 476, 0, 0, 0, 0, 477, 0,
    0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0, 0, 484,
    0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0,
    0, 0, 496, 0, 0, 497, 0, 498, 0, 499, 0, 500, 0, 501, 0, 502, 0, 503, 0, 504, 0, 0, 505, 0, 0, 506, 0, 507, 0, 0, 0, 0,
    0, 0, 508, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 513,
    0, 0, 514, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 518, 519, 520, 0, 521, 0, 0, 0, 0, 0, 0,
    522, 0, 0, 0, 0, 0, 523, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 527, 0, 528, 0, 529, 0, 0, 530, 0, 0, 531, 0,
    532, 0, 533, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 538, 0,
    0, 0, 539, 0, 0, 0, 0, 540, 0, 541, 0, 542, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0,
    552, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 554, 0, 555, 0, 556, 0, 557, 0, 558, 0, 559, 0, 560, 0, 561, 0, 0, 0, 0, 0, 0,
    0, 562, 0, 563, 0, 564, 565, 0, 0, 566, 0, 567, 0, 568, 0, 569, 0, 570, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 572,
    0, 0, 0, 573, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0, 0, 577, 0, 578, 0, 0, 0, 579, 0,
    0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 581, 582, 583, 0, 584, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 586, 0, 587, 0,
    0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 590, 0, 591, 0, 592, 0, 0, 593, 0, 0, 594, 0, 595, 0, 596, 0, 597, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 604,
    0, 605, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 610, 0, 611, 0, 0, 0, 612, 0, 0, 0, 613, 614, 0, 615, 0, 616, 0, 0, 0, 0, 0,
    617, 618, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 621, 622, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 627, 0, 0, 628, 0,
    0, 629, 630, 0, 0, 631, 0, 632, 633, 0, 0, 634, 0, 635, 636, 0, 0, 637, 0, 638, 639, 0, 0, 640, 0, 641, 642, 0, 0, 643, 0, 644,
    0, 0, 0, 645, 0, 0, 0, 646, 0, 0, 647, 648, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 651, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 654, 0, 655, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657,
    0, 658, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 662, 0, 0, 0, 0, 663, 0,
    664, 665, 0, 0, 0, 0, 0, 0, 666, 0, 0, 667, 0, 0, 0, 668, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 670, 0, 671, 0, 672, 0,
    673, 0, 674, 0, 0, 0, 0, 675, 676, 677, 0, 678, 679, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 684, 685, 0, 0, 686, 687, 0, 0, 0, 688, 0, 0, 0,
    0, 0, 689, 0, 0, 690, 0, 691, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 698, 0, 0, 0, 0, 699, 0, 0, 0, 700, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 702, 0, 703, 0, 704, 705, 0, 0, 0, 0,
    0, 706, 0, 0, 0, 707, 0, 0, 0, 0, 0, 708, 0, 0, 0, 709, 0, 0, 710, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 712, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 715, 0, 0, 716, 0, 0, 0, 717, 0, 0, 0, 718, 0, 0,
    719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0, 0, 724,
};
void recomp_unit_0158_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A7C004u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0158[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A7C004;
    case 2u: goto L_08A7C024;
    case 3u: goto L_08A7C034;
    case 4u: goto L_08A7C054;
    case 5u: goto L_08A7C05C;
    case 6u: goto L_08A7C07C;
    case 7u: goto L_08A7C20C;
    case 8u: goto L_08A7C250;
    case 9u: goto L_08A7C2CC;
    case 10u: goto L_08A7C30C;
    case 11u: goto L_08A7C6A8;
    case 12u: goto L_08A7C6EC;
    case 13u: goto L_08A7C6F8;
    case 14u: goto L_08A7C710;
    case 15u: goto L_08A7C798;
    case 16u: goto L_08A7C7D4;
    case 17u: goto L_08A7C7E4;
    case 18u: goto L_08A7C7EC;
    case 19u: goto L_08A7C7F4;
    case 20u: goto L_08A7C81C;
    case 21u: goto L_08A7C900;
    case 22u: goto L_08A7C9DC;
    case 23u: goto L_08A7C9F0;
    case 24u: goto L_08A7CA20;
    case 25u: goto L_08A7CA28;
    case 26u: goto L_08A7CA9C;
    case 27u: goto L_08A7CAA4;
    case 28u: goto L_08A7CAAC;
    case 29u: goto L_08A7CAC8;
    case 30u: goto L_08A7CAE8;
    case 31u: goto L_08A7CAF0;
    case 32u: goto L_08A7CB08;
    case 33u: goto L_08A7CB14;
    case 34u: goto L_08A7CB28;
    case 35u: goto L_08A7CB34;
    case 36u: goto L_08A7CB48;
    case 37u: goto L_08A7CB50;
    case 38u: goto L_08A7CB64;
    case 39u: goto L_08A7CB84;
    case 40u: goto L_08A7CB8C;
    case 41u: goto L_08A7CBA4;
    case 42u: goto L_08A7CBB0;
    case 43u: goto L_08A7CBC4;
    case 44u: goto L_08A7CBD0;
    case 45u: goto L_08A7CBE4;
    case 46u: goto L_08A7CBEC;
    case 47u: goto L_08A7CC00;
    case 48u: goto L_08A7CC20;
    case 49u: goto L_08A7CC28;
    case 50u: goto L_08A7CC40;
    case 51u: goto L_08A7CC4C;
    case 52u: goto L_08A7CC60;
    case 53u: goto L_08A7CC6C;
    case 54u: goto L_08A7CC80;
    case 55u: goto L_08A7CC88;
    case 56u: goto L_08A7CC9C;
    case 57u: goto L_08A7CCBC;
    case 58u: goto L_08A7CCC4;
    case 59u: goto L_08A7CCDC;
    case 60u: goto L_08A7CCE8;
    case 61u: goto L_08A7CCFC;
    case 62u: goto L_08A7CD08;
    case 63u: goto L_08A7CD1C;
    case 64u: goto L_08A7CD28;
    case 65u: goto L_08A7CD48;
    case 66u: goto L_08A7CD54;
    case 67u: goto L_08A7CD68;
    case 68u: goto L_08A7CD8C;
    case 69u: goto L_08A7CD98;
    case 70u: goto L_08A7CDA8;
    case 71u: goto L_08A7CDCC;
    case 72u: goto L_08A7CDD8;
    case 73u: goto L_08A7CDEC;
    case 74u: goto L_08A7CE10;
    case 75u: goto L_08A7CE1C;
    case 76u: goto L_08A7CE2C;
    case 77u: goto L_08A7CE38;
    case 78u: goto L_08A7CE48;
    case 79u: goto L_08A7CE64;
    case 80u: goto L_08A7CE70;
    case 81u: goto L_08A7CE80;
    case 82u: goto L_08A7CE90;
    case 83u: goto L_08A7CEC8;
    case 84u: goto L_08A7CEFC;
    case 85u: goto L_08A7CF0C;
    case 86u: goto L_08A7CF1C;
    case 87u: goto L_08A7CF28;
    case 88u: goto L_08A7CF44;
    case 89u: goto L_08A7CF4C;
    case 90u: goto L_08A7CF54;
    case 91u: goto L_08A7CF5C;
    case 92u: goto L_08A7CF64;
    case 93u: goto L_08A7CF74;
    case 94u: goto L_08A7CF90;
    case 95u: goto L_08A7CFAC;
    case 96u: goto L_08A7CFC8;
    case 97u: goto L_08A7CFDC;
    case 98u: goto L_08A7CFF0;
    case 99u: goto L_08A7D000;
    case 100u: goto L_08A7D008;
    case 101u: goto L_08A7D014;
    case 102u: goto L_08A7D01C;
    case 103u: goto L_08A7D020;
    case 104u: goto L_08A7D02C;
    case 105u: goto L_08A7D038;
    case 106u: goto L_08A7D054;
    case 107u: goto L_08A7D05C;
    case 108u: goto L_08A7D064;
    case 109u: goto L_08A7D070;
    case 110u: goto L_08A7D078;
    case 111u: goto L_08A7D080;
    case 112u: goto L_08A7D088;
    case 113u: goto L_08A7D090;
    case 114u: goto L_08A7D094;
    case 115u: goto L_08A7D0A0;
    case 116u: goto L_08A7D0A8;
    case 117u: goto L_08A7D0B8;
    case 118u: goto L_08A7D0D0;
    case 119u: goto L_08A7D0D8;
    case 120u: goto L_08A7D0E4;
    case 121u: goto L_08A7D0F4;
    case 122u: goto L_08A7D104;
    case 123u: goto L_08A7D11C;
    case 124u: goto L_08A7D124;
    case 125u: goto L_08A7D12C;
    case 126u: goto L_08A7D144;
    case 127u: goto L_08A7D14C;
    case 128u: goto L_08A7D158;
    case 129u: goto L_08A7D168;
    case 130u: goto L_08A7D178;
    case 131u: goto L_08A7D190;
    case 132u: goto L_08A7D198;
    case 133u: goto L_08A7D1A4;
    case 134u: goto L_08A7D1B4;
    case 135u: goto L_08A7D1C4;
    case 136u: goto L_08A7D1D0;
    case 137u: goto L_08A7D1EC;
    case 138u: goto L_08A7D1F4;
    case 139u: goto L_08A7D210;
    case 140u: goto L_08A7D214;
    case 141u: goto L_08A7D228;
    case 142u: goto L_08A7D238;
    case 143u: goto L_08A7D23C;
    case 144u: goto L_08A7D244;
    case 145u: goto L_08A7D258;
    case 146u: goto L_08A7D270;
    case 147u: goto L_08A7D274;
    case 148u: goto L_08A7D280;
    case 149u: goto L_08A7D2BC;
    case 150u: goto L_08A7D2C4;
    case 151u: goto L_08A7D2C8;
    case 152u: goto L_08A7D2D0;
    case 153u: goto L_08A7D2DC;
    case 154u: goto L_08A7D314;
    case 155u: goto L_08A7D31C;
    case 156u: goto L_08A7D32C;
    case 157u: goto L_08A7D334;
    case 158u: goto L_08A7D344;
    case 159u: goto L_08A7D350;
    case 160u: goto L_08A7D360;
    case 161u: goto L_08A7D370;
    case 162u: goto L_08A7D380;
    case 163u: goto L_08A7D390;
    case 164u: goto L_08A7D398;
    case 165u: goto L_08A7D3B4;
    case 166u: goto L_08A7D3C4;
    case 167u: goto L_08A7D3CC;
    case 168u: goto L_08A7D3D4;
    case 169u: goto L_08A7D3E8;
    case 170u: goto L_08A7D3F0;
    case 171u: goto L_08A7D400;
    case 172u: goto L_08A7D410;
    case 173u: goto L_08A7D420;
    case 174u: goto L_08A7D430;
    case 175u: goto L_08A7D440;
    case 176u: goto L_08A7D45C;
    case 177u: goto L_08A7D464;
    case 178u: goto L_08A7D46C;
    case 179u: goto L_08A7D474;
    case 180u: goto L_08A7D4AC;
    case 181u: goto L_08A7D4DC;
    case 182u: goto L_08A7D4E4;
    case 183u: goto L_08A7D4F4;
    case 184u: goto L_08A7D4FC;
    case 185u: goto L_08A7D50C;
    case 186u: goto L_08A7D518;
    case 187u: goto L_08A7D528;
    case 188u: goto L_08A7D538;
    case 189u: goto L_08A7D548;
    case 190u: goto L_08A7D558;
    case 191u: goto L_08A7D560;
    case 192u: goto L_08A7D580;
    case 193u: goto L_08A7D588;
    case 194u: goto L_08A7D590;
    case 195u: goto L_08A7D5A4;
    case 196u: goto L_08A7D5B0;
    case 197u: goto L_08A7D5C0;
    case 198u: goto L_08A7D5D0;
    case 199u: goto L_08A7D5E0;
    case 200u: goto L_08A7D5F0;
    case 201u: goto L_08A7D60C;
    case 202u: goto L_08A7D618;
    case 203u: goto L_08A7D62C;
    case 204u: goto L_08A7D634;
    case 205u: goto L_08A7D63C;
    case 206u: goto L_08A7D644;
    case 207u: goto L_08A7D64C;
    case 208u: goto L_08A7D65C;
    case 209u: goto L_08A7D664;
    case 210u: goto L_08A7D66C;
    case 211u: goto L_08A7D674;
    case 212u: goto L_08A7D6AC;
    case 213u: goto L_08A7D6C4;
    case 214u: goto L_08A7D6D4;
    case 215u: goto L_08A7D6E0;
    case 216u: goto L_08A7D6F4;
    case 217u: goto L_08A7D6FC;
    case 218u: goto L_08A7D704;
    case 219u: goto L_08A7D70C;
    case 220u: goto L_08A7D714;
    case 221u: goto L_08A7D724;
    case 222u: goto L_08A7D72C;
    case 223u: goto L_08A7D734;
    case 224u: goto L_08A7D73C;
    case 225u: goto L_08A7D774;
    case 226u: goto L_08A7D78C;
    case 227u: goto L_08A7D7A4;
    case 228u: goto L_08A7D7D0;
    case 229u: goto L_08A7D7D8;
    case 230u: goto L_08A7D7E8;
    case 231u: goto L_08A7D7F0;
    case 232u: goto L_08A7D7F4;
    case 233u: goto L_08A7D810;
    case 234u: goto L_08A7D824;
    case 235u: goto L_08A7D830;
    case 236u: goto L_08A7D840;
    case 237u: goto L_08A7D84C;
    case 238u: goto L_08A7D858;
    case 239u: goto L_08A7D864;
    case 240u: goto L_08A7D870;
    case 241u: goto L_08A7D880;
    case 242u: goto L_08A7D88C;
    case 243u: goto L_08A7D898;
    case 244u: goto L_08A7D8B0;
    case 245u: goto L_08A7D8C4;
    case 246u: goto L_08A7D8D0;
    case 247u: goto L_08A7D8E0;
    case 248u: goto L_08A7D8F0;
    case 249u: goto L_08A7D8F4;
    case 250u: goto L_08A7D900;
    case 251u: goto L_08A7D914;
    case 252u: goto L_08A7D91C;
    case 253u: goto L_08A7D924;
    case 254u: goto L_08A7D92C;
    case 255u: goto L_08A7D934;
    case 256u: goto L_08A7D944;
    case 257u: goto L_08A7D954;
    case 258u: goto L_08A7D95C;
    case 259u: goto L_08A7D968;
    case 260u: goto L_08A7D97C;
    case 261u: goto L_08A7D98C;
    case 262u: goto L_08A7D994;
    case 263u: goto L_08A7D9A0;
    case 264u: goto L_08A7D9AC;
    case 265u: goto L_08A7D9C4;
    case 266u: goto L_08A7D9CC;
    case 267u: goto L_08A7D9DC;
    case 268u: goto L_08A7D9E8;
    case 269u: goto L_08A7D9F8;
    case 270u: goto L_08A7DA04;
    case 271u: goto L_08A7DA0C;
    case 272u: goto L_08A7DA28;
    case 273u: goto L_08A7DA30;
    case 274u: goto L_08A7DA38;
    case 275u: goto L_08A7DA4C;
    case 276u: goto L_08A7DA58;
    case 277u: goto L_08A7DA68;
    case 278u: goto L_08A7DA78;
    case 279u: goto L_08A7DA80;
    case 280u: goto L_08A7DA8C;
    case 281u: goto L_08A7DAA4;
    case 282u: goto L_08A7DAB8;
    case 283u: goto L_08A7DAC4;
    case 284u: goto L_08A7DAD4;
    case 285u: goto L_08A7DAE4;
    case 286u: goto L_08A7DAE8;
    case 287u: goto L_08A7DAF4;
    case 288u: goto L_08A7DB08;
    case 289u: goto L_08A7DB10;
    case 290u: goto L_08A7DB18;
    case 291u: goto L_08A7DB20;
    case 292u: goto L_08A7DB28;
    case 293u: goto L_08A7DB30;
    case 294u: goto L_08A7DB38;
    case 295u: goto L_08A7DB44;
    case 296u: goto L_08A7DB54;
    case 297u: goto L_08A7DB5C;
    case 298u: goto L_08A7DB64;
    case 299u: goto L_08A7DB6C;
    case 300u: goto L_08A7DB88;
    case 301u: goto L_08A7DB90;
    case 302u: goto L_08A7DB98;
    case 303u: goto L_08A7DB9C;
    case 304u: goto L_08A7DBBC;
    case 305u: goto L_08A7DC30;
    case 306u: goto L_08A7DC38;
    case 307u: goto L_08A7DC4C;
    case 308u: goto L_08A7DC58;
    case 309u: goto L_08A7DC68;
    case 310u: goto L_08A7DC6C;
    case 311u: goto L_08A7DC7C;
    case 312u: goto L_08A7DCA0;
    case 313u: goto L_08A7DCBC;
    case 314u: goto L_08A7DCC0;
    case 315u: goto L_08A7DCD8;
    case 316u: goto L_08A7DCE0;
    case 317u: goto L_08A7DD04;
    case 318u: goto L_08A7DD0C;
    case 319u: goto L_08A7DD14;
    case 320u: goto L_08A7DD2C;
    case 321u: goto L_08A7DD30;
    case 322u: goto L_08A7DD48;
    case 323u: goto L_08A7DD54;
    case 324u: goto L_08A7DD78;
    case 325u: goto L_08A7DD80;
    case 326u: goto L_08A7DD98;
    case 327u: goto L_08A7DDC8;
    case 328u: goto L_08A7DDE0;
    case 329u: goto L_08A7DDF4;
    case 330u: goto L_08A7DE08;
    case 331u: goto L_08A7DE0C;
    case 332u: goto L_08A7DE1C;
    case 333u: goto L_08A7DE30;
    case 334u: goto L_08A7DE34;
    case 335u: goto L_08A7DE44;
    case 336u: goto L_08A7DE68;
    case 337u: goto L_08A7DE78;
    case 338u: goto L_08A7DE80;
    case 339u: goto L_08A7DE8C;
    case 340u: goto L_08A7DE94;
    case 341u: goto L_08A7DE9C;
    case 342u: goto L_08A7DEB8;
    case 343u: goto L_08A7DEC0;
    case 344u: goto L_08A7DED0;
    case 345u: goto L_08A7DEDC;
    case 346u: goto L_08A7DEE4;
    case 347u: goto L_08A7DEEC;
    case 348u: goto L_08A7DEF4;
    case 349u: goto L_08A7DEF8;
    case 350u: goto L_08A7DF08;
    case 351u: goto L_08A7DF0C;
    case 352u: goto L_08A7DF44;
    case 353u: goto L_08A7DF50;
    case 354u: goto L_08A7DF60;
    case 355u: goto L_08A7DF70;
    case 356u: goto L_08A7DF78;
    case 357u: goto L_08A7DF88;
    case 358u: goto L_08A7DF90;
    case 359u: goto L_08A7DFAC;
    case 360u: goto L_08A7DFB4;
    case 361u: goto L_08A7DFCC;
    case 362u: goto L_08A7DFD8;
    case 363u: goto L_08A7E008;
    case 364u: goto L_08A7E01C;
    case 365u: goto L_08A7E024;
    case 366u: goto L_08A7E038;
    case 367u: goto L_08A7E044;
    case 368u: goto L_08A7E050;
    case 369u: goto L_08A7E054;
    case 370u: goto L_08A7E074;
    case 371u: goto L_08A7E07C;
    case 372u: goto L_08A7E08C;
    case 373u: goto L_08A7E0A0;
    case 374u: goto L_08A7E0AC;
    case 375u: goto L_08A7E0B8;
    case 376u: goto L_08A7E0C0;
    case 377u: goto L_08A7E0CC;
    case 378u: goto L_08A7E0DC;
    case 379u: goto L_08A7E0EC;
    case 380u: goto L_08A7E0F4;
    case 381u: goto L_08A7E0F8;
    case 382u: goto L_08A7E108;
    case 383u: goto L_08A7E110;
    case 384u: goto L_08A7E12C;
    case 385u: goto L_08A7E134;
    case 386u: goto L_08A7E14C;
    case 387u: goto L_08A7E158;
    case 388u: goto L_08A7E17C;
    case 389u: goto L_08A7E190;
    case 390u: goto L_08A7E198;
    case 391u: goto L_08A7E1A8;
    case 392u: goto L_08A7E1B4;
    case 393u: goto L_08A7E1C8;
    case 394u: goto L_08A7E1D0;
    case 395u: goto L_08A7E1EC;
    case 396u: goto L_08A7E1F4;
    case 397u: goto L_08A7E200;
    case 398u: goto L_08A7E210;
    case 399u: goto L_08A7E21C;
    case 400u: goto L_08A7E224;
    case 401u: goto L_08A7E234;
    case 402u: goto L_08A7E278;
    case 403u: goto L_08A7E2CC;
    case 404u: goto L_08A7E2D8;
    case 405u: goto L_08A7E378;
    case 406u: goto L_08A7E384;
    case 407u: goto L_08A7E3CC;
    case 408u: goto L_08A7E3DC;
    case 409u: goto L_08A7E3E4;
    case 410u: goto L_08A7E3EC;
    case 411u: goto L_08A7E424;
    case 412u: goto L_08A7E454;
    case 413u: goto L_08A7E460;
    case 414u: goto L_08A7E464;
    case 415u: goto L_08A7E488;
    case 416u: goto L_08A7E504;
    case 417u: goto L_08A7E57C;
    case 418u: goto L_08A7E5E8;
    case 419u: goto L_08A7E61C;
    case 420u: goto L_08A7E624;
    case 421u: goto L_08A7E62C;
    case 422u: goto L_08A7E638;
    case 423u: goto L_08A7E650;
    case 424u: goto L_08A7E6C4;
    case 425u: goto L_08A7E6CC;
    case 426u: goto L_08A7E6E0;
    case 427u: goto L_08A7E754;
    case 428u: goto L_08A7E7C4;
    case 429u: goto L_08A7E7CC;
    case 430u: goto L_08A7E83C;
    case 431u: goto L_08A7E844;
    case 432u: goto L_08A7E84C;
    case 433u: goto L_08A7E864;
    case 434u: goto L_08A7E884;
    case 435u: goto L_08A7E88C;
    case 436u: goto L_08A7E8A4;
    case 437u: goto L_08A7E8B0;
    case 438u: goto L_08A7E8C4;
    case 439u: goto L_08A7E8D0;
    case 440u: goto L_08A7E8E4;
    case 441u: goto L_08A7E8EC;
    case 442u: goto L_08A7E8FC;
    case 443u: goto L_08A7E91C;
    case 444u: goto L_08A7E924;
    case 445u: goto L_08A7E93C;
    case 446u: goto L_08A7E948;
    case 447u: goto L_08A7E95C;
    case 448u: goto L_08A7E968;
    case 449u: goto L_08A7E97C;
    case 450u: goto L_08A7E984;
    case 451u: goto L_08A7E994;
    case 452u: goto L_08A7E9B4;
    case 453u: goto L_08A7E9BC;
    case 454u: goto L_08A7E9D4;
    case 455u: goto L_08A7E9E0;
    case 456u: goto L_08A7E9F4;
    case 457u: goto L_08A7EA00;
    case 458u: goto L_08A7EA14;
    case 459u: goto L_08A7EA1C;
    case 460u: goto L_08A7EA2C;
    case 461u: goto L_08A7EA4C;
    case 462u: goto L_08A7EA54;
    case 463u: goto L_08A7EA6C;
    case 464u: goto L_08A7EA78;
    case 465u: goto L_08A7EA8C;
    case 466u: goto L_08A7EA98;
    case 467u: goto L_08A7EAAC;
    case 468u: goto L_08A7EAB8;
    case 469u: goto L_08A7EAD8;
    case 470u: goto L_08A7EAE4;
    case 471u: goto L_08A7EAF8;
    case 472u: goto L_08A7EB1C;
    case 473u: goto L_08A7EB28;
    case 474u: goto L_08A7EB38;
    case 475u: goto L_08A7EB5C;
    case 476u: goto L_08A7EB68;
    case 477u: goto L_08A7EB7C;
    case 478u: goto L_08A7EBA0;
    case 479u: goto L_08A7EBAC;
    case 480u: goto L_08A7EBBC;
    case 481u: goto L_08A7EBC8;
    case 482u: goto L_08A7EBD8;
    case 483u: goto L_08A7EBF4;
    case 484u: goto L_08A7EC00;
    case 485u: goto L_08A7EC10;
    case 486u: goto L_08A7EC20;
    case 487u: goto L_08A7EC68;
    case 488u: goto L_08A7ECB4;
    case 489u: goto L_08A7ECBC;
    case 490u: goto L_08A7ECD0;
    case 491u: goto L_08A7ED14;
    case 492u: goto L_08A7ED28;
    case 493u: goto L_08A7ED3C;
    case 494u: goto L_08A7ED58;
    case 495u: goto L_08A7ED6C;
    case 496u: goto L_08A7ED8C;
    case 497u: goto L_08A7ED98;
    case 498u: goto L_08A7EDA0;
    case 499u: goto L_08A7EDA8;
    case 500u: goto L_08A7EDB0;
    case 501u: goto L_08A7EDB8;
    case 502u: goto L_08A7EDC0;
    case 503u: goto L_08A7EDC8;
    case 504u: goto L_08A7EDD0;
    case 505u: goto L_08A7EDDC;
    case 506u: goto L_08A7EDE8;
    case 507u: goto L_08A7EDF0;
    case 508u: goto L_08A7EE0C;
    case 509u: goto L_08A7EE28;
    case 510u: goto L_08A7EE38;
    case 511u: goto L_08A7EE4C;
    case 512u: goto L_08A7EE6C;
    case 513u: goto L_08A7EE80;
    case 514u: goto L_08A7EE8C;
    case 515u: goto L_08A7EE94;
    case 516u: goto L_08A7EEA4;
    case 517u: goto L_08A7EEC0;
    case 518u: goto L_08A7EED8;
    case 519u: goto L_08A7EEDC;
    case 520u: goto L_08A7EEE0;
    case 521u: goto L_08A7EEE8;
    case 522u: goto L_08A7EF04;
    case 523u: goto L_08A7EF1C;
    case 524u: goto L_08A7EF24;
    case 525u: goto L_08A7EF38;
    case 526u: goto L_08A7EF48;
    case 527u: goto L_08A7EF54;
    case 528u: goto L_08A7EF5C;
    case 529u: goto L_08A7EF64;
    case 530u: goto L_08A7EF70;
    case 531u: goto L_08A7EF7C;
    case 532u: goto L_08A7EF84;
    case 533u: goto L_08A7EF8C;
    case 534u: goto L_08A7EF94;
    case 535u: goto L_08A7EFC0;
    case 536u: goto L_08A7EFD0;
    case 537u: goto L_08A7EFEC;
    case 538u: goto L_08A7EFFC;
    case 539u: goto L_08A7F00C;
    case 540u: goto L_08A7F020;
    case 541u: goto L_08A7F028;
    case 542u: goto L_08A7F030;
    case 543u: goto L_08A7F048;
    case 544u: goto L_08A7F080;
    case 545u: goto L_08A7F0CC;
    case 546u: goto L_08A7F0D4;
    case 547u: goto L_08A7F0E8;
    case 548u: goto L_08A7F12C;
    case 549u: goto L_08A7F140;
    case 550u: goto L_08A7F154;
    case 551u: goto L_08A7F170;
    case 552u: goto L_08A7F184;
    case 553u: goto L_08A7F1A4;
    case 554u: goto L_08A7F1B0;
    case 555u: goto L_08A7F1B8;
    case 556u: goto L_08A7F1C0;
    case 557u: goto L_08A7F1C8;
    case 558u: goto L_08A7F1D0;
    case 559u: goto L_08A7F1D8;
    case 560u: goto L_08A7F1E0;
    case 561u: goto L_08A7F1E8;
    case 562u: goto L_08A7F208;
    case 563u: goto L_08A7F210;
    case 564u: goto L_08A7F218;
    case 565u: goto L_08A7F21C;
    case 566u: goto L_08A7F228;
    case 567u: goto L_08A7F230;
    case 568u: goto L_08A7F238;
    case 569u: goto L_08A7F240;
    case 570u: goto L_08A7F248;
    case 571u: goto L_08A7F264;
    case 572u: goto L_08A7F280;
    case 573u: goto L_08A7F290;
    case 574u: goto L_08A7F2A4;
    case 575u: goto L_08A7F2C4;
    case 576u: goto L_08A7F2D8;
    case 577u: goto L_08A7F2E4;
    case 578u: goto L_08A7F2EC;
    case 579u: goto L_08A7F2FC;
    case 580u: goto L_08A7F318;
    case 581u: goto L_08A7F330;
    case 582u: goto L_08A7F334;
    case 583u: goto L_08A7F338;
    case 584u: goto L_08A7F340;
    case 585u: goto L_08A7F35C;
    case 586u: goto L_08A7F374;
    case 587u: goto L_08A7F37C;
    case 588u: goto L_08A7F390;
    case 589u: goto L_08A7F3A0;
    case 590u: goto L_08A7F3AC;
    case 591u: goto L_08A7F3B4;
    case 592u: goto L_08A7F3BC;
    case 593u: goto L_08A7F3C8;
    case 594u: goto L_08A7F3D4;
    case 595u: goto L_08A7F3DC;
    case 596u: goto L_08A7F3E4;
    case 597u: goto L_08A7F3EC;
    case 598u: goto L_08A7F418;
    case 599u: goto L_08A7F428;
    case 600u: goto L_08A7F444;
    case 601u: goto L_08A7F454;
    case 602u: goto L_08A7F464;
    case 603u: goto L_08A7F478;
    case 604u: goto L_08A7F480;
    case 605u: goto L_08A7F488;
    case 606u: goto L_08A7F4A0;
    case 607u: goto L_08A7F4D8;
    case 608u: goto L_08A7F4E8;
    case 609u: goto L_08A7F510;
    case 610u: goto L_08A7F530;
    case 611u: goto L_08A7F538;
    case 612u: goto L_08A7F548;
    case 613u: goto L_08A7F558;
    case 614u: goto L_08A7F55C;
    case 615u: goto L_08A7F564;
    case 616u: goto L_08A7F56C;
    case 617u: goto L_08A7F584;
    case 618u: goto L_08A7F588;
    case 619u: goto L_08A7F58C;
    case 620u: goto L_08A7F5BC;
    case 621u: goto L_08A7F5C4;
    case 622u: goto L_08A7F5C8;
    case 623u: goto L_08A7F5D0;
    case 624u: goto L_08A7F694;
    case 625u: goto L_08A7F6B4;
    case 626u: goto L_08A7F76C;
    case 627u: goto L_08A7F770;
    case 628u: goto L_08A7F77C;
    case 629u: goto L_08A7F788;
    case 630u: goto L_08A7F78C;
    case 631u: goto L_08A7F798;
    case 632u: goto L_08A7F7A0;
    case 633u: goto L_08A7F7A4;
    case 634u: goto L_08A7F7B0;
    case 635u: goto L_08A7F7B8;
    case 636u: goto L_08A7F7BC;
    case 637u: goto L_08A7F7C8;
    case 638u: goto L_08A7F7D0;
    case 639u: goto L_08A7F7D4;
    case 640u: goto L_08A7F7E0;
    case 641u: goto L_08A7F7E8;
    case 642u: goto L_08A7F7EC;
    case 643u: goto L_08A7F7F8;
    case 644u: goto L_08A7F800;
    case 645u: goto L_08A7F810;
    case 646u: goto L_08A7F820;
    case 647u: goto L_08A7F82C;
    case 648u: goto L_08A7F830;
    case 649u: goto L_08A7F83C;
    case 650u: goto L_08A7F85C;
    case 651u: goto L_08A7F87C;
    case 652u: goto L_08A7F8AC;
    case 653u: goto L_08A7F940;
    case 654u: goto L_08A7F948;
    case 655u: goto L_08A7F950;
    case 656u: goto L_08A7F954;
    case 657u: goto L_08A7F980;
    case 658u: goto L_08A7F988;
    case 659u: goto L_08A7F990;
    case 660u: goto L_08A7FA3C;
    case 661u: goto L_08A7FA60;
    case 662u: goto L_08A7FA68;
    case 663u: goto L_08A7FA7C;
    case 664u: goto L_08A7FA84;
    case 665u: goto L_08A7FA88;
    case 666u: goto L_08A7FAA4;
    case 667u: goto L_08A7FAB0;
    case 668u: goto L_08A7FAC0;
    case 669u: goto L_08A7FACC;
    case 670u: goto L_08A7FAEC;
    case 671u: goto L_08A7FAF4;
    case 672u: goto L_08A7FAFC;
    case 673u: goto L_08A7FB04;
    case 674u: goto L_08A7FB0C;
    case 675u: goto L_08A7FB20;
    case 676u: goto L_08A7FB24;
    case 677u: goto L_08A7FB28;
    case 678u: goto L_08A7FB30;
    case 679u: goto L_08A7FB34;
    case 680u: goto L_08A7FB50;
    case 681u: goto L_08A7FB64;
    case 682u: goto L_08A7FB94;
    case 683u: goto L_08A7FBB0;
    case 684u: goto L_08A7FBD0;
    case 685u: goto L_08A7FBD4;
    case 686u: goto L_08A7FBE0;
    case 687u: goto L_08A7FBE4;
    case 688u: goto L_08A7FBF4;
    case 689u: goto L_08A7FC0C;
    case 690u: goto L_08A7FC18;
    case 691u: goto L_08A7FC20;
    case 692u: goto L_08A7FC34;
    case 693u: goto L_08A7FC6C;
    case 694u: goto L_08A7FD20;
    case 695u: goto L_08A7FD34;
    case 696u: goto L_08A7FD44;
    case 697u: goto L_08A7FD50;
    case 698u: goto L_08A7FD8C;
    case 699u: goto L_08A7FDA0;
    case 700u: goto L_08A7FDB0;
    case 701u: goto L_08A7FDBC;
    case 702u: goto L_08A7FDDC;
    case 703u: goto L_08A7FDE4;
    case 704u: goto L_08A7FDEC;
    case 705u: goto L_08A7FDF0;
    case 706u: goto L_08A7FE08;
    case 707u: goto L_08A7FE18;
    case 708u: goto L_08A7FE30;
    case 709u: goto L_08A7FE40;
    case 710u: goto L_08A7FE4C;
    case 711u: goto L_08A7FE60;
    case 712u: goto L_08A7FE90;
    case 713u: goto L_08A7FEA0;
    case 714u: goto L_08A7FEB0;
    case 715u: goto L_08A7FECC;
    case 716u: goto L_08A7FED8;
    case 717u: goto L_08A7FEE8;
    case 718u: goto L_08A7FEF8;
    case 719u: goto L_08A7FF04;
    case 720u: goto L_08A7FF4C;
    case 721u: goto L_08A7FF84;
    case 722u: goto L_08A7FFAC;
    case 723u: goto L_08A7FFCC;
    case 724u: goto L_08A7FFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A7C004:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f22)) && f12 == hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7C054;
      }
      goto L_08A7C024;
    }
}
}
L_08A7C024:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f13) || std::isnan(hot_regs.f22)) && hot_regs.f13 == hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7C054;
      }
      goto L_08A7C034;
    }
L_08A7C034:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f24 = ctx.fpr[24];
{
    std::uint32_t g28 = ctx.gpr[28];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-5528)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-5524)));
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const float fs = f12; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-5520)));
    { const float fs = f13; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = f14; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A7C07C;
      }
      goto L_08A7C054;
    }
}
}
L_08A7C054:
    hot_regs.g31 = (0x08A7C05Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7C05Cu) goto L_08A7C05C;
    return;
L_08A7C05C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f24 = ctx.fpr[24];
{
    std::uint32_t g28 = ctx.gpr[28];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-5528)));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-5524)));
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const float fs = f12; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-5520)));
    { const float fs = f13; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f14; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_08A7C07C;
}
}
L_08A7C07C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[21]);
    hot_regs.g4 = (8448u << 16u);
    ctx.gpr[21] = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (16585u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 4059u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (22016u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (22528u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(255));
    hot_regs.f15 = hot_regs.f22 / hot_regs.f15;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (16128u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (57088u << 16u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(170));
    ctx.gpr[19] = (0u | 1u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (22272u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (22528u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.f15 = hot_regs.f15 + ctx.fpr[16];
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f14));
    hot_regs.g6 = (57600u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    hot_regs.g6 = (57856u << 16u);
    { const float fs = hot_regs.f15; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f14));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-1));
    hot_regs.f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[20] = (hot_regs.g5 + ctx.gpr[30]);
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11))))));
    hot_regs.g4 = (hot_regs.g4 & 63u);
    ctx.gpr[11] = (ctx.gpr[19] << (hot_regs.g4 & 31u));
    hot_regs.g4 = (hot_regs.g5 & 63u);
    hot_regs.g6 = (ctx.gpr[21] + ctx.gpr[22]);
    hot_regs.g2 = (ctx.gpr[19] << (hot_regs.g4 & 31u));
    ctx.gpr[9] = (hot_regs.g6 + ctx.gpr[23]);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    ctx.gpr[10] = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A7C20Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 499u, 0x088DFA08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7C20Cu) goto L_08A7C20C;
    return;
L_08A7C20C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11))))));
    hot_regs.g4 = (hot_regs.g4 & 63u);
    ctx.gpr[11] = (ctx.gpr[19] << (hot_regs.g4 & 31u));
    hot_regs.g4 = (hot_regs.g6 & 63u);
    ctx.gpr[18] = (ctx.gpr[22] + static_cast<std::uint32_t>(-64));
    hot_regs.g2 = (ctx.gpr[19] << (hot_regs.g4 & 31u));
    hot_regs.g5 = (ctx.gpr[18] + ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[23]);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A7C250u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 499u, 0x088DFA08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7C250u) goto L_08A7C250;
    return;
L_08A7C250:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5516)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5512)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5508)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    { const float fs = hot_regs.f14; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11))))));
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g4 & 63u);
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    ctx.gpr[11] = (ctx.gpr[19] << (hot_regs.g4 & 31u));
    hot_regs.f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f14));
    hot_regs.g4 = (hot_regs.g6 & 63u);
    hot_regs.g2 = (ctx.gpr[19] << (hot_regs.g4 & 31u));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g5 = (ctx.gpr[20] + ctx.gpr[22]);
    hot_regs.f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f14));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[22]);
    ctx.gpr[8] = (0u | 0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[23] = (hot_regs.g7 + ctx.gpr[21]);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08A7C2CCu);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 499u, 0x088DFA08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7C2CCu) goto L_08A7C2CC;
    return;
L_08A7C2CC:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11))))));
    ctx.gpr[11] = (hot_regs.g4 & 63u);
    hot_regs.g4 = (hot_regs.g6 & 63u);
    hot_regs.g2 = (ctx.gpr[19] << (hot_regs.g4 & 31u));
    hot_regs.g5 = (ctx.gpr[18] + ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[22]);
    ctx.gpr[11] = (ctx.gpr[19] << (ctx.gpr[11] & 31u));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08A7C30Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 499u, 0x088DFA08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7C30Cu) goto L_08A7C30C;
    return;
L_08A7C30C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (8448u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (52224u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-8780)));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-8748)));
    g4 = (g4 << 2u);
    g4 = (g28 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-8788)));
    g6 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-8736)));
    g8 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    g7 = (53760u << 16u);
    g9 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 | g7);
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    g7 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(29552)));
    g5 = (g4 & g5);
    g7 = (g7 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(29552), g7);
    g7 = (39936u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 | g7);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 >> 8u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(29552), g5);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    g9 = (40192u << 16u);
    g4 = (g4 & g5);
    g6 = (g6 | g9);
    g5 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(29552)));
    g4 = (g6 | g4);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-8744)));
    g5 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(29552)));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 1u));
    g6 = (g6 >> 31u);
    g4 = (g4 + g6);
    g7 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-8740)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 1u));
    f12 = std::bit_cast<float>(g4);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 1u));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g4 = (g4 >> 31u);
    g4 = (g7 + g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 1u));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(29552), g5);
    f13 = std::bit_cast<float>(g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    g5 = (g5 >> 8u);
    g5 = (g5 | g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) ^ 0x80000000u);
    g5 = (std::bit_cast<std::uint32_t>(f13));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g4 = (g5 >> 8u);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    g4 = (g4 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (std::bit_cast<std::uint32_t>(f20));
    g4 = (g4 >> 8u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    g4 = (g4 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (std::bit_cast<std::uint32_t>(f20));
    g4 = (g4 >> 8u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    g4 = (g4 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (0u | 4096u);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-8744)));
    g4 = (g5 - g4);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 1u));
    g6 = (g6 >> 31u);
    g4 = (g4 + g6);
    g6 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-8740)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 1u));
    g5 = (g5 - g6);
    g4 = (g4 << 4u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 1u));
    g7 = (19456u << 16u);
    g8 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g6 = (g6 >> 31u);
    g4 = (g4 | g7);
    g5 = (g5 + g6);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 1u));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 << 4u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    g5 = (19712u << 16u);
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 | g5);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g7 = (54272u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-8744)));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-8740)));
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 & 1023u);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g7);
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 << 10u);
    g6 = (g6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g6);
    g6 = (54528u << 16u);
    g5 = (g5 | g6);
    g4 = (g4 & 1023u);
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g5 | g4);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g7 = (5376u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-8744)));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-8740)));
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g7);
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 << 10u);
    g6 = (g6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g6);
    g6 = (5632u << 16u);
    g5 = (g5 | g6);
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g5 | g4);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (59136u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (8704u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (8960u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (51200u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (57088u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (57344u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (57600u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
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
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f20 = f20;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08A7C6A8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-464));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(436), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32304));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(440), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(444), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(448), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(452), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(456), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(460), hot_regs.g31);
    hot_regs.g31 = (0x08A7C6ECu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1980)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 139u, 0x08890984u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7C6ECu) goto L_08A7C6EC;
    return;
L_08A7C6EC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1980)));
    hot_regs.g31 = (0x08A7C6F8u);
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 116u, 0x088907E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7C6F8u) goto L_08A7C6F8;
    return;
L_08A7C6F8:
    hot_regs.g5 = (2234u << 16u);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g6 = (0u | 108u);
    hot_regs.g31 = (0x08A7C710u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(7908));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7C710u) goto L_08A7C710;
    return;
L_08A7C710:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1980)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    hot_regs.g31 = (0x08A7C798u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 121u, 0x08890828u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7C798u) goto L_08A7C798;
    return;
L_08A7C798:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    g5 = (0u | 65535u);
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    g5 = (17302u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g5);
    g5 = (17056u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(g5);
    g5 = (16880u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(g5);
    ctx.gpr[17] = (hot_regs.g2 + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(60));
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(72));
    g5 = (16840u << 16u);
    { const bool branch_taken = g4 == 0u;
    ctx.fpr[28] = std::bit_cast<float>(g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7C7E4;
      }
      goto L_08A7C7D4;
    }
}
L_08A7C7D4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7C7F4;
      }
      goto L_08A7C7E4;
    }
}
L_08A7C7E4:
    hot_regs.g31 = (0x08A7C7ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 274u, 0x088954BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7C7ECu) goto L_08A7C7EC;
    return;
L_08A7C7EC:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(hot_regs.g4));
    goto L_08A7C7F4;
L_08A7C7F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(10048));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7C900;
      }
      goto L_08A7C81C;
    }
}
L_08A7C81C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), hot_regs.g7);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f22));
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
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), hot_regs.g6);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7C9DC;
      }
      goto L_08A7C900;
    }
L_08A7C900:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), hot_regs.g7);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f22));
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
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), hot_regs.g6);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), hot_regs.g5);
    goto L_08A7C9DC;
L_08A7C9DC:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g6 = (0u | 9u);
    hot_regs.g31 = (0x08A7C9F0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 233u, 0x088618A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7C9F0u) goto L_08A7C9F0;
    return;
L_08A7C9F0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g16 = (g4 + g16);
    g16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(112))))));
    g4 = (0u | 1u);
    { const bool branch_taken = g16 == g4;
    g4 = (0u | 37u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A7CAA4;
      }
      goto L_08A7CA20;
    }
}
L_08A7CA20:
    { const bool branch_taken = ctx.gpr[16] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A7CAA4;
      }
      goto L_08A7CA28;
    }
L_08A7CA28:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f24 = ctx.fpr[24];
    float f26 = ctx.fpr[26];
    float f28 = ctx.fpr[28];
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    f12 = f12 / f24;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    g6 = (2216u << 16u);
    hot_regs.g4 = (g29 + static_cast<std::uint32_t>(108));
    g6 = (g6 + static_cast<std::uint32_t>(-19252));
    hot_regs.g5 = (0u | 3u);
    f13 = f13 / f24;
    f14 = f14 / f24;
    f15 = f15 / f24;
    f16 = f16 / f24;
    f17 = f17 / f24;
    f12 = f12 + f26;
    f13 = f13 + f28;
    f14 = f14 + f26;
    f15 = f15 + f28;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(f12));
    f12 = f16 + f26;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(f14));
    f13 = f17 + f28;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g31 = (0x08A7CA9Cu);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(f13));
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    goto L_08A7DBBC;
}
}
L_08A7CA9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7CE90;
      }
      goto L_08A7CAA4;
    }
L_08A7CAA4:
    hot_regs.g31 = (0x08A7CAACu);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(272));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 291u, 0x089D1AECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7CAACu) goto L_08A7CAAC;
    return;
L_08A7CAAC:
    hot_regs.g6 = (49864u << 16u);
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(12));
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08A7CAC8u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 334u, 0x08A79B48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7CAC8u) goto L_08A7CAC8;
    return;
L_08A7CAC8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    ctx.set_fpu_condition((f12 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7CAF0;
      }
      goto L_08A7CAE8;
    }
}
}
L_08A7CAE8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A7CAF0;
L_08A7CAF0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(280)));
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    hot_regs.f12 = f12;
        goto L_08A7CB14;
    }
    goto L_08A7CB08;
}
}
L_08A7CB08:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    hot_regs.f12 = f12;
    goto L_08A7CB14;
}
}
L_08A7CB14:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(284)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
        goto L_08A7CB34;
    }
    goto L_08A7CB28;
L_08A7CB28:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    hot_regs.f12 = f12;
    goto L_08A7CB34;
}
}
L_08A7CB34:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(276)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7CB50;
      }
      goto L_08A7CB48;
    }
L_08A7CB48:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A7CB50;
L_08A7CB50:
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(24));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A7CB64u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 334u, 0x08A79B48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7CB64u) goto L_08A7CB64;
    return;
L_08A7CB64:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    ctx.set_fpu_condition((f12 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7CB8C;
      }
      goto L_08A7CB84;
    }
}
}
L_08A7CB84:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A7CB8C;
L_08A7CB8C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(280)));
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    hot_regs.f12 = f12;
        goto L_08A7CBB0;
    }
    goto L_08A7CBA4;
}
}
L_08A7CBA4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    hot_regs.f12 = f12;
    goto L_08A7CBB0;
}
}
L_08A7CBB0:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(284)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
        goto L_08A7CBD0;
    }
    goto L_08A7CBC4;
L_08A7CBC4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    hot_regs.f12 = f12;
    goto L_08A7CBD0;
}
}
L_08A7CBD0:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(276)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7CBEC;
      }
      goto L_08A7CBE4;
    }
L_08A7CBE4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A7CBEC;
L_08A7CBEC:
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(36));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A7CC00u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 334u, 0x08A79B48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7CC00u) goto L_08A7CC00;
    return;
L_08A7CC00:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    ctx.set_fpu_condition((f12 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7CC28;
      }
      goto L_08A7CC20;
    }
}
}
L_08A7CC20:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A7CC28;
L_08A7CC28:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(280)));
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    hot_regs.f12 = f12;
        goto L_08A7CC4C;
    }
    goto L_08A7CC40;
}
}
L_08A7CC40:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    hot_regs.f12 = f12;
    goto L_08A7CC4C;
}
}
L_08A7CC4C:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(284)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
        goto L_08A7CC6C;
    }
    goto L_08A7CC60;
L_08A7CC60:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    hot_regs.f12 = f12;
    goto L_08A7CC6C;
}
}
L_08A7CC6C:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(276)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7CC88;
      }
      goto L_08A7CC80;
    }
L_08A7CC80:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A7CC88;
L_08A7CC88:
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A7CC9Cu);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 334u, 0x08A79B48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7CC9Cu) goto L_08A7CC9C;
    return;
L_08A7CC9C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    ctx.set_fpu_condition((f12 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7CCC4;
      }
      goto L_08A7CCBC;
    }
}
}
L_08A7CCBC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A7CCC4;
L_08A7CCC4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(280)));
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    hot_regs.f12 = f12;
        goto L_08A7CCE8;
    }
    goto L_08A7CCDC;
}
}
L_08A7CCDC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    hot_regs.f12 = f12;
    goto L_08A7CCE8;
}
}
L_08A7CCE8:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(284)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
        goto L_08A7CD08;
    }
    goto L_08A7CCFC;
L_08A7CCFC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    hot_regs.f12 = f12;
    goto L_08A7CD08;
}
}
L_08A7CD08:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(276)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(272)));
        goto L_08A7CD28;
    }
    goto L_08A7CD1C;
L_08A7CD1C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    hot_regs.f12 = f12;
    goto L_08A7CD28;
}
}
L_08A7CD28:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f12 = f12 / ctx.fpr[24];
    g5 = (0u | 49u);
    f12 = f12 + ctx.fpr[26];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g5 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
        goto L_08A7CD48;
    }
    goto L_08A7CD48;
}
}
L_08A7CD48:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_08A7CD54;
    }
    goto L_08A7CD54;
L_08A7CD54:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (g5 != 0u) {
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
        goto L_08A7CD68;
    }
    goto L_08A7CD68;
}
L_08A7CD68:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(280)));
    f12 = f12 / ctx.fpr[24];
    g5 = (0u | 49u);
    f12 = f12 + ctx.fpr[26];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g5 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
        goto L_08A7CD8C;
    }
    goto L_08A7CD8C;
}
}
L_08A7CD8C:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_08A7CD98;
    }
    goto L_08A7CD98;
L_08A7CD98:
    ctx.gpr[16] = (0u | 49u);
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 49 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[16] = (hot_regs.g4 | 0u);
        goto L_08A7CDA8;
    }
    goto L_08A7CDA8;
L_08A7CDA8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(284)));
    f12 = f12 / ctx.fpr[24];
    g5 = (0u | 49u);
    f12 = f12 + ctx.fpr[28];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g5 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
        goto L_08A7CDCC;
    }
    goto L_08A7CDCC;
}
}
L_08A7CDCC:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_08A7CDD8;
    }
    goto L_08A7CDD8;
L_08A7CDD8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (g5 != 0u) {
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
        goto L_08A7CDEC;
    }
    goto L_08A7CDEC;
}
L_08A7CDEC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(276)));
    f12 = f12 / ctx.fpr[24];
    g5 = (0u | 49u);
    f12 = f12 + ctx.fpr[28];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g5 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
        goto L_08A7CE10;
    }
    goto L_08A7CE10;
}
}
L_08A7CE10:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_08A7CE1C;
    }
    goto L_08A7CE1C;
L_08A7CE1C:
    ctx.gpr[18] = (0u | 49u);
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 49 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[18] = (hot_regs.g4 | 0u);
        goto L_08A7CE2C;
    }
    goto L_08A7CE2C;
L_08A7CE2C:
    hot_regs.g4 = (ctx.gpr[16] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7CE90;
      }
      goto L_08A7CE38;
    }
L_08A7CE38:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    g4 = (ctx.gpr[18] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (ctx.gpr[17] << 4u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7CE80;
      }
      goto L_08A7CE48;
    }
}
L_08A7CE48:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g21 = ctx.gpr[21];
    g5 = (ctx.gpr[17] + g4);
    g4 = (g4 + g5);
    g4 = (g4 + g5);
    g4 = (ctx.gpr[19] + g4);
    g21 = (g4 << 6u);
    g4 = (g4 << 3u);
    g21 = (g21 - g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[21] = g21;
    goto L_08A7CE64;
}
L_08A7CE64:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    hot_regs.g31 = (0x08A7CE70u);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 688u, 0x08A7B4CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7CE70u) goto L_08A7CE70;
    return;
L_08A7CE70:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (g20 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (ctx.gpr[18] < g20 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(2800));
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_08A7CE64;
      }
      goto L_08A7CE80;
    }
}
L_08A7CE80:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (ctx.gpr[16] < g19 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A7CE38;
      }
      goto L_08A7CE90;
    }
}
L_08A7CE90:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(416)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(420)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(424)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(428)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(432)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(436)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(440)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(444)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(448)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(452)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(456)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(460)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(464));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A7CEC8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), g16);
    g16 = (g4 | 0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f20));
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), hot_regs.g31);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A7CF0C;
      }
      goto L_08A7CEFC;
    }
}
L_08A7CEFC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    ctx.gpr[17] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_08A7CF0C;
}
L_08A7CF0C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 7466u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A7CF28;
      }
      goto L_08A7CF1C;
    }
L_08A7CF1C:
    hot_regs.g4 = (17302u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A7CF28;
L_08A7CF28:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 10u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7CF64;
      }
      goto L_08A7CF44;
    }
}
L_08A7CF44:
    hot_regs.g31 = (0x08A7CF4Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 51u, 0x08AD0598u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7CF4Cu) goto L_08A7CF4C;
    return;
L_08A7CF4C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7CF5C;
      }
      goto L_08A7CF54;
    }
L_08A7CF54:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 2u);
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7CF5C;
    }
L_08A7CF5C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7CF64;
    }
L_08A7CF64:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A7D0A8;
      }
      goto L_08A7CF74;
    }
L_08A7CF74:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 12u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7CFAC;
      }
      goto L_08A7CF90;
    }
}
L_08A7CF90:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 8u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D0A8;
      }
      goto L_08A7CFAC;
    }
}
L_08A7CFAC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 8u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D008;
      }
      goto L_08A7CFC8;
    }
}
L_08A7CFC8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (512u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D008;
      }
      goto L_08A7CFDC;
    }
}
L_08A7CFDC:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7D000;
      }
      goto L_08A7CFF0;
    }
}
L_08A7CFF0:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    ctx.gpr[18] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_08A7D000;
}
L_08A7D000:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (aot_mem.aot_load16(g18 + static_cast<std::uint32_t>(58)));
    g18 = (g18 & 3u);
    ctx.gpr[18] = g18;
    goto L_08A7D008;
}
L_08A7D008:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    hot_regs.g4 = g4;
        goto L_08A7D020;
    }
    goto L_08A7D014;
}
L_08A7D014:
    hot_regs.g31 = (0x08A7D01Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D01Cu) goto L_08A7D01C;
    return;
L_08A7D01C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    goto L_08A7D020;
L_08A7D020:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g31 = (0x08A7D02Cu);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 174u, 0x08954B84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D02Cu) goto L_08A7D02C;
    return;
L_08A7D02C:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D0A8;
      }
      goto L_08A7D038;
    }
L_08A7D038:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (8u << 16u);
    g4 = (g4 & hot_regs.g5);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D080;
      }
      goto L_08A7D054;
    }
}
L_08A7D054:
    hot_regs.g31 = (0x08A7D05Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D05Cu) goto L_08A7D05C;
    return;
L_08A7D05C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D078;
      }
      goto L_08A7D064;
    }
L_08A7D064:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D088;
      }
      goto L_08A7D070;
    }
L_08A7D070:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
      if (branch_taken) {
          goto L_08A7D094;
      }
      goto L_08A7D078;
    }
L_08A7D078:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 2u);
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7D080;
    }
L_08A7D080:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7D088;
    }
L_08A7D088:
    hot_regs.g31 = (0x08A7D090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D090u) goto L_08A7D090;
    return;
L_08A7D090:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    goto L_08A7D094;
L_08A7D094:
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A7D0A0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 191u, 0x08954C44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D0A0u) goto L_08A7D0A0;
    return;
L_08A7D0A0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7D0A8;
    }
L_08A7D0A8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (0u | 3u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A7D1A4;
      }
      goto L_08A7D0B8;
    }
L_08A7D0B8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g31 = (0x08A7D0D0u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 248u, 0x08941B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D0D0u) goto L_08A7D0D0;
    return;
L_08A7D0D0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D14C;
      }
      goto L_08A7D0D8;
    }
L_08A7D0D8:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A7D12C;
      }
      goto L_08A7D0E4;
    }
L_08A7D0E4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7D104;
      }
      goto L_08A7D0F4;
    }
}
L_08A7D0F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (ctx.gpr[19] << 2u);
    g4 = (g4 + hot_regs.g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_08A7D104;
}
L_08A7D104:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08A7D11Cu);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D11Cu) goto L_08A7D11C;
    return;
L_08A7D11C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D12C;
      }
      goto L_08A7D124;
    }
L_08A7D124:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A7D78C;
      }
      goto L_08A7D12C;
    }
L_08A7D12C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(72));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08A7D144u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D144u) goto L_08A7D144;
    return;
L_08A7D144:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7D14C;
    }
L_08A7D14C:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A7D78C;
      }
      goto L_08A7D158;
    }
L_08A7D158:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7D178;
      }
      goto L_08A7D168;
    }
}
L_08A7D168:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (ctx.gpr[19] << 2u);
    g4 = (g4 + hot_regs.g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_08A7D178;
}
L_08A7D178:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08A7D190u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D190u) goto L_08A7D190;
    return;
L_08A7D190:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D78C;
      }
      goto L_08A7D198;
    }
L_08A7D198:
    hot_regs.g4 = (0u | 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08A7D78C;
      }
      goto L_08A7D1A4;
    }
L_08A7D1A4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A7D6C4;
      }
      goto L_08A7D1B4;
    }
L_08A7D1B4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (0u | 4u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A7D6C4;
      }
      goto L_08A7D1C4;
    }
L_08A7D1C4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D464;
      }
      goto L_08A7D1D0;
    }
L_08A7D1D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 14u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D464;
      }
      goto L_08A7D1EC;
    }
}
L_08A7D1EC:
    hot_regs.g31 = (0x08A7D1F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D1F4u) goto L_08A7D1F4;
    return;
L_08A7D1F4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (2237u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-28736));
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(104)));
    g6 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g6 == 0u;
    g4 = (hot_regs.g2 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A7D244;
      }
      goto L_08A7D210;
    }
}
L_08A7D210:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    goto L_08A7D214;
L_08A7D214:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(16)));
    g7 = (g7 < hot_regs.g4 ? 1u : 0u);
    g7 = (g7 & 255u);
    if (g7 != 0u) {
    g6 = (g6 + static_cast<std::uint32_t>(12));
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
        goto L_08A7D238;
    }
    goto L_08A7D228;
}
L_08A7D228:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (g6 | 0u);
    g6 = (hot_regs.g5 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A7D23C;
      }
      goto L_08A7D238;
    }
}
L_08A7D238:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    goto L_08A7D23C;
L_08A7D23C:
    if (hot_regs.g6 != 0u) {
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
        goto L_08A7D214;
    }
    goto L_08A7D244;
L_08A7D244:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (2237u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-28736));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(104)));
    if (hot_regs.g5 == g6) {
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g6 = g6;
        goto L_08A7D274;
    }
    goto L_08A7D258;
}
L_08A7D258:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(0u));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    g4 = (g4 < hot_regs.g6 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    g4 = (2237u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D280;
      }
      goto L_08A7D270;
    }
}
L_08A7D270:
    hot_regs.g4 = (2237u << 16u);
    goto L_08A7D274;
L_08A7D274:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(-28736));
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(104)));
    g4 = (2237u << 16u);
    hot_regs.g4 = g4;
    goto L_08A7D280;
}
L_08A7D280:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), g5);
    g4 = (g4 + static_cast<std::uint32_t>(-28736));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(104)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), g5);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    g4 = (g5 ^ g4);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_08A7D2C4;
    }
    goto L_08A7D2BC;
}
L_08A7D2BC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A7D2C8;
      }
      goto L_08A7D2C4;
    }
L_08A7D2C4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    goto L_08A7D2C8;
L_08A7D2C8:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D45C;
      }
      goto L_08A7D2D0;
    }
L_08A7D2D0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    hot_regs.g4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A7D45C;
      }
      goto L_08A7D2DC;
    }
L_08A7D2DC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(80)));
    g4 = (g4 + static_cast<std::uint32_t>(112));
    g5 = (g5 << 5u);
    g6 = (0u - g5);
    g5 = (g5 << 2u);
    g6 = (g6 + g5);
    g5 = (g5 << 2u);
    g17 = (g6 + g5);
    g17 = (g17 + g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g17 + static_cast<std::uint32_t>(0))))));
    g5 = (0u | 16u);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A7D45C;
      }
      goto L_08A7D314;
    }
}
L_08A7D314:
    hot_regs.g31 = (0x08A7D31Cu);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D31Cu) goto L_08A7D31C;
    return;
L_08A7D31C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A7D344;
      }
      goto L_08A7D32C;
    }
L_08A7D32C:
    hot_regs.g31 = (0x08A7D334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D334u) goto L_08A7D334;
    return;
L_08A7D334:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(1280))))));
    g4 = (g4 & 16u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D45C;
      }
      goto L_08A7D344;
    }
}
L_08A7D344:
    hot_regs.g4 = (0u | 3u);
    { const bool branch_taken = ctx.gpr[17] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A7D3D4;
      }
      goto L_08A7D350;
    }
L_08A7D350:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 246u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A7D3D4;
      }
      goto L_08A7D360;
    }
L_08A7D360:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 237u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A7D3D4;
      }
      goto L_08A7D370;
    }
L_08A7D370:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-966));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D3D4;
      }
      goto L_08A7D380;
    }
}
L_08A7D380:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(1956)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D3D4;
      }
      goto L_08A7D390;
    }
}
L_08A7D390:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D3C4;
      }
      goto L_08A7D398;
    }
L_08A7D398:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (1u << 16u);
    g4 = (g4 & hot_regs.g5);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D3C4;
      }
      goto L_08A7D3B4;
    }
}
L_08A7D3B4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(380)));
    hot_regs.g5 = (0u | 4u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A7D3D4;
      }
      goto L_08A7D3C4;
    }
L_08A7D3C4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D440;
      }
      goto L_08A7D3CC;
    }
L_08A7D3CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D3E8;
      }
      goto L_08A7D3D4;
    }
L_08A7D3D4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g2 = (0u | 2u);
    g4 = (g4 | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7D3E8;
    }
}
L_08A7D3E8:
    hot_regs.g31 = (0x08A7D3F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D3F0u) goto L_08A7D3F0;
    return;
L_08A7D3F0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A7D440;
      }
      goto L_08A7D400;
    }
L_08A7D400:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 214u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A7D440;
      }
      goto L_08A7D410;
    }
L_08A7D410:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 250u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A7D440;
      }
      goto L_08A7D420;
    }
L_08A7D420:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 219u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A7D440;
      }
      goto L_08A7D430;
    }
L_08A7D430:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 278u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A7D45C;
      }
      goto L_08A7D440;
    }
L_08A7D440:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10080), g16);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-33));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(76), g4);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 2u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7D45C;
    }
}
L_08A7D45C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D60C;
      }
      goto L_08A7D464;
    }
L_08A7D464:
    hot_regs.g31 = (0x08A7D46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D46Cu) goto L_08A7D46C;
    return;
L_08A7D46C:
    { const bool branch_taken = hot_regs.g2 != ctx.gpr[16];
    hot_regs.g4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A7D60C;
      }
      goto L_08A7D474;
    }
L_08A7D474:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(80)));
    g4 = (g4 + static_cast<std::uint32_t>(112));
    g5 = (g5 << 5u);
    g6 = (0u - g5);
    g5 = (g5 << 2u);
    g6 = (g6 + g5);
    g5 = (g5 << 2u);
    g17 = (g6 + g5);
    g17 = (g17 + g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g17 + static_cast<std::uint32_t>(0))))));
    g5 = (0u | 16u);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A7D60C;
      }
      goto L_08A7D4AC;
    }
}
L_08A7D4AC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    g5 = (g4 + g4);
    hot_regs.g6 = (g4 << 8u);
    g4 = (g4 + g5);
    g4 = (g4 << 5u);
    g5 = (2238u << 16u);
    g4 = (hot_regs.g6 + g4);
    g5 = (g5 + static_cast<std::uint32_t>(-6992));
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7D60C;
      }
      goto L_08A7D4DC;
    }
}
L_08A7D4DC:
    hot_regs.g31 = (0x08A7D4E4u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D4E4u) goto L_08A7D4E4;
    return;
L_08A7D4E4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A7D50C;
      }
      goto L_08A7D4F4;
    }
L_08A7D4F4:
    hot_regs.g31 = (0x08A7D4FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D4FCu) goto L_08A7D4FC;
    return;
L_08A7D4FC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(1280))))));
    g4 = (g4 & 16u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D60C;
      }
      goto L_08A7D50C;
    }
}
L_08A7D50C:
    hot_regs.g4 = (0u | 3u);
    { const bool branch_taken = ctx.gpr[17] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A7D590;
      }
      goto L_08A7D518;
    }
L_08A7D518:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 246u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A7D590;
      }
      goto L_08A7D528;
    }
L_08A7D528:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 237u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A7D590;
      }
      goto L_08A7D538;
    }
L_08A7D538:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-966));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D590;
      }
      goto L_08A7D548;
    }
}
L_08A7D548:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(1956)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D590;
      }
      goto L_08A7D558;
    }
}
L_08A7D558:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D580;
      }
      goto L_08A7D560;
    }
L_08A7D560:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    hot_regs.g5 = (16384u << 16u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(208)));
    g4 = (g4 & hot_regs.g5);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D590;
      }
      goto L_08A7D580;
    }
}
L_08A7D580:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D5F0;
      }
      goto L_08A7D588;
    }
L_08A7D588:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
      if (branch_taken) {
          goto L_08A7D5A4;
      }
      goto L_08A7D590;
    }
L_08A7D590:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g2 = (0u | 2u);
    g4 = (g4 | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7D5A4;
    }
}
L_08A7D5A4:
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A7D5F0;
      }
      goto L_08A7D5B0;
    }
L_08A7D5B0:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 214u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A7D5F0;
      }
      goto L_08A7D5C0;
    }
L_08A7D5C0:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 250u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A7D5F0;
      }
      goto L_08A7D5D0;
    }
L_08A7D5D0:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 219u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A7D5F0;
      }
      goto L_08A7D5E0;
    }
L_08A7D5E0:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 278u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A7D60C;
      }
      goto L_08A7D5F0;
    }
L_08A7D5F0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10080), g16);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-33));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(76), g4);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 2u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7D60C;
    }
}
L_08A7D60C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D66C;
      }
      goto L_08A7D618;
    }
L_08A7D618:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (8u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D66C;
      }
      goto L_08A7D62C;
    }
}
L_08A7D62C:
    hot_regs.g31 = (0x08A7D634u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D634u) goto L_08A7D634;
    return;
L_08A7D634:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D664;
      }
      goto L_08A7D63C;
    }
L_08A7D63C:
    hot_regs.g31 = (0x08A7D644u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 375u, 0x08B11994u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D644u) goto L_08A7D644;
    return;
L_08A7D644:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D664;
      }
      goto L_08A7D64C;
    }
L_08A7D64C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g4 = (g4 & 16u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D674;
      }
      goto L_08A7D65C;
    }
}
L_08A7D65C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7D664;
    }
L_08A7D664:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 2u);
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7D66C;
    }
L_08A7D66C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7D674;
    }
L_08A7D674:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(10048));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08A7D6ACu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 165u, 0x089451D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D6ACu) goto L_08A7D6AC;
    return;
L_08A7D6AC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-129));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), g4);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7D6C4;
    }
}
L_08A7D6C4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g4 = (g4 & 4096u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D78C;
      }
      goto L_08A7D6D4;
    }
}
L_08A7D6D4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D734;
      }
      goto L_08A7D6E0;
    }
L_08A7D6E0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (8u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D734;
      }
      goto L_08A7D6F4;
    }
}
L_08A7D6F4:
    hot_regs.g31 = (0x08A7D6FCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D6FCu) goto L_08A7D6FC;
    return;
L_08A7D6FC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D72C;
      }
      goto L_08A7D704;
    }
L_08A7D704:
    hot_regs.g31 = (0x08A7D70Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 375u, 0x08B11994u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D70Cu) goto L_08A7D70C;
    return;
L_08A7D70C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D72C;
      }
      goto L_08A7D714;
    }
L_08A7D714:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g4 = (g4 & 16u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D73C;
      }
      goto L_08A7D724;
    }
}
L_08A7D724:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7D72C;
    }
L_08A7D72C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 2u);
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7D734;
    }
L_08A7D734:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7D73C;
    }
L_08A7D73C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(10048));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08A7D774u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 165u, 0x089451D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D774u) goto L_08A7D774;
    return;
L_08A7D774:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-129));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), g4);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7D78C;
    }
}
L_08A7D78C:
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
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(10048));
    hot_regs.g31 = (0x08A7D7A4u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D7A4u) goto L_08A7D7A4;
    return;
L_08A7D7A4:
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
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17317u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7D7F4;
      }
      goto L_08A7D7D0;
    }
L_08A7D7D0:
    hot_regs.g31 = (0x08A7D7D8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 396u, 0x08AAE0ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D7D8u) goto L_08A7D7D8;
    return;
L_08A7D7D8:
    ctx.set_fpu_condition((hot_regs.f20 < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7D7F4;
      }
      goto L_08A7D7E8;
    }
L_08A7D7E8:
    hot_regs.g31 = (0x08A7D7F0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 396u, 0x08AAE0ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D7F0u) goto L_08A7D7F0;
    return;
L_08A7D7F0:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A7D7F4;
L_08A7D7F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 8u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D84C;
      }
      goto L_08A7D810;
    }
}
L_08A7D810:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (512u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D84C;
      }
      goto L_08A7D824;
    }
}
L_08A7D824:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(58)));
    hot_regs.g4 = g4;
        goto L_08A7D840;
    }
    goto L_08A7D830;
}
L_08A7D830:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(58)));
    g4 = (g4 | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D84C;
      }
      goto L_08A7D840;
    }
}
L_08A7D840:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-9));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
    goto L_08A7D84C;
}
L_08A7D84C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A7D858u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 384u, 0x08AAE058u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D858u) goto L_08A7D858;
    return;
L_08A7D858:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D9CC;
      }
      goto L_08A7D864;
    }
L_08A7D864:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 0u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(58)));
    hot_regs.g4 = g4;
        goto L_08A7D880;
    }
    goto L_08A7D870;
}
L_08A7D870:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(58)));
    g4 = (g4 | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D88C;
      }
      goto L_08A7D880;
    }
}
L_08A7D880:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-9));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
    goto L_08A7D88C;
}
L_08A7D88C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D8B0;
      }
      goto L_08A7D898;
    }
L_08A7D898:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(64));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08A7D8B0u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D8B0u) goto L_08A7D8B0;
    return;
L_08A7D8B0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08A7D8D0;
      }
      goto L_08A7D8C4;
    }
L_08A7D8C4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (0x08A7D8D0u);
    hot_regs.g6 = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 455u, 0x0895B470u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D8D0u) goto L_08A7D8D0;
    return;
L_08A7D8D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(57)));
    g4 = (static_cast<std::int32_t>(g4) < 239 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (0u | 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D8F0;
      }
      goto L_08A7D8E0;
    }
}
L_08A7D8E0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(57)));
    g4 = (g4 + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D8F4;
      }
      goto L_08A7D8F0;
    }
}
L_08A7D8F0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A7D8F4;
L_08A7D8F4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D98C;
      }
      goto L_08A7D900;
    }
L_08A7D900:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (8u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D98C;
      }
      goto L_08A7D914;
    }
}
L_08A7D914:
    hot_regs.g31 = (0x08A7D91Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D91Cu) goto L_08A7D91C;
    return;
L_08A7D91C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D97C;
      }
      goto L_08A7D924;
    }
L_08A7D924:
    hot_regs.g31 = (0x08A7D92Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 375u, 0x08B11994u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D92Cu) goto L_08A7D92C;
    return;
L_08A7D92C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D97C;
      }
      goto L_08A7D934;
    }
L_08A7D934:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(57)));
    hot_regs.g5 = (0u | 255u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A7D95C;
      }
      goto L_08A7D944;
    }
L_08A7D944:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(58)));
    g4 = (g4 & 64u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D9A0;
      }
      goto L_08A7D954;
    }
}
L_08A7D954:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08A7D994;
      }
      goto L_08A7D95C;
    }
L_08A7D95C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A7D968u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 165u, 0x089451D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D968u) goto L_08A7D968;
    return;
L_08A7D968:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g2 = (0u | 0u);
    g4 = (g4 | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7D97C;
    }
}
L_08A7D97C:
    hot_regs.g4 = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(hot_regs.g4));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 2u);
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7D98C;
    }
L_08A7D98C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7D994;
    }
L_08A7D994:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 16u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7D9C4;
      }
      goto L_08A7D9A0;
    }
}
L_08A7D9A0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A7D9ACu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 165u, 0x089451D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7D9ACu) goto L_08A7D9AC;
    return;
L_08A7D9AC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-129));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), g4);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7D9C4;
    }
}
L_08A7D9C4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7D9CC;
    }
L_08A7D9CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(58)));
    g4 = (g4 & 32u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7DA38;
      }
      goto L_08A7D9DC;
    }
}
L_08A7D9DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 0u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(58)));
    hot_regs.g4 = g4;
        goto L_08A7D9F8;
    }
    goto L_08A7D9E8;
}
L_08A7D9E8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(58)));
    g4 = (g4 | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7DA04;
      }
      goto L_08A7D9F8;
    }
}
L_08A7D9F8:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-9));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
    goto L_08A7DA04;
}
L_08A7DA04:
    hot_regs.g31 = (0x08A7DA0Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 396u, 0x08AAE0ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7DA0Cu) goto L_08A7DA0C;
    return;
L_08A7DA0C:
{
    float f12 = hot_regs.f12;
    hot_regs.g4 = (16880u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    f12 = hot_regs.f20 - f12;
    ctx.set_fpu_condition((ctx.fpr[0] <= f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7DB98;
      }
      goto L_08A7DA28;
    }
}
L_08A7DA28:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7DB98;
      }
      goto L_08A7DA30;
    }
L_08A7DA30:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 3u);
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7DA38;
    }
L_08A7DA38:
    hot_regs.g4 = (16800u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A7DA4Cu);
    hot_regs.f12 = hot_regs.f20 - hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 401u, 0x08AAE140u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7DA4Cu) goto L_08A7DA4C;
    return;
L_08A7DA4C:
    hot_regs.g4 = (0u | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A7DA68;
      }
      goto L_08A7DA58;
    }
L_08A7DA58:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(58)));
    g4 = (g4 | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7DA78;
      }
      goto L_08A7DA68;
    }
}
L_08A7DA68:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(58)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-9));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
    goto L_08A7DA78;
}
L_08A7DA78:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7DB64;
      }
      goto L_08A7DA80;
    }
L_08A7DA80:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7DAA4;
      }
      goto L_08A7DA8C;
    }
L_08A7DA8C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(64));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08A7DAA4u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7DAA4u) goto L_08A7DAA4;
    return;
L_08A7DAA4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08A7DAC4;
      }
      goto L_08A7DAB8;
    }
L_08A7DAB8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (0x08A7DAC4u);
    hot_regs.g6 = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 455u, 0x0895B470u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7DAC4u) goto L_08A7DAC4;
    return;
L_08A7DAC4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(57)));
    g4 = (static_cast<std::int32_t>(g4) < 239 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (0u | 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7DAE4;
      }
      goto L_08A7DAD4;
    }
}
L_08A7DAD4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(57)));
    g4 = (g4 + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7DAE8;
      }
      goto L_08A7DAE4;
    }
}
L_08A7DAE4:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A7DAE8;
L_08A7DAE8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7DB20;
      }
      goto L_08A7DAF4;
    }
L_08A7DAF4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (8u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7DB20;
      }
      goto L_08A7DB08;
    }
}
L_08A7DB08:
    hot_regs.g31 = (0x08A7DB10u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7DB10u) goto L_08A7DB10;
    return;
L_08A7DB10:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7DB28;
      }
      goto L_08A7DB18;
    }
L_08A7DB18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7DB54;
      }
      goto L_08A7DB20;
    }
L_08A7DB20:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7DB28;
    }
L_08A7DB28:
    hot_regs.g31 = (0x08A7DB30u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 375u, 0x08B11994u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7DB30u) goto L_08A7DB30;
    return;
L_08A7DB30:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7DB54;
      }
      goto L_08A7DB38;
    }
L_08A7DB38:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A7DB44u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 165u, 0x089451D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7DB44u) goto L_08A7DB44;
    return;
L_08A7DB44:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g4 = (g4 | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7DB5C;
      }
      goto L_08A7DB54;
    }
}
L_08A7DB54:
    hot_regs.g4 = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A7DB5C;
L_08A7DB5C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 2u);
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7DB64;
    }
L_08A7DB64:
    hot_regs.g31 = (0x08A7DB6Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 396u, 0x08AAE0ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7DB6Cu) goto L_08A7DB6C;
    return;
L_08A7DB6C:
{
    float f12 = hot_regs.f12;
    hot_regs.g4 = (16968u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    f12 = hot_regs.f20 - f12;
    ctx.set_fpu_condition((ctx.fpr[0] <= f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7DB98;
      }
      goto L_08A7DB88;
    }
}
L_08A7DB88:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7DB98;
      }
      goto L_08A7DB90;
    }
L_08A7DB90:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 3u);
      if (branch_taken) {
          goto L_08A7DB9C;
      }
      goto L_08A7DB98;
    }
L_08A7DB98:
    hot_regs.g2 = (0u | 0u);
    goto L_08A7DB9C;
L_08A7DB9C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A7DBBC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), g21);
    g21 = (g4 | 0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g7);
    g4 = (0u | 1u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g5);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[23] = (0u | 9999u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-9999));
    ctx.gpr[8] = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), hot_regs.g31);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g6);
    hot_regs.g4 = g4;
    ctx.gpr[21] = g21;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A7DC7C;
      }
      goto L_08A7DC30;
    }
}
L_08A7DC30:
    hot_regs.g5 = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    goto L_08A7DC38;
L_08A7DC38:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((hot_regs.f14 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7DC58;
      }
      goto L_08A7DC4C;
    }
L_08A7DC4C:
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
      if (branch_taken) {
          goto L_08A7DC6C;
      }
      goto L_08A7DC58;
    }
L_08A7DC58:
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7DC6C;
      }
      goto L_08A7DC68;
    }
L_08A7DC68:
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    goto L_08A7DC6C;
L_08A7DC6C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(hot_regs.g6) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(8));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7DC38;
      }
      goto L_08A7DC7C;
    }
}
L_08A7DC7C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    hot_regs.g4 = (0u | 0u);
    g5 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g6);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08A7DCA0;
}
}
L_08A7DCA0:
{
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.g6 = (g18 << 3u);
    ctx.gpr[16] = (ctx.gpr[21] + hot_regs.g6);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    g18 = (g18 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(g18) >= 0;
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08A7DCC0;
      }
      goto L_08A7DCBC;
    }
}
L_08A7DCBC:
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    goto L_08A7DCC0;
L_08A7DCC0:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(ctx.gpr[23]);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    ctx.set_fpu_condition((hot_regs.f12 < f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[18] << 3u);
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A7DCE0;
      }
      goto L_08A7DCD8;
    }
}
L_08A7DCD8:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08A7DCE0;
}
L_08A7DCE0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g8 = ctx.gpr[8];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[30] = (ctx.gpr[21] + ctx.gpr[17]);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g8 = (std::bit_cast<std::uint32_t>(f12));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(f13));
    { const bool branch_taken = g8 != ctx.gpr[9];
    g8 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(hot_regs.g7) ? 1u : 0u);
    ctx.gpr[8] = g8;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A7DD0C;
      }
      goto L_08A7DD04;
    }
}
}
L_08A7DD04:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7DCA0;
      }
      goto L_08A7DD0C;
    }
L_08A7DD0C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g6);
    hot_regs.g4 = (0u | 0u);
    goto L_08A7DD14;
L_08A7DD14:
{
    std::uint32_t g19 = ctx.gpr[19];
    hot_regs.g6 = (g19 << 3u);
    ctx.gpr[22] = (ctx.gpr[21] + hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    g19 = (g19 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = g19 != hot_regs.g7;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A7DD30;
      }
      goto L_08A7DD2C;
    }
}
L_08A7DD2C:
    ctx.gpr[19] = (0u | 0u);
    goto L_08A7DD30;
L_08A7DD30:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.gpr[20]);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    ctx.set_fpu_condition((hot_regs.f20 <= f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = f12;
        goto L_08A7DD54;
    }
    goto L_08A7DD48;
}
L_08A7DD48:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f20));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = f12;
    goto L_08A7DD54;
}
L_08A7DD54:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g8 = ctx.gpr[8];
    hot_regs.g5 = (ctx.gpr[19] << 3u);
    ctx.gpr[22] = (ctx.gpr[21] + hot_regs.g5);
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    g8 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(f14));
    { const bool branch_taken = g8 != ctx.gpr[9];
    g8 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(hot_regs.g7) ? 1u : 0u);
    ctx.gpr[8] = g8;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A7DD80;
      }
      goto L_08A7DD78;
    }
}
}
L_08A7DD78:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7DD14;
      }
      goto L_08A7DD80;
    }
L_08A7DD80:
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<2u>(hot_regs.f12));
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    ctx.fpr[24] = hot_regs.f13 - hot_regs.f12;
    hot_regs.g4 = (ctx.gpr[21] + hot_regs.g6);
    hot_regs.g31 = (0x08A7DD98u);
    hot_regs.g5 = (ctx.gpr[21] + hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 333u, 0x08A79B24u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7DD98u) goto L_08A7DD98;
    return;
L_08A7DD98:
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const float fs = ctx.fpr[24]; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.f20 = hot_regs.f20 + hot_regs.f14;
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<2u>(hot_regs.f13));
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[28] = hot_regs.f12 - hot_regs.f13;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (ctx.gpr[21] + ctx.gpr[17]);
    hot_regs.g31 = (0x08A7DDC8u);
    hot_regs.g4 = (ctx.gpr[21] + hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 333u, 0x08A79B24u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7DDC8u) goto L_08A7DDC8;
    return;
L_08A7DDC8:
{
    float f12 = hot_regs.f12;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g7;
    ctx.fpr[24] = ctx.fpr[24] + f12;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7DE34;
      }
      goto L_08A7DDE0;
    }
}
L_08A7DDE0:
    hot_regs.f12 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[26] < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7DE0C;
      }
      goto L_08A7DDF4;
    }
L_08A7DDF4:
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7DE0C;
      }
      goto L_08A7DE08;
    }
L_08A7DE08:
    ctx.gpr[23] = (hot_regs.g4 | 0u);
    goto L_08A7DE0C;
L_08A7DE0C:
    ctx.set_fpu_condition((hot_regs.f22 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7DE34;
      }
      goto L_08A7DE1C;
    }
L_08A7DE1C:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f20));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7DE34;
      }
      goto L_08A7DE30;
    }
L_08A7DE30:
    ctx.gpr[20] = (hot_regs.g4 | 0u);
    goto L_08A7DE34;
L_08A7DE34:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(hot_regs.g7) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (0u + static_cast<std::uint32_t>(2800));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7E234;
      }
      goto L_08A7DE44;
    }
}
L_08A7DE44:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    ctx.fpr[28] = std::bit_cast<float>(0u);
    g5 = (g7 << 4u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g7)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g4 = (g7 + g5);
    g5 = (g5 + g4);
    g4 = (g5 + g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), g4);
    g4 = (ctx.lo);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A7DE68;
}
L_08A7DE68:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    g4 = (static_cast<std::int32_t>(g4) < 50 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7DE80;
      }
      goto L_08A7DE78;
    }
}
L_08A7DE78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E234;
      }
      goto L_08A7DE80;
    }
L_08A7DE80:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(g4) < 0;
    g4 = (static_cast<std::int32_t>(ctx.gpr[23]) < 50 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7DF08;
      }
      goto L_08A7DE8C;
    }
}
L_08A7DE8C:
    if (hot_regs.g4 == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
        goto L_08A7DF0C;
    }
    goto L_08A7DE94;
L_08A7DE94:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) < 0;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
      if (branch_taken) {
          goto L_08A7DEB8;
      }
      goto L_08A7DE9C;
    }
L_08A7DE9C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    g4 = (ctx.gpr[23] + g4);
    hot_regs.g5 = (g4 << 6u);
    g4 = (g4 << 3u);
    g4 = (hot_regs.g5 - g4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7DEC0;
      }
      goto L_08A7DEB8;
    }
}
L_08A7DEB8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[17] + hot_regs.g4);
    goto L_08A7DEC0;
L_08A7DEC0:
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A7DF08;
      }
      goto L_08A7DED0;
    }
L_08A7DED0:
    hot_regs.g4 = (0u | 50u);
    { const bool branch_taken = ctx.gpr[16] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A7DEE4;
      }
      goto L_08A7DEDC;
    }
L_08A7DEDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7DF08;
      }
      goto L_08A7DEE4;
    }
L_08A7DEE4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A7DEF8;
      }
      goto L_08A7DEEC;
    }
L_08A7DEEC:
    jump_target = ctx.gpr[23];
    hot_regs.g31 = (0x08A7DEF4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7DEF4u) goto L_08A7DEF4;
    return;
L_08A7DEF4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(56));
    goto L_08A7DEF8;
L_08A7DEF8:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g16) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A7DED0;
      }
      goto L_08A7DF08;
    }
}
L_08A7DF08:
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    goto L_08A7DF0C;
L_08A7DF0C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f20 = hot_regs.f22 + hot_regs.f20;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = ctx.fpr[26] + ctx.fpr[24];
    g4 = (g4 + static_cast<std::uint32_t>(50));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (g5 + static_cast<std::uint32_t>(2800));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g5);
    g17 = (g17 + static_cast<std::uint32_t>(1));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = g17 != g4;
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7E08C;
      }
      goto L_08A7DF44;
    }
}
}
L_08A7DF44:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A7E024;
      }
      goto L_08A7DF50;
    }
L_08A7DF50:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[28]));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = ctx.fpr[24] - ctx.fpr[26];
        goto L_08A7DF70;
    }
    goto L_08A7DF60;
L_08A7DF60:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7DF78;
      }
      goto L_08A7DF70;
    }
}
L_08A7DF70:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08A7DF78;
}
L_08A7DF78:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (g18 | 0u);
    g18 = (g4 + static_cast<std::uint32_t>(-1));
    if (static_cast<std::int32_t>(g18) >= 0) {
    g4 = (g4 << 3u);
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
        goto L_08A7DF90;
    }
    goto L_08A7DF88;
}
L_08A7DF88:
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    hot_regs.g4 = (hot_regs.g4 << 3u);
    goto L_08A7DF90;
L_08A7DF90:
{
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[16] = (ctx.gpr[21] + hot_regs.g4);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    if (hot_regs.g7 == 0u) {
    g5 = (ctx.gpr[18] << 3u);
    hot_regs.g5 = g5;
        goto L_08A7DFB4;
    }
    goto L_08A7DFAC;
}
L_08A7DFAC:
    ctx.gpr[23] = (hot_regs.g5 | 0u);
    hot_regs.g5 = (ctx.gpr[18] << 3u);
    goto L_08A7DFB4;
L_08A7DFB4:
{
    float f12 = hot_regs.f12;
    ctx.gpr[30] = (ctx.gpr[21] + hot_regs.g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = ctx.gpr[17] == hot_regs.g7;
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7DF78;
      }
      goto L_08A7DFCC;
    }
}
L_08A7DFCC:
    hot_regs.g4 = (ctx.gpr[21] + hot_regs.g4);
    hot_regs.g31 = (0x08A7DFD8u);
    hot_regs.g5 = (ctx.gpr[21] + hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 333u, 0x08A79B24u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7DFD8u) goto L_08A7DFD8;
    return;
L_08A7DFD8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f26 = ctx.fpr[26];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    f26 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<2u>(f12));
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    f12 = f13 - f12;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((f26 < ctx.fpr[28]));
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    { const float fs = f12; const float ft = f26; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f14));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = ctx.fpr[24] + f12;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    ctx.fpr[26] = f26;
      if (branch_taken) {
          goto L_08A7E0B8;
      }
      goto L_08A7E008;
    }
}
L_08A7E008:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E0B8;
      }
      goto L_08A7E01C;
    }
L_08A7E01C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_08A7E0B8;
      }
      goto L_08A7E024;
    }
L_08A7E024:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[28]));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7E07C;
      }
      goto L_08A7E038;
    }
}
L_08A7E038:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08A7E044;
}
L_08A7E044:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(g18) >= 0;
    ctx.gpr[23] = (hot_regs.g5 | 0u);
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08A7E054;
      }
      goto L_08A7E050;
    }
}
L_08A7E050:
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    goto L_08A7E054;
L_08A7E054:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g30 = ctx.gpr[30];
    g30 = (ctx.gpr[18] << 3u);
    g30 = (ctx.gpr[21] + g30);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g30 + static_cast<std::uint32_t>(0)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    // nop
    ctx.gpr[30] = g30;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7E044;
      }
      goto L_08A7E074;
    }
}
}
L_08A7E074:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E0B8;
      }
      goto L_08A7E07C;
    }
L_08A7E07C:
{
    float f12 = hot_regs.f12;
    f12 = ctx.fpr[24] - ctx.fpr[26];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7E0B8;
      }
      goto L_08A7E08C;
    }
}
L_08A7E08C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[28]));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7E0AC;
      }
      goto L_08A7E0A0;
    }
}
L_08A7E0A0:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08A7E0B8;
      }
      goto L_08A7E0AC;
    }
L_08A7E0AC:
{
    float f12 = hot_regs.f12;
    f12 = ctx.fpr[24] - ctx.fpr[26];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08A7E0B8;
}
L_08A7E0B8:
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A7E200;
      }
      goto L_08A7E0C0;
    }
L_08A7E0C0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A7E198;
      }
      goto L_08A7E0CC;
    }
L_08A7E0CC:
    ctx.set_fpu_condition((hot_regs.f22 < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f12 = hot_regs.f20 - hot_regs.f22;
        goto L_08A7E0EC;
    }
    goto L_08A7E0DC;
L_08A7E0DC:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7E0F4;
      }
      goto L_08A7E0EC;
    }
}
L_08A7E0EC:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08A7E0F4;
}
L_08A7E0F4:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    goto L_08A7E0F8;
L_08A7E0F8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (g19 | 0u);
    g19 = (g4 + static_cast<std::uint32_t>(1));
    if (g19 != hot_regs.g6) {
    g4 = (g4 << 3u);
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
        goto L_08A7E110;
    }
    goto L_08A7E108;
}
L_08A7E108:
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g4 = (hot_regs.g4 << 3u);
    goto L_08A7E110;
L_08A7E110:
{
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[16] = (ctx.gpr[21] + hot_regs.g4);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f20));
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (hot_regs.g7 == 0u) {
    g5 = (ctx.gpr[19] << 3u);
    hot_regs.g5 = g5;
        goto L_08A7E134;
    }
    goto L_08A7E12C;
}
L_08A7E12C:
    ctx.gpr[20] = (hot_regs.g5 | 0u);
    hot_regs.g5 = (ctx.gpr[19] << 3u);
    goto L_08A7E134;
L_08A7E134:
{
    float f12 = hot_regs.f12;
    ctx.gpr[22] = (ctx.gpr[21] + hot_regs.g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = ctx.gpr[17] == hot_regs.g7;
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7E0F8;
      }
      goto L_08A7E14C;
    }
}
L_08A7E14C:
    hot_regs.g4 = (ctx.gpr[21] + hot_regs.g4);
    hot_regs.g31 = (0x08A7E158u);
    hot_regs.g5 = (ctx.gpr[21] + hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 333u, 0x08A79B24u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7E158u) goto L_08A7E158;
    return;
L_08A7E158:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f22 = hot_regs.f22;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<2u>(f12));
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    f12 = f13 - f12;
    ctx.set_fpu_condition((f22 < ctx.fpr[28]));
    { const float fs = f12; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f20 = hot_regs.f20 + f12;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_08A7E224;
      }
      goto L_08A7E17C;
    }
}
L_08A7E17C:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f20));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E224;
      }
      goto L_08A7E190;
    }
L_08A7E190:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_08A7E224;
      }
      goto L_08A7E198;
    }
L_08A7E198:
    ctx.set_fpu_condition((hot_regs.f22 < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f12 = hot_regs.f20 - hot_regs.f22;
        goto L_08A7E1F4;
    }
    goto L_08A7E1A8;
L_08A7E1A8:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08A7E1B4;
}
L_08A7E1B4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    ctx.gpr[20] = (g4 | 0u);
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    g19 = (g19 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = g19 != g4;
    ctx.gpr[22] = (g19 << 3u);
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A7E1D0;
      }
      goto L_08A7E1C8;
    }
}
L_08A7E1C8:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[19] << 3u);
    goto L_08A7E1D0;
L_08A7E1D0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g22 = ctx.gpr[22];
    g22 = (ctx.gpr[21] + g22);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(0)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
    ctx.gpr[22] = g22;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7E1B4;
      }
      goto L_08A7E1EC;
    }
}
}
L_08A7E1EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E224;
      }
      goto L_08A7E1F4;
    }
L_08A7E1F4:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7E224;
      }
      goto L_08A7E200;
    }
}
L_08A7E200:
    ctx.set_fpu_condition((hot_regs.f22 < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f12 = hot_regs.f20 - hot_regs.f22;
        goto L_08A7E21C;
    }
    goto L_08A7E210;
L_08A7E210:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f20));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08A7E224;
      }
      goto L_08A7E21C;
    }
L_08A7E21C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08A7E224;
}
L_08A7E224:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7DE68;
      }
      goto L_08A7E234;
    }
}
L_08A7E234:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A7E278:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-512));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(472), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32304));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(476), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(480), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(484), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(488), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(492), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(496), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(500), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(504), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(508), hot_regs.g31);
    hot_regs.g31 = (0x08A7E2CCu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1980)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 139u, 0x08890984u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7E2CCu) goto L_08A7E2CC;
    return;
L_08A7E2CC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1980)));
    hot_regs.g31 = (0x08A7E2D8u);
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 116u, 0x088907E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7E2D8u) goto L_08A7E2D8;
    return;
L_08A7E2D8:
    hot_regs.f22 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f13; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f13; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f13; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f14; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1980)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    ctx.gpr[30] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A7E378u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f13));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 121u, 0x08890828u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7E378u) goto L_08A7E378;
    return;
L_08A7E378:
    ctx.gpr[23] = (hot_regs.g2 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08A7E384u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10080), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 129u, 0x08944F6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7E384u) goto L_08A7E384;
    return;
L_08A7E384:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load16(g28 + static_cast<std::uint32_t>(-25492)));
    g5 = (0u | 65535u);
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    g5 = (17302u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(g5);
    g5 = (17056u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(g5);
    g5 = (16880u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(g5);
    g5 = (16840u << 16u);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[30] = std::bit_cast<float>(g5);
    ctx.gpr[19] = (g28 + static_cast<std::uint32_t>(7248));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (g28 + static_cast<std::uint32_t>(7264));
    ctx.gpr[22] = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7E3DC;
      }
      goto L_08A7E3CC;
    }
}
L_08A7E3CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7E3EC;
      }
      goto L_08A7E3DC;
    }
}
L_08A7E3DC:
    hot_regs.g31 = (0x08A7E3E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 274u, 0x088954BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7E3E4u) goto L_08A7E3E4;
    return;
L_08A7E3E4:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(hot_regs.g4));
    goto L_08A7E3EC;
L_08A7E3EC:
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
    hot_regs.g4 = (16768u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7E460;
      }
      goto L_08A7E424;
    }
L_08A7E424:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16250u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 57672u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7E460;
      }
      goto L_08A7E454;
    }
L_08A7E454:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7232), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08A7E464;
      }
      goto L_08A7E460;
    }
L_08A7E460:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7232), static_cast<std::uint8_t>(0u));
    goto L_08A7E464;
L_08A7E464:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7E504;
      }
      goto L_08A7E488;
    }
L_08A7E488:
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
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
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E57C;
      }
      goto L_08A7E504;
    }
L_08A7E504:
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
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
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(224));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
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
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A7E57C;
L_08A7E57C:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    hot_regs.g4 = (15948u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(132)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(148)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 9u);
    hot_regs.g31 = (0x08A7E5E8u);
    hot_regs.g7 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 239u, 0x088619ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7E5E8u) goto L_08A7E5E8;
    return;
L_08A7E5E8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7640), static_cast<std::uint8_t>(0u));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g16 = (g4 + g16);
    g16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(112))))));
    g4 = (0u | 1u);
    { const bool branch_taken = g16 == g4;
    g4 = (0u | 37u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A7E844;
      }
      goto L_08A7E61C;
    }
}
L_08A7E61C:
    { const bool branch_taken = ctx.gpr[16] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A7E844;
      }
      goto L_08A7E624;
    }
L_08A7E624:
    hot_regs.g31 = (0x08A7E62Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 39u, 0x089603D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7E62Cu) goto L_08A7E62C;
    return;
L_08A7E62C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_08A7E6CC;
      }
      goto L_08A7E638;
    }
L_08A7E638:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7E6CC;
      }
      goto L_08A7E650;
    }
}
L_08A7E650:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f26 = ctx.fpr[26];
    float f28 = ctx.fpr[28];
    float f30 = ctx.fpr[30];
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    f12 = f12 / f26;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    g6 = (2216u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-20068));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 3u);
    f13 = f13 / f26;
    f14 = f14 / f26;
    f15 = f15 / f26;
    f16 = f16 / f26;
    f17 = f17 / f26;
    f12 = f12 + f28;
    f13 = f13 + f30;
    f14 = f14 + f28;
    f15 = f15 + f30;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(f12));
    f12 = f16 + f28;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(f14));
    f13 = f17 + f30;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g31 = (0x08A7E6C4u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(f13));
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    goto L_08A7DBBC;
}
}
L_08A7E6C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E83C;
      }
      goto L_08A7E6CC;
    }
L_08A7E6CC:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (2216u << 16u);
    ctx.set_fpu_condition((hot_regs.f20 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    g17 = (g17 + static_cast<std::uint32_t>(-5016));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A7E7CC;
      }
      goto L_08A7E6E0;
    }
}
L_08A7E6E0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f26 = ctx.fpr[26];
    float f28 = ctx.fpr[28];
    float f30 = ctx.fpr[30];
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    f12 = f12 / f26;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    g6 = (2216u << 16u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 3u);
    g6 = (g6 + static_cast<std::uint32_t>(-3968));
    f13 = f13 / f26;
    f14 = f14 / f26;
    f15 = f15 / f26;
    f16 = f16 / f26;
    f17 = f17 / f26;
    f12 = f12 + f28;
    f13 = f13 + f30;
    f14 = f14 + f28;
    f15 = f15 + f30;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(f12));
    f12 = f16 + f28;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(f14));
    f13 = f17 + f30;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g31 = (0x08A7E754u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(f13));
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    goto L_08A7DBBC;
}
}
L_08A7E754:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f26 = ctx.fpr[26];
    float f28 = ctx.fpr[28];
    float f30 = ctx.fpr[30];
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    f12 = f12 / f26;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 3u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    f13 = f13 / f26;
    f14 = f14 / f26;
    f15 = f15 / f26;
    f16 = f16 / f26;
    f17 = f17 / f26;
    f12 = f12 + f28;
    f13 = f13 + f30;
    f14 = f14 + f28;
    f15 = f15 + f30;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(f12));
    f12 = f16 + f28;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(f14));
    f13 = f17 + f30;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g31 = (0x08A7E7C4u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    goto L_08A7DBBC;
}
}
L_08A7E7C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E83C;
      }
      goto L_08A7E7CC;
    }
L_08A7E7CC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f26 = ctx.fpr[26];
    float f28 = ctx.fpr[28];
    float f30 = ctx.fpr[30];
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    f12 = f12 / f26;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 3u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    f13 = f13 / f26;
    f14 = f14 / f26;
    f15 = f15 / f26;
    f16 = f16 / f26;
    f17 = f17 / f26;
    f12 = f12 + f28;
    f13 = f13 + f30;
    f14 = f14 + f28;
    f15 = f15 + f30;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(f12));
    f12 = f16 + f28;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(f14));
    f13 = f17 + f30;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g31 = (0x08A7E83Cu);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    goto L_08A7DBBC;
}
}
L_08A7E83C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EC20;
      }
      goto L_08A7E844;
    }
L_08A7E844:
    hot_regs.g31 = (0x08A7E84Cu);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(288));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 291u, 0x089D1AECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7E84Cu) goto L_08A7E84C;
    return;
L_08A7E84C:
    hot_regs.g6 = (49864u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A7E864u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 334u, 0x08A79B48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7E864u) goto L_08A7E864;
    return;
L_08A7E864:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(288)));
    ctx.set_fpu_condition((f12 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7E88C;
      }
      goto L_08A7E884;
    }
}
}
L_08A7E884:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A7E88C;
L_08A7E88C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(296)));
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    hot_regs.f12 = f12;
        goto L_08A7E8B0;
    }
    goto L_08A7E8A4;
}
}
L_08A7E8A4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    hot_regs.f12 = f12;
    goto L_08A7E8B0;
}
}
L_08A7E8B0:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(300)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(260)));
        goto L_08A7E8D0;
    }
    goto L_08A7E8C4;
L_08A7E8C4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    hot_regs.f12 = f12;
    goto L_08A7E8D0;
}
}
L_08A7E8D0:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(292)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7E8EC;
      }
      goto L_08A7E8E4;
    }
L_08A7E8E4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A7E8EC;
L_08A7E8EC:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08A7E8FCu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 334u, 0x08A79B48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7E8FCu) goto L_08A7E8FC;
    return;
L_08A7E8FC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(288)));
    ctx.set_fpu_condition((f12 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7E924;
      }
      goto L_08A7E91C;
    }
}
}
L_08A7E91C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A7E924;
L_08A7E924:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(296)));
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    hot_regs.f12 = f12;
        goto L_08A7E948;
    }
    goto L_08A7E93C;
}
}
L_08A7E93C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    hot_regs.f12 = f12;
    goto L_08A7E948;
}
}
L_08A7E948:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(300)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(260)));
        goto L_08A7E968;
    }
    goto L_08A7E95C;
L_08A7E95C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    hot_regs.f12 = f12;
    goto L_08A7E968;
}
}
L_08A7E968:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(292)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7E984;
      }
      goto L_08A7E97C;
    }
L_08A7E97C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A7E984;
L_08A7E984:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08A7E994u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 334u, 0x08A79B48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7E994u) goto L_08A7E994;
    return;
L_08A7E994:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(288)));
    ctx.set_fpu_condition((f12 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7E9BC;
      }
      goto L_08A7E9B4;
    }
}
}
L_08A7E9B4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A7E9BC;
L_08A7E9BC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(296)));
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    hot_regs.f12 = f12;
        goto L_08A7E9E0;
    }
    goto L_08A7E9D4;
}
}
L_08A7E9D4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    hot_regs.f12 = f12;
    goto L_08A7E9E0;
}
}
L_08A7E9E0:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(300)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(260)));
        goto L_08A7EA00;
    }
    goto L_08A7E9F4;
L_08A7E9F4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    hot_regs.f12 = f12;
    goto L_08A7EA00;
}
}
L_08A7EA00:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(292)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7EA1C;
      }
      goto L_08A7EA14;
    }
L_08A7EA14:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A7EA1C;
L_08A7EA1C:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08A7EA2Cu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 334u, 0x08A79B48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7EA2Cu) goto L_08A7EA2C;
    return;
L_08A7EA2C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(288)));
    ctx.set_fpu_condition((f12 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7EA54;
      }
      goto L_08A7EA4C;
    }
}
}
L_08A7EA4C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A7EA54;
L_08A7EA54:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(296)));
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    hot_regs.f12 = f12;
        goto L_08A7EA78;
    }
    goto L_08A7EA6C;
}
}
L_08A7EA6C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    hot_regs.f12 = f12;
    goto L_08A7EA78;
}
}
L_08A7EA78:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(300)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(260)));
        goto L_08A7EA98;
    }
    goto L_08A7EA8C;
L_08A7EA8C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    hot_regs.f12 = f12;
    goto L_08A7EA98;
}
}
L_08A7EA98:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(292)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(288)));
        goto L_08A7EAB8;
    }
    goto L_08A7EAAC;
L_08A7EAAC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(288)));
    hot_regs.f12 = f12;
    goto L_08A7EAB8;
}
}
L_08A7EAB8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f12 = f12 / ctx.fpr[26];
    g5 = (0u | 49u);
    f12 = f12 + ctx.fpr[28];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g5 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
        goto L_08A7EAD8;
    }
    goto L_08A7EAD8;
}
}
L_08A7EAD8:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_08A7EAE4;
    }
    goto L_08A7EAE4;
L_08A7EAE4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (g5 != 0u) {
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
        goto L_08A7EAF8;
    }
    goto L_08A7EAF8;
}
L_08A7EAF8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(296)));
    f12 = f12 / ctx.fpr[26];
    g5 = (0u | 49u);
    f12 = f12 + ctx.fpr[28];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g5 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
        goto L_08A7EB1C;
    }
    goto L_08A7EB1C;
}
}
L_08A7EB1C:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_08A7EB28;
    }
    goto L_08A7EB28;
L_08A7EB28:
    ctx.gpr[16] = (0u | 49u);
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 49 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[16] = (hot_regs.g4 | 0u);
        goto L_08A7EB38;
    }
    goto L_08A7EB38;
L_08A7EB38:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(300)));
    f12 = f12 / ctx.fpr[26];
    g5 = (0u | 49u);
    f12 = f12 + ctx.fpr[30];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g5 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
        goto L_08A7EB5C;
    }
    goto L_08A7EB5C;
}
}
L_08A7EB5C:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_08A7EB68;
    }
    goto L_08A7EB68;
L_08A7EB68:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (g5 != 0u) {
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
        goto L_08A7EB7C;
    }
    goto L_08A7EB7C;
}
L_08A7EB7C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(292)));
    f12 = f12 / ctx.fpr[26];
    g5 = (0u | 49u);
    f12 = f12 + ctx.fpr[30];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g5 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
        goto L_08A7EBA0;
    }
    goto L_08A7EBA0;
}
}
L_08A7EBA0:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_08A7EBAC;
    }
    goto L_08A7EBAC;
L_08A7EBAC:
    ctx.gpr[18] = (0u | 49u);
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 49 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[18] = (hot_regs.g4 | 0u);
        goto L_08A7EBBC;
    }
    goto L_08A7EBBC;
L_08A7EBBC:
    hot_regs.g4 = (ctx.gpr[16] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EC20;
      }
      goto L_08A7EBC8;
    }
L_08A7EBC8:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    g4 = (ctx.gpr[18] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (ctx.gpr[17] << 4u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7EC10;
      }
      goto L_08A7EBD8;
    }
}
L_08A7EBD8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g21 = ctx.gpr[21];
    g5 = (ctx.gpr[17] + g4);
    g4 = (g4 + g5);
    g4 = (g4 + g5);
    g4 = (ctx.gpr[19] + g4);
    g21 = (g4 << 6u);
    g4 = (g4 << 3u);
    g21 = (g21 - g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[21] = g21;
    goto L_08A7EBF4;
}
L_08A7EBF4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    hot_regs.g31 = (0x08A7EC00u);
    g4 = (g4 + ctx.gpr[21]);
    hot_regs.g4 = g4;
    goto L_08A7EC68;
}
L_08A7EC00:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (g20 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (ctx.gpr[18] < g20 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(2800));
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_08A7EBF4;
      }
      goto L_08A7EC10;
    }
}
L_08A7EC10:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (ctx.gpr[16] < g19 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A7EBC8;
      }
      goto L_08A7EC20;
    }
}
L_08A7EC20:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(448)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(452)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(456)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(460)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(464)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(468)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(472)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(476)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(480)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(484)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(488)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(492)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(496)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(500)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(504)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(508)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(512));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A7EC68:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-80));
    hot_regs.g5 = (0u | 12u);
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    g4 = (g4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g4);
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A7ECBC;
      }
      goto L_08A7ECB4;
    }
}
L_08A7ECB4:
    hot_regs.g4 = (0u | 3u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g4);
    goto L_08A7ECBC;
L_08A7ECBC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    g5 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g5);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7F048;
      }
      goto L_08A7ECD0;
    }
}
L_08A7ECD0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g30 = ctx.gpr[30];
    g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-5492));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), g4);
    g4 = (49648u << 16u);
    g5 = (2280u << 16u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    g5 = (g5 + static_cast<std::uint32_t>(-29568));
    g30 = (2280u << 16u);
    g23 = (2279u << 16u);
    g4 = (16880u << 16u);
    g20 = (2280u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), g5);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[21] = (0u | 3u);
    g30 = (g30 + static_cast<std::uint32_t>(-21568));
    g23 = (g23 + static_cast<std::uint32_t>(27328));
    g20 = (g20 + static_cast<std::uint32_t>(-30208));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[20] = g20;
    ctx.gpr[23] = g23;
    ctx.gpr[30] = g30;
    goto L_08A7ED14;
}
L_08A7ED14:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7F030;
      }
      goto L_08A7ED28;
    }
}
L_08A7ED28:
{
    std::uint32_t g19 = ctx.gpr[19];
    ctx.gpr[17] = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = hot_regs.g5 == hot_regs.g4;
    g19 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A7F028;
      }
      goto L_08A7ED3C;
    }
}
L_08A7ED3C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    hot_regs.g6 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1025));
    aot_mem.aot_store16(g17 + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(g4));
    g4 = (hot_regs.g6 & hot_regs.g5);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(76), g4);
    hot_regs.g31 = (0x08A7ED58u);
    g4 = (g17 | 0u);
    hot_regs.g4 = g4;
    goto L_08A7CEC8;
}
L_08A7ED58:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    g6 = (4u << 16u);
    g6 = (hot_regs.g4 & g6);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A7ED8C;
      }
      goto L_08A7ED6C;
    }
}
L_08A7ED6C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    g6 = (65532u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g6);
    g6 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(76), g4);
    g4 = (8u << 16u);
    g4 = (g6 | g4);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_08A7ED8C;
}
L_08A7ED8C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(hot_regs.g5) < 2 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (static_cast<std::int32_t>(hot_regs.g5) < 3 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7EDB0;
      }
      goto L_08A7ED98;
    }
}
L_08A7ED98:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) < 0;
    // nop
      if (branch_taken) {
          goto L_08A7F028;
      }
      goto L_08A7EDA0;
    }
L_08A7EDA0:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7EF24;
      }
      goto L_08A7EDA8;
    }
L_08A7EDA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDF0;
      }
      goto L_08A7EDB0;
    }
L_08A7EDB0:
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g5) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A7EF94;
      }
      goto L_08A7EDB8;
    }
L_08A7EDB8:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F028;
      }
      goto L_08A7EDC0;
    }
L_08A7EDC0:
    hot_regs.g31 = (0x08A7EDC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 542u, 0x08AD3220u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7EDC8u) goto L_08A7EDC8;
    return;
L_08A7EDC8:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDE8;
      }
      goto L_08A7EDD0;
    }
L_08A7EDD0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7640)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EDE8;
      }
      goto L_08A7EDDC;
    }
L_08A7EDDC:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    hot_regs.g31 = (0x08A7EDE8u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 548u, 0x08AD3280u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7EDE8u) goto L_08A7EDE8;
    return;
L_08A7EDE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F028;
      }
      goto L_08A7EDF0;
    }
L_08A7EDF0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g5 = (g4 ^ 4u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7EE4C;
      }
      goto L_08A7EE0C;
    }
}
L_08A7EE0C:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    g6 = (1u << 16u);
    g6 = (hot_regs.g5 & g6);
    g6 = (0u < g6 ? 1u : 0u);
    g6 = (g6 & 255u);
    { const bool branch_taken = g6 != 0u;
    g6 = (hot_regs.g4 ^ 6u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A7EE4C;
      }
      goto L_08A7EE28;
    }
}
L_08A7EE28:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g6 = (g6 & 255u);
    { const bool branch_taken = g6 != 0u;
    g6 = (2u << 16u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A7EE4C;
      }
      goto L_08A7EE38;
    }
}
L_08A7EE38:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 & hot_regs.g6);
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7EE6C;
      }
      goto L_08A7EE4C;
    }
}
L_08A7EE4C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10072)));
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (g4 << 2u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (hot_regs.g6 + g5);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10072), g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7EF1C;
      }
      goto L_08A7EE6C;
    }
}
L_08A7EE6C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 ^ 10u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7EEA4;
      }
      goto L_08A7EE80;
    }
}
L_08A7EE80:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
      if (branch_taken) {
          goto L_08A7EE94;
      }
      goto L_08A7EE8C;
    }
L_08A7EE8C:
    hot_regs.g31 = (0x08A7EE94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7EE94u) goto L_08A7EE94;
    return;
L_08A7EE94:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(276)));
    if (ctx.gpr[16] != g4) {
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    hot_regs.g4 = g4;
        goto L_08A7EEDC;
    }
    goto L_08A7EEA4;
}
L_08A7EEA4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 8u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[18] & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7EEE0;
      }
      goto L_08A7EEC0;
    }
}
L_08A7EEC0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(483))))));
    g4 = (g4 & 16u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[18] & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7EEE0;
      }
      goto L_08A7EED8;
    }
}
L_08A7EED8:
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    goto L_08A7EEDC;
L_08A7EEDC:
    hot_regs.g4 = (ctx.gpr[18] & 255u);
    goto L_08A7EEE0;
L_08A7EEE0:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EF04;
      }
      goto L_08A7EEE8;
    }
L_08A7EEE8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10076)));
    g5 = (g4 << 2u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (g5 + ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10076), g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7EF1C;
      }
      goto L_08A7EF04;
    }
}
L_08A7EF04:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10064)));
    g5 = (g4 << 2u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (g5 + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10064), g4);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A7EF1C;
}
L_08A7EF1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F028;
      }
      goto L_08A7EF24;
    }
L_08A7EF24:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A7EF48;
      }
      goto L_08A7EF38;
    }
}
L_08A7EF38:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (g5 << 2u);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A7EF48;
}
L_08A7EF48:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    if (g5 == ctx.gpr[22]) {
    g5 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(58)));
    hot_regs.g5 = g5;
        goto L_08A7EF64;
    }
    goto L_08A7EF54;
}
L_08A7EF54:
    if (hot_regs.g5 == ctx.gpr[21]) {
    hot_regs.g5 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(58)));
        goto L_08A7EF64;
    }
    goto L_08A7EF5C;
L_08A7EF5C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A7EF84;
      }
      goto L_08A7EF64;
    }
L_08A7EF64:
    hot_regs.g6 = (hot_regs.g5 & 8192u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A7EF7C;
      }
      goto L_08A7EF70;
    }
L_08A7EF70:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 & 16384u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7EF84;
      }
      goto L_08A7EF7C;
    }
}
L_08A7EF7C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[22] | 0u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08A7EF84;
}
L_08A7EF84:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EF94;
      }
      goto L_08A7EF8C;
    }
L_08A7EF8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F028;
      }
      goto L_08A7EF94;
    }
L_08A7EF94:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(76)));
    hot_regs.g4 = (g17 + static_cast<std::uint32_t>(48));
    g5 = (g5 | 1024u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(76), g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10048)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    f12 = f12 - hot_regs.f13;
    ctx.set_fpu_condition((f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7F020;
      }
      goto L_08A7EFC0;
    }
}
}
L_08A7EFC0:
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7F020;
      }
      goto L_08A7EFD0;
    }
L_08A7EFD0:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10052)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    f12 = f12 - hot_regs.f13;
    ctx.set_fpu_condition((f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7F020;
      }
      goto L_08A7EFEC;
    }
}
L_08A7EFEC:
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7F020;
      }
      goto L_08A7EFFC;
    }
L_08A7EFFC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10068)));
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 149 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F020;
      }
      goto L_08A7F00C;
    }
L_08A7F00C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g4 << 2u);
    g5 = (g5 + ctx.gpr[20]);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10068), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A7F020;
}
L_08A7F020:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F028;
      }
      goto L_08A7F028;
    }
L_08A7F028:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7ED28;
      }
      goto L_08A7F030;
    }
L_08A7F030:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g4);
    { const bool branch_taken = hot_regs.g5 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7ED14;
      }
      goto L_08A7F048;
    }
}
L_08A7F048:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A7F080:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-80));
    hot_regs.g5 = (0u | 12u);
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    g4 = (g4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g4);
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A7F0D4;
      }
      goto L_08A7F0CC;
    }
}
L_08A7F0CC:
    hot_regs.g4 = (0u | 4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g4);
    goto L_08A7F0D4;
L_08A7F0D4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    g5 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g5);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7F4A0;
      }
      goto L_08A7F0E8;
    }
}
L_08A7F0E8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g30 = ctx.gpr[30];
    g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-5492));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), g4);
    g4 = (49648u << 16u);
    g5 = (2280u << 16u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    g5 = (g5 + static_cast<std::uint32_t>(-29568));
    g30 = (2280u << 16u);
    g23 = (2279u << 16u);
    g4 = (16880u << 16u);
    g20 = (2280u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), g5);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[21] = (0u | 3u);
    g30 = (g30 + static_cast<std::uint32_t>(-21568));
    g23 = (g23 + static_cast<std::uint32_t>(27328));
    g20 = (g20 + static_cast<std::uint32_t>(-30208));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[20] = g20;
    ctx.gpr[23] = g23;
    ctx.gpr[30] = g30;
    goto L_08A7F12C;
}
L_08A7F12C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7F488;
      }
      goto L_08A7F140;
    }
}
L_08A7F140:
{
    std::uint32_t g19 = ctx.gpr[19];
    ctx.gpr[17] = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = hot_regs.g5 == hot_regs.g4;
    g19 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A7F480;
      }
      goto L_08A7F154;
    }
}
L_08A7F154:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    hot_regs.g6 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1025));
    aot_mem.aot_store16(g17 + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(g4));
    g4 = (hot_regs.g6 & hot_regs.g5);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(76), g4);
    hot_regs.g31 = (0x08A7F170u);
    g4 = (g17 | 0u);
    hot_regs.g4 = g4;
    goto L_08A7CEC8;
}
L_08A7F170:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    g6 = (4u << 16u);
    g6 = (hot_regs.g4 & g6);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A7F1A4;
      }
      goto L_08A7F184;
    }
}
L_08A7F184:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    g6 = (65532u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g6);
    g6 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(76), g4);
    g4 = (8u << 16u);
    g4 = (g6 | g4);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_08A7F1A4;
}
L_08A7F1A4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(hot_regs.g5) < 2 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (static_cast<std::int32_t>(hot_regs.g5) < 3 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7F1C8;
      }
      goto L_08A7F1B0;
    }
}
L_08A7F1B0:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) < 0;
    // nop
      if (branch_taken) {
          goto L_08A7F480;
      }
      goto L_08A7F1B8;
    }
L_08A7F1B8:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7F37C;
      }
      goto L_08A7F1C0;
    }
L_08A7F1C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F248;
      }
      goto L_08A7F1C8;
    }
L_08A7F1C8:
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g5) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A7F3EC;
      }
      goto L_08A7F1D0;
    }
L_08A7F1D0:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F480;
      }
      goto L_08A7F1D8;
    }
L_08A7F1D8:
    hot_regs.g31 = (0x08A7F1E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 542u, 0x08AD3220u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7F1E0u) goto L_08A7F1E0;
    return;
L_08A7F1E0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F240;
      }
      goto L_08A7F1E8;
    }
L_08A7F1E8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (0u | 0u);
    g4 = (g4 & 14u);
    g4 = (g4 ^ 8u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g5 = (g4 & 255u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7F21C;
      }
      goto L_08A7F208;
    }
}
L_08A7F208:
    hot_regs.g31 = (0x08A7F210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7F210u) goto L_08A7F210;
    return;
L_08A7F210:
    { const bool branch_taken = hot_regs.g2 != 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
      if (branch_taken) {
          goto L_08A7F21C;
      }
      goto L_08A7F218;
    }
L_08A7F218:
    ctx.gpr[16] = (0u | 32u);
    goto L_08A7F21C;
L_08A7F21C:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08A7F228u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7F228u) goto L_08A7F228;
    return;
L_08A7F228:
    hot_regs.g31 = (0x08A7F230u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7F230u) goto L_08A7F230;
    return;
L_08A7F230:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F240;
      }
      goto L_08A7F238;
    }
L_08A7F238:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7640), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A7F240;
L_08A7F240:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F480;
      }
      goto L_08A7F248;
    }
L_08A7F248:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g5 = (g4 ^ 4u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7F2A4;
      }
      goto L_08A7F264;
    }
}
L_08A7F264:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    g6 = (1u << 16u);
    g6 = (hot_regs.g5 & g6);
    g6 = (0u < g6 ? 1u : 0u);
    g6 = (g6 & 255u);
    { const bool branch_taken = g6 != 0u;
    g6 = (hot_regs.g4 ^ 6u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A7F2A4;
      }
      goto L_08A7F280;
    }
}
L_08A7F280:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g6 = (g6 & 255u);
    { const bool branch_taken = g6 != 0u;
    g6 = (2u << 16u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A7F2A4;
      }
      goto L_08A7F290;
    }
}
L_08A7F290:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 & hot_regs.g6);
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7F2C4;
      }
      goto L_08A7F2A4;
    }
}
L_08A7F2A4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10072)));
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (g4 << 2u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (hot_regs.g6 + g5);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10072), g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7F374;
      }
      goto L_08A7F2C4;
    }
}
L_08A7F2C4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 ^ 10u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7F2FC;
      }
      goto L_08A7F2D8;
    }
}
L_08A7F2D8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
      if (branch_taken) {
          goto L_08A7F2EC;
      }
      goto L_08A7F2E4;
    }
L_08A7F2E4:
    hot_regs.g31 = (0x08A7F2ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7F2ECu) goto L_08A7F2EC;
    return;
L_08A7F2EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(276)));
    if (ctx.gpr[16] != g4) {
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    hot_regs.g4 = g4;
        goto L_08A7F334;
    }
    goto L_08A7F2FC;
}
L_08A7F2FC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 8u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[18] & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7F338;
      }
      goto L_08A7F318;
    }
}
L_08A7F318:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(483))))));
    g4 = (g4 & 16u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[18] & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7F338;
      }
      goto L_08A7F330;
    }
}
L_08A7F330:
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    goto L_08A7F334;
L_08A7F334:
    hot_regs.g4 = (ctx.gpr[18] & 255u);
    goto L_08A7F338;
L_08A7F338:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F35C;
      }
      goto L_08A7F340;
    }
L_08A7F340:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10076)));
    g5 = (g4 << 2u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (g5 + ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10076), g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7F374;
      }
      goto L_08A7F35C;
    }
}
L_08A7F35C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10064)));
    g5 = (g4 << 2u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (g5 + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10064), g4);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A7F374;
}
L_08A7F374:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F480;
      }
      goto L_08A7F37C;
    }
L_08A7F37C:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A7F3A0;
      }
      goto L_08A7F390;
    }
}
L_08A7F390:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (g5 << 2u);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A7F3A0;
}
L_08A7F3A0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    if (g5 == ctx.gpr[22]) {
    g5 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(58)));
    hot_regs.g5 = g5;
        goto L_08A7F3BC;
    }
    goto L_08A7F3AC;
}
L_08A7F3AC:
    if (hot_regs.g5 == ctx.gpr[21]) {
    hot_regs.g5 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(58)));
        goto L_08A7F3BC;
    }
    goto L_08A7F3B4;
L_08A7F3B4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A7F3DC;
      }
      goto L_08A7F3BC;
    }
L_08A7F3BC:
    hot_regs.g6 = (hot_regs.g5 & 8192u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A7F3D4;
      }
      goto L_08A7F3C8;
    }
L_08A7F3C8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 & 16384u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7F3DC;
      }
      goto L_08A7F3D4;
    }
}
L_08A7F3D4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[22] | 0u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08A7F3DC;
}
L_08A7F3DC:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F3EC;
      }
      goto L_08A7F3E4;
    }
L_08A7F3E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F480;
      }
      goto L_08A7F3EC;
    }
L_08A7F3EC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(76)));
    hot_regs.g4 = (g17 + static_cast<std::uint32_t>(48));
    g5 = (g5 | 1024u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(76), g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10048)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    f12 = f12 - hot_regs.f13;
    ctx.set_fpu_condition((f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7F478;
      }
      goto L_08A7F418;
    }
}
}
L_08A7F418:
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7F478;
      }
      goto L_08A7F428;
    }
L_08A7F428:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10052)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    f12 = f12 - hot_regs.f13;
    ctx.set_fpu_condition((f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7F478;
      }
      goto L_08A7F444;
    }
}
L_08A7F444:
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7F478;
      }
      goto L_08A7F454;
    }
L_08A7F454:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10068)));
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 149 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F478;
      }
      goto L_08A7F464;
    }
L_08A7F464:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g4 << 2u);
    g5 = (g5 + ctx.gpr[20]);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10068), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A7F478;
}
L_08A7F478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F480;
      }
      goto L_08A7F480;
    }
L_08A7F480:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F140;
      }
      goto L_08A7F488;
    }
L_08A7F488:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g4);
    { const bool branch_taken = hot_regs.g5 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7F12C;
      }
      goto L_08A7F4A0;
    }
}
L_08A7F4A0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A7F4D8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2234u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(7840));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(64), 0u);
    local_pc = jump_target;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A7F4E8:
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
L_08A7F510:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    hot_regs.g7 = (g5 | 0u);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(104)));
    g4 = (g5 | 0u);
    g6 = (g4 + static_cast<std::uint32_t>(4));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A7F564;
      }
      goto L_08A7F530;
    }
}
L_08A7F530:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(16)));
    goto L_08A7F538;
L_08A7F538:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 < hot_regs.g7 ? 1u : 0u);
    g8 = (g8 & 255u);
    if (g8 != 0u) {
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(12));
    ctx.gpr[8] = g8;
        goto L_08A7F558;
    }
    goto L_08A7F548;
}
L_08A7F548:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (g6 | 0u);
    g6 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A7F55C;
      }
      goto L_08A7F558;
    }
}
L_08A7F558:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    goto L_08A7F55C;
L_08A7F55C:
    if (hot_regs.g6 != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(16)));
        goto L_08A7F538;
    }
    goto L_08A7F564;
L_08A7F564:
    if (hot_regs.g4 == hot_regs.g5) {
    hot_regs.g4 = (hot_regs.g5 | 0u);
        goto L_08A7F588;
    }
    goto L_08A7F56C;
L_08A7F56C:
{
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    g6 = (hot_regs.g7 < g6 ? 1u : 0u);
    g6 = (g6 & 255u);
    if (g6 == 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g4);
    hot_regs.g6 = g6;
        goto L_08A7F58C;
    }
    goto L_08A7F584;
}
L_08A7F584:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    goto L_08A7F588;
L_08A7F588:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g4);
    goto L_08A7F58C;
L_08A7F58C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    g4 = (g5 ^ g4);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7F5C4;
      }
      goto L_08A7F5BC;
    }
}
L_08A7F5BC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A7F5C8;
      }
      goto L_08A7F5C4;
    }
L_08A7F5C4:
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    goto L_08A7F5C8;
L_08A7F5C8:
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7F5D0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g6 = (g5 + static_cast<std::uint32_t>(32));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(14))))));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g7);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(8))))));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g7);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), g7);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g7);
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), g7);
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), g7);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(24), g7);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(6))))));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(28), g7);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(32), g7);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(36), g7);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(17))))));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(g7));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(11))))));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(g7));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(g7));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(23))))));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(g7));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(g7));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(22))))));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(g7));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(g7));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(151))))));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(g6));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(136)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g2 = (g4 | 0u);
    g6 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(149))))));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(g6));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(148))))));
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(g5));
    local_pc = jump_target;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08A7F694:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    hot_regs.g31 = (0x08A7F6B4u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 273u, 0x08A8D728u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7F6B4u) goto L_08A7F6B4;
    return;
L_08A7F6B4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (2235u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-28596));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), g4);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(0u));
    f12 = std::bit_cast<float>(0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(204))))));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
    g5 = (0u + static_cast<std::uint32_t>(-3));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(0u));
    g4 = (g4 & g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(195), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(f12));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(204))))));
    g5 = (0u + static_cast<std::uint32_t>(-9));
    g4 = (g4 & g5);
    g5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(205), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(206), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(207), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(452), g5);
    g4 = (17530u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(hot_regs.f13));
    g4 = (0u | 1u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(464), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(524), static_cast<std::uint8_t>(g4));
    g4 = (g16 + static_cast<std::uint32_t>(209));
    g5 = (0u | 0u);
    hot_regs.g6 = (g16 + static_cast<std::uint32_t>(213));
    hot_regs.g7 = (g16 + static_cast<std::uint32_t>(232));
    ctx.gpr[8] = (g16 + static_cast<std::uint32_t>(248));
    ctx.gpr[9] = (g16 + static_cast<std::uint32_t>(264));
    ctx.gpr[10] = (g16 + static_cast<std::uint32_t>(280));
    ctx.gpr[11] = (g16 + static_cast<std::uint32_t>(296));
    { const bool branch_taken = g4 == hot_regs.g6;
    ctx.gpr[19] = (g16 + static_cast<std::uint32_t>(448));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7F77C;
      }
      goto L_08A7F76C;
    }
}
}
L_08A7F76C:
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08A7F770;
L_08A7F770:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    if (g4 != hot_regs.g6) {
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = g4;
        goto L_08A7F770;
    }
    goto L_08A7F77C;
}
L_08A7F77C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(216));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g7;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_08A7F798;
      }
      goto L_08A7F788;
    }
L_08A7F788:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    goto L_08A7F78C;
L_08A7F78C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(4));
    if (g4 != hot_regs.g7) {
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = g4;
        goto L_08A7F78C;
    }
    goto L_08A7F798;
}
L_08A7F798:
    { const bool branch_taken = hot_regs.g7 == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A7F7B0;
      }
      goto L_08A7F7A0;
    }
L_08A7F7A0:
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A7F7A4;
L_08A7F7A4:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g7 + static_cast<std::uint32_t>(4));
    if (g7 != ctx.gpr[8]) {
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = g7;
        goto L_08A7F7A4;
    }
    goto L_08A7F7B0;
}
L_08A7F7B0:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A7F7C8;
      }
      goto L_08A7F7B8;
    }
L_08A7F7B8:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A7F7BC;
L_08A7F7BC:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 + static_cast<std::uint32_t>(4));
    if (g8 != ctx.gpr[9]) {
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[8] = g8;
        goto L_08A7F7BC;
    }
    goto L_08A7F7C8;
}
L_08A7F7C8:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08A7F7E0;
      }
      goto L_08A7F7D0;
    }
L_08A7F7D0:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A7F7D4;
L_08A7F7D4:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (g9 + static_cast<std::uint32_t>(4));
    if (g9 != ctx.gpr[10]) {
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[9] = g9;
        goto L_08A7F7D4;
    }
    goto L_08A7F7E0;
}
L_08A7F7E0:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08A7F7F8;
      }
      goto L_08A7F7E8;
    }
L_08A7F7E8:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A7F7EC;
L_08A7F7EC:
{
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (g10 + static_cast<std::uint32_t>(4));
    if (g10 != ctx.gpr[11]) {
    aot_mem.aot_store32(g10 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[10] = g10;
        goto L_08A7F7EC;
    }
    goto L_08A7F7F8;
}
L_08A7F7F8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    goto L_08A7F800;
L_08A7F800:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08A7F810u);
    hot_regs.g6 = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7F810u) goto L_08A7F810;
    return;
L_08A7F810:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A7F800;
      }
      goto L_08A7F820;
    }
}
L_08A7F820:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(432));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[19];
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_08A7F83C;
      }
      goto L_08A7F82C;
    }
L_08A7F82C:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    goto L_08A7F830;
L_08A7F830:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(4));
    if (g4 != ctx.gpr[19]) {
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = g4;
        goto L_08A7F830;
    }
    goto L_08A7F83C;
}
L_08A7F83C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[16] | 0u);
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
L_08A7F85C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08A7F87Cu);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 275u, 0x08A8D7B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7F87Cu) goto L_08A7F87C;
    return;
L_08A7F87C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (2235u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-28596));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(4), g4);
    g4 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(692)));
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(f12));
    g4 = (g17 + static_cast<std::uint32_t>(468));
    hot_regs.g5 = (g16 + static_cast<std::uint32_t>(384));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(694))))));
    hot_regs.g31 = (0x08A7F8ACu);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(464), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08A7F5D0;
}
}
L_08A7F8AC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(612)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(524), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(680)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(528), g4);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(604)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(608)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(f12));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(613))))));
    g4 = (g4 & 32u);
    g4 = (g4 >> 5u);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(620))))));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(206), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 496u);
    g4 = (g4 >> 4u);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(644)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(616))))));
    g4 = (g4 & 2u);
    g4 = (g4 >> 1u);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(618))))));
    g4 = (g4 & 32u);
    g4 = (g4 >> 5u);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(g4));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(648)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(636)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7F954;
      }
      goto L_08A7F940;
    }
}
}
L_08A7F940:
    hot_regs.g31 = (0x08A7F948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7F948u) goto L_08A7F948;
    return;
L_08A7F948:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F954;
      }
      goto L_08A7F950;
    }
L_08A7F950:
    ctx.gpr[18] = (0u | 1u);
    goto L_08A7F954;
L_08A7F954:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[18] & 255u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(204))))));
    g4 = (g4 & 1u);
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-3));
    g5 = (g5 & hot_regs.g6);
    g4 = (g4 << 1u);
    g4 = (g5 | g4);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7F990;
      }
      goto L_08A7F980;
    }
}
L_08A7F980:
    hot_regs.g31 = (0x08A7F988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 696u, 0x0890EF94u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7F988u) goto L_08A7F988;
    return;
L_08A7F988:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (hot_regs.g2 << 24u);
    g18 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g18) >> 24u));
    ctx.gpr[18] = g18;
    goto L_08A7F990;
}
L_08A7F990:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(205), static_cast<std::uint8_t>(ctx.gpr[18]));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(900)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(204))))));
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    g6 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (g4 & 1u);
    g5 = (g5 & g6);
    g4 = (g5 | g4);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(613))))));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(204))))));
    g4 = (g4 & 16u);
    g4 = (g4 >> 4u);
    g6 = (0u + static_cast<std::uint32_t>(-5));
    g4 = (g4 & 1u);
    g5 = (g5 & g6);
    g4 = (g4 << 2u);
    g4 = (g5 | g4);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(617))))));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(204))))));
    g4 = (g4 & 4u);
    g4 = (g4 >> 2u);
    g6 = (0u + static_cast<std::uint32_t>(-9));
    g4 = (g4 & 1u);
    g5 = (g5 & g6);
    g4 = (g4 << 3u);
    g4 = (g5 | g4);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(700)));
    hot_regs.g2 = (g17 | 0u);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(195), static_cast<std::uint8_t>(g4));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(636)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(698))))));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(207), static_cast<std::uint8_t>(g4));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A7FA3C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08A7FA60u);
    ctx.gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 279u, 0x08A8D860u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7FA60u) goto L_08A7FA60;
    return;
L_08A7FA60:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08A7FA88;
      }
      goto L_08A7FA68;
    }
L_08A7FA68:
    hot_regs.g7 = (0u | 544u);
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(180));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    hot_regs.g31 = (0x08A7FA7Cu);
    hot_regs.g6 = (hot_regs.g7 - hot_regs.g6);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7FA7Cu) goto L_08A7FA7C;
    return;
L_08A7FA7C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7FA88;
      }
      goto L_08A7FA84;
    }
L_08A7FA84:
    ctx.gpr[18] = (0u | 1u);
    goto L_08A7FA88;
L_08A7FA88:
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
L_08A7FAA4:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (2216u << 16u);
    jump_target = hot_regs.g31;
    g2 = (g2 + static_cast<std::uint32_t>(-1372));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A7FAB0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A7FAC0u);
    // nop
    hot_regs.g29 = g29;
    goto L_08A7FAA4;
}
L_08A7FAC0:
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
L_08A7FACC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08A7FAECu);
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g29 = g29;
    goto L_08A7FAA4;
}
L_08A7FAEC:
    if (hot_regs.g2 == ctx.gpr[16]) {
    ctx.gpr[18] = (0u | 1u);
        goto L_08A7FB34;
    }
    goto L_08A7FAF4;
L_08A7FAF4:
    hot_regs.g31 = (0x08A7FAFCu);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 400u, 0x0888E51Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7FAFCu) goto L_08A7FAFC;
    return;
L_08A7FAFC:
    if (hot_regs.g2 == ctx.gpr[16]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_08A7FB24;
    }
    goto L_08A7FB04;
L_08A7FB04:
    hot_regs.g31 = (0x08A7FB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 295u, 0x08A9A6CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7FB0Cu) goto L_08A7FB0C;
    return;
L_08A7FB0C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 ^ ctx.gpr[16]);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[17] & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7FB28;
      }
      goto L_08A7FB20;
    }
}
L_08A7FB20:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A7FB24;
L_08A7FB24:
    hot_regs.g4 = (ctx.gpr[17] & 255u);
    goto L_08A7FB28;
L_08A7FB28:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7FB34;
      }
      goto L_08A7FB30;
    }
L_08A7FB30:
    ctx.gpr[18] = (0u | 1u);
    goto L_08A7FB34;
L_08A7FB34:
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
L_08A7FB50:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A7FB64u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 409u, 0x0888E5A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7FB64u) goto L_08A7FB64;
    return;
L_08A7FB64:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (2234u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(30760));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(108), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(124), 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5472)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g2 = (g16 | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5472), g4);
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
L_08A7FB94:
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
          goto L_08A7FC20;
      }
      goto L_08A7FBB0;
    }
}
L_08A7FBB0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2234u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(30760));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), g4);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17328)));
    hot_regs.g6 = (0u | 0u);
    g4 = (hot_regs.g6 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (2246u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7FBF4;
      }
      goto L_08A7FBD0;
    }
}
L_08A7FBD0:
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(17840));
    goto L_08A7FBD4;
L_08A7FBD4:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = hot_regs.g7 != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A7FBE4;
      }
      goto L_08A7FBE0;
    }
L_08A7FBE0:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(12), 0u);
    goto L_08A7FBE4;
L_08A7FBE4:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (g6 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(176));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A7FBD4;
      }
      goto L_08A7FBF4;
    }
}
L_08A7FBF4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5472)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5472), hot_regs.g5);
    hot_regs.g31 = (0x08A7FC0Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 411u, 0x0888E5E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7FC0Cu) goto L_08A7FC0C;
    return;
L_08A7FC0C:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7FC20;
      }
      goto L_08A7FC18;
    }
L_08A7FC18:
    hot_regs.g31 = (0x08A7FC20u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7FC20u) goto L_08A7FC20;
    return;
L_08A7FC20:
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
L_08A7FC34:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08A7FC6Cu);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7FC6Cu) goto L_08A7FC6C;
    return;
L_08A7FC6C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(220)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(192));
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-513));
    hot_regs.g5 = (hot_regs.g5 & hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(72), hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), 0u);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(548)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(549)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(133), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(550)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(134), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(551)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(135), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(552)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(553)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(554)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(138), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(555)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(139), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(152));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08A7FD20u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7FD20u) goto L_08A7FD20;
    return;
L_08A7FD20:
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
L_08A7FD34:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A7FD44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 355u, 0x08A9AE40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7FD44u) goto L_08A7FD44;
    return;
L_08A7FD44:
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
L_08A7FD50:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), hot_regs.g5);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(156), hot_regs.g31);
    hot_regs.g31 = (0x08A7FD8Cu);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(160))))));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 429u, 0x0888E7E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7FD8Cu) goto L_08A7FD8C;
    return;
L_08A7FD8C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (0u | 5u);
      if (branch_taken) {
          goto L_08A7FDBC;
      }
      goto L_08A7FDA0;
    }
L_08A7FDA0:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    hot_regs.g31 = (0x08A7FDB0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7FDB0u) goto L_08A7FDB0;
    return;
L_08A7FDB0:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A7FDBC;
L_08A7FDBC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    g5 = (2237u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-28736));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(207))))));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(100)));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7FDEC;
      }
      goto L_08A7FDDC;
    }
}
L_08A7FDDC:
    hot_regs.g31 = (0x08A7FDE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7FDE4u) goto L_08A7FDE4;
    return;
L_08A7FDE4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), hot_regs.g2);
      if (branch_taken) {
          goto L_08A7FDF0;
      }
      goto L_08A7FDEC;
    }
L_08A7FDEC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), 0u);
    goto L_08A7FDF0;
L_08A7FDF0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(86))))));
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7FE18;
      }
      goto L_08A7FE08;
    }
}
L_08A7FE08:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    ctx.gpr[19] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_08A7FE18;
}
L_08A7FE18:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(96));
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
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7FE4C;
      }
      goto L_08A7FE30;
    }
}
L_08A7FE30:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(113));
    hot_regs.g31 = (0x08A7FE40u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7FE40u) goto L_08A7FE40;
    return;
L_08A7FE40:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(113)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A7FE4C;
L_08A7FE4C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    g5 = (g5 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A7FE60u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = g5;
    goto L_08A7F4E8;
}
L_08A7FE60:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g29 + static_cast<std::uint32_t>(16));
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
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    g4 = (15897u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 + hot_regs.f13;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
        goto L_08A7FEB0;
    }
    goto L_08A7FE90;
}
}
L_08A7FE90:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(114));
    hot_regs.g31 = (0x08A7FEA0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7FEA0u) goto L_08A7FEA0;
    return;
L_08A7FEA0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(114)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_08A7FEB0;
}
L_08A7FEB0:
    hot_regs.g5 = (17274u << 16u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(456)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 3u, 0x08A8007Cu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A7FECC;
    }
L_08A7FECC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
        goto L_08A7FEF8;
    }
    goto L_08A7FED8;
}
L_08A7FED8:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(115));
    hot_regs.g31 = (0x08A7FEE8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7FEE8u) goto L_08A7FEE8;
    return;
L_08A7FEE8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(115)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_08A7FEF8;
}
L_08A7FEF8:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(194)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[17];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 3u, 0x08A8007Cu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A7FF04;
    }
L_08A7FF04:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (16230u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 26214u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f22 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (15436u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08A7FF4Cu);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7FF4Cu) goto L_08A7FF4C;
    return;
L_08A7FF4C:
    hot_regs.f14 = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = hot_regs.f14; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[24] + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g4 = (0u | 27u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A7FF84u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7FF84u) goto L_08A7FF84;
    return;
L_08A7FF84:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (48928u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    hot_regs.g4 = (16160u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08A7FFACu);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7FFACu) goto L_08A7FFAC;
    return;
L_08A7FFAC:
    hot_regs.f14 = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = hot_regs.f14; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f12 = ctx.fpr[24] + hot_regs.f14;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.f12 = hot_regs.f15 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A7FFCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7FFCCu) goto L_08A7FFCC;
    return;
L_08A7FFCC:
    hot_regs.f12 = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[24] + hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    hot_regs.f12 = hot_regs.f13 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16416u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08A7FFF4u);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f20 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f20 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7FFF4u) goto L_08A7FFF4;
    return;
L_08A7FFF4:
{
    float f14 = hot_regs.f14;
    f14 = hot_regs.f20 - ctx.fpr[26];
    { const float fs = f14; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f14 = ctx.fpr[26] + f14;
    hot_regs.f14 = f14;
    ctx.pc = 0x08A80000u; return;}

}

void recomp_unit_0158(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0158_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_158(Runtime &runtime) {
    runtime.register_generated_unit(158u, 0x08A7C000u, 16384u, &recomp_unit_0158, &recomp_unit_0158_entry);
    runtime.register_function(0x08A7C004u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C024u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C034u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C054u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C05Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C07Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C20Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C250u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C2CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C30Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C6A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C6ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C6F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C710u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C798u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C7D4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C7E4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C7ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C7F4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C81Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C900u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C9DCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C9F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CA20u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CA28u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CA9Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CAA4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CAACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CAC8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CAE8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CAF0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CB08u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CB14u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CB28u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CB34u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CB48u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CB50u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CB64u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CB84u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CB8Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CBA4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CBB0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CBC4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CBD0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CBE4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CBECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC00u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC20u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC28u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC40u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC4Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC60u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC6Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC80u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC88u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC9Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CCBCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CCC4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CCDCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CCE8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CCFCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD08u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD1Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD28u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD48u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD54u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD68u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD8Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD98u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CDA8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CDCCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CDD8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CDECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CE10u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CE1Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CE2Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CE38u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CE48u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CE64u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CE70u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CE80u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CE90u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CEC8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CEFCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CF0Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CF1Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CF28u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CF44u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CF4Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CF54u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CF5Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CF64u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CF74u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CF90u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CFACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CFC8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CFDCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CFF0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D000u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D008u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D014u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D01Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D020u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D02Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D038u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D054u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D05Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D064u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D070u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D078u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D080u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D088u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D090u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D094u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D0A0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D0A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D0B8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D0D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D0D8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D0E4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D0F4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D104u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D11Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D124u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D12Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D144u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D14Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D158u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D168u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D178u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D190u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D198u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D1A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D1B4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D1C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D1D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D1ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D1F4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D210u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D214u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D228u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D238u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D23Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D244u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D258u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D270u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D274u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D280u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D2BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D2C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D2C8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D2D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D2DCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D314u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D31Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D32Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D334u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D344u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D350u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D360u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D370u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D380u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D390u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D398u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D3B4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D3C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D3CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D3D4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D3E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D3F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D400u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D410u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D420u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D430u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D440u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D45Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D464u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D46Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D474u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D4ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D4DCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D4E4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D4F4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D4FCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D50Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D518u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D528u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D538u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D548u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D558u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D560u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D580u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D588u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D590u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D5A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D5B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D5C0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D5D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D5E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D5F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D60Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D618u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D62Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D634u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D63Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D644u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D64Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D65Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D664u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D66Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D674u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6D4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6F4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6FCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D704u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D70Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D714u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D724u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D72Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D734u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D73Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D774u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D78Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D7A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D7D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D7D8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D7E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D7F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D7F4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D810u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D824u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D830u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D840u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D84Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D858u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D864u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D870u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D880u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D88Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D898u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D8B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D8C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D8D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D8E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D8F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D8F4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D900u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D914u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D91Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D924u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D92Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D934u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D944u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D954u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D95Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D968u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D97Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D98Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D994u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D9A0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D9ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D9C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D9CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D9DCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D9E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D9F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA04u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA0Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA28u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA30u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA38u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA4Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA58u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA68u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA78u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA80u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA8Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DAA4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DAB8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DAC4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DAD4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DAE4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DAE8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DAF4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB08u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB10u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB18u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB20u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB28u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB30u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB38u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB44u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB54u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB5Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB64u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB6Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB88u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB90u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB98u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB9Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DBBCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC30u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC38u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC4Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC58u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC68u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC6Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC7Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DCA0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DCBCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DCC0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DCD8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DCE0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD04u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD0Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD14u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD2Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD30u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD48u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD54u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD78u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD80u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD98u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DDC8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DDE0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DDF4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DE08u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DE0Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DE1Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DE30u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DE34u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DE44u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DE68u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DE78u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DE80u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DE8Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DE94u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DE9Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DEB8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DEC0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DED0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DEDCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DEE4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DEECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DEF4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DEF8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DF08u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DF0Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DF44u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DF50u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DF60u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DF70u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DF78u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DF88u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DF90u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DFACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DFB4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DFCCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DFD8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E008u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E01Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E024u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E038u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E044u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E050u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E054u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E074u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E07Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E08Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E0A0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E0ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E0B8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E0C0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E0CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E0DCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E0ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E0F4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E0F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E108u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E110u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E12Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E134u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E14Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E158u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E17Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E190u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E198u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E1A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E1B4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E1C8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E1D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E1ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E1F4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E200u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E210u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E21Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E224u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E234u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E278u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E2CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E2D8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E378u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E384u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E3CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E3DCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E3E4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E3ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E424u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E454u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E460u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E464u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E488u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E504u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E57Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E5E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E61Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E624u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E62Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E638u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E650u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E6C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E6CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E6E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E754u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E7C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E7CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E83Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E844u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E84Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E864u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E884u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E88Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E8A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E8B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E8C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E8D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E8E4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E8ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E8FCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E91Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E924u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E93Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E948u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E95Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E968u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E97Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E984u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E994u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E9B4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E9BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E9D4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E9E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E9F4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA00u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA14u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA1Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA2Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA4Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA54u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA6Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA78u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA8Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA98u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EAACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EAB8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EAD8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EAE4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EAF8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EB1Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EB28u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EB38u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EB5Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EB68u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EB7Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EBA0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EBACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EBBCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EBC8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EBD8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EBF4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EC00u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EC10u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EC20u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EC68u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ECB4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ECBCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ECD0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED14u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED28u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED3Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED58u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED6Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED8Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED98u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EDA0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EDA8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EDB0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EDB8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EDC0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EDC8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EDD0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EDDCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EDE8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EDF0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE0Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE28u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE38u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE4Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE6Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE80u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE8Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE94u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EEA4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EEC0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EED8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EEDCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EEE0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EEE8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF04u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF1Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF24u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF38u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF48u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF54u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF5Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF64u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF70u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF7Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF84u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF8Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF94u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EFC0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EFD0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EFECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EFFCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F00Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F020u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F028u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F030u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F048u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F080u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F0CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F0D4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F0E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F12Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F140u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F154u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F170u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F184u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F1A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F1B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F1B8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F1C0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F1C8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F1D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F1D8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F1E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F1E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F208u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F210u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F218u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F21Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F228u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F230u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F238u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F240u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F248u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F264u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F280u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F290u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F2A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F2C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F2D8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F2E4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F2ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F2FCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F318u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F330u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F334u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F338u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F340u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F35Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F374u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F37Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F390u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F3A0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F3ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F3B4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F3BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F3C8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F3D4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F3DCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F3E4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F3ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F418u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F428u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F444u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F454u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F464u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F478u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F480u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F488u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F4A0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F4D8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F4E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F510u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F530u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F538u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F548u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F558u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F55Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F564u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F56Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F584u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F588u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F58Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F5BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F5C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F5C8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F5D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F694u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F6B4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F76Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F770u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F77Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F788u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F78Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F798u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F7A0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F7A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F7B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F7B8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F7BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F7C8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F7D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F7D4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F7E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F7E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F7ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F7F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F800u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F810u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F820u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F82Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F830u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F83Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F85Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F87Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F8ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F940u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F948u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F950u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F954u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F980u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F988u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F990u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA3Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA60u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA68u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA7Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA84u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA88u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FAA4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FAB0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FAC0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FACCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FAECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FAF4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FAFCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FB04u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FB0Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FB20u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FB24u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FB28u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FB30u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FB34u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FB50u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FB64u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FB94u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FBB0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FBD0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FBD4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FBE0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FBE4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FBF4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC0Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC18u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC20u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC34u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC6Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD20u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD34u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD44u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD50u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD8Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FDA0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FDB0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FDBCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FDDCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FDE4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FDECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FDF0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE08u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE18u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE30u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE40u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE4Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE60u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE90u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FEA0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FEB0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FECCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FED8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FEE8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FEF8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF04u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF4Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF84u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FFACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FFCCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FFF4u, &recomp_unit_0158, "recomp_unit_0158");
}
} // namespace psprecomp
