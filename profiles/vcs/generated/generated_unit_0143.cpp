#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0143[4076] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 7, 0, 8, 0, 0,
    0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0,
    0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0,
    0, 24, 25, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 35, 0, 36, 0, 0, 0, 0, 37, 0, 0, 38, 0, 39,
    0, 0, 40, 0, 41, 0, 42, 0, 0, 0, 0, 43, 0, 44, 0, 0, 45, 0, 46, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 51, 52, 0, 53, 0, 0, 0, 0,
    0, 54, 0, 0, 55, 0, 56, 0, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 64, 0, 65, 0, 0, 66,
    0, 67, 68, 0, 0, 0, 69, 0, 70, 0, 0, 71, 0, 72, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 77,
    0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0,
    83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0,
    0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 96, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 112,
    0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0,
    0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121,
    0, 0, 0, 122, 0, 123, 0, 124, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 128, 0, 129, 0, 130, 0, 0, 131, 0, 0, 0, 0,
    0, 0, 0, 132, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0,
    140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 154, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157,
    0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 163, 0, 164, 0,
    165, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 173, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176,
    0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186,
    0, 187, 0, 0, 0, 188, 0, 189, 0, 0, 190, 0, 191, 0, 192, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0, 196, 0, 197, 0, 0, 198,
    0, 199, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 205, 0, 206, 0, 0, 0, 0, 207,
    0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 210, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0,
    215, 0, 216, 0, 217, 0, 218, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 223,
    0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 226, 0, 227, 0, 228, 0, 229, 0, 0, 0, 0, 0, 230, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 262, 0, 0, 0,
    0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 270, 0,
    271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 279, 0, 280, 0, 281, 282, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0,
    0, 285, 0, 286, 0, 0, 287, 0, 288, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0,
    0, 294, 0, 295, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303,
    0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0,
    0, 308, 0, 309, 0, 310, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0,
    0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 320, 321, 0, 0, 0, 322, 0, 323, 0, 0, 0, 324, 0, 325, 0, 0, 0, 326, 0, 327, 0, 0,
    0, 328, 0, 329, 0, 0, 0, 330, 0, 331, 0, 0, 332, 0, 0, 0, 333, 0, 334, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 337, 0, 338,
    339, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0,
    0, 0, 347, 0, 348, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355,
    0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 366, 0, 0, 0, 0, 0, 0,
    0, 367, 0, 0, 0, 0, 368, 0, 369, 0, 370, 0, 371, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 381, 382, 0, 383,
    0, 0, 0, 384, 0, 0, 385, 0, 386, 0, 387, 388, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0,
    391, 0, 392, 0, 393, 0, 394, 0, 395, 0, 0, 396, 0, 397, 0, 398, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0,
    0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0,
    0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 411, 412,
    0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0,
    0, 415, 0, 416, 0, 417, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 421, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0,
    0, 0, 431, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 439, 0, 0, 0, 440, 0, 0, 441, 0, 0, 0, 442, 0, 443, 0,
    444, 0, 445, 0, 446, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 450,
    0, 451, 0, 0, 452, 0, 0, 0, 0, 453, 0, 454, 0, 455, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 457, 0, 458, 0, 0, 0, 459, 0,
    0, 0, 460, 461, 0, 462, 0, 463, 0, 0, 0, 0, 0, 464, 465, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 468, 469, 0,
    470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0, 0, 0, 0,
    475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479,
    0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 481, 0, 482, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 485, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 492, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    505, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 514, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0,
    0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0,
    524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 529, 0, 0, 0, 0, 0,
    0, 0, 530, 0, 0, 0, 0, 531, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 535, 0,
    536, 0, 0, 537, 0, 538, 539, 0, 0, 540, 0, 541, 0, 0, 542, 0, 543, 544, 0, 0, 0, 545, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0,
    0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 548, 0, 549, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0,
    0, 553, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 557, 0, 0, 0, 0,
    0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 561, 0, 562, 0, 563, 0, 564,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    566, 0, 567, 0, 0, 0, 0, 0, 0, 0, 568, 0, 569, 0, 0, 0, 0, 0, 0, 570, 0, 0, 571, 0, 572, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 573, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 578, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 583, 0, 584, 0, 0, 585, 0, 0, 586, 587, 0, 588, 0, 0, 589,
    0, 0, 590, 0, 0, 591, 0, 0, 592, 0, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0, 597, 0, 598, 0, 0, 0, 0, 0, 0,
    0, 599, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 603, 0, 604, 0, 605,
    0, 606, 0, 607, 0, 608, 609, 0, 610, 0, 611, 0, 612, 0, 613, 0, 0, 614, 615, 0, 0, 616, 617, 0, 0, 618, 0, 619, 0, 620, 0, 621,
    0, 622, 0, 623, 0, 0, 624, 0, 0, 625, 0, 0, 626, 0, 0, 627, 0, 0, 628, 0, 0, 629, 0, 0, 630, 0, 0, 0, 0, 0, 631, 0,
    0, 632, 0, 633, 0, 634, 0, 0, 635, 0, 636, 0, 637, 0, 638, 0, 0, 639, 0, 0, 640, 0, 0, 641, 0, 0, 642, 0, 0, 643, 0, 0,
    644, 0, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 647, 0, 648, 0, 649, 0, 0, 650, 0, 651, 0, 652, 0, 0, 653, 0, 0, 654, 0, 0,
    655, 0, 0, 656, 0, 0, 657, 0, 0, 658, 0, 0, 659, 0, 0, 0, 0, 0, 660, 0, 0, 661, 0, 662, 0, 663, 0, 0, 664, 665, 0, 666,
    0, 0, 0, 667, 0, 668, 0, 669, 0, 670, 0, 0, 0, 0, 671, 0, 0, 0, 0, 672, 0, 0, 0, 673, 0, 674, 0, 0, 675, 0, 0, 676,
    0, 0, 677, 0, 0, 678, 0, 0, 679, 0, 0, 680, 0, 0, 681, 0, 0, 682, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 686, 0, 687, 688, 0, 0, 0,
    0, 0, 689, 0, 0, 690, 0, 691, 692, 0, 693, 0, 694, 0, 0, 695, 0, 696, 0, 697, 0, 698, 0, 699, 0, 700, 0, 0, 701, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 703, 0, 0, 0, 704, 0, 0, 0, 705, 0, 0, 0, 706, 0, 0, 0, 707, 0, 0, 0, 708,
    0, 0, 0, 709, 0, 0, 0, 710, 0, 711, 0, 712,
};
void recomp_unit_0143_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A40000u;
        entry_id = (entry_delta < 16304u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0143[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A40000;
    case 2u: goto L_08A4000C;
    case 3u: goto L_08A40024;
    case 4u: goto L_08A4004C;
    case 5u: goto L_08A40058;
    case 6u: goto L_08A40064;
    case 7u: goto L_08A4006C;
    case 8u: goto L_08A40074;
    case 9u: goto L_08A40098;
    case 10u: goto L_08A400B4;
    case 11u: goto L_08A400D4;
    case 12u: goto L_08A4011C;
    case 13u: goto L_08A40134;
    case 14u: goto L_08A40160;
    case 15u: goto L_08A40170;
    case 16u: goto L_08A40178;
    case 17u: goto L_08A40198;
    case 18u: goto L_08A401A8;
    case 19u: goto L_08A401B8;
    case 20u: goto L_08A401C4;
    case 21u: goto L_08A401D0;
    case 22u: goto L_08A401E0;
    case 23u: goto L_08A401F0;
    case 24u: goto L_08A40204;
    case 25u: goto L_08A40208;
    case 26u: goto L_08A40220;
    case 27u: goto L_08A40228;
    case 28u: goto L_08A40240;
    case 29u: goto L_08A40268;
    case 30u: goto L_08A40280;
    case 31u: goto L_08A402EC;
    case 32u: goto L_08A4031C;
    case 33u: goto L_08A4033C;
    case 34u: goto L_08A40344;
    case 35u: goto L_08A4034C;
    case 36u: goto L_08A40354;
    case 37u: goto L_08A40368;
    case 38u: goto L_08A40374;
    case 39u: goto L_08A4037C;
    case 40u: goto L_08A40388;
    case 41u: goto L_08A40390;
    case 42u: goto L_08A40398;
    case 43u: goto L_08A403AC;
    case 44u: goto L_08A403B4;
    case 45u: goto L_08A403C0;
    case 46u: goto L_08A403C8;
    case 47u: goto L_08A403CC;
    case 48u: goto L_08A403E0;
    case 49u: goto L_08A4044C;
    case 50u: goto L_08A40458;
    case 51u: goto L_08A40460;
    case 52u: goto L_08A40464;
    case 53u: goto L_08A4046C;
    case 54u: goto L_08A40484;
    case 55u: goto L_08A40490;
    case 56u: goto L_08A40498;
    case 57u: goto L_08A404A4;
    case 58u: goto L_08A404AC;
    case 59u: goto L_08A404B4;
    case 60u: goto L_08A404BC;
    case 61u: goto L_08A404C4;
    case 62u: goto L_08A404CC;
    case 63u: goto L_08A404D4;
    case 64u: goto L_08A404E8;
    case 65u: goto L_08A404F0;
    case 66u: goto L_08A404FC;
    case 67u: goto L_08A40504;
    case 68u: goto L_08A40508;
    case 69u: goto L_08A40518;
    case 70u: goto L_08A40520;
    case 71u: goto L_08A4052C;
    case 72u: goto L_08A40534;
    case 73u: goto L_08A40538;
    case 74u: goto L_08A4054C;
    case 75u: goto L_08A40560;
    case 76u: goto L_08A4056C;
    case 77u: goto L_08A4057C;
    case 78u: goto L_08A4058C;
    case 79u: goto L_08A405A4;
    case 80u: goto L_08A405B4;
    case 81u: goto L_08A405F0;
    case 82u: goto L_08A405F8;
    case 83u: goto L_08A40600;
    case 84u: goto L_08A4060C;
    case 85u: goto L_08A40640;
    case 86u: goto L_08A40648;
    case 87u: goto L_08A40660;
    case 88u: goto L_08A40678;
    case 89u: goto L_08A406E0;
    case 90u: goto L_08A406F0;
    case 91u: goto L_08A4072C;
    case 92u: goto L_08A40778;
    case 93u: goto L_08A40784;
    case 94u: goto L_08A40818;
    case 95u: goto L_08A40820;
    case 96u: goto L_08A40828;
    case 97u: goto L_08A40838;
    case 98u: goto L_08A40844;
    case 99u: goto L_08A40854;
    case 100u: goto L_08A40864;
    case 101u: goto L_08A4086C;
    case 102u: goto L_08A40888;
    case 103u: goto L_08A40898;
    case 104u: goto L_08A408A8;
    case 105u: goto L_08A408FC;
    case 106u: goto L_08A40944;
    case 107u: goto L_08A40958;
    case 108u: goto L_08A40984;
    case 109u: goto L_08A409CC;
    case 110u: goto L_08A409D8;
    case 111u: goto L_08A409E4;
    case 112u: goto L_08A409FC;
    case 113u: goto L_08A40A08;
    case 114u: goto L_08A40A40;
    case 115u: goto L_08A40A5C;
    case 116u: goto L_08A40A78;
    case 117u: goto L_08A40A8C;
    case 118u: goto L_08A40AC4;
    case 119u: goto L_08A40ACC;
    case 120u: goto L_08A40ADC;
    case 121u: goto L_08A40AFC;
    case 122u: goto L_08A40B0C;
    case 123u: goto L_08A40B14;
    case 124u: goto L_08A40B1C;
    case 125u: goto L_08A40B24;
    case 126u: goto L_08A40B38;
    case 127u: goto L_08A40B48;
    case 128u: goto L_08A40B50;
    case 129u: goto L_08A40B58;
    case 130u: goto L_08A40B60;
    case 131u: goto L_08A40B6C;
    case 132u: goto L_08A40B8C;
    case 133u: goto L_08A40B98;
    case 134u: goto L_08A40BA0;
    case 135u: goto L_08A40BC8;
    case 136u: goto L_08A40BD0;
    case 137u: goto L_08A40BE0;
    case 138u: goto L_08A40BEC;
    case 139u: goto L_08A40BF8;
    case 140u: goto L_08A40C00;
    case 141u: goto L_08A40C10;
    case 142u: goto L_08A40C20;
    case 143u: goto L_08A40C28;
    case 144u: goto L_08A40C30;
    case 145u: goto L_08A40C40;
    case 146u: goto L_08A40C50;
    case 147u: goto L_08A40C58;
    case 148u: goto L_08A40C70;
    case 149u: goto L_08A40C94;
    case 150u: goto L_08A40CA0;
    case 151u: goto L_08A40CAC;
    case 152u: goto L_08A40CBC;
    case 153u: goto L_08A40CCC;
    case 154u: goto L_08A40CD4;
    case 155u: goto L_08A40CDC;
    case 156u: goto L_08A40CEC;
    case 157u: goto L_08A40CFC;
    case 158u: goto L_08A40D04;
    case 159u: goto L_08A40D34;
    case 160u: goto L_08A40D44;
    case 161u: goto L_08A40D58;
    case 162u: goto L_08A40D68;
    case 163u: goto L_08A40D70;
    case 164u: goto L_08A40D78;
    case 165u: goto L_08A40D80;
    case 166u: goto L_08A40D88;
    case 167u: goto L_08A40D90;
    case 168u: goto L_08A40D98;
    case 169u: goto L_08A40DA0;
    case 170u: goto L_08A40DA8;
    case 171u: goto L_08A40DB0;
    case 172u: goto L_08A40DB8;
    case 173u: goto L_08A40DC0;
    case 174u: goto L_08A40DC4;
    case 175u: goto L_08A40DCC;
    case 176u: goto L_08A40DFC;
    case 177u: goto L_08A40E08;
    case 178u: goto L_08A40E14;
    case 179u: goto L_08A40E28;
    case 180u: goto L_08A40E30;
    case 181u: goto L_08A40E38;
    case 182u: goto L_08A40E40;
    case 183u: goto L_08A40E48;
    case 184u: goto L_08A40E50;
    case 185u: goto L_08A40E68;
    case 186u: goto L_08A40E7C;
    case 187u: goto L_08A40E84;
    case 188u: goto L_08A40E94;
    case 189u: goto L_08A40E9C;
    case 190u: goto L_08A40EA8;
    case 191u: goto L_08A40EB0;
    case 192u: goto L_08A40EB8;
    case 193u: goto L_08A40EC4;
    case 194u: goto L_08A40ED0;
    case 195u: goto L_08A40ED8;
    case 196u: goto L_08A40EE8;
    case 197u: goto L_08A40EF0;
    case 198u: goto L_08A40EFC;
    case 199u: goto L_08A40F04;
    case 200u: goto L_08A40F14;
    case 201u: goto L_08A40F1C;
    case 202u: goto L_08A40F34;
    case 203u: goto L_08A40F40;
    case 204u: goto L_08A40F54;
    case 205u: goto L_08A40F60;
    case 206u: goto L_08A40F68;
    case 207u: goto L_08A40F7C;
    case 208u: goto L_08A40F94;
    case 209u: goto L_08A40F9C;
    case 210u: goto L_08A40FAC;
    case 211u: goto L_08A40FB0;
    case 212u: goto L_08A40FCC;
    case 213u: goto L_08A40FE4;
    case 214u: goto L_08A40FEC;
    case 215u: goto L_08A41000;
    case 216u: goto L_08A41008;
    case 217u: goto L_08A41010;
    case 218u: goto L_08A41018;
    case 219u: goto L_08A41020;
    case 220u: goto L_08A41030;
    case 221u: goto L_08A4106C;
    case 222u: goto L_08A41074;
    case 223u: goto L_08A4107C;
    case 224u: goto L_08A41090;
    case 225u: goto L_08A410A4;
    case 226u: goto L_08A41114;
    case 227u: goto L_08A4111C;
    case 228u: goto L_08A41124;
    case 229u: goto L_08A4112C;
    case 230u: goto L_08A41144;
    case 231u: goto L_08A41148;
    case 232u: goto L_08A411A4;
    case 233u: goto L_08A411A8;
    case 234u: goto L_08A411C0;
    case 235u: goto L_08A41208;
    case 236u: goto L_08A4121C;
    case 237u: goto L_08A41254;
    case 238u: goto L_08A41290;
    case 239u: goto L_08A412B0;
    case 240u: goto L_08A412CC;
    case 241u: goto L_08A41324;
    case 242u: goto L_08A41344;
    case 243u: goto L_08A41358;
    case 244u: goto L_08A413A8;
    case 245u: goto L_08A413C8;
    case 246u: goto L_08A413DC;
    case 247u: goto L_08A4142C;
    case 248u: goto L_08A4144C;
    case 249u: goto L_08A41460;
    case 250u: goto L_08A414B0;
    case 251u: goto L_08A414D0;
    case 252u: goto L_08A414E4;
    case 253u: goto L_08A41534;
    case 254u: goto L_08A41560;
    case 255u: goto L_08A41568;
    case 256u: goto L_08A41598;
    case 257u: goto L_08A415D8;
    case 258u: goto L_08A415EC;
    case 259u: goto L_08A41600;
    case 260u: goto L_08A41660;
    case 261u: goto L_08A41668;
    case 262u: goto L_08A41670;
    case 263u: goto L_08A41688;
    case 264u: goto L_08A416D8;
    case 265u: goto L_08A41710;
    case 266u: goto L_08A41718;
    case 267u: goto L_08A41744;
    case 268u: goto L_08A41764;
    case 269u: goto L_08A41770;
    case 270u: goto L_08A41778;
    case 271u: goto L_08A41780;
    case 272u: goto L_08A41788;
    case 273u: goto L_08A41790;
    case 274u: goto L_08A41798;
    case 275u: goto L_08A417A0;
    case 276u: goto L_08A417A8;
    case 277u: goto L_08A417B0;
    case 278u: goto L_08A417B8;
    case 279u: goto L_08A417C0;
    case 280u: goto L_08A417C8;
    case 281u: goto L_08A417D0;
    case 282u: goto L_08A417D4;
    case 283u: goto L_08A417DC;
    case 284u: goto L_08A417EC;
    case 285u: goto L_08A41804;
    case 286u: goto L_08A4180C;
    case 287u: goto L_08A41818;
    case 288u: goto L_08A41820;
    case 289u: goto L_08A41824;
    case 290u: goto L_08A4182C;
    case 291u: goto L_08A41850;
    case 292u: goto L_08A41864;
    case 293u: goto L_08A41874;
    case 294u: goto L_08A41884;
    case 295u: goto L_08A4188C;
    case 296u: goto L_08A41894;
    case 297u: goto L_08A418AC;
    case 298u: goto L_08A418C8;
    case 299u: goto L_08A41904;
    case 300u: goto L_08A41928;
    case 301u: goto L_08A4194C;
    case 302u: goto L_08A41968;
    case 303u: goto L_08A4197C;
    case 304u: goto L_08A41984;
    case 305u: goto L_08A419B8;
    case 306u: goto L_08A419E4;
    case 307u: goto L_08A419F4;
    case 308u: goto L_08A41A04;
    case 309u: goto L_08A41A0C;
    case 310u: goto L_08A41A14;
    case 311u: goto L_08A41A2C;
    case 312u: goto L_08A41A34;
    case 313u: goto L_08A41A4C;
    case 314u: goto L_08A41A54;
    case 315u: goto L_08A41A6C;
    case 316u: goto L_08A41A84;
    case 317u: goto L_08A41A8C;
    case 318u: goto L_08A41AAC;
    case 319u: goto L_08A41B20;
    case 320u: goto L_08A41B28;
    case 321u: goto L_08A41B2C;
    case 322u: goto L_08A41B3C;
    case 323u: goto L_08A41B44;
    case 324u: goto L_08A41B54;
    case 325u: goto L_08A41B5C;
    case 326u: goto L_08A41B6C;
    case 327u: goto L_08A41B74;
    case 328u: goto L_08A41B84;
    case 329u: goto L_08A41B8C;
    case 330u: goto L_08A41B9C;
    case 331u: goto L_08A41BA4;
    case 332u: goto L_08A41BB0;
    case 333u: goto L_08A41BC0;
    case 334u: goto L_08A41BC8;
    case 335u: goto L_08A41BD8;
    case 336u: goto L_08A41BE0;
    case 337u: goto L_08A41BF4;
    case 338u: goto L_08A41BFC;
    case 339u: goto L_08A41C00;
    case 340u: goto L_08A41C0C;
    case 341u: goto L_08A41C1C;
    case 342u: goto L_08A41C30;
    case 343u: goto L_08A41C40;
    case 344u: goto L_08A41C54;
    case 345u: goto L_08A41C64;
    case 346u: goto L_08A41C78;
    case 347u: goto L_08A41C88;
    case 348u: goto L_08A41C90;
    case 349u: goto L_08A41C98;
    case 350u: goto L_08A41CA0;
    case 351u: goto L_08A41CC0;
    case 352u: goto L_08A41CD0;
    case 353u: goto L_08A41CE4;
    case 354u: goto L_08A41D28;
    case 355u: goto L_08A41D7C;
    case 356u: goto L_08A41D88;
    case 357u: goto L_08A41DBC;
    case 358u: goto L_08A41EA0;
    case 359u: goto L_08A41ED8;
    case 360u: goto L_08A41EE0;
    case 361u: goto L_08A41F10;
    case 362u: goto L_08A41F18;
    case 363u: goto L_08A41F34;
    case 364u: goto L_08A41FD8;
    case 365u: goto L_08A41FE0;
    case 366u: goto L_08A41FE4;
    case 367u: goto L_08A42004;
    case 368u: goto L_08A42018;
    case 369u: goto L_08A42020;
    case 370u: goto L_08A42028;
    case 371u: goto L_08A42030;
    case 372u: goto L_08A42038;
    case 373u: goto L_08A42040;
    case 374u: goto L_08A42068;
    case 375u: goto L_08A42070;
    case 376u: goto L_08A42090;
    case 377u: goto L_08A420AC;
    case 378u: goto L_08A420BC;
    case 379u: goto L_08A420D0;
    case 380u: goto L_08A420E8;
    case 381u: goto L_08A420F0;
    case 382u: goto L_08A420F4;
    case 383u: goto L_08A420FC;
    case 384u: goto L_08A4210C;
    case 385u: goto L_08A42118;
    case 386u: goto L_08A42120;
    case 387u: goto L_08A42128;
    case 388u: goto L_08A4212C;
    case 389u: goto L_08A42134;
    case 390u: goto L_08A42178;
    case 391u: goto L_08A42180;
    case 392u: goto L_08A42188;
    case 393u: goto L_08A42190;
    case 394u: goto L_08A42198;
    case 395u: goto L_08A421A0;
    case 396u: goto L_08A421AC;
    case 397u: goto L_08A421B4;
    case 398u: goto L_08A421BC;
    case 399u: goto L_08A421D4;
    case 400u: goto L_08A421DC;
    case 401u: goto L_08A421EC;
    case 402u: goto L_08A42208;
    case 403u: goto L_08A4221C;
    case 404u: goto L_08A4225C;
    case 405u: goto L_08A42270;
    case 406u: goto L_08A42284;
    case 407u: goto L_08A4228C;
    case 408u: goto L_08A422B4;
    case 409u: goto L_08A422E4;
    case 410u: goto L_08A422F0;
    case 411u: goto L_08A422F8;
    case 412u: goto L_08A422FC;
    case 413u: goto L_08A4230C;
    case 414u: goto L_08A42374;
    case 415u: goto L_08A42384;
    case 416u: goto L_08A4238C;
    case 417u: goto L_08A42394;
    case 418u: goto L_08A42398;
    case 419u: goto L_08A423F0;
    case 420u: goto L_08A42438;
    case 421u: goto L_08A42484;
    case 422u: goto L_08A4248C;
    case 423u: goto L_08A424C0;
    case 424u: goto L_08A42520;
    case 425u: goto L_08A42528;
    case 426u: goto L_08A4255C;
    case 427u: goto L_08A42588;
    case 428u: goto L_08A4259C;
    case 429u: goto L_08A425D0;
    case 430u: goto L_08A425F8;
    case 431u: goto L_08A42608;
    case 432u: goto L_08A42614;
    case 433u: goto L_08A42628;
    case 434u: goto L_08A42644;
    case 435u: goto L_08A4265C;
    case 436u: goto L_08A42670;
    case 437u: goto L_08A426AC;
    case 438u: goto L_08A426C0;
    case 439u: goto L_08A426C4;
    case 440u: goto L_08A426D4;
    case 441u: goto L_08A426E0;
    case 442u: goto L_08A426F0;
    case 443u: goto L_08A426F8;
    case 444u: goto L_08A42700;
    case 445u: goto L_08A42708;
    case 446u: goto L_08A42710;
    case 447u: goto L_08A42718;
    case 448u: goto L_08A42760;
    case 449u: goto L_08A42774;
    case 450u: goto L_08A4277C;
    case 451u: goto L_08A42784;
    case 452u: goto L_08A42790;
    case 453u: goto L_08A427A4;
    case 454u: goto L_08A427AC;
    case 455u: goto L_08A427B4;
    case 456u: goto L_08A427C0;
    case 457u: goto L_08A427E0;
    case 458u: goto L_08A427E8;
    case 459u: goto L_08A427F8;
    case 460u: goto L_08A42808;
    case 461u: goto L_08A4280C;
    case 462u: goto L_08A42814;
    case 463u: goto L_08A4281C;
    case 464u: goto L_08A42834;
    case 465u: goto L_08A42838;
    case 466u: goto L_08A4283C;
    case 467u: goto L_08A4286C;
    case 468u: goto L_08A42874;
    case 469u: goto L_08A42878;
    case 470u: goto L_08A42880;
    case 471u: goto L_08A42920;
    case 472u: goto L_08A42928;
    case 473u: goto L_08A4295C;
    case 474u: goto L_08A42968;
    case 475u: goto L_08A42980;
    case 476u: goto L_08A4298C;
    case 477u: goto L_08A429A8;
    case 478u: goto L_08A429B0;
    case 479u: goto L_08A429FC;
    case 480u: goto L_08A42A0C;
    case 481u: goto L_08A42A2C;
    case 482u: goto L_08A42A34;
    case 483u: goto L_08A42A54;
    case 484u: goto L_08A42AF0;
    case 485u: goto L_08A42AF8;
    case 486u: goto L_08A42B2C;
    case 487u: goto L_08A42B48;
    case 488u: goto L_08A42B50;
    case 489u: goto L_08A42BA4;
    case 490u: goto L_08A42BC4;
    case 491u: goto L_08A42C68;
    case 492u: goto L_08A42C70;
    case 493u: goto L_08A42CA4;
    case 494u: goto L_08A42CC0;
    case 495u: goto L_08A42CC8;
    case 496u: goto L_08A42D1C;
    case 497u: goto L_08A42D3C;
    case 498u: goto L_08A42D48;
    case 499u: goto L_08A42DEC;
    case 500u: goto L_08A42DF4;
    case 501u: goto L_08A42E28;
    case 502u: goto L_08A42E44;
    case 503u: goto L_08A42E70;
    case 504u: goto L_08A42F04;
    case 505u: goto L_08A42F80;
    case 506u: goto L_08A42F98;
    case 507u: goto L_08A43010;
    case 508u: goto L_08A4302C;
    case 509u: goto L_08A4304C;
    case 510u: goto L_08A4306C;
    case 511u: goto L_08A430B8;
    case 512u: goto L_08A430C0;
    case 513u: goto L_08A4313C;
    case 514u: goto L_08A43188;
    case 515u: goto L_08A43190;
    case 516u: goto L_08A431A0;
    case 517u: goto L_08A4321C;
    case 518u: goto L_08A4322C;
    case 519u: goto L_08A43248;
    case 520u: goto L_08A43268;
    case 521u: goto L_08A43288;
    case 522u: goto L_08A432D4;
    case 523u: goto L_08A432DC;
    case 524u: goto L_08A43300;
    case 525u: goto L_08A43378;
    case 526u: goto L_08A433C8;
    case 527u: goto L_08A43404;
    case 528u: goto L_08A4345C;
    case 529u: goto L_08A43468;
    case 530u: goto L_08A43488;
    case 531u: goto L_08A4349C;
    case 532u: goto L_08A434A4;
    case 533u: goto L_08A434E4;
    case 534u: goto L_08A434F0;
    case 535u: goto L_08A434F8;
    case 536u: goto L_08A43500;
    case 537u: goto L_08A4350C;
    case 538u: goto L_08A43514;
    case 539u: goto L_08A43518;
    case 540u: goto L_08A43524;
    case 541u: goto L_08A4352C;
    case 542u: goto L_08A43538;
    case 543u: goto L_08A43540;
    case 544u: goto L_08A43544;
    case 545u: goto L_08A43554;
    case 546u: goto L_08A43568;
    case 547u: goto L_08A4358C;
    case 548u: goto L_08A435AC;
    case 549u: goto L_08A435B4;
    case 550u: goto L_08A435C0;
    case 551u: goto L_08A435D0;
    case 552u: goto L_08A435EC;
    case 553u: goto L_08A43604;
    case 554u: goto L_08A4361C;
    case 555u: goto L_08A43654;
    case 556u: goto L_08A43664;
    case 557u: goto L_08A4366C;
    case 558u: goto L_08A4368C;
    case 559u: goto L_08A436B8;
    case 560u: goto L_08A436D8;
    case 561u: goto L_08A436E4;
    case 562u: goto L_08A436EC;
    case 563u: goto L_08A436F4;
    case 564u: goto L_08A436FC;
    case 565u: goto L_08A43728;
    case 566u: goto L_08A43780;
    case 567u: goto L_08A43788;
    case 568u: goto L_08A437A8;
    case 569u: goto L_08A437B0;
    case 570u: goto L_08A437CC;
    case 571u: goto L_08A437D8;
    case 572u: goto L_08A437E0;
    case 573u: goto L_08A43808;
    case 574u: goto L_08A43810;
    case 575u: goto L_08A43838;
    case 576u: goto L_08A43840;
    case 577u: goto L_08A43864;
    case 578u: goto L_08A4386C;
    case 579u: goto L_08A438C0;
    case 580u: goto L_08A438D0;
    case 581u: goto L_08A438FC;
    case 582u: goto L_08A43938;
    case 583u: goto L_08A43944;
    case 584u: goto L_08A4394C;
    case 585u: goto L_08A43958;
    case 586u: goto L_08A43964;
    case 587u: goto L_08A43968;
    case 588u: goto L_08A43970;
    case 589u: goto L_08A4397C;
    case 590u: goto L_08A43988;
    case 591u: goto L_08A43994;
    case 592u: goto L_08A439A0;
    case 593u: goto L_08A439AC;
    case 594u: goto L_08A439B8;
    case 595u: goto L_08A439C4;
    case 596u: goto L_08A439D0;
    case 597u: goto L_08A439DC;
    case 598u: goto L_08A439E4;
    case 599u: goto L_08A43A04;
    case 600u: goto L_08A43A14;
    case 601u: goto L_08A43A24;
    case 602u: goto L_08A43A64;
    case 603u: goto L_08A43A6C;
    case 604u: goto L_08A43A74;
    case 605u: goto L_08A43A7C;
    case 606u: goto L_08A43A84;
    case 607u: goto L_08A43A8C;
    case 608u: goto L_08A43A94;
    case 609u: goto L_08A43A98;
    case 610u: goto L_08A43AA0;
    case 611u: goto L_08A43AA8;
    case 612u: goto L_08A43AB0;
    case 613u: goto L_08A43AB8;
    case 614u: goto L_08A43AC4;
    case 615u: goto L_08A43AC8;
    case 616u: goto L_08A43AD4;
    case 617u: goto L_08A43AD8;
    case 618u: goto L_08A43AE4;
    case 619u: goto L_08A43AEC;
    case 620u: goto L_08A43AF4;
    case 621u: goto L_08A43AFC;
    case 622u: goto L_08A43B04;
    case 623u: goto L_08A43B0C;
    case 624u: goto L_08A43B18;
    case 625u: goto L_08A43B24;
    case 626u: goto L_08A43B30;
    case 627u: goto L_08A43B3C;
    case 628u: goto L_08A43B48;
    case 629u: goto L_08A43B54;
    case 630u: goto L_08A43B60;
    case 631u: goto L_08A43B78;
    case 632u: goto L_08A43B84;
    case 633u: goto L_08A43B8C;
    case 634u: goto L_08A43B94;
    case 635u: goto L_08A43BA0;
    case 636u: goto L_08A43BA8;
    case 637u: goto L_08A43BB0;
    case 638u: goto L_08A43BB8;
    case 639u: goto L_08A43BC4;
    case 640u: goto L_08A43BD0;
    case 641u: goto L_08A43BDC;
    case 642u: goto L_08A43BE8;
    case 643u: goto L_08A43BF4;
    case 644u: goto L_08A43C00;
    case 645u: goto L_08A43C0C;
    case 646u: goto L_08A43C24;
    case 647u: goto L_08A43C30;
    case 648u: goto L_08A43C38;
    case 649u: goto L_08A43C40;
    case 650u: goto L_08A43C4C;
    case 651u: goto L_08A43C54;
    case 652u: goto L_08A43C5C;
    case 653u: goto L_08A43C68;
    case 654u: goto L_08A43C74;
    case 655u: goto L_08A43C80;
    case 656u: goto L_08A43C8C;
    case 657u: goto L_08A43C98;
    case 658u: goto L_08A43CA4;
    case 659u: goto L_08A43CB0;
    case 660u: goto L_08A43CC8;
    case 661u: goto L_08A43CD4;
    case 662u: goto L_08A43CDC;
    case 663u: goto L_08A43CE4;
    case 664u: goto L_08A43CF0;
    case 665u: goto L_08A43CF4;
    case 666u: goto L_08A43CFC;
    case 667u: goto L_08A43D0C;
    case 668u: goto L_08A43D14;
    case 669u: goto L_08A43D1C;
    case 670u: goto L_08A43D24;
    case 671u: goto L_08A43D38;
    case 672u: goto L_08A43D4C;
    case 673u: goto L_08A43D5C;
    case 674u: goto L_08A43D64;
    case 675u: goto L_08A43D70;
    case 676u: goto L_08A43D7C;
    case 677u: goto L_08A43D88;
    case 678u: goto L_08A43D94;
    case 679u: goto L_08A43DA0;
    case 680u: goto L_08A43DAC;
    case 681u: goto L_08A43DB8;
    case 682u: goto L_08A43DC4;
    case 683u: goto L_08A43DD0;
    case 684u: goto L_08A43DF4;
    case 685u: goto L_08A43E58;
    case 686u: goto L_08A43E64;
    case 687u: goto L_08A43E6C;
    case 688u: goto L_08A43E70;
    case 689u: goto L_08A43E88;
    case 690u: goto L_08A43E94;
    case 691u: goto L_08A43E9C;
    case 692u: goto L_08A43EA0;
    case 693u: goto L_08A43EA8;
    case 694u: goto L_08A43EB0;
    case 695u: goto L_08A43EBC;
    case 696u: goto L_08A43EC4;
    case 697u: goto L_08A43ECC;
    case 698u: goto L_08A43ED4;
    case 699u: goto L_08A43EDC;
    case 700u: goto L_08A43EE4;
    case 701u: goto L_08A43EF0;
    case 702u: goto L_08A43F24;
    case 703u: goto L_08A43F2C;
    case 704u: goto L_08A43F3C;
    case 705u: goto L_08A43F4C;
    case 706u: goto L_08A43F5C;
    case 707u: goto L_08A43F6C;
    case 708u: goto L_08A43F7C;
    case 709u: goto L_08A43F8C;
    case 710u: goto L_08A43F9C;
    case 711u: goto L_08A43FA4;
    case 712u: goto L_08A43FAC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A40000:
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08A4000Cu);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 572u, 0x08A3FBC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4000Cu) goto L_08A4000C;
    return;
