#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0005[4055] = {
    1, 0, 0, 2, 3, 0, 0, 4, 5, 0, 6, 7, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 14,
    15, 0, 0, 16, 17, 0, 18, 19, 0, 0, 20, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 24, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 35, 0, 0, 36,
    37, 0, 38, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 49, 50, 0,
    51, 0, 52, 53, 0, 54, 0, 55, 56, 0, 57, 0, 58, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0,
    0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0,
    0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 75, 0, 0, 76, 0, 77, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0,
    0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88,
    89, 0, 90, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 101, 0, 102, 0, 103, 0, 0, 0, 104, 105,
    0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 109, 0, 110, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0,
    121, 0, 0, 122, 0, 123, 0, 124, 0, 125, 0, 0, 0, 126, 0, 127, 0, 0, 128, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0,
    0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 137, 0, 0, 138, 0, 139, 0, 140, 0, 141, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 144, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0,
    0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 150, 0, 0, 151, 0, 0, 152, 0, 153, 0, 154, 0, 0, 0, 0, 155, 0, 0,
    0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 163, 0, 0, 164, 0,
    0, 165, 0, 166, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173,
    0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 176, 0, 0, 177, 0, 178, 0, 179, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0,
    0, 0, 0, 0, 187, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 193,
    0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 202, 0, 0, 203, 0, 204,
    0, 205, 0, 206, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0,
    0, 215, 0, 216, 0, 217, 0, 0, 218, 0, 219, 0, 220, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0,
    230, 0, 231, 0, 232, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0,
    0, 237, 0, 0, 238, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 243,
    0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 249, 0, 0, 250, 251, 0, 252, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 255, 0, 256, 0, 257, 0, 258, 0, 259, 0, 260, 0, 0, 0, 261, 0, 262, 0, 263, 0,
    0, 0, 264, 0, 265, 0, 0, 0, 266, 0, 267, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 272, 0, 0, 0, 0,
    0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0,
    0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 281, 0, 282, 0,
    283, 0, 284, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0,
    0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 292, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0,
    296, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 302, 0, 0, 0, 303, 0, 304, 0, 0,
    305, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 311, 0, 0, 0, 0, 0,
    0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 318, 0, 0, 0, 319, 0,
    320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 329, 0, 330, 0, 331, 0, 332, 0, 333, 0, 0, 0, 0,
    0, 0, 334, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 340, 0, 341, 0,
    342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 345, 0, 346, 0, 0, 0, 0, 347, 0, 348, 0,
    349, 0, 0, 350, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354,
    0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0,
    0, 365, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0,
    371, 0, 372, 0, 0, 0, 373, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377,
    0, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 381, 382, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0,
    0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 392,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0,
    0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0,
    0, 401, 0, 402, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 0, 405, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0,
    415, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 420, 0, 0, 0, 0,
    0, 0, 421, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 424, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 427, 0, 0, 0, 428, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431,
    432, 0, 0, 0, 433, 0, 0, 0, 434, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 440, 441, 0, 0, 0, 0, 0, 0, 0, 442, 443, 0,
    0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0,
    0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450,
    0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 452, 0, 453, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 458,
    0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 469, 0, 470, 0, 471, 0, 0, 0, 0, 472, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 0, 480,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 487, 0, 0, 0, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 0, 491, 0, 0, 0, 0, 0, 0, 492, 0, 0, 493,
    0, 0, 0, 0, 0, 0, 494, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0, 0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 0, 499, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0,
    505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 510, 0, 0, 511, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 512, 0, 513, 0, 514, 0, 515, 0, 516, 0, 517, 0, 518, 0, 519, 0, 520, 0, 0, 0, 0, 521, 522, 523, 0,
    524, 525, 526, 0, 527, 528, 529, 0, 530, 531, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0,
    0, 535, 0, 0, 536, 0, 537, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 541, 0, 542, 543, 0, 0, 0,
    544, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 549, 0, 0, 550,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552,
    0, 0, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 558, 0, 559, 560,
    0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 565,
    0, 566, 567, 0, 0, 568, 0, 0, 0, 0, 0, 0, 569, 0, 0, 570, 0, 0, 571, 572, 0, 0, 0, 573, 0, 574, 0, 0, 0, 0, 0, 0,
    0, 575, 0, 0, 0, 576, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 580, 0, 0, 581, 0, 0, 0, 582, 0, 0, 583, 0, 0, 0, 584, 0, 0, 585, 0, 0, 0, 0, 586, 0, 587, 0, 0, 588, 0, 0,
    0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 0, 591, 0, 0, 592, 593, 0, 0, 0, 594, 0, 595, 0, 0, 0, 0, 596, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0, 0, 0, 0, 0, 600, 0, 601, 0, 0, 0, 0,
    0, 0, 602, 0, 0, 603, 0, 0, 604, 605, 0, 0, 0, 606, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 611, 0, 612, 0, 0, 0, 0,
    0, 613, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0,
    0, 617, 0, 618, 0, 0, 619, 620, 0, 621, 0, 0, 622, 623, 0, 624, 0, 0, 625, 626, 0, 627, 0, 0, 628, 629, 0, 0, 0, 630, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0,
    0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 636, 0, 0, 637, 0, 0, 0, 638, 0, 0, 0, 0, 0, 639,
    0, 0, 0, 0, 0, 0, 640, 641, 642, 0, 643, 0, 0, 0, 644, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 646, 647, 648, 0, 649,
    0, 0, 0, 650, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 652, 653, 654, 0, 655, 0, 0, 0, 656, 0, 0, 0, 0, 0, 657, 0,
    0, 0, 0, 0, 0, 658, 659, 660, 0, 661, 0, 0, 0, 662, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 664, 665, 666, 0, 667, 0,
    0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 670, 671, 672, 0, 673, 0, 0, 0, 674, 0, 0, 0, 0, 0, 675, 0, 0,
    0, 0, 0, 0, 676, 677, 678, 0, 679, 0, 0, 0, 680, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 682, 683, 684, 0, 685, 0, 0,
    686, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 688, 0, 0, 0, 0, 689, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 692, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    695, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 698,
};
void recomp_unit_0005_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08818000u;
        entry_id = (entry_delta < 16220u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0005[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08818000;
    case 2u: goto L_0881800C;
    case 3u: goto L_08818010;
    case 4u: goto L_0881801C;
    case 5u: goto L_08818020;
    case 6u: goto L_08818028;
    case 7u: goto L_0881802C;
    case 8u: goto L_08818038;
    case 9u: goto L_08818040;
    case 10u: goto L_08818130;
    case 11u: goto L_08818148;
    case 12u: goto L_088181EC;
    case 13u: goto L_088181F4;
    case 14u: goto L_088181FC;
    case 15u: goto L_08818200;
    case 16u: goto L_0881820C;
    case 17u: goto L_08818210;
    case 18u: goto L_08818218;
    case 19u: goto L_0881821C;
    case 20u: goto L_08818228;
    case 21u: goto L_0881822C;
    case 22u: goto L_08818330;
    case 23u: goto L_08818338;
    case 24u: goto L_08818388;
    case 25u: goto L_0881838C;
    case 26u: goto L_088183B0;
    case 27u: goto L_088183BC;
    case 28u: goto L_088183F0;
    case 29u: goto L_0881843C;
    case 30u: goto L_0881846C;
    case 31u: goto L_088184B8;
    case 32u: goto L_08818500;
    case 33u: goto L_08818540;
    case 34u: goto L_0881856C;
    case 35u: goto L_08818570;
    case 36u: goto L_0881857C;
    case 37u: goto L_08818580;
    case 38u: goto L_08818588;
    case 39u: goto L_0881858C;
    case 40u: goto L_08818604;
    case 41u: goto L_08818614;
    case 42u: goto L_08818658;
    case 43u: goto L_0881869C;
    case 44u: goto L_088186A4;
    case 45u: goto L_088186C0;
    case 46u: goto L_088186C8;
    case 47u: goto L_088186E4;
    case 48u: goto L_088186EC;
    case 49u: goto L_088186F4;
    case 50u: goto L_088186F8;
    case 51u: goto L_08818700;
    case 52u: goto L_08818708;
    case 53u: goto L_0881870C;
    case 54u: goto L_08818714;
    case 55u: goto L_0881871C;
    case 56u: goto L_08818720;
    case 57u: goto L_08818728;
    case 58u: goto L_08818730;
    case 59u: goto L_08818734;
    case 60u: goto L_088187C0;
    case 61u: goto L_088187E8;
    case 62u: goto L_08818800;
    case 63u: goto L_08818820;
    case 64u: goto L_08818848;
    case 65u: goto L_08818878;
    case 66u: goto L_08818888;
    case 67u: goto L_08818894;
    case 68u: goto L_088188AC;
    case 69u: goto L_088188D8;
    case 70u: goto L_088188F4;
    case 71u: goto L_08818904;
    case 72u: goto L_08818918;
    case 73u: goto L_08818944;
    case 74u: goto L_0881894C;
    case 75u: goto L_08818954;
    case 76u: goto L_08818960;
    case 77u: goto L_08818968;
    case 78u: goto L_08818970;
    case 79u: goto L_0881899C;
    case 80u: goto L_088189B4;
    case 81u: goto L_088189E8;
    case 82u: goto L_088189F8;
    case 83u: goto L_08818A04;
    case 84u: goto L_08818A24;
    case 85u: goto L_08818A48;
    case 86u: goto L_08818A50;
    case 87u: goto L_08818A70;
    case 88u: goto L_08818A7C;
    case 89u: goto L_08818A80;
    case 90u: goto L_08818A88;
    case 91u: goto L_08818A94;
    case 92u: goto L_08818AA8;
    case 93u: goto L_08818AC8;
    case 94u: goto L_08818AD8;
    case 95u: goto L_08818AE8;
    case 96u: goto L_08818B00;
    case 97u: goto L_08818B20;
    case 98u: goto L_08818B2C;
    case 99u: goto L_08818B3C;
    case 100u: goto L_08818B4C;
    case 101u: goto L_08818B58;
    case 102u: goto L_08818B60;
    case 103u: goto L_08818B68;
    case 104u: goto L_08818B78;
    case 105u: goto L_08818B7C;
    case 106u: goto L_08818B84;
    case 107u: goto L_08818BA4;
    case 108u: goto L_08818BB0;
    case 109u: goto L_08818BC0;
    case 110u: goto L_08818BC8;
    case 111u: goto L_08818BCC;
    case 112u: goto L_08818BD4;
    case 113u: goto L_08818C18;
    case 114u: goto L_08818C2C;
    case 115u: goto L_08818C48;
    case 116u: goto L_08818C50;
    case 117u: goto L_08818C5C;
    case 118u: goto L_08818C68;
    case 119u: goto L_08818C70;
    case 120u: goto L_08818C78;
    case 121u: goto L_08818C80;
    case 122u: goto L_08818C8C;
    case 123u: goto L_08818C94;
    case 124u: goto L_08818C9C;
    case 125u: goto L_08818CA4;
    case 126u: goto L_08818CB4;
    case 127u: goto L_08818CBC;
    case 128u: goto L_08818CC8;
    case 129u: goto L_08818CD0;
    case 130u: goto L_08818CDC;
    case 131u: goto L_08818CE8;
    case 132u: goto L_08818D20;
    case 133u: goto L_08818D68;
    case 134u: goto L_08818D78;
    case 135u: goto L_08818D94;
    case 136u: goto L_08818D9C;
    case 137u: goto L_08818DA8;
    case 138u: goto L_08818DB4;
    case 139u: goto L_08818DBC;
    case 140u: goto L_08818DC4;
    case 141u: goto L_08818DCC;
    case 142u: goto L_08818DD8;
    case 143u: goto L_08818DEC;
    case 144u: goto L_08818DF8;
    case 145u: goto L_08818E30;
    case 146u: goto L_08818E78;
    case 147u: goto L_08818E88;
    case 148u: goto L_08818EA4;
    case 149u: goto L_08818EB0;
    case 150u: goto L_08818EB8;
    case 151u: goto L_08818EC4;
    case 152u: goto L_08818ED0;
    case 153u: goto L_08818ED8;
    case 154u: goto L_08818EE0;
    case 155u: goto L_08818EF4;
    case 156u: goto L_08818F18;
    case 157u: goto L_08818F24;
    case 158u: goto L_08818F5C;
    case 159u: goto L_08818FAC;
    case 160u: goto L_08818FBC;
    case 161u: goto L_08818FD8;
    case 162u: goto L_08818FE4;
    case 163u: goto L_08818FEC;
    case 164u: goto L_08818FF8;
    case 165u: goto L_08819004;
    case 166u: goto L_0881900C;
    case 167u: goto L_08819014;
    case 168u: goto L_08819024;
    case 169u: goto L_0881904C;
    case 170u: goto L_08819058;
    case 171u: goto L_08819094;
    case 172u: goto L_088190EC;
    case 173u: goto L_088190FC;
    case 174u: goto L_08819118;
    case 175u: goto L_08819120;
    case 176u: goto L_0881912C;
    case 177u: goto L_08819138;
    case 178u: goto L_08819140;
    case 179u: goto L_08819148;
    case 180u: goto L_08819150;
    case 181u: goto L_0881915C;
    case 182u: goto L_08819174;
    case 183u: goto L_08819180;
    case 184u: goto L_088191BC;
    case 185u: goto L_088191EC;
    case 186u: goto L_088191F4;
    case 187u: goto L_08819210;
    case 188u: goto L_08819218;
    case 189u: goto L_08819224;
    case 190u: goto L_08819230;
    case 191u: goto L_08819248;
    case 192u: goto L_08819278;
    case 193u: goto L_0881927C;
    case 194u: goto L_08819298;
    case 195u: goto L_088192A8;
    case 196u: goto L_088192B4;
    case 197u: goto L_088192E0;
    case 198u: goto L_08819328;
    case 199u: goto L_08819338;
    case 200u: goto L_08819354;
    case 201u: goto L_0881935C;
    case 202u: goto L_08819368;
    case 203u: goto L_08819374;
    case 204u: goto L_0881937C;
    case 205u: goto L_08819384;
    case 206u: goto L_0881938C;
    case 207u: goto L_08819398;
    case 208u: goto L_088193AC;
    case 209u: goto L_088193B8;
    case 210u: goto L_088193C4;
    case 211u: goto L_088193FC;
    case 212u: goto L_08819448;
    case 213u: goto L_0881945C;
    case 214u: goto L_08819478;
    case 215u: goto L_08819484;
    case 216u: goto L_0881948C;
    case 217u: goto L_08819494;
    case 218u: goto L_088194A0;
    case 219u: goto L_088194A8;
    case 220u: goto L_088194B0;
    case 221u: goto L_088194B8;
    case 222u: goto L_088194C4;
    case 223u: goto L_088194E4;
    case 224u: goto L_088194F0;
    case 225u: goto L_0881951C;
    case 226u: goto L_0881954C;
    case 227u: goto L_08819550;
    case 228u: goto L_0881956C;
    case 229u: goto L_08819578;
    case 230u: goto L_08819580;
    case 231u: goto L_08819588;
    case 232u: goto L_08819590;
    case 233u: goto L_08819598;
    case 234u: goto L_088195A4;
    case 235u: goto L_088195BC;
    case 236u: goto L_088195EC;
    case 237u: goto L_08819604;
    case 238u: goto L_08819610;
    case 239u: goto L_08819614;
    case 240u: goto L_0881963C;
    case 241u: goto L_0881965C;
    case 242u: goto L_08819668;
    case 243u: goto L_0881967C;
    case 244u: goto L_08819688;
    case 245u: goto L_088196A8;
    case 246u: goto L_088196AC;
    case 247u: goto L_088196C8;
    case 248u: goto L_088196D4;
    case 249u: goto L_088196DC;
    case 250u: goto L_088196E8;
    case 251u: goto L_088196EC;
    case 252u: goto L_088196F4;
    case 253u: goto L_0881971C;
    case 254u: goto L_08819724;
    case 255u: goto L_08819730;
    case 256u: goto L_08819738;
    case 257u: goto L_08819740;
    case 258u: goto L_08819748;
    case 259u: goto L_08819750;
    case 260u: goto L_08819758;
    case 261u: goto L_08819768;
    case 262u: goto L_08819770;
    case 263u: goto L_08819778;
    case 264u: goto L_08819788;
    case 265u: goto L_08819790;
    case 266u: goto L_088197A0;
    case 267u: goto L_088197A8;
    case 268u: goto L_088197B0;
    case 269u: goto L_088197C0;
    case 270u: goto L_088197D8;
    case 271u: goto L_088197E4;
    case 272u: goto L_088197EC;
    case 273u: goto L_08819804;
    case 274u: goto L_0881980C;
    case 275u: goto L_08819828;
    case 276u: goto L_08819878;
    case 277u: goto L_08819894;
    case 278u: goto L_088198B8;
    case 279u: goto L_088198D4;
    case 280u: goto L_088198E4;
    case 281u: goto L_088198F0;
    case 282u: goto L_088198F8;
    case 283u: goto L_08819900;
    case 284u: goto L_08819908;
    case 285u: goto L_08819910;
    case 286u: goto L_08819920;
    case 287u: goto L_0881993C;
    case 288u: goto L_0881994C;
    case 289u: goto L_0881996C;
    case 290u: goto L_0881998C;
    case 291u: goto L_0881999C;
    case 292u: goto L_088199A8;
    case 293u: goto L_088199B0;
    case 294u: goto L_088199B8;
    case 295u: goto L_088199F8;
    case 296u: goto L_08819A00;
    case 297u: goto L_08819A08;
    case 298u: goto L_08819A18;
    case 299u: goto L_08819A30;
    case 300u: goto L_08819A44;
    case 301u: goto L_08819A50;
    case 302u: goto L_08819A5C;
    case 303u: goto L_08819A6C;
    case 304u: goto L_08819A74;
    case 305u: goto L_08819A80;
    case 306u: goto L_08819A94;
    case 307u: goto L_08819AA4;
    case 308u: goto L_08819AB0;
    case 309u: goto L_08819AC0;
    case 310u: goto L_08819AE4;
    case 311u: goto L_08819AE8;
    case 312u: goto L_08819B04;
    case 313u: goto L_08819B18;
    case 314u: goto L_08819B2C;
    case 315u: goto L_08819B34;
    case 316u: goto L_08819B58;
    case 317u: goto L_08819B60;
    case 318u: goto L_08819B68;
    case 319u: goto L_08819B78;
    case 320u: goto L_08819B80;
    case 321u: goto L_08819B88;
    case 322u: goto L_08819BB0;
    case 323u: goto L_08819BC4;
    case 324u: goto L_08819BD4;
    case 325u: goto L_08819BE0;
    case 326u: goto L_08819C14;
    case 327u: goto L_08819C30;
    case 328u: goto L_08819C40;
    case 329u: goto L_08819C4C;
    case 330u: goto L_08819C54;
    case 331u: goto L_08819C5C;
    case 332u: goto L_08819C64;
    case 333u: goto L_08819C6C;
    case 334u: goto L_08819C88;
    case 335u: goto L_08819C94;
    case 336u: goto L_08819CA4;
    case 337u: goto L_08819CB4;
    case 338u: goto L_08819CD4;
    case 339u: goto L_08819CE4;
    case 340u: goto L_08819CF0;
    case 341u: goto L_08819CF8;
    case 342u: goto L_08819D00;
    case 343u: goto L_08819D40;
    case 344u: goto L_08819D48;
    case 345u: goto L_08819D54;
    case 346u: goto L_08819D5C;
    case 347u: goto L_08819D70;
    case 348u: goto L_08819D78;
    case 349u: goto L_08819D80;
    case 350u: goto L_08819D8C;
    case 351u: goto L_08819D94;
    case 352u: goto L_08819DA0;
    case 353u: goto L_08819DD4;
    case 354u: goto L_08819DFC;
    case 355u: goto L_08819E04;
    case 356u: goto L_08819E24;
    case 357u: goto L_08819E40;
    case 358u: goto L_08819E50;
    case 359u: goto L_08819E6C;
    case 360u: goto L_08819E7C;
    case 361u: goto L_08819EB8;
    case 362u: goto L_08819ED0;
    case 363u: goto L_08819ED4;
    case 364u: goto L_08819EE8;
    case 365u: goto L_08819F04;
    case 366u: goto L_08819F10;
    case 367u: goto L_08819F20;
    case 368u: goto L_08819F48;
    case 369u: goto L_08819F58;
    case 370u: goto L_08819F68;
    case 371u: goto L_08819F80;
    case 372u: goto L_08819F88;
    case 373u: goto L_08819F98;
    case 374u: goto L_08819FA0;
    case 375u: goto L_08819FC4;
    case 376u: goto L_08819FE8;
    case 377u: goto L_08819FFC;
    case 378u: goto L_0881A018;
    case 379u: goto L_0881A024;
    case 380u: goto L_0881A03C;
    case 381u: goto L_0881A044;
    case 382u: goto L_0881A048;
    case 383u: goto L_0881A050;
    case 384u: goto L_0881A06C;
    case 385u: goto L_0881A074;
    case 386u: goto L_0881A090;
    case 387u: goto L_0881A098;
    case 388u: goto L_0881A0B4;
    case 389u: goto L_0881A0CC;
    case 390u: goto L_0881A0D4;
    case 391u: goto L_0881A0F4;
    case 392u: goto L_0881A0FC;
    case 393u: goto L_0881A128;
    case 394u: goto L_0881A16C;
    case 395u: goto L_0881A178;
    case 396u: goto L_0881A194;
    case 397u: goto L_0881A1BC;
    case 398u: goto L_0881A1C8;
    case 399u: goto L_0881A1E0;
    case 400u: goto L_0881A1E8;
    case 401u: goto L_0881A204;
    case 402u: goto L_0881A20C;
    case 403u: goto L_0881A224;
    case 404u: goto L_0881A22C;
    case 405u: goto L_0881A23C;
    case 406u: goto L_0881A24C;
    case 407u: goto L_0881A254;
    case 408u: goto L_0881A270;
    case 409u: goto L_0881A2A4;
    case 410u: goto L_0881A2AC;
    case 411u: goto L_0881A2B4;
    case 412u: goto L_0881A2D0;
    case 413u: goto L_0881A2D8;
    case 414u: goto L_0881A2F4;
    case 415u: goto L_0881A300;
    case 416u: goto L_0881A308;
    case 417u: goto L_0881A320;
    case 418u: goto L_0881A354;
    case 419u: goto L_0881A364;
    case 420u: goto L_0881A36C;
    case 421u: goto L_0881A388;
    case 422u: goto L_0881A390;
    case 423u: goto L_0881A3AC;
    case 424u: goto L_0881A3B8;
    case 425u: goto L_0881A3C0;
    case 426u: goto L_0881A3D8;
    case 427u: goto L_0881A40C;
    case 428u: goto L_0881A41C;
    case 429u: goto L_0881A424;
    case 430u: goto L_0881A468;
    case 431u: goto L_0881A47C;
    case 432u: goto L_0881A480;
    case 433u: goto L_0881A490;
    case 434u: goto L_0881A4A0;
    case 435u: goto L_0881A4A4;
    case 436u: goto L_0881A4D4;
    case 437u: goto L_0881A508;
    case 438u: goto L_0881A52C;
    case 439u: goto L_0881A544;
    case 440u: goto L_0881A550;
    case 441u: goto L_0881A554;
    case 442u: goto L_0881A574;
    case 443u: goto L_0881A578;
    case 444u: goto L_0881A584;
    case 445u: goto L_0881A5A8;
    case 446u: goto L_0881A5B8;
    case 447u: goto L_0881A5F4;
    case 448u: goto L_0881A618;
    case 449u: goto L_0881A658;
    case 450u: goto L_0881A67C;
    case 451u: goto L_0881A6A0;
    case 452u: goto L_0881A6A8;
    case 453u: goto L_0881A6B0;
    case 454u: goto L_0881A6BC;
    case 455u: goto L_0881A6C8;
    case 456u: goto L_0881A6EC;
    case 457u: goto L_0881A6F4;
    case 458u: goto L_0881A6FC;
    case 459u: goto L_0881A708;
    case 460u: goto L_0881A738;
    case 461u: goto L_0881A760;
    case 462u: goto L_0881A7BC;
    case 463u: goto L_0881A7D4;
    case 464u: goto L_0881A7FC;
    case 465u: goto L_0881A884;
    case 466u: goto L_0881A89C;
    case 467u: goto L_0881A8BC;
    case 468u: goto L_0881A8C8;
    case 469u: goto L_0881A8D0;
    case 470u: goto L_0881A8D8;
    case 471u: goto L_0881A8E0;
    case 472u: goto L_0881A8F4;
    case 473u: goto L_0881A91C;
    case 474u: goto L_0881A984;
    case 475u: goto L_0881A99C;
    case 476u: goto L_0881A9BC;
    case 477u: goto L_0881A9C8;
    case 478u: goto L_0881A9DC;
    case 479u: goto L_0881A9E8;
    case 480u: goto L_0881A9FC;
    case 481u: goto L_0881AA24;
    case 482u: goto L_0881AA34;
    case 483u: goto L_0881AA44;
    case 484u: goto L_0881AA54;
    case 485u: goto L_0881AA60;
    case 486u: goto L_0881AAA4;
    case 487u: goto L_0881AC04;
    case 488u: goto L_0881AC20;
    case 489u: goto L_0881AC2C;
    case 490u: goto L_0881AC48;
    case 491u: goto L_0881AC54;
    case 492u: goto L_0881AC70;
    case 493u: goto L_0881AC7C;
    case 494u: goto L_0881AC98;
    case 495u: goto L_0881ACA4;
    case 496u: goto L_0881ACC0;
    case 497u: goto L_0881ACCC;
    case 498u: goto L_0881ACE8;
    case 499u: goto L_0881ACF4;
    case 500u: goto L_0881AD4C;
    case 501u: goto L_0881AD58;
    case 502u: goto L_0881AD74;
    case 503u: goto L_0881AE3C;
    case 504u: goto L_0881AE6C;
    case 505u: goto L_0881AE80;
    case 506u: goto L_0881AEC4;
    case 507u: goto L_0881AEE0;
    case 508u: goto L_0881AF4C;
    case 509u: goto L_0881AF58;
    case 510u: goto L_0881AF68;
    case 511u: goto L_0881AF74;
    case 512u: goto L_0881AF9C;
    case 513u: goto L_0881AFA4;
    case 514u: goto L_0881AFAC;
    case 515u: goto L_0881AFB4;
    case 516u: goto L_0881AFBC;
    case 517u: goto L_0881AFC4;
    case 518u: goto L_0881AFCC;
    case 519u: goto L_0881AFD4;
    case 520u: goto L_0881AFDC;
    case 521u: goto L_0881AFF0;
    case 522u: goto L_0881AFF4;
    case 523u: goto L_0881AFF8;
    case 524u: goto L_0881B000;
    case 525u: goto L_0881B004;
    case 526u: goto L_0881B008;
    case 527u: goto L_0881B010;
    case 528u: goto L_0881B014;
    case 529u: goto L_0881B018;
    case 530u: goto L_0881B020;
    case 531u: goto L_0881B024;
    case 532u: goto L_0881B048;
    case 533u: goto L_0881B064;
    case 534u: goto L_0881B078;
    case 535u: goto L_0881B084;
    case 536u: goto L_0881B090;
    case 537u: goto L_0881B098;
    case 538u: goto L_0881B0AC;
    case 539u: goto L_0881B0B4;
    case 540u: goto L_0881B0D8;
    case 541u: goto L_0881B0E4;
    case 542u: goto L_0881B0EC;
    case 543u: goto L_0881B0F0;
    case 544u: goto L_0881B100;
    case 545u: goto L_0881B110;
    case 546u: goto L_0881B12C;
    case 547u: goto L_0881B138;
    case 548u: goto L_0881B164;
    case 549u: goto L_0881B170;
    case 550u: goto L_0881B17C;
    case 551u: goto L_0881B1AC;
    case 552u: goto L_0881B1FC;
    case 553u: goto L_0881B210;
    case 554u: goto L_0881B224;
    case 555u: goto L_0881B230;
    case 556u: goto L_0881B24C;
    case 557u: goto L_0881B264;
    case 558u: goto L_0881B270;
    case 559u: goto L_0881B278;
    case 560u: goto L_0881B27C;
    case 561u: goto L_0881B29C;
    case 562u: goto L_0881B2C0;
    case 563u: goto L_0881B2E0;
    case 564u: goto L_0881B2F0;
    case 565u: goto L_0881B2FC;
    case 566u: goto L_0881B304;
    case 567u: goto L_0881B308;
    case 568u: goto L_0881B314;
    case 569u: goto L_0881B330;
    case 570u: goto L_0881B33C;
    case 571u: goto L_0881B348;
    case 572u: goto L_0881B34C;
    case 573u: goto L_0881B35C;
    case 574u: goto L_0881B364;
    case 575u: goto L_0881B384;
    case 576u: goto L_0881B394;
    case 577u: goto L_0881B3A0;
    case 578u: goto L_0881B3B4;
    case 579u: goto L_0881B3C0;
    case 580u: goto L_0881B408;
    case 581u: goto L_0881B414;
    case 582u: goto L_0881B424;
    case 583u: goto L_0881B430;
    case 584u: goto L_0881B440;
    case 585u: goto L_0881B44C;
    case 586u: goto L_0881B460;
    case 587u: goto L_0881B468;
    case 588u: goto L_0881B474;
    case 589u: goto L_0881B490;
    case 590u: goto L_0881B4AC;
    case 591u: goto L_0881B4B8;
    case 592u: goto L_0881B4C4;
    case 593u: goto L_0881B4C8;
    case 594u: goto L_0881B4D8;
    case 595u: goto L_0881B4E0;
    case 596u: goto L_0881B4F4;
    case 597u: goto L_0881B51C;
    case 598u: goto L_0881B540;
    case 599u: goto L_0881B548;
    case 600u: goto L_0881B564;
    case 601u: goto L_0881B56C;
    case 602u: goto L_0881B588;
    case 603u: goto L_0881B594;
    case 604u: goto L_0881B5A0;
    case 605u: goto L_0881B5A4;
    case 606u: goto L_0881B5B4;
    case 607u: goto L_0881B5CC;
    case 608u: goto L_0881B620;
    case 609u: goto L_0881B638;
    case 610u: goto L_0881B650;
    case 611u: goto L_0881B664;
    case 612u: goto L_0881B66C;
    case 613u: goto L_0881B684;
    case 614u: goto L_0881B69C;
    case 615u: goto L_0881B6D4;
    case 616u: goto L_0881B6F0;
    case 617u: goto L_0881B704;
    case 618u: goto L_0881B70C;
    case 619u: goto L_0881B718;
    case 620u: goto L_0881B71C;
    case 621u: goto L_0881B724;
    case 622u: goto L_0881B730;
    case 623u: goto L_0881B734;
    case 624u: goto L_0881B73C;
    case 625u: goto L_0881B748;
    case 626u: goto L_0881B74C;
    case 627u: goto L_0881B754;
    case 628u: goto L_0881B760;
    case 629u: goto L_0881B764;
    case 630u: goto L_0881B774;
    case 631u: goto L_0881B7B4;
    case 632u: goto L_0881B7CC;
    case 633u: goto L_0881B7E0;
    case 634u: goto L_0881B804;
    case 635u: goto L_0881B834;
    case 636u: goto L_0881B848;
    case 637u: goto L_0881B854;
    case 638u: goto L_0881B864;
    case 639u: goto L_0881B87C;
    case 640u: goto L_0881B898;
    case 641u: goto L_0881B89C;
    case 642u: goto L_0881B8A0;
    case 643u: goto L_0881B8A8;
    case 644u: goto L_0881B8B8;
    case 645u: goto L_0881B8D0;
    case 646u: goto L_0881B8EC;
    case 647u: goto L_0881B8F0;
    case 648u: goto L_0881B8F4;
    case 649u: goto L_0881B8FC;
    case 650u: goto L_0881B90C;
    case 651u: goto L_0881B924;
    case 652u: goto L_0881B940;
    case 653u: goto L_0881B944;
    case 654u: goto L_0881B948;
    case 655u: goto L_0881B950;
    case 656u: goto L_0881B960;
    case 657u: goto L_0881B978;
    case 658u: goto L_0881B994;
    case 659u: goto L_0881B998;
    case 660u: goto L_0881B99C;
    case 661u: goto L_0881B9A4;
    case 662u: goto L_0881B9B4;
    case 663u: goto L_0881B9CC;
    case 664u: goto L_0881B9E8;
    case 665u: goto L_0881B9EC;
    case 666u: goto L_0881B9F0;
    case 667u: goto L_0881B9F8;
    case 668u: goto L_0881BA08;
    case 669u: goto L_0881BA20;
    case 670u: goto L_0881BA3C;
    case 671u: goto L_0881BA40;
    case 672u: goto L_0881BA44;
    case 673u: goto L_0881BA4C;
    case 674u: goto L_0881BA5C;
    case 675u: goto L_0881BA74;
    case 676u: goto L_0881BA90;
    case 677u: goto L_0881BA94;
    case 678u: goto L_0881BA98;
    case 679u: goto L_0881BAA0;
    case 680u: goto L_0881BAB0;
    case 681u: goto L_0881BAC8;
    case 682u: goto L_0881BAE4;
    case 683u: goto L_0881BAE8;
    case 684u: goto L_0881BAEC;
    case 685u: goto L_0881BAF4;
    case 686u: goto L_0881BB00;
    case 687u: goto L_0881BB1C;
    case 688u: goto L_0881BC08;
    case 689u: goto L_0881BC1C;
    case 690u: goto L_0881BC28;
    case 691u: goto L_0881BCE8;
    case 692u: goto L_0881BCF4;
    case 693u: goto L_0881BDB4;
    case 694u: goto L_0881BDC0;
    case 695u: goto L_0881BE80;
    case 696u: goto L_0881BE8C;
    case 697u: goto L_0881BF4C;
    case 698u: goto L_0881BF58;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08818000:
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) >= 0;
    ctx.gpr[8] = (0u - ctx.gpr[8]);
      if (branch_taken) {
          goto L_08818010;
      }
      goto L_0881800C;
    }
