#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0069[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0,
    0, 8, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 15, 0,
    16, 0, 17, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0,
    0, 22, 0, 0, 0, 23, 24, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0,
    0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 34, 0, 0, 0, 35, 0,
    36, 0, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 46, 0, 47, 0,
    0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0,
    55, 0, 0, 56, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 61, 0,
    0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 67, 0, 0, 68, 0, 69, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 72, 73, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0,
    0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 83, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 87, 0, 0, 0, 0, 88, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 92,
    0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 0,
    0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108,
    0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0,
    0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119,
    0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 125,
    0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0,
    0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 138, 0, 0, 0, 0, 0, 139,
    0, 0, 140, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 150, 0, 151, 0, 152,
    0, 0, 153, 154, 0, 155, 0, 156, 0, 0, 157, 0, 0, 158, 159, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0,
    163, 164, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 170, 0, 171,
    0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 175, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 180, 0, 0, 0, 181, 0, 182, 0, 183,
    0, 184, 0, 185, 0, 0, 0, 186, 0, 187, 0, 188, 0, 189, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 197, 0, 198, 0, 199, 0, 200, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 205,
    0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 212, 0, 0, 0, 213, 0, 0, 0,
    0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0,
    0, 218, 0, 219, 0, 220, 0, 221, 0, 222, 223, 0, 0, 0, 224, 0, 225, 0, 226, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0,
    229, 0, 0, 230, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0,
    236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 241, 0, 0, 0, 242, 0, 243, 0, 0, 244, 0, 245, 0, 0, 246, 0, 247, 0, 248, 0, 0, 0, 0, 0, 249, 0, 250, 0, 251, 0,
    252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0,
    0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 273,
    0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 280, 0,
    0, 0, 0, 281, 0, 282, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 287, 0, 0, 288, 0, 0,
    0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298,
    0, 0, 0, 0, 299, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0,
    304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 311,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 315, 0,
    316, 0, 317, 0, 318, 0, 319, 0, 320, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0,
    324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 335,
    336, 0, 337, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342,
    0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355,
    0, 0, 0, 0, 356, 0, 0, 357, 0, 358, 0, 0, 0, 0, 359, 0, 360, 0, 361, 0, 362, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 370,
    0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 376,
    0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 379, 380, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    387, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 395,
    0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0,
    0, 401, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0,
    0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0,
    0, 413, 0, 414, 0, 415, 0, 0, 0, 0, 0, 416, 417, 0, 418, 0, 0, 0, 0, 0, 0, 419, 420, 421, 0, 0, 0, 0, 0, 0, 0, 0,
    422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0,
    426, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0,
    433, 0, 434, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 441,
    0, 0, 0, 0, 442, 443, 0, 0, 0, 0, 444, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0,
    0, 0, 0, 448, 449, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 451, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0,
    0, 459, 0, 0, 460, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0, 0, 465, 466,
    0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 470, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0,
    0, 0, 474, 0, 475, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0,
    0, 482, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 490, 0, 491, 0,
    492, 493, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 497, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 0,
    0, 500, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 512,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 515, 0, 0, 516,
    0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 537, 0, 538, 0, 0, 539, 0, 0, 0, 0, 0, 0, 540,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 544, 0,
    0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 548, 0, 0, 0, 0, 0,
    0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 556, 0, 557, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568,
    0, 569, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 573,
    0, 0, 0, 574, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 579, 0, 580, 0,
    0, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 587, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 590, 0, 591, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 593, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 597, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 604, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0,
    0, 606, 0, 607, 0, 0, 0, 0, 0, 0, 608, 609, 0, 0, 0, 610, 0, 0, 0, 611, 0, 612, 0, 613, 0, 0, 614, 0, 0, 615, 0, 616,
    0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 619, 0, 620, 621, 0, 622, 0, 0, 623, 0, 624, 0, 625, 0,
    626, 0, 0, 627, 0, 628, 0, 629, 0, 630, 0, 631, 0, 632, 0, 633, 0, 634, 0, 0, 0, 635, 0, 636, 0, 0, 0, 637, 0, 638, 0, 0,
    0, 639, 0, 0, 640, 0, 641, 0, 642, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 644, 0, 0, 645, 646, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0, 0, 650, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 652, 0, 653, 0, 0, 0, 654, 0, 0, 0, 655, 0, 656, 0,
    657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 659, 0, 660, 0, 0, 0, 0, 661, 0,
    662, 0, 663, 0, 664, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 667,
    0, 668, 0, 0, 669, 0, 0, 670, 0, 671, 0, 672, 0, 0, 0, 673, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0,
    0, 676, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 680, 0, 0, 0, 681, 0, 682, 0,
    0, 683, 0, 684, 0, 685, 0, 686, 0, 0, 0, 687, 0, 688, 0, 689, 0, 690, 0, 691, 0, 0, 692, 0, 0, 693, 0, 0, 0, 0, 0, 0,
    694, 0, 0, 0, 0, 695, 0, 696, 0, 0, 0, 697, 0, 0, 698, 0, 699, 0, 0, 0, 700, 0, 701, 0, 702, 0, 0, 0, 703, 0, 0, 0,
    704, 0, 0, 0, 705, 0, 0, 0, 706, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 709, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 710, 711, 0, 0, 712, 0, 713, 0, 714, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 716, 0, 0, 0, 0, 717, 0,
    718, 0, 0, 0, 0, 719, 0, 720, 0, 0, 0, 0, 721, 0, 0, 0, 0, 722, 0, 723, 0, 724, 0, 725, 0, 0, 0, 726, 727, 0, 0, 728,
};
void recomp_unit_0069_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08918000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0069[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08918000;
    case 2u: goto L_08918018;
    case 3u: goto L_08918028;
    case 4u: goto L_08918040;
    case 5u: goto L_08918048;
    case 6u: goto L_08918064;
    case 7u: goto L_08918078;
    case 8u: goto L_08918084;
    case 9u: goto L_08918090;
    case 10u: goto L_089180A0;
    case 11u: goto L_089180B4;
    case 12u: goto L_089180C4;
    case 13u: goto L_089180D8;
    case 14u: goto L_089180EC;
    case 15u: goto L_089180F8;
    case 16u: goto L_08918100;
    case 17u: goto L_08918108;
    case 18u: goto L_0891811C;
    case 19u: goto L_08918128;
    case 20u: goto L_08918150;
    case 21u: goto L_08918164;
    case 22u: goto L_08918184;
    case 23u: goto L_08918194;
    case 24u: goto L_08918198;
    case 25u: goto L_089181B4;
    case 26u: goto L_089181BC;
    case 27u: goto L_089181E8;
    case 28u: goto L_08918204;
    case 29u: goto L_08918228;
    case 30u: goto L_0891823C;
    case 31u: goto L_0891826C;
    case 32u: goto L_089182D4;
    case 33u: goto L_089182E0;
    case 34u: goto L_089182E8;
    case 35u: goto L_089182F8;
    case 36u: goto L_08918300;
    case 37u: goto L_0891830C;
    case 38u: goto L_08918314;
    case 39u: goto L_0891831C;
    case 40u: goto L_08918324;
    case 41u: goto L_0891832C;
    case 42u: goto L_08918338;
    case 43u: goto L_08918348;
    case 44u: goto L_08918358;
    case 45u: goto L_08918368;
    case 46u: goto L_08918370;
    case 47u: goto L_08918378;
    case 48u: goto L_0891839C;
    case 49u: goto L_089183AC;
    case 50u: goto L_089183BC;
    case 51u: goto L_089183C4;
    case 52u: goto L_089183D0;
    case 53u: goto L_089183EC;
    case 54u: goto L_089183F8;
    case 55u: goto L_08918400;
    case 56u: goto L_0891840C;
    case 57u: goto L_08918414;
    case 58u: goto L_08918420;
    case 59u: goto L_08918464;
    case 60u: goto L_08918470;
    case 61u: goto L_08918478;
    case 62u: goto L_0891849C;
    case 63u: goto L_089184A4;
    case 64u: goto L_089184CC;
    case 65u: goto L_089184E0;
    case 66u: goto L_089184F0;
    case 67u: goto L_08918508;
    case 68u: goto L_08918514;
    case 69u: goto L_0891851C;
    case 70u: goto L_08918524;
    case 71u: goto L_0891853C;
    case 72u: goto L_08918548;
    case 73u: goto L_0891854C;
    case 74u: goto L_08918550;
    case 75u: goto L_08918580;
    case 76u: goto L_089185A0;
    case 77u: goto L_089185A8;
    case 78u: goto L_089185AC;
    case 79u: goto L_08918660;
    case 80u: goto L_08918678;
    case 81u: goto L_08918694;
    case 82u: goto L_089186A4;
    case 83u: goto L_089186AC;
    case 84u: goto L_089186B4;
    case 85u: goto L_089186CC;
    case 86u: goto L_089186D8;
    case 87u: goto L_089186E0;
    case 88u: goto L_089186F4;
    case 89u: goto L_08918728;
    case 90u: goto L_08918758;
    case 91u: goto L_08918768;
    case 92u: goto L_0891877C;
    case 93u: goto L_08918784;
    case 94u: goto L_0891879C;
    case 95u: goto L_089187B4;
    case 96u: goto L_089187BC;
    case 97u: goto L_089187E4;
    case 98u: goto L_089187EC;
    case 99u: goto L_089187F4;
    case 100u: goto L_08918808;
    case 101u: goto L_08918828;
    case 102u: goto L_08918840;
    case 103u: goto L_08918868;
    case 104u: goto L_0891889C;
    case 105u: goto L_089188C0;
    case 106u: goto L_089188C8;
    case 107u: goto L_089188F4;
    case 108u: goto L_089188FC;
    case 109u: goto L_0891891C;
    case 110u: goto L_08918968;
    case 111u: goto L_08918970;
    case 112u: goto L_08918988;
    case 113u: goto L_089189B0;
    case 114u: goto L_089189E4;
    case 115u: goto L_08918A08;
    case 116u: goto L_08918A14;
    case 117u: goto L_08918A3C;
    case 118u: goto L_08918A68;
    case 119u: goto L_08918A7C;
    case 120u: goto L_08918A84;
    case 121u: goto L_08918A90;
    case 122u: goto L_08918A9C;
    case 123u: goto L_08918AE0;
    case 124u: goto L_08918AF4;
    case 125u: goto L_08918AFC;
    case 126u: goto L_08918B08;
    case 127u: goto L_08918B10;
    case 128u: goto L_08918B28;
    case 129u: goto L_08918B34;
    case 130u: goto L_08918B40;
    case 131u: goto L_08918B48;
    case 132u: goto L_08918B60;
    case 133u: goto L_08918B6C;
    case 134u: goto L_08918B84;
    case 135u: goto L_08918BA0;
    case 136u: goto L_08918BD4;
    case 137u: goto L_08918BDC;
    case 138u: goto L_08918BE4;
    case 139u: goto L_08918BFC;
    case 140u: goto L_08918C08;
    case 141u: goto L_08918C10;
    case 142u: goto L_08918C24;
    case 143u: goto L_08918C58;
    case 144u: goto L_08918C88;
    case 145u: goto L_08918C98;
    case 146u: goto L_08918CAC;
    case 147u: goto L_08918CB4;
    case 148u: goto L_08918CCC;
    case 149u: goto L_08918CE4;
    case 150u: goto L_08918CEC;
    case 151u: goto L_08918CF4;
    case 152u: goto L_08918CFC;
    case 153u: goto L_08918D08;
    case 154u: goto L_08918D0C;
    case 155u: goto L_08918D14;
    case 156u: goto L_08918D1C;
    case 157u: goto L_08918D28;
    case 158u: goto L_08918D34;
    case 159u: goto L_08918D38;
    case 160u: goto L_08918D3C;
    case 161u: goto L_08918D60;
    case 162u: goto L_08918D78;
    case 163u: goto L_08918D80;
    case 164u: goto L_08918D84;
    case 165u: goto L_08918D90;
    case 166u: goto L_08918D98;
    case 167u: goto L_08918E38;
    case 168u: goto L_08918E60;
    case 169u: goto L_08918E68;
    case 170u: goto L_08918E74;
    case 171u: goto L_08918E7C;
    case 172u: goto L_08918E94;
    case 173u: goto L_08918EAC;
    case 174u: goto L_08918EC0;
    case 175u: goto L_08918ECC;
    case 176u: goto L_08918ED0;
    case 177u: goto L_08918F0C;
    case 178u: goto L_08918F48;
    case 179u: goto L_08918F50;
    case 180u: goto L_08918F5C;
    case 181u: goto L_08918F6C;
    case 182u: goto L_08918F74;
    case 183u: goto L_08918F7C;
    case 184u: goto L_08918F84;
    case 185u: goto L_08918F8C;
    case 186u: goto L_08918F9C;
    case 187u: goto L_08918FA4;
    case 188u: goto L_08918FAC;
    case 189u: goto L_08918FB4;
    case 190u: goto L_08918FC8;
    case 191u: goto L_08918FD0;
    case 192u: goto L_08918FEC;
    case 193u: goto L_08919038;
    case 194u: goto L_0891904C;
    case 195u: goto L_0891905C;
    case 196u: goto L_0891906C;
    case 197u: goto L_08919094;
    case 198u: goto L_0891909C;
    case 199u: goto L_089190A4;
    case 200u: goto L_089190AC;
    case 201u: goto L_089190B8;
    case 202u: goto L_089190CC;
    case 203u: goto L_089190DC;
    case 204u: goto L_089190F0;
    case 205u: goto L_089190FC;
    case 206u: goto L_08919104;
    case 207u: goto L_08919118;
    case 208u: goto L_08919128;
    case 209u: goto L_08919138;
    case 210u: goto L_08919148;
    case 211u: goto L_08919158;
    case 212u: goto L_08919160;
    case 213u: goto L_08919170;
    case 214u: goto L_0891918C;
    case 215u: goto L_089191A8;
    case 216u: goto L_089191E8;
    case 217u: goto L_089191F0;
    case 218u: goto L_08919204;
    case 219u: goto L_0891920C;
    case 220u: goto L_08919214;
    case 221u: goto L_0891921C;
    case 222u: goto L_08919224;
    case 223u: goto L_08919228;
    case 224u: goto L_08919238;
    case 225u: goto L_08919240;
    case 226u: goto L_08919248;
    case 227u: goto L_0891925C;
    case 228u: goto L_08919268;
    case 229u: goto L_08919280;
    case 230u: goto L_0891928C;
    case 231u: goto L_0891929C;
    case 232u: goto L_089192A8;
    case 233u: goto L_089192B8;
    case 234u: goto L_089192C8;
    case 235u: goto L_089192EC;
    case 236u: goto L_08919300;
    case 237u: goto L_08919314;
    case 238u: goto L_08919338;
    case 239u: goto L_08919344;
    case 240u: goto L_08919350;
    case 241u: goto L_08919388;
    case 242u: goto L_08919398;
    case 243u: goto L_089193A0;
    case 244u: goto L_089193AC;
    case 245u: goto L_089193B4;
    case 246u: goto L_089193C0;
    case 247u: goto L_089193C8;
    case 248u: goto L_089193D0;
    case 249u: goto L_089193E8;
    case 250u: goto L_089193F0;
    case 251u: goto L_089193F8;
    case 252u: goto L_08919400;
    case 253u: goto L_08919410;
    case 254u: goto L_08919420;
    case 255u: goto L_08919434;
    case 256u: goto L_0891943C;
    case 257u: goto L_08919448;
    case 258u: goto L_08919480;
    case 259u: goto L_089194AC;
    case 260u: goto L_089194C4;
    case 261u: goto L_089194DC;
    case 262u: goto L_089194F8;
    case 263u: goto L_08919504;
    case 264u: goto L_0891951C;
    case 265u: goto L_08919534;
    case 266u: goto L_08919538;
    case 267u: goto L_0891954C;
    case 268u: goto L_08919564;
    case 269u: goto L_0891958C;
    case 270u: goto L_089195CC;
    case 271u: goto L_089195E4;
    case 272u: goto L_089195F4;
    case 273u: goto L_089195FC;
    case 274u: goto L_08919608;
    case 275u: goto L_08919624;
    case 276u: goto L_08919638;
    case 277u: goto L_0891964C;
    case 278u: goto L_0891965C;
    case 279u: goto L_08919670;
    case 280u: goto L_08919678;
    case 281u: goto L_0891968C;
    case 282u: goto L_08919694;
    case 283u: goto L_0891969C;
    case 284u: goto L_089196B8;
    case 285u: goto L_089196D0;
    case 286u: goto L_089196D8;
    case 287u: goto L_089196E8;
    case 288u: goto L_089196F4;
    case 289u: goto L_08919708;
    case 290u: goto L_08919720;
    case 291u: goto L_08919740;
    case 292u: goto L_08919750;
    case 293u: goto L_08919768;
    case 294u: goto L_08919778;
    case 295u: goto L_0891982C;
    case 296u: goto L_08919850;
    case 297u: goto L_08919864;
    case 298u: goto L_0891987C;
    case 299u: goto L_08919890;
    case 300u: goto L_08919894;
    case 301u: goto L_089198A0;
    case 302u: goto L_089198D8;
    case 303u: goto L_089198EC;
    case 304u: goto L_08919900;
    case 305u: goto L_08919910;
    case 306u: goto L_08919920;
    case 307u: goto L_08919934;
    case 308u: goto L_08919948;
    case 309u: goto L_08919958;
    case 310u: goto L_08919968;
    case 311u: goto L_0891997C;
    case 312u: goto L_089199B0;
    case 313u: goto L_089199E8;
    case 314u: goto L_089199F0;
    case 315u: goto L_089199F8;
    case 316u: goto L_08919A00;
    case 317u: goto L_08919A08;
    case 318u: goto L_08919A10;
    case 319u: goto L_08919A18;
    case 320u: goto L_08919A20;
    case 321u: goto L_08919A28;
    case 322u: goto L_08919A34;
    case 323u: goto L_08919A5C;
    case 324u: goto L_08919A80;
    case 325u: goto L_08919A94;
    case 326u: goto L_08919AB0;
    case 327u: goto L_08919AC0;
    case 328u: goto L_08919AD0;
    case 329u: goto L_08919AE8;
    case 330u: goto L_08919B34;
    case 331u: goto L_08919B44;
    case 332u: goto L_08919B50;
    case 333u: goto L_08919B60;
    case 334u: goto L_08919B6C;
    case 335u: goto L_08919B7C;
    case 336u: goto L_08919B80;
    case 337u: goto L_08919B88;
    case 338u: goto L_08919B9C;
    case 339u: goto L_08919BA8;
    case 340u: goto L_08919BC8;
    case 341u: goto L_08919BE0;
    case 342u: goto L_08919BFC;
    case 343u: goto L_08919C0C;
    case 344u: goto L_08919C1C;
    case 345u: goto L_08919C34;
    case 346u: goto L_08919C88;
    case 347u: goto L_08919CA4;
    case 348u: goto L_08919CB0;
    case 349u: goto L_08919CD8;
    case 350u: goto L_08919D0C;
    case 351u: goto L_08919D24;
    case 352u: goto L_08919D30;
    case 353u: goto L_08919D48;
    case 354u: goto L_08919D60;
    case 355u: goto L_08919D7C;
    case 356u: goto L_08919D90;
    case 357u: goto L_08919D9C;
    case 358u: goto L_08919DA4;
    case 359u: goto L_08919DB8;
    case 360u: goto L_08919DC0;
    case 361u: goto L_08919DC8;
    case 362u: goto L_08919DD0;
    case 363u: goto L_08919DD8;
    case 364u: goto L_08919DE0;
    case 365u: goto L_08919E00;
    case 366u: goto L_08919E14;
    case 367u: goto L_08919E48;
    case 368u: goto L_08919ED8;
    case 369u: goto L_08919EF4;
    case 370u: goto L_08919EFC;
    case 371u: goto L_08919F10;
    case 372u: goto L_08919F38;
    case 373u: goto L_08919F4C;
    case 374u: goto L_08919F54;
    case 375u: goto L_08919F70;
    case 376u: goto L_08919F7C;
    case 377u: goto L_08919F88;
    case 378u: goto L_08919F9C;
    case 379u: goto L_08919FA8;
    case 380u: goto L_08919FAC;
    case 381u: goto L_08919FB0;
    case 382u: goto L_0891A014;
    case 383u: goto L_0891A024;
    case 384u: goto L_0891A03C;
    case 385u: goto L_0891A050;
    case 386u: goto L_0891A054;
    case 387u: goto L_0891A080;
    case 388u: goto L_0891A088;
    case 389u: goto L_0891A0BC;
    case 390u: goto L_0891A0D8;
    case 391u: goto L_0891A124;
    case 392u: goto L_0891A14C;
    case 393u: goto L_0891A154;
    case 394u: goto L_0891A170;
    case 395u: goto L_0891A17C;
    case 396u: goto L_0891A190;
    case 397u: goto L_0891A1A4;
    case 398u: goto L_0891A1A8;
    case 399u: goto L_0891A1CC;
    case 400u: goto L_0891A1EC;
    case 401u: goto L_0891A204;
    case 402u: goto L_0891A208;
    case 403u: goto L_0891A224;
    case 404u: goto L_0891A238;
    case 405u: goto L_0891A24C;
    case 406u: goto L_0891A260;
    case 407u: goto L_0891A270;
    case 408u: goto L_0891A28C;
    case 409u: goto L_0891A2C0;
    case 410u: goto L_0891A2CC;
    case 411u: goto L_0891A2E0;
    case 412u: goto L_0891A2EC;
    case 413u: goto L_0891A304;
    case 414u: goto L_0891A30C;
    case 415u: goto L_0891A314;
    case 416u: goto L_0891A32C;
    case 417u: goto L_0891A330;
    case 418u: goto L_0891A338;
    case 419u: goto L_0891A354;
    case 420u: goto L_0891A358;
    case 421u: goto L_0891A35C;
    case 422u: goto L_0891A380;
    case 423u: goto L_0891A3C0;
    case 424u: goto L_0891A3C8;
    case 425u: goto L_0891A3F8;
    case 426u: goto L_0891A400;
    case 427u: goto L_0891A414;
    case 428u: goto L_0891A424;
    case 429u: goto L_0891A434;
    case 430u: goto L_0891A444;
    case 431u: goto L_0891A45C;
    case 432u: goto L_0891A474;
    case 433u: goto L_0891A480;
    case 434u: goto L_0891A488;
    case 435u: goto L_0891A48C;
    case 436u: goto L_0891A4B8;
    case 437u: goto L_0891A4C0;
    case 438u: goto L_0891A540;
    case 439u: goto L_0891A548;
    case 440u: goto L_0891A568;
    case 441u: goto L_0891A57C;
    case 442u: goto L_0891A590;
    case 443u: goto L_0891A594;
    case 444u: goto L_0891A5A8;
    case 445u: goto L_0891A5AC;
    case 446u: goto L_0891A5E0;
    case 447u: goto L_0891A5E8;
    case 448u: goto L_0891A60C;
    case 449u: goto L_0891A610;
    case 450u: goto L_0891A618;
    case 451u: goto L_0891A688;
    case 452u: goto L_0891A690;
    case 453u: goto L_0891A6C8;
    case 454u: goto L_0891A6CC;
    case 455u: goto L_0891A740;
    case 456u: goto L_0891A75C;
    case 457u: goto L_0891A854;
    case 458u: goto L_0891A86C;
    case 459u: goto L_0891A884;
    case 460u: goto L_0891A890;
    case 461u: goto L_0891A894;
    case 462u: goto L_0891A8BC;
    case 463u: goto L_0891A8D0;
    case 464u: goto L_0891A8EC;
    case 465u: goto L_0891A8F8;
    case 466u: goto L_0891A8FC;
    case 467u: goto L_0891A918;
    case 468u: goto L_0891A930;
    case 469u: goto L_0891A940;
    case 470u: goto L_0891A948;
    case 471u: goto L_0891A950;
    case 472u: goto L_0891A960;
    case 473u: goto L_0891A974;
    case 474u: goto L_0891A988;
    case 475u: goto L_0891A990;
    case 476u: goto L_0891A998;
    case 477u: goto L_0891A9B0;
    case 478u: goto L_0891A9C4;
    case 479u: goto L_0891A9CC;
    case 480u: goto L_0891A9DC;
    case 481u: goto L_0891A9F0;
    case 482u: goto L_0891AA04;
    case 483u: goto L_0891AA0C;
    case 484u: goto L_0891AA20;
    case 485u: goto L_0891AA38;
    case 486u: goto L_0891AA44;
    case 487u: goto L_0891AA98;
    case 488u: goto L_0891AACC;
    case 489u: goto L_0891AAE8;
    case 490u: goto L_0891AAF0;
    case 491u: goto L_0891AAF8;
    case 492u: goto L_0891AB00;
    case 493u: goto L_0891AB04;
    case 494u: goto L_0891AB0C;
    case 495u: goto L_0891AB34;
    case 496u: goto L_0891AB44;
    case 497u: goto L_0891AB50;
    case 498u: goto L_0891AB58;
    case 499u: goto L_0891AB6C;
    case 500u: goto L_0891AB84;
    case 501u: goto L_0891AB94;
    case 502u: goto L_0891ABA4;
    case 503u: goto L_0891ABB8;
    case 504u: goto L_0891ABC0;
    case 505u: goto L_0891ABD4;
    case 506u: goto L_0891ABE4;
    case 507u: goto L_0891AC34;
    case 508u: goto L_0891AC3C;
    case 509u: goto L_0891AC48;
    case 510u: goto L_0891AC58;
    case 511u: goto L_0891AC6C;
    case 512u: goto L_0891AC7C;
    case 513u: goto L_0891ACD4;
    case 514u: goto L_0891ACDC;
    case 515u: goto L_0891ACF0;
    case 516u: goto L_0891ACFC;
    case 517u: goto L_0891AD0C;
    case 518u: goto L_0891AD34;
    case 519u: goto L_0891AD48;
    case 520u: goto L_0891AD7C;
    case 521u: goto L_0891ADCC;
    case 522u: goto L_0891ADDC;
    case 523u: goto L_0891ADF0;
    case 524u: goto L_0891AE1C;
    case 525u: goto L_0891AE2C;
    case 526u: goto L_0891AEBC;
    case 527u: goto L_0891AED0;
    case 528u: goto L_0891AEE0;
    case 529u: goto L_0891AF24;
    case 530u: goto L_0891AF38;
    case 531u: goto L_0891AF80;
    case 532u: goto L_0891AFAC;
    case 533u: goto L_0891AFB4;
    case 534u: goto L_0891AFD0;
    case 535u: goto L_0891AFE4;
    case 536u: goto L_0891B044;
    case 537u: goto L_0891B04C;
    case 538u: goto L_0891B054;
    case 539u: goto L_0891B060;
    case 540u: goto L_0891B07C;
    case 541u: goto L_0891B0C4;
    case 542u: goto L_0891B0D8;
    case 543u: goto L_0891B0E8;
    case 544u: goto L_0891B0F8;
    case 545u: goto L_0891B108;
    case 546u: goto L_0891B138;
    case 547u: goto L_0891B160;
    case 548u: goto L_0891B168;
    case 549u: goto L_0891B184;
    case 550u: goto L_0891B1A8;
    case 551u: goto L_0891B1B8;
    case 552u: goto L_0891B1CC;
    case 553u: goto L_0891B1E0;
    case 554u: goto L_0891B224;
    case 555u: goto L_0891B238;
    case 556u: goto L_0891B244;
    case 557u: goto L_0891B24C;
    case 558u: goto L_0891B250;
    case 559u: goto L_0891B27C;
    case 560u: goto L_0891B2B0;
    case 561u: goto L_0891B308;
    case 562u: goto L_0891B328;
    case 563u: goto L_0891B354;
    case 564u: goto L_0891B368;
    case 565u: goto L_0891B39C;
    case 566u: goto L_0891B3E4;
    case 567u: goto L_0891B414;
    case 568u: goto L_0891B47C;
    case 569u: goto L_0891B484;
    case 570u: goto L_0891B48C;
    case 571u: goto L_0891B4C4;
    case 572u: goto L_0891B4DC;
    case 573u: goto L_0891B4FC;
    case 574u: goto L_0891B50C;
    case 575u: goto L_0891B518;
    case 576u: goto L_0891B524;
    case 577u: goto L_0891B538;
    case 578u: goto L_0891B568;
    case 579u: goto L_0891B570;
    case 580u: goto L_0891B578;
    case 581u: goto L_0891B590;
    case 582u: goto L_0891B5A0;
    case 583u: goto L_0891B5C0;
    case 584u: goto L_0891B5E0;
    case 585u: goto L_0891B630;
    case 586u: goto L_0891B640;
    case 587u: goto L_0891B64C;
    case 588u: goto L_0891B660;
    case 589u: goto L_0891B6A0;
    case 590u: goto L_0891B6A8;
    case 591u: goto L_0891B6B0;
    case 592u: goto L_0891B6C8;
    case 593u: goto L_0891B714;
    case 594u: goto L_0891B71C;
    case 595u: goto L_0891B744;
    case 596u: goto L_0891B770;
    case 597u: goto L_0891B774;
    case 598u: goto L_0891B7A0;
    case 599u: goto L_0891B7A8;
    case 600u: goto L_0891B7DC;
    case 601u: goto L_0891B814;
    case 602u: goto L_0891B838;
    case 603u: goto L_0891B84C;
    case 604u: goto L_0891B854;
    case 605u: goto L_0891B86C;
    case 606u: goto L_0891B884;
    case 607u: goto L_0891B88C;
    case 608u: goto L_0891B8A8;
    case 609u: goto L_0891B8AC;
    case 610u: goto L_0891B8BC;
    case 611u: goto L_0891B8CC;
    case 612u: goto L_0891B8D4;
    case 613u: goto L_0891B8DC;
    case 614u: goto L_0891B8E8;
    case 615u: goto L_0891B8F4;
    case 616u: goto L_0891B8FC;
    case 617u: goto L_0891B908;
    case 618u: goto L_0891B934;
    case 619u: goto L_0891B948;
    case 620u: goto L_0891B950;
    case 621u: goto L_0891B954;
    case 622u: goto L_0891B95C;
    case 623u: goto L_0891B968;
    case 624u: goto L_0891B970;
    case 625u: goto L_0891B978;
    case 626u: goto L_0891B980;
    case 627u: goto L_0891B98C;
    case 628u: goto L_0891B994;
    case 629u: goto L_0891B99C;
    case 630u: goto L_0891B9A4;
    case 631u: goto L_0891B9AC;
    case 632u: goto L_0891B9B4;
    case 633u: goto L_0891B9BC;
    case 634u: goto L_0891B9C4;
    case 635u: goto L_0891B9D4;
    case 636u: goto L_0891B9DC;
    case 637u: goto L_0891B9EC;
    case 638u: goto L_0891B9F4;
    case 639u: goto L_0891BA04;
    case 640u: goto L_0891BA10;
    case 641u: goto L_0891BA18;
    case 642u: goto L_0891BA20;
    case 643u: goto L_0891BA40;
    case 644u: goto L_0891BA4C;
    case 645u: goto L_0891BA58;
    case 646u: goto L_0891BA5C;
    case 647u: goto L_0891BA8C;
    case 648u: goto L_0891BAD0;
    case 649u: goto L_0891BAE4;
    case 650u: goto L_0891BAF4;
    case 651u: goto L_0891BB30;
    case 652u: goto L_0891BB48;
    case 653u: goto L_0891BB50;
    case 654u: goto L_0891BB60;
    case 655u: goto L_0891BB70;
    case 656u: goto L_0891BB78;
    case 657u: goto L_0891BB80;
    case 658u: goto L_0891BBBC;
    case 659u: goto L_0891BBDC;
    case 660u: goto L_0891BBE4;
    case 661u: goto L_0891BBF8;
    case 662u: goto L_0891BC00;
    case 663u: goto L_0891BC08;
    case 664u: goto L_0891BC10;
    case 665u: goto L_0891BC20;
    case 666u: goto L_0891BC5C;
    case 667u: goto L_0891BC7C;
    case 668u: goto L_0891BC84;
    case 669u: goto L_0891BC90;
    case 670u: goto L_0891BC9C;
    case 671u: goto L_0891BCA4;
    case 672u: goto L_0891BCAC;
    case 673u: goto L_0891BCBC;
    case 674u: goto L_0891BCCC;
    case 675u: goto L_0891BCF4;
    case 676u: goto L_0891BD04;
    case 677u: goto L_0891BD0C;
    case 678u: goto L_0891BD30;
    case 679u: goto L_0891BD58;
    case 680u: goto L_0891BD60;
    case 681u: goto L_0891BD70;
    case 682u: goto L_0891BD78;
    case 683u: goto L_0891BD84;
    case 684u: goto L_0891BD8C;
    case 685u: goto L_0891BD94;
    case 686u: goto L_0891BD9C;
    case 687u: goto L_0891BDAC;
    case 688u: goto L_0891BDB4;
    case 689u: goto L_0891BDBC;
    case 690u: goto L_0891BDC4;
    case 691u: goto L_0891BDCC;
    case 692u: goto L_0891BDD8;
    case 693u: goto L_0891BDE4;
    case 694u: goto L_0891BE00;
    case 695u: goto L_0891BE14;
    case 696u: goto L_0891BE1C;
    case 697u: goto L_0891BE2C;
    case 698u: goto L_0891BE38;
    case 699u: goto L_0891BE40;
    case 700u: goto L_0891BE50;
    case 701u: goto L_0891BE58;
    case 702u: goto L_0891BE60;
    case 703u: goto L_0891BE70;
    case 704u: goto L_0891BE80;
    case 705u: goto L_0891BE90;
    case 706u: goto L_0891BEA0;
    case 707u: goto L_0891BEB8;
    case 708u: goto L_0891BEE0;
    case 709u: goto L_0891BEE8;
    case 710u: goto L_0891BF10;
    case 711u: goto L_0891BF14;
    case 712u: goto L_0891BF20;
    case 713u: goto L_0891BF28;
    case 714u: goto L_0891BF30;
    case 715u: goto L_0891BF50;
    case 716u: goto L_0891BF64;
    case 717u: goto L_0891BF78;
    case 718u: goto L_0891BF80;
    case 719u: goto L_0891BF94;
    case 720u: goto L_0891BF9C;
    case 721u: goto L_0891BFB0;
    case 722u: goto L_0891BFC4;
    case 723u: goto L_0891BFCC;
    case 724u: goto L_0891BFD4;
    case 725u: goto L_0891BFDC;
    case 726u: goto L_0891BFEC;
    case 727u: goto L_0891BFF0;
    case 728u: goto L_0891BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08918000:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(hot_regs.g4);
    f12 = hot_regs.f22 - f12;
    ctx.set_fpu_condition((f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08918028;
      }
      goto L_08918018;
    }
}
L_08918018:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16585u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    hot_regs.f20 = hot_regs.f20 + hot_regs.f12;
    hot_regs.g4 = g4;
    goto L_08918028;
}
L_08918028:
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((ctx.fpr[24] <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08918100;
      }
      goto L_08918040;
    }