L_08A4000C:
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
    hot_regs.g31 = (0x08A40024u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 572u, 0x08A3FBC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40024u) goto L_08A40024;
    return;
L_08A40024:
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(40), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(43), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g31 = (0x08A4004Cu);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4004Cu) goto L_08A4004C;
    return;
L_08A4004C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4006C;
      }
      goto L_08A40058;
    }
L_08A40058:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A40074;
      }
      goto L_08A40064;
    }
}
L_08A40064:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A400B4;
      }
      goto L_08A4006C;
    }
L_08A4006C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A400B4;
      }
      goto L_08A40074;
    }
L_08A40074:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
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
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x08A40098u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 649u, 0x08872C78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40098u) goto L_08A40098;
    return;
L_08A40098:
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
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A400B4u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    goto L_08A411C0;
L_08A400B4:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A400D4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(204), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(208), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(212), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(216), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(220), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(224), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(228), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(240), hot_regs.g6);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08A4011Cu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 572u, 0x08A3FBC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4011Cu) goto L_08A4011C;
    return;
L_08A4011C:
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
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08A40134u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 572u, 0x08A3FBC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40134u) goto L_08A40134;
    return;
L_08A40134:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[21] = (2237u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-28736));
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(28), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(31), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A40160u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40160u) goto L_08A40160;
    return;