L_0881800C:
    ctx.gpr[11] = (0u | 16u);
    goto L_08818010;
L_08818010:
    hot_regs.g2 = (static_cast<std::int32_t>(ctx.gpr[10]) < 17 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08818020;
      }
      goto L_0881801C;
    }
L_0881801C:
    ctx.gpr[10] = (0u | 0u);
    goto L_08818020;
L_08818020:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0881802C;
      }
      goto L_08818028;
    }
L_08818028:
    ctx.gpr[9] = (0u | 16u);
    goto L_0881802C;
L_0881802C:
    hot_regs.g2 = (static_cast<std::int32_t>(ctx.gpr[8]) < 17 ? 1u : 0u);
    if (hot_regs.g2 != 0u) {
    ctx.gpr[3] = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(0)));
        goto L_08818040;
    }
    goto L_08818038;
L_08818038:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[3] = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    goto L_08818040;
L_08818040:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    std::uint32_t g12 = ctx.gpr[12];
    g2 = (g11 << 4u);
    g12 = (0u + static_cast<std::uint32_t>(8092));
    g2 = (g11 + g2);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g3)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g12)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g3 = (g2 + g9);
    g12 = (g3 << 5u);
    g3 = (g3 << 2u);
    g3 = (g12 - g3);
    g12 = (ctx.lo);
    g12 = (g4 + g12);
    g3 = (g12 + g3);
    g3 = (g3 + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), g3);
    g3 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (g10 << 4u);
    g12 = (0u + static_cast<std::uint32_t>(8092));
    g10 = (g10 + ctx.gpr[13]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g3)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g12)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g3 = (g10 + g9);
    g12 = (g3 << 5u);
    g3 = (g3 << 2u);
    g3 = (g12 - g3);
    g12 = (ctx.lo);
    g12 = (g4 + g12);
    g3 = (g12 + g3);
    g3 = (g3 + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(4), g3);
    g3 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g12 = (0u + static_cast<std::uint32_t>(8092));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g3)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g12)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g2 = (g2 + g8);
    g3 = (g2 << 5u);
    g2 = (g2 << 2u);
    g2 = (g3 - g2);
    g3 = (ctx.lo);
    g3 = (g4 + g3);
    f14 = std::bit_cast<float>(g11);
    g2 = (g3 + g2);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    g2 = (g2 + static_cast<std::uint32_t>(20));
    f15 = std::bit_cast<float>(g9);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(8), g2);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    g2 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g3 = (0u + static_cast<std::uint32_t>(8092));
    f13 = f13 - f14;
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g2)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g3)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g8 = (g10 + g8);
    f12 = f12 - f15;
    g10 = (g8 << 5u);
    g8 = (g8 << 2u);
    g8 = (g10 - g8);
    g9 = (ctx.lo);
    g4 = (g4 + g9);
    g4 = (g4 + g8);
    g4 = (g4 + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(12), g4);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    ctx.gpr[3] = g3;
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    ctx.gpr[12] = g12;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08818130:
{
    float f0 = ctx.fpr[0];
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7760)));
    f0 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(f14) || std::isnan(f0)) && f14 == f0));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g5 = (17664u << 16u);
    ctx.fpr[0] = f0;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088181F4;
      }
      goto L_08818148;
    }
}
L_08818148:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    f14 = std::bit_cast<float>(g5);
    f12 = f12 + f14;
    g5 = (17352u << 16u);
    f13 = f13 + f14;
    f15 = std::bit_cast<float>(g5);
    g5 = (15616u << 16u);
    f16 = std::bit_cast<float>(g5);
    f12 = f12 + f15;
    { const float fs = f13; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    g5 = (16896u << 16u);
    { const float fs = f12; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f17 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f17));
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f16));
    g6 = (std::bit_cast<std::uint32_t>(f17));
    f18 = std::bit_cast<float>(g6);
    f18 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    g7 = (std::bit_cast<std::uint32_t>(f14));
    f15 = std::bit_cast<float>(g7);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    f16 = std::bit_cast<float>(g5);
    g5 = (16128u << 16u);
    { const float fs = f15; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f14 = std::bit_cast<float>(g5);
    { const float fs = f18; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f12 = f12 - f15;
    f16 = f13 - f16;
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f16; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f18 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) ^ 0x80000000u);
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f18));
    f17 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    f16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f16));
    ctx.fpr[19] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g7 = (std::bit_cast<std::uint32_t>(f15));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(f17));
    g7 = (0u - g7);
    g5 = (std::bit_cast<std::uint32_t>(f14));
    g6 = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    g5 = (0u - g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
      if (branch_taken) {
          goto L_088181FC;
      }
      goto L_088181EC;
    }
}
}
L_088181EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08818200;
      }
      goto L_088181F4;
    }