L_08918040:
    hot_regs.g31 = (0x08918048u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918048u) goto L_08918048;
    return;
L_08918048:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20104)));
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08918064u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918064u) goto L_08918064;
    return;
L_08918064:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20140)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20144)));
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x08918078u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918078u) goto L_08918078;
    return;
L_08918078:
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x08918084u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918084u) goto L_08918084;
    return;
L_08918084:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g31 = (0x08918090u);
    { const float fs = ctx.fpr[24]; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918090u) goto L_08918090;
    return;
L_08918090:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x089180A0u);
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089180A0u) goto L_089180A0;
    return;
L_089180A0:
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x089180B4u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089180B4u) goto L_089180B4;
    return;
L_089180B4:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x089180C4u);
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089180C4u) goto L_089180C4;
    return;
L_089180C4:
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x089180D8u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089180D8u) goto L_089180D8;
    return;
L_089180D8:
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x089180ECu);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089180ECu) goto L_089180EC;
    return;
L_089180EC:
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x089180F8u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089180F8u) goto L_089180F8;
    return;
L_089180F8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089181B4;
      }
      goto L_08918100;
    }
L_08918100:
    hot_regs.g31 = (0x08918108u);
    hot_regs.f12 = hot_regs.f20 + hot_regs.f22;
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918108u) goto L_08918108;
    return;
L_08918108:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20092)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20096)));
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x0891811Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891811Cu) goto L_0891811C;
    return;
L_0891811C:
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x08918128u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918128u) goto L_08918128;
    return;
L_08918128:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16457u << 16u);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2260)));
    g4 = (g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 + hot_regs.f13;
    ctx.set_fpu_condition((f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (16457u << 16u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08918164;
      }
      goto L_08918150;
    }
}
}
L_08918150:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16585u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f20 = hot_regs.f20 - hot_regs.f12;
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08918194;
      }
      goto L_08918164;
    }
}
L_08918164:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2260)));
    g4 = (g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 - hot_regs.f13;
    ctx.set_fpu_condition((f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    g4 = (16256u << 16u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08918198;
      }
      goto L_08918184;
    }
}
}
L_08918184:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16585u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    hot_regs.f20 = hot_regs.f20 + hot_regs.f12;
    hot_regs.g4 = g4;
    goto L_08918194;
}
L_08918194:
    hot_regs.g4 = (16256u << 16u);
    goto L_08918198;