L_08A40160:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 | 0u);
    ctx.gpr[22] = (0u | 0u);
    if (g4 != 0u) {
    ctx.gpr[22] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(112)));
    hot_regs.g4 = g4;
        goto L_08A40170;
    }
    goto L_08A40170;
}
L_08A40170:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A401A8;
      }
      goto L_08A40178;
    }
L_08A40178:
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g7 = (16256u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g7);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08A40198u);
    hot_regs.g6 = (0u | 55u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40198u) goto L_08A40198;
    return;
L_08A40198:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08A401A8u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 501u, 0x08A05F5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A401A8u) goto L_08A401A8;
    return;
L_08A401A8:
    ctx.gpr[23] = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A401B8u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A401B8u) goto L_08A401B8;
    return;
L_08A401B8:
    ctx.gpr[30] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40208;
      }
      goto L_08A401C4;
    }
L_08A401C4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
        goto L_08A401F0;
    }
    goto L_08A401D0;
}
L_08A401D0:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    hot_regs.g31 = (0x08A401E0u);
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A401E0u) goto L_08A401E0;
    return;
L_08A401E0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g30 = ctx.gpr[30];
    aot_mem.aot_store32(g30 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store8(g30 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g30 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_08A401F0;
}
L_08A401F0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(102)));
    g4 = (g4 & 1u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A40208;
      }
      goto L_08A40204;
    }
}
L_08A40204:
    ctx.gpr[23] = (0u | 1u);
    goto L_08A40208;
L_08A40208:
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(28), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(31), hot_regs.g6));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g31 = (0x08A40220u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40220u) goto L_08A40220;
    return;
L_08A40220:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40268;
      }
      goto L_08A40228;
    }
L_08A40228:
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(28), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(31), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A40240u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40240u) goto L_08A40240;
    return;
L_08A40240:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(112)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A40268u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 780u, 0x08ACE694u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40268u) goto L_08A40268;
    return;
L_08A40268:
    hot_regs.g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A40280u);
    hot_regs.g4 = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40280u) goto L_08A40280;
    return;
L_08A40280:
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(12)));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[9] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (0u | 30u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A402ECu);
    ctx.gpr[11] = (0u | 0u);
    goto L_08A42880;
L_08A402EC:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(196)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(204)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(208)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(212)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(220)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(224)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(228)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A4031C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(900)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A40354;
      }
      goto L_08A4033C;
    }
}
L_08A4033C:
    hot_regs.g31 = (0x08A40344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40344u) goto L_08A40344;
    return;
L_08A40344:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40354;
      }
      goto L_08A4034C;
    }
L_08A4034C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
      if (branch_taken) {
          goto L_08A403CC;
      }
      goto L_08A40354;
    }
L_08A40354:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    ctx.gpr[17] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A403C8;
      }
      goto L_08A40368;
    }
}
L_08A40368:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A40374u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40374u) goto L_08A40374;
    return;
L_08A40374:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40398;
      }
      goto L_08A4037C;
    }
L_08A4037C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A40388u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40388u) goto L_08A40388;
    return;
L_08A40388:
    hot_regs.g31 = (0x08A40390u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40390u) goto L_08A40390;
    return;
L_08A40390:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A403B4;
      }
      goto L_08A40398;
    }
L_08A40398:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    g17 = (g17 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A40368;
      }
      goto L_08A403AC;
    }
}
L_08A403AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A403C8;
      }
      goto L_08A403B4;
    }
L_08A403B4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A403C0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A403C0u) goto L_08A403C0;
    return;
L_08A403C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A403CC;
      }
      goto L_08A403C8;
    }
L_08A403C8:
    hot_regs.g2 = (0u | 0u);
    goto L_08A403CC;
L_08A403CC:
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
L_08A403E0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[18] = (2237u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), hot_regs.g6);
    ctx.gpr[21] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28736));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g5 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(52)));
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[21] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[21] + static_cast<std::uint32_t>(6), hot_regs.g6));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), hot_regs.g31);
    hot_regs.g31 = (0x08A4044Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4044Cu) goto L_08A4044C;
    return;
L_08A4044C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40464;
      }
      goto L_08A40458;
    }
L_08A40458:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40464;
      }
      goto L_08A40460;
    }
L_08A40460:
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(104)));
    goto L_08A40464;
L_08A40464:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A404C4;
      }
      goto L_08A4046C;
    }
L_08A4046C:
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[21] + static_cast<std::uint32_t>(5), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[21] + static_cast<std::uint32_t>(8), hot_regs.g6));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g31 = (0x08A40484u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40484u) goto L_08A40484;
    return;
L_08A40484:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A404BC;
      }
      goto L_08A40490;
    }
L_08A40490:
    hot_regs.g31 = (0x08A40498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40498u) goto L_08A40498;
    return;
L_08A40498:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A404A4u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 108u, 0x089387ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A404A4u) goto L_08A404A4;
    return;
L_08A404A4:
    hot_regs.g31 = (0x08A404ACu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 327u, 0x08911284u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A404ACu) goto L_08A404AC;
    return;
L_08A404AC:
    if (hot_regs.g2 != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
        goto L_08A404CC;
    }
    goto L_08A404B4;
L_08A404B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40560;
      }
      goto L_08A404BC;
    }
L_08A404BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A406F0;
      }
      goto L_08A404C4;
    }
L_08A404C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A406F0;
      }
      goto L_08A404CC;
    }
L_08A404CC:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A404E8;
      }
      goto L_08A404D4;
    }
L_08A404D4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    hot_regs.g5 = (0u | 6u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A40560;
      }
      goto L_08A404E8;
    }
}
L_08A404E8:
    hot_regs.g31 = (0x08A404F0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 281u, 0x088E2A9Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A404F0u) goto L_08A404F0;
    return;
L_08A404F0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    hot_regs.g4 = g4;
        goto L_08A40508;
    }
    goto L_08A404FC;
}
L_08A404FC:
    hot_regs.g31 = (0x08A40504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40504u) goto L_08A40504;
    return;
L_08A40504:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08A40508;
L_08A40508:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    hot_regs.g31 = (0x08A40518u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 600u, 0x0893E5E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40518u) goto L_08A40518;
    return;
L_08A40518:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40560;
      }
      goto L_08A40520;
    }
L_08A40520:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    hot_regs.g4 = g4;
        goto L_08A40538;
    }
    goto L_08A4052C;
}
L_08A4052C:
    hot_regs.g31 = (0x08A40534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40534u) goto L_08A40534;
    return;
L_08A40534:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08A40538;
L_08A40538:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    hot_regs.g7 = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08A4054Cu);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4054Cu) goto L_08A4054C;
    return;
L_08A4054C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = (16640u << 16u);
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08A40560;
}
L_08A40560:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
        goto L_08A4058C;
    }
    goto L_08A4056C;
}
L_08A4056C:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x08A4057Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4057Cu) goto L_08A4057C;
    return;
L_08A4057C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_08A4058C;
}
L_08A4058C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(204))))));
    g4 = (g4 & 2u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A405F0;
      }
      goto L_08A405A4;
    }
}
L_08A405A4:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A405B4u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A405B4u) goto L_08A405B4;
    return;
L_08A405B4:
    hot_regs.g4 = (rt.memory().aot_load_word_right(ctx.gpr[21] + static_cast<std::uint32_t>(9), hot_regs.g4));
    hot_regs.g4 = (rt.memory().aot_load_word_left(ctx.gpr[21] + static_cast<std::uint32_t>(12), hot_regs.g4));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(112)));
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[21] + static_cast<std::uint32_t>(7), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[21] + static_cast<std::uint32_t>(10), hot_regs.g7));
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g7 = (hot_regs.g7 << 16u);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 16u));
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 45u);
    hot_regs.g31 = (0x08A405F0u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A405F0u) goto L_08A405F0;
    return;
L_08A405F0:
    hot_regs.g31 = (0x08A405F8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A405F8u) goto L_08A405F8;
    return;
L_08A405F8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A406F0;
      }
      goto L_08A40600;
    }
L_08A40600:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A406F0;
      }
      goto L_08A4060C;
    }
L_08A4060C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g21 = ctx.gpr[21];
    g4 = (48588u << 16u);
    hot_regs.f20 = std::bit_cast<float>(0u);
    g4 = (g4 | 52429u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    ctx.gpr[17] = (g21 + static_cast<std::uint32_t>(12));
    g4 = (15820u << 16u);
    ctx.gpr[19] = (g21 + static_cast<std::uint32_t>(16));
    g4 = (g4 | 52429u);
    ctx.gpr[16] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    g21 = (g21 + static_cast<std::uint32_t>(20));
    ctx.gpr[23] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[30] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g4 = g4;
    ctx.gpr[21] = g21;
    goto L_08A40640;
}
L_08A40640:
    hot_regs.g31 = (0x08A40648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40648u) goto L_08A40648;
    return;
L_08A40648:
    hot_regs.f12 = ctx.fpr[24] - hot_regs.f22;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f22 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A40660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40660u) goto L_08A40660;
    return;
L_08A40660:
    hot_regs.f12 = ctx.fpr[24] - hot_regs.f22;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f22 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A40678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40678u) goto L_08A40678;
    return;
L_08A40678:
    hot_regs.f12 = ctx.fpr[24] - hot_regs.f22;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f22 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[18] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[18]));
    ctx.gpr[18] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]));
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[20] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[20]));
    ctx.gpr[20] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[20]));
    hot_regs.f13 = std::bit_cast<float>(ctx.gpr[20]);
    ctx.gpr[22] = (rt.memory().aot_load_word_left(ctx.gpr[21] + static_cast<std::uint32_t>(3), ctx.gpr[22]));
    ctx.gpr[22] = (rt.memory().aot_load_word_right(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[22]));
    hot_regs.f14 = std::bit_cast<float>(ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (0u | 6u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A406E0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A406E0u) goto L_08A406E0;
    return;
L_08A406E0:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A40640;
      }
      goto L_08A406F0;
    }
}
L_08A406F0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
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
L_08A4072C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), hot_regs.g6);
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(39), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(42), hot_regs.g6));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    ctx.gpr[20] = (2237u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-28736));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), hot_regs.g31);
    hot_regs.g31 = (0x08A40778u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40778u) goto L_08A40778;
    return;
L_08A40778:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40820;
      }
      goto L_08A40784;
    }
L_08A40784:
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(3));
    hot_regs.g5 = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(7));
    hot_regs.g5 = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(11));
    hot_regs.g5 = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(15));
    hot_regs.g5 = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(19));
    hot_regs.g5 = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(23));
    hot_regs.g5 = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    hot_regs.f22 = std::bit_cast<float>(0u);
    hot_regs.g5 = (16256u << 16u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g5);
      if (branch_taken) {
          goto L_08A40828;
      }
      goto L_08A40818;
    }
L_08A40818:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40844;
      }
      goto L_08A40820;
    }
L_08A40820:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40958;
      }
      goto L_08A40828;
    }
L_08A40828:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g31 = (0x08A40838u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40838u) goto L_08A40838;
    return;
L_08A40838:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), hot_regs.g2);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A40844;
L_08A40844:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A40854u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(208))))));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 16u, 0x08ADC120u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40854u) goto L_08A40854;
    return;
L_08A40854:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 | 0u);
    ctx.gpr[20] = (0u | 0u);
    if (g4 != 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(112)));
    hot_regs.g4 = g4;
        goto L_08A40864;
    }
    goto L_08A40864;
}
L_08A40864:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40898;
      }
      goto L_08A4086C;
    }
L_08A4086C:
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A40888u);
    hot_regs.g6 = (0u | 55u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40888u) goto L_08A40888;
    return;
L_08A40888:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A40898u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 501u, 0x08A05F5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40898u) goto L_08A40898;
    return;
L_08A40898:
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(27));
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g31 = (0x08A408A8u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 572u, 0x08A3FBC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A408A8u) goto L_08A408A8;
    return;
L_08A408A8:
    hot_regs.g4 = (16332u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
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
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (15928u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 20972u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 16u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A408FCu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A408FCu) goto L_08A408FC;
    return;
L_08A408FC:
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
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (16544u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16204u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08A40944u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40944u) goto L_08A40944;
    return;
L_08A40944:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A40958u);
    hot_regs.g6 = (0u | 45u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 324u, 0x088AA4A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40958u) goto L_08A40958;
    return;
L_08A40958:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A40984:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2237u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), hot_regs.g6);
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28736));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(5), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(8), hot_regs.g6));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g5 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(52)));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    hot_regs.g31 = (0x08A409CCu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A409CCu) goto L_08A409CC;
    return;
L_08A409CC:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40A40;
      }
      goto L_08A409D8;
    }
L_08A409D8:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = g17 == 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A40A40;
      }
      goto L_08A409E4;
    }
}
L_08A409E4:
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(6), hot_regs.g6));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g31 = (0x08A409FCu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A409FCu) goto L_08A409FC;
    return;
L_08A409FC:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40A40;
      }
      goto L_08A40A08;
    }
L_08A40A08:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    hot_regs.g4 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(7), hot_regs.g4));
    hot_regs.g4 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(10), hot_regs.g4));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A40A40u);
    hot_regs.g7 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 71u, 0x08B0452Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40A40u) goto L_08A40A40;
    return;