L_088181F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08818330;
      }
      goto L_088181FC;
    }
L_088181FC:
    ctx.gpr[8] = (0u | 16u);
    goto L_08818200;
L_08818200:
    ctx.gpr[9] = (static_cast<std::int32_t>(hot_regs.g7) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08818210;
      }
      goto L_0881820C;
    }
L_0881820C:
    hot_regs.g7 = (0u | 0u);
    goto L_08818210;
L_08818210:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g6) >= 0;
    // nop
      if (branch_taken) {
          goto L_0881821C;
      }
      goto L_08818218;
    }
L_08818218:
    hot_regs.g6 = (0u | 16u);
    goto L_0881821C;
L_0881821C:
    ctx.gpr[9] = (static_cast<std::int32_t>(hot_regs.g5) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881822C;
      }
      goto L_08818228;
    }
L_08818228:
    hot_regs.g5 = (0u | 0u);
    goto L_0881822C;
L_0881822C:
    ctx.gpr[9] = (ctx.gpr[8] << 4u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[10] = (hot_regs.g7 << 4u);
    hot_regs.g7 = (hot_regs.g7 + ctx.gpr[10]);
    hot_regs.f14 = std::bit_cast<float>(ctx.gpr[8]);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    hot_regs.f13 = hot_regs.f13 - hot_regs.f14;
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f15)));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f15;
    ctx.gpr[8] = (ctx.gpr[9] + hot_regs.g6);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (hot_regs.g4 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(17296));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[8]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<0u>());
    hot_regs.f14 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (16256u << 16u);
    hot_regs.f15 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[16] = hot_regs.f15 - hot_regs.f13;
    hot_regs.f15 = hot_regs.f15 - hot_regs.f12;
    { const float fs = ctx.fpr[16]; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.g6 = (hot_regs.g7 + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(17296));
    hot_regs.g6 = (aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g6);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    hot_regs.g6 = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[17] = std::bit_cast<float>(hot_regs.g6);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    { const float fs = hot_regs.f15; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    hot_regs.g6 = (ctx.gpr[9] + hot_regs.g5);
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(17296));
    hot_regs.g6 = (aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g6);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    hot_regs.g6 = (ctx.vfpu_scalar_bits_ct<0u>());
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g6);
    { const float fs = ctx.fpr[16]; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    ctx.fpr[0] = hot_regs.f14 + hot_regs.f15;
    hot_regs.g5 = (hot_regs.g7 + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(17296));
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g4);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<0u>());
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + hot_regs.f12;
    goto L_08818330;
L_08818330:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08818338:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-368));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24256)));
    f12 = f13 + f12;
    g5 = (16256u << 16u);
    g6 = (15820u << 16u);
    f13 = std::bit_cast<float>(g5);
    g5 = (g6 | 52429u);
    ctx.fpr[19] = std::bit_cast<float>(g5);
    g6 = (16776u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(0u);
    g5 = (0u | 16u);
    ctx.set_fpu_condition((f12 <= f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(336), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(340), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(344), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(348), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(352), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(356), ctx.gpr[21]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[16] = std::bit_cast<float>(g6);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0881838C;
      }
      goto L_08818388;
    }
}
}
L_08818388:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    goto L_0881838C;
L_0881838C:
{
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g7 = (16230u << 16u);
    g6 = (g6 & 4095u);
    g7 = (g7 | 26214u);
    f14 = std::bit_cast<float>(g6);
    f15 = std::bit_cast<float>(g7);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    { const bool branch_taken = static_cast<std::int32_t>(g6) >= 0;
    { const float fs = hot_regs.f12; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_088183BC;
      }
      goto L_088183B0;
    }
}
}
L_088183B0:
    hot_regs.g6 = (20352u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f14 = hot_regs.f14 + ctx.fpr[17];
    goto L_088183BC;
L_088183BC:
{
    float f14 = hot_regs.f14;
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g6 = (15049u << 16u);
    g6 = (g6 | 3670u);
    f17 = std::bit_cast<float>(g6);
    g7 = (16585u << 16u);
    { const float fs = f14; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    g7 = (g7 | 3670u);
    ctx.gpr[8] = (15692u << 16u);
    g6 = (0u | 0u);
    f17 = std::bit_cast<float>(g7);
    g7 = (ctx.gpr[8] | 52429u);
    f18 = std::bit_cast<float>(g7);
    g7 = (hot_regs.g29 | 0u);
    f18 = hot_regs.f15 + f18;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f14 = f14;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    goto L_088183F0;
}
}
L_088183F0:
{
    float f2 = ctx.fpr[2];
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    f2 = std::bit_cast<float>(g6);
    f2 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f2)));
    f2 = f2 / ctx.fpr[16];
    { const float fs = f2; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f2 = std::bit_cast<float>(0x7FC00000u); else f2 = fs * ft; }
    f2 = hot_regs.f14 + f2;
    g8 = (std::bit_cast<std::uint32_t>(f2));
    ctx.set_vfpu_scalar_bits_ct<0u>(g8);
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
    g8 = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[1] = std::bit_cast<float>(g8);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f2 = std::bit_cast<float>(0x7FC00000u); else f2 = fs * ft; }
    f2 = hot_regs.f15 + f2;
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f2));
    g6 = (g6 + static_cast<std::uint32_t>(1));
    g8 = (static_cast<std::int32_t>(g6) < 17 ? 1u : 0u);
    { const bool branch_taken = g8 != 0u;
    g7 = (g7 + static_cast<std::uint32_t>(4));
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.fpr[2] = f2;
      if (branch_taken) {
          goto L_088183F0;
      }
      goto L_0881843C;
    }
}
}
L_0881843C:
{
    float f12 = hot_regs.f12;
    float f17 = ctx.fpr[17];
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    { const float fs = f12; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g6 = (15769u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(f17));
    g6 = (g6 | 39322u);
    f17 = std::bit_cast<float>(g6);
    g7 = (16201u << 16u);
    f12 = f12 + f17;
    g7 = (g7 | 3670u);
    g6 = (0u | 0u);
    f17 = std::bit_cast<float>(g7);
    g7 = (g29 | 0u);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
    ctx.fpr[17] = f17;
    goto L_0881846C;
}
}
L_0881846C:
{
    float f13 = hot_regs.f13;
    float f18 = ctx.fpr[18];
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    f18 = std::bit_cast<float>(g6);
    f18 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    { const float fs = f18; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    f18 = hot_regs.f14 + f18;
    g8 = (std::bit_cast<std::uint32_t>(f18));
    ctx.set_vfpu_scalar_bits_ct<0u>(g8);
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
    g8 = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[2] = std::bit_cast<float>(g8);
    { const float fs = ctx.fpr[2]; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    { const float fs = f18; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(f18));
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) ^ 0x80000000u);
    g6 = (g6 + static_cast<std::uint32_t>(1));
    g8 = (static_cast<std::int32_t>(g6) < 33 ? 1u : 0u);
    { const bool branch_taken = g8 != 0u;
    g7 = (g7 + static_cast<std::uint32_t>(4));
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    hot_regs.f13 = f13;
    ctx.fpr[18] = f18;
      if (branch_taken) {
          goto L_0881846C;
      }
      goto L_088184B8;
    }
}
}
L_088184B8:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g6 = (16841u << 16u);
    g6 = (g6 | 4059u);
    f12 = std::bit_cast<float>(g6);
    f12 = f14 + f12;
    g6 = (std::bit_cast<std::uint32_t>(f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(g6);
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
    g6 = (ctx.vfpu_scalar_bits_ct<1u>());
    f14 = std::bit_cast<float>(g6);
    f12 = hot_regs.f15 + ctx.fpr[19];
    { const float fs = f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    g6 = (0u | 1u);
    g7 = (16457u << 16u);
    g7 = (g7 | 4059u);
    f12 = std::bit_cast<float>(g7);
    g7 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    goto L_08818500;
}
}
L_08818500:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    f13 = std::bit_cast<float>(g6);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const float fs = f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = f13 / ctx.fpr[16];
    g8 = (std::bit_cast<std::uint32_t>(f13));
    ctx.set_vfpu_scalar_bits_ct<0u>(g8);
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
    g8 = (ctx.vfpu_scalar_bits_ct<1u>());
    hot_regs.f15 = std::bit_cast<float>(g8);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(hot_regs.f15));
    g6 = (g6 + static_cast<std::uint32_t>(1));
    g8 = (static_cast<std::int32_t>(g6) < 16 ? 1u : 0u);
    { const bool branch_taken = g8 != 0u;
    g7 = (g7 + static_cast<std::uint32_t>(4));
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08818500;
      }
      goto L_08818540;
    }
}
}
L_08818540:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g6 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g7 = (0u + static_cast<std::uint32_t>(8092));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g7)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    g7 = (0u | 0u);
    ctx.gpr[10] = (g29 | 0u);
    g6 = (ctx.lo);
    g2 = (g4 + g6);
    g2 = (g2 + static_cast<std::uint32_t>(20));
    ctx.gpr[11] = (g4 + static_cast<std::uint32_t>(17296));
    hot_regs.g2 = g2;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_0881856C;
}
L_0881856C:
    ctx.gpr[8] = (0u | 0u);
    goto L_08818570;
L_08818570:
    hot_regs.g6 = (ctx.gpr[8] | 0u);
    { const bool branch_taken = hot_regs.g6 != hot_regs.g5;
    ctx.gpr[9] = (hot_regs.g7 | 0u);
      if (branch_taken) {
          goto L_08818580;
      }
      goto L_0881857C;
    }
L_0881857C:
    hot_regs.g6 = (0u | 0u);
    goto L_08818580;
L_08818580:
    { const bool branch_taken = hot_regs.g7 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0881858C;
      }
      goto L_08818588;
    }
L_08818588:
    ctx.gpr[9] = (0u | 0u);
    goto L_0881858C;
L_0881858C:
    ctx.gpr[3] = (hot_regs.g6 - ctx.gpr[9]);
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(17));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (hot_regs.g29 + ctx.gpr[9]);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(200)));
    hot_regs.g6 = (hot_regs.g6 << 2u);
    hot_regs.g6 = (hot_regs.g29 + hot_regs.g6);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(200)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g6);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    hot_regs.g6 = (ctx.vfpu_scalar_bits_ct<64u>());
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g6));
    ctx.gpr[9] = (ctx.gpr[3] << 2u);
    ctx.gpr[9] = (hot_regs.g29 + ctx.gpr[9]);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(68)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g2 = (hot_regs.g2 + static_cast<std::uint32_t>(28));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(2));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08818570;
      }
      goto L_08818604;
    }
L_08818604:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g7 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(g7) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_0881856C;
      }
      goto L_08818614;
    }
}
L_08818614:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    g7 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g8 = (0u + static_cast<std::uint32_t>(8092));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g7)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g8)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g7 = (16512u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g7);
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(268), static_cast<std::uint16_t>(hot_regs.g6));
    g8 = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    g7 = (ctx.lo);
    g4 = (g4 + g7);
    g4 = (g4 + static_cast<std::uint32_t>(20));
    ctx.gpr[10] = (g29 + static_cast<std::uint32_t>(272));
    ctx.gpr[11] = (g29 + static_cast<std::uint32_t>(288));
    hot_regs.g2 = (g29 + static_cast<std::uint32_t>(304));
    g7 = (0u | 0u);
    g8 = (g4 + g8);
    ctx.gpr[9] = (g4 + static_cast<std::uint32_t>(448));
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_08818658;
}
L_08818658:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g12 = ctx.gpr[12];
    std::uint32_t g13 = ctx.gpr[13];
    std::uint32_t g14 = ctx.gpr[14];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g21 = ctx.gpr[21];
    g12 = (g7 << 5u);
    g13 = (g7 << 2u);
    g13 = (g12 - g13);
    g12 = (g4 + g13);
    g19 = (g4 + g13);
    g13 = (g7 << 5u);
    ctx.gpr[15] = (g7 << 2u);
    g13 = (g13 - ctx.gpr[15]);
    g14 = (0u | 0u);
    ctx.gpr[24] = (g19 + static_cast<std::uint32_t>(-28));
    ctx.gpr[16] = (g19 + static_cast<std::uint32_t>(28));
    g21 = (g4 + g13);
    ctx.gpr[3] = (0u | 0u);
    g14 = (g4 + g14);
    ctx.gpr[17] = (g4 + static_cast<std::uint32_t>(7616));
    g19 = (g19 + static_cast<std::uint32_t>(-476));
    g21 = (g21 + static_cast<std::uint32_t>(476));
    ctx.gpr[12] = g12;
    ctx.gpr[13] = g13;
    ctx.gpr[14] = g14;
    ctx.gpr[19] = g19;
    ctx.gpr[21] = g21;
    goto L_0881869C;
}
L_0881869C:
    { const bool branch_taken = ctx.gpr[3] != hot_regs.g5;
    ctx.gpr[13] = (ctx.gpr[12] | 0u);
      if (branch_taken) {
          goto L_088186C0;
      }
      goto L_088186A4;
    }
L_088186A4:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g13 = ctx.gpr[13];
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g13 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g13 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g13 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_088187C0;
      }
      goto L_088186C0;
    }
}
}
L_088186C0:
    { const bool branch_taken = hot_regs.g6 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088186E4;
      }
      goto L_088186C8;
    }
L_088186C8:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g13 = ctx.gpr[13];
    std::uint32_t g14 = ctx.gpr[14];
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g14 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g13 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g14 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g13 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g14 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g13 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_088187C0;
      }
      goto L_088186E4;
    }
}
}
L_088186E4:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088186F4;
      }
      goto L_088186EC;
    }
L_088186EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[15] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_088186F8;
      }
      goto L_088186F4;
    }
L_088186F4:
    ctx.gpr[15] = (ctx.gpr[24] | 0u);
    goto L_088186F8;
L_088186F8:
    { const bool branch_taken = ctx.gpr[3] != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08818708;
      }
      goto L_08818700;
    }
L_08818700:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[25] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_0881870C;
      }
      goto L_08818708;
    }
L_08818708:
    ctx.gpr[25] = (ctx.gpr[16] | 0u);
    goto L_0881870C;
L_0881870C:
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          goto L_0881871C;
      }
      goto L_08818714;
    }
L_08818714:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08818720;
      }
      goto L_0881871C;
    }
L_0881871C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08818720;
L_08818720:
    { const bool branch_taken = hot_regs.g6 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08818730;
      }
      goto L_08818728;
    }
L_08818728:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[14] | 0u);
      if (branch_taken) {
          goto L_08818734;
      }
      goto L_08818730;
    }
L_08818730:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_08818734;
L_08818734:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(24)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    hot_regs.f14 = hot_regs.f13 - hot_regs.f14;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    hot_regs.f15 = hot_regs.f13 - hot_regs.f15;
    hot_regs.f14 = hot_regs.f14 - hot_regs.f15;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(24)));
    hot_regs.f14 = hot_regs.f13 - hot_regs.f14;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    hot_regs.f13 = hot_regs.f13 - ctx.fpr[16];
    hot_regs.f13 = hot_regs.f14 - hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(hot_regs.f13));
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(304)));
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(312)));
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f13));
    goto L_088187C0;
L_088187C0:
{
    std::uint32_t g3 = ctx.gpr[3];
    g3 = (g3 + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(28));
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(28));
    ctx.gpr[24] = (ctx.gpr[24] + static_cast<std::uint32_t>(28));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
    ctx.gpr[13] = (static_cast<std::int32_t>(g3) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(28));
    ctx.gpr[3] = g3;
      if (branch_taken) {
          goto L_0881869C;
      }
      goto L_088187E8;
    }
}
L_088187E8:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(17));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(476));
    ctx.gpr[3] = (static_cast<std::int32_t>(g6) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(476));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08818658;
      }
      goto L_08818800;
    }
}
L_08818800:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(336)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(340)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(344)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(348)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(352)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(356)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08818820:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(25))))));
    g5 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), 0u);
    g5 = (hot_regs.g6 & g5);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(g5));
    jump_target = hot_regs.g31;
    hot_regs.g2 = (g4 | 0u);
    local_pc = jump_target;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08818848:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(260));
    hot_regs.g7 = (2178u << 16u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 5u);
    hot_regs.g6 = (0u | 28u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08818878u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-30688));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08818878u) goto L_08818878;
    return;