L_08918198:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    { const float fs = ctx.fpr[24]; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2260)));
    f13 = f13 - ctx.fpr[24];
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_089181B4;
}
L_089181B4:
    hot_regs.g31 = (0x089181BCu);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089181BCu) goto L_089181BC;
    return;
L_089181BC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    g4 = (16457u << 16u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2256)));
    g4 = (g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2260)));
    f12 = f12 + hot_regs.f13;
    ctx.set_fpu_condition((f12 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (16457u << 16u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08918204;
      }
      goto L_089181E8;
    }
}
}
L_089181E8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16585u << 16u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2260)));
    g4 = (g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 - hot_regs.f13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0891823C;
      }
      goto L_08918204;
    }
}
}
L_08918204:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    g4 = (g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2260)));
    f12 = f12 - hot_regs.f13;
    ctx.set_fpu_condition((f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    g4 = (16585u << 16u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0891823C;
      }
      goto L_08918228;
    }
}
}
L_08918228:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2260)));
    g4 = (g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 + hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_0891823C;
}
}
L_0891823C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0891826C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-544));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(516), g19);
    g19 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(684)));
    g5 = (g4 + static_cast<std::uint32_t>(48));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    g6 = (128u << 16u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g5 = (g19 & g6);
    g6 = (17008u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(492), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f20 = std::bit_cast<float>(g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(504), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(508), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(512), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(520), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(524), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(528), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(532), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(536), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(540), hot_regs.g31);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[16] = (g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089182E8;
      }
      goto L_089182D4;
    }
}
}
L_089182D4:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x089182E0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 274u, 0x0890D0A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089182E0u) goto L_089182E0;
    return;
L_089182E0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08918300;
      }
      goto L_089182E8;
    }
L_089182E8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16u << 16u);
    g4 = (ctx.gpr[19] & g4);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08918314;
      }
      goto L_089182F8;
    }
}
L_089182F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089183AC;
      }
      goto L_08918300;
    }
L_08918300:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x0891830Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 49u, 0x08910338u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891830Cu) goto L_0891830C;
    return;
L_0891830C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (128u << 16u);
      if (branch_taken) {
          goto L_08918ED0;
      }
      goto L_08918314;
    }
L_08918314:
    hot_regs.g31 = (0x0891831Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 629u, 0x0891283Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891831Cu) goto L_0891831C;
    return;
L_0891831C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089183AC;
      }
      goto L_08918324;
    }
L_08918324:
    hot_regs.g31 = (0x0891832Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 299u, 0x0890D2E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891832Cu) goto L_0891832C;
    return;
L_0891832C:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089183AC;
      }
      goto L_08918338;
    }
L_08918338:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08918368;
      }
      goto L_08918348;
    }
L_08918348:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    hot_regs.g5 = (0u | 4u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08918368;
      }
      goto L_08918358;
    }
L_08918358:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    hot_regs.g5 = (0u | 5u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089183AC;
      }
      goto L_08918368;
    }
L_08918368:
    hot_regs.g31 = (0x08918370u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918370u) goto L_08918370;
    return;
L_08918370:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089183EC;
      }
      goto L_08918378;
    }
L_08918378:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24276)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (ctx.gpr[19] & g4);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089183C4;
      }
      goto L_0891839C;
    }
}
L_0891839C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    hot_regs.g5 = (0u | 11u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089183C4;
      }
      goto L_089183AC;
    }
L_089183AC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (512u << 16u);
    g4 = (ctx.gpr[19] & g4);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    hot_regs.g4 = g4;
        goto L_08918400;
    }
    goto L_089183BC;
}
L_089183BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918478;
      }
      goto L_089183C4;
    }
L_089183C4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089183D0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 69u, 0x08910440u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089183D0u) goto L_089183D0;
    return;
L_089183D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24276)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08918ED0;
      }
      goto L_089183EC;
    }
}
L_089183EC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089183F8u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 69u, 0x08910440u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089183F8u) goto L_089183F8;
    return;
L_089183F8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (16u << 16u);
      if (branch_taken) {
          goto L_08918ED0;
      }
      goto L_08918400;
    }
L_08918400:
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08918478;
      }
      goto L_0891840C;
    }
L_0891840C:
    hot_regs.g31 = (0x08918414u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 308u, 0x0890D3A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918414u) goto L_08918414;
    return;
L_08918414:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08918478;
      }
      goto L_08918420;
    }
L_08918420:
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
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
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (17352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08918478;
      }
      goto L_08918464;
    }
L_08918464:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(692), hot_regs.g4);
    hot_regs.g31 = (0x08918470u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(692));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918470u) goto L_08918470;
    return;
L_08918470:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (512u << 16u);
      if (branch_taken) {
          goto L_08918ED0;
      }
      goto L_08918478;
    }
L_08918478:
    hot_regs.g5 = (17008u << 16u);
    ctx.gpr[17] = (0u | 0u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g5);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    hot_regs.g31 = (0x0891849Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 629u, 0x0891283Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891849Cu) goto L_0891849C;
    return;
L_0891849C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089184CC;
      }
      goto L_089184A4;
    }
L_089184A4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g5 = (16320u << 16u);
    g4 = (g4 & g5);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g4 = (g4 >> 22u);
    g4 = (g5 + g4);
    g4 = (g4 + static_cast<std::uint32_t>(16));
    g4 = (g4 & 4u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08918A7C;
      }
      goto L_089184CC;
    }
}
L_089184CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[30] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08918A7C;
      }
      goto L_089184E0;
    }
}
L_089184E0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = g4 != hot_regs.g5;
    g4 = (ctx.gpr[30] << 2u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08918524;
      }
      goto L_089184F0;
    }
}
L_089184F0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[16] + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1784)));
    hot_regs.g5 = (0u | 2u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = g4 != hot_regs.g5;
    g4 = (ctx.gpr[30] << 2u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08918524;
      }
      goto L_08918508;
    }
}
L_08918508:
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g31 = (0x08918514u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1784)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918514u) goto L_08918514;
    return;
L_08918514:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08918524;
      }
      goto L_0891851C;
    }
L_0891851C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918A68;
      }
      goto L_08918524;
    }
L_08918524:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[30] << 2u);
    g4 = (ctx.gpr[16] + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1784)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2080)));
    { const bool branch_taken = g4 != hot_regs.g5;
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891854C;
      }
      goto L_0891853C;
    }
}
L_0891853C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2080)));
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[30] << 2u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08918550;
      }
      goto L_08918548;
    }
}
L_08918548:
    ctx.gpr[17] = (0u | 1u);
    goto L_0891854C;
L_0891854C:
    hot_regs.g4 = (ctx.gpr[30] << 2u);
    goto L_08918550;
L_08918550:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (ctx.gpr[16] + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1784)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24276)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1360)));
    ctx.gpr[23] = (g17 & 255u);
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (ctx.gpr[19] & g17);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[30] << 2u);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089185A0;
      }
      goto L_08918580;
    }
}
L_08918580:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(0u);
    g4 = (ctx.gpr[16] + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1784)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (ctx.gpr[30] << 2u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089185AC;
      }
      goto L_089185A0;
    }
}
L_089185A0:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918A68;
      }
      goto L_089185A8;
    }
L_089185A8:
    hot_regs.g4 = (ctx.gpr[30] << 2u);
    goto L_089185AC;
L_089185AC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f17 = ctx.fpr[17];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g16 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1784)));
    g4 = (g4 + static_cast<std::uint32_t>(48));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(f13));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (g16 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(140), hot_regs.g6);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    f12 = ctx.fpr[16] - f14;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(f14));
    f17 = f17 - f15;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(f15));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f17));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(f17));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), g5);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(f15));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[17] = f17;
      if (branch_taken) {
          goto L_089187BC;
      }
      goto L_08918660;
    }
}
}
L_08918660:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1888)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089187BC;
      }
      goto L_08918678;
    }
L_08918678:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1888)));
    hot_regs.g4 = (17204u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089187BC;
      }
      goto L_08918694;
    }
L_08918694:
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1920)));
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
      if (branch_taken) {
          goto L_089186CC;
      }
      goto L_089186A4;
    }
L_089186A4:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) < 0;
    // nop
      if (branch_taken) {
          goto L_08918758;
      }
      goto L_089186AC;
    }
L_089186AC:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) > 0;
    // nop
      if (branch_taken) {
          goto L_089186F4;
      }
      goto L_089186B4;
    }
L_089186B4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
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
          goto L_08918758;
      }
      goto L_089186CC;
    }
}
L_089186CC:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 3 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g5 = (static_cast<std::int32_t>(g5) < 4 ? 1u : 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08918728;
      }
      goto L_089186D8;
    }
}
L_089186D8:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08918758;
      }
      goto L_089186E0;
    }
L_089186E0:
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
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
          goto L_08918758;
      }
      goto L_089186F4;
    }
}
L_089186F4:
    hot_regs.g5 = (49024u << 16u);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918758;
      }
      goto L_08918728;
    }
L_08918728:
    hot_regs.g5 = (49024u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08918758;
L_08918758:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(176)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(180)));
    hot_regs.g31 = (0x08918768u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918768u) goto L_08918768;
    return;
L_08918768:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    hot_regs.g31 = (0x0891877Cu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891877Cu) goto L_0891877C;
    return;
L_0891877C:
    hot_regs.g31 = (0x08918784u);
    hot_regs.f12 = ctx.fpr[24] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918784u) goto L_08918784;
    return;
L_08918784:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1888)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089187B4;
      }
      goto L_0891879C;
    }
L_0891879C:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1888)));
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) ^ 0x80000000u);
    ctx.set_fpu_condition((hot_regs.f12 < f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089187BC;
      }
      goto L_089187B4;
    }
}
L_089187B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918A68;
      }
      goto L_089187BC;
    }
L_089187BC:
    hot_regs.g4 = (ctx.gpr[30] << 2u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1784)));
    hot_regs.g4 = (hot_regs.g5 & 128u);
    hot_regs.g6 = (0u < hot_regs.g4 ? 1u : 0u);
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089187E4u);
    hot_regs.g5 = (hot_regs.g7 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 571u, 0x089068C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089187E4u) goto L_089187E4;
    return;
L_089187E4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089188F4;
      }
      goto L_089187EC;
    }
L_089187EC:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918808;
      }
      goto L_089187F4;
    }
L_089187F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[30] << 2u);
    g4 = (ctx.gpr[16] + g4);
    ctx.gpr[18] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1784)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (1024u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08918A7C;
      }
      goto L_08918808;
    }
}
L_08918808:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[30] << 2u);
    g4 = (ctx.gpr[16] + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1784)));
    hot_regs.g5 = (0u | 16u);
    g4 = (g4 + static_cast<std::uint32_t>(2228));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    if (g4 != hot_regs.g5) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g4 = g4;
        goto L_0891889C;
    }
    goto L_08918828;
}
L_08918828:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[30] << 2u);
    g4 = (ctx.gpr[16] + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1784)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = g4 != ctx.gpr[16];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08918A68;
      }
      goto L_08918840;
    }
}
L_08918840:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    { const float fs = hot_regs.f22; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    ctx.set_fpu_condition((f12 < f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08918A68;
      }
      goto L_08918868;
    }
}
L_08918868:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f20 = f12 + f13;
    f20 = std::sqrt(f20);
    g4 = (ctx.gpr[30] << 2u);
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f20));
    g4 = (ctx.gpr[16] + g4);
    ctx.gpr[18] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1784)));
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08918A68;
      }
      goto L_0891889C;
    }
}
}
L_0891889C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    { const float fs = hot_regs.f20; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    ctx.set_fpu_condition((f12 < f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08918A68;
      }
      goto L_089188C0;
    }
}
L_089188C0:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08918A68;
      }
      goto L_089188C8;
    }
L_089188C8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f20 = f12 + f13;
    f20 = std::sqrt(f20);
    g4 = (ctx.gpr[30] << 2u);
    g4 = (ctx.gpr[16] + g4);
    ctx.gpr[18] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1784)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08918A68;
      }
      goto L_089188F4;
    }
}
}
L_089188F4:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08918A68;
      }
      goto L_089188FC;
    }
L_089188FC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[30] << 2u);
    g4 = (ctx.gpr[16] + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1784)));
    hot_regs.g5 = (0u | 16u);
    g4 = (g4 + static_cast<std::uint32_t>(2228));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 != hot_regs.g5;
    g4 = (ctx.gpr[30] << 2u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08918A68;
      }
      goto L_0891891C;
    }
}
L_0891891C:
    hot_regs.g5 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(1784)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[8] = (hot_regs.g7 & 128u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[11] = (0u < ctx.gpr[8] ? 1u : 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08918968u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918968u) goto L_08918968;
    return;
L_08918968:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08918A68;
      }
      goto L_08918970;
    }
L_08918970:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[30] << 2u);
    g4 = (ctx.gpr[16] + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1784)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = g4 != ctx.gpr[16];
    g4 = (ctx.gpr[30] << 2u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089189E4;
      }
      goto L_08918988;
    }
}
L_08918988:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    { const float fs = hot_regs.f22; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    ctx.set_fpu_condition((f12 < f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08918A68;
      }
      goto L_089189B0;
    }
}
L_089189B0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f20 = f12 + f13;
    f20 = std::sqrt(f20);
    g4 = (ctx.gpr[30] << 2u);
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f20));
    g4 = (ctx.gpr[16] + g4);
    ctx.gpr[18] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1784)));
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08918A68;
      }
      goto L_089189E4;
    }
}
}
L_089189E4:
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1784)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(1929))))));
    hot_regs.g6 = (hot_regs.g5 << 5u);
    hot_regs.g5 = (hot_regs.g5 << 2u);
    hot_regs.g5 = (hot_regs.g6 - hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g31 = (0x08918A08u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918A08u) goto L_08918A08;
    return;
L_08918A08:
    hot_regs.g4 = (hot_regs.g2 | ctx.gpr[20]);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08918A68;
      }
      goto L_08918A14;
    }
L_08918A14:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    { const float fs = hot_regs.f20; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    ctx.set_fpu_condition((f12 < f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08918A68;
      }
      goto L_08918A3C;
    }
}
L_08918A3C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f20 = f12 + f13;
    f20 = std::sqrt(f20);
    g4 = (ctx.gpr[30] << 2u);
    g4 = (ctx.gpr[16] + g4);
    ctx.gpr[18] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1784)));
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    ctx.gpr[20] = (0u | 1u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f20 = f20;
    goto L_08918A68;
}
}
L_08918A68:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g30 = ctx.gpr[30];
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    g30 = (g30 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g30) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[30] = g30;
      if (branch_taken) {
          goto L_089184E0;
      }
      goto L_08918A7C;
    }
}
L_08918A7C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918A9C;
      }
      goto L_08918A84;
    }
L_08918A84:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2080)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08918A9C;
      }
      goto L_08918A90;
    }
L_08918A90:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2080)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08918AFC;
      }
      goto L_08918A9C;
    }
L_08918A9C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    hot_regs.g5 = (16800u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g5 = (0u | 1u);
    hot_regs.g7 = (0u | 6u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g31 = (0x08918AE0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 287u, 0x08899758u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918AE0u) goto L_08918AE0;
    return;
L_08918AE0:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[20] = (0u | 0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(96))))));
    g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08918B10;
      }
      goto L_08918AF4;
    }
}
L_08918AF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918EC0;
      }
      goto L_08918AFC;
    }
L_08918AFC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08918B08u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 69u, 0x08910440u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918B08u) goto L_08918B08;
    return;
L_08918B08:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08918ED0;
      }
      goto L_08918B10;
    }
L_08918B10:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[20] << 2u);
    g4 = (hot_regs.g29 + g4);
    ctx.gpr[21] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(64)));
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2080)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08918B48;
      }
      goto L_08918B28;
    }
}
L_08918B28:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2080)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08918B48;
      }
      goto L_08918B34;
    }
L_08918B34:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08918B40u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 69u, 0x08910440u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918B40u) goto L_08918B40;
    return;
L_08918B40:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (1024u << 16u);
      if (branch_taken) {
          goto L_08918ED0;
      }
      goto L_08918B48;
    }
L_08918B48:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(565)));
    ctx.gpr[22] = (0u | 0u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08918EAC;
      }
      goto L_08918B60;
    }
}
L_08918B60:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08918CEC;
      }
      goto L_08918B6C;
    }
L_08918B6C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1888)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08918CEC;
      }
      goto L_08918B84;
    }
L_08918B84:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1888)));
    g4 = (17204u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08918CEC;
      }
      goto L_08918BA0;
    }
}
L_08918BA0:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (g16 + static_cast<std::uint32_t>(48));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    f12 = f12 - hot_regs.f13;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2120)));
    f14 = f14 - hot_regs.f15;
    g5 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(1920)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(f14));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08918BFC;
      }
      goto L_08918BD4;
    }
}
}
L_08918BD4:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) < 0;
    // nop
      if (branch_taken) {
          goto L_08918C88;
      }
      goto L_08918BDC;
    }
L_08918BDC:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) > 0;
    // nop
      if (branch_taken) {
          goto L_08918C24;
      }
      goto L_08918BE4;
    }
L_08918BE4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(256));
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
          goto L_08918C88;
      }
      goto L_08918BFC;
    }
}
L_08918BFC:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 3 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g5 = (static_cast<std::int32_t>(g5) < 4 ? 1u : 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08918C58;
      }
      goto L_08918C08;
    }
}
L_08918C08:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08918C88;
      }
      goto L_08918C10;
    }
L_08918C10:
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(256));
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
          goto L_08918C88;
      }
      goto L_08918C24;
    }
}
L_08918C24:
    hot_regs.g5 = (49024u << 16u);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(272));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918C88;
      }
      goto L_08918C58;
    }
L_08918C58:
    hot_regs.g5 = (49024u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
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
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    goto L_08918C88;
L_08918C88:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(256)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(260)));
    hot_regs.g31 = (0x08918C98u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918C98u) goto L_08918C98;
    return;
L_08918C98:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(248)));
    hot_regs.g31 = (0x08918CACu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918CACu) goto L_08918CAC;
    return;
L_08918CAC:
    hot_regs.g31 = (0x08918CB4u);
    hot_regs.f12 = hot_regs.f22 - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918CB4u) goto L_08918CB4;
    return;
L_08918CB4:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1888)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08918CE4;
      }
      goto L_08918CCC;
    }
L_08918CCC:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1888)));
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) ^ 0x80000000u);
    ctx.set_fpu_condition((hot_regs.f12 < f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08918CEC;
      }
      goto L_08918CE4;
    }
}
L_08918CE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918E94;
      }
      goto L_08918CEC;
    }