L_08A40A40:
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
L_08A40A5C:
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
    ctx.fpr[0] = std::bit_cast<float>(hot_regs.g4);
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40A78:
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A40A8C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g16);
    g16 = (g4 | 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(16), hot_regs.g6);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    g5 = (2u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-31073));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A40ACC;
      }
      goto L_08A40AC4;
    }
}
L_08A40AC4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-31073));
    hot_regs.g4 = g4;
    goto L_08A40ACC;
}
L_08A40ACC:
{
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(16), hot_regs.g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(12), 0u);
    hot_regs.g31 = (0x08A40ADCu);
    hot_regs.g4 = (g16 | 0u);
    goto L_08A40FCC;
}
L_08A40ADC:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(20), 0u);
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g2 = (g16 | 0u);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A40AFC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A40B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 644u, 0x08872BB8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40B0Cu) goto L_08A40B0C;
    return;
L_08A40B0C:
    hot_regs.g31 = (0x08A40B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 237u, 0x089E92B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40B14u) goto L_08A40B14;
    return;
L_08A40B14:
    hot_regs.g31 = (0x08A40B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 28u, 0x088802E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40B1Cu) goto L_08A40B1C;
    return;
L_08A40B1C:
    hot_regs.g31 = (0x08A40B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 777u, 0x08ACE658u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40B24u) goto L_08A40B24;
    return;
L_08A40B24:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7592), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A40B38:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A40B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 678u, 0x08872F84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40B48u) goto L_08A40B48;
    return;
L_08A40B48:
    hot_regs.g31 = (0x08A40B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 478u, 0x089EAA94u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40B50u) goto L_08A40B50;
    return;
L_08A40B50:
    hot_regs.g31 = (0x08A40B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 338u, 0x08881FD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40B58u) goto L_08A40B58;
    return;
L_08A40B58:
    hot_regs.g31 = (0x08A40B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 835u, 0x08ACEA1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40B60u) goto L_08A40B60;
    return;
L_08A40B60:
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
L_08A40B6C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) < 0;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A40B98;
      }
      goto L_08A40B8C;
    }
}
L_08A40B8C:
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g5) < 54 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40BA0;
      }
      goto L_08A40B98;
    }
L_08A40B98:
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    goto L_08A40BA0;
L_08A40BA0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(16), hot_regs.g6);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), hot_regs.g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    g4 = (2u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-31073));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A40BD0;
      }
      goto L_08A40BC8;
    }
}
L_08A40BC8:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (2u << 16u);
    g18 = (g18 + static_cast<std::uint32_t>(-31073));
    ctx.gpr[18] = g18;
    goto L_08A40BD0;
}
L_08A40BD0:
{
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(12), 0u);
    hot_regs.g31 = (0x08A40BE0u);
    hot_regs.g4 = (g16 | 0u);
    goto L_08A40FCC;
}
L_08A40BE0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08A40BECu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40BECu) goto L_08A40BEC;
    return;
L_08A40BEC:
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(96)));
    hot_regs.g31 = (0x08A40BF8u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40BF8u) goto L_08A40BF8;
    return;
L_08A40BF8:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08A40C28;
      }
      goto L_08A40C00;
    }
L_08A40C00:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A40C20;
      }
      goto L_08A40C10;
    }
}
L_08A40C10:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (ctx.gpr[18] << 2u);
    g4 = (g4 + hot_regs.g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_08A40C20;
}
L_08A40C20:
    hot_regs.g31 = (0x08A40C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 458u, 0x088DF74Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40C28u) goto L_08A40C28;
    return;
L_08A40C28:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A40C58;
      }
      goto L_08A40C30;
    }
L_08A40C30:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g5 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A40C50;
      }
      goto L_08A40C40;
    }
}
L_08A40C40:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (ctx.gpr[16] << 2u);
    g4 = (g4 + hot_regs.g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_08A40C50;
}
L_08A40C50:
    hot_regs.g31 = (0x08A40C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 458u, 0x088DF74Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40C58u) goto L_08A40C58;
    return;
L_08A40C58:
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
L_08A40C70:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x08A40C94u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40C94u) goto L_08A40C94;
    return;
L_08A40C94:
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(96)));
    hot_regs.g31 = (0x08A40CA0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40CA0u) goto L_08A40CA0;
    return;
L_08A40CA0:
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08A40CD4;
      }
      goto L_08A40CAC;
    }
L_08A40CAC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A40CCC;
      }
      goto L_08A40CBC;
    }
}
L_08A40CBC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (ctx.gpr[19] << 2u);
    g4 = (g4 + hot_regs.g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_08A40CCC;
}
L_08A40CCC:
    hot_regs.g31 = (0x08A40CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 460u, 0x088DF770u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40CD4u) goto L_08A40CD4;
    return;
L_08A40CD4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A40D04;
      }
      goto L_08A40CDC;
    }
L_08A40CDC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A40CFC;
      }
      goto L_08A40CEC;
    }
}
L_08A40CEC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (ctx.gpr[17] << 2u);
    g4 = (g4 + hot_regs.g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_08A40CFC;
}
L_08A40CFC:
    hot_regs.g31 = (0x08A40D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 460u, 0x088DF770u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40D04u) goto L_08A40D04;
    return;
L_08A40D04:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(20), 0u);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A40D34:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A40D44u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40D44u) goto L_08A40D44;
    return;
L_08A40D44:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g29 = hot_regs.g29;
    g2 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(4)));
    g2 = (g2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A40D58:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (0u | 28u);
    { const bool branch_taken = g4 == g5;
    g5 = (0u | 29u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A40DB8;
      }
      goto L_08A40D68;
    }
}
L_08A40D68:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 35u);
      if (branch_taken) {
          goto L_08A40DB8;
      }
      goto L_08A40D70;
    }
L_08A40D70:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 23u);
      if (branch_taken) {
          goto L_08A40DB8;
      }
      goto L_08A40D78;
    }
L_08A40D78:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 22u);
      if (branch_taken) {
          goto L_08A40DB8;
      }
      goto L_08A40D80;
    }
L_08A40D80:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 21u);
      if (branch_taken) {
          goto L_08A40DB8;
      }
      goto L_08A40D88;
    }
L_08A40D88:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 30u);
      if (branch_taken) {
          goto L_08A40DB8;
      }
      goto L_08A40D90;
    }
L_08A40D90:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 31u);
      if (branch_taken) {
          goto L_08A40DB8;
      }
      goto L_08A40D98;
    }
L_08A40D98:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 34u);
      if (branch_taken) {
          goto L_08A40DB8;
      }
      goto L_08A40DA0;
    }
L_08A40DA0:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 37u);
      if (branch_taken) {
          goto L_08A40DB8;
      }
      goto L_08A40DA8;
    }
L_08A40DA8:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 33u);
      if (branch_taken) {
          goto L_08A40DB8;
      }
      goto L_08A40DB0;
    }
L_08A40DB0:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A40DC0;
      }
      goto L_08A40DB8;
    }
L_08A40DB8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A40DC4;
      }
      goto L_08A40DC0;
    }
L_08A40DC0:
    hot_regs.g2 = (0u | 0u);
    goto L_08A40DC4;
L_08A40DC4:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40DCC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    g16 = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (g5 | 0u);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (hot_regs.g6 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (hot_regs.g7 & 255u);
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A40E08;
      }
      goto L_08A40DFC;
    }
}
L_08A40DFC:
    hot_regs.g6 = (0u | 1u);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08A40E40;
      }
      goto L_08A40E08;
    }
L_08A40E08:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A40E38;
      }
      goto L_08A40E14;
    }
L_08A40E14:
    hot_regs.g7 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A40E28u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 438u, 0x08A4F110u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40E28u) goto L_08A40E28;
    return;
L_08A40E28:
    { const bool branch_taken = hot_regs.g2 != 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A40E48;
      }
      goto L_08A40E30;
    }
L_08A40E30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40FAC;
      }
      goto L_08A40E38;
    }
L_08A40E38:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A40FB0;
      }
      goto L_08A40E40;
    }
L_08A40E40:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A40FB0;
      }
      goto L_08A40E48;
    }
L_08A40E48:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40E94;
      }
      goto L_08A40E50;
    }
L_08A40E50:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g6 = (16256u << 16u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
      if (branch_taken) {
          goto L_08A40E84;
      }
      goto L_08A40E68;
    }
L_08A40E68:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    hot_regs.g31 = (0x08A40E7Cu);
    hot_regs.g6 = (0u | 55u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40E7Cu) goto L_08A40E7C;
    return;
L_08A40E7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40E94;
      }
      goto L_08A40E84;
    }
L_08A40E84:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    hot_regs.g31 = (0x08A40E94u);
    hot_regs.g6 = (0u | 55u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40E94u) goto L_08A40E94;
    return;
L_08A40E94:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40EC4;
      }
      goto L_08A40E9C;
    }
L_08A40E9C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40EC4;
      }
      goto L_08A40EA8;
    }
L_08A40EA8:
    hot_regs.g31 = (0x08A40EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40EB0u) goto L_08A40EB0;
    return;
L_08A40EB0:
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A40EC4;
      }
      goto L_08A40EB8;
    }
L_08A40EB8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9316)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9316), g4);
    hot_regs.g4 = g4;
    goto L_08A40EC4;
}
L_08A40EC4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A40ED8;
      }
      goto L_08A40ED0;
    }
L_08A40ED0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), g4);
    hot_regs.g4 = g4;
    goto L_08A40ED8;
}
L_08A40ED8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 25000 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40F40;
      }
      goto L_08A40EE8;
    }
L_08A40EE8:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A40F40;
      }
      goto L_08A40EF0;
    }
L_08A40EF0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40F34;
      }
      goto L_08A40EFC;
    }
L_08A40EFC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40F34;
      }
      goto L_08A40F04;
    }
L_08A40F04:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A40F34;
      }
      goto L_08A40F14;
    }
}
L_08A40F14:
    hot_regs.g31 = (0x08A40F1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 223u, 0x0899103Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40F1Cu) goto L_08A40F1C;
    return;
L_08A40F1C:
    hot_regs.g4 = (17096u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((ctx.fpr[0] < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A40F40;
      }
      goto L_08A40F34;
    }
L_08A40F34:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), g4);
    hot_regs.g4 = g4;
    goto L_08A40F40;
}
L_08A40F40:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A40F94;
      }
      goto L_08A40F54;
    }
}
L_08A40F54:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40F68;
      }
      goto L_08A40F60;
    }
L_08A40F60:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A40FB0;
      }
      goto L_08A40F68;
    }
L_08A40F68:
    hot_regs.g4 = (0u | 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), hot_regs.g4);
    hot_regs.g31 = (0x08A40F7Cu);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40F7Cu) goto L_08A40F7C;
    return;
L_08A40F7C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g2 = (ctx.gpr[19] | 0u);
    g4 = (hot_regs.g5 + g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A40FB0;
      }
      goto L_08A40F94;
    }
}
L_08A40F94:
    hot_regs.g31 = (0x08A40F9Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40F9Cu) goto L_08A40F9C;
    return;
L_08A40F9C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (hot_regs.g5 + g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), g4);
    hot_regs.g4 = g4;
    goto L_08A40FAC;
}
L_08A40FAC:
    hot_regs.g2 = (ctx.gpr[19] | 0u);
    goto L_08A40FB0;
L_08A40FB0:
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
L_08A40FCC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A41008;
      }
      goto L_08A40FE4;
    }
}
L_08A40FE4:
    hot_regs.g31 = (0x08A40FECu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A40FECu) goto L_08A40FEC;
    return;
L_08A40FEC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A41010;
      }
      goto L_08A41000;
    }
}
L_08A41000:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), hot_regs.g4);
      if (branch_taken) {
          goto L_08A41020;
      }
      goto L_08A41008;
    }
L_08A41008:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41020;
      }
      goto L_08A41010;
    }
L_08A41010:
    hot_regs.g31 = (0x08A41018u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41018u) goto L_08A41018;
    return;
L_08A41018:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), hot_regs.g4);
    goto L_08A41020;
L_08A41020:
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
L_08A41030:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-160));
    hot_regs.g4 = (g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), g17);
    g17 = (hot_regs.g6 | 0u);
    g5 = (16582u << 16u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    g5 = (g5 | 26214u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[8] & 255u);
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), hot_regs.g31);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (hot_regs.g7 | 0u);
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A411A4;
      }
      goto L_08A4106C;
    }
}
L_08A4106C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41090;
      }
      goto L_08A41074;
    }
L_08A41074:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A411A4;
      }
      goto L_08A4107C;
    }
L_08A4107C:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A411A4;
      }
      goto L_08A41090;
    }
L_08A41090:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A411A4;
      }
      goto L_08A410A4;
    }
L_08A410A4:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = hot_regs.f13 - hot_regs.f14;
    hot_regs.f12 = hot_regs.f12 - hot_regs.f14;
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(72));
    ctx.gpr[17] = (0u | 1u);
    hot_regs.g31 = (0x08A41114u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41114u) goto L_08A41114;
    return;
L_08A41114:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A411A4;
      }
      goto L_08A4111C;
    }
L_08A4111C:
    if (ctx.gpr[18] == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
        goto L_08A41148;
    }
    goto L_08A41124;
L_08A41124:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A411A4;
      }
      goto L_08A4112C;
    }
L_08A4112C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A411A4;
      }
      goto L_08A41144;
    }
L_08A41144:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    goto L_08A41148;
L_08A41148:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(f13));
    g4 = (g29 + static_cast<std::uint32_t>(64));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), g5);
    g4 = (0u | 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(g4));
    g4 = (0u | 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(g4));
    g4 = (0u | 19u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(g4));
    g4 = (0u | 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(g4));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A411A8;
      }
      goto L_08A411A4;
    }
}
}
L_08A411A4:
    hot_regs.g2 = (0u | 0u);
    goto L_08A411A8;
L_08A411A8:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_08A411C0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(156), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.f20 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08A41208u);
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41208u) goto L_08A41208;
    return;
L_08A41208:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6380)));
    hot_regs.g31 = (0x08A4121Cu);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6384)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4121Cu) goto L_08A4121C;
    return;
L_08A4121C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    ctx.gpr[9] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (0u | 74u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A41254u);
    ctx.gpr[11] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41254u) goto L_08A41254;
    return;
L_08A41254:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A41290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 633u, 0x08A17C9Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41290u) goto L_08A41290;
    return;
L_08A41290:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6396)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
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
    hot_regs.g31 = (0x08A412B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A412B0u) goto L_08A412B0;
    return;
L_08A412B0:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6372)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6376)));
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A412CCu);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A412CCu) goto L_08A412CC;
    return;
L_08A412CC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6364)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6368)));
    hot_regs.g6 = (hot_regs.g4 + ctx.gpr[22]);
    hot_regs.g7 = (hot_regs.g6 < ctx.gpr[22] ? 1u : 0u);
    hot_regs.g4 = (hot_regs.g7 + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g4 + ctx.gpr[23]);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    ctx.gpr[9] = (hot_regs.g4 | 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(90));
    hot_regs.g4 = (0u | 74u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A41324u);
    ctx.gpr[11] = (0u | 600u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41324u) goto L_08A41324;
    return;
L_08A41324:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6396)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
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
    hot_regs.g31 = (0x08A41344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41344u) goto L_08A41344;
    return;
L_08A41344:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A41358u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41358u) goto L_08A41358;
    return;
L_08A41358:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    hot_regs.g6 = (hot_regs.g4 + ctx.gpr[22]);
    hot_regs.g7 = (hot_regs.g6 < ctx.gpr[22] ? 1u : 0u);
    hot_regs.g4 = (hot_regs.g7 + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g4 + ctx.gpr[23]);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    ctx.gpr[9] = (hot_regs.g4 | 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(90));
    hot_regs.g4 = (0u | 74u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A413A8u);
    ctx.gpr[11] = (0u | 600u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A413A8u) goto L_08A413A8;
    return;
L_08A413A8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6396)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
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
    hot_regs.g31 = (0x08A413C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A413C8u) goto L_08A413C8;
    return;
L_08A413C8:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A413DCu);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A413DCu) goto L_08A413DC;
    return;
L_08A413DC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    hot_regs.g6 = (hot_regs.g4 + ctx.gpr[22]);
    hot_regs.g7 = (hot_regs.g6 < ctx.gpr[22] ? 1u : 0u);
    hot_regs.g4 = (hot_regs.g7 + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g4 + ctx.gpr[23]);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    ctx.gpr[9] = (hot_regs.g4 | 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(90));
    hot_regs.g4 = (0u | 74u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A4142Cu);
    ctx.gpr[11] = (0u | 600u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4142Cu) goto L_08A4142C;
    return;
L_08A4142C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6396)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
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
    hot_regs.g31 = (0x08A4144Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4144Cu) goto L_08A4144C;
    return;
L_08A4144C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A41460u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41460u) goto L_08A41460;
    return;
L_08A41460:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    hot_regs.g6 = (hot_regs.g4 + ctx.gpr[22]);
    hot_regs.g7 = (hot_regs.g6 < ctx.gpr[22] ? 1u : 0u);
    hot_regs.g4 = (hot_regs.g7 + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g4 + ctx.gpr[23]);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    ctx.gpr[9] = (hot_regs.g4 | 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(90));
    hot_regs.g4 = (0u | 74u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A414B0u);
    ctx.gpr[11] = (0u | 600u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A414B0u) goto L_08A414B0;
    return;