L_08818878:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08818888u);
    hot_regs.g6 = (0u | 140u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08818888u) goto L_08818888;
    return;
L_08818888:
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(12));
    goto L_08818894;
L_08818894:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), g4);
    g6 = (g6 + static_cast<std::uint32_t>(1));
    g5 = (g5 + static_cast<std::uint32_t>(8));
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < 31 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(8));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08818894;
      }
      goto L_088188AC;
    }
}
L_088188AC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(4), 0u);
    g4 = (g16 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(372), g4);
    g4 = (0u | 32u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(376), g4);
    hot_regs.g2 = (g16 | 0u);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
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
L_088188D8:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5976)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (2235u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 != 0u;
    g16 = (g16 + static_cast<std::uint32_t>(19904));
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08818904;
      }
      goto L_088188F4;
    }
}
L_088188F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5976), g4);
    hot_regs.g31 = (0x08818904u);
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    goto L_08818848;
}
L_08818904:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[16] | 0u);
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
L_08818918:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    ctx.gpr[8] = (g29 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x08818944u);
    hot_regs.g7 = (g29 | 0u);
    hot_regs.g29 = g29;
    goto L_08818B84;
}
L_08818944:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08818968;
      }
      goto L_0881894C;
    }
L_0881894C:
    hot_regs.g31 = (0x08818954u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    goto L_088197D8;
L_08818954:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g5 = (ctx.gpr[17] << 5u);
      if (branch_taken) {
          goto L_08818970;
      }
      goto L_08818960;
    }
L_08818960:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_0881899C;
      }
      goto L_08818968;
    }
L_08818968:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_0881899C;
      }
      goto L_08818970;
    }
L_08818970:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (ctx.gpr[17] << 2u);
    g5 = (g5 - g6);
    g5 = (ctx.gpr[18] + g5);
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g6);
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(264)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(260), g4);
    g4 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(264), g4);
    hot_regs.g2 = (0u | 1u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_0881899C;
}
L_0881899C:
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
L_088189B4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (g4 | 0u);
    g4 = (g5 << 5u);
    g5 = (g5 << 2u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    g17 = (g4 - g5);
    g17 = (g16 + g17);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08818A04;
      }
      goto L_088189E8;
    }
}
L_088189E8:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x088189F8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_0881980C;
L_088189F8:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088189E8;
      }
      goto L_08818A04;
    }
L_08818A04:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(260), 0u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(264), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08818A24:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    ctx.gpr[8] = (g29 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x08818A48u);
    hot_regs.g7 = (g29 | 0u);
    hot_regs.g29 = g29;
    goto L_08818B84;
}
L_08818A48:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08818A94;
      }
      goto L_08818A50;
    }
L_08818A50:
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (g16 << 5u);
    ctx.gpr[8] = (g16 << 2u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    g16 = (hot_regs.g7 - ctx.gpr[8]);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    g16 = (ctx.gpr[17] + g16);
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08818A7C;
      }
      goto L_08818A70;
    }
}
L_08818A70:
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08818A80;
      }
      goto L_08818A7C;
    }
L_08818A7C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), hot_regs.g4);
    goto L_08818A80;
L_08818A80:
    hot_regs.g31 = (0x08818A88u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_0881980C;
L_08818A88:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(264)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(264), g4);
    hot_regs.g4 = g4;
    goto L_08818A94;
}
L_08818A94:
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
L_08818AA8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g29 = g29;
    goto L_08818AC8;
}
L_08818AC8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08818AD8u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    goto L_08818A24;
L_08818AD8:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g18) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08818AC8;
      }
      goto L_08818AE8;
    }
}
L_08818AE8:
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
L_08818B00:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g7 = (g5 << 5u);
    g5 = (g5 << 2u);
    g4 = (g4 + static_cast<std::uint32_t>(260));
    g5 = (hot_regs.g7 - g5);
    g4 = (g4 + g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = g5 == hot_regs.g6;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08818B4C;
      }
      goto L_08818B20;
    }
}
L_08818B20:
    hot_regs.g7 = (hot_regs.g6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g5 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08818B3C;
      }
      goto L_08818B2C;
    }
L_08818B2C:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(hot_regs.g6) ? 1u : 0u);
      if (branch_taken) {
          goto L_08818B58;
      }
      goto L_08818B3C;
    }
L_08818B3C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08818B7C;
      }
      goto L_08818B4C;
    }
}
L_08818B4C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08818B7C;
      }
      goto L_08818B58;
    }
}
L_08818B58:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08818B78;
      }
      goto L_08818B60;
    }
L_08818B60:
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08818B78;
      }
      goto L_08818B68;
    }
L_08818B68:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(hot_regs.g6) ? 1u : 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08818B58;
      }
      goto L_08818B78;
    }
}
L_08818B78:
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(4)));
    goto L_08818B7C;
L_08818B7C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08818B84:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[9] = (g5 << 5u);
    g5 = (g5 << 2u);
    g5 = (ctx.gpr[9] - g5);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(0), 0u);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08818BC0;
      }
      goto L_08818BA4;
    }
}
L_08818BA4:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08818BC8;
      }
      goto L_08818BB0;
    }
L_08818BB0:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 != 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08818BA4;
      }
      goto L_08818BC0;
    }
}
L_08818BC0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08818BCC;
      }
      goto L_08818BC8;
    }
L_08818BC8:
    hot_regs.g2 = (0u | 1u);
    goto L_08818BCC;
L_08818BCC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08818BD4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    hot_regs.g7 = (g5 << 5u);
    g5 = (g5 << 2u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    g17 = (hot_regs.g7 - g5);
    g17 = (hot_regs.g4 + g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g18);
    g18 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    { const bool branch_taken = g18 == 0u;
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08818CE8;
      }
      goto L_08818C18;
    }
}
L_08818C18:
    ctx.gpr[20] = (0u | 58u);
    ctx.gpr[21] = (0u | 57u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[23] = (0u | 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08818C2C;
L_08818C2C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08818CDC;
      }
      goto L_08818C48;
    }
}
L_08818C48:
    hot_regs.g31 = (0x08818C50u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08818C50u) goto L_08818C50;
    return;
L_08818C50:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(460)));
    { const bool branch_taken = hot_regs.g2 != 0u;
    g6 = (g6 & ctx.gpr[22]);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08818C80;
      }
      goto L_08818C5C;
    }
}
L_08818C5C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[20];
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08818C70;
      }
      goto L_08818C68;
    }
L_08818C68:
    { const bool branch_taken = hot_regs.g5 != ctx.gpr[21];
    hot_regs.g4 = (hot_regs.g4 & 255u);
      if (branch_taken) {
          goto L_08818C78;
      }
      goto L_08818C70;
    }
L_08818C70:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08818C78;
}
L_08818C78:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08818C8C;
      }
      goto L_08818C80;
    }
L_08818C80:
    hot_regs.g4 = (hot_regs.g6 | 256u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), hot_regs.g4);
      if (branch_taken) {
          goto L_08818CDC;
      }
      goto L_08818C8C;
    }
L_08818C8C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[23];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), hot_regs.g6);
      if (branch_taken) {
          goto L_08818CD0;
      }
      goto L_08818C94;
    }
L_08818C94:
    hot_regs.g31 = (0x08818C9Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08818C9Cu) goto L_08818C9C;
    return;
L_08818C9C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08818CBC;
      }
      goto L_08818CA4;
    }
L_08818CA4:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08818CB4u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08818CB4u) goto L_08818CB4;
    return;
L_08818CB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08818CC8;
      }
      goto L_08818CBC;
    }
L_08818CBC:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08818CC8u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08818CC8u) goto L_08818CC8;
    return;
L_08818CC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08818CDC;
      }
      goto L_08818CD0;
    }
L_08818CD0:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08818CDCu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08818CDCu) goto L_08818CDC;
    return;
L_08818CDC:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    if (g18 != 0u) {
    ctx.gpr[19] = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = g18;
        goto L_08818C2C;
    }
    goto L_08818CE8;
}
L_08818CE8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(285))))));
    g4 = (g4 | 1u);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(285), static_cast<std::uint8_t>(g4));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
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
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08818D20:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (g5 << 5u);
    g5 = (g5 << 2u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g18);
    g18 = (ctx.gpr[8] - g5);
    g18 = (hot_regs.g4 + g18);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g19);
    g19 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    { const bool branch_taken = g19 == 0u;
    ctx.gpr[17] = (hot_regs.g7 | 0u);
    hot_regs.g5 = g5;
    ctx.gpr[18] = g18;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08818DF8;
      }
      goto L_08818D68;
    }
}
L_08818D68:
    ctx.gpr[21] = (0u | 58u);
    ctx.gpr[22] = (0u | 57u);
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_08818D78;
L_08818D78:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08818DEC;
      }
      goto L_08818D94;
    }
}
L_08818D94:
    hot_regs.g31 = (0x08818D9Cu);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08818D9Cu) goto L_08818D9C;
    return;
L_08818D9C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(460)));
    { const bool branch_taken = hot_regs.g2 != 0u;
    g6 = (g6 & ctx.gpr[23]);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08818DCC;
      }
      goto L_08818DA8;
    }
}
L_08818DA8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[21];
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08818DBC;
      }
      goto L_08818DB4;
    }
L_08818DB4:
    { const bool branch_taken = hot_regs.g5 != ctx.gpr[22];
    hot_regs.g4 = (hot_regs.g4 & 255u);
      if (branch_taken) {
          goto L_08818DC4;
      }
      goto L_08818DBC;
    }
L_08818DBC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08818DC4;
}
L_08818DC4:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08818DD8;
      }
      goto L_08818DCC;
    }
L_08818DCC:
    hot_regs.g4 = (hot_regs.g6 | 256u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(460), hot_regs.g4);
      if (branch_taken) {
          goto L_08818DEC;
      }
      goto L_08818DD8;
    }
L_08818DD8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(460), hot_regs.g6);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08818DECu);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08818DECu) goto L_08818DEC;
    return;
L_08818DEC:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(0)));
    if (g19 != 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = g19;
        goto L_08818D78;
    }
    goto L_08818DF8;
}
L_08818DF8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g18 + static_cast<std::uint32_t>(285))))));
    g4 = (g4 | 1u);
    aot_mem.aot_store8(g18 + static_cast<std::uint32_t>(285), static_cast<std::uint8_t>(g4));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    g18 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08818E30:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    ctx.gpr[8] = (g5 << 5u);
    g5 = (g5 << 2u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g23);
    g23 = (ctx.gpr[8] - g5);
    g23 = (hot_regs.g4 + g23);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g22);
    g22 = (aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    { const bool branch_taken = g22 == 0u;
    ctx.gpr[16] = (hot_regs.g7 | 0u);
    hot_regs.g5 = g5;
    ctx.gpr[22] = g22;
    ctx.gpr[23] = g23;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08818F24;
      }
      goto L_08818E78;
    }
}
L_08818E78:
    ctx.gpr[20] = (0u | 58u);
    ctx.gpr[19] = (0u | 57u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-257));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    goto L_08818E88;
L_08818E88:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08818F18;
      }
      goto L_08818EA4;
    }
}
L_08818EA4:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08818EB0u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08818EB0u) goto L_08818EB0;
    return;
L_08818EB0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08818EE0;
      }
      goto L_08818EB8;
    }
L_08818EB8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[20];
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08818ED0;
      }
      goto L_08818EC4;
    }
L_08818EC4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = hot_regs.g5 != ctx.gpr[19];
    hot_regs.g4 = (hot_regs.g4 & 255u);
      if (branch_taken) {
          goto L_08818ED8;
      }
      goto L_08818ED0;
    }
L_08818ED0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08818ED8;
}
L_08818ED8:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08818EF4;
      }
      goto L_08818EE0;
    }
L_08818EE0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(460)));
    g4 = (g4 & ctx.gpr[18]);
    g4 = (g4 | 256u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(460), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08818F18;
      }
      goto L_08818EF4;
    }
}
L_08818EF4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(460)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(460), hot_regs.g4);
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
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08818F18u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 661u, 0x08ACDF58u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08818F18u) goto L_08818F18;
    return;
L_08818F18:
{
    std::uint32_t g22 = ctx.gpr[22];
    g22 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(0)));
    if (g22 != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = g22;
        goto L_08818E88;
    }
    goto L_08818F24;
}
L_08818F24:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g23 + static_cast<std::uint32_t>(285))))));
    g4 = (g4 | 1u);
    aot_mem.aot_store8(g23 + static_cast<std::uint32_t>(285), static_cast<std::uint8_t>(g4));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    g23 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[23] = g23;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08818F5C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    ctx.gpr[8] = (g5 << 5u);
    g5 = (g5 << 2u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g23);
    g23 = (ctx.gpr[8] - g5);
    g23 = (hot_regs.g4 + g23);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g22);
    g22 = (aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), hot_regs.g31);
    { const bool branch_taken = g22 == 0u;
    ctx.gpr[16] = (hot_regs.g7 | 0u);
    hot_regs.g5 = g5;
    ctx.gpr[22] = g22;
    ctx.gpr[23] = g23;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08819058;
      }
      goto L_08818FAC;
    }
}
L_08818FAC:
    ctx.gpr[20] = (0u | 58u);
    ctx.gpr[19] = (0u | 57u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-257));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    goto L_08818FBC;
L_08818FBC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0881904C;
      }
      goto L_08818FD8;
    }
}
L_08818FD8:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08818FE4u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08818FE4u) goto L_08818FE4;
    return;
L_08818FE4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08819014;
      }
      goto L_08818FEC;
    }
L_08818FEC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[20];
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08819004;
      }
      goto L_08818FF8;
    }
L_08818FF8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = hot_regs.g5 != ctx.gpr[19];
    hot_regs.g4 = (hot_regs.g4 & 255u);
      if (branch_taken) {
          goto L_0881900C;
      }
      goto L_08819004;
    }
L_08819004:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_0881900C;
}
L_0881900C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08819024;
      }
      goto L_08819014;
    }
L_08819014:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(460)));
    g4 = (g4 & ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(460), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0881904C;
      }
      goto L_08819024;
    }
}
L_08819024:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(460)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(460), hot_regs.g4);
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
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x0881904Cu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 736u, 0x08ACE418u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881904Cu) goto L_0881904C;
    return;
L_0881904C:
{
    std::uint32_t g22 = ctx.gpr[22];
    g22 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(0)));
    if (g22 != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = g22;
        goto L_08818FBC;
    }
    goto L_08819058;
}
L_08819058:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g23 + static_cast<std::uint32_t>(285))))));
    g4 = (g4 | 1u);
    aot_mem.aot_store8(g23 + static_cast<std::uint32_t>(285), static_cast<std::uint8_t>(g4));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    g23 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[23] = g23;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08819094:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (g5 << 5u);
    g5 = (g5 << 2u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g19);
    g19 = (ctx.gpr[9] - g5);
    g19 = (hot_regs.g4 + g19);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g18);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g20);
    g17 = (hot_regs.g7 << 16u);
    g18 = (ctx.gpr[8] << 16u);
    g20 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(260)));
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 16u));
    g18 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g18) >> 16u));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), hot_regs.g31);
    { const bool branch_taken = g20 == 0u;
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
    ctx.gpr[19] = g19;
    ctx.gpr[20] = g20;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08819180;
      }
      goto L_088190EC;
    }
}
L_088190EC:
    ctx.gpr[22] = (0u | 58u);
    ctx.gpr[23] = (0u | 57u);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_088190FC;
L_088190FC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08819174;
      }
      goto L_08819118;
    }
}
L_08819118:
    hot_regs.g31 = (0x08819120u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08819120u) goto L_08819120;
    return;
L_08819120:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(460)));
    { const bool branch_taken = hot_regs.g2 != 0u;
    g6 = (g6 & ctx.gpr[30]);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08819150;
      }
      goto L_0881912C;
    }
}
L_0881912C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[22];
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08819140;
      }
      goto L_08819138;
    }
L_08819138:
    { const bool branch_taken = hot_regs.g5 != ctx.gpr[23];
    hot_regs.g4 = (hot_regs.g4 & 255u);
      if (branch_taken) {
          goto L_08819148;
      }
      goto L_08819140;
    }
L_08819140:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08819148;
}
L_08819148:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0881915C;
      }
      goto L_08819150;
    }
L_08819150:
    hot_regs.g4 = (hot_regs.g6 | 256u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(460), hot_regs.g4);
      if (branch_taken) {
          goto L_08819174;
      }
      goto L_0881915C;
    }
L_0881915C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(460), hot_regs.g6);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08819174u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 983u, 0x08AC7A58u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08819174u) goto L_08819174;
    return;
L_08819174:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(0)));
    if (g20 != 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = g20;
        goto L_088190FC;
    }
    goto L_08819180;
}
L_08819180:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(285))))));
    g4 = (g4 | 1u);
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(285), static_cast<std::uint8_t>(g4));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    g19 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088191BC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g7 = (g5 << 5u);
    g5 = (g5 << 2u);
    g5 = (hot_regs.g7 - g5);
    g4 = (g4 + g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    g17 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = g17 == 0u;
    ctx.gpr[16] = (hot_regs.g6 << 24u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08819230;
      }
      goto L_088191EC;
    }
}
L_088191EC:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 24u));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_088191F4;
L_088191F4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 14u);
    g5 = (g5 ^ 6u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08819224;
      }
      goto L_08819210;
    }
}
L_08819210:
    hot_regs.g31 = (0x08819218u);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 899u, 0x0890B900u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08819218u) goto L_08819218;
    return;
L_08819218:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08819224u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08819224u) goto L_08819224;
    return;
L_08819224:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    if (g17 != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = g17;
        goto L_088191F4;
    }
    goto L_08819230;
}
L_08819230:
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
L_08819248:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g6 = (g5 << 5u);
    g5 = (g5 << 2u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g18);
    g18 = (hot_regs.g6 - g5);
    g18 = (hot_regs.g4 + g18);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    g17 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = g17 == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-257));
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088192B4;
      }
      goto L_08819278;
    }
}
L_08819278:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_0881927C;
L_0881927C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 14u);
    g5 = (g5 ^ 6u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088192A8;
      }
      goto L_08819298;
    }
}
L_08819298:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(460)));
    hot_regs.g6 = (hot_regs.g6 & ctx.gpr[16]);
    hot_regs.g31 = (0x088192A8u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(460), hot_regs.g6);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088192A8u) goto L_088192A8;
    return;