L_08918CEC:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08918CFC;
      }
      goto L_08918CF4;
    }
L_08918CF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(900)));
      if (branch_taken) {
          goto L_08918D0C;
      }
      goto L_08918CFC;
    }
L_08918CFC:
    hot_regs.g5 = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    hot_regs.g31 = (0x08918D08u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918D08u) goto L_08918D08;
    return;
L_08918D08:
    ctx.gpr[23] = (hot_regs.g2 | 0u);
    goto L_08918D0C;
L_08918D0C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918E94;
      }
      goto L_08918D14;
    }
L_08918D14:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08918E94;
      }
      goto L_08918D1C;
    }
L_08918D1C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2080)));
    { const bool branch_taken = ctx.gpr[23] != hot_regs.g4;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08918D38;
      }
      goto L_08918D28;
    }
L_08918D28:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2080)));
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1360)));
    hot_regs.g4 = g4;
        goto L_08918D3C;
    }
    goto L_08918D34;
}
L_08918D34:
    ctx.gpr[17] = (0u | 1u);
    goto L_08918D38;
L_08918D38:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1360)));
    goto L_08918D3C;
L_08918D3C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24276)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (g17 & 255u);
    g17 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (ctx.gpr[19] & g17);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08918D78;
      }
      goto L_08918D60;
    }
}
L_08918D60:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1252)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08918D84;
      }
      goto L_08918D78;
    }
L_08918D78:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918E94;
      }
      goto L_08918D80;
    }
L_08918D80:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08918D84;
L_08918D84:
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08918D90u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 571u, 0x089068C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918D90u) goto L_08918D90;
    return;
L_08918D90:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08918E94;
      }
      goto L_08918D98;
    }
L_08918D98:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f17 = ctx.fpr[17];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(320), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(324), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(f13));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(320)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(324)));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(296), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(300), hot_regs.g6);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(296)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(300)));
    f12 = ctx.fpr[16] - f14;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(f14));
    f17 = f17 - f15;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(f15));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f17));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(312), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(316), g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(312)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(316)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(f17));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(288), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(292), g5);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(288)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(292)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f14));
    { const bool branch_taken = ctx.gpr[30] != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(f15));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[17] = f17;
      if (branch_taken) {
          goto L_08918E68;
      }
      goto L_08918E38;
    }
}
}
L_08918E38:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    { const float fs = hot_regs.f20; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    ctx.set_fpu_condition((f12 < f14));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
        goto L_08918E7C;
    }
    goto L_08918E60;
}
}
L_08918E60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918E94;
      }
      goto L_08918E68;
    }
L_08918E68:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08918E74u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 69u, 0x08910440u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918E74u) goto L_08918E74;
    return;
L_08918E74:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (1024u << 16u);
      if (branch_taken) {
          goto L_08918ED0;
      }
      goto L_08918E7C;
    }
L_08918E7C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f20 = hot_regs.f20;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f20 = f12 + f13;
    f20 = std::sqrt(f20);
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f20 = f20;
    goto L_08918E94;
}
L_08918E94:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g22 = ctx.gpr[22];
    g4 = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(565)));
    g22 = (g22 + static_cast<std::uint32_t>(1));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g22) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[22] = g22;
      if (branch_taken) {
          goto L_08918B60;
      }
      goto L_08918EAC;
    }
}
L_08918EAC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(96))))));
    g20 = (g20 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g20) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_08918B10;
      }
      goto L_08918EC0;
    }
}
L_08918EC0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08918ECCu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 69u, 0x08910440u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918ECCu) goto L_08918ECC;
    return;
L_08918ECC:
    hot_regs.g2 = (ctx.gpr[17] | 0u);
    goto L_08918ED0;
L_08918ED0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(492)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(496)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(500)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(504)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(508)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(512)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(516)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(520)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(524)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(528)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(532)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(536)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(540)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08918F0C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(172), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(188), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(204), hot_regs.g31);
    hot_regs.g31 = (0x08918F48u);
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918F48u) goto L_08918F48;
    return;
L_08918F48:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08918FAC;
      }
      goto L_08918F50;
    }
L_08918F50:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08918FAC;
      }
      goto L_08918F5C;
    }
L_08918F5C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2276)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08918FAC;
      }
      goto L_08918F6C;
    }
L_08918F6C:
    hot_regs.g31 = (0x08918F74u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 324u, 0x0890D498u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918F74u) goto L_08918F74;
    return;
L_08918F74:
    hot_regs.g31 = (0x08918F7Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 344u, 0x0890D654u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918F7Cu) goto L_08918F7C;
    return;
L_08918F7C:
    hot_regs.g31 = (0x08918F84u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 287u, 0x089292D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918F84u) goto L_08918F84;
    return;
L_08918F84:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08918FA4;
      }
      goto L_08918F8C;
    }
L_08918F8C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1360)));
    hot_regs.g5 = (0u | 18u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08918FB4;
      }
      goto L_08918F9C;
    }
L_08918F9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089192A8;
      }
      goto L_08918FA4;
    }
L_08918FA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919448;
      }
      goto L_08918FAC;
    }
L_08918FAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919448;
      }
      goto L_08918FB4;
    }
L_08918FB4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1752)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089192A8;
      }
      goto L_08918FC8;
    }
}
L_08918FC8:
    hot_regs.g31 = (0x08918FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08918FD0u) goto L_08918FD0;
    return;
L_08918FD0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    hot_regs.g5 = (0u | 100u);
    { const std::int32_t dividend = static_cast<std::int32_t>(g4); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g4 = (ctx.hi);
    g4 = (static_cast<std::int32_t>(g4) < 10 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08919148;
      }
      goto L_08918FEC;
    }
}
L_08918FEC:
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    hot_regs.g5 = (16672u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (0u | 1u);
    hot_regs.g7 = (0u | 6u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g31 = (0x08919038u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 287u, 0x08899758u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919038u) goto L_08919038;
    return;
L_08919038:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[16] = (0u | 0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(48))))));
    g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (15820u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089190F0;
      }
      goto L_0891904C;
    }
}
L_0891904C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 52429u);
    ctx.gpr[20] = (hot_regs.g29 | 0u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    ctx.gpr[22] = (0u | 2u);
    hot_regs.g4 = g4;
    goto L_0891905C;
}
L_0891905C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(612)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089190A4;
      }
      goto L_0891906C;
    }
L_0891906C:
    hot_regs.g4 = (ctx.gpr[21] + static_cast<std::uint32_t>(320));
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
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089190A4;
      }
      goto L_08919094;
    }
L_08919094:
    hot_regs.g31 = (0x0891909Cu);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 439u, 0x08B01AA8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891909Cu) goto L_0891909C;
    return;
L_0891909C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089190AC;
      }
      goto L_089190A4;
    }
L_089190A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089190DC;
      }
      goto L_089190AC;
    }
L_089190AC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089190DC;
      }
      goto L_089190B8;
    }
L_089190B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(352)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(144)));
    g4 = (ctx.gpr[18] < g4 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089190DC;
      }
      goto L_089190CC;
    }
}
L_089190CC:
{
    std::uint32_t g17 = ctx.gpr[17];
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(352)));
    g17 = (ctx.gpr[16] << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(144)));
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 16u));
    ctx.gpr[17] = g17;
    goto L_089190DC;
}
L_089190DC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(48))))));
    g16 = (g16 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_0891905C;
      }
      goto L_089190F0;
    }
}
L_089190F0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[18] < static_cast<std::uint32_t>(2001) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08919138;
      }
      goto L_089190FC;
    }
}
L_089190FC:
    { const bool branch_taken = ctx.gpr[17] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08919138;
      }
      goto L_08919104;
    }
L_08919104:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (g17 << 2u);
    g4 = (hot_regs.g29 + g4);
    g17 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = g17 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08919138;
      }
      goto L_08919118;
    }
}
L_08919118:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (0u | 18u);
    hot_regs.g31 = (0x08919128u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919128u) goto L_08919128;
    return;
L_08919128:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(5000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1752), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08919448;
      }
      goto L_08919138;
    }
}
L_08919138:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(5000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1752), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089192A8;
      }
      goto L_08919148;
    }
}
L_08919148:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2196)));
    hot_regs.g5 = (0u | 37u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089192A8;
      }
      goto L_08919158;
    }
L_08919158:
    hot_regs.g31 = (0x08919160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919160u) goto L_08919160;
    return;
L_08919160:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    g4 = (g4 & 7u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089192A8;
      }
      goto L_08919170;
    }
}
L_08919170:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(156), g4);
    g4 = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[17] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (16964u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08919280;
      }
      goto L_0891918C;
    }
}
L_0891918C:
    ctx.gpr[30] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    ctx.gpr[23] = (0u | 4u);
    ctx.gpr[22] = (0u | 5u);
    ctx.gpr[21] = (0u | 19u);
    ctx.gpr[20] = (0u | 20u);
    goto L_089191A8;
L_089191A8:
    ctx.gpr[16] = (ctx.gpr[17] << 2u);
    ctx.gpr[16] = (ctx.gpr[19] + ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089191F0;
      }
      goto L_089191E8;
    }
L_089191E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919280;
      }
      goto L_089191F0;
    }
L_089191F0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1360)));
    g4 = (g4 & 65535u);
    if (g4 == ctx.gpr[23]) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    hot_regs.g4 = g4;
        goto L_08919228;
    }
    goto L_08919204;
}
L_08919204:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[22];
    hot_regs.g5 = (0u | 18u);
      if (branch_taken) {
          goto L_08919224;
      }
      goto L_0891920C;
    }
L_0891920C:
    if (hot_regs.g4 == hot_regs.g5) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
        goto L_08919228;
    }
    goto L_08919214;
L_08919214:
    if (hot_regs.g4 == ctx.gpr[21]) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
        goto L_08919228;
    }
    goto L_0891921C;
L_0891921C:
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08919268;
      }
      goto L_08919224;
    }
L_08919224:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    goto L_08919228;
L_08919228:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (0u | 2u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08919268;
      }
      goto L_08919238;
    }
}
L_08919238:
    hot_regs.g31 = (0x08919240u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 627u, 0x08906E38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919240u) goto L_08919240;
    return;
L_08919240:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08919268;
      }
      goto L_08919248;
    }
L_08919248:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    hot_regs.g5 = (0u | 37u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08919268;
      }
      goto L_0891925C;
    }
}
L_0891925C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(156), hot_regs.g4);
      if (branch_taken) {
          goto L_08919280;
      }
      goto L_08919268;
    }
L_08919268:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1914)));
    g17 = (g17 & 65535u);
    g4 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089191A8;
      }
      goto L_08919280;
    }
}
L_08919280:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0891929C;
      }
      goto L_0891928C;
    }
L_0891928C:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0891929Cu);
    hot_regs.g5 = (0u | 37u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891929Cu) goto L_0891929C;
    return;
L_0891929C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1752), g4);
    hot_regs.g4 = g4;
    goto L_089192A8;
}
L_089192A8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[17] = (0u | 5u);
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08919448;
      }
      goto L_089192B8;
    }
L_089192B8:
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f20 = std::bit_cast<float>(0u);
    hot_regs.g31 = (0x089192C8u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089192C8u) goto L_089192C8;
    return;
L_089192C8:
{
    float f12 = hot_regs.f12;
    f12 = hot_regs.f22 - hot_regs.f20;
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f20 + f12;
    ctx.set_fpu_condition((f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0891943C;
      }
      goto L_089192EC;
    }
}
L_089192EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1740)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08919448;
      }
      goto L_08919300;
    }
}
L_08919300:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[18] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (16358u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08919434;
      }
      goto L_08919314;
    }
}
L_08919314:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 26214u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    ctx.gpr[16] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    g4 = (16262u << 16u);
    g4 = (g4 | 2706u);
    ctx.gpr[22] = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    hot_regs.f22 = std::bit_cast<float>(g4);
    ctx.gpr[23] = (0u | 4000u);
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    hot_regs.g4 = g4;
    goto L_08919338;
}
L_08919338:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1784)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919420;
      }
      goto L_08919344;
    }
L_08919344:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08919420;
      }
      goto L_08919350;
    }
L_08919350:
    hot_regs.g4 = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08919420;
      }
      goto L_08919388;
    }
L_08919388:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08919398u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 627u, 0x089AB048u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919398u) goto L_08919398;
    return;
L_08919398:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08919420;
      }
      goto L_089193A0;
    }
L_089193A0:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x089193ACu);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 627u, 0x089AB048u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089193ACu) goto L_089193AC;
    return;
L_089193AC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08919420;
      }
      goto L_089193B4;
    }
L_089193B4:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089193C0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 72u, 0x0890C4D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089193C0u) goto L_089193C0;
    return;
L_089193C0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08919420;
      }
      goto L_089193C8;
    }
L_089193C8:
    hot_regs.g31 = (0x089193D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089193D0u) goto L_089193D0;
    return;
L_089193D0:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[30] = (ctx.hi);
    hot_regs.g31 = (0x089193E8u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(10000));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 194u, 0x08910B2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089193E8u) goto L_089193E8;
    return;
L_089193E8:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08919420;
      }
      goto L_089193F0;
    }
L_089193F0:
    hot_regs.g31 = (0x089193F8u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1360)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 194u, 0x08910B2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089193F8u) goto L_089193F8;
    return;
L_089193F8:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08919420;
      }
      goto L_08919400;
    }
L_08919400:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08919410u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 65u, 0x0890C42Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919410u) goto L_08919410;
    return;
L_08919410:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08919420u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 65u, 0x0890C42Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919420u) goto L_08919420;
    return;
L_08919420:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1914)));
    g18 = (g18 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08919338;
      }
      goto L_08919434;
    }
}
L_08919434:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919448;
      }
      goto L_0891943C;
    }
L_0891943C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(200));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1740), g4);
    hot_regs.g4 = g4;
    goto L_08919448;
}
L_08919448:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(196)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(204)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08919480:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), hot_regs.g31);
    hot_regs.g31 = (0x089194ACu);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089194ACu) goto L_089194AC;
    return;
L_089194AC:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (2236u << 16u);
    hot_regs.g4 = (16128u << 16u);
    g17 = (g17 + static_cast<std::uint32_t>(32304));
    ctx.fpr[26] = std::bit_cast<float>(hot_regs.g4);
    { const bool branch_taken = hot_regs.g2 == 0u;
    ctx.gpr[18] = (g17 + static_cast<std::uint32_t>(112));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08919708;
      }
      goto L_089194C4;
    }
}
L_089194C4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(216));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089194DCu);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089194DCu) goto L_089194DC;
    return;
L_089194DC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(36)));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x089194F8u);
    hot_regs.g4 = (hot_regs.g2 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089194F8u) goto L_089194F8;
    return;
L_089194F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 5u);
    if (hot_regs.g2 == g4) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = g4;
        goto L_08919538;
    }
    goto L_08919504;
}
L_08919504:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(216));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x0891951Cu);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891951Cu) goto L_0891951C;
    return;
L_0891951C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(8)));
    g4 = (g4 & 1024u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08919708;
      }
      goto L_08919534;
    }
}
L_08919534:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    goto L_08919538;
L_08919538:
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(216));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x0891954Cu);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891954Cu) goto L_0891954C;
    return;
L_0891954C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(36)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08919564u);
    hot_regs.g4 = (hot_regs.g2 + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919564u) goto L_08919564;
    return;
L_08919564:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    hot_regs.g5 = (hot_regs.g2 << 6u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (g4 + hot_regs.g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(44))))));
    g4 = (g4 & 4u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    g4 = (16457u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08919708;
      }
      goto L_0891958C;
    }
}
L_0891958C:
    hot_regs.g4 = (hot_regs.g4 | 4059u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2264)));
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17204u << 16u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[24] = hot_regs.f12 / hot_regs.f13;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2260)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(216));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089195CCu);
    { const float fs = ctx.fpr[24]; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089195CCu) goto L_089195CC;
    return;
L_089195CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(8)));
    g4 = (g4 & 1024u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089195F4;
      }
      goto L_089195E4;
    }
}
L_089195E4:
{
    float f24 = ctx.fpr[24];
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15948u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    { const float fs = f24; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f24 = std::bit_cast<float>(0x7FC00000u); else f24 = fs * ft; }
    hot_regs.g4 = g4;
    ctx.fpr[24] = f24;
    goto L_089195F4;
}
}
L_089195F4:
    hot_regs.g31 = (0x089195FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089195FCu) goto L_089195FC;
    return;
L_089195FC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g31 = (0x08919608u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919608u) goto L_08919608;
    return;
L_08919608:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f13 = hot_regs.f12 + hot_regs.f22;
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08919638;
      }
      goto L_08919624;
    }
L_08919624:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16585u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f20 = hot_regs.f20 - hot_regs.f13;
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891965C;
      }
      goto L_08919638;
    }
}
L_08919638:
    hot_regs.f13 = hot_regs.f12 - hot_regs.f22;
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891965C;
      }
      goto L_0891964C;
    }
L_0891964C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16585u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    hot_regs.f20 = hot_regs.f20 + hot_regs.f13;
    hot_regs.g4 = g4;
    goto L_0891965C;
}
L_0891965C:
    hot_regs.f13 = hot_regs.f20 - hot_regs.f12;
    ctx.set_fpu_condition((hot_regs.f13 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08919678;
      }
      goto L_08919670;
    }
L_08919670:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = hot_regs.f12 + ctx.fpr[24];
      if (branch_taken) {
          goto L_0891969C;
      }
      goto L_08919678;
    }
L_08919678:
{
    float f24 = ctx.fpr[24];
    f24 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f24) ^ 0x80000000u);
    ctx.set_fpu_condition((hot_regs.f13 < f24));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_08919694;
      }
      goto L_0891968C;
    }
}
L_0891968C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = hot_regs.f12 + ctx.fpr[24];
      if (branch_taken) {
          goto L_0891969C;
      }
      goto L_08919694;
    }
L_08919694:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = hot_regs.f12 + ctx.fpr[24];
    goto L_0891969C;
L_0891969C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(216));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089196B8u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089196B8u) goto L_089196B8;
    return;
L_089196B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(8)));
    g4 = (g4 & 1024u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08919708;
      }
      goto L_089196D0;
    }
}
L_089196D0:
    hot_regs.g31 = (0x089196D8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 839u, 0x08907AECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089196D8u) goto L_089196D8;
    return;
L_089196D8:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089196E8u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 227u, 0x08AD120Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089196E8u) goto L_089196E8;
    return;
L_089196E8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08919708;
      }
      goto L_089196F4;
    }