L_08A414B0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6396)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
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
    hot_regs.g31 = (0x08A414D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A414D0u) goto L_08A414D0;
    return;
L_08A414D0:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A414E4u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A414E4u) goto L_08A414E4;
    return;
L_08A414E4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    hot_regs.g6 = (hot_regs.g4 + ctx.gpr[22]);
    hot_regs.g7 = (hot_regs.g6 < ctx.gpr[22] ? 1u : 0u);
    hot_regs.g4 = (hot_regs.g7 + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g4 + ctx.gpr[23]);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    ctx.gpr[9] = (hot_regs.g4 | 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(90));
    hot_regs.g4 = (0u | 74u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A41534u);
    ctx.gpr[11] = (0u | 600u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41534u) goto L_08A41534;
    return;
L_08A41534:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A41560:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41568:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), g17);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    g17 = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), hot_regs.g31);
    { const bool branch_taken = g17 == 0u;
    hot_regs.g4 = (hot_regs.g6 | 0u);
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A41668;
      }
      goto L_08A41598;
    }
}
L_08A41598:
    hot_regs.g5 = (48460u << 16u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (15523u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15779u << 16u);
    { const float fs = hot_regs.f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08A415D8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f13));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A415D8u) goto L_08A415D8;
    return;
L_08A415D8:
    hot_regs.f12 = ctx.fpr[24] - hot_regs.f22;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f22 + hot_regs.f12;
    hot_regs.g31 = (0x08A415ECu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A415ECu) goto L_08A415EC;
    return;
L_08A415EC:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6356)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6360)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A41600u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41600u) goto L_08A41600;
    return;
L_08A41600:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-6348)));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-6352)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    g6 = (hot_regs.g2 >> 31u);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    g6 = (ctx.gpr[1] | g6);
    g8 = (g6 + g4);
    g9 = (g8 < g4 ? 1u : 0u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    g4 = (g8 | 0u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    g8 = (g4 | 0u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    g6 = (g9 + g7);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    g4 = (16320u << 16u);
    g5 = (g6 + g5);
    hot_regs.f12 = std::bit_cast<float>(g4);
    g9 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7120)));
    g7 = (g28 + static_cast<std::uint32_t>(7136));
    g6 = (g29 + static_cast<std::uint32_t>(48));
    g5 = (g29 + static_cast<std::uint32_t>(16));
    { const bool branch_taken = g9 == 0u;
    g4 = (g29 + static_cast<std::uint32_t>(32));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08A41670;
      }
      goto L_08A41660;
    }
}
L_08A41660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41688;
      }
      goto L_08A41668;
    }
L_08A41668:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41744;
      }
      goto L_08A41670;
    }
L_08A41670:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g28 = ctx.gpr[28];
    ctx.gpr[9] = (0u | 1u);
    f13 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7120), ctx.gpr[9]);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7136), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7140), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7144), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
    goto L_08A41688;
}
}
L_08A41688:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g29 = hot_regs.g29;
    g9 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g9 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    g9 = (g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g9 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) & 0x7FFFFFFFu);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14) & 0x7FFFFFFFu);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15) & 0x7FFFFFFFu);
    f14 = f14 + f15;
    f13 = f14 + f13;
    ctx.set_fpu_condition((hot_regs.f12 < f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g9 = (ctx.gpr[8] | 0u);
    ctx.gpr[9] = g9;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08A41718;
      }
      goto L_08A416D8;
    }
}
}
L_08A416D8:
    ctx.gpr[8] = (hot_regs.g5 | 0u);
    ctx.gpr[10] = (hot_regs.g4 | 0u);
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (0u | 69u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[8] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08A41710u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41710u) goto L_08A41710;
    return;
L_08A41710:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41744;
      }
      goto L_08A41718;
    }
L_08A41718:
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (hot_regs.g5 | 0u);
    ctx.gpr[8] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (0u | 70u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08A41744u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41744u) goto L_08A41744;
    return;
L_08A41744:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A41764:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 25u);
    { const bool branch_taken = hot_regs.g4 == g5;
    g5 = (0u | 21u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A417C8;
      }
      goto L_08A41770;
    }
}
L_08A41770:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 22u);
      if (branch_taken) {
          goto L_08A417C8;
      }
      goto L_08A41778;
    }
L_08A41778:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 23u);
      if (branch_taken) {
          goto L_08A417C8;
      }
      goto L_08A41780;
    }
L_08A41780:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 28u);
      if (branch_taken) {
          goto L_08A417C8;
      }
      goto L_08A41788;
    }
L_08A41788:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 29u);
      if (branch_taken) {
          goto L_08A417C8;
      }
      goto L_08A41790;
    }
L_08A41790:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 30u);
      if (branch_taken) {
          goto L_08A417C8;
      }
      goto L_08A41798;
    }
L_08A41798:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 31u);
      if (branch_taken) {
          goto L_08A417C8;
      }
      goto L_08A417A0;
    }
L_08A417A0:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 34u);
      if (branch_taken) {
          goto L_08A417C8;
      }
      goto L_08A417A8;
    }
L_08A417A8:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 35u);
      if (branch_taken) {
          goto L_08A417C8;
      }
      goto L_08A417B0;
    }
L_08A417B0:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 32u);
      if (branch_taken) {
          goto L_08A417C8;
      }
      goto L_08A417B8;
    }
L_08A417B8:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 33u);
      if (branch_taken) {
          goto L_08A417C8;
      }
      goto L_08A417C0;
    }
L_08A417C0:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A417D0;
      }
      goto L_08A417C8;
    }
L_08A417C8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A417D4;
      }
      goto L_08A417D0;
    }
L_08A417D0:
    hot_regs.g2 = (0u | 1u);
    goto L_08A417D4;
L_08A417D4:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A417DC:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (hot_regs.g5 < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4180C;
      }
      goto L_08A417EC;
    }
L_08A417EC:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g5);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(6336)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A41804:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A41824;
      }
      goto L_08A4180C;
    }
L_08A4180C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A41820;
      }
      goto L_08A41818;
    }
}
L_08A41818:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A41824;
      }
      goto L_08A41820;
    }
L_08A41820:
    hot_regs.g2 = (0u | 0u);
    goto L_08A41824;
L_08A41824:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4182C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A41A8C;
      }
      goto L_08A41850;
    }
}
L_08A41850:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(138)));
    { const bool branch_taken = hot_regs.g4 == g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A41884;
      }
      goto L_08A41864;
    }
}
L_08A41864:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(190)));
    { const bool branch_taken = hot_regs.g4 == g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A41884;
      }
      goto L_08A41874;
    }
}
L_08A41874:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = hot_regs.g4 != g5;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4188C;
      }
      goto L_08A41884;
    }
}
L_08A41884:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08A4188C;
      }
      goto L_08A4188C;
    }
L_08A4188C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41A34;
      }
      goto L_08A41894;
    }
L_08A41894:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(482))))));
    g4 = (g4 & 64u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A41A34;
      }
      goto L_08A418AC;
    }
}
L_08A418AC:
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
          goto L_08A41A8C;
      }
      goto L_08A418C8;
    }
}
L_08A418C8:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(482))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-65));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 | 64u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(hot_regs.g4));
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A41904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41904u) goto L_08A41904;
    return;
L_08A41904:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (0u | 9u);
    hot_regs.g7 = (hot_regs.g29 | 0u);
    ctx.gpr[8] = (0u | 100u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    hot_regs.g31 = (0x08A41928u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 287u, 0x089E974Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41928u) goto L_08A41928;
    return;
L_08A41928:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(138)));
    { const bool branch_taken = g4 != g5;
    g4 = (16102u << 16u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A41968;
      }
      goto L_08A4194C;
    }
}
L_08A4194C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16140u << 16u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    g4 = (g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 + hot_regs.f13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A4197C;
      }
      goto L_08A41968;
    }
}
}
L_08A41968:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    g4 = (g4 | 26214u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08A4197C;
}
}
L_08A4197C:
    hot_regs.g31 = (0x08A41984u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41984u) goto L_08A41984;
    return;
L_08A41984:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-128));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (14673u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 46871u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    hot_regs.g31 = (0x08A419B8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A419B8u) goto L_08A419B8;
    return;
L_08A419B8:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-128));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[24] + hot_regs.f12;
    hot_regs.g31 = (0x08A419E4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A419E4u) goto L_08A419E4;
    return;
L_08A419E4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 2048u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A41A04;
      }
      goto L_08A419F4;
    }
}
L_08A419F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g4 = (g4 & 2048u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[17] & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A41A0C;
      }
      goto L_08A41A04;
    }
}
L_08A41A04:
    ctx.gpr[17] = (0u | 1u);
    hot_regs.g4 = (ctx.gpr[17] & 255u);
    goto L_08A41A0C;
L_08A41A0C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41A2C;
      }
      goto L_08A41A14;
    }
L_08A41A14:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2049));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g31 = (0x08A41A2Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41A2Cu) goto L_08A41A2C;
    return;
L_08A41A2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41A8C;
      }
      goto L_08A41A34;
    }
L_08A41A34:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08A41A4Cu);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41A4Cu) goto L_08A41A4C;
    return;
L_08A41A4C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41A8C;
      }
      goto L_08A41A54;
    }
L_08A41A54:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(483))))));
    g4 = (g4 & 4u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A41A8C;
      }
      goto L_08A41A6C;
    }
}
L_08A41A6C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(482))))));
    g4 = (g4 & 64u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A41A8C;
      }
      goto L_08A41A84;
    }
}
L_08A41A84:
    hot_regs.g4 = (0u | 44u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A41A8C;
L_08A41A8C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A41AAC:
{
    float f22 = hot_regs.f22;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g17);
    g17 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    f22 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((f22 < hot_regs.f15));
    g5 = (16384u << 16u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), hot_regs.g31);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[30] = std::bit_cast<float>(g5);
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_08A41B28;
      }
      goto L_08A41B20;
    }
}
}
L_08A41B20:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f20 = hot_regs.f22 - ctx.fpr[30];
      if (branch_taken) {
          goto L_08A41B2C;
      }
      goto L_08A41B28;
    }
L_08A41B28:
    hot_regs.f20 = hot_regs.f15 - ctx.fpr[30];
    goto L_08A41B2C;
L_08A41B2C:
    ctx.set_fpu_condition((hot_regs.f22 <= hot_regs.f15));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f22 = hot_regs.f15 + ctx.fpr[30];
        goto L_08A41B44;
    }
    goto L_08A41B3C;
L_08A41B3C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f22 = hot_regs.f22 + ctx.fpr[30];
      if (branch_taken) {
          goto L_08A41B44;
      }
      goto L_08A41B44;
    }
L_08A41B44:
    ctx.set_fpu_condition((ctx.fpr[26] < hot_regs.f14));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = hot_regs.f14 - ctx.fpr[30];
        goto L_08A41B5C;
    }
    goto L_08A41B54;
L_08A41B54:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = ctx.fpr[26] - ctx.fpr[30];
      if (branch_taken) {
          goto L_08A41B5C;
      }
      goto L_08A41B5C;
    }
L_08A41B5C:
    ctx.set_fpu_condition((ctx.fpr[26] <= hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[26] = hot_regs.f14 + ctx.fpr[30];
        goto L_08A41B74;
    }
    goto L_08A41B6C;
L_08A41B6C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[30];
      if (branch_taken) {
          goto L_08A41B74;
      }
      goto L_08A41B74;
    }
L_08A41B74:
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[28] = hot_regs.f13 - ctx.fpr[30];
        goto L_08A41B8C;
    }
    goto L_08A41B84;
L_08A41B84:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = hot_regs.f12 - ctx.fpr[30];
      if (branch_taken) {
          goto L_08A41B8C;
      }
      goto L_08A41B8C;
    }
L_08A41B8C:
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[30] = hot_regs.f13 + ctx.fpr[30];
        goto L_08A41BA4;
    }
    goto L_08A41B9C;
L_08A41B9C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[30] = hot_regs.f12 + ctx.fpr[30];
      if (branch_taken) {
          goto L_08A41BA4;
      }
      goto L_08A41BA4;
    }
L_08A41BA4:
    ctx.gpr[19] = (hot_regs.g4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A41CE4;
      }
      goto L_08A41BB0;
    }
L_08A41BB0:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[23] = (16320u << 16u);
    ctx.gpr[21] = (ctx.lo);
    goto L_08A41BC0;
L_08A41BC0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A41BD8;
      }
      goto L_08A41BC8;
    }
L_08A41BC8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
        goto L_08A41BE0;
    }
    goto L_08A41BD8;
}
L_08A41BD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A41C00;
      }
      goto L_08A41BE0;
    }
L_08A41BE0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + ctx.gpr[19]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 128u);
    if (g4 == 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
        goto L_08A41BFC;
    }
    goto L_08A41BF4;
}
L_08A41BF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A41C00;
      }
      goto L_08A41BFC;
    }
L_08A41BFC:
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[21]);
    goto L_08A41C00;
L_08A41C00:
    ctx.gpr[22] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41CD0;
      }
      goto L_08A41C0C;
    }
L_08A41C0C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    g4 = (g4 & 512u);
    { const bool branch_taken = g4 != 0u;
    g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A41CD0;
      }
      goto L_08A41C1C;
    }
}
L_08A41C1C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A41CD0;
      }
      goto L_08A41C30;
    }
L_08A41C30:
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A41CD0;
      }
      goto L_08A41C40;
    }
L_08A41C40:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A41CD0;
      }
      goto L_08A41C54;
    }
L_08A41C54:
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A41CD0;
      }
      goto L_08A41C64;
    }
L_08A41C64:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A41CD0;
      }
      goto L_08A41C78;
    }
L_08A41C78:
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A41CD0;
      }
      goto L_08A41C88;
    }
L_08A41C88:
    hot_regs.g31 = (0x08A41C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41C90u) goto L_08A41C90;
    return;
L_08A41C90:
    { const bool branch_taken = ctx.gpr[20] == hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A41CD0;
      }
      goto L_08A41C98;
    }
L_08A41C98:
    hot_regs.g31 = (0x08A41CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41CA0u) goto L_08A41CA0;
    return;
L_08A41CA0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (hot_regs.g2 & 65535u);
    g4 = (g4 & ctx.gpr[23]);
    g4 = (g4 >> 22u);
    g4 = (hot_regs.g5 ^ g4);
    g4 = (g4 & 31u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A41CD0;
      }
      goto L_08A41CC0;
    }
}
L_08A41CC0:
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A41CD0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 550u, 0x0891ECB8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41CD0u) goto L_08A41CD0;
    return;
L_08A41CD0:
{
    std::uint32_t g19 = ctx.gpr[19];
    hot_regs.g4 = (g19 | 0u);
    g19 = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (g19 | 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-3344));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A41BC0;
      }
      goto L_08A41CE4;
    }
}
L_08A41CE4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A41D28:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (ctx.gpr[10] & 255u);
    ctx.gpr[10] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[9] = (ctx.gpr[11] & 255u);
    ctx.gpr[11] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[3] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.g2 = (hot_regs.g2 & 255u);
    ctx.gpr[12] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    ctx.gpr[3] = (ctx.gpr[3] & 255u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[13] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.gpr[12] = (ctx.gpr[12] & 255u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[13]);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    hot_regs.g31 = (0x08A41D7Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[12]);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41D7Cu) goto L_08A41D7C;
    return;
L_08A41D7C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A41D88:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(232), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(236), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(240), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(244), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(248), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(252), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), 0u);
    hot_regs.g31 = (0x08A41DBCu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41DBCu) goto L_08A41DBC;
    return;
L_08A41DBC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    hot_regs.g5 = (hot_regs.g5 << 5u);
    hot_regs.g6 = (0u - hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 << 2u);
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 << 2u);
    hot_regs.g5 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(144));
    hot_regs.g6 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g7 = (hot_regs.g4 + static_cast<std::uint32_t>(128));
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g7);
    ctx.gpr[8] = (16128u << 16u);
    hot_regs.f13 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[8]);
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
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
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g5 = (0u - hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g7);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
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
    hot_regs.g31 = (0x08A41EA0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41EA0u) goto L_08A41EA0;
    return;
L_08A41EA0:
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    hot_regs.g31 = (0x08A41ED8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41ED8u) goto L_08A41ED8;
    return;
L_08A41ED8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41FE0;
      }
      goto L_08A41EE0;
    }
L_08A41EE0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(164));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A41F10u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 32u, 0x08AA82D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41F10u) goto L_08A41F10;
    return;
L_08A41F10:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41FE0;
      }
      goto L_08A41F18;
    }