L_088192A8:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    if (g17 != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = g17;
        goto L_0881927C;
    }
    goto L_088192B4;
}
L_088192B4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g18 + static_cast<std::uint32_t>(285))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store8(g18 + static_cast<std::uint32_t>(285), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(276), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    g18 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088192E0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (g5 << 5u);
    g5 = (g5 << 2u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g18);
    g18 = (ctx.gpr[8] - g5);
    g18 = (hot_regs.g4 + g18);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g19);
    g19 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    { const bool branch_taken = g19 == 0u;
    ctx.gpr[17] = (hot_regs.g7 | 0u);
    hot_regs.g5 = g5;
    ctx.gpr[18] = g18;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088193C4;
      }
      goto L_08819328;
    }
}
L_08819328:
    ctx.gpr[21] = (0u | 58u);
    ctx.gpr[22] = (0u | 57u);
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_08819338;
L_08819338:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088193B8;
      }
      goto L_08819354;
    }
}
L_08819354:
    hot_regs.g31 = (0x0881935Cu);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881935Cu) goto L_0881935C;
    return;
L_0881935C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(460)));
    { const bool branch_taken = hot_regs.g2 != 0u;
    g6 = (g6 & ctx.gpr[23]);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0881938C;
      }
      goto L_08819368;
    }
}
L_08819368:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[21];
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_0881937C;
      }
      goto L_08819374;
    }
L_08819374:
    { const bool branch_taken = hot_regs.g5 != ctx.gpr[22];
    hot_regs.g4 = (hot_regs.g4 & 255u);
      if (branch_taken) {
          goto L_08819384;
      }
      goto L_0881937C;
    }
L_0881937C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08819384;
}
L_08819384:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08819398;
      }
      goto L_0881938C;
    }
L_0881938C:
    hot_regs.g4 = (hot_regs.g6 | 256u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(460), hot_regs.g4);
      if (branch_taken) {
          goto L_088193B8;
      }
      goto L_08819398;
    }
L_08819398:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(460), hot_regs.g6);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (0u | 15u);
    hot_regs.g31 = (0x088193ACu);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088193ACu) goto L_088193AC;
    return;
L_088193AC:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x088193B8u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 391u, 0x08AC5410u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088193B8u) goto L_088193B8;
    return;
L_088193B8:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(0)));
    if (g19 != 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = g19;
        goto L_08819338;
    }
    goto L_088193C4;
}
L_088193C4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g18 + static_cast<std::uint32_t>(285))))));
    g4 = (g4 | 1u);
    aot_mem.aot_store8(g18 + static_cast<std::uint32_t>(285), static_cast<std::uint8_t>(g4));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    g18 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088193FC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (g5 << 5u);
    g5 = (g5 << 2u);
    g5 = (ctx.gpr[8] - g5);
    g4 = (g4 + g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g22);
    g22 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    { const bool branch_taken = g22 == 0u;
    ctx.gpr[16] = (hot_regs.g7 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[22] = g22;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088194F0;
      }
      goto L_08819448;
    }
}
L_08819448:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (15u << 16u);
    ctx.gpr[20] = (0u | 16u);
    ctx.gpr[19] = (0u | 17u);
    g18 = (g18 + static_cast<std::uint32_t>(16959));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = g18;
    goto L_0881945C;
}
L_0881945C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088194E4;
      }
      goto L_08819478;
    }
}
L_08819478:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088194E4;
      }
      goto L_08819484;
    }
L_08819484:
    hot_regs.g31 = (0x0881948Cu);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881948Cu) goto L_0881948C;
    return;
L_0881948C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088194E4;
      }
      goto L_08819494;
    }
L_08819494:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088194E4;
      }
      goto L_088194A0;
    }
L_088194A0:
    hot_regs.g31 = (0x088194A8u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088194A8u) goto L_088194A8;
    return;
L_088194A8:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088194E4;
      }
      goto L_088194B0;
    }
L_088194B0:
    hot_regs.g31 = (0x088194B8u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 899u, 0x0890B900u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088194B8u) goto L_088194B8;
    return;
L_088194B8:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088194C4u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 885u, 0x0890FF54u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088194C4u) goto L_088194C4;
    return;
L_088194C4:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    hot_regs.g31 = (0x088194E4u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 152u, 0x0891CA20u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088194E4u) goto L_088194E4;
    return;
L_088194E4:
{
    std::uint32_t g22 = ctx.gpr[22];
    g22 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(0)));
    if (g22 != 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = g22;
        goto L_0881945C;
    }
    goto L_088194F0;
}
L_088194F0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0881951C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g6 = (g5 << 5u);
    g5 = (g5 << 2u);
    g5 = (hot_regs.g6 - g5);
    g4 = (g4 + g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g18);
    g18 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = g18 == 0u;
    ctx.gpr[16] = (0u | 11u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088195A4;
      }
      goto L_0881954C;
    }
}
L_0881954C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08819550;
L_08819550:
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
          goto L_08819598;
      }
      goto L_0881956C;
    }
}
L_0881956C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08819598;
      }
      goto L_08819578;
    }
L_08819578:
    hot_regs.g31 = (0x08819580u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08819580u) goto L_08819580;
    return;
L_08819580:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08819598;
      }
      goto L_08819588;
    }
L_08819588:
    hot_regs.g31 = (0x08819590u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08819590u) goto L_08819590;
    return;
L_08819590:
    hot_regs.g31 = (0x08819598u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 829u, 0x0890B488u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08819598u) goto L_08819598;
    return;
L_08819598:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    if (g18 != 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = g18;
        goto L_08819550;
    }
    goto L_088195A4;
}
L_088195A4:
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
L_088195BC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    ctx.gpr[8] = (g5 << 5u);
    g5 = (g5 << 2u);
    g5 = (ctx.gpr[8] - g5);
    g4 = (g4 + g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(285))))));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(276), hot_regs.g7);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(284), static_cast<std::uint8_t>(g6));
    g6 = (0u + static_cast<std::uint32_t>(-2));
    g5 = (g5 & g6);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(285), static_cast<std::uint8_t>(g5));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(hot_regs.f12));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088195EC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    g5 = (g5 & 7u);
    if (g5 == 0u) {
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
        goto L_08819614;
    }
    goto L_08819604;
}
L_08819604:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_0881967C;
      }
      goto L_08819610;
    }
L_08819610:
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08819614;
L_08819614:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g6 = (g5 >> 4u);
    g6 = (g6 & 3u);
    g5 = (g6 << 5u);
    g7 = (g6 << 2u);
    g5 = (g5 - g7);
    g5 = (hot_regs.g4 + g5);
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_0881967C;
      }
      goto L_0881963C;
    }
}
L_0881963C:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(285))))));
    g7 = (g7 & 1u);
    g7 = (g7 ^ 1u);
    g7 = (g7 + static_cast<std::uint32_t>(-1));
    g7 = (g7 << 24u);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 24u));
    { const bool branch_taken = g7 != 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_0881967C;
      }
      goto L_0881965C;
    }
}
L_0881965C:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_0881967C;
      }
      goto L_08819668;
    }
L_08819668:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(284))))));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(280)));
    g5 = (hot_regs.g6 | 0u);
    hot_regs.g31 = (0x0881967Cu);
    hot_regs.g6 = (hot_regs.g7 | 0u);
    hot_regs.g5 = g5;
    goto L_08819828;
}
L_0881967C:
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
L_08819688:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (g5 << 5u);
    g5 = (g5 << 2u);
    g4 = (g4 + static_cast<std::uint32_t>(260));
    g5 = (hot_regs.g6 - g5);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088196E8;
      }
      goto L_088196A8;
    }
}
L_088196A8:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    goto L_088196AC;
L_088196AC:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(72)));
    g6 = (g6 & 14u);
    g6 = (g6 ^ 6u);
    g6 = (g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g6 = (g6 & 255u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088196DC;
      }
      goto L_088196C8;
    }
}
L_088196C8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088196DC;
      }
      goto L_088196D4;
    }
}
L_088196D4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_088196EC;
      }
      goto L_088196DC;
    }
L_088196DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    if (g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
        goto L_088196AC;
    }
    goto L_088196E8;
}
L_088196E8:
    hot_regs.g2 = (0u | 1u);
    goto L_088196EC;
L_088196EC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088196F4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g7 | 0u);
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x0881971Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881971Cu) goto L_0881971C;
    return;
L_0881971C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08819740;
      }
      goto L_08819724;
    }
L_08819724:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08819748;
      }
      goto L_08819730;
    }
}
L_08819730:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088197C0;
      }
      goto L_08819738;
    }
L_08819738:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08819758;
      }
      goto L_08819740;
    }
L_08819740:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088197C0;
      }
      goto L_08819748;
    }
L_08819748:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08819790;
      }
      goto L_08819750;
    }
L_08819750:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088197C0;
      }
      goto L_08819758;
    }
L_08819758:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2196)));
    hot_regs.g5 = (0u | 8u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08819778;
      }
      goto L_08819768;
    }
L_08819768:
    hot_regs.g31 = (0x08819770u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08819770u) goto L_08819770;
    return;
L_08819770:
    { const bool branch_taken = hot_regs.g2 == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08819788;
      }
      goto L_08819778;
    }
L_08819778:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 8u);
    hot_regs.g31 = (0x08819788u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08819788u) goto L_08819788;
    return;
L_08819788:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088197C0;
      }
      goto L_08819790;
    }
L_08819790:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2196)));
    hot_regs.g5 = (0u | 12u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088197B0;
      }
      goto L_088197A0;
    }
L_088197A0:
    hot_regs.g31 = (0x088197A8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088197A8u) goto L_088197A8;
    return;
L_088197A8:
    { const bool branch_taken = hot_regs.g2 == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088197C0;
      }
      goto L_088197B0;
    }
L_088197B0:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 12u);
    hot_regs.g31 = (0x088197C0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088197C0u) goto L_088197C0;
    return;
L_088197C0:
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
L_088197D8:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(376)));
    if (hot_regs.g5 != 0u) {
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(372)));
        goto L_088197EC;
    }
    goto L_088197E4;
L_088197E4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08819804;
      }
      goto L_088197EC;
    }
L_088197EC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(372), g5);
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(0), 0u);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(376)));
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(376), g5);
    hot_regs.g5 = g5;
    goto L_08819804;
}
L_08819804:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881980C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(372)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(376)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(372), g5);
    g5 = (g6 + static_cast<std::uint32_t>(1));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(376), g5);
    local_pc = jump_target;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08819828:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-400));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(360), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(368), ctx.gpr[18]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(392), ctx.gpr[30]);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f20 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f20 = fs * ft; }
    ctx.gpr[30] = (hot_regs.g6 | 0u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(364), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(372), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(376), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(380), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(384), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(388), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(396), hot_regs.g31);
    hot_regs.g31 = (0x08819878u);
    hot_regs.g6 = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08819878u) goto L_08819878;
    return;
L_08819878:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g22 = ctx.gpr[22];
    g4 = (g16 << 5u);
    hot_regs.g5 = (g16 << 2u);
    g22 = (g4 - hot_regs.g5);
    g22 = (ctx.gpr[18] + g22);
    g4 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = g4 == 0u;
    g16 = (0u | 255u);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    ctx.gpr[22] = g22;
      if (branch_taken) {
          goto L_08819A5C;
      }
      goto L_08819894;
    }
}
L_08819894:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g10 = ctx.gpr[10];
    g5 = (ctx.gpr[30] << 5u);
    hot_regs.g6 = (ctx.gpr[30] << 2u);
    g10 = (g5 - hot_regs.g6);
    ctx.gpr[3] = (0u | 58u);
    hot_regs.g2 = (0u | 57u);
    ctx.gpr[9] = (hot_regs.g29 + static_cast<std::uint32_t>(272));
    ctx.gpr[11] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    g10 = (ctx.gpr[18] + g10);
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = g5;
    ctx.gpr[10] = g10;
    goto L_088198B8;
}
L_088198B8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 14u);
    g5 = (g5 ^ 6u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08819A50;
      }
      goto L_088198D4;
    }
}
L_088198D4:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = hot_regs.g7 == ctx.gpr[3];
    hot_regs.g6 = (0u | 0u);
      if (branch_taken) {
          goto L_088198F0;
      }
      goto L_088198E4;
    }
L_088198E4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = g5 != hot_regs.g2;
    g5 = (hot_regs.g6 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088198F8;
      }
      goto L_088198F0;
    }
}
L_088198F0:
    hot_regs.g6 = (0u | 1u);
    hot_regs.g5 = (hot_regs.g6 & 255u);
    goto L_088198F8;
L_088198F8:
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08819A50;
      }
      goto L_08819900;
    }
L_08819900:
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g5 = (hot_regs.g4 - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08819910;
      }
      goto L_08819908;
    }
L_08819908:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08819920;
      }
      goto L_08819910;
    }
L_08819910:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 3u));
    g6 = (g6 >> 29u);
    g5 = (g5 + g6);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 3u));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08819920;
}
L_08819920:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (hot_regs.g5 << 3u);
    g6 = (hot_regs.g29 + g6);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    g6 = (hot_regs.g7 | 0u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08819A50;
      }
      goto L_0881993C;
    }
}
L_0881993C:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g7 == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08819A44;
      }
      goto L_0881994C;
    }
L_0881994C:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(72)));
    g7 = (g7 & 14u);
    g7 = (g7 ^ 6u);
    g7 = (g7 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g7 = (g7 & 255u);
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08819A44;
      }
      goto L_0881996C;
    }
}
L_0881996C:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(72)));
    g7 = (g7 & 14u);
    g7 = (g7 ^ 6u);
    g7 = (g7 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g7 = (g7 & 255u);
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08819A44;
      }
      goto L_0881998C;
    }
}
L_0881998C:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    ctx.gpr[12] = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[3];
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_088199A8;
      }
      goto L_0881999C;
    }
L_0881999C:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = g7 != hot_regs.g2;
    g7 = (ctx.gpr[8] & 255u);
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_088199B0;
      }
      goto L_088199A8;
    }
}
L_088199A8:
    ctx.gpr[8] = (0u | 1u);
    hot_regs.g7 = (ctx.gpr[8] & 255u);
    goto L_088199B0;
L_088199B0:
    { const bool branch_taken = hot_regs.g7 != 0u;
    // nop
      if (branch_taken) {
          goto L_08819A44;
      }
      goto L_088199B8;
    }
L_088199B8:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g7 = (ctx.gpr[8] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g7 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g7);
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08819A44;
      }
      goto L_088199F8;
    }
L_088199F8:
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g7 = (hot_regs.g6 - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08819A08;
      }
      goto L_08819A00;
    }
L_08819A00:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g7 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08819A18;
      }
      goto L_08819A08;
    }
L_08819A08:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 3u));
    g8 = (g8 >> 29u);
    g7 = (g7 + g8);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 3u));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_08819A18;
}
L_08819A18:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g7 = (g7 << 3u);
    g7 = (hot_regs.g29 + g7);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0))))));
    g8 = (static_cast<std::int32_t>(g8) < 4 ? 1u : 0u);
    { const bool branch_taken = g8 == 0u;
    // nop
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08819A44;
      }
      goto L_08819A30;
    }
}
L_08819A30:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[12] = (g7 + g8);
    aot_mem.aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g5));
    g8 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g8));
    ctx.gpr[8] = g8;
    goto L_08819A44;
}
L_08819A44:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g6 != 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0881993C;
      }
      goto L_08819A50;
    }
}
L_08819A50:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    if (g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
        goto L_088198B8;
    }
    goto L_08819A5C;
}
L_08819A5C:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    hot_regs.g5 = (0u | 255u);
    hot_regs.g31 = (0x08819A6Cu);
    hot_regs.g6 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08819A6Cu) goto L_08819A6C;
    return;
L_08819A6C:
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    goto L_08819A74;
L_08819A74:
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08819A94;
      }
      goto L_08819A80;
    }
L_08819A80:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    g6 = (hot_regs.g29 + g6);
    hot_regs.g7 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(255)));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(255), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.g6 = g6;
    goto L_08819A94;
}
L_08819A94:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 32 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08819A74;
      }
      goto L_08819AA4;
    }
}
L_08819AA4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (0u | 1u);
    goto L_08819AB0;
L_08819AB0:
    ctx.gpr[19] = (hot_regs.g29 + ctx.gpr[17]);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08819BC4;
      }
      goto L_08819AC0;
    }
L_08819AC0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g20 = ctx.gpr[20];
    g5 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(256)));
    hot_regs.g6 = (0u | 0u);
    g20 = (g5 << 3u);
    g20 = (hot_regs.g29 + g20);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g20 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    g7 = (static_cast<std::int32_t>(hot_regs.g6) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    { const bool branch_taken = g7 == 0u;
    g5 = (0u | 9999u);
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_08819B2C;
      }
      goto L_08819AE4;
    }
}
L_08819AE4:
    hot_regs.g7 = (hot_regs.g6 + ctx.gpr[20]);
    goto L_08819AE8;
L_08819AE8:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g7 + static_cast<std::uint32_t>(4))))));
    g8 = (g8 << 3u);
    g8 = (hot_regs.g29 + g8);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0))))));
    g8 = (static_cast<std::int32_t>(g8) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = g8 == 0u;
    // nop
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08819B18;
      }
      goto L_08819B04;
    }
}
L_08819B04:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g7 + static_cast<std::uint32_t>(4))))));
    hot_regs.g4 = (hot_regs.g6 | 0u);
    g5 = (g5 << 3u);
    g5 = (hot_regs.g29 + g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = g5;
    goto L_08819B18;
}
L_08819B18:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    g6 = (g6 + static_cast<std::uint32_t>(1));
    g7 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    g7 = (g6 + ctx.gpr[20]);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08819AE8;
      }
      goto L_08819B2C;
    }
}
L_08819B2C:
{
    std::uint32_t g4 = hot_regs.g4;
    { const bool branch_taken = g4 == ctx.gpr[21];
    g4 = (g4 + ctx.gpr[20]);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08819BB0;
      }
      goto L_08819B34;
    }
}
L_08819B34:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(4))))));
    g5 = (g5 << 3u);
    g5 = (hot_regs.g29 + g5);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0))))));
    g6 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g6));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = g5 != ctx.gpr[21];
    g5 = (g5 << 3u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08819B60;
      }
      goto L_08819B58;
    }
}
L_08819B58:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_08819B68;
      }
      goto L_08819B60;
    }