L_089196F4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2256)));
    f12 = f12 - ctx.fpr[24];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2256)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08919708;
}
}
L_08919708:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    g4 = (g4 & 256u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08919740;
      }
      goto L_08919720;
    }
}
L_08919720:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(792)));
    hot_regs.g4 = (16384u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(796)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = hot_regs.f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(792), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(796), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08919740;
}
}
L_08919740:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 17u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08919778;
      }
      goto L_08919750;
    }
L_08919750:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(216));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08919768u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919768u) goto L_08919768;
    return;
L_08919768:
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(792));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08919778u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 517u, 0x0881EF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919778u) goto L_08919778;
    return;
L_08919778:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2256)));
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
    f13 = std::bit_cast<float>(g4);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(792)));
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
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
    f15 = std::bit_cast<float>(g4);
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(796)));
    { const float fs = f15; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f13 - f12;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1940), std::bit_cast<std::uint32_t>(f12));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2256)));
    g4 = (std::bit_cast<std::uint32_t>(f17));
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
    f13 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g4 = (std::bit_cast<std::uint32_t>(f17));
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
    f15 = std::bit_cast<float>(g4);
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f13 = f13 + f14;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(468)));
    hot_regs.g5 = (16384u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
      if (branch_taken) {
          goto L_08919968;
      }
      goto L_0891982C;
    }
}
}
L_0891982C:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g4 = (g16 + static_cast<std::uint32_t>(48));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2220)));
    g7 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(472)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-33));
    ctx.set_fpu_condition((hot_regs.f15 <= hot_regs.f14));
    hot_regs.g6 = (0u | 0u);
    { const bool branch_taken = !ctx.fpu_condition();
    g7 = (g7 & hot_regs.g5);
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08919890;
      }
      goto L_08919850;
    }
}
L_08919850:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2212)));
    ctx.set_fpu_condition((hot_regs.f15 < ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.g6 = (0u | 1u);
        goto L_08919894;
    }
    goto L_08919864;
L_08919864:
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2224)));
    ctx.set_fpu_condition((hot_regs.f15 <= ctx.fpr[16]));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.g6 = (0u | 1u);
        goto L_08919894;
    }
    goto L_0891987C;
L_0891987C:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2216)));
    ctx.set_fpu_condition((hot_regs.f15 < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08919894;
      }
      goto L_08919890;
    }
L_08919890:
    hot_regs.g6 = (0u | 1u);
    goto L_08919894;
L_08919894:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 & 255u);
    { const bool branch_taken = g6 != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), hot_regs.g7);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08919968;
      }
      goto L_089198A0;
    }
}
L_089198A0:
{
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
{
    std::uint32_t g29 = hot_regs.g29;
    f16 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    f15 = std::bit_cast<float>(0u);
    f17 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    f16 = f16 + hot_regs.f12;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f15));
    f17 = f17 + hot_regs.f13;
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    hot_regs.g6 = (0u | 0u);
    hot_regs.g5 = (hot_regs.g7 & hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f16));
    ctx.set_fpu_condition((f16 < hot_regs.f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f17));
    { const bool branch_taken = ctx.fpu_condition();
    f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2224)));
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
      if (branch_taken) {
          goto L_089198EC;
      }
      goto L_089198D8;
    }
}
}
L_089198D8:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (0u | 1u);
    f12 = hot_regs.f14 - f12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1940), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08919910;
      }
      goto L_089198EC;
    }
}
L_089198EC:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2212)));
    ctx.set_fpu_condition((ctx.fpr[16] <= hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08919910;
      }
      goto L_08919900;
    }
L_08919900:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (0u | 1u);
    f12 = hot_regs.f14 - f12;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1940), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08919910;
}
L_08919910:
    ctx.set_fpu_condition((ctx.fpr[17] < hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08919934;
      }
      goto L_08919920;
    }
L_08919920:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (0u | 1u);
    f13 = hot_regs.f15 - f13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08919958;
      }
      goto L_08919934;
    }
}
L_08919934:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2216)));
    ctx.set_fpu_condition((ctx.fpr[17] <= hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08919958;
      }
      goto L_08919948;
    }
L_08919948:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (0u | 1u);
    f13 = hot_regs.f14 - f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
    goto L_08919958;
}
L_08919958:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g6 & 1u);
    g4 = (g4 << 5u);
    g4 = (hot_regs.g5 | g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), g4);
    hot_regs.g4 = g4;
    goto L_08919968;
}
L_08919968:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.set_fpu_condition((hot_regs.f14 < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (16256u << 16u);
      if (branch_taken) {
          goto L_089199B0;
      }
      goto L_0891997C;
    }
L_0891997C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    { const float fs = f12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1940), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g17 = (g5 + g4);
    { const bool branch_taken = 0u == 0u;
    g17 = (g17 + ctx.gpr[18]);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089199E8;
      }
      goto L_089199B0;
    }
}
}
L_089199B0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    hot_regs.f15 = std::bit_cast<float>(g4);
    f14 = hot_regs.f15 / f14;
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1940), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g17 = (g5 + g4);
    g17 = (g17 + ctx.gpr[18]);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_089199E8;
}
}
L_089199E8:
    hot_regs.g31 = (0x089199F0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 119u, 0x089990E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089199F0u) goto L_089199F0;
    return;
L_089199F0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08919A08;
      }
      goto L_089199F8;
    }
L_089199F8:
    hot_regs.g31 = (0x08919A00u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 124u, 0x08999134u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919A00u) goto L_08919A00;
    return;
L_08919A00:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08919CB0;
      }
      goto L_08919A08;
    }
L_08919A08:
    hot_regs.g31 = (0x08919A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919A10u) goto L_08919A10;
    return;
L_08919A10:
    { const bool branch_taken = ctx.gpr[16] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08919CB0;
      }
      goto L_08919A18;
    }
L_08919A18:
    hot_regs.g31 = (0x08919A20u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 668u, 0x08906FA8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919A20u) goto L_08919A20;
    return;
L_08919A20:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08919CB0;
      }
      goto L_08919A28;
    }
L_08919A28:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    hot_regs.g31 = (0x08919A34u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 544u, 0x0890675Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919A34u) goto L_08919A34;
    return;
L_08919A34:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1940)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1944)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f13; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f22 = hot_regs.f12 + hot_regs.f13;
    hot_regs.f22 = std::sqrt(hot_regs.f22);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    hot_regs.g31 = (0x08919A5Cu);
    hot_regs.f12 = hot_regs.f20 - hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919A5Cu) goto L_08919A5C;
    return;
L_08919A5C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (49097u << 16u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    g4 = (g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    g4 = (48991u << 16u);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    g4 = (g4 | 26355u);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08919A94;
      }
      goto L_08919A80;
    }
}
L_08919A80:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16457u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08919AC0;
      }
      goto L_08919A94;
    }
}
L_08919A94:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16329u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08919AC0;
      }
      goto L_08919AB0;
    }
}
L_08919AB0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16457u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    hot_regs.g4 = g4;
    goto L_08919AC0;
}
L_08919AC0:
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (16223u << 16u);
      if (branch_taken) {
          goto L_08919B34;
      }
      goto L_08919AD0;
    }
L_08919AD0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 26355u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08919B34;
      }
      goto L_08919AE8;
    }
}
L_08919AE8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
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
    f12 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1940), std::bit_cast<std::uint32_t>(f12));
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
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
    f12 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08919B34;
}
}
L_08919B34:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08919B44u);
    hot_regs.g6 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919B44u) goto L_08919B44;
    return;
L_08919B44:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08919B80;
      }
      goto L_08919B50;
    }
L_08919B50:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08919B60u);
    hot_regs.g6 = (0u | 217u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919B60u) goto L_08919B60;
    return;
L_08919B60:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08919B80;
      }
      goto L_08919B6C;
    }
L_08919B6C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08919B7Cu);
    hot_regs.g6 = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919B7Cu) goto L_08919B7C;
    return;
L_08919B7C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    goto L_08919B80;
L_08919B80:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08919B9C;
      }
      goto L_08919B88;
    }
L_08919B88:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08919CB0;
      }
      goto L_08919B9C;
    }
L_08919B9C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    hot_regs.g31 = (0x08919BA8u);
    hot_regs.f12 = hot_regs.f20 - hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919BA8u) goto L_08919BA8;
    return;
L_08919BA8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16351u << 16u);
    g4 = (g4 | 26355u);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f12 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08919BE0;
      }
      goto L_08919BC8;
    }
}
L_08919BC8:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16457u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    f20 = f20 - hot_regs.f12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f20));
    hot_regs.g4 = g4;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08919C0C;
      }
      goto L_08919BE0;
    }
}
}
L_08919BE0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (49119u << 16u);
    g4 = (g4 | 26355u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (16457u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08919C0C;
      }
      goto L_08919BFC;
    }
}
L_08919BFC:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 4059u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    f20 = f20 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f20));
    hot_regs.g4 = g4;
    hot_regs.f20 = f20;
    goto L_08919C0C;
}
}
L_08919C0C:
    ctx.set_fpu_condition((hot_regs.f20 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (16223u << 16u);
      if (branch_taken) {
          goto L_08919CB0;
      }
      goto L_08919C1C;
    }
L_08919C1C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 26355u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (17204u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08919CB0;
      }
      goto L_08919C34;
    }
}
L_08919C34:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16457u << 16u);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (hot_regs.g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f22 = hot_regs.f12 / hot_regs.f13;
    hot_regs.g4 = (49024u << 16u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(728)));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(40));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(16)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08919C88u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919C88u) goto L_08919C88;
    return;
L_08919C88:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(732)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08919CA4u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919CA4u) goto L_08919CA4;
    return;
L_08919CA4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    g4 = (g4 | 8192u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), g4);
    hot_regs.g4 = g4;
    goto L_08919CB0;
}
L_08919CB0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08919CD8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-272));
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(456)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), ctx.gpr[16]);
    ctx.gpr[16] = (g4 | 0u);
    g4 = (hot_regs.g5 & 1u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(248), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(252), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(256), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), hot_regs.g31);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08919D24;
      }
      goto L_08919D0C;
    }
}
L_08919D0C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    g4 = (g4 & 256u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08919DC8;
      }
      goto L_08919D24;
    }
}
L_08919D24:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08919DC0;
      }
      goto L_08919D30;
    }
L_08919D30:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(216));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08919D48u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919D48u) goto L_08919D48;
    return;
L_08919D48:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(8)));
    g4 = (g4 & 1024u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08919DA4;
      }
      goto L_08919D60;
    }
}
L_08919D60:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    hot_regs.g31 = (0x08919D7Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919D7Cu) goto L_08919D7C;
    return;
L_08919D7C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x08919D90u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919D90u) goto L_08919D90;
    return;
L_08919D90:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
      if (branch_taken) {
          goto L_08919DD0;
      }
      goto L_08919D9C;
    }
L_08919D9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A014;
      }
      goto L_08919DA4;
    }
L_08919DA4:
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08919DB8u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919DB8u) goto L_08919DB8;
    return;
L_08919DB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A35C;
      }
      goto L_08919DC0;
    }
L_08919DC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A35C;
      }
      goto L_08919DC8;
    }
L_08919DC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A35C;
      }
      goto L_08919DD0;
    }
L_08919DD0:
    hot_regs.g31 = (0x08919DD8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919DD8u) goto L_08919DD8;
    return;
L_08919DD8:
    { const bool branch_taken = hot_regs.g2 != 0u;
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08919EFC;
      }
      goto L_08919DE0;
    }
L_08919DE0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08919EFC;
      }
      goto L_08919E00;
    }
}
L_08919E00:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    hot_regs.g5 = (0u | 1u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08919EFC;
      }
      goto L_08919E14;
    }
}
L_08919E14:
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = (16261u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 7864u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x08919E48u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919E48u) goto L_08919E48;
    return;
L_08919E48:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(320));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(112));
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
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g31 = (0x08919ED8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919ED8u) goto L_08919ED8;
    return;
L_08919ED8:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08919EF4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919EF4u) goto L_08919EF4;
    return;
L_08919EF4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1940)));
      if (branch_taken) {
          goto L_08919FB0;
      }
      goto L_08919EFC;
    }
L_08919EFC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    hot_regs.g31 = (0x08919F10u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 407u, 0x08905F10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919F10u) goto L_08919F10;
    return;
L_08919F10:
{
    std::uint32_t g4 = hot_regs.g4;
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
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08919FAC;
      }
      goto L_08919F38;
    }
}
L_08919F38:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    hot_regs.g5 = (0u | 2u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08919FAC;
      }
      goto L_08919F4C;
    }
}
L_08919F4C:
    hot_regs.g31 = (0x08919F54u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919F54u) goto L_08919F54;
    return;
L_08919F54:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20084)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20088)));
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08919F70u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919F70u) goto L_08919F70;
    return;
L_08919F70:
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x08919F7Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919F7Cu) goto L_08919F7C;
    return;
L_08919F7C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g31 = (0x08919F88u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919F88u) goto L_08919F88;
    return;
L_08919F88:
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08919F9Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919F9Cu) goto L_08919F9C;
    return;
L_08919F9C:
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x08919FA8u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08919FA8u) goto L_08919FA8;
    return;
L_08919FA8:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08919FAC;
L_08919FAC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1940)));
    goto L_08919FB0;
L_08919FB0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1944)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    f12 = f12 + f13;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(320)));
    f14 = f14 + f15;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(324)));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1300)));
    f12 = f12 - ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    f13 = f14 - ctx.fpr[17];
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(120)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2256)));
    { const float fs = f12; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2260)));
    f12 = f13 + f12;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(120)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f15 + f12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_0891A170;
      }
      goto L_0891A014;
    }
}
}
L_0891A014:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(311)));
    hot_regs.g5 = (0u | 26u);
    if (hot_regs.g4 != hot_regs.g5) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1940)));
        goto L_0891A154;
    }
    goto L_0891A024;
L_0891A024:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(288)));
    f20 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f20)) && f12 == f20));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(288)));
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
        goto L_0891A054;
    }
    goto L_0891A03C;
}
L_0891A03C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f20)) && f12 == hot_regs.f20));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1940)));
    hot_regs.f12 = f12;
        goto L_0891A154;
    }
    goto L_0891A050;
}
L_0891A050:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(288)));
    goto L_0891A054;
L_0891A054:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(f12));
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(f13));
    hot_regs.g4 = (16256u << 16u);
    f13 = f14 + f15;
    ctx.set_fpu_condition((f13 <= hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_0891A088;
      }
      goto L_0891A080;
    }
}
L_0891A080:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_0891A0BC;
      }
      goto L_0891A088;
    }
L_0891A088:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<0u>());
    f14 = std::bit_cast<float>(g4);
    hot_regs.f15 = std::bit_cast<float>(g4);
    { const float fs = hot_regs.f15; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    goto L_0891A0BC;
}
}
L_0891A0BC:
    hot_regs.g5 = (47747u << 16u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (hot_regs.g5 | 4719u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0891A0D8u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891A0D8u) goto L_0891A0D8;
    return;
L_0891A0D8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (15523u << 16u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    g4 = (g4 | 55050u);
    f13 = std::bit_cast<float>(g4);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1940)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1944)));
    { const float fs = f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f15 = f15 + ctx.fpr[16];
    f13 = f13 + ctx.fpr[17];
    { const float fs = f12; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    { const float fs = f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f14;
    ctx.set_fpu_condition((f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_0891A14C;
      }
      goto L_0891A124;
    }
}
}
L_0891A124:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g29 = hot_regs.g29;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    { const float fs = f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f13 = hot_regs.f14 - f13;
    f12 = ctx.fpr[16] - f12;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_0891A14C;
}
}
L_0891A14C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A170;
      }
      goto L_0891A154;
    }
L_0891A154:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(320)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1944)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(324)));
    f12 = f12 - hot_regs.f13;
    f14 = f14 - hot_regs.f15;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    goto L_0891A170;
}
}
L_0891A170:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A28C;
      }
      goto L_0891A17C;
    }
L_0891A17C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(236)));
    g4 = (g4 & 4u);
    if (g4 == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
        goto L_0891A1A8;
    }
    goto L_0891A190;
}
L_0891A190:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(236)));
    g4 = (g4 & 8u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891A28C;
      }
      goto L_0891A1A4;
    }
}
L_0891A1A4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    goto L_0891A1A8;
L_0891A1A8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = f12 + f13;
    f13 = std::sqrt(f13);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 57u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0891A204;
      }
      goto L_0891A1CC;
    }
}
L_0891A1CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    hot_regs.g4 = g4;
        goto L_0891A208;
    }
    goto L_0891A1EC;
}
L_0891A1EC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15107u << 16u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    g4 = (g4 | 4719u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    { const bool branch_taken = 0u == 0u;
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0891A260;
      }
      goto L_0891A204;
    }
}
}
L_0891A204:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    goto L_0891A208;
L_0891A208:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891A24C;
      }
      goto L_0891A224;
    }
}
L_0891A224:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    hot_regs.g5 = (0u | 1u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891A260;
      }
      goto L_0891A238;
    }
}
L_0891A238:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    hot_regs.g5 = (0u | 2u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891A260;
      }
      goto L_0891A24C;
    }
}
L_0891A24C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15395u << 16u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    g4 = (g4 | 55050u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_0891A260;
}
}
L_0891A260:
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891A28C;
      }
      goto L_0891A270;
    }
L_0891A270:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = f12 / hot_regs.f13;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    { const float fs = f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    { const float fs = hot_regs.f15; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    goto L_0891A28C;
}
}
L_0891A28C:
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f14;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x0891A2C0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891A2C0u) goto L_0891A2C0;
    return;
L_0891A2C0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A35C;
      }
      goto L_0891A2CC;
    }
L_0891A2CC:
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x0891A2E0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 984u, 0x0890BE60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891A2E0u) goto L_0891A2E0;
    return;
L_0891A2E0:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A35C;
      }
      goto L_0891A2EC;
    }
L_0891A2EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(900))))));
    g4 = (g4 & 30u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891A338;
      }
      goto L_0891A304;
    }
}
L_0891A304:
    hot_regs.g31 = (0x0891A30Cu);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(864));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 586u, 0x08A9FB14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891A30Cu) goto L_0891A30C;
    return;
L_0891A30C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0891A338;
      }
      goto L_0891A314;
    }
L_0891A314:
{
    float f20 = hot_regs.f20;
    float f22 = hot_regs.f22;
    f22 = f22 - f20;
    f20 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f22 < f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f20 = f20;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_0891A330;
      }
      goto L_0891A32C;
    }
}
L_0891A32C:
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_0891A330;
L_0891A330:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(hot_regs.f22));
      if (branch_taken) {
          goto L_0891A35C;
      }
      goto L_0891A338;
    }
L_0891A338:
{
    float f22 = hot_regs.f22;
    f22 = f22 + hot_regs.f20;
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((f22 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_0891A358;
      }
      goto L_0891A354;
    }
}
L_0891A354:
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_0891A358;
L_0891A358:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(hot_regs.f22));
    goto L_0891A35C;