L_08A41F18:
{
    float f12 = hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    hot_regs.g4 = (17146u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    hot_regs.f12 = f12;
        goto L_08A41F34;
    }
    goto L_08A41F34;
}
L_08A41F34:
    hot_regs.g4 = (17146u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.gpr[8] = (16256u << 16u);
    ctx.gpr[10] = (16544u << 16u);
    ctx.gpr[11] = (16640u << 16u);
    ctx.gpr[17] = (0u | 1u);
    hot_regs.g2 = (16281u << 16u);
    hot_regs.g2 = (hot_regs.g2 | 39322u);
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(7));
    ctx.gpr[9] = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    hot_regs.g5 = (0u | 128u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f14 = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(ctx.gpr[8]);
    hot_regs.f12 = hot_regs.f13 - hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    hot_regs.f15 = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[11] = (0u | 0u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f15 - hot_regs.f12;
    hot_regs.f14 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g2 = (16968u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    hot_regs.g2 = (16320u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    hot_regs.g31 = (0x08A41FD8u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A41FD8u) goto L_08A41FD8;
    return;
L_08A41FD8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A41FE4;
      }
      goto L_08A41FE0;
    }
L_08A41FE0:
    hot_regs.g2 = (0u | 0u);
    goto L_08A41FE4;
L_08A41FE4:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(232)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(236)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(248)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(252)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A42004:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A420AC;
      }
      goto L_08A42018;
    }
}
L_08A42018:
    hot_regs.g31 = (0x08A42020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A42020u) goto L_08A42020;
    return;
L_08A42020:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A420AC;
      }
      goto L_08A42028;
    }
L_08A42028:
    hot_regs.g31 = (0x08A42030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A42030u) goto L_08A42030;
    return;
L_08A42030:
    { const bool branch_taken = ctx.gpr[16] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A420AC;
      }
      goto L_08A42038;
    }
L_08A42038:
    hot_regs.g31 = (0x08A42040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A42040u) goto L_08A42040;
    return;
L_08A42040:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(1929))))));
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g5 - g4);
    g4 = (hot_regs.g2 + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (0u | 36u);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A420AC;
      }
      goto L_08A42068;
    }
}
L_08A42068:
    hot_regs.g31 = (0x08A42070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A42070u) goto L_08A42070;
    return;
L_08A42070:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (hot_regs.g2 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    hot_regs.g31 = (0x08A42090u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A42090u) goto L_08A42090;
    return;
L_08A42090:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 - g4);
    g4 = (hot_regs.g2 + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), 0u);
    hot_regs.g4 = g4;
    goto L_08A420AC;
}
L_08A420AC:
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
L_08A420BC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + static_cast<std::uint32_t>(-19));
    hot_regs.g5 = (g4 < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A420F0;
      }
      goto L_08A420D0;
    }
}
L_08A420D0:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(6384)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A420E8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A420F4;
      }
      goto L_08A420F0;
    }
L_08A420F0:
    hot_regs.g2 = (0u | 0u);
    goto L_08A420F4;
L_08A420F4:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A420FC:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(84)));
    hot_regs.g6 = (0u | 1u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08A42120;
      }
      goto L_08A4210C;
    }
L_08A4210C:
    hot_regs.g6 = (0u | 2u);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08A42128;
      }
      goto L_08A42118;
    }
L_08A42118:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g4 + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A4212C;
      }
      goto L_08A42120;
    }
L_08A42120:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g4 + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A4212C;
      }
      goto L_08A42128;
    }
L_08A42128:
    hot_regs.g2 = (hot_regs.g4 + static_cast<std::uint32_t>(160));
    goto L_08A4212C;
L_08A4212C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42134:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g5 = (2236u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(32304));
    g6 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(80)));
    g6 = (g6 << 5u);
    g7 = (0u - g6);
    g6 = (g6 << 2u);
    g7 = (g7 + g6);
    g6 = (g6 << 2u);
    g6 = (g7 + g6);
    g5 = (g6 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(228)));
    g6 = (0u | 3u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = g5 != g6;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A42198;
      }
      goto L_08A42178;
    }
}
L_08A42178:
    hot_regs.g31 = (0x08A42180u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A42180u) goto L_08A42180;
    return;
L_08A42180:
    hot_regs.g31 = (0x08A42188u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 347u, 0x0898CF8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A42188u) goto L_08A42188;
    return;
L_08A42188:
    if (hot_regs.g2 != 0u) {
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(616))))));
        goto L_08A421A0;
    }
    goto L_08A42190;
L_08A42190:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A421BC;
      }
      goto L_08A42198;
    }
L_08A42198:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A421DC;
      }
      goto L_08A421A0;
    }
L_08A421A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 8u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A421BC;
      }
      goto L_08A421AC;
    }
}
L_08A421AC:
    hot_regs.g31 = (0x08A421B4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 241u, 0x08A51A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A421B4u) goto L_08A421B4;
    return;
L_08A421B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A421DC;
      }
      goto L_08A421BC;
    }
L_08A421BC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(656)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(1400));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A421DC;
      }
      goto L_08A421D4;
    }
}
L_08A421D4:
    hot_regs.g4 = (0u | 20u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(625), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A421DC;
L_08A421DC:
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
L_08A421EC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(900)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A4225C;
      }
      goto L_08A42208;
    }
}
L_08A42208:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 15u);
    hot_regs.g31 = (0x08A4221Cu);
    hot_regs.g6 = (0u | 100u);
    goto L_08A40A8C;
L_08A4221C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6336)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A4225Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 614u, 0x08A4B48Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4225Cu) goto L_08A4225C;
    return;
L_08A4225C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A42270:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A42284u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A42284u) goto L_08A42284;
    return;
L_08A42284:
    { const bool branch_taken = ctx.gpr[16] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A422F8;
      }
      goto L_08A4228C;
    }
L_08A4228C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (0u | 25u);
    { const bool branch_taken = g4 != g5;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A422F8;
      }
      goto L_08A422B4;
    }
}
L_08A422B4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(80)));
    g5 = (g5 << 5u);
    g6 = (0u - g5);
    g5 = (g5 << 2u);
    g6 = (g6 + g5);
    g5 = (g5 << 2u);
    g5 = (g6 + g5);
    g4 = (g5 + g4);
    g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(245)));
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A422F0;
      }
      goto L_08A422E4;
    }
}
L_08A422E4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(246)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A422F8;
      }
      goto L_08A422F0;
    }
}
L_08A422F0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A422FC;
      }
      goto L_08A422F8;
    }
L_08A422F8:
    hot_regs.g2 = (0u | 0u);
    goto L_08A422FC;
L_08A422FC:
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
L_08A4230C:
{
    float f12 = hot_regs.f12;
    float f26 = ctx.fpr[26];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-224));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(f26));
    f26 = std::bit_cast<float>(0u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    g4 = (17204u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(140), hot_regs.g5);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f26)) && f12 == f26));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(188), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(204), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(220), hot_regs.g31);
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f20 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    ctx.fpr[26] = f26;
      if (branch_taken) {
          goto L_08A4238C;
      }
      goto L_08A42374;
    }
}
}
L_08A42374:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f13) || std::isnan(ctx.fpr[26])) && hot_regs.f13 == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4238C;
      }
      goto L_08A42384;
    }
L_08A42384:
{
    float f20 = hot_regs.f20;
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[26]; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08A42398;
      }
      goto L_08A4238C;
    }
}
L_08A4238C:
    hot_regs.g31 = (0x08A42394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A42394u) goto L_08A42394;
    return;
L_08A42394:
{
    float f20 = hot_regs.f20;
    { const float fs = ctx.fpr[0]; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    hot_regs.f20 = f20;
    goto L_08A42398;
}
L_08A42398:
{
    float f28 = ctx.fpr[28];
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16457u << 16u);
    g4 = (g4 | 4059u);
    f28 = std::bit_cast<float>(g4);
    f28 = hot_regs.f20 / f28;
    g4 = (15574u << 16u);
    g4 = (g4 | 30544u);
    hot_regs.f12 = std::bit_cast<float>(g4);
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
    hot_regs.f13 = std::bit_cast<float>(g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8816)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f13));
    g4 = (g4 + static_cast<std::uint32_t>(10824));
    ctx.gpr[18] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), g4);
    ctx.gpr[30] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    g4 = (15502u << 16u);
    hot_regs.g4 = g4;
    ctx.fpr[28] = f28;
      if (branch_taken) {
          goto L_08A42718;
      }
      goto L_08A423F0;
    }
}
}
L_08A423F0:
{
    float f28 = ctx.fpr[28];
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 64012u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    g4 = (16025u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6324)));
    g4 = (18204u << 16u);
    { const float fs = f28; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f28 = std::bit_cast<float>(0x7FC00000u); else f28 = fs * ft; }
    g4 = (g4 | 16384u);
    ctx.fpr[30] = std::bit_cast<float>(g4);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6328)));
    g4 = (16448u << 16u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    g4 = (16256u << 16u);
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    ctx.fpr[24] = std::bit_cast<float>(g4);
    ctx.gpr[19] = (0u | 200u);
    hot_regs.g4 = g4;
    ctx.fpr[28] = f28;
    goto L_08A42438;
}
}
L_08A42438:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (0u | 0u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(g4));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
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
    hot_regs.g5 = (g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f13));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    ctx.set_fpu_condition((f12 <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A4248C;
      }
      goto L_08A42484;
    }
}
}
L_08A42484:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08A424C0;
      }
      goto L_08A4248C;
    }
L_08A4248C:
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
    { const float fs = f14; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_08A424C0;
}
}
L_08A424C0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
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
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    g5 = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
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
    f13 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(f13));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    ctx.set_fpu_condition((f12 <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A42528;
      }
      goto L_08A42520;
    }
}
}
L_08A42520:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08A4255C;
      }
      goto L_08A42528;
    }
L_08A42528:
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
    { const float fs = f14; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_08A4255C;
}
}
L_08A4255C:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f14;
    ctx.set_fpu_condition((f12 <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A426D4;
      }
      goto L_08A42588;
    }
}
}
L_08A42588:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A426D4;
      }
      goto L_08A4259C;
    }
L_08A4259C:
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A426D4;
      }
      goto L_08A425D0;
    }
L_08A425D0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9388)));
    g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(68));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9388), g4);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), g4);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(g5));
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(45)));
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A425F8;
}
L_08A425F8:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(152), static_cast<std::uint8_t>(ctx.gpr[17]));
    hot_regs.g31 = (0x08A42608u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A42608u) goto L_08A42608;
    return;
L_08A42608:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g31 = (0x08A42614u);
    ctx.gpr[16] = (hot_regs.g4 & 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A42614u) goto L_08A42614;
    return;
L_08A42614:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08A42628u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A42628u) goto L_08A42628;
    return;
L_08A42628:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08A42644u);
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A42644u) goto L_08A42644;
    return;
L_08A42644:
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20) ^ 0x80000000u);
    hot_regs.f12 = hot_regs.f20 - ctx.fpr[30];
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[30] + hot_regs.f12;
    hot_regs.g31 = (0x08A4265Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4265Cu) goto L_08A4265C;
    return;
L_08A4265C:
    hot_regs.f12 = hot_regs.f20 - ctx.fpr[30];
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[30] + hot_regs.f12;
    hot_regs.g31 = (0x08A42670u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A42670u) goto L_08A42670;
    return;
L_08A42670:
    hot_regs.f13 = hot_regs.f20 - ctx.fpr[30];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    hot_regs.g4 = (0u | 63u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    hot_regs.f13 = ctx.fpr[30] + hot_regs.f13;
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A426ACu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f13));
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A426ACu) goto L_08A426AC;
    return;
L_08A426AC:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    ctx.gpr[17] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(152)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
      if (branch_taken) {
          goto L_08A426C4;
      }
      goto L_08A426C0;
    }
}
L_08A426C0:
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08A426C4;
L_08A426C4:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < 8 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A425F8;
      }
      goto L_08A426D4;
    }
}
L_08A426D4:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(136)));
      if (branch_taken) {
          goto L_08A42708;
      }
      goto L_08A426E0;
    }
L_08A426E0:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    hot_regs.g31 = (0x08A426F0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 725u, 0x088FF17Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A426F0u) goto L_08A426F0;
    return;
L_08A426F0:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42700;
      }
      goto L_08A426F8;
    }
L_08A426F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08A42710;
      }
      goto L_08A42700;
    }
L_08A42700:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_08A42710;
      }
      goto L_08A42708;
    }
L_08A42708:
    ctx.gpr[30] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(72)));
    goto L_08A42710;
L_08A42710:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A42438;
      }
      goto L_08A42718;
    }
L_08A42718:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(196)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(204)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(208)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(212)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(220)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A42760:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(900)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A4277C;
      }
      goto L_08A42774;
    }
}
L_08A42774:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42784;
      }
      goto L_08A4277C;
    }
L_08A4277C:
    hot_regs.g31 = (0x08A42784u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1508)));
    goto L_08A438FC;
L_08A42784:
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
L_08A42790:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(900)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A427AC;
      }
      goto L_08A427A4;
    }
}
L_08A427A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A427B4;
      }
      goto L_08A427AC;
    }
L_08A427AC:
    hot_regs.g31 = (0x08A427B4u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1924)));
    goto L_08A438FC;
L_08A427B4:
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
L_08A427C0:
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
          goto L_08A42814;
      }
      goto L_08A427E0;
    }
}
L_08A427E0:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(16)));
    goto L_08A427E8;
L_08A427E8:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 < hot_regs.g7 ? 1u : 0u);
    g8 = (g8 & 255u);
    if (g8 != 0u) {
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(12));
    ctx.gpr[8] = g8;
        goto L_08A42808;
    }
    goto L_08A427F8;
}
L_08A427F8:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (g6 | 0u);
    g6 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A4280C;
      }
      goto L_08A42808;
    }
}
L_08A42808:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    goto L_08A4280C;
L_08A4280C:
    if (hot_regs.g6 != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(16)));
        goto L_08A427E8;
    }
    goto L_08A42814;
L_08A42814:
    if (hot_regs.g4 == hot_regs.g5) {
    hot_regs.g4 = (hot_regs.g5 | 0u);
        goto L_08A42838;
    }
    goto L_08A4281C;
L_08A4281C:
{
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    g6 = (hot_regs.g7 < g6 ? 1u : 0u);
    g6 = (g6 & 255u);
    if (g6 == 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g4);
    hot_regs.g6 = g6;
        goto L_08A4283C;
    }
    goto L_08A42834;
}
L_08A42834:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    goto L_08A42838;
L_08A42838:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g4);
    goto L_08A4283C;
L_08A4283C:
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
          goto L_08A42874;
      }
      goto L_08A4286C;
    }
}
L_08A4286C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A42878;
      }
      goto L_08A42874;
    }
L_08A42874:
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    goto L_08A42878;
L_08A42878:
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42880:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-544));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(508), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(512), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(516), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(520), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(524), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(528), hot_regs.g31);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g7 & 65535u);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f13));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f13; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.f20 = std::bit_cast<float>(0u);
    hot_regs.g5 = (16256u << 16u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(-19));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A42928;
      }
      goto L_08A42920;
    }
L_08A42920:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f22));
      if (branch_taken) {
          goto L_08A4295C;
      }
      goto L_08A42928;
    }
L_08A42928:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g6 = (std::bit_cast<std::uint32_t>(f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(g6);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    g6 = (ctx.vfpu_scalar_bits_ct<0u>());
    f13 = std::bit_cast<float>(g6);
    f14 = std::bit_cast<float>(g6);
    { const float fs = f14; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_08A4295C;
}
}
L_08A4295C:
    hot_regs.g6 = (hot_regs.g5 < static_cast<std::uint32_t>(19) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42E44;
      }
      goto L_08A42968;
    }
L_08A42968:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g5);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(6456)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A42980:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(g4) < 50 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A429B0;
      }
      goto L_08A4298C;
    }
}
L_08A4298C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-6304)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-6304), static_cast<std::uint8_t>(g4));
    g4 = (g4 & 255u);
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A429B0;
      }
      goto L_08A429A8;
    }
}
L_08A429A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42E44;
      }
      goto L_08A429B0;
    }
L_08A429B0:
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
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (16544u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16204u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08A429FCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A429FCu) goto L_08A429FC;
    return;
L_08A429FC:
    hot_regs.g4 = (0u | 35u);
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[20] != hot_regs.g4;
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08A42A34;
      }
      goto L_08A42A0C;
    }
L_08A42A0C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A42A2Cu);
    hot_regs.g6 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 368u, 0x088AA874u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A42A2Cu) goto L_08A42A2C;
    return;
L_08A42A2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42A54;
      }
      goto L_08A42A34;
    }
L_08A42A34:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A42A54u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 368u, 0x088AA874u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A42A54u) goto L_08A42A54;
    return;
L_08A42A54:
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (16166u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 26214u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 - hot_regs.f15;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[16]; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 - hot_regs.f14;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f13));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    { const float fs = hot_regs.f13; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    ctx.fpr[24] = ctx.fpr[24] + hot_regs.f13;
    ctx.set_fpu_condition((ctx.fpr[24] <= hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42AF8;
      }
      goto L_08A42AF0;
    }
L_08A42AF0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f22));
      if (branch_taken) {
          goto L_08A42B2C;
      }
      goto L_08A42AF8;
    }
L_08A42AF8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<0u>());
    f12 = std::bit_cast<float>(g4);
    f13 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08A42B2C;
}
}
L_08A42B2C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15523u << 16u);
    g4 = (g4 | 55050u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A42B48u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g4 = g4;
    goto L_08A41568;
}
L_08A42B48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42E44;
      }
      goto L_08A42B50;
    }