L_08819B60:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (ctx.gpr[18] + g5);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    hot_regs.g5 = g5;
    goto L_08819B68;
}
L_08819B68:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (g5 | 0u);
    g5 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = g5 != ctx.gpr[21];
    g5 = (g5 << 3u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08819B80;
      }
      goto L_08819B78;
    }
}
L_08819B78:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_08819B88;
      }
      goto L_08819B80;
    }
L_08819B80:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (ctx.gpr[18] + g5);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    hot_regs.g5 = g5;
    goto L_08819B88;
}
L_08819B88:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(4))))));
    hot_regs.g6 = (g7 | 0u);
    g4 = (g4 << 3u);
    g4 = (hot_regs.g29 + g4);
    g7 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[23]));
    hot_regs.g31 = (0x08819BB0u);
    g4 = (ctx.gpr[18] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    goto L_088196F4;
}
L_08819BB0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(256), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = g4 != ctx.gpr[16];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08819AC0;
      }
      goto L_08819BC4;
    }
}
L_08819BC4:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 5 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08819AB0;
      }
      goto L_08819BD4;
    }
}
L_08819BD4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    hot_regs.g4 = (ctx.gpr[30] << 5u);
      if (branch_taken) {
          goto L_08819DA0;
      }
      goto L_08819BE0;
    }
L_08819BE0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g30 = ctx.gpr[30];
    hot_regs.g6 = (g30 << 2u);
    g30 = (g4 - hot_regs.g6);
    g4 = (25587u << 16u);
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    g4 = (g4 | 61964u);
    ctx.gpr[20] = (0u | 58u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    ctx.gpr[19] = (0u | 57u);
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(288));
    g30 = (ctx.gpr[18] + g30);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(352), hot_regs.g5);
    ctx.gpr[23] = (0u | 55u);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
    ctx.gpr[30] = g30;
    goto L_08819C14;
}
L_08819C14:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08819D94;
      }
      goto L_08819C30;
    }
}
L_08819C30:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[20];
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08819C4C;
      }
      goto L_08819C40;
    }
L_08819C40:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = hot_regs.g5 != ctx.gpr[19];
    hot_regs.g4 = (hot_regs.g4 & 255u);
      if (branch_taken) {
          goto L_08819C54;
      }
      goto L_08819C4C;
    }
L_08819C4C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08819C54;
}
L_08819C54:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08819D94;
      }
      goto L_08819C5C;
    }
L_08819C5C:
    if (ctx.gpr[16] != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(352)));
        goto L_08819C6C;
    }
    goto L_08819C64;
L_08819C64:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08819C88;
      }
      goto L_08819C6C;
    }
L_08819C6C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[16] - g4);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 3u));
    g5 = (g5 >> 29u);
    g4 = (g4 + g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 3u));
    g4 = (g4 << 3u);
    g4 = (hot_regs.g29 + g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08819C88;
}
L_08819C88:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(3))))));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08819D94;
      }
      goto L_08819C94;
    }
}
L_08819C94:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(260)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_08819D54;
      }
      goto L_08819CA4;
    }
L_08819CA4:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08819D48;
      }
      goto L_08819CB4;
    }
L_08819CB4:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(72)));
    g6 = (g6 & 14u);
    g6 = (g6 ^ 6u);
    g6 = (g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g6 = (g6 & 255u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08819D48;
      }
      goto L_08819CD4;
    }
}
L_08819CD4:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[20];
    hot_regs.g7 = (0u | 0u);
      if (branch_taken) {
          goto L_08819CF0;
      }
      goto L_08819CE4;
    }
L_08819CE4:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = g6 != ctx.gpr[19];
    g6 = (hot_regs.g7 & 255u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08819CF8;
      }
      goto L_08819CF0;
    }
}
L_08819CF0:
    hot_regs.g7 = (0u | 1u);
    hot_regs.g6 = (hot_regs.g7 & 255u);
    goto L_08819CF8;
L_08819CF8:
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08819D48;
      }
      goto L_08819D00;
    }
L_08819D00:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g6 = (hot_regs.g7 + static_cast<std::uint32_t>(48));
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
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08819D48;
      }
      goto L_08819D40;
    }
L_08819D40:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    goto L_08819D48;
L_08819D48:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08819CA4;
      }
      goto L_08819D54;
    }
}
L_08819D54:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08819D78;
      }
      goto L_08819D5C;
    }
L_08819D5C:
    hot_regs.g6 = (hot_regs.g5 | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(276)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08819D70u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    goto L_088196F4;
L_08819D70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08819D94;
      }
      goto L_08819D78;
    }
L_08819D78:
    hot_regs.g31 = (0x08819D80u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08819D80u) goto L_08819D80;
    return;
L_08819D80:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08819D94;
      }
      goto L_08819D8C;
    }
L_08819D8C:
    hot_regs.g31 = (0x08819D94u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08819D94u) goto L_08819D94;
    return;
L_08819D94:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    if (g16 != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = g16;
        goto L_08819C14;
    }
    goto L_08819DA0;
}
L_08819DA0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(356)));
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
L_08819DD4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08819DFCu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 473u, 0x08B65EA0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08819DFCu) goto L_08819DFC;
    return;
L_08819DFC:
    hot_regs.g31 = (0x08819E04u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 473u, 0x08B65EA0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08819E04u) goto L_08819E04;
    return;
L_08819E04:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(48), 0u);
    hot_regs.g2 = (g16 | 0u);
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
L_08819E24:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08819E40u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g29 = g29;
    goto L_08819EE8;
}
L_08819E40:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08819E50u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(4), 0u);
    goto L_0881A0B4;
L_08819E50:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    g5 = (g5 ^ ctx.gpr[17]);
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 != 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08819E7C;
      }
      goto L_08819E6C;
    }
}
L_08819E6C:
    hot_regs.g5 = (0u | 3u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08819ED4;
      }
      goto L_08819E7C;
    }
L_08819E7C:
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(2)));
    hot_regs.g4 = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (hot_regs.g7 | 0u);
    jump_target = ctx.gpr[8];
    hot_regs.g31 = (0x08819EB8u);
    hot_regs.g6 = (ctx.gpr[9] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08819EB8u) goto L_08819EB8;
    return;
L_08819EB8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    hot_regs.g31 = (0x08819ED0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 475u, 0x08B65ED0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08819ED0u) goto L_08819ED0;
    return;
L_08819ED0:
    hot_regs.g2 = (0u | 1u);
    goto L_08819ED4;
L_08819ED4:
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
L_08819EE8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08819F04u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 499u, 0x08B660D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08819F04u) goto L_08819F04;
    return;
L_08819F04:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08819F10u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 499u, 0x08B660D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08819F10u) goto L_08819F10;
    return;
L_08819F10:
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
L_08819F20:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x08819F48u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
    goto L_08819FC4;
}
L_08819F48:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[20] = (0u | 0u);
    hot_regs.g31 = (0x08819F58u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_0881A018;
L_08819F58:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    ctx.gpr[19] = (0u | 65535u);
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[19];
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08819F98;
      }
      goto L_08819F68;
    }
L_08819F68:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    g6 = (g6 + ctx.gpr[18]);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08819F80u);
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g6 = g6;
    goto L_0881A050;
}
L_08819F80:
    hot_regs.g31 = (0x08819F88u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_0881A018;
L_08819F88:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[19];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08819F68;
      }
      goto L_08819F98;
    }
L_08819F98:
    hot_regs.g31 = (0x08819FA0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_0881A06C;
L_08819FA0:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
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
L_08819FC4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08819FE8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 478u, 0x08B65F40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08819FE8u) goto L_08819FE8;
    return;
L_08819FE8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), hot_regs.g2);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08819FFCu);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 475u, 0x08B65ED0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08819FFCu) goto L_08819FFC;
    return;
L_08819FFC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
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
L_0881A018:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A044;
      }
      goto L_0881A024;
    }
L_0881A024:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 ^ hot_regs.g5);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0881A044;
      }
      goto L_0881A03C;
    }
}
L_0881A03C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0881A048;
      }
      goto L_0881A044;
    }
L_0881A044:
    hot_regs.g2 = (0u | 65535u);
    goto L_0881A048;
L_0881A048:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881A050:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(48)));
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(2)));
    g5 = (g5 << 4u);
    g5 = (hot_regs.g6 + g5);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(48), g5);
    local_pc = jump_target;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0881A06C:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(48), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881A074:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x0881A090u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 473u, 0x08B65EA0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A090u) goto L_0881A090;
    return;
L_0881A090:
    hot_regs.g31 = (0x0881A098u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 473u, 0x08B65EA0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A098u) goto L_0881A098;
    return;
L_0881A098:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(48), 0u);
    hot_regs.g2 = (g16 | 0u);
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
L_0881A0B4:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    g2 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load16(g2 + static_cast<std::uint32_t>(12)));
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load16(g2 + static_cast<std::uint32_t>(12)));
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
        goto L_0881A0D4;
    }
    goto L_0881A0CC;
}
L_0881A0CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A0F4;
      }
      goto L_0881A0D4;
    }
L_0881A0D4:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (0u | 65535u);
    g4 = (g4 << 4u);
    g4 = (g2 + g4);
    hot_regs.g5 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store16(g2 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(hot_regs.g5));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g6));
    g2 = (g4 | 0u);
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    goto L_0881A0F4;
}
L_0881A0F4:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881A0FC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(g6));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 - g4);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 4u));
    g6 = (g6 >> 28u);
    g5 = (g5 + g6);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 4u));
    jump_target = hot_regs.g31;
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(g5));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0881A128:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(156), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(172), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(188), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), hot_regs.g31);
    hot_regs.g31 = (0x0881A16Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 478u, 0x08B65F40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A16Cu) goto L_0881A16C;
    return;
L_0881A16C:
    ctx.gpr[21] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A22C;
      }
      goto L_0881A178;
    }
L_0881A178:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), g16);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 == g5;
    g5 = (g4 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0881A20C;
      }
      goto L_0881A194;
    }
}
L_0881A194:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(24));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g7 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[8]);
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(132));
    jump_target = ctx.gpr[9];
    hot_regs.g31 = (0x0881A1BCu);
    hot_regs.g7 = (hot_regs.g29 | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A1BCu) goto L_0881A1BC;
    return;
L_0881A1BC:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0881A1E8;
      }
      goto L_0881A1C8;
    }
L_0881A1C8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    ctx.gpr[20] = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), hot_regs.g5);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0881A23C;
      }
      goto L_0881A1E0;
    }
}
L_0881A1E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A490;
      }
      goto L_0881A1E8;
    }
L_0881A1E8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    hot_regs.g5 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), hot_regs.g5);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0881A204u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 475u, 0x08B65ED0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A204u) goto L_0881A204;
    return;
L_0881A204:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_0881A4A4;
      }
      goto L_0881A20C;
    }
L_0881A20C:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0881A224u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 475u, 0x08B65ED0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A224u) goto L_0881A224;
    return;
L_0881A224:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_0881A4A4;
      }
      goto L_0881A22C;
    }
L_0881A22C:
    hot_regs.g4 = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), hot_regs.g4);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_0881A4A4;
      }
      goto L_0881A23C;
    }
L_0881A23C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(140));
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(136));
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(144));
    ctx.gpr[18] = (g29 | 0u);
    goto L_0881A24C;
}
L_0881A24C:
    hot_regs.g31 = (0x0881A254u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_0881A0B4;
L_0881A254:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    g4 = (g4 ^ ctx.gpr[16]);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0881A2B4;
      }
      goto L_0881A270;
    }
}
L_0881A270:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x0881A2A4u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 491u, 0x08B66024u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A2A4u) goto L_0881A2A4;
    return;
L_0881A2A4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0881A2D8;
      }
      goto L_0881A2AC;
    }
L_0881A2AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A36C;
      }
      goto L_0881A2B4;
    }
L_0881A2B4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    hot_regs.g5 = (0u | 3u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), hot_regs.g5);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0881A2D0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 475u, 0x08B65ED0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A2D0u) goto L_0881A2D0;
    return;
L_0881A2D0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_0881A4A4;
      }
      goto L_0881A2D8;
    }
L_0881A2D8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(140)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881A308;
      }
      goto L_0881A2F4;
    }
L_0881A2F4:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0881A300u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    goto L_0881A0FC;
L_0881A300:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_0881A480;
      }
      goto L_0881A308;
    }
L_0881A308:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x0881A320u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 505u, 0x08B66170u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A320u) goto L_0881A320;
    return;
L_0881A320:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    g4 = (ctx.gpr[21] - g4);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 4u));
    g5 = (g5 >> 28u);
    g4 = (g4 + g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 4u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(140)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x0881A354u);
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(140)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0881A0FC;
}
L_0881A354:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0881A364u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 475u, 0x08B65ED0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A364u) goto L_0881A364;
    return;
L_0881A364:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_0881A480;
      }
      goto L_0881A36C;
    }
L_0881A36C:
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(148)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x0881A388u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 491u, 0x08B66024u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A388u) goto L_0881A388;
    return;
L_0881A388:
    if (hot_regs.g2 == 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_0881A424;
    }
    goto L_0881A390;
L_0881A390:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(140)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881A3C0;
      }
      goto L_0881A3AC;
    }
L_0881A3AC:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0881A3B8u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    goto L_0881A0FC;
L_0881A3B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_0881A480;
      }
      goto L_0881A3C0;
    }
L_0881A3C0:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(148)));
    hot_regs.g31 = (0x0881A3D8u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 505u, 0x08B66170u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A3D8u) goto L_0881A3D8;
    return;
L_0881A3D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    g4 = (ctx.gpr[21] - g4);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 4u));
    g5 = (g5 >> 28u);
    g4 = (g4 + g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 4u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(140)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x0881A40Cu);
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(140)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0881A0FC;
}
L_0881A40C:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0881A41Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 475u, 0x08B65ED0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A41Cu) goto L_0881A41C;
    return;
L_0881A41C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_0881A480;
      }
      goto L_0881A424;
    }
L_0881A424:
    hot_regs.g4 = (ctx.gpr[21] - hot_regs.g4);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 4u));
    hot_regs.g5 = (hot_regs.g5 >> 28u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 4u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(2)));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[8];
    hot_regs.g31 = (0x0881A468u);
    hot_regs.g6 = (ctx.gpr[9] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A468u) goto L_0881A468;
    return;
L_0881A468:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0881A47Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 475u, 0x08B65ED0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A47Cu) goto L_0881A47C;
    return;
L_0881A47C:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    goto L_0881A480;
L_0881A480:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (g20 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g20) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_0881A24C;
      }
      goto L_0881A490;
    }
}
L_0881A490:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(148)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x0881A4A0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 475u, 0x08B65ED0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A4A0u) goto L_0881A4A0;
    return;
L_0881A4A0:
    hot_regs.g2 = (0u | 0u);
    goto L_0881A4A4;
L_0881A4A4:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0881A4D4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 12u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), hot_regs.g31);
    hot_regs.g31 = (0x0881A508u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A508u) goto L_0881A508;
    return;
L_0881A508:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g17 = ctx.gpr[17];
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (49864u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0881A544;
      }
      goto L_0881A52C;
    }
}
}
L_0881A52C:
    hot_regs.g4 = (50042u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881A554;
      }
      goto L_0881A544;
    }
L_0881A544:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x0881A550u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A550u) goto L_0881A550;
    return;
L_0881A550:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0881A554;
L_0881A554:
{
    std::uint32_t g17 = ctx.gpr[17];
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(16)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(20)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
      if (branch_taken) {
          goto L_0881A578;
      }
      goto L_0881A574;
    }
}
L_0881A574:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_0881A578;
L_0881A578:
    hot_regs.g4 = (0u | 17u);
    { const bool branch_taken = ctx.gpr[16] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_0881A5A8;
      }
      goto L_0881A584;
    }
L_0881A584:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(32)));
    hot_regs.g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(g4));
    g4 = (0u | 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0881A5B8;
      }
      goto L_0881A5A8;
    }
}
L_0881A5A8:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    goto L_0881A5B8;
}
L_0881A5B8:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    hot_regs.g4 = (ctx.gpr[16] & 65535u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x0881A5F4u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 352u, 0x089421CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A5F4u) goto L_0881A5F4;
    return;
L_0881A5F4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0881A618:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 6u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    hot_regs.g31 = (0x0881A658u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A658u) goto L_0881A658;
    return;
L_0881A658:
{
    std::uint32_t g17 = ctx.gpr[17];
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(12)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(16)));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(20)));
    g17 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18160)));
    { const bool branch_taken = g17 == 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0881A6BC;
      }
      goto L_0881A67C;
    }
}
L_0881A67C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x0881A6A0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 799u, 0x08AAF984u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A6A0u) goto L_0881A6A0;
    return;
L_0881A6A0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A6B0;
      }
      goto L_0881A6A8;
    }
L_0881A6A8:
    hot_regs.g31 = (0x0881A6B0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 282u, 0x08941D50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A6B0u) goto L_0881A6B0;
    return;
L_0881A6B0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881A67C;
      }
      goto L_0881A6BC;
    }
L_0881A6BC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18156)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A708;
      }
      goto L_0881A6C8;
    }
L_0881A6C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x0881A6ECu);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 799u, 0x08AAF984u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A6ECu) goto L_0881A6EC;
    return;
L_0881A6EC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A6FC;
      }
      goto L_0881A6F4;
    }
L_0881A6F4:
    hot_regs.g31 = (0x0881A6FCu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 282u, 0x08941D50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A6FCu) goto L_0881A6FC;
    return;
L_0881A6FC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881A6C8;
      }
      goto L_0881A708;
    }
L_0881A708:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0881A738:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), hot_regs.g31);
    hot_regs.g31 = (0x0881A760u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A760u) goto L_0881A760;
    return;
L_0881A760:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x0881A7BCu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A7BCu) goto L_0881A7BC;
    return;
L_0881A7BC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_0881A7D4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 10u);
    hot_regs.g31 = (0x0881A7FCu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A7FCu) goto L_0881A7FC;
    return;