L_0891A35C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(236)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(248)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(252)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0891A380:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-912));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(872), ctx.gpr[16]);
    hot_regs.g5 = (16384u << 16u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(864), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(868), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(876), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(880), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(884), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(888), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(892), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(896), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(900), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(904), hot_regs.g31);
    hot_regs.g31 = (0x0891A3C0u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891A3C0u) goto L_0891A3C0;
    return;
L_0891A3C0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A414;
      }
      goto L_0891A3C8;
    }
L_0891A3C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(236)));
    g5 = (0u + static_cast<std::uint32_t>(-257));
    g6 = (g4 & 256u);
    g4 = (g4 & g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(472)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(236), g4);
    g4 = (32768u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    g4 = (g5 & g4);
    g6 = (0u < g6 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(472), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0891A400;
      }
      goto L_0891A3F8;
    }
}
L_0891A3F8:
    hot_regs.g31 = (0x0891A400u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 403u, 0x089117B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891A400u) goto L_0891A400;
    return;
L_0891A400:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-129));
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891B7A8;
      }
      goto L_0891A414;
    }
}
L_0891A414:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 58u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0891A434;
      }
      goto L_0891A424;
    }
L_0891A424:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 57u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0891A444;
      }
      goto L_0891A434;
    }
L_0891A434:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16358u << 16u);
    g4 = (g4 | 26214u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f20 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891A488;
      }
      goto L_0891A444;
    }
}
L_0891A444:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    g4 = (g4 ^ 68u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    g4 = (15363u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891A48C;
      }
      goto L_0891A45C;
    }
}
L_0891A45C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2092)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891A480;
      }
      goto L_0891A474;
    }
L_0891A474:
    hot_regs.g4 = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
      if (branch_taken) {
          goto L_0891A488;
      }
      goto L_0891A480;
    }
L_0891A480:
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    goto L_0891A488;
L_0891A488:
    hot_regs.g4 = (15363u << 16u);
    goto L_0891A48C;
L_0891A48C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    hot_regs.g4 = (hot_regs.g4 | 4719u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (2238u << 16u);
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(14064));
    hot_regs.g31 = (0x0891A4B8u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 644u, 0x08A8F64Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891A4B8u) goto L_0891A4B8;
    return;
L_0891A4B8:
    if (hot_regs.g2 == 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
        goto L_0891B71C;
    }
    goto L_0891A4C0;
L_0891A4C0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    hot_regs.g5 = (1024u << 16u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (hot_regs.g5 << 2u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(12)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g5 = (16448u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f22 = hot_regs.f22 - hot_regs.f12;
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g31 = (0x0891A540u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891A540u) goto L_0891A540;
    return;
L_0891A540:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A610;
      }
      goto L_0891A548;
    }
L_0891A548:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g4 = g4;
        goto L_0891A5AC;
    }
    goto L_0891A568;
}
L_0891A568:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    hot_regs.g5 = (0u | 1u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(852)));
    if (g4 == hot_regs.g5) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    hot_regs.g4 = g4;
        goto L_0891A594;
    }
    goto L_0891A57C;
}
L_0891A57C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    hot_regs.g5 = (0u | 2u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(852)));
    if (g4 != hot_regs.g5) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g4 = g4;
        goto L_0891A5AC;
    }
    goto L_0891A590;
}
L_0891A590:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    goto L_0891A594;
L_0891A594:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (32u << 16u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & hot_regs.g5);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    hot_regs.g4 = g4;
        goto L_0891A5E8;
    }
    goto L_0891A5A8;
}
L_0891A5A8:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    goto L_0891A5AC;
L_0891A5AC:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    f13 = f13 + hot_regs.f14;
    ctx.set_fpu_condition((hot_regs.f12 < f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0891A60C;
      }
      goto L_0891A5E0;
    }
}
}
L_0891A5E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A610;
      }
      goto L_0891A5E8;
    }
L_0891A5E8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (0u + static_cast<std::uint32_t>(-257));
    g4 = (g4 & g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(472)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(236), g4);
    g4 = (32768u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    g4 = (g5 & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(472), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0891B7A8;
      }
      goto L_0891A60C;
    }
}
L_0891A60C:
    ctx.gpr[17] = (0u | 1u);
    goto L_0891A610;
L_0891A610:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891A6CC;
      }
      goto L_0891A618;
    }
L_0891A618:
    hot_regs.g4 = (16025u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g31 = (0x0891A688u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891A688u) goto L_0891A688;
    return;
L_0891A688:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A6CC;
      }
      goto L_0891A690;
    }
L_0891A690:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    f13 = f13 + hot_regs.f14;
    ctx.set_fpu_condition((hot_regs.f12 < f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0891A6CC;
      }
      goto L_0891A6C8;
    }
}
}
L_0891A6C8:
    ctx.gpr[17] = (0u | 1u);
    goto L_0891A6CC;
L_0891A6CC:
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17279u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11008)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11056)));
    { const float fs = hot_regs.f15; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f14));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11012)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11060)));
    { const float fs = ctx.fpr[17]; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    hot_regs.f15 = ctx.fpr[16] + ctx.fpr[17];
    { const float fs = hot_regs.f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f15));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11016)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11064)));
    { const float fs = ctx.fpr[19]; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[18] + hot_regs.f12;
    { const float fs = hot_regs.f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x0891A740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891A740u) goto L_0891A740;
    return;
L_0891A740:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20068)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20072)));
    hot_regs.g7 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x0891A75Cu);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891A75Cu) goto L_0891A75C;
    return;
L_0891A75C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    hot_regs.g6 = (hot_regs.g4 + ctx.gpr[22]);
    hot_regs.g7 = (hot_regs.g6 < ctx.gpr[22] ? 1u : 0u);
    hot_regs.g4 = (hot_regs.g7 + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g4 + ctx.gpr[23]);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    hot_regs.g4 = (hot_regs.g4 | 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(150), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(151), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[18] = (hot_regs.g4 & 256u);
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
    hot_regs.g4 = (15948u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(164)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(168)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    hot_regs.g6 = (1024u << 16u);
    hot_regs.g5 = (hot_regs.g5 & hot_regs.g6);
    hot_regs.g5 = (0u < hot_regs.g5 ? 1u : 0u);
    hot_regs.g31 = (0x0891A854u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891A854u) goto L_0891A854;
    return;
L_0891A854:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    g4 = (g4 ^ 68u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = g4;
        goto L_0891A894;
    }
    goto L_0891A86C;
}
L_0891A86C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    hot_regs.f12 = f12;
        goto L_0891A894;
    }
    goto L_0891A884;
}
}
L_0891A884:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0891A890u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891A890u) goto L_0891A890;
    return;
L_0891A890:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    goto L_0891A894;
L_0891A894:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16140u << 16u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(176)));
    g4 = (g4 | 52429u);
    f14 = std::bit_cast<float>(g4);
    f12 = f12 - hot_regs.f13;
    { const float fs = hot_regs.f20; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    ctx.set_fpu_condition((f12 <= f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_0891A8D0;
      }
      goto L_0891A8BC;
    }
}
}
L_0891A8BC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-129));
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891A8F8;
      }
      goto L_0891A8D0;
    }
}
L_0891A8D0:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16128u << 16u);
    f13 = std::bit_cast<float>(g4);
    { const float fs = hot_regs.f20; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f12 < f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (16243u << 16u);
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0891A8FC;
      }
      goto L_0891A8EC;
    }
}
}
L_0891A8EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    g4 = (g4 | 128u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), g4);
    hot_regs.g4 = g4;
    goto L_0891A8F8;
}
L_0891A8F8:
    hot_regs.g4 = (16243u << 16u);
    goto L_0891A8FC;
L_0891A8FC:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 13107u);
    f13 = std::bit_cast<float>(g4);
    { const float fs = hot_regs.f20; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f12 <= f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0891A930;
      }
      goto L_0891A918;
    }
}
}
L_0891A918:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    g5 = (32768u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0891A940;
      }
      goto L_0891A930;
    }
}
L_0891A930:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    hot_regs.g5 = (32768u << 16u);
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), g4);
    hot_regs.g4 = g4;
    goto L_0891A940;
}
L_0891A940:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A9C4;
      }
      goto L_0891A948;
    }
L_0891A948:
    hot_regs.g31 = (0x0891A950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891A950u) goto L_0891A950;
    return;
L_0891A950:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x0891A960u);
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891A960u) goto L_0891A960;
    return;
L_0891A960:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20060)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20064)));
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x0891A974u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891A974u) goto L_0891A974;
    return;
L_0891A974:
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x0891A988u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891A988u) goto L_0891A988;
    return;
L_0891A988:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g2) <= 0;
    // nop
      if (branch_taken) {
          goto L_0891A9B0;
      }
      goto L_0891A990;
    }
L_0891A990:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A9B0;
      }
      goto L_0891A998;
    }
L_0891A998:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-257));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), hot_regs.g4);
    hot_regs.g31 = (0x0891A9B0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 403u, 0x089117B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891A9B0u) goto L_0891A9B0;
    return;
L_0891A9B0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-129));
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891AA20;
      }
      goto L_0891A9C4;
    }
}
L_0891A9C4:
    hot_regs.g31 = (0x0891A9CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891A9CCu) goto L_0891A9CC;
    return;
L_0891A9CC:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x0891A9DCu);
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891A9DCu) goto L_0891A9DC;
    return;
L_0891A9DC:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20052)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20056)));
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x0891A9F0u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891A9F0u) goto L_0891A9F0;
    return;
L_0891A9F0:
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x0891AA04u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891AA04u) goto L_0891AA04;
    return;
L_0891AA04:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g2) >= 0;
    // nop
      if (branch_taken) {
          goto L_0891AA20;
      }
      goto L_0891AA0C;
    }
L_0891AA0C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (hot_regs.g5 | 256u);
    hot_regs.g31 = (0x0891AA20u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 403u, 0x089117B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891AA20u) goto L_0891AA20;
    return;
L_0891AA20:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    g4 = (g4 & 256u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    hot_regs.g4 = g4;
        goto L_0891AA44;
    }
    goto L_0891AA38;
}
L_0891AA38:
    hot_regs.g4 = (0u | 35u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(311), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    goto L_0891AA44;
L_0891AA44:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f18 = ctx.fpr[18];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    f12 = f12 - f13;
    f14 = f14 - f15;
    g4 = (2238u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    g4 = (g4 + static_cast<std::uint32_t>(14064));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(144)));
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(f14));
    f12 = ctx.fpr[16] - ctx.fpr[17];
    f13 = f18 + f13;
    f13 = std::sqrt(f13);
    f15 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(f13) || std::isnan(f15)) && f13 == f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[18] = f18;
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891AA98;
    }
}
}
L_0891AA98:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    f12 = f12 / f13;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(280)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), 0u);
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(280), g4);
    ctx.gpr[17] = (g29 + static_cast<std::uint32_t>(208));
    hot_regs.f14 = std::bit_cast<float>(0u);
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    ctx.set_fpu_condition((f13 < hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_0891AACC;
    }
    goto L_0891AACC;
}
}
L_0891AACC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15897u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891AAF8;
      }
      goto L_0891AAE8;
    }
}
L_0891AAE8:
    hot_regs.g31 = (0x0891AAF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 36u, 0x08B6033Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891AAF0u) goto L_0891AAF0;
    return;
L_0891AAF0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0891AB04;
      }
      goto L_0891AAF8;
    }
L_0891AAF8:
    hot_regs.g31 = (0x0891AB00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 26u, 0x089644F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891AB00u) goto L_0891AB00;
    return;
L_0891AB00:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0891AB04;
L_0891AB04:
    hot_regs.g31 = (0x0891AB0Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891AB0Cu) goto L_0891AB0C;
    return;
L_0891AB0C:
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = (16256u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    hot_regs.g31 = (0x0891AB34u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 10u, 0x088603A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891AB34u) goto L_0891AB34;
    return;
L_0891AB34:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(280)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891AB44;
    }
}
L_0891AB44:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AB58;
      }
      goto L_0891AB50;
    }
L_0891AB50:
    hot_regs.g31 = (0x0891AB58u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(272)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891AB58u) goto L_0891AB58;
    return;
L_0891AB58:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (0x0891AB6Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891AB6Cu) goto L_0891AB6C;
    return;
L_0891AB6C:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(148)));
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(149)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(188));
    hot_regs.g7 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(150)));
    hot_regs.g31 = (0x0891AB84u);
    ctx.gpr[8] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891AB84u) goto L_0891AB84;
    return;
L_0891AB84:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0891ABA4;
      }
      goto L_0891AB94;
    }
L_0891AB94:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 58u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0891ACDC;
      }
      goto L_0891ABA4;
    }
L_0891ABA4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 >> 6u);
    g4 = (g4 & 15u);
    { const bool branch_taken = g4 == 0u;
    hot_regs.g5 = (0u | 7u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891ABC0;
      }
      goto L_0891ABB8;
    }
}
L_0891ABB8:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0891AC3C;
      }
      goto L_0891ABC0;
    }
L_0891ABC0:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0891ABD4u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 571u, 0x088E3E88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891ABD4u) goto L_0891ABD4;
    return;
L_0891ABD4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1344)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(192)));
    hot_regs.g31 = (0x0891ABE4u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 10u, 0x08818130u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891ABE4u) goto L_0891ABE4;
    return;
L_0891ABE4:
    hot_regs.g4 = (16575u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 2621u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = ctx.fpr[0] + hot_regs.f12;
    hot_regs.g2 = (0u | 600u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(288));
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(188));
    hot_regs.g4 = (0u | 37u);
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x0891AC34u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891AC34u) goto L_0891AC34;
    return;
L_0891AC34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ACD4;
      }
      goto L_0891AC3C;
    }
L_0891AC3C:
    hot_regs.g5 = (0u | 3u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0891ACD4;
      }
      goto L_0891AC48;
    }
L_0891AC48:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 58u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0891ACD4;
      }
      goto L_0891AC58;
    }
L_0891AC58:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0891AC6Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 571u, 0x088E3E88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891AC6Cu) goto L_0891AC6C;
    return;
L_0891AC6C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1344)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(192)));
    hot_regs.g31 = (0x0891AC7Cu);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 10u, 0x08818130u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891AC7Cu) goto L_0891AC7C;
    return;
L_0891AC7C:
    hot_regs.g4 = (16575u << 16u);
    hot_regs.f14 = std::bit_cast<float>(0u);
    hot_regs.g4 = (hot_regs.g4 | 2621u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f13 = ctx.fpr[0] + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (16384u << 16u);
    hot_regs.g2 = (0u | 1200u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(304));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(188));
    hot_regs.g4 = (0u | 37u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x0891ACD4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891ACD4u) goto L_0891ACD4;
    return;
L_0891ACD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B0D8;
      }
      goto L_0891ACDC;
    }
L_0891ACDC:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0891ACF0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 571u, 0x088E3E88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891ACF0u) goto L_0891ACF0;
    return;
L_0891ACF0:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x0891ACFCu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891ACFCu) goto L_0891ACFC;
    return;
L_0891ACFC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1344)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(192)));
    hot_regs.g31 = (0x0891AD0Cu);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 10u, 0x08818130u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891AD0Cu) goto L_0891AD0C;
    return;
L_0891AD0C:
    hot_regs.g4 = (16575u << 16u);
    hot_regs.f13 = std::bit_cast<float>(0u);
    hot_regs.g4 = (hot_regs.g4 | 2621u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = ctx.fpr[0] + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x0891AD34u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(hot_regs.f13));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891AD34u) goto L_0891AD34;
    return;
L_0891AD34:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20044)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20048)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x0891AD48u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891AD48u) goto L_0891AD48;
    return;
L_0891AD48:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20036)));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20040)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    g6 = (hot_regs.g2 >> 31u);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    g6 = (ctx.gpr[1] | g6);
    g8 = (g6 + g4);
    ctx.gpr[9] = (g8 < g4 ? 1u : 0u);
    g6 = (ctx.gpr[9] + hot_regs.g7);
    g4 = (g8 | 0u);
    g4 = (g4 | 0u);
    { const bool branch_taken = g4 == 0u;
    g5 = (g6 + g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_0891ADDC;
      }
      goto L_0891AD7C;
    }
}
L_0891AD7C:
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(320));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (14979u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 4719u);
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x0891ADCCu);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891ADCCu) goto L_0891ADCC;
    return;
L_0891ADCC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (47747u << 16u);
    g4 = (g4 | 4719u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
    goto L_0891ADDC;
}
L_0891ADDC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g4 = (0u | 77u);
    g5 = (g5 & 1u);
    if (g5 != 0u) {
    hot_regs.g4 = (0u | 76u);
    hot_regs.g5 = g5;
        goto L_0891ADF0;
    }
    goto L_0891ADF0;
}
L_0891ADF0:
    hot_regs.g2 = (0u | 700u);
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(320));
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(188));
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x0891AE1Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891AE1Cu) goto L_0891AE1C;
    return;
L_0891AE1C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    hot_regs.g5 = (0u | 5u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0891B0D8;
      }
      goto L_0891AE2C;
    }
L_0891AE2C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(368));
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
    hot_regs.g5 = (16672u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g5);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
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
    hot_regs.g4 = (15523u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (0u | 5u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(384), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (0u | 6u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(385), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (0u | 9u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(386), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (0u | 10u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(387), static_cast<std::uint8_t>(hot_regs.g4));
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B0D8;
      }
      goto L_0891AEBC;
    }
L_0891AEBC:
    hot_regs.g4 = (hot_regs.g29 + ctx.gpr[17]);
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(384)));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    hot_regs.g31 = (0x0891AED0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 571u, 0x088E3E88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891AED0u) goto L_0891AED0;
    return;
L_0891AED0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1344)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(192)));
    hot_regs.g31 = (0x0891AEE0u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 10u, 0x08818130u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891AEE0u) goto L_0891AEE0;
    return;
L_0891AEE0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (16575u << 16u);
    g5 = (15820u << 16u);
    g4 = (g4 | 2621u);
    g5 = (g5 | 52429u);
    f12 = std::bit_cast<float>(g4);
    hot_regs.f13 = std::bit_cast<float>(g5);
    g4 = (0u | 1u);
    f12 = ctx.fpr[0] + f12;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    hot_regs.g6 = (3840u << 16u);
    g4 = (g4 << (ctx.gpr[17] & 31u));
    g5 = (g5 & hot_regs.g6);
    g4 = (g4 & 255u);
    g5 = (g5 >> 24u);
    g5 = (g5 & g4);
    { const bool branch_taken = g5 == 0u;
    f12 = f12 - hot_regs.f13;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0891AFB4;
      }
      goto L_0891AF24;
    }
}
}
L_0891AF24:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(200)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891AFB4;
      }
      goto L_0891AF38;
    }