L_08A42B50:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    hot_regs.g4 = (16544u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16204u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08A42BA4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A42BA4u) goto L_08A42BA4;
    return;
L_08A42BA4:
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
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A42BC4u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 368u, 0x088AA874u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A42BC4u) goto L_08A42BC4;
    return;
L_08A42BC4:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(240)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (15948u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 - hot_regs.f15;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[16]; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 - hot_regs.f14;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(272));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(288)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(292)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(304));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f13; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42C70;
      }
      goto L_08A42C68;
    }
L_08A42C68:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(hot_regs.f22));
      if (branch_taken) {
          goto L_08A42CA4;
      }
      goto L_08A42C70;
    }
L_08A42C70:
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
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(304)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(308)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_08A42CA4;
}
}
L_08A42CA4:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (g4 | 0u);
    g4 = (15477u << 16u);
    g4 = (g4 | 49807u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A42CC0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = g4;
    goto L_08A41568;
}
L_08A42CC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42E44;
      }
      goto L_08A42CC8;
    }
L_08A42CC8:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(336));
    hot_regs.g4 = (16544u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16204u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08A42D1Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A42D1Cu) goto L_08A42D1C;
    return;
L_08A42D1C:
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
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A42D3Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 368u, 0x088AA874u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A42D3Cu) goto L_08A42D3C;
    return;
L_08A42D3C:
    hot_regs.g4 = (0u | 20u);
    { const bool branch_taken = ctx.gpr[16] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A42E44;
      }
      goto L_08A42D48;
    }
L_08A42D48:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(352)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (15948u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 - hot_regs.f15;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(356)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[16]; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 - hot_regs.f14;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(368));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(384));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(400)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(416));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    { const float fs = hot_regs.f13; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    ctx.fpr[24] = ctx.fpr[24] + hot_regs.f13;
    ctx.set_fpu_condition((ctx.fpr[24] <= hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42DF4;
      }
      goto L_08A42DEC;
    }
L_08A42DEC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(hot_regs.f22));
      if (branch_taken) {
          goto L_08A42E28;
      }
      goto L_08A42DF4;
    }
L_08A42DF4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<0u>(g5);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    g5 = (ctx.vfpu_scalar_bits_ct<0u>());
    f12 = std::bit_cast<float>(g5);
    f13 = std::bit_cast<float>(g5);
    { const float fs = f13; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(416)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(420)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08A42E28;
}
}
L_08A42E28:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (g4 | 0u);
    g4 = (15477u << 16u);
    g4 = (g4 | 49807u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A42E44u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = g4;
    goto L_08A41568;
}
L_08A42E44:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(496)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(500)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(504)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(508)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(512)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(516)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(520)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(524)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(528)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A42E70:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(300), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(304), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(308), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(312), hot_regs.g31);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
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
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (15948u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (15820u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    { const float fs = hot_regs.f14; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
        goto L_08A42F04;
    }
    goto L_08A42F04;
L_08A42F04:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(-2));
    hot_regs.g5 = (hot_regs.g5 < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A43190;
      }
      goto L_08A42F80;
    }
L_08A42F80:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(6536)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A42F98:
    hot_regs.g4 = (0u | 96u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (0u | 57u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (0u | 19u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (0u | 255u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    hot_regs.f20 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g4 = (0u | 89u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08A43010u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43010u) goto L_08A43010;
    return;
L_08A43010:
    hot_regs.g4 = (48716u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15948u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.g31 = (0x08A4302Cu);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4302Cu) goto L_08A4302C;
    return;
L_08A4302C:
    hot_regs.f12 = ctx.fpr[24] - hot_regs.f22;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f22 + hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.f12 = hot_regs.f13 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A4304Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4304Cu) goto L_08A4304C;
    return;
L_08A4304C:
    hot_regs.f12 = ctx.fpr[24] - hot_regs.f22;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f22 + hot_regs.f12;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    hot_regs.f12 = hot_regs.f14 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A4306Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4306Cu) goto L_08A4306C;
    return;
L_08A4306C:
    hot_regs.f12 = ctx.fpr[24] - hot_regs.f22;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f22 + hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    hot_regs.f12 = hot_regs.f13 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (0u | 68u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A430B8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A430B8u) goto L_08A430B8;
    return;
L_08A430B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A432DC;
      }
      goto L_08A430C0;
    }
L_08A430C0:
    hot_regs.g4 = (0u | 68u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (0u | 140u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (0u | 203u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (0u | 255u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    hot_regs.f20 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g4 = (0u | 89u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08A4313Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4313Cu) goto L_08A4313C;
    return;
L_08A4313C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (0u | 36u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A43188u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43188u) goto L_08A43188;
    return;
L_08A43188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A430B8;
      }
      goto L_08A43190;
    }
L_08A43190:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[17] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4322C;
      }
      goto L_08A431A0;
    }
L_08A431A0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (15692u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
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
    hot_regs.g31 = (0x08A4321Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4321Cu) goto L_08A4321C;
    return;
L_08A4321C:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (g17 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A431A0;
      }
      goto L_08A4322C;
    }
}
L_08A4322C:
    hot_regs.g4 = (48716u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15948u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.g31 = (0x08A43248u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43248u) goto L_08A43248;
    return;
L_08A43248:
    hot_regs.f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.f12 = hot_regs.f13 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A43268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43268u) goto L_08A43268;
    return;
L_08A43268:
    hot_regs.f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    hot_regs.f12 = hot_regs.f14 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A43288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43288u) goto L_08A43288;
    return;
L_08A43288:
    hot_regs.f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    hot_regs.f12 = hot_regs.f13 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    hot_regs.g4 = (0u | 68u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A432D4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A432D4u) goto L_08A432D4;
    return;
L_08A432D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A430B8;
      }
      goto L_08A432DC;
    }
L_08A432DC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(288)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(292)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(296)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(300)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(304)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(308)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(312)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A43300:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-352));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(312), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(316), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(320), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(324), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(328), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(332), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(336), hot_regs.g31);
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    ctx.gpr[19] = (hot_regs.g5 | 0u);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), 0u);
    ctx.gpr[16] = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g4 = (0u | 15u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A43378u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43378u) goto L_08A43378;
    return;
L_08A43378:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (16544u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16204u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08A433C8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A433C8u) goto L_08A433C8;
    return;
L_08A433C8:
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    hot_regs.g2 = (0u | 1u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    hot_regs.g31 = (0x08A43404u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43404u) goto L_08A43404;
    return;
L_08A43404:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (15897u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (0u | 54u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A4345Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4345Cu) goto L_08A4345C;
    return;
L_08A4345C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43840;
      }
      goto L_08A43468;
    }
L_08A43468:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4366C;
      }
      goto L_08A43488;
    }
}
L_08A43488:
{
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    g5 = (0u | 57u);
    { const bool branch_taken = hot_regs.g4 == g5;
    g5 = (0u | 58u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A43664;
      }
      goto L_08A4349C;
    }
}
L_08A4349C:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A43664;
      }
      goto L_08A434A4;
    }
L_08A434A4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(164)));
    hot_regs.f14 = hot_regs.f14 - hot_regs.f15;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    hot_regs.g31 = (0x08A434E4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 618u, 0x08906DC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A434E4u) goto L_08A434E4;
    return;
L_08A434E4:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A434F0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 327u, 0x08911284u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A434F0u) goto L_08A434F0;
    return;
L_08A434F0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43568;
      }
      goto L_08A434F8;
    }
L_08A434F8:
    hot_regs.g31 = (0x08A43500u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 281u, 0x088E2A9Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43500u) goto L_08A43500;
    return;
L_08A43500:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    hot_regs.g4 = g4;
        goto L_08A43518;
    }
    goto L_08A4350C;
}
L_08A4350C:
    hot_regs.g31 = (0x08A43514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43514u) goto L_08A43514;
    return;
L_08A43514:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08A43518;
L_08A43518:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08A43524u);
    hot_regs.g6 = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 600u, 0x0893E5E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43524u) goto L_08A43524;
    return;
L_08A43524:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43568;
      }
      goto L_08A4352C;
    }
L_08A4352C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    hot_regs.g4 = g4;
        goto L_08A43544;
    }
    goto L_08A43538;
}
L_08A43538:
    hot_regs.g31 = (0x08A43540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43540u) goto L_08A43540;
    return;
L_08A43540:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08A43544;
L_08A43544:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    hot_regs.g31 = (0x08A43554u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43554u) goto L_08A43554;
    return;
L_08A43554:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = (16640u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08A43568;
}
L_08A43568:
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[17]);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g7 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(111)));
    ctx.gpr[8] = (ctx.gpr[18] & 255u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 25u);
    hot_regs.g31 = (0x08A4358Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4358Cu) goto L_08A4358C;
    return;
L_08A4358C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(168)));
    hot_regs.g4 = (16204u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A435ACu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A435ACu) goto L_08A435AC;
    return;
L_08A435AC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43664;
      }
      goto L_08A435B4;
    }
L_08A435B4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43664;
      }
      goto L_08A435C0;
    }
L_08A435C0:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[17] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43664;
      }
      goto L_08A435D0;
    }
L_08A435D0:
    hot_regs.g4 = (48588u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.g31 = (0x08A435ECu);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A435ECu) goto L_08A435EC;
    return;
L_08A435EC:
    hot_regs.f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A43604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43604u) goto L_08A43604;
    return;
L_08A43604:
    hot_regs.f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A4361Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4361Cu) goto L_08A4361C;
    return;
L_08A4361C:
    hot_regs.f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = (0u | 6u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A43654u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43654u) goto L_08A43654;
    return;
L_08A43654:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (g17 < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A435D0;
      }
      goto L_08A43664;
    }
}
L_08A43664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A436B8;
      }
      goto L_08A4366C;
    }
L_08A4366C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A436B8;
      }
      goto L_08A4368C;
    }
}
L_08A4368C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[17]);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08A436B8u);
    hot_regs.g6 = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 71u, 0x08B0452Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A436B8u) goto L_08A436B8;
    return;
L_08A436B8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
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
          goto L_08A438D0;
      }
      goto L_08A436D8;
    }
}
L_08A436D8:
{
    std::uint32_t g1 = ctx.gpr[1];
    g1 = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = hot_regs.g4 == g1;
    g1 = (0u + static_cast<std::uint32_t>(2));
    ctx.gpr[1] = g1;
      if (branch_taken) {
          goto L_08A43788;
      }
      goto L_08A436E4;
    }
}
L_08A436E4:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A437B0;
      }
      goto L_08A436EC;
    }
L_08A436EC:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A437E0;
      }
      goto L_08A436F4;
    }
L_08A436F4:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A43810;
      }
      goto L_08A436FC;
    }
L_08A436FC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    hot_regs.g4 = (0u | 72u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A43728u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43728u) goto L_08A43728;
    return;
L_08A43728:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (15395u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    hot_regs.g4 = (0u | 20u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A43780u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43780u) goto L_08A43780;
    return;
L_08A43780:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A438D0;
      }
      goto L_08A43788;
    }
L_08A43788:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(96)));
    hot_regs.g6 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (0u | 62u);
    hot_regs.g31 = (0x08A437A8u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A437A8u) goto L_08A437A8;
    return;
L_08A437A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A438D0;
      }
      goto L_08A437B0;
    }
L_08A437B0:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.g6 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (0u | 61u);
    hot_regs.g31 = (0x08A437CCu);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A437CCu) goto L_08A437CC;
    return;
L_08A437CC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.g31 = (0x08A437D8u);
    hot_regs.g5 = (0u | 106u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A437D8u) goto L_08A437D8;
    return;
L_08A437D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A438D0;
      }
      goto L_08A437E0;
    }
L_08A437E0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    hot_regs.g4 = (0u | 73u);
    hot_regs.g31 = (0x08A43808u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43808u) goto L_08A43808;
    return;
L_08A43808:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A438D0;
      }
      goto L_08A43810;
    }
L_08A43810:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    hot_regs.g4 = (0u | 74u);
    hot_regs.g31 = (0x08A43838u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43838u) goto L_08A43838;
    return;
L_08A43838:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A438D0;
      }
      goto L_08A43840;
    }
L_08A43840:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (16672u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    hot_regs.g31 = (0x08A43864u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43864u) goto L_08A43864;
    return;
L_08A43864:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A438D0;
      }
      goto L_08A4386C;
    }
L_08A4386C:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (15395u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    hot_regs.g4 = (0u | 45u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A438C0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A438C0u) goto L_08A438C0;
    return;
L_08A438C0:
    hot_regs.g4 = (0u | 75u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A438D0u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A438D0u) goto L_08A438D0;
    return;
L_08A438D0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(304)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(308)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(312)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(316)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(320)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(324)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(328)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(332)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(336)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A438FC:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    g17 = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[19] = (g17 | 0u);
    ctx.gpr[20] = (0u | 1u);
    hot_regs.g31 = (0x08A43938u);
    // nop
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    goto L_08A4031C;
}
L_08A43938:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43968;
      }
      goto L_08A43944;
    }
L_08A43944:
    hot_regs.g31 = (0x08A4394Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4394Cu) goto L_08A4394C;
    return;
L_08A4394C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43968;
      }
      goto L_08A43958;
    }
L_08A43958:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(340)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A43968;
      }
      goto L_08A43964;
    }
}
L_08A43964:
    ctx.gpr[20] = (0u | 0u);
    goto L_08A43968;
L_08A43968:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A439E4;
      }
      goto L_08A43970;
    }
L_08A43970:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08A4397Cu);
    hot_regs.g5 = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4397Cu) goto L_08A4397C;
    return;
L_08A4397C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43994;
      }
      goto L_08A43988;
    }
L_08A43988:
    hot_regs.g5 = (50298u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A43994;
L_08A43994:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08A439A0u);
    hot_regs.g5 = (0u | 202u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A439A0u) goto L_08A439A0;
    return;
L_08A439A0:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A439B8;
      }
      goto L_08A439AC;
    }
L_08A439AC:
    hot_regs.g5 = (50298u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A439B8;
L_08A439B8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08A439C4u);
    hot_regs.g5 = (0u | 203u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A439C4u) goto L_08A439C4;
    return;
L_08A439C4:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A439DC;
      }
      goto L_08A439D0;
    }
L_08A439D0:
    hot_regs.g4 = (50298u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A439DC;
L_08A439DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43DD0;
      }
      goto L_08A439E4;
    }
L_08A439E4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    ctx.gpr[20] = (ctx.gpr[19] + hot_regs.g4);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1396));
    hot_regs.g31 = (0x08A43A04u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43A04u) goto L_08A43A04;
    return;
L_08A43A04:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(104)));
    hot_regs.g5 = (0u | 5u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A43A6C;
      }
      goto L_08A43A14;
    }
L_08A43A14:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A43A24u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 382u, 0x08A45F20u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43A24u) goto L_08A43A24;
    return;
L_08A43A24:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(80)));
    g5 = (g5 << 5u);
    g6 = (0u - g5);
    g5 = (g5 << 2u);
    g6 = (g6 + g5);
    g5 = (g5 << 2u);
    g5 = (g6 + g5);
    g5 = (g5 + g4);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(112))))));
    hot_regs.g7 = (0u | 1u);
    { const bool branch_taken = g6 == hot_regs.g7;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A43A7C;
      }
      goto L_08A43A64;
    }
}
L_08A43A64:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(1964)));
      if (branch_taken) {
          goto L_08A43A74;
      }
      goto L_08A43A6C;
    }
L_08A43A6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43DD0;
      }
      goto L_08A43A74;
    }
L_08A43A74:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43AB8;
      }
      goto L_08A43A7C;
    }
L_08A43A7C:
    hot_regs.g31 = (0x08A43A84u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43A84u) goto L_08A43A84;
    return;
L_08A43A84:
    hot_regs.g31 = (0x08A43A8Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 148u, 0x0898C6D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43A8Cu) goto L_08A43A8C;
    return;
L_08A43A8C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43A98;
      }
      goto L_08A43A94;
    }
L_08A43A94:
    ctx.gpr[21] = (0u | 1u);
    goto L_08A43A98;
L_08A43A98:
    hot_regs.g31 = (0x08A43AA0u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43AA0u) goto L_08A43AA0;
    return;
L_08A43AA0:
    hot_regs.g31 = (0x08A43AA8u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 200u, 0x0898C924u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43AA8u) goto L_08A43AA8;
    return;
L_08A43AA8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43AD8;
      }
      goto L_08A43AB0;
    }
L_08A43AB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A43AD8;
      }
      goto L_08A43AB8;
    }
L_08A43AB8:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(245)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43AC8;
      }
      goto L_08A43AC4;
    }
L_08A43AC4:
    ctx.gpr[21] = (0u | 1u);
    goto L_08A43AC8;
L_08A43AC8:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(246)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43AD8;
      }
      goto L_08A43AD4;
    }
L_08A43AD4:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A43AD8;
L_08A43AD8:
    hot_regs.g4 = (ctx.gpr[21] | ctx.gpr[17]);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43AFC;
      }
      goto L_08A43AE4;
    }