L_0881A7FC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
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
    hot_regs.g31 = (0x0881A884u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 755u, 0x088FF544u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A884u) goto L_0881A884;
    return;
L_0881A884:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0881A89C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x0881A8BCu);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A8BCu) goto L_0881A8BC;
    return;
L_0881A8BC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A8D8;
      }
      goto L_0881A8C8;
    }
L_0881A8C8:
    hot_regs.g31 = (0x0881A8D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 303u, 0x08A3D9FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A8D0u) goto L_0881A8D0;
    return;
L_0881A8D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A8E0;
      }
      goto L_0881A8D8;
    }
L_0881A8D8:
    hot_regs.g31 = (0x0881A8E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 308u, 0x08A3DA48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A8E0u) goto L_0881A8E0;
    return;
L_0881A8E0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_0881A8F4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 8u);
    hot_regs.g31 = (0x0881A91Cu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A91Cu) goto L_0881A91C;
    return;
L_0881A91C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6480)));
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
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[8] | 0u);
    hot_regs.g31 = (0x0881A984u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 325u, 0x08A3DBD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A984u) goto L_0881A984;
    return;
L_0881A984:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0881A99C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x0881A9BCu);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881A9BCu) goto L_0881A9BC;
    return;
L_0881A9BC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A9DC;
      }
      goto L_0881A9C8;
    }
L_0881A9C8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15820u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2988), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0881A9E8;
      }
      goto L_0881A9DC;
    }
}
L_0881A9DC:
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2988), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_0881A9E8;
L_0881A9E8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_0881A9FC:
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
L_0881AA24:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.g6 = (2235u << 16u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0881AA54;
      }
      goto L_0881AA34;
    }
}
L_0881AA34:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(-28628));
    g5 = (g5 & 1u);
    { const bool branch_taken = g5 == 0u;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), g6);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0881AA54;
      }
      goto L_0881AA44;
    }
}
L_0881AA44:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g31 = (0x0881AA54u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881AA54u) goto L_0881AA54;
    return;
L_0881AA54:
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
L_0881AA60:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28628));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28612));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x0881AAA4u);
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881AAA4u) goto L_0881AAA4;
    return;
L_0881AAA4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (g17 + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g16 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (g17 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g16 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (g17 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g16 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (g17 + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g16 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(g4));
    g4 = (2235u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-28596));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), g4);
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(g4));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(193)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(194)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(195)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(195), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(g4));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(f12));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(204))))));
    g5 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (g4 & g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(204))))));
    g5 = (g5 & 1u);
    g4 = (g4 | g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(204))))));
    g5 = (0u + static_cast<std::uint32_t>(-3));
    g4 = (g4 & g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(204))))));
    g5 = (g5 & 2u);
    g5 = (g5 >> 1u);
    g5 = (g5 & 1u);
    g5 = (g5 << 1u);
    g4 = (g4 | g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(204))))));
    g5 = (0u + static_cast<std::uint32_t>(-5));
    g4 = (g4 & g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(204))))));
    g5 = (g5 & 4u);
    g5 = (g5 >> 2u);
    g5 = (g5 & 1u);
    g5 = (g5 << 2u);
    g4 = (g4 | g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(204))))));
    g5 = (0u + static_cast<std::uint32_t>(-9));
    g4 = (g4 & g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(204))))));
    g5 = (g5 & 8u);
    g5 = (g5 >> 3u);
    g5 = (g5 & 1u);
    g5 = (g5 << 3u);
    g4 = (g4 | g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(205))))));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(205), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(206))))));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(206), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(207))))));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(207), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(208))))));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(g4));
    g4 = (0u | 0u);
    g5 = (g4 + g17);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    goto L_0881AC04;
}
}
L_0881AC04:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(209)));
    hot_regs.g6 = (g4 + ctx.gpr[16]);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(g5));
    g5 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    g5 = (g4 + ctx.gpr[17]);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0881AC04;
      }
      goto L_0881AC20;
    }
}
L_0881AC20:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    goto L_0881AC2C;
L_0881AC2C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(216)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(216), g7);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g7 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_0881AC2C;
      }
      goto L_0881AC48;
    }
}
L_0881AC48:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    goto L_0881AC54;
L_0881AC54:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(232)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    hot_regs.g7 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0881AC54;
      }
      goto L_0881AC70;
    }
}
L_0881AC70:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    goto L_0881AC7C;
L_0881AC7C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(248)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    hot_regs.g7 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0881AC7C;
      }
      goto L_0881AC98;
    }
}
L_0881AC98:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    goto L_0881ACA4;
L_0881ACA4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(264)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    hot_regs.g7 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0881ACA4;
      }
      goto L_0881ACC0;
    }
}
L_0881ACC0:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    goto L_0881ACCC;
L_0881ACCC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(280)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    hot_regs.g7 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0881ACCC;
      }
      goto L_0881ACE8;
    }
}
L_0881ACE8:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    hot_regs.g6 = (ctx.gpr[17] + static_cast<std::uint32_t>(304));
    goto L_0881ACF4;
L_0881ACF4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), g8);
    g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(8), g9);
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(16)));
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(12), g7);
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(16), g8);
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(20), g9);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(24), g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(28), g8);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (g5 + static_cast<std::uint32_t>(32));
    g7 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(32));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_0881ACF4;
      }
      goto L_0881AD4C;
    }
}
L_0881AD4C:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    goto L_0881AD58;
L_0881AD58:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(432)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(432), g7);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g7 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_0881AD58;
      }
      goto L_0881AD74;
    }
}
L_0881AD74:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(448)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(452)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(452), g4);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(456)));
    g4 = (g17 + static_cast<std::uint32_t>(468));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(460)));
    g6 = (g16 + static_cast<std::uint32_t>(468));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(f12));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(464))))));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(464), static_cast<std::uint8_t>(g5));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g8 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), g7);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(8), g8);
    g8 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(12), g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(16), g7);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(20), g8);
    g8 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(24), g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(28), g7);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(32), g8);
    g8 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(36), g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(40), g7);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(44), g8);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(48), g5);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(52), g4);
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(524)));
    hot_regs.g2 = (g16 | 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(524), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(528)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(528), g4);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_0881AE3C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    g5 = (g5 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g5 = (g4 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = hot_regs.g31;
    hot_regs.g2 = (g4 | 0u);
    local_pc = jump_target;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_0881AE6C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x0881AE80u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 74u, 0x08AAC48Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881AE80u) goto L_0881AE80;
    return;
L_0881AE80:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (2235u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-28564));
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(760), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(764), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(768), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(772), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(780), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g2 = (g16 | 0u);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_0881AEC4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x0881AEE0u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 101u, 0x08AAC5E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881AEE0u) goto L_0881AEE0;
    return;
L_0881AEE0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (2235u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-28564));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(4), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(356)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(356)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1980)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(760), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1920)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(764), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1924)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(768), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1928)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(772), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1932)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1988)));
    hot_regs.g2 = (g17 | 0u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(780), std::bit_cast<std::uint32_t>(f12));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_0881AF4C:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (2178u << 16u);
    jump_target = hot_regs.g31;
    g2 = (g2 + static_cast<std::uint32_t>(-20660));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0881AF58:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x0881AF68u);
    // nop
    hot_regs.g29 = g29;
    goto L_0881AF4C;
}
L_0881AF68:
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
L_0881AF74:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x0881AF9Cu);
    ctx.gpr[20] = (0u | 0u);
    hot_regs.g29 = g29;
    goto L_0881AF4C;
}
L_0881AF9C:
    if (hot_regs.g2 == ctx.gpr[16]) {
    ctx.gpr[20] = (0u | 1u);
        goto L_0881B024;
    }
    goto L_0881AFA4;
L_0881AFA4:
    hot_regs.g31 = (0x0881AFACu);
    ctx.gpr[19] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 139u, 0x08AACA60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881AFACu) goto L_0881AFAC;
    return;
L_0881AFAC:
    if (hot_regs.g2 == ctx.gpr[16]) {
    ctx.gpr[19] = (0u | 1u);
        goto L_0881B014;
    }
    goto L_0881AFB4;
L_0881AFB4:
    hot_regs.g31 = (0x0881AFBCu);
    ctx.gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 666u, 0x08A7FAA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881AFBCu) goto L_0881AFBC;
    return;
L_0881AFBC:
    if (hot_regs.g2 == ctx.gpr[16]) {
    ctx.gpr[18] = (0u | 1u);
        goto L_0881B004;
    }
    goto L_0881AFC4;
L_0881AFC4:
    hot_regs.g31 = (0x0881AFCCu);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 400u, 0x0888E51Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881AFCCu) goto L_0881AFCC;
    return;
L_0881AFCC:
    if (hot_regs.g2 == ctx.gpr[16]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_0881AFF4;
    }
    goto L_0881AFD4;
L_0881AFD4:
    hot_regs.g31 = (0x0881AFDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 295u, 0x08A9A6CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881AFDCu) goto L_0881AFDC;
    return;
L_0881AFDC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 ^ ctx.gpr[16]);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[17] & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0881AFF8;
      }
      goto L_0881AFF0;
    }
}
L_0881AFF0:
    ctx.gpr[17] = (0u | 1u);
    goto L_0881AFF4;
L_0881AFF4:
    hot_regs.g4 = (ctx.gpr[17] & 255u);
    goto L_0881AFF8;
L_0881AFF8:
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.g4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_0881B008;
      }
      goto L_0881B000;
    }
L_0881B000:
    ctx.gpr[18] = (0u | 1u);
    goto L_0881B004;
L_0881B004:
    hot_regs.g4 = (ctx.gpr[18] & 255u);
    goto L_0881B008;
L_0881B008:
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.g4 = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_0881B018;
      }
      goto L_0881B010;
    }
L_0881B010:
    ctx.gpr[19] = (0u | 1u);
    goto L_0881B014;
L_0881B014:
    hot_regs.g4 = (ctx.gpr[19] & 255u);
    goto L_0881B018;
L_0881B018:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B024;
      }
      goto L_0881B020;
    }
L_0881B020:
    ctx.gpr[20] = (0u | 1u);
    goto L_0881B024;
L_0881B024:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[20] & 255u);
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
L_0881B048:
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
          goto L_0881B098;
      }
      goto L_0881B064;
    }
}
L_0881B064:
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28548));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), hot_regs.g4);
    hot_regs.g31 = (0x0881B078u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 425u, 0x08A9B6A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B078u) goto L_0881B078;
    return;
L_0881B078:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0881B084u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 161u, 0x08AACB80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B084u) goto L_0881B084;
    return;
L_0881B084:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B098;
      }
      goto L_0881B090;
    }
L_0881B090:
    hot_regs.g31 = (0x0881B098u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B098u) goto L_0881B098;
    return;
L_0881B098:
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
L_0881B0AC:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 9u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881B0B4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g5 = (0u | 784u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x0881B0D8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B0D8u) goto L_0881B0D8;
    return;
L_0881B0D8:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0881B0F0;
      }
      goto L_0881B0E4;
    }
L_0881B0E4:
    hot_regs.g31 = (0x0881B0ECu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_0881AE6C;
L_0881B0EC:
    hot_regs.g2 = (ctx.gpr[16] | 0u);
    goto L_0881B0F0;
L_0881B0F0:
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
L_0881B100:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0881B12C;
      }
      goto L_0881B110;
    }
}
L_0881B110:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 3u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(8));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x0881B12Cu);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g7);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B12Cu) goto L_0881B12C;
    return;
L_0881B12C:
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
L_0881B138:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g5 = (0u | 784u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x0881B164u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B164u) goto L_0881B164;
    return;
L_0881B164:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0881B1FC;
      }
      goto L_0881B170;
    }
L_0881B170:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0881B17Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    goto L_0881AA60;
L_0881B17C:
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28580));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    hot_regs.g7 = (2178u << 16u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(544), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(560));
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(560));
    hot_regs.g5 = (0u | 6u);
    hot_regs.g6 = (0u | 32u);
    hot_regs.g31 = (0x0881B1ACu);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-20932));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 115u, 0x08B6095Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B1ACu) goto L_0881B1AC;
    return;
L_0881B1AC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (2235u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-28564));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(4), g4);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(752)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(756)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(760)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(760), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(764)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(764), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(768)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(768), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(772)));
    hot_regs.g2 = (g17 | 0u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(772), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(776)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(780)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(780), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_0881B1FC;
}
}
L_0881B1FC:
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
L_0881B210:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x0881B224u);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 660u, 0x08A7FA3Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B224u) goto L_0881B224;
    return;
L_0881B224:
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
L_0881B230:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x0881B24Cu);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 158u, 0x08AACB34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B24Cu) goto L_0881B24C;
    return;
L_0881B24C:
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(18888));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), hot_regs.g4);
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g31 = (0x0881B264u);
    hot_regs.g4 = (0u | 400u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B264u) goto L_0881B264;
    return;
L_0881B264:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (hot_regs.g2 | 0u);
    { const bool branch_taken = g17 == 0u;
    hot_regs.g4 = (g17 | 0u);
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0881B27C;
      }
      goto L_0881B270;
    }
}
L_0881B270:
    hot_regs.g31 = (0x0881B278u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 28u, 0x0881C6F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B278u) goto L_0881B278;
    return;
L_0881B278:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_0881B27C;
L_0881B27C:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    hot_regs.g2 = (g16 | 0u);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
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
L_0881B29C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), hot_regs.g31);
    hot_regs.g31 = (0x0881B2C0u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 158u, 0x08AACB34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B2C0u) goto L_0881B2C0;
    return;
L_0881B2C0:
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(18888));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), hot_regs.g4);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0881B2E0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 736u, 0x08ADEF00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B2E0u) goto L_0881B2E0;
    return;
L_0881B2E0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g31 = (0x0881B2F0u);
    hot_regs.g4 = (0u | 400u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B2F0u) goto L_0881B2F0;
    return;
L_0881B2F0:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (hot_regs.g2 | 0u);
    { const bool branch_taken = g19 == 0u;
    hot_regs.g4 = (g19 | 0u);
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_0881B308;
      }
      goto L_0881B2FC;
    }
}
L_0881B2FC:
    hot_regs.g31 = (0x0881B304u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 28u, 0x0881C6F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B304u) goto L_0881B304;
    return;
L_0881B304:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0881B308;
L_0881B308:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    hot_regs.g31 = (0x0881B314u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_0881B384;
L_0881B314:
    hot_regs.g4 = (0u | 0u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g4);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g5 = (0u | 784u);
    hot_regs.g31 = (0x0881B330u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B330u) goto L_0881B330;
    return;
L_0881B330:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0881B34C;
      }
      goto L_0881B33C;
    }
L_0881B33C:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0881B348u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    goto L_0881AEC4;
L_0881B348:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    goto L_0881B34C;
L_0881B34C:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0881B35Cu);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 456u, 0x08A9B9F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B35Cu) goto L_0881B35C;
    return;
L_0881B35C:
    hot_regs.g31 = (0x0881B364u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 562u, 0x0888F9A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B364u) goto L_0881B364;
    return;
L_0881B364:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0881B384:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x0881B394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 166u, 0x08AACBDCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B394u) goto L_0881B394;
    return;
L_0881B394:
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
L_0881B3A0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x0881B3B4u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(32))))));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 169u, 0x08AACC08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B3B4u) goto L_0881B3B4;
    return;
L_0881B3B4:
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
L_0881B3C0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g19);
    g19 = (2237u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), g7);
    g19 = (g19 + static_cast<std::uint32_t>(-28736));
    g7 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (g4 | 0u);
    g4 = (aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != g4;
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0881B4E0;
      }
      goto L_0881B408;
    }
}
L_0881B408:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0881B430;
      }
      goto L_0881B414;
    }
L_0881B414:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x0881B424u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B424u) goto L_0881B424;
    return;
L_0881B424:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_0881B430;
L_0881B430:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (0u | 0u);
    hot_regs.g31 = (0x0881B440u);
    hot_regs.g4 = (0u | 2064u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B440u) goto L_0881B440;
    return;
L_0881B440:
    ctx.gpr[22] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    hot_regs.g4 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0881B468;
      }
      goto L_0881B44C;
    }
L_0881B44C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(524)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    hot_regs.g31 = (0x0881B460u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 257u, 0x089D96B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B460u) goto L_0881B460;
    return;
L_0881B460:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    goto L_0881B468;
L_0881B468:
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0881B474u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 736u, 0x08ADEF00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B474u) goto L_0881B474;
    return;
L_0881B474:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(64))))));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0881B490u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 171u, 0x08AACC28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B490u) goto L_0881B490;
    return;
L_0881B490:
    hot_regs.g4 = (0u | 0u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g4);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g5 = (0u | 784u);
    hot_regs.g31 = (0x0881B4ACu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B4ACu) goto L_0881B4AC;
    return;
L_0881B4AC:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0881B4C8;
      }
      goto L_0881B4B8;
    }
L_0881B4B8:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0881B4C4u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    goto L_0881AEC4;
L_0881B4C4:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    goto L_0881B4C8;
L_0881B4C8:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0881B4D8u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 456u, 0x08A9B9F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B4D8u) goto L_0881B4D8;
    return;
L_0881B4D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B4F4;
      }
      goto L_0881B4E0;
    }
L_0881B4E0:
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(64))))));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0881B4F4u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 171u, 0x08AACC28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B4F4u) goto L_0881B4F4;
    return;
L_0881B4F4:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0881B51C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g5);
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    { const bool branch_taken = g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0881B56C;
      }
      goto L_0881B540;
    }
}
L_0881B540:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B564;
      }
      goto L_0881B548;
    }
L_0881B548:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    hot_regs.g5 = (0u | 3u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x0881B564u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B564u) goto L_0881B564;
    return;
L_0881B564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B5B4;
      }
      goto L_0881B56C;
    }
L_0881B56C:
    hot_regs.g4 = (0u | 0u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g4);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g5 = (0u | 784u);
    hot_regs.g31 = (0x0881B588u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B588u) goto L_0881B588;
    return;
L_0881B588:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0881B5A4;
      }
      goto L_0881B594;
    }
L_0881B594:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    hot_regs.g31 = (0x0881B5A0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_0881AEC4;
L_0881B5A0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_0881B5A4;
L_0881B5A4:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0881B5B4u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 456u, 0x08A9B9F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B5B4u) goto L_0881B5B4;
    return;