L_0891AF38:
    hot_regs.g4 = (~(hot_regs.g4 | 0u));
    hot_regs.g6 = (61696u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    hot_regs.g4 = (hot_regs.g4 << 24u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g6);
    ctx.gpr[8] = (15300u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g5 & hot_regs.g4);
    ctx.gpr[8] = (ctx.gpr[8] | 39846u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), hot_regs.g4);
    hot_regs.f20 = std::bit_cast<float>(ctx.gpr[8]);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(388));
    hot_regs.g5 = (0u | 255u);
    hot_regs.g6 = (0u | 255u);
    hot_regs.g7 = (0u | 255u);
    hot_regs.g31 = (0x0891AF80u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891AF80u) goto L_0891AF80;
    return;
L_0891AF80:
    hot_regs.g4 = (0u | 44u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(368));
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (hot_regs.g2 | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x0891AFACu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891AFACu) goto L_0891AFAC;
    return;
L_0891AFAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B0C4;
      }
      goto L_0891AFB4;
    }
L_0891AFB4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    hot_regs.g6 = (3840u << 16u);
    g5 = (g5 & hot_regs.g6);
    g5 = (g5 >> 24u);
    g5 = (g5 & hot_regs.g4);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0891B0C4;
      }
      goto L_0891AFD0;
    }
}
L_0891AFD0:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(200)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891B0C4;
      }
      goto L_0891AFE4;
    }
L_0891AFE4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    hot_regs.g4 = (hot_regs.g4 & 15u);
    hot_regs.g4 = (hot_regs.g4 << 24u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g5 | hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[3] = (16025u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g2 = (0u | 400u);
    ctx.gpr[3] = (ctx.gpr[3] | 39322u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[3]);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(400));
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(188));
    hot_regs.g4 = (0u | 75u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x0891B044u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B044u) goto L_0891B044;
    return;
L_0891B044:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_0891B054;
      }
      goto L_0891B04C;
    }
L_0891B04C:
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_0891B0C4;
      }
      goto L_0891B054;
    }
L_0891B054:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g31 = (0x0891B060u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B060u) goto L_0891B060;
    return;
L_0891B060:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20284)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20288)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x0891B07Cu);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B07Cu) goto L_0891B07C;
    return;
L_0891B07C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    hot_regs.g6 = (hot_regs.g4 + ctx.gpr[20]);
    hot_regs.g7 = (hot_regs.g6 < ctx.gpr[20] ? 1u : 0u);
    hot_regs.g4 = (hot_regs.g7 + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g4 + ctx.gpr[21]);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    hot_regs.g4 = (hot_regs.g4 | 0u);
    hot_regs.g5 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0891B0C4u);
    hot_regs.g6 = (0u | 179u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B0C4u) goto L_0891B0C4;
    return;
L_0891B0C4:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    g17 = (g17 & 255u);
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0891AEBC;
      }
      goto L_0891B0D8;
    }
}
L_0891B0D8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    g4 = (g4 & 16u);
    if (g4 == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g4 = g4;
        goto L_0891B250;
    }
    goto L_0891B0E8;
}
L_0891B0E8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 57u);
    if (hot_regs.g4 == hot_regs.g5) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
        goto L_0891B250;
    }
    goto L_0891B0F8;
L_0891B0F8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 58u);
    if (hot_regs.g4 == hot_regs.g5) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
        goto L_0891B250;
    }
    goto L_0891B108;
L_0891B108:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    f12 = f12 / hot_regs.f13;
    g4 = (15185u << 16u);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    g4 = (g4 | 46872u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    { const float fs = f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    ctx.set_fpu_condition((f12 <= f14));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
        goto L_0891B250;
    }
    goto L_0891B138;
}
}
L_0891B138:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-17));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(416));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x0891B160u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 581u, 0x088E3F34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B160u) goto L_0891B160;
    return;
L_0891B160:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B24C;
      }
      goto L_0891B168;
    }
L_0891B168:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    hot_regs.g4 = (16800u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891B1A8;
      }
      goto L_0891B184;
    }
L_0891B184:
    ctx.gpr[10] = (16752u << 16u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[10]);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 46u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    hot_regs.g31 = (0x0891B1A8u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B1A8u) goto L_0891B1A8;
    return;
L_0891B1A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    g4 = (g4 & 4096u);
    { const bool branch_taken = g4 == 0u;
    g4 = (16204u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891B1E0;
      }
      goto L_0891B1B8;
    }
}
L_0891B1B8:
    hot_regs.g6 = (50298u << 16u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g31 = (0x0891B1CCu);
    hot_regs.g5 = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 181u, 0x0886D370u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B1CCu) goto L_0891B1CC;
    return;
L_0891B1CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-4097));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), g4);
    g4 = (16204u << 16u);
    hot_regs.g4 = g4;
    goto L_0891B1E0;
}
L_0891B1E0:
    hot_regs.f20 = std::bit_cast<float>(0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(424)));
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = hot_regs.f12 - hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(416));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(432));
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(148));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (0u | 8u);
    hot_regs.g7 = (0u | 50u);
    hot_regs.g31 = (0x0891B224u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 352u, 0x089421CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B224u) goto L_0891B224;
    return;
L_0891B224:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x0891B238u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B238u) goto L_0891B238;
    return;
L_0891B238:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0891B244u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B244u) goto L_0891B244;
    return;
L_0891B244:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B7A8;
      }
      goto L_0891B24C;
    }
L_0891B24C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    goto L_0891B250;
L_0891B250:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    f12 = f12 / hot_regs.f13;
    g4 = (15363u << 16u);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    g4 = (g4 | 4719u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    { const float fs = f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    ctx.set_fpu_condition((f12 <= f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f20 = std::bit_cast<float>(0u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_0891B2B0;
      }
      goto L_0891B27C;
    }
}
}
L_0891B27C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (16153u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    g4 = (2238u << 16u);
    f12 = f12 + hot_regs.f13;
    g4 = (g4 + static_cast<std::uint32_t>(14064));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(144)));
    ctx.set_fpu_condition((hot_regs.f14 <= f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
        goto L_0891B328;
    }
    goto L_0891B2B0;
}
}
L_0891B2B0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g4 = (16230u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 26214u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g4);
    ctx.set_vfpu_scalar_bits_ct<32u>(hot_regs.g5);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<32u>());
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(448));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x0891B308u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B308u) goto L_0891B308;
    return;
L_0891B308:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u | 0u);
    g4 = (g4 & 1u);
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2));
    g5 = (g5 & hot_regs.g6);
    g4 = (g5 | g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0891B328;
}
L_0891B328:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    f12 = f12 / hot_regs.f13;
    g4 = (15107u << 16u);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    g4 = (g4 | 4719u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    { const float fs = f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    ctx.set_fpu_condition((f12 <= f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_0891B518;
      }
      goto L_0891B354;
    }
}
}
L_0891B354:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f20) || std::isnan(f12)) && hot_regs.f20 == f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0891B39C;
      }
      goto L_0891B368;
    }
}
L_0891B368:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    g4 = (16230u << 16u);
    g4 = (g4 | 26214u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    ctx.set_vfpu_scalar_bits_ct<32u>(hot_regs.g5);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<32u>());
    hot_regs.f20 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    goto L_0891B39C;
}
L_0891B39C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(464)));
    { const float fs = f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(468)));
    { const float fs = f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(472)));
    g4 = (48588u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0891B4DC;
      }
      goto L_0891B3E4;
    }
}
}
L_0891B3E4:
    hot_regs.g4 = (48163u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.f20 = std::bit_cast<float>(0u);
    hot_regs.g6 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (0u | 164u);
    hot_regs.g31 = (0x0891B414u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B414u) goto L_0891B414;
    return;
L_0891B414:
    hot_regs.g4 = (16396u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(464));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(512));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(512)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(516)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(520)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(528));
    hot_regs.g31 = (0x0891B47Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B47Cu) goto L_0891B47C;
    return;
L_0891B47C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B48C;
      }
      goto L_0891B484;
    }
L_0891B484:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(528)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_0891B48C;
L_0891B48C:
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = (15820u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(544));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(512));
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(148));
    hot_regs.g4 = (0u | 8u);
    hot_regs.g7 = (0u | 200u);
    hot_regs.g31 = (0x0891B4C4u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 352u, 0x089421CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B4C4u) goto L_0891B4C4;
    return;
L_0891B4C4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7660)));
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(-20080), hot_regs.g5);
    g4 = (g4 + static_cast<std::uint32_t>(100));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(-20076), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891B50C;
      }
      goto L_0891B4DC;
    }
}
L_0891B4DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (48419u << 16u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(472)));
    g4 = (g4 | 55050u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891B50C;
      }
      goto L_0891B4FC;
    }
}
L_0891B4FC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (48291u << 16u);
    g4 = (g4 | 55050u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
    goto L_0891B50C;
}
L_0891B50C:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(464));
    hot_regs.g31 = (0x0891B518u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B518u) goto L_0891B518;
    return;
L_0891B518:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20076)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B640;
      }
      goto L_0891B524;
    }
L_0891B524:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20076)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891B640;
      }
      goto L_0891B538;
    }
}
L_0891B538:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(560)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(564)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(568)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(576));
    hot_regs.g31 = (0x0891B568u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B568u) goto L_0891B568;
    return;
L_0891B568:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B578;
      }
      goto L_0891B570;
    }
L_0891B570:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(576)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(568), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_0891B578;
L_0891B578:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(568)));
    f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0891B640;
      }
      goto L_0891B590;
    }
}
L_0891B590:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-20076), 0u);
      if (branch_taken) {
          goto L_0891B640;
      }
      goto L_0891B5A0;
    }
L_0891B5A0:
    hot_regs.g4 = (16192u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(560));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(608));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x0891B5C0u);
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B5C0u) goto L_0891B5C0;
    return;
L_0891B5C0:
    hot_regs.f12 = hot_regs.f20 - hot_regs.f22;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f22 + hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(608)));
    hot_regs.f12 = hot_regs.f13 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x0891B5E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B5E0u) goto L_0891B5E0;
    return;
L_0891B5E0:
    hot_regs.f12 = hot_regs.f20 - hot_regs.f22;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f22 + hot_regs.f12;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(612)));
    hot_regs.f12 = hot_regs.f14 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(612), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(596), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(592));
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(148));
    hot_regs.g4 = (0u | 37u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x0891B630u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B630u) goto L_0891B630;
    return;
L_0891B630:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0891B5A0;
      }
      goto L_0891B640;
    }
}
L_0891B640:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B714;
      }
      goto L_0891B64C;
    }
L_0891B64C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20080)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891B714;
      }
      goto L_0891B660;
    }
}
L_0891B660:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(624), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(625), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(626), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(627), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(640));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(640)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(644)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(648)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(656));
    hot_regs.g31 = (0x0891B6A0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B6A0u) goto L_0891B6A0;
    return;
L_0891B6A0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B6B0;
      }
      goto L_0891B6A8;
    }
L_0891B6A8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(656)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_0891B6B0;
L_0891B6B0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(648)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891B714;
      }
      goto L_0891B6C8;
    }
L_0891B6C8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(648)));
    hot_regs.f14 = std::bit_cast<float>(0u);
    hot_regs.g4 = (16000u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-20080), 0u);
    hot_regs.f13 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (16528u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(676), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(640));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(680), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(672));
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(624));
    hot_regs.g4 = (0u | 9u);
    hot_regs.g7 = (0u | 1500u);
    hot_regs.g31 = (0x0891B714u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 352u, 0x089421CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B714u) goto L_0891B714;
    return;
L_0891B714:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B7A0;
      }
      goto L_0891B71C;
    }
L_0891B71C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (64512u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(236), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(236)));
    g4 = (g4 & 256u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(236)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_0891B774;
    }
    goto L_0891B744;
}
L_0891B744:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-257));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), hot_regs.g4);
    hot_regs.g4 = (32768u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g5 & hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), hot_regs.g4);
    hot_regs.g31 = (0x0891B770u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 403u, 0x089117B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B770u) goto L_0891B770;
    return;
L_0891B770:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    goto L_0891B774;
L_0891B774:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (0u + static_cast<std::uint32_t>(-257));
    g4 = (g4 & g5);
    hot_regs.g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(472)));
    g5 = (32768u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(236), g4);
    g4 = (hot_regs.g6 & g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(472), g4);
    g5 = (0u + static_cast<std::uint32_t>(-129));
    g4 = (g4 & g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(472), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0891B7A0;
}
L_0891B7A0:
    hot_regs.g31 = (0x0891B7A8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 672u, 0x08912A70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B7A8u) goto L_0891B7A8;
    return;
L_0891B7A8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(864)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(868)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(872)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(876)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(880)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(884)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(888)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(892)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(896)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(900)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(904)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(912));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0891B7DC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    hot_regs.g31 = (0x0891B814u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 51u, 0x089082A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B814u) goto L_0891B814;
    return;
L_0891B814:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g20 = ctx.gpr[20];
    g19 = (hot_regs.g2 | 0u);
    g4 = (g19 << 5u);
    hot_regs.g5 = (g19 << 2u);
    g4 = (g4 - hot_regs.g5);
    g20 = (ctx.gpr[16] + g4);
    g20 = (g20 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 != ctx.gpr[17];
    ctx.gpr[21] = (0u | 3u);
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_0891B8FC;
      }
      goto L_0891B838;
    }
}
L_0891B838:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[17]) < 40 ? 1u : 0u);
    g4 = (g4 + ctx.gpr[18]);
    { const bool branch_taken = hot_regs.g5 == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891B88C;
      }
      goto L_0891B84C;
    }
}
L_0891B84C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    hot_regs.g5 = (2234u << 16u);
      if (branch_taken) {
          goto L_0891B88C;
      }
      goto L_0891B854;
    }
L_0891B854:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    hot_regs.g4 = (g17 << 2u);
    g5 = (g5 + static_cast<std::uint32_t>(13440));
    g17 = (hot_regs.g4 + g5);
    g17 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(g17) < 0;
    // nop
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0891B88C;
      }
      goto L_0891B86C;
    }
}
L_0891B86C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    if (hot_regs.g7 != 0u) {
    g6 = (g5 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
        goto L_0891B884;
    }
    goto L_0891B884;
}
L_0891B884:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(16), hot_regs.g6);
      if (branch_taken) {
          goto L_0891B8AC;
      }
      goto L_0891B88C;
    }
L_0891B88C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    g6 = (2u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-31073));
    hot_regs.g7 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    if (hot_regs.g7 != 0u) {
    g6 = (g5 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
        goto L_0891B8A8;
    }
    goto L_0891B8A8;
}
L_0891B8A8:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(16), hot_regs.g6);
    goto L_0891B8AC;
L_0891B8AC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    g4 = (static_cast<std::int32_t>(g4) < 10000 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891B8D4;
      }
      goto L_0891B8BC;
    }
}
L_0891B8BC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    g4 = (static_cast<std::int32_t>(g4) < 20000 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891B8D4;
      }
      goto L_0891B8CC;
    }
}
L_0891B8CC:
    hot_regs.g4 = (0u | 9999u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), hot_regs.g4);
    goto L_0891B8D4;
L_0891B8D4:
    hot_regs.g31 = (0x0891B8DCu);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 212u, 0x08A40FCCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B8DCu) goto L_0891B8DC;
    return;
L_0891B8DC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0891BA4C;
      }
      goto L_0891B8E8;
    }
L_0891B8E8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_0891BA4C;
      }
      goto L_0891B8F4;
    }
L_0891B8F4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_0891BA4C;
      }
      goto L_0891B8FC;
    }
L_0891B8FC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B970;
      }
      goto L_0891B908;
    }
L_0891B908:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (g19 ^ 4u);
    g5 = (g19 ^ 5u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g6 = (g19 ^ 6u);
    g4 = (g4 | g5);
    g5 = (hot_regs.g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 | g5);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0891B954;
      }
      goto L_0891B934;
    }
}
L_0891B934:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    g18 = (g18 + g4);
    g4 = (g18 < static_cast<std::uint32_t>(10000) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (g18 < static_cast<std::uint32_t>(20000) ? 1u : 0u);
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_0891B954;
      }
      goto L_0891B948;
    }
}
L_0891B948:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B954;
      }
      goto L_0891B950;
    }
L_0891B950:
    ctx.gpr[18] = (0u | 9999u);
    goto L_0891B954;
L_0891B954:
    hot_regs.g31 = (0x0891B95Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B95Cu) goto L_0891B95C;
    return;
L_0891B95C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(96)));
    hot_regs.g31 = (0x0891B968u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 922u, 0x08907F9Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B968u) goto L_0891B968;
    return;
L_0891B968:
    hot_regs.g31 = (0x0891B970u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 148u, 0x08A40C70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B970u) goto L_0891B970;
    return;
L_0891B970:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B9F4;
      }
      goto L_0891B978;
    }
L_0891B978:
    hot_regs.g31 = (0x0891B980u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B980u) goto L_0891B980;
    return;
L_0891B980:
    ctx.gpr[22] = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(96)));
    hot_regs.g31 = (0x0891B98Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B98Cu) goto L_0891B98C;
    return;
L_0891B98C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    ctx.gpr[23] = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_0891B9A4;
      }
      goto L_0891B994;
    }
L_0891B994:
    hot_regs.g31 = (0x0891B99Cu);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B99Cu) goto L_0891B99C;
    return;
L_0891B99C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B9BC;
      }
      goto L_0891B9A4;
    }
L_0891B9A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) < 0;
    // nop
      if (branch_taken) {
          goto L_0891B9F4;
      }
      goto L_0891B9AC;
    }
L_0891B9AC:
    hot_regs.g31 = (0x0891B9B4u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B9B4u) goto L_0891B9B4;
    return;
L_0891B9B4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B9F4;
      }
      goto L_0891B9BC;
    }
L_0891B9BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    // nop
      if (branch_taken) {
          goto L_0891B9D4;
      }
      goto L_0891B9C4;
    }
L_0891B9C4:
    hot_regs.g6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-20280));
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x0891B9D4u);
    hot_regs.g5 = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B9D4u) goto L_0891B9D4;
    return;
L_0891B9D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) < 0;
    // nop
      if (branch_taken) {
          goto L_0891B9EC;
      }
      goto L_0891B9DC;
    }
L_0891B9DC:
    hot_regs.g6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-20280));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x0891B9ECu);
    hot_regs.g5 = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B9ECu) goto L_0891B9EC;
    return;
L_0891B9EC:
    hot_regs.g31 = (0x0891B9F4u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891B9F4u) goto L_0891B9F4;
    return;
L_0891B9F4:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0891BA04u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 131u, 0x08A40B6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891BA04u) goto L_0891BA04;
    return;