L_08A43AE4:
    hot_regs.g31 = (0x08A43AECu);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43AECu) goto L_08A43AEC;
    return;
L_08A43AEC:
    hot_regs.g31 = (0x08A43AF4u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 347u, 0x0898CF8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43AF4u) goto L_08A43AF4;
    return;
L_08A43AF4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43D5C;
      }
      goto L_08A43AFC;
    }
L_08A43AFC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_08A43BA8;
      }
      goto L_08A43B04;
    }
L_08A43B04:
    hot_regs.g31 = (0x08A43B0Cu);
    hot_regs.g5 = (0u | 202u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43B0Cu) goto L_08A43B0C;
    return;
L_08A43B0C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43B24;
      }
      goto L_08A43B18;
    }
L_08A43B18:
    hot_regs.g5 = (50298u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A43B24;
L_08A43B24:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08A43B30u);
    hot_regs.g5 = (0u | 203u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43B30u) goto L_08A43B30;
    return;
L_08A43B30:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43B48;
      }
      goto L_08A43B3C;
    }
L_08A43B3C:
    hot_regs.g5 = (50298u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A43B48;
L_08A43B48:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08A43B54u);
    hot_regs.g5 = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43B54u) goto L_08A43B54;
    return;
L_08A43B54:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43B78;
      }
      goto L_08A43B60;
    }
L_08A43B60:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A43CF4;
      }
      goto L_08A43B78;
    }
L_08A43B78:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (hot_regs.g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
        goto L_08A43B94;
    }
    goto L_08A43B84;
L_08A43B84:
    hot_regs.g31 = (0x08A43B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43B8Cu) goto L_08A43B8C;
    return;
L_08A43B8C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    goto L_08A43B94;
L_08A43B94:
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A43BA0u);
    hot_regs.g7 = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43BA0u) goto L_08A43BA0;
    return;
L_08A43BA0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A43CF4;
      }
      goto L_08A43BA8;
    }
L_08A43BA8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43C54;
      }
      goto L_08A43BB0;
    }
L_08A43BB0:
    hot_regs.g31 = (0x08A43BB8u);
    hot_regs.g5 = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43BB8u) goto L_08A43BB8;
    return;
L_08A43BB8:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43BD0;
      }
      goto L_08A43BC4;
    }
L_08A43BC4:
    hot_regs.g5 = (50298u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A43BD0;
L_08A43BD0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08A43BDCu);
    hot_regs.g5 = (0u | 203u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43BDCu) goto L_08A43BDC;
    return;
L_08A43BDC:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43BF4;
      }
      goto L_08A43BE8;
    }
L_08A43BE8:
    hot_regs.g5 = (50298u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A43BF4;
L_08A43BF4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08A43C00u);
    hot_regs.g5 = (0u | 202u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43C00u) goto L_08A43C00;
    return;
L_08A43C00:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43C24;
      }
      goto L_08A43C0C;
    }
L_08A43C0C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A43CF4;
      }
      goto L_08A43C24;
    }
L_08A43C24:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (hot_regs.g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
        goto L_08A43C40;
    }
    goto L_08A43C30;
L_08A43C30:
    hot_regs.g31 = (0x08A43C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43C38u) goto L_08A43C38;
    return;
L_08A43C38:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    goto L_08A43C40;
L_08A43C40:
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A43C4Cu);
    hot_regs.g7 = (0u | 202u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43C4Cu) goto L_08A43C4C;
    return;
L_08A43C4C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A43CF4;
      }
      goto L_08A43C54;
    }
L_08A43C54:
    hot_regs.g31 = (0x08A43C5Cu);
    hot_regs.g5 = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43C5Cu) goto L_08A43C5C;
    return;
L_08A43C5C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43C74;
      }
      goto L_08A43C68;
    }
L_08A43C68:
    hot_regs.g5 = (50298u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A43C74;
L_08A43C74:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08A43C80u);
    hot_regs.g5 = (0u | 202u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43C80u) goto L_08A43C80;
    return;
L_08A43C80:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43C98;
      }
      goto L_08A43C8C;
    }
L_08A43C8C:
    hot_regs.g5 = (50298u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A43C98;
L_08A43C98:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08A43CA4u);
    hot_regs.g5 = (0u | 203u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43CA4u) goto L_08A43CA4;
    return;
L_08A43CA4:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43CC8;
      }
      goto L_08A43CB0;
    }
L_08A43CB0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A43CF4;
      }
      goto L_08A43CC8;
    }
L_08A43CC8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (hot_regs.g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
        goto L_08A43CE4;
    }
    goto L_08A43CD4;
L_08A43CD4:
    hot_regs.g31 = (0x08A43CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43CDCu) goto L_08A43CDC;
    return;
L_08A43CDC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    goto L_08A43CE4;
L_08A43CE4:
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A43CF0u);
    hot_regs.g7 = (0u | 203u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43CF0u) goto L_08A43CF0;
    return;
L_08A43CF0:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    goto L_08A43CF4;
L_08A43CF4:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43D0C;
      }
      goto L_08A43CFC;
    }
L_08A43CFC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A43DD0;
      }
      goto L_08A43D0C;
    }
}
L_08A43D0C:
    hot_regs.g31 = (0x08A43D14u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43D14u) goto L_08A43D14;
    return;
L_08A43D14:
    hot_regs.g31 = (0x08A43D1Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 347u, 0x0898CF8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43D1Cu) goto L_08A43D1C;
    return;
L_08A43D1C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43DD0;
      }
      goto L_08A43D24;
    }
L_08A43D24:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A43DD0;
      }
      goto L_08A43D38;
    }
}
L_08A43D38:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A43D4Cu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    goto L_08A40DCC;
L_08A43D4C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(70));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A43DD0;
      }
      goto L_08A43D5C;
    }
}
L_08A43D5C:
    hot_regs.g31 = (0x08A43D64u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    goto L_08A40FCC;
L_08A43D64:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08A43D70u);
    hot_regs.g5 = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43D70u) goto L_08A43D70;
    return;
L_08A43D70:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43D88;
      }
      goto L_08A43D7C;
    }
L_08A43D7C:
    hot_regs.g4 = (50298u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A43D88;
L_08A43D88:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08A43D94u);
    hot_regs.g5 = (0u | 202u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43D94u) goto L_08A43D94;
    return;
L_08A43D94:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43DAC;
      }
      goto L_08A43DA0;
    }
L_08A43DA0:
    hot_regs.g5 = (50298u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A43DAC;
L_08A43DAC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08A43DB8u);
    hot_regs.g5 = (0u | 203u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43DB8u) goto L_08A43DB8;
    return;
L_08A43DB8:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43DD0;
      }
      goto L_08A43DC4;
    }
L_08A43DC4:
    hot_regs.g4 = (50298u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A43DD0;
L_08A43DD0:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A43DF4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(224), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(228), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(232), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(236), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(240), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(244), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(248), hot_regs.g31);
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(256), hot_regs.g6);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (2237u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-28736));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    hot_regs.g5 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(52)));
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(6), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g31 = (0x08A43E58u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43E58u) goto L_08A43E58;
    return;
L_08A43E58:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43E70;
      }
      goto L_08A43E64;
    }
L_08A43E64:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43E70;
      }
      goto L_08A43E6C;
    }
L_08A43E6C:
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(104)));
    goto L_08A43E70;
L_08A43E70:
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(5), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(8), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A43E88u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43E88u) goto L_08A43E88;
    return;
L_08A43E88:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43EA0;
      }
      goto L_08A43E94;
    }
L_08A43E94:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43EA0;
      }
      goto L_08A43E9C;
    }
L_08A43E9C:
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    goto L_08A43EA0;
L_08A43EA0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43EDC;
      }
      goto L_08A43EA8;
    }
L_08A43EA8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43EDC;
      }
      goto L_08A43EB0;
    }
L_08A43EB0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    hot_regs.g31 = (0x08A43EBCu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 108u, 0x089387ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43EBCu) goto L_08A43EBC;
    return;
L_08A43EBC:
    hot_regs.g31 = (0x08A43EC4u);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43EC4u) goto L_08A43EC4;
    return;
L_08A43EC4:
    hot_regs.g31 = (0x08A43ECCu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43ECCu) goto L_08A43ECC;
    return;
L_08A43ECC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43EF0;
      }
      goto L_08A43ED4;
    }
L_08A43ED4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
      if (branch_taken) {
          goto L_08A43EE4;
      }
      goto L_08A43EDC;
    }
L_08A43EDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 74u, 0x08A445D0u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A43EE4;
    }
L_08A43EE4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 8192u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A43F2C;
      }
      goto L_08A43EF0;
    }
}
L_08A43EF0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(7), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(10), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 << 16u);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 16u));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A43F24u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43F24u) goto L_08A43F24;
    return;
L_08A43F24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 57u, 0x08A443BCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A43F2C;
    }
L_08A43F2C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(468)));
    hot_regs.g4 = (hot_regs.g4 & 4u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 8u, 0x08A440FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A43F3C;
    }
L_08A43F3C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    hot_regs.g5 = (0u | 23u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A43FAC;
      }
      goto L_08A43F4C;
    }
L_08A43F4C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    hot_regs.g5 = (0u | 22u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A43FAC;
      }
      goto L_08A43F5C;
    }
L_08A43F5C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    hot_regs.g5 = (0u | 21u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A43FAC;
      }
      goto L_08A43F6C;
    }
L_08A43F6C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    hot_regs.g5 = (0u | 37u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A43F9C;
      }
      goto L_08A43F7C;
    }
L_08A43F7C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    hot_regs.g5 = (0u | 34u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A43F9C;
      }
      goto L_08A43F8C;
    }
L_08A43F8C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    hot_regs.g5 = (0u | 20u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 8u, 0x08A440FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A43F9C;
    }
L_08A43F9C:
    hot_regs.g31 = (0x08A43FA4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A43FA4u) goto L_08A43FA4;
    return;
L_08A43FA4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 8u, 0x08A440FCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A43FAC;
    }
L_08A43FAC:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    hot_regs.g5 = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g5);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    ctx.pc = 0x08A44000u; return;
}

void recomp_unit_0143(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0143_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_143(Runtime &runtime) {
    runtime.register_generated_unit(143u, 0x08A40000u, 16384u, &recomp_unit_0143, &recomp_unit_0143_entry);
    runtime.register_function(0x08A40000u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4000Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40024u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4004Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40058u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40064u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4006Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40074u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40098u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A400B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A400D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4011Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40134u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40160u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40170u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40178u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40198u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A401A8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A401B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A401C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A401D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A401E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A401F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40204u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40208u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40220u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40228u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40240u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40268u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40280u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A402ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4031Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4033Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40344u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4034Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40354u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40368u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40374u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4037Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40388u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40390u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40398u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A403ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A403B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A403C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A403C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A403CCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A403E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4044Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40458u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40460u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40464u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4046Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40484u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40490u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40498u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A404A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A404ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A404B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A404BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A404C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A404CCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A404D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A404E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A404F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A404FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40504u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40508u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40518u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40520u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4052Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40534u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40538u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4054Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40560u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4056Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4057Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4058Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A405A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A405B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A405F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A405F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40600u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4060Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40640u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40648u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40660u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40678u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A406E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A406F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4072Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40778u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40784u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40818u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40820u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40828u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40838u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40844u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40854u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40864u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4086Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40888u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40898u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A408A8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A408FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40944u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40958u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40984u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A409CCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A409D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A409E4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A409FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A08u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A40u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A78u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A8Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40AC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40ACCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40ADCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40AFCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B0Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B14u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B1Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B24u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B38u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B50u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B58u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B60u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B6Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B8Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B98u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40BA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40BC8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40BD0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40BE0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40BECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40BF8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C00u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C10u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C20u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C30u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C40u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C50u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C58u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C70u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C94u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40CA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40CACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40CBCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40CCCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40CD4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40CDCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40CECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40CFCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D34u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D44u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D58u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D68u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D70u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D78u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D80u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D88u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D90u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D98u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DA8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DB8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DC0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DCCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DFCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E08u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E14u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E30u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E38u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E40u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E50u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E68u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E7Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E84u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E94u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E9Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40EA8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40EB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40EB8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40EC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40ED0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40ED8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40EE8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40EF0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40EFCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F14u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F1Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F34u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F40u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F60u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F68u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F7Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F94u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F9Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40FACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40FB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40FCCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40FE4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40FECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41000u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41008u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41010u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41018u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41020u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41030u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4106Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41074u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4107Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41090u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A410A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41114u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4111Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41124u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4112Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41144u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41148u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A411A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A411A8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A411C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41208u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4121Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41254u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41290u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A412B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A412CCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41324u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41344u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41358u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A413A8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A413C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A413DCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4142Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4144Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41460u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A414B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A414D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A414E4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41534u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41560u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41568u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41598u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A415D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A415ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41600u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41660u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41668u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41670u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41688u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A416D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41710u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41718u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41744u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41764u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41770u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41778u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41780u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41788u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41790u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41798u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417A8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417DCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41804u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4180Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41818u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41820u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41824u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4182Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41850u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41864u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41874u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41884u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4188Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41894u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A418ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A418C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41904u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41928u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4194Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41968u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4197Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41984u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A419B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A419E4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A419F4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A0Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A14u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A2Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A34u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A4Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A6Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A84u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A8Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41AACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B20u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B2Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B3Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B44u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B6Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B74u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B84u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B8Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B9Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41BA4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41BB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41BC0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41BC8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41BD8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41BE0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41BF4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41BFCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C00u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C0Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C1Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C30u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C40u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C64u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C78u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C88u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C90u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C98u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41CA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41CC0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41CD0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41CE4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D7Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D88u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41DBCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41EA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41ED8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41EE0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F10u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F18u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F34u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41FD8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41FE0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41FE4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42004u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42018u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42020u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42028u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42030u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42038u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42040u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42068u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42070u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42090u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A420ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A420BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A420D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A420E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A420F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A420F4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A420FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4210Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42118u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42120u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42128u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4212Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42134u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42178u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42180u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42188u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42190u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42198u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A421A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A421ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A421B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A421BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A421D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A421DCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A421ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42208u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4221Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4225Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42270u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42284u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4228Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A422B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A422E4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A422F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A422F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A422FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4230Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42374u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42384u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4238Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42394u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42398u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A423F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42438u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42484u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4248Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A424C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42520u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42528u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4255Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42588u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4259Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A425D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A425F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42608u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42614u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42628u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42644u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4265Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42670u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A426ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A426C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A426C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A426D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A426E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A426F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A426F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42700u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42708u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42710u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42718u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42760u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42774u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4277Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42784u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42790u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A427A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A427ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A427B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A427C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A427E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A427E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A427F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42808u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4280Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42814u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4281Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42834u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42838u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4283Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4286Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42874u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42878u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42880u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42920u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42928u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4295Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42968u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42980u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4298Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A429A8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A429B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A429FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A0Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A2Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A34u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42AF0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42AF8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B2Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B50u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42BA4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42BC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42C68u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42C70u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42CA4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42CC0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42CC8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D1Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D3Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42DECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42DF4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E44u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E70u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42F04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42F80u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42F98u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43010u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4302Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4304Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4306Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A430B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A430C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4313Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43188u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43190u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A431A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4321Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4322Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43248u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43268u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43288u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A432D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A432DCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43300u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43378u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A433C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43404u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4345Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43468u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43488u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4349Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A434A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A434E4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A434F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A434F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43500u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4350Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43514u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43518u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43524u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4352Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43538u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43540u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43544u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43554u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43568u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4358Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A435ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A435B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A435C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A435D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A435ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43604u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4361Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43654u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43664u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4366Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4368Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A436B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A436D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A436E4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A436ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A436F4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A436FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43728u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43780u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43788u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A437A8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A437B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A437CCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A437D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A437E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43808u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43810u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43838u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43840u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43864u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4386Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A438C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A438D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A438FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43938u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43944u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4394Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43958u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43964u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43968u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43970u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4397Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43988u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43994u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A439A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A439ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A439B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A439C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A439D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A439DCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A439E4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43A04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43A14u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43A24u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43A64u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43A6Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43A74u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43A7Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43A84u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43A8Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43A94u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43A98u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43AA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43AA8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43AB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43AB8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43AC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43AC8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43AD4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43AD8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43AE4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43AECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43AF4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43AFCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B0Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B18u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B24u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B30u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B3Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B60u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B78u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B84u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B8Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B94u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43BA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43BA8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43BB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43BB8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43BC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43BD0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43BDCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43BE8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43BF4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C00u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C0Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C24u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C30u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C38u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C40u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C4Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C68u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C74u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C80u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C8Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C98u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43CA4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43CB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43CC8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43CD4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43CDCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43CE4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43CF0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43CF4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43CFCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D0Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D14u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D1Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D24u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D38u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D4Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D64u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D70u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D7Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D88u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D94u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43DA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43DACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43DB8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43DC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43DD0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43DF4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E58u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E64u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E6Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E70u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E88u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E94u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E9Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43EA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43EA8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43EB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43EBCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43EC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43ECCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43ED4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43EDCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43EE4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43EF0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F24u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F2Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F3Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F4Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F6Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F7Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F8Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F9Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43FA4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43FACu, &recomp_unit_0143, "recomp_unit_0143");
}
} // namespace psprecomp