L_0881B5B4:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0881B5CC:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), g7);
    g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(100))))));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(54))))));
    g6 = (g7 - g6);
    g6 = (g6 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    g6 = (static_cast<std::int32_t>(g6) < 0 ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    g6 = (g6 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), hot_regs.g31);
    { const bool branch_taken = g6 == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0881B66C;
      }
      goto L_0881B620;
    }
}
L_0881B620:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(96))))));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(56))))));
    hot_regs.g31 = (0x0881B638u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B638u) goto L_0881B638;
    return;
L_0881B638:
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g31 = (0x0881B650u);
    hot_regs.g6 = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B650u) goto L_0881B650;
    return;
L_0881B650:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0881B664u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    goto L_0881BB1C;
L_0881B664:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_0881B6D4;
      }
      goto L_0881B66C;
    }
L_0881B66C:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(96))))));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(58))))));
    hot_regs.g31 = (0x0881B684u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B684u) goto L_0881B684;
    return;
L_0881B684:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(100))))));
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(60))))));
    hot_regs.g31 = (0x0881B69Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 440u, 0x08A9B864u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B69Cu) goto L_0881B69C;
    return;
L_0881B69C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(96))))));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(100))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(g4));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(g5));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(62))))));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(64))))));
    g4 = (ctx.gpr[17] | 0u);
    g5 = (g5 - g6);
    g8 = (g5 << 16u);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g8) >> 16u));
    g5 = (ctx.gpr[16] | 0u);
    g6 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0881B6D4u);
    hot_regs.g7 = (hot_regs.g2 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    goto L_0881B774;
}
L_0881B6D4:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0881B6F0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x0881B704u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 178u, 0x08AACCCCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B704u) goto L_0881B704;
    return;
L_0881B704:
    hot_regs.g31 = (0x0881B70Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 598u, 0x0889E930u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B70Cu) goto L_0881B70C;
    return;
L_0881B70C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B71C;
      }
      goto L_0881B718;
    }
L_0881B718:
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_0881B71C;
L_0881B71C:
    hot_regs.g31 = (0x0881B724u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 598u, 0x0889E930u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B724u) goto L_0881B724;
    return;
L_0881B724:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B734;
      }
      goto L_0881B730;
    }
L_0881B730:
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_0881B734;
L_0881B734:
    hot_regs.g31 = (0x0881B73Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 598u, 0x0889E930u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B73Cu) goto L_0881B73C;
    return;
L_0881B73C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B74C;
      }
      goto L_0881B748;
    }
L_0881B748:
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_0881B74C;
L_0881B74C:
    hot_regs.g31 = (0x0881B754u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 598u, 0x0889E930u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B754u) goto L_0881B754;
    return;
L_0881B754:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B764;
      }
      goto L_0881B760;
    }
L_0881B760:
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_0881B764;
L_0881B764:
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
L_0881B774:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.gpr[19] = (hot_regs.g5 | 0u);
    ctx.gpr[20] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (hot_regs.g7 | 0u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), hot_regs.g31);
    hot_regs.g31 = (0x0881B7B4u);
    hot_regs.g6 = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B7B4u) goto L_0881B7B4;
    return;
L_0881B7B4:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0881B7CCu);
    ctx.gpr[8] = (hot_regs.g29 | 0u);
    goto L_0881B804;
L_0881B7CC:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0881B7E0u);
    hot_regs.g7 = (hot_regs.g29 | 0u);
    goto L_0881BB1C;
L_0881B7E0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0881B804:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x0881B834u);
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 182u, 0x08AACD10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881B834u) goto L_0881B834;
    return;
L_0881B834:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (46470u << 16u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    g5 = (g5 | 14269u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.f13 = std::bit_cast<float>(g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0881B854;
      }
      goto L_0881B848;
    }
}
L_0881B848:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (hot_regs.g4 == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(752)));
        goto L_0881B864;
    }
    goto L_0881B854;
L_0881B854:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 1u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(752)));
    hot_regs.g4 = g4;
    goto L_0881B864;
}
L_0881B864:
{
    float f12 = hot_regs.f12;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(752)));
    f12 = f12 - hot_regs.f14;
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0881B89C;
      }
      goto L_0881B87C;
    }
}
L_0881B87C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (13702u << 16u);
    g5 = (g5 | 14269u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0881B8A0;
      }
      goto L_0881B898;
    }
}
L_0881B898:
    hot_regs.g4 = (0u | 1u);
    goto L_0881B89C;
L_0881B89C:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_0881B8A0;
L_0881B8A0:
    if (hot_regs.g4 != 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(756)));
        goto L_0881B8B8;
    }
    goto L_0881B8A8;
L_0881B8A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 2u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(756)));
    hot_regs.g4 = g4;
    goto L_0881B8B8;
}
L_0881B8B8:
{
    float f12 = hot_regs.f12;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(756)));
    f12 = f12 - hot_regs.f14;
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0881B8F0;
      }
      goto L_0881B8D0;
    }
}
L_0881B8D0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (13702u << 16u);
    g5 = (g5 | 14269u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0881B8F4;
      }
      goto L_0881B8EC;
    }
}
L_0881B8EC:
    hot_regs.g4 = (0u | 1u);
    goto L_0881B8F0;
L_0881B8F0:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_0881B8F4;
L_0881B8F4:
    if (hot_regs.g4 != 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(760)));
        goto L_0881B90C;
    }
    goto L_0881B8FC;
L_0881B8FC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 4u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(760)));
    hot_regs.g4 = g4;
    goto L_0881B90C;
}
L_0881B90C:
{
    float f12 = hot_regs.f12;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    f12 = f12 - hot_regs.f14;
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0881B944;
      }
      goto L_0881B924;
    }
}
L_0881B924:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (13702u << 16u);
    g5 = (g5 | 14269u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0881B948;
      }
      goto L_0881B940;
    }
}
L_0881B940:
    hot_regs.g4 = (0u | 1u);
    goto L_0881B944;
L_0881B944:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_0881B948;
L_0881B948:
    if (hot_regs.g4 != 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(764)));
        goto L_0881B960;
    }
    goto L_0881B950;
L_0881B950:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 8u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(764)));
    hot_regs.g4 = g4;
    goto L_0881B960;
}
L_0881B960:
{
    float f12 = hot_regs.f12;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(764)));
    f12 = f12 - hot_regs.f14;
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0881B998;
      }
      goto L_0881B978;
    }
}
L_0881B978:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (13702u << 16u);
    g5 = (g5 | 14269u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0881B99C;
      }
      goto L_0881B994;
    }
}
L_0881B994:
    hot_regs.g4 = (0u | 1u);
    goto L_0881B998;
L_0881B998:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_0881B99C;
L_0881B99C:
    if (hot_regs.g4 != 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(768)));
        goto L_0881B9B4;
    }
    goto L_0881B9A4;
L_0881B9A4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(768)));
    hot_regs.g4 = g4;
    goto L_0881B9B4;
}
L_0881B9B4:
{
    float f12 = hot_regs.f12;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(768)));
    f12 = f12 - hot_regs.f14;
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0881B9EC;
      }
      goto L_0881B9CC;
    }
}
L_0881B9CC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (13702u << 16u);
    g5 = (g5 | 14269u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0881B9F0;
      }
      goto L_0881B9E8;
    }
}
L_0881B9E8:
    hot_regs.g4 = (0u | 1u);
    goto L_0881B9EC;
L_0881B9EC:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_0881B9F0;
L_0881B9F0:
    if (hot_regs.g4 != 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(772)));
        goto L_0881BA08;
    }
    goto L_0881B9F8;
L_0881B9F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 32u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(772)));
    hot_regs.g4 = g4;
    goto L_0881BA08;
}
L_0881BA08:
{
    float f12 = hot_regs.f12;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(772)));
    f12 = f12 - hot_regs.f14;
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0881BA40;
      }
      goto L_0881BA20;
    }
}
L_0881BA20:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (13702u << 16u);
    g5 = (g5 | 14269u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0881BA44;
      }
      goto L_0881BA3C;
    }
}
L_0881BA3C:
    hot_regs.g4 = (0u | 1u);
    goto L_0881BA40;
L_0881BA40:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_0881BA44;
L_0881BA44:
    if (hot_regs.g4 != 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(776)));
        goto L_0881BA5C;
    }
    goto L_0881BA4C;
L_0881BA4C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 64u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(776)));
    hot_regs.g4 = g4;
    goto L_0881BA5C;
}
L_0881BA5C:
{
    float f12 = hot_regs.f12;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
    f12 = f12 - hot_regs.f14;
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0881BA94;
      }
      goto L_0881BA74;
    }
}
L_0881BA74:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (13702u << 16u);
    g5 = (g5 | 14269u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0881BA98;
      }
      goto L_0881BA90;
    }
}
L_0881BA90:
    hot_regs.g4 = (0u | 1u);
    goto L_0881BA94;
L_0881BA94:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_0881BA98;
L_0881BA98:
    if (hot_regs.g4 != 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(780)));
        goto L_0881BAB0;
    }
    goto L_0881BAA0;
L_0881BAA0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 128u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(780)));
    hot_regs.g4 = g4;
    goto L_0881BAB0;
}
L_0881BAB0:
{
    float f12 = hot_regs.f12;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(780)));
    f12 = f12 - hot_regs.f14;
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (0u | 0u);
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0881BAE8;
      }
      goto L_0881BAC8;
    }
}
L_0881BAC8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (13702u << 16u);
    g4 = (g4 | 14269u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (ctx.gpr[16] & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0881BAEC;
      }
      goto L_0881BAE4;
    }
}
L_0881BAE4:
    ctx.gpr[16] = (0u | 1u);
    goto L_0881BAE8;
L_0881BAE8:
    hot_regs.g4 = (ctx.gpr[16] & 255u);
    goto L_0881BAEC;
L_0881BAEC:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0881BB00;
      }
      goto L_0881BAF4;
    }
L_0881BAF4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 256u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    goto L_0881BB00;
}
L_0881BB00:
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
L_0881BB1C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (ctx.gpr[18] & 65535u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    ctx.gpr[8] = (hot_regs.g5 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (ctx.gpr[17] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[17] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g5 = (ctx.gpr[18] >> 16u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    ctx.gpr[8] = (hot_regs.g5 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (ctx.gpr[17] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[17] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[8] = (ctx.gpr[18] & 1u);
    hot_regs.g5 = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    hot_regs.g4 = (hot_regs.g7 | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BC1C;
      }
      goto L_0881BC08;
    }
L_0881BC08:
    hot_regs.g7 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0881BC1Cu);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 206u, 0x08AACEA0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881BC1Cu) goto L_0881BC1C;
    return;
L_0881BC1C:
    hot_regs.g4 = (ctx.gpr[18] & 2u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BCE8;
      }
      goto L_0881BC28;
    }
L_0881BC28:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(752)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
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
    hot_regs.g4 = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
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
    goto L_0881BCE8;
L_0881BCE8:
    hot_regs.g4 = (ctx.gpr[18] & 4u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BDB4;
      }
      goto L_0881BCF4;
    }
L_0881BCF4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(756)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
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
    hot_regs.g4 = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
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
    goto L_0881BDB4;
L_0881BDB4:
    hot_regs.g4 = (ctx.gpr[18] & 8u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BE80;
      }
      goto L_0881BDC0;
    }
L_0881BDC0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
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
    hot_regs.g4 = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
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
    goto L_0881BE80;
L_0881BE80:
    hot_regs.g4 = (ctx.gpr[18] & 16u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BF4C;
      }
      goto L_0881BE8C;
    }
L_0881BE8C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(764)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
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
    hot_regs.g4 = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
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
    goto L_0881BF4C;
L_0881BF4C:
    hot_regs.g4 = (ctx.gpr[18] & 32u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 2u, 0x0881C018u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_0881BF58;
    }
L_0881BF58:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(768)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
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
    hot_regs.g4 = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
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
    ctx.pc = 0x0881C000u; return;
}

void recomp_unit_0005(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0005_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_5(Runtime &runtime) {
    runtime.register_generated_unit(5u, 0x08818000u, 16384u, &recomp_unit_0005, &recomp_unit_0005_entry);
    runtime.register_function(0x08818000u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881800Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818010u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881801Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818020u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818028u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881802Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818038u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818040u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818130u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818148u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088181ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088181F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088181FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818200u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881820Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818210u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818218u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881821Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818228u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881822Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818330u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818338u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818388u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881838Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088183B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088183BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088183F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881843Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881846Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088184B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818500u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818540u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881856Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818570u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881857Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818580u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818588u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881858Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818604u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818614u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818658u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881869Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818700u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818708u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881870Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818714u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881871Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818720u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818728u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818730u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818734u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088187C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088187E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818800u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818820u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818848u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818878u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818888u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818894u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088188ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088188D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088188F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818904u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818918u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818944u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881894Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818954u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818960u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818968u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818970u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881899Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A04u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A24u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A48u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A50u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A70u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A7Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A88u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A94u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818AA8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818AC8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818AD8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818AE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B20u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B2Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B3Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B4Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B58u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B68u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B7Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B84u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818BA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818BB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818BC0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818BC8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818BCCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818BD4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C18u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C2Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C48u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C50u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C5Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C68u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C70u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C8Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C94u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C9Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818CA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818CB4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818CBCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818CC8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818CD0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818CDCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818CE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D20u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D68u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D94u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D9Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DA8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DB4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DBCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DC4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DCCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DD8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818E30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818E78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818E88u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818EA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818EB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818EB8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818EC4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818ED0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818ED8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818EE0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818EF4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F18u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F24u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F5Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818FACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818FBCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818FD8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818FE4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818FECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818FF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819004u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881900Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819014u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819024u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881904Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819058u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819094u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088190ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088190FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819118u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819120u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881912Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819138u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819140u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819148u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819150u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881915Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819174u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819180u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088191BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088191ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088191F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819210u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819218u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819224u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819230u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819248u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819278u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881927Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819298u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088192A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088192B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088192E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819328u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819338u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819354u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881935Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819368u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819374u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881937Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819384u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881938Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819398u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088193ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088193B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088193C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088193FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819448u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881945Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819478u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819484u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881948Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819494u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088194A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088194A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088194B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088194B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088194C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088194E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088194F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881951Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881954Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819550u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881956Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819578u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819580u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819588u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819590u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819598u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088195A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088195BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088195ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819604u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819610u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819614u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881963Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881965Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819668u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881967Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819688u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088196A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088196ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088196C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088196D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088196DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088196E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088196ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088196F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881971Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819724u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819730u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819738u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819740u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819748u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819750u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819758u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819768u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819770u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819778u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819788u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819790u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088197A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088197A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088197B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088197C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088197D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088197E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088197ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819804u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881980Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819828u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819878u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819894u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088198B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088198D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088198E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088198F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088198F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819900u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819908u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819910u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819920u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881993Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881994Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881996Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881998Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881999Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088199A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088199B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088199B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088199F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A18u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A44u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A50u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A5Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A6Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A74u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A94u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819AA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819AB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819AC0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819AE4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819AE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819B04u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819B18u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819B2Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819B34u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819B58u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819B60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819B68u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819B78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819B80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819B88u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819BB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819BC4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819BD4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819BE0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C14u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C40u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C4Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C54u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C5Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C64u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C6Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C88u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C94u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819CA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819CB4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819CD4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819CE4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819CF0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819CF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D40u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D48u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D54u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D5Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D70u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D8Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D94u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DA0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DD4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DFCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E04u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E24u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E40u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E50u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E6Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E7Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819EB8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819ED0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819ED4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819EE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F04u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F10u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F20u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F48u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F58u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F68u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F88u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F98u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819FA0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819FC4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819FE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819FFCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A018u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A024u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A03Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A044u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A048u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A050u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A06Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A074u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A090u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A098u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A0B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A0CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A0D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A0F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A0FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A128u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A16Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A178u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A194u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A1BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A1C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A1E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A1E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A204u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A20Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A224u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A22Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A23Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A24Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A254u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A270u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A2A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A2ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A2B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A2D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A2D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A2F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A300u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A308u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A320u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A354u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A364u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A36Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A388u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A390u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A3ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A3B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A3C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A3D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A40Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A41Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A424u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A468u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A47Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A480u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A490u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A4A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A4A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A4D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A508u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A52Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A544u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A550u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A554u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A574u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A578u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A584u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A5A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A5B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A5F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A618u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A658u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A67Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A6A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A6A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A6B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A6BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A6C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A6ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A6F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A6FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A708u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A738u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A760u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A7BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A7D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A7FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A884u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A89Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A8BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A8C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A8D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A8D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A8E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A8F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A91Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A984u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A99Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A9BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A9C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A9DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A9E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A9FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA24u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA34u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA44u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA54u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AAA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC04u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC20u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC2Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC48u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC54u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC70u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC7Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC98u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ACA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ACC0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ACCCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ACE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ACF4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD4Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD58u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD74u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE3Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE6Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AEC4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AEE0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF4Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF58u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF68u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF74u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF9Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFB4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFBCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFC4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFCCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFD4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFDCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFF0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFF4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B000u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B004u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B008u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B010u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B014u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B018u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B020u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B024u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B048u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B064u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B078u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B084u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B090u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B098u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B0ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B0B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B0D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B0E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B0ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B0F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B100u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B110u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B12Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B138u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B164u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B170u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B17Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B1ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B1FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B210u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B224u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B230u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B24Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B264u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B270u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B278u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B27Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B29Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B304u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B308u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B314u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B330u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B33Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B348u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B34Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B35Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B364u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B384u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B394u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B3A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B3B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B3C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B408u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B414u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B424u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B430u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B440u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B44Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B460u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B468u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B474u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B490u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B4ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B4B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B4C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B4C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B4D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B4E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B4F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B51Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B540u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B548u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B564u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B56Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B588u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B594u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B5A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B5A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B5B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B5CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B620u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B638u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B650u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B664u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B66Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B684u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B69Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B6D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B6F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B704u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B70Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B718u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B71Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B724u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B730u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B734u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B73Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B748u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B74Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B754u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B760u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B764u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B774u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B7B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B7CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B7E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B804u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B834u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B848u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B854u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B864u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B87Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B898u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B89Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B90Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B924u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B940u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B944u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B948u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B950u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B960u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B978u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B994u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B998u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B99Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B9A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B9B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B9CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B9E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B9ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B9F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B9F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA20u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA3Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA40u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA44u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA4Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA5Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA74u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA90u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA94u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA98u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAA0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAC8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAE4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAF4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB1Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC1Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BCE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BCF4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BDB4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BDC0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE8Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF4Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF58u, &recomp_unit_0005, "recomp_unit_0005");
}
} // namespace psprecomp