L_0891BA04:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    { const bool branch_taken = ctx.gpr[19] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_0891BA4C;
      }
      goto L_0891BA10;
    }
L_0891BA10:
    hot_regs.g31 = (0x0891BA18u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891BA18u) goto L_0891BA18;
    return;
L_0891BA18:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BA4C;
      }
      goto L_0891BA20;
    }
L_0891BA20:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    hot_regs.g31 = (0x0891BA40u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891BA40u) goto L_0891BA40;
    return;
L_0891BA40:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(96)));
    hot_regs.g31 = (0x0891BA4Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 897u, 0x08907E38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891BA4Cu) goto L_0891BA4C;
    return;
L_0891BA4C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0891BA5C;
      }
      goto L_0891BA58;
    }
L_0891BA58:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    goto L_0891BA5C;
L_0891BA5C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0891BA8C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    g8 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(236)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (g4 | 0u);
    g4 = (g8 & 256u);
    g4 = (0u < g4 ? 1u : 0u);
    g8 = (g4 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    g4 = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    { const bool branch_taken = g8 == 0u;
    ctx.gpr[18] = (hot_regs.g7 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0891BAE4;
      }
      goto L_0891BAD0;
    }
}
L_0891BAD0:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0891BAE4u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 425u, 0x089119D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891BAE4u) goto L_0891BAE4;
    return;
L_0891BAE4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 17u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0891BB70;
      }
      goto L_0891BAF4;
    }
L_0891BAF4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20252)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20256)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 31u));
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x0891BB30u);
    hot_regs.g6 = (hot_regs.g6 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891BB30u) goto L_0891BB30;
    return;
L_0891BB30:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20220)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20224)));
    ctx.gpr[9] = (ctx.gpr[3] & ctx.gpr[21]);
    ctx.gpr[8] = (hot_regs.g2 & ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[8] != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_0891BB50;
      }
      goto L_0891BB48;
    }
L_0891BB48:
    { const bool branch_taken = ctx.gpr[9] == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_0891BB70;
      }
      goto L_0891BB50;
    }
L_0891BB50:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0891BB70;
      }
      goto L_0891BB60;
    }
L_0891BB60:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g4 = (0u | 44u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), hot_regs.g4);
      if (branch_taken) {
          goto L_0891BB70;
      }
      goto L_0891BB70;
    }
L_0891BB70:
    hot_regs.g31 = (0x0891BB78u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891BB78u) goto L_0891BB78;
    return;
L_0891BB78:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BC00;
      }
      goto L_0891BB80;
    }
L_0891BB80:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20252)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20256)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 31u));
    ctx.gpr[8] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (hot_regs.g7 | 0u);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    hot_regs.g31 = (0x0891BBBCu);
    hot_regs.g6 = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891BBBCu) goto L_0891BBBC;
    return;
L_0891BBBC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g28 = ctx.gpr[28];
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-20028)));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-20032)));
    hot_regs.g7 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-20220)));
    hot_regs.g6 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-20224)));
    g5 = (ctx.gpr[3] & g5);
    g4 = (hot_regs.g2 & g4);
    { const bool branch_taken = g4 != hot_regs.g6;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0891BBE4;
      }
      goto L_0891BBDC;
    }
}
L_0891BBDC:
    { const bool branch_taken = hot_regs.g5 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_0891BC00;
      }
      goto L_0891BBE4;
    }
L_0891BBE4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(-2));
    hot_regs.g5 = (g4 < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891BC00;
      }
      goto L_0891BBF8;
    }
}
L_0891BBF8:
    hot_regs.g4 = (0u | 33u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    goto L_0891BC00;
L_0891BC00:
    hot_regs.g31 = (0x0891BC08u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891BC08u) goto L_0891BC08;
    return;
L_0891BC08:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BC9C;
      }
      goto L_0891BC10;
    }
L_0891BC10:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[19] = (0u | 6u);
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0891BC9C;
      }
      goto L_0891BC20;
    }
L_0891BC20:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20252)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20256)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 31u));
    ctx.gpr[8] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (hot_regs.g7 | 0u);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    hot_regs.g31 = (0x0891BC5Cu);
    hot_regs.g6 = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891BC5Cu) goto L_0891BC5C;
    return;
L_0891BC5C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g28 = ctx.gpr[28];
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-20020)));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-20024)));
    hot_regs.g7 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-20220)));
    hot_regs.g6 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-20224)));
    g5 = (ctx.gpr[3] & g5);
    g4 = (hot_regs.g2 & g4);
    { const bool branch_taken = g4 != hot_regs.g6;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0891BC84;
      }
      goto L_0891BC7C;
    }
}
L_0891BC7C:
    { const bool branch_taken = hot_regs.g5 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_0891BC9C;
      }
      goto L_0891BC84;
    }
L_0891BC84:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0891BC9C;
      }
      goto L_0891BC90;
    }
L_0891BC90:
    hot_regs.g4 = (0u | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
      if (branch_taken) {
          goto L_0891BC9C;
      }
      goto L_0891BC9C;
    }
L_0891BC9C:
    hot_regs.g31 = (0x0891BCA4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891BCA4u) goto L_0891BCA4;
    return;
L_0891BCA4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BD0C;
      }
      goto L_0891BCAC;
    }
L_0891BCAC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 18u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0891BD0C;
      }
      goto L_0891BCBC;
    }
L_0891BCBC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 214u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0891BD0C;
      }
      goto L_0891BCCC;
    }
L_0891BCCC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(1929))))));
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g5 - g4);
    g17 = (g17 + g4);
    g17 = (g17 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    g5 = (0u | 26u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0891BD04;
      }
      goto L_0891BCF4;
    }
}
L_0891BCF4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 24u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0891BD0C;
      }
      goto L_0891BD04;
    }
L_0891BD04:
    hot_regs.g4 = (0u | 122u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    goto L_0891BD0C;
L_0891BD0C:
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
L_0891BD30:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    hot_regs.g31 = (0x0891BD58u);
    hot_regs.g6 = (0u | 172u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891BD58u) goto L_0891BD58;
    return;
L_0891BD58:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BD8C;
      }
      goto L_0891BD60;
    }
L_0891BD60:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0891BD70u);
    hot_regs.g6 = (0u | 218u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891BD70u) goto L_0891BD70;
    return;
L_0891BD70:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BD8C;
      }
      goto L_0891BD78;
    }
L_0891BD78:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1736)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1736)));
    hot_regs.g4 = g4;
        goto L_0891BD9C;
    }
    goto L_0891BD84;
}
L_0891BD84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BDBC;
      }
      goto L_0891BD8C;
    }
L_0891BD8C:
    hot_regs.g31 = (0x0891BD94u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 426u, 0x08909950u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891BD94u) goto L_0891BD94;
    return;
L_0891BD94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 13u, 0x0891C0CCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_0891BD9C;
    }
L_0891BD9C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891BDBC;
      }
      goto L_0891BDAC;
    }
}
L_0891BDAC:
    hot_regs.g31 = (0x0891BDB4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891BDB4u) goto L_0891BDB4;
    return;
L_0891BDB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BDD8;
      }
      goto L_0891BDBC;
    }
L_0891BDBC:
    hot_regs.g31 = (0x0891BDC4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 416u, 0x089098ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891BDC4u) goto L_0891BDC4;
    return;
L_0891BDC4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BDD8;
      }
      goto L_0891BDCC;
    }
L_0891BDCC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
    g4 = (g4 | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(860), g4);
    hot_regs.g4 = g4;
    goto L_0891BDD8;
}
L_0891BDD8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1716)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 6u, 0x0891C04Cu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_0891BDE4;
    }
L_0891BDE4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1716)));
    hot_regs.g5 = (0u | 3u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 >> 1u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891BE1C;
      }
      goto L_0891BE00;
    }
}
L_0891BE00:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1716)));
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(816));
    hot_regs.g31 = (0x0891BE14u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 608u, 0x089F3910u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891BE14u) goto L_0891BE14;
    return;
L_0891BE14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BE2C;
      }
      goto L_0891BE1C;
    }
L_0891BE1C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1716)));
    g4 = (g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = g4;
    goto L_0891BE2C;
}
L_0891BE2C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(816));
    hot_regs.g31 = (0x0891BE38u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 628u, 0x089F3B64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891BE38u) goto L_0891BE38;
    return;
L_0891BE38:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BE60;
      }
      goto L_0891BE40;
    }
L_0891BE40:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    hot_regs.g4 = (hot_regs.g4 & 32u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 13u, 0x0891C0CCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_0891BE50;
    }
L_0891BE50:
    hot_regs.g31 = (0x0891BE58u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891BE58u) goto L_0891BE58;
    return;
L_0891BE58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 13u, 0x0891C0CCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_0891BE60;
    }
L_0891BE60:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    hot_regs.g4 = (hot_regs.g4 & 256u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 13u, 0x0891C0CCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_0891BE70;
    }
L_0891BE70:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    hot_regs.g4 = (hot_regs.g4 & 256u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 13u, 0x0891C0CCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_0891BE80;
    }
L_0891BE80:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    hot_regs.g4 = (hot_regs.g4 & 512u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 13u, 0x0891C0CCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_0891BE90;
    }
L_0891BE90:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 36u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 13u, 0x0891C0CCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_0891BEA0;
    }
L_0891BEA0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1736)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g4 = (hot_regs.g4 - hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 13u, 0x0891C0CCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_0891BEB8;
    }
L_0891BEB8:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[19] = (0u | 173u);
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g31 = (0x0891BEE0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 161u, 0x08A40D58u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891BEE0u) goto L_0891BEE0;
    return;
L_0891BEE0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BF14;
      }
      goto L_0891BEE8;
    }
L_0891BEE8:
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
    g5 = (0u | 32u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0891BF14;
      }
      goto L_0891BF10;
    }
}
L_0891BF10:
    ctx.gpr[17] = (0u | 1u);
    goto L_0891BF14;
L_0891BF14:
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    hot_regs.g31 = (0x0891BF20u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891BF20u) goto L_0891BF20;
    return;
L_0891BF20:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BFCC;
      }
      goto L_0891BF28;
    }
L_0891BF28:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BFCC;
      }
      goto L_0891BF30;
    }
L_0891BF30:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1716)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891BF9C;
      }
      goto L_0891BF50;
    }
}
L_0891BF50:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(23))))));
    g4 = (static_cast<std::int32_t>(g4) < 49 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891BF78;
      }
      goto L_0891BF64;
    }
}
L_0891BF64:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1716)));
    hot_regs.g5 = (0u | 6u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891BF80;
      }
      goto L_0891BF78;
    }
}
L_0891BF78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 158u);
      if (branch_taken) {
          goto L_0891BFF0;
      }
      goto L_0891BF80;
    }
L_0891BF80:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(23))))));
    g4 = (static_cast<std::int32_t>(g4) < 47 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891BFF0;
      }
      goto L_0891BF94;
    }
}
L_0891BF94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 56u);
      if (branch_taken) {
          goto L_0891BFF0;
      }
      goto L_0891BF9C;
    }
L_0891BF9C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(23))))));
    g4 = (static_cast<std::int32_t>(g4) < 50 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891BFC4;
      }
      goto L_0891BFB0;
    }
}
L_0891BFB0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1716)));
    hot_regs.g5 = (0u | 207u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891BFF0;
      }
      goto L_0891BFC4;
    }
}
L_0891BFC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 158u);
      if (branch_taken) {
          goto L_0891BFF0;
      }
      goto L_0891BFCC;
    }
L_0891BFCC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BFF0;
      }
      goto L_0891BFD4;
    }
L_0891BFD4:
    hot_regs.g31 = (0x0891BFDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0891BFDCu) goto L_0891BFDC;
    return;
L_0891BFDC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0891BFF0;
      }
      goto L_0891BFEC;
    }
}
L_0891BFEC:
    ctx.gpr[19] = (0u | 158u);
    goto L_0891BFF0;
L_0891BFF0:
    hot_regs.g4 = (0u | 173u);
    { const bool branch_taken = ctx.gpr[19] == hot_regs.g4;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 3u, 0x0891C01Cu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_0891BFFC;
    }
L_0891BFFC:
    ctx.gpr[8] = (16512u << 16u);
    ctx.pc = 0x0891C000u; return;
}

void recomp_unit_0069(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0069_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_69(Runtime &runtime) {
    runtime.register_generated_unit(69u, 0x08918000u, 16384u, &recomp_unit_0069, &recomp_unit_0069_entry);
    runtime.register_function(0x08918000u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918018u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918028u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918040u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918048u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918064u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918078u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918084u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918090u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918100u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918108u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891811Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918128u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918150u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918164u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918184u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918194u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918198u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089181B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089181BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089181E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918204u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918228u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891823Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891826Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918300u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891830Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918314u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891831Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918324u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891832Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918338u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918348u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918358u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918368u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918370u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918378u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891839Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089183ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089183BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089183C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089183D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089183ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089183F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918400u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891840Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918414u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918420u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918464u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918470u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918478u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891849Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089184A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089184CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089184E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089184F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918508u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918514u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891851Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918524u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891853Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918548u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891854Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918550u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918580u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089185A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089185A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089185ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918660u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918678u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918694u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918728u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918758u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918768u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891877Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918784u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891879Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918808u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918828u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918840u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918868u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891889Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891891Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918968u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918970u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918988u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089189B0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089189E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A14u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A3Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A68u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A7Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A90u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A9Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918AE0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918AF4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918AFCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B10u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B28u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B40u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B48u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B60u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B6Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918BA0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918BD4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918BDCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918BE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918BFCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C10u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C24u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C58u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C88u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C98u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918CACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918CB4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918CCCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918CE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918CECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918CF4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918CFCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D0Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D14u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D1Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D28u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D38u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D3Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D60u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D78u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D80u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D90u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D98u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E38u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E60u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E68u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E74u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E7Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E94u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918EACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918EC0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918ECCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918ED0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F0Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F48u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F50u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F5Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F6Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F74u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F7Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F8Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F9Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918FA4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918FACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918FB4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918FC8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918FD0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918FECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919038u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891904Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891905Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891906Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919094u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891909Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919104u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919118u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919128u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919138u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919148u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919158u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919160u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919170u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891918Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089191A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089191E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089191F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919204u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891920Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919214u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891921Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919224u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919228u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919238u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919240u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919248u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891925Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919268u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919280u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891928Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891929Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089192A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089192B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089192C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089192ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919300u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919314u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919338u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919344u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919350u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919388u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919398u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919400u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919410u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919420u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919434u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891943Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919448u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919480u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089194ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089194C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089194DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089194F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919504u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891951Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919534u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919538u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891954Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919564u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891958Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919608u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919624u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919638u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891964Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891965Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919670u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919678u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891968Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919694u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891969Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919708u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919720u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919740u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919750u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919768u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919778u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891982Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919850u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919864u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891987Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919890u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919894u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089198A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089198D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089198ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919900u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919910u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919920u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919934u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919948u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919958u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919968u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891997Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089199B0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089199E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089199F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089199F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A00u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A10u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A18u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A20u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A28u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A5Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A80u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A94u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919AB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919AC0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919AD0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919AE8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B44u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B50u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B60u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B6Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B7Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B80u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B88u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B9Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919BA8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919BC8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919BE0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919BFCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C0Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C1Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C88u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919CA4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919CB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919CD8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D0Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D24u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D30u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D48u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D60u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D7Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D90u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D9Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919DA4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919DB8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919DC0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919DC8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919DD0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919DD8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919DE0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E00u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E14u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E48u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919ED8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919EF4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919EFCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F10u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F38u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F4Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F54u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F70u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F7Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F88u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F9Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919FA8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919FACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919FB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A014u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A024u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A03Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A050u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A054u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A080u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A088u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A0BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A0D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A124u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A14Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A154u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A170u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A17Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A190u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A1A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A1A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A1CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A1ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A204u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A208u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A224u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A238u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A24Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A260u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A270u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A28Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A2C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A2CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A2E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A2ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A304u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A30Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A314u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A32Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A330u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A338u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A354u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A358u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A35Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A380u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A400u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A414u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A424u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A434u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A444u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A45Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A474u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A480u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A488u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A48Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A4B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A4C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A540u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A548u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A568u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A57Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A590u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A594u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A5A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A5ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A5E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A5E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A60Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A610u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A618u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A688u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A690u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A6C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A6CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A740u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A75Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A854u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A86Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A884u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A890u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A894u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A918u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A930u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A940u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A948u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A950u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A960u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A974u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A988u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A990u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A998u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A9B0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A9C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A9CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A9DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A9F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA04u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA0Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA20u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA38u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA44u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA98u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AACCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AAE8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AAF0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AAF8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB00u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB04u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB0Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB44u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB50u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB58u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB6Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB94u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ABA4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ABB8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ABC0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ABD4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ABE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC3Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC48u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC58u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC6Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC7Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ACD4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ACDCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ACF0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ACFCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD0Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD48u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD7Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ADCCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ADDCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ADF0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AE1Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AE2Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AEBCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AED0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AEE0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF24u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF38u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF80u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AFACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AFB4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AFD0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AFE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B044u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B04Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B054u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B060u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B07Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B0C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B0D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B0E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B0F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B108u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B138u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B160u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B168u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B184u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B1A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B1B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B1CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B1E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B224u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B238u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B244u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B24Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B250u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B27Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B2B0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B308u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B328u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B354u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B368u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B39Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B3E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B414u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B47Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B484u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B48Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B4C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B4DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B4FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B50Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B518u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B524u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B538u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B568u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B570u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B578u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B590u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B5A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B5C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B5E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B630u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B640u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B64Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B660u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B6A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B6A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B6B0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B6C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B714u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B71Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B744u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B770u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B774u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B7A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B7A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B7DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B814u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B838u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B84Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B854u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B86Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B884u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B88Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B908u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B934u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B948u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B950u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B954u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B95Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B968u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B970u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B978u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B980u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B98Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B994u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B99Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B9A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B9ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B9B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B9BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B9C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B9D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B9DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B9ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B9F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA04u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA10u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA18u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA20u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA40u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA4Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA58u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA5Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA8Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BAD0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BAE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BAF4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB30u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB48u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB50u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB60u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB70u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB78u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB80u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BBBCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BBDCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BBE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BBF8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC00u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC10u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC20u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC5Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC7Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC90u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC9Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BCA4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BCACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BCBCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BCCCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BCF4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD04u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD0Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD30u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD58u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD60u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD70u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD78u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD8Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD94u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD9Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BDACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BDB4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BDBCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BDC4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BDCCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BDD8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BDE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE00u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE14u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE1Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE2Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE38u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE40u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE50u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE58u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE60u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE70u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE80u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE90u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BEA0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BEB8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BEE0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BEE8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF10u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF14u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF20u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF28u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF30u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF50u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF64u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF78u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF80u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF94u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF9Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BFB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BFC4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BFCCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BFD4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BFDCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BFECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BFF0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BFFCu, &recomp_unit_0069, "recomp_unit_0069");
}
} // namespace psprecomp
