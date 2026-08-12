#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0185[4090] = {
    1, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 34,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 52,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 56, 0, 57, 0, 0, 58, 0, 0,
    59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0,
    0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0,
    68, 0, 0, 0, 69, 0, 70, 0, 71, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77,
    0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 93, 94, 0, 95, 0, 96, 0, 0, 0, 97,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 103, 104, 0, 0,
    0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0,
    110, 0, 111, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 117,
    118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 122, 123, 0, 124, 0, 125, 0, 126, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 133, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 136, 0, 137, 138, 0,
    139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 0, 0, 144, 0, 145, 146, 0, 147, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 150, 151, 0, 152,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0,
    0, 0, 157, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0,
    0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 173, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 180, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 186, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190,
    0, 0, 191, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0,
    0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0,
    0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0,
    215, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 225, 0, 226, 227, 0, 228, 0, 0,
    0, 0, 0, 229, 0, 230, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 240, 0, 0,
    0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 246, 0, 247,
    248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 253, 254, 0, 0,
    0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 258, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260,
    0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 264, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 269, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273,
    0, 0, 274, 0, 0, 0, 0, 0, 275, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0,
    0, 280, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 286, 287,
    0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 291, 292, 0, 0, 0, 0, 0, 0, 0,
    0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 297, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 302, 303, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 0, 0,
    0, 306, 0, 0, 307, 0, 0, 0, 0, 0, 308, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0,
    0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0,
    0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 321, 0, 322, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 325,
    0, 326, 327, 0, 328, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 331, 332, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 339, 0, 340, 0, 0, 341,
    0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0,
    352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    360, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 371, 0, 372, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 376, 0,
    377, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 381, 0, 382, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 385, 0, 386,
    0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0,
    405, 0, 0, 406, 0, 407, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 0, 410, 0, 411, 412, 0, 413, 0, 414, 0, 415, 0, 416, 0, 417, 0,
    0, 0, 0, 418, 0, 0, 0, 419, 0, 420, 421, 0, 422, 0, 0, 0, 0, 0, 423, 0, 424, 0, 0, 425, 426, 0, 427, 0, 0, 0, 0, 428,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 0, 432,
    0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 438, 0,
    0, 439, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 445, 0,
    0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 450, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 453, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 0, 459, 460, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0,
    0, 0, 0, 0, 463, 0, 0, 464, 0, 0, 0, 0, 0, 465, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0,
    0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0,
    0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 476, 0, 0, 0, 477, 0, 0, 478, 0,
    0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 0, 0,
    0, 483, 0, 484, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0,
    491, 0, 0, 0, 0, 492, 0, 493, 0, 0, 0, 0, 494, 0, 495, 0, 0, 0, 0, 496, 0, 497, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0,
    0, 500, 0, 501, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0, 0, 504, 0, 505, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 0, 508, 0, 509,
    0, 0, 0, 0, 510, 0, 511, 0, 0, 0, 0, 512, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0,
    0, 521, 0, 522, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 0, 525, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 0, 0,
    0, 544, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 547, 0, 0, 548, 0, 0, 0, 549, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0,
    0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 563, 0, 0, 564, 0, 0, 0, 565, 0, 566, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 572, 0, 0, 0, 0, 0, 573,
    0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0,
    0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 580, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 0, 0,
    583, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 0, 587, 0, 0, 0, 588,
    0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0,
    594, 0, 0, 595, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 600, 0,
    0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 604,
    0, 0, 605, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 608, 0, 609, 0, 0, 610, 0, 0, 0,
    0, 0, 0, 611, 0, 612, 0, 613, 0, 614, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    617, 0, 0, 618, 0, 619, 0, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 622, 0, 623, 0, 624, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0,
    626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 636, 0, 0, 637, 0, 638, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 642, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 646, 0, 0, 647, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 650, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 652, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 655, 0,
    0, 656, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 660, 0, 0, 661, 0, 0, 0, 0, 0, 0,
    0, 0, 662, 0, 663, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 665, 0, 0, 0, 0, 0, 666, 667, 0, 0, 0, 0, 0, 668, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 669, 0, 0, 670, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 673, 0, 0, 0, 0, 0, 0, 0, 674,
    0, 0, 675, 0, 0, 0, 0, 0, 676, 677, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 680, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 683, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 685, 0, 686, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 688,
    0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 691, 0, 692, 0, 693, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 696, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0,
    0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 701, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703,
    0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 706, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 708, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 710, 0, 0, 0, 0, 0, 711, 0, 712, 0, 713, 0, 714, 0, 0, 715, 0, 0, 0, 716,
    0, 717, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 720, 0, 721, 0, 0, 0, 0, 0, 0, 722, 0, 723, 0, 724, 0, 0, 725, 0, 0, 0,
    0, 0, 0, 0, 726, 0, 727, 0, 0, 0, 0, 0, 0, 728, 0, 729, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 733, 0, 0, 0, 734, 0, 0, 735, 0, 0, 736,
    0, 0, 0, 737, 0, 738, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 740, 0, 0, 741, 0, 742, 0, 743,
};
void recomp_unit_0185_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AE8000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0185[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AE8000;
    case 2u: goto L_08AE8008;
    case 3u: goto L_08AE8014;
    case 4u: goto L_08AE802C;
    case 5u: goto L_08AE8030;
    case 6u: goto L_08AE8054;
    case 7u: goto L_08AE807C;
    case 8u: goto L_08AE8088;
    case 9u: goto L_08AE80A4;
    case 10u: goto L_08AE80BC;
    case 11u: goto L_08AE80E4;
    case 12u: goto L_08AE80F0;
    case 13u: goto L_08AE8128;
    case 14u: goto L_08AE8148;
    case 15u: goto L_08AE8154;
    case 16u: goto L_08AE8164;
    case 17u: goto L_08AE817C;
    case 18u: goto L_08AE81A4;
    case 19u: goto L_08AE81B0;
    case 20u: goto L_08AE81C0;
    case 21u: goto L_08AE81CC;
    case 22u: goto L_08AE81D8;
    case 23u: goto L_08AE81F0;
    case 24u: goto L_08AE8218;
    case 25u: goto L_08AE8224;
    case 26u: goto L_08AE8270;
    case 27u: goto L_08AE8284;
    case 28u: goto L_08AE8294;
    case 29u: goto L_08AE82A8;
    case 30u: goto L_08AE82B0;
    case 31u: goto L_08AE82C8;
    case 32u: goto L_08AE82E8;
    case 33u: goto L_08AE82F4;
    case 34u: goto L_08AE82FC;
    case 35u: goto L_08AE8310;
    case 36u: goto L_08AE8338;
    case 37u: goto L_08AE8344;
    case 38u: goto L_08AE8360;
    case 39u: goto L_08AE8378;
    case 40u: goto L_08AE83A0;
    case 41u: goto L_08AE83AC;
    case 42u: goto L_08AE83BC;
    case 43u: goto L_08AE83C8;
    case 44u: goto L_08AE83D4;
    case 45u: goto L_08AE83EC;
    case 46u: goto L_08AE8414;
    case 47u: goto L_08AE8420;
    case 48u: goto L_08AE8430;
    case 49u: goto L_08AE8448;
    case 50u: goto L_08AE8468;
    case 51u: goto L_08AE8474;
    case 52u: goto L_08AE847C;
    case 53u: goto L_08AE8490;
    case 54u: goto L_08AE84C0;
    case 55u: goto L_08AE84CC;
    case 56u: goto L_08AE84E0;
    case 57u: goto L_08AE84E8;
    case 58u: goto L_08AE84F4;
    case 59u: goto L_08AE8500;
    case 60u: goto L_08AE8508;
    case 61u: goto L_08AE852C;
    case 62u: goto L_08AE8534;
    case 63u: goto L_08AE8558;
    case 64u: goto L_08AE8574;
    case 65u: goto L_08AE8598;
    case 66u: goto L_08AE85D4;
    case 67u: goto L_08AE85F4;
    case 68u: goto L_08AE8600;
    case 69u: goto L_08AE8610;
    case 70u: goto L_08AE8618;
    case 71u: goto L_08AE8620;
    case 72u: goto L_08AE8628;
    case 73u: goto L_08AE8634;
    case 74u: goto L_08AE863C;
    case 75u: goto L_08AE8650;
    case 76u: goto L_08AE8670;
    case 77u: goto L_08AE867C;
    case 78u: goto L_08AE8684;
    case 79u: goto L_08AE8698;
    case 80u: goto L_08AE86C0;
    case 81u: goto L_08AE86CC;
    case 82u: goto L_08AE86DC;
    case 83u: goto L_08AE86F4;
    case 84u: goto L_08AE8718;
    case 85u: goto L_08AE8720;
    case 86u: goto L_08AE874C;
    case 87u: goto L_08AE8764;
    case 88u: goto L_08AE8798;
    case 89u: goto L_08AE87A4;
    case 90u: goto L_08AE87B4;
    case 91u: goto L_08AE87C4;
    case 92u: goto L_08AE87D0;
    case 93u: goto L_08AE87D8;
    case 94u: goto L_08AE87DC;
    case 95u: goto L_08AE87E4;
    case 96u: goto L_08AE87EC;
    case 97u: goto L_08AE87FC;
    case 98u: goto L_08AE8800;
    case 99u: goto L_08AE8824;
    case 100u: goto L_08AE882C;
    case 101u: goto L_08AE884C;
    case 102u: goto L_08AE8858;
    case 103u: goto L_08AE8870;
    case 104u: goto L_08AE8874;
    case 105u: goto L_08AE8894;
    case 106u: goto L_08AE88C8;
    case 107u: goto L_08AE88D4;
    case 108u: goto L_08AE88E4;
    case 109u: goto L_08AE88F4;
    case 110u: goto L_08AE8900;
    case 111u: goto L_08AE8908;
    case 112u: goto L_08AE890C;
    case 113u: goto L_08AE8930;
    case 114u: goto L_08AE8938;
    case 115u: goto L_08AE8958;
    case 116u: goto L_08AE8964;
    case 117u: goto L_08AE897C;
    case 118u: goto L_08AE8980;
    case 119u: goto L_08AE899C;
    case 120u: goto L_08AE89BC;
    case 121u: goto L_08AE89C8;
    case 122u: goto L_08AE89D4;
    case 123u: goto L_08AE89D8;
    case 124u: goto L_08AE89E0;
    case 125u: goto L_08AE89E8;
    case 126u: goto L_08AE89F0;
    case 127u: goto L_08AE8A00;
    case 128u: goto L_08AE8A18;
    case 129u: goto L_08AE8A64;
    case 130u: goto L_08AE8A9C;
    case 131u: goto L_08AE8AA8;
    case 132u: goto L_08AE8AB4;
    case 133u: goto L_08AE8ABC;
    case 134u: goto L_08AE8AD0;
    case 135u: goto L_08AE8AD8;
    case 136u: goto L_08AE8AEC;
    case 137u: goto L_08AE8AF4;
    case 138u: goto L_08AE8AF8;
    case 139u: goto L_08AE8B00;
    case 140u: goto L_08AE8B08;
    case 141u: goto L_08AE8B10;
    case 142u: goto L_08AE8B18;
    case 143u: goto L_08AE8B20;
    case 144u: goto L_08AE8B30;
    case 145u: goto L_08AE8B38;
    case 146u: goto L_08AE8B3C;
    case 147u: goto L_08AE8B44;
    case 148u: goto L_08AE8B5C;
    case 149u: goto L_08AE8B64;
    case 150u: goto L_08AE8B70;
    case 151u: goto L_08AE8B74;
    case 152u: goto L_08AE8B7C;
    case 153u: goto L_08AE8B90;
    case 154u: goto L_08AE8BC4;
    case 155u: goto L_08AE8BEC;
    case 156u: goto L_08AE8BF8;
    case 157u: goto L_08AE8C08;
    case 158u: goto L_08AE8C18;
    case 159u: goto L_08AE8C20;
    case 160u: goto L_08AE8C38;
    case 161u: goto L_08AE8C68;
    case 162u: goto L_08AE8C74;
    case 163u: goto L_08AE8C90;
    case 164u: goto L_08AE8CA4;
    case 165u: goto L_08AE8CC8;
    case 166u: goto L_08AE8D1C;
    case 167u: goto L_08AE8D50;
    case 168u: goto L_08AE8D6C;
    case 169u: goto L_08AE8D74;
    case 170u: goto L_08AE8D98;
    case 171u: goto L_08AE8DB8;
    case 172u: goto L_08AE8DC4;
    case 173u: goto L_08AE8DD0;
    case 174u: goto L_08AE8DD4;
    case 175u: goto L_08AE8DE8;
    case 176u: goto L_08AE8E10;
    case 177u: goto L_08AE8E1C;
    case 178u: goto L_08AE8E28;
    case 179u: goto L_08AE8E38;
    case 180u: goto L_08AE8E40;
    case 181u: goto L_08AE8E44;
    case 182u: goto L_08AE8E68;
    case 183u: goto L_08AE8E70;
    case 184u: goto L_08AE8E90;
    case 185u: goto L_08AE8E9C;
    case 186u: goto L_08AE8EB4;
    case 187u: goto L_08AE8EB8;
    case 188u: goto L_08AE8ED0;
    case 189u: goto L_08AE8EF0;
    case 190u: goto L_08AE8EFC;
    case 191u: goto L_08AE8F08;
    case 192u: goto L_08AE8F0C;
    case 193u: goto L_08AE8F20;
    case 194u: goto L_08AE8F50;
    case 195u: goto L_08AE8F5C;
    case 196u: goto L_08AE8F6C;
    case 197u: goto L_08AE8F8C;
    case 198u: goto L_08AE8F98;
    case 199u: goto L_08AE8FAC;
    case 200u: goto L_08AE8FB4;
    case 201u: goto L_08AE8FD8;
    case 202u: goto L_08AE8FE0;
    case 203u: goto L_08AE900C;
    case 204u: goto L_08AE9028;
    case 205u: goto L_08AE9058;
    case 206u: goto L_08AE9064;
    case 207u: goto L_08AE9074;
    case 208u: goto L_08AE908C;
    case 209u: goto L_08AE9098;
    case 210u: goto L_08AE90AC;
    case 211u: goto L_08AE90B4;
    case 212u: goto L_08AE90CC;
    case 213u: goto L_08AE90E8;
    case 214u: goto L_08AE90F8;
    case 215u: goto L_08AE9100;
    case 216u: goto L_08AE9108;
    case 217u: goto L_08AE9110;
    case 218u: goto L_08AE912C;
    case 219u: goto L_08AE9170;
    case 220u: goto L_08AE9194;
    case 221u: goto L_08AE91A8;
    case 222u: goto L_08AE91B0;
    case 223u: goto L_08AE91C4;
    case 224u: goto L_08AE91CC;
    case 225u: goto L_08AE91E0;
    case 226u: goto L_08AE91E8;
    case 227u: goto L_08AE91EC;
    case 228u: goto L_08AE91F4;
    case 229u: goto L_08AE920C;
    case 230u: goto L_08AE9214;
    case 231u: goto L_08AE9218;
    case 232u: goto L_08AE922C;
    case 233u: goto L_08AE9260;
    case 234u: goto L_08AE9288;
    case 235u: goto L_08AE9294;
    case 236u: goto L_08AE92A0;
    case 237u: goto L_08AE92B8;
    case 238u: goto L_08AE92D8;
    case 239u: goto L_08AE92E4;
    case 240u: goto L_08AE92F4;
    case 241u: goto L_08AE9308;
    case 242u: goto L_08AE9318;
    case 243u: goto L_08AE932C;
    case 244u: goto L_08AE9354;
    case 245u: goto L_08AE9360;
    case 246u: goto L_08AE9374;
    case 247u: goto L_08AE937C;
    case 248u: goto L_08AE9380;
    case 249u: goto L_08AE93A4;
    case 250u: goto L_08AE93AC;
    case 251u: goto L_08AE93CC;
    case 252u: goto L_08AE93D8;
    case 253u: goto L_08AE93F0;
    case 254u: goto L_08AE93F4;
    case 255u: goto L_08AE940C;
    case 256u: goto L_08AE9434;
    case 257u: goto L_08AE9440;
    case 258u: goto L_08AE9454;
    case 259u: goto L_08AE9458;
    case 260u: goto L_08AE947C;
    case 261u: goto L_08AE9484;
    case 262u: goto L_08AE94A4;
    case 263u: goto L_08AE94B0;
    case 264u: goto L_08AE94C8;
    case 265u: goto L_08AE94CC;
    case 266u: goto L_08AE94E4;
    case 267u: goto L_08AE950C;
    case 268u: goto L_08AE9518;
    case 269u: goto L_08AE952C;
    case 270u: goto L_08AE9530;
    case 271u: goto L_08AE9554;
    case 272u: goto L_08AE955C;
    case 273u: goto L_08AE957C;
    case 274u: goto L_08AE9588;
    case 275u: goto L_08AE95A0;
    case 276u: goto L_08AE95A4;
    case 277u: goto L_08AE95BC;
    case 278u: goto L_08AE95E4;
    case 279u: goto L_08AE95F0;
    case 280u: goto L_08AE9604;
    case 281u: goto L_08AE9608;
    case 282u: goto L_08AE962C;
    case 283u: goto L_08AE9634;
    case 284u: goto L_08AE9654;
    case 285u: goto L_08AE9660;
    case 286u: goto L_08AE9678;
    case 287u: goto L_08AE967C;
    case 288u: goto L_08AE9694;
    case 289u: goto L_08AE96BC;
    case 290u: goto L_08AE96C8;
    case 291u: goto L_08AE96DC;
    case 292u: goto L_08AE96E0;
    case 293u: goto L_08AE9704;
    case 294u: goto L_08AE970C;
    case 295u: goto L_08AE972C;
    case 296u: goto L_08AE9738;
    case 297u: goto L_08AE9750;
    case 298u: goto L_08AE9754;
    case 299u: goto L_08AE976C;
    case 300u: goto L_08AE9794;
    case 301u: goto L_08AE97A0;
    case 302u: goto L_08AE97B4;
    case 303u: goto L_08AE97B8;
    case 304u: goto L_08AE97DC;
    case 305u: goto L_08AE97E4;
    case 306u: goto L_08AE9804;
    case 307u: goto L_08AE9810;
    case 308u: goto L_08AE9828;
    case 309u: goto L_08AE982C;
    case 310u: goto L_08AE9844;
    case 311u: goto L_08AE9878;
    case 312u: goto L_08AE9884;
    case 313u: goto L_08AE9894;
    case 314u: goto L_08AE98B4;
    case 315u: goto L_08AE98F8;
    case 316u: goto L_08AE9914;
    case 317u: goto L_08AE9938;
    case 318u: goto L_08AE9988;
    case 319u: goto L_08AE99B0;
    case 320u: goto L_08AE99BC;
    case 321u: goto L_08AE99C4;
    case 322u: goto L_08AE99CC;
    case 323u: goto L_08AE99E0;
    case 324u: goto L_08AE99E8;
    case 325u: goto L_08AE99FC;
    case 326u: goto L_08AE9A04;
    case 327u: goto L_08AE9A08;
    case 328u: goto L_08AE9A10;
    case 329u: goto L_08AE9A28;
    case 330u: goto L_08AE9A30;
    case 331u: goto L_08AE9A3C;
    case 332u: goto L_08AE9A40;
    case 333u: goto L_08AE9A48;
    case 334u: goto L_08AE9A5C;
    case 335u: goto L_08AE9A90;
    case 336u: goto L_08AE9AC4;
    case 337u: goto L_08AE9AD0;
    case 338u: goto L_08AE9ADC;
    case 339u: goto L_08AE9AE8;
    case 340u: goto L_08AE9AF0;
    case 341u: goto L_08AE9AFC;
    case 342u: goto L_08AE9B04;
    case 343u: goto L_08AE9B14;
    case 344u: goto L_08AE9B34;
    case 345u: goto L_08AE9B68;
    case 346u: goto L_08AE9B74;
    case 347u: goto L_08AE9BA8;
    case 348u: goto L_08AE9BB4;
    case 349u: goto L_08AE9BC4;
    case 350u: goto L_08AE9BD8;
    case 351u: goto L_08AE9BEC;
    case 352u: goto L_08AE9C00;
    case 353u: goto L_08AE9C14;
    case 354u: goto L_08AE9C28;
    case 355u: goto L_08AE9C3C;
    case 356u: goto L_08AE9C50;
    case 357u: goto L_08AE9C64;
    case 358u: goto L_08AE9C8C;
    case 359u: goto L_08AE9CD8;
    case 360u: goto L_08AE9D00;
    case 361u: goto L_08AE9D0C;
    case 362u: goto L_08AE9D5C;
    case 363u: goto L_08AE9D84;
    case 364u: goto L_08AE9D90;
    case 365u: goto L_08AE9DB8;
    case 366u: goto L_08AE9DD0;
    case 367u: goto L_08AE9E1C;
    case 368u: goto L_08AE9E28;
    case 369u: goto L_08AE9E94;
    case 370u: goto L_08AE9EA4;
    case 371u: goto L_08AE9EAC;
    case 372u: goto L_08AE9EB4;
    case 373u: goto L_08AE9EB8;
    case 374u: goto L_08AE9ED8;
    case 375u: goto L_08AE9EE8;
    case 376u: goto L_08AE9EF8;
    case 377u: goto L_08AE9F00;
    case 378u: goto L_08AE9F0C;
    case 379u: goto L_08AE9F24;
    case 380u: goto L_08AE9F30;
    case 381u: goto L_08AE9F40;
    case 382u: goto L_08AE9F48;
    case 383u: goto L_08AE9F58;
    case 384u: goto L_08AE9F64;
    case 385u: goto L_08AE9F74;
    case 386u: goto L_08AE9F7C;
    case 387u: goto L_08AE9F8C;
    case 388u: goto L_08AE9F98;
    case 389u: goto L_08AE9FA8;
    case 390u: goto L_08AE9FB0;
    case 391u: goto L_08AE9FD8;
    case 392u: goto L_08AEA00C;
    case 393u: goto L_08AEA034;
    case 394u: goto L_08AEA040;
    case 395u: goto L_08AEA0A0;
    case 396u: goto L_08AEA0B4;
    case 397u: goto L_08AEA0CC;
    case 398u: goto L_08AEA0F0;
    case 399u: goto L_08AEA0FC;
    case 400u: goto L_08AEA12C;
    case 401u: goto L_08AEA150;
    case 402u: goto L_08AEA168;
    case 403u: goto L_08AEA1C8;
    case 404u: goto L_08AEA1F4;
    case 405u: goto L_08AEA200;
    case 406u: goto L_08AEA20C;
    case 407u: goto L_08AEA214;
    case 408u: goto L_08AEA228;
    case 409u: goto L_08AEA230;
    case 410u: goto L_08AEA244;
    case 411u: goto L_08AEA24C;
    case 412u: goto L_08AEA250;
    case 413u: goto L_08AEA258;
    case 414u: goto L_08AEA260;
    case 415u: goto L_08AEA268;
    case 416u: goto L_08AEA270;
    case 417u: goto L_08AEA278;
    case 418u: goto L_08AEA28C;
    case 419u: goto L_08AEA29C;
    case 420u: goto L_08AEA2A4;
    case 421u: goto L_08AEA2A8;
    case 422u: goto L_08AEA2B0;
    case 423u: goto L_08AEA2C8;
    case 424u: goto L_08AEA2D0;
    case 425u: goto L_08AEA2DC;
    case 426u: goto L_08AEA2E0;
    case 427u: goto L_08AEA2E8;
    case 428u: goto L_08AEA2FC;
    case 429u: goto L_08AEA334;
    case 430u: goto L_08AEA358;
    case 431u: goto L_08AEA364;
    case 432u: goto L_08AEA37C;
    case 433u: goto L_08AEA390;
    case 434u: goto L_08AEA3A0;
    case 435u: goto L_08AEA3B4;
    case 436u: goto L_08AEA3CC;
    case 437u: goto L_08AEA3EC;
    case 438u: goto L_08AEA3F8;
    case 439u: goto L_08AEA404;
    case 440u: goto L_08AEA410;
    case 441u: goto L_08AEA420;
    case 442u: goto L_08AEA434;
    case 443u: goto L_08AEA45C;
    case 444u: goto L_08AEA468;
    case 445u: goto L_08AEA478;
    case 446u: goto L_08AEA484;
    case 447u: goto L_08AEA490;
    case 448u: goto L_08AEA4A8;
    case 449u: goto L_08AEA4E0;
    case 450u: goto L_08AEA4EC;
    case 451u: goto L_08AEA514;
    case 452u: goto L_08AEA528;
    case 453u: goto L_08AEA534;
    case 454u: goto L_08AEA53C;
    case 455u: goto L_08AEA554;
    case 456u: goto L_08AEA578;
    case 457u: goto L_08AEA5A0;
    case 458u: goto L_08AEA5AC;
    case 459u: goto L_08AEA5C0;
    case 460u: goto L_08AEA5C4;
    case 461u: goto L_08AEA5E8;
    case 462u: goto L_08AEA5F0;
    case 463u: goto L_08AEA610;
    case 464u: goto L_08AEA61C;
    case 465u: goto L_08AEA634;
    case 466u: goto L_08AEA638;
    case 467u: goto L_08AEA650;
    case 468u: goto L_08AEA678;
    case 469u: goto L_08AEA684;
    case 470u: goto L_08AEA6B0;
    case 471u: goto L_08AEA6E0;
    case 472u: goto L_08AEA6EC;
    case 473u: goto L_08AEA70C;
    case 474u: goto L_08AEA728;
    case 475u: goto L_08AEA750;
    case 476u: goto L_08AEA75C;
    case 477u: goto L_08AEA76C;
    case 478u: goto L_08AEA778;
    case 479u: goto L_08AEA784;
    case 480u: goto L_08AEA79C;
    case 481u: goto L_08AEA7D8;
    case 482u: goto L_08AEA7E4;
    case 483u: goto L_08AEA804;
    case 484u: goto L_08AEA80C;
    case 485u: goto L_08AEA81C;
    case 486u: goto L_08AEA828;
    case 487u: goto L_08AEA83C;
    case 488u: goto L_08AEA84C;
    case 489u: goto L_08AEA864;
    case 490u: goto L_08AEA878;
    case 491u: goto L_08AEA880;
    case 492u: goto L_08AEA894;
    case 493u: goto L_08AEA89C;
    case 494u: goto L_08AEA8B0;
    case 495u: goto L_08AEA8B8;
    case 496u: goto L_08AEA8CC;
    case 497u: goto L_08AEA8D4;
    case 498u: goto L_08AEA8E8;
    case 499u: goto L_08AEA8F0;
    case 500u: goto L_08AEA904;
    case 501u: goto L_08AEA90C;
    case 502u: goto L_08AEA920;
    case 503u: goto L_08AEA928;
    case 504u: goto L_08AEA93C;
    case 505u: goto L_08AEA944;
    case 506u: goto L_08AEA958;
    case 507u: goto L_08AEA960;
    case 508u: goto L_08AEA974;
    case 509u: goto L_08AEA97C;
    case 510u: goto L_08AEA990;
    case 511u: goto L_08AEA998;
    case 512u: goto L_08AEA9AC;
    case 513u: goto L_08AEA9B4;
    case 514u: goto L_08AEA9C8;
    case 515u: goto L_08AEA9D8;
    case 516u: goto L_08AEAA04;
    case 517u: goto L_08AEAA2C;
    case 518u: goto L_08AEAA38;
    case 519u: goto L_08AEAA50;
    case 520u: goto L_08AEAA60;
    case 521u: goto L_08AEAA84;
    case 522u: goto L_08AEAA8C;
    case 523u: goto L_08AEAAAC;
    case 524u: goto L_08AEAAB8;
    case 525u: goto L_08AEAAD0;
    case 526u: goto L_08AEAAD4;
    case 527u: goto L_08AEAAEC;
    case 528u: goto L_08AEAB14;
    case 529u: goto L_08AEAB34;
    case 530u: goto L_08AEAB40;
    case 531u: goto L_08AEAB50;
    case 532u: goto L_08AEAB98;
    case 533u: goto L_08AEAC00;
    case 534u: goto L_08AEAC34;
    case 535u: goto L_08AEAC68;
    case 536u: goto L_08AEAC9C;
    case 537u: goto L_08AEACCC;
    case 538u: goto L_08AEACF0;
    case 539u: goto L_08AEAD1C;
    case 540u: goto L_08AEAD2C;
    case 541u: goto L_08AEAD48;
    case 542u: goto L_08AEAD58;
    case 543u: goto L_08AEAD68;
    case 544u: goto L_08AEAD84;
    case 545u: goto L_08AEAD94;
    case 546u: goto L_08AEADA4;
    case 547u: goto L_08AEADB0;
    case 548u: goto L_08AEADBC;
    case 549u: goto L_08AEADCC;
    case 550u: goto L_08AEADD4;
    case 551u: goto L_08AEAE14;
    case 552u: goto L_08AEAE24;
    case 553u: goto L_08AEAE30;
    case 554u: goto L_08AEAE8C;
    case 555u: goto L_08AEAEB8;
    case 556u: goto L_08AEAEC8;
    case 557u: goto L_08AEAEE4;
    case 558u: goto L_08AEAEF4;
    case 559u: goto L_08AEAF04;
    case 560u: goto L_08AEAF20;
    case 561u: goto L_08AEAF30;
    case 562u: goto L_08AEAF40;
    case 563u: goto L_08AEAF4C;
    case 564u: goto L_08AEAF58;
    case 565u: goto L_08AEAF68;
    case 566u: goto L_08AEAF70;
    case 567u: goto L_08AEAFB0;
    case 568u: goto L_08AEAFC0;
    case 569u: goto L_08AEAFCC;
    case 570u: goto L_08AEB028;
    case 571u: goto L_08AEB058;
    case 572u: goto L_08AEB064;
    case 573u: goto L_08AEB07C;
    case 574u: goto L_08AEB098;
    case 575u: goto L_08AEB0C8;
    case 576u: goto L_08AEB0D4;
    case 577u: goto L_08AEB0EC;
    case 578u: goto L_08AEB108;
    case 579u: goto L_08AEB138;
    case 580u: goto L_08AEB144;
    case 581u: goto L_08AEB158;
    case 582u: goto L_08AEB168;
    case 583u: goto L_08AEB180;
    case 584u: goto L_08AEB19C;
    case 585u: goto L_08AEB1CC;
    case 586u: goto L_08AEB1D8;
    case 587u: goto L_08AEB1EC;
    case 588u: goto L_08AEB1FC;
    case 589u: goto L_08AEB214;
    case 590u: goto L_08AEB230;
    case 591u: goto L_08AEB254;
    case 592u: goto L_08AEB260;
    case 593u: goto L_08AEB274;
    case 594u: goto L_08AEB280;
    case 595u: goto L_08AEB28C;
    case 596u: goto L_08AEB29C;
    case 597u: goto L_08AEB2AC;
    case 598u: goto L_08AEB2C4;
    case 599u: goto L_08AEB2EC;
    case 600u: goto L_08AEB2F8;
    case 601u: goto L_08AEB308;
    case 602u: goto L_08AEB344;
    case 603u: goto L_08AEB35C;
    case 604u: goto L_08AEB37C;
    case 605u: goto L_08AEB388;
    case 606u: goto L_08AEB3A0;
    case 607u: goto L_08AEB3D0;
    case 608u: goto L_08AEB3DC;
    case 609u: goto L_08AEB3E4;
    case 610u: goto L_08AEB3F0;
    case 611u: goto L_08AEB40C;
    case 612u: goto L_08AEB414;
    case 613u: goto L_08AEB41C;
    case 614u: goto L_08AEB424;
    case 615u: goto L_08AEB434;
    case 616u: goto L_08AEB450;
    case 617u: goto L_08AEB480;
    case 618u: goto L_08AEB48C;
    case 619u: goto L_08AEB494;
    case 620u: goto L_08AEB4A0;
    case 621u: goto L_08AEB4BC;
    case 622u: goto L_08AEB4C4;
    case 623u: goto L_08AEB4CC;
    case 624u: goto L_08AEB4D4;
    case 625u: goto L_08AEB4E4;
    case 626u: goto L_08AEB500;
    case 627u: goto L_08AEB528;
    case 628u: goto L_08AEB534;
    case 629u: goto L_08AEB57C;
    case 630u: goto L_08AEB5A4;
    case 631u: goto L_08AEB5B0;
    case 632u: goto L_08AEB5F8;
    case 633u: goto L_08AEB620;
    case 634u: goto L_08AEB62C;
    case 635u: goto L_08AEB65C;
    case 636u: goto L_08AEB68C;
    case 637u: goto L_08AEB698;
    case 638u: goto L_08AEB6A0;
    case 639u: goto L_08AEB6AC;
    case 640u: goto L_08AEB6C0;
    case 641u: goto L_08AEB6DC;
    case 642u: goto L_08AEB70C;
    case 643u: goto L_08AEB720;
    case 644u: goto L_08AEB73C;
    case 645u: goto L_08AEB74C;
    case 646u: goto L_08AEB758;
    case 647u: goto L_08AEB764;
    case 648u: goto L_08AEB7A0;
    case 649u: goto L_08AEB7C0;
    case 650u: goto L_08AEB7CC;
    case 651u: goto L_08AEB7E8;
    case 652u: goto L_08AEB810;
    case 653u: goto L_08AEB81C;
    case 654u: goto L_08AEB858;
    case 655u: goto L_08AEB878;
    case 656u: goto L_08AEB884;
    case 657u: goto L_08AEB890;
    case 658u: goto L_08AEB8A4;
    case 659u: goto L_08AEB8CC;
    case 660u: goto L_08AEB8D8;
    case 661u: goto L_08AEB8E4;
    case 662u: goto L_08AEB908;
    case 663u: goto L_08AEB910;
    case 664u: goto L_08AEB930;
    case 665u: goto L_08AEB93C;
    case 666u: goto L_08AEB954;
    case 667u: goto L_08AEB958;
    case 668u: goto L_08AEB970;
    case 669u: goto L_08AEB998;
    case 670u: goto L_08AEB9A4;
    case 671u: goto L_08AEB9B0;
    case 672u: goto L_08AEB9D4;
    case 673u: goto L_08AEB9DC;
    case 674u: goto L_08AEB9FC;
    case 675u: goto L_08AEBA08;
    case 676u: goto L_08AEBA20;
    case 677u: goto L_08AEBA24;
    case 678u: goto L_08AEBA3C;
    case 679u: goto L_08AEBA64;
    case 680u: goto L_08AEBA70;
    case 681u: goto L_08AEBAAC;
    case 682u: goto L_08AEBADC;
    case 683u: goto L_08AEBAE8;
    case 684u: goto L_08AEBB38;
    case 685u: goto L_08AEBB40;
    case 686u: goto L_08AEBB48;
    case 687u: goto L_08AEBB60;
    case 688u: goto L_08AEBB7C;
    case 689u: goto L_08AEBB98;
    case 690u: goto L_08AEBBB8;
    case 691u: goto L_08AEBBC4;
    case 692u: goto L_08AEBBCC;
    case 693u: goto L_08AEBBD4;
    case 694u: goto L_08AEBBE8;
    case 695u: goto L_08AEBC20;
    case 696u: goto L_08AEBC2C;
    case 697u: goto L_08AEBC3C;
    case 698u: goto L_08AEBC64;
    case 699u: goto L_08AEBC84;
    case 700u: goto L_08AEBCC0;
    case 701u: goto L_08AEBCC8;
    case 702u: goto L_08AEBCCC;
    case 703u: goto L_08AEBCFC;
    case 704u: goto L_08AEBD0C;
    case 705u: goto L_08AEBD34;
    case 706u: goto L_08AEBD50;
    case 707u: goto L_08AEBD58;
    case 708u: goto L_08AEBD84;
    case 709u: goto L_08AEBDA0;
    case 710u: goto L_08AEBDB0;
    case 711u: goto L_08AEBDC8;
    case 712u: goto L_08AEBDD0;
    case 713u: goto L_08AEBDD8;
    case 714u: goto L_08AEBDE0;
    case 715u: goto L_08AEBDEC;
    case 716u: goto L_08AEBDFC;
    case 717u: goto L_08AEBE04;
    case 718u: goto L_08AEBE0C;
    case 719u: goto L_08AEBE28;
    case 720u: goto L_08AEBE30;
    case 721u: goto L_08AEBE38;
    case 722u: goto L_08AEBE54;
    case 723u: goto L_08AEBE5C;
    case 724u: goto L_08AEBE64;
    case 725u: goto L_08AEBE70;
    case 726u: goto L_08AEBE90;
    case 727u: goto L_08AEBE98;
    case 728u: goto L_08AEBEB4;
    case 729u: goto L_08AEBEBC;
    case 730u: goto L_08AEBEC4;
    case 731u: goto L_08AEBEE8;
    case 732u: goto L_08AEBF4C;
    case 733u: goto L_08AEBF54;
    case 734u: goto L_08AEBF64;
    case 735u: goto L_08AEBF70;
    case 736u: goto L_08AEBF7C;
    case 737u: goto L_08AEBF8C;
    case 738u: goto L_08AEBF94;
    case 739u: goto L_08AEBFB4;
    case 740u: goto L_08AEBFC8;
    case 741u: goto L_08AEBFD4;
    case 742u: goto L_08AEBFDC;
    case 743u: goto L_08AEBFE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AE8000:
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (0u < hot_regs.g4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE8014;
      }
      goto L_08AE8008;
    }
L_08AE8008:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[19] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE8030;
      }
      goto L_08AE8014;
    }
}
L_08AE8014:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[19] | g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE8030;
      }
      goto L_08AE802C;
    }
}
L_08AE802C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE8030;
L_08AE8030:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE8054:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 5u);
    hot_regs.g31 = (0x08AE807Cu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE807Cu) goto L_08AE807C;
    return;
L_08AE807C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE8088u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8088u) goto L_08AE8088;
    return;
L_08AE8088:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g31 = (0x08AE80A4u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 645u, 0x08832C74u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE80A4u) goto L_08AE80A4;
    return;
L_08AE80A4:
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
L_08AE80BC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE80E4u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE80E4u) goto L_08AE80E4;
    return;
L_08AE80E4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE80F0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE80F0u) goto L_08AE80F0;
    return;
L_08AE80F0:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (17008u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AE8128u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8128u) goto L_08AE8128;
    return;
L_08AE8128:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(208)));
    hot_regs.g5 = (512u << 16u);
    g4 = (g4 & hot_regs.g5);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE8164;
      }
      goto L_08AE8148;
    }
}
L_08AE8148:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8164;
      }
      goto L_08AE8154;
    }
L_08AE8154:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15969u << 16u);
    g4 = (g4 | 18350u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
    goto L_08AE8164;
}
L_08AE8164:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE817C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE81A4u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE81A4u) goto L_08AE81A4;
    return;
L_08AE81A4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE81B0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE81B0u) goto L_08AE81B0;
    return;
L_08AE81B0:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(616))))));
      if (branch_taken) {
          goto L_08AE81CC;
      }
      goto L_08AE81C0;
    }
L_08AE81C0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE81D8;
      }
      goto L_08AE81CC;
    }
}
L_08AE81CC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-129));
    g4 = (g4 & hot_regs.g6);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08AE81D8;
}
L_08AE81D8:
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
L_08AE81F0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE8218u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8218u) goto L_08AE8218;
    return;
L_08AE8218:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE8224u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8224u) goto L_08AE8224;
    return;
L_08AE8224:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (hot_regs.g2 | 0u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    g5 = (17076u << 16u);
    f13 = std::bit_cast<float>(g5);
    f12 = f12 - f13;
    g5 = (16457u << 16u);
    g5 = (g5 | 4059u);
    f14 = std::bit_cast<float>(g5);
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    g5 = (17204u << 16u);
    hot_regs.f15 = std::bit_cast<float>(g5);
    f14 = f14 / hot_regs.f15;
    f13 = std::bit_cast<float>(0u);
    g5 = (16585u << 16u);
    g5 = (g5 | 4059u);
    ctx.set_fpu_condition((f14 < f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    f12 = std::bit_cast<float>(g5);
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08AE8284;
      }
      goto L_08AE8270;
    }
}
}
L_08AE8270:
{
    float f14 = hot_regs.f14;
    f14 = f14 + hot_regs.f12;
    ctx.set_fpu_condition((f14 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08AE8270;
      }
      goto L_08AE8284;
    }
}
L_08AE8284:
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE82A8;
      }
      goto L_08AE8294;
    }
L_08AE8294:
{
    float f14 = hot_regs.f14;
    f14 = f14 - hot_regs.f12;
    ctx.set_fpu_condition((f14 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08AE8294;
      }
      goto L_08AE82A8;
    }
}
L_08AE82A8:
    hot_regs.g31 = (0x08AE82B0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 652u, 0x08832D48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE82B0u) goto L_08AE82B0;
    return;
L_08AE82B0:
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
L_08AE82C8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE82E8u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE82E8u) goto L_08AE82E8;
    return;
L_08AE82E8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE82F4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE82F4u) goto L_08AE82F4;
    return;
L_08AE82F4:
    hot_regs.g31 = (0x08AE82FCu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 653u, 0x08832D50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE82FCu) goto L_08AE82FC;
    return;
L_08AE82FC:
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
L_08AE8310:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 5u);
    hot_regs.g31 = (0x08AE8338u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8338u) goto L_08AE8338;
    return;
L_08AE8338:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE8344u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8344u) goto L_08AE8344;
    return;
L_08AE8344:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g31 = (0x08AE8360u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 654u, 0x08832D60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8360u) goto L_08AE8360;
    return;
L_08AE8360:
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
L_08AE8378:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE83A0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE83A0u) goto L_08AE83A0;
    return;
L_08AE83A0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE83ACu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE83ACu) goto L_08AE83AC;
    return;
L_08AE83AC:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(617))))));
      if (branch_taken) {
          goto L_08AE83C8;
      }
      goto L_08AE83BC;
    }
L_08AE83BC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE83D4;
      }
      goto L_08AE83C8;
    }
}
L_08AE83C8:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (g4 & hot_regs.g6);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08AE83D4;
}
L_08AE83D4:
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
L_08AE83EC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE8414u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8414u) goto L_08AE8414;
    return;
L_08AE8414:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE8420u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8420u) goto L_08AE8420;
    return;
L_08AE8420:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(384));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08AE8430u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 180u, 0x089DD23Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8430u) goto L_08AE8430;
    return;
L_08AE8430:
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
L_08AE8448:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE8468u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8468u) goto L_08AE8468;
    return;
L_08AE8468:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE8474u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8474u) goto L_08AE8474;
    return;
L_08AE8474:
    hot_regs.g31 = (0x08AE847Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 660u, 0x08832E04u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE847Cu) goto L_08AE847C;
    return;
L_08AE847C:
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
L_08AE8490:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE84C0u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE84C0u) goto L_08AE84C0;
    return;
L_08AE84C0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE84CCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE84CCu) goto L_08AE84CC;
    return;
L_08AE84CC:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(852)));
    hot_regs.g7 = (0u | 6u);
    { const bool branch_taken = hot_regs.g6 != hot_regs.g7;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AE8534;
      }
      goto L_08AE84E0;
    }
L_08AE84E0:
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AE84F4;
      }
      goto L_08AE84E8;
    }
L_08AE84E8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AE8508;
      }
      goto L_08AE84F4;
    }
L_08AE84F4:
    hot_regs.g6 = (0u | 3u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08AE8508;
      }
      goto L_08AE8500;
    }
L_08AE8500:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), hot_regs.g4);
    goto L_08AE8508;
L_08AE8508:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(92)));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(344));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (hot_regs.g5 + hot_regs.g7);
    hot_regs.g5 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (hot_regs.g7 | 0u);
    jump_target = ctx.gpr[8];
    hot_regs.g31 = (0x08AE852Cu);
    hot_regs.g6 = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE852Cu) goto L_08AE852C;
    return;
L_08AE852C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8558;
      }
      goto L_08AE8534;
    }
L_08AE8534:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(92)));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(344));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (hot_regs.g5 + hot_regs.g7);
    hot_regs.g5 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (hot_regs.g7 | 0u);
    jump_target = ctx.gpr[8];
    hot_regs.g31 = (0x08AE8558u);
    hot_regs.g6 = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8558u) goto L_08AE8558;
    return;
L_08AE8558:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE8574:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (2236u << 16u);
    ctx.gpr[16] = (hot_regs.g6 + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 3u);
    hot_regs.g31 = (0x08AE8598u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8598u) goto L_08AE8598;
    return;
L_08AE8598:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    g4 = (g4 << 24u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 24u));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g5 = (g5 << 24u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 24u));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3208)));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3208)));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(g5));
    hot_regs.g2 = (0u | 0u);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE85D4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE85F4u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE85F4u) goto L_08AE85F4;
    return;
L_08AE85F4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE8600u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8600u) goto L_08AE8600;
    return;
L_08AE8600:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8628;
      }
      goto L_08AE8610;
    }
L_08AE8610:
    hot_regs.g31 = (0x08AE8618u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 711u, 0x088331D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8618u) goto L_08AE8618;
    return;
L_08AE8618:
    hot_regs.g31 = (0x08AE8620u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 681u, 0x08832FA8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8620u) goto L_08AE8620;
    return;
L_08AE8620:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE863C;
      }
      goto L_08AE8628;
    }
L_08AE8628:
    hot_regs.g5 = (0u | 4u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08AE863C;
      }
      goto L_08AE8634;
    }
L_08AE8634:
    hot_regs.g31 = (0x08AE863Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 265u, 0x089F1478u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE863Cu) goto L_08AE863C;
    return;
L_08AE863C:
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
L_08AE8650:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE8670u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8670u) goto L_08AE8670;
    return;
L_08AE8670:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE867Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE867Cu) goto L_08AE867C;
    return;
L_08AE867C:
    hot_regs.g31 = (0x08AE8684u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 676u, 0x08832F40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8684u) goto L_08AE8684;
    return;
L_08AE8684:
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
L_08AE8698:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE86C0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE86C0u) goto L_08AE86C0;
    return;
L_08AE86C0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE86CCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE86CCu) goto L_08AE86CC;
    return;
L_08AE86CC:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
      if (branch_taken) {
          goto L_08AE86F4;
      }
      goto L_08AE86DC;
    }
L_08AE86DC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (16384u << 16u);
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), g4);
    g4 = (g4 | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE874C;
      }
      goto L_08AE86F4;
    }
}
L_08AE86F4:
    hot_regs.g5 = (49152u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), hot_regs.g4);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-5));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), hot_regs.g4);
    hot_regs.g31 = (0x08AE8718u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 321u, 0x08809958u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8718u) goto L_08AE8718;
    return;
L_08AE8718:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE874C;
      }
      goto L_08AE8720;
    }
L_08AE8720:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (65520u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(168));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08AE874Cu);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE874Cu) goto L_08AE874C;
    return;
L_08AE874C:
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
L_08AE8764:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE8798u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8798u) goto L_08AE8798;
    return;
L_08AE8798:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE87A4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE87A4u) goto L_08AE87A4;
    return;
L_08AE87A4:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08AE87B4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE87B4u) goto L_08AE87B4;
    return;
L_08AE87B4:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8800;
      }
      goto L_08AE87C4;
    }
L_08AE87C4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(688)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8800;
      }
      goto L_08AE87D0;
    }
L_08AE87D0:
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AE87DC;
      }
      goto L_08AE87D8;
    }
L_08AE87D8:
    ctx.gpr[17] = (0u | 1u);
    goto L_08AE87DC;
L_08AE87DC:
    hot_regs.g31 = (0x08AE87E4u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE87E4u) goto L_08AE87E4;
    return;
L_08AE87E4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8800;
      }
      goto L_08AE87EC;
    }
L_08AE87EC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(688)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08AE8800;
      }
      goto L_08AE87FC;
    }
L_08AE87FC:
    ctx.gpr[17] = (0u | 1u);
    goto L_08AE8800;
L_08AE8800:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (0u < g17 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g5 = (0u < g5 ? 1u : 0u);
    g17 = (g4 ^ g5);
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g4 != 0u;
    g17 = (0u < g17 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08AE882C;
      }
      goto L_08AE8824;
    }
}
L_08AE8824:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08AE8874;
      }
      goto L_08AE882C;
    }
L_08AE882C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g5 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 9 ? 1u : 0u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g5));
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE8858;
      }
      goto L_08AE884C;
    }
}
L_08AE884C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE8874;
      }
      goto L_08AE8858;
    }
}
L_08AE8858:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] | g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE8874;
      }
      goto L_08AE8870;
    }
}
L_08AE8870:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE8874;
L_08AE8874:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE8894:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE88C8u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE88C8u) goto L_08AE88C8;
    return;
L_08AE88C8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE88D4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE88D4u) goto L_08AE88D4;
    return;
L_08AE88D4:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE88E4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE88E4u) goto L_08AE88E4;
    return;
L_08AE88E4:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g4 = (0u | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE890C;
      }
      goto L_08AE88F4;
    }
L_08AE88F4:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(688)));
    { const bool branch_taken = g17 == 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08AE890C;
      }
      goto L_08AE8900;
    }
}
L_08AE8900:
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08AE890C;
      }
      goto L_08AE8908;
    }
L_08AE8908:
    hot_regs.g4 = (0u | 1u);
    goto L_08AE890C;
L_08AE890C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE8938;
      }
      goto L_08AE8930;
    }
}
L_08AE8930:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AE8980;
      }
      goto L_08AE8938;
    }
L_08AE8938:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE8964;
      }
      goto L_08AE8958;
    }
}
L_08AE8958:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE8980;
      }
      goto L_08AE8964;
    }
}
L_08AE8964:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE8980;
      }
      goto L_08AE897C;
    }
}
L_08AE897C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE8980;
L_08AE8980:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE899C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08AE89BCu);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 625u, 0x08A06778u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE89BCu) goto L_08AE89BC;
    return;
L_08AE89BC:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    hot_regs.g5 = (0u | 111u);
      if (branch_taken) {
          goto L_08AE89D8;
      }
      goto L_08AE89C8;
    }
L_08AE89C8:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 9 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE89E0;
      }
      goto L_08AE89D4;
    }
L_08AE89D4:
    hot_regs.g5 = (0u | 111u);
    goto L_08AE89D8;
L_08AE89D8:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08AE89E8;
      }
      goto L_08AE89E0;
    }
L_08AE89E0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), hot_regs.g4);
      if (branch_taken) {
          goto L_08AE89F0;
      }
      goto L_08AE89E8;
    }
L_08AE89E8:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    goto L_08AE89F0;
L_08AE89F0:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AE8A00u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8A00u) goto L_08AE8A00;
    return;
L_08AE8A00:
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
L_08AE8A18:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[23] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(29704));
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.g6 = (0u | 5u);
    hot_regs.g31 = (0x08AE8A64u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8A64u) goto L_08AE8A64;
    return;
L_08AE8A64:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    g17 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[30] = (0u | 2u);
    ctx.gpr[20] = (g17 + static_cast<std::uint32_t>(-1));
    g4 = (g17 << 5u);
    g19 = (0u + g4);
    g4 = (g4 << 6u);
    g19 = (g19 + g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    ctx.gpr[23] = (2236u << 16u);
    g4 = (g17 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    ctx.gpr[19] = g19;
    goto L_08AE8A9C;
}
L_08AE8A9C:
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2080));
      if (branch_taken) {
          goto L_08AE8B7C;
      }
      goto L_08AE8AA8;
    }
L_08AE8AA8:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[22] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08AE8B7C;
      }
      goto L_08AE8AB4;
    }
L_08AE8AB4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AE8AD0;
      }
      goto L_08AE8ABC;
    }
L_08AE8ABC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
        goto L_08AE8AD8;
    }
    goto L_08AE8AD0;
}
L_08AE8AD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE8AF8;
      }
      goto L_08AE8AD8;
    }
L_08AE8AD8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + ctx.gpr[17]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 128u);
    if (g4 == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
        goto L_08AE8AF4;
    }
    goto L_08AE8AEC;
}
L_08AE8AEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE8AF8;
      }
      goto L_08AE8AF4;
    }
L_08AE8AF4:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[19]);
    goto L_08AE8AF8;
L_08AE8AF8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8B74;
      }
      goto L_08AE8B00;
    }
L_08AE8B00:
    hot_regs.g31 = (0x08AE8B08u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8B08u) goto L_08AE8B08;
    return;
L_08AE8B08:
    { const bool branch_taken = hot_regs.g2 == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08AE8B20;
      }
      goto L_08AE8B10;
    }
L_08AE8B10:
    hot_regs.g31 = (0x08AE8B18u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8B18u) goto L_08AE8B18;
    return;
L_08AE8B18:
    { const bool branch_taken = hot_regs.g2 != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08AE8B74;
      }
      goto L_08AE8B20;
    }
L_08AE8B20:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    if (hot_regs.g5 == g4) {
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    hot_regs.g4 = g4;
        goto L_08AE8B3C;
    }
    goto L_08AE8B30;
}
L_08AE8B30:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AE8B74;
      }
      goto L_08AE8B38;
    }
L_08AE8B38:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    goto L_08AE8B3C;
L_08AE8B3C:
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08AE8B74;
      }
      goto L_08AE8B44;
    }
L_08AE8B44:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(29704)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (0x08AE8B5Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 788u, 0x08AAF8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8B5Cu) goto L_08AE8B5C;
    return;
L_08AE8B5C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8B74;
      }
      goto L_08AE8B64;
    }
L_08AE8B64:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE8B70u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 139u, 0x08B6CC28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8B70u) goto L_08AE8B70;
    return;
L_08AE8B70:
    ctx.gpr[22] = (hot_regs.g2 | 0u);
    goto L_08AE8B74;
L_08AE8B74:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AE8A9C;
      }
      goto L_08AE8B7C;
    }
L_08AE8B7C:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(29704), ctx.gpr[22]);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08AE8B90u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8B90u) goto L_08AE8B90;
    return;
L_08AE8B90:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE8BC4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE8BECu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8BECu) goto L_08AE8BEC;
    return;
L_08AE8BEC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE8BF8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8BF8u) goto L_08AE8BF8;
    return;
L_08AE8BF8:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(617))))));
      if (branch_taken) {
          goto L_08AE8C18;
      }
      goto L_08AE8C08;
    }
L_08AE8C08:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-9));
    g4 = (g4 & hot_regs.g6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE8C20;
      }
      goto L_08AE8C18;
    }
}
L_08AE8C18:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 8u);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08AE8C20;
}
L_08AE8C20:
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
L_08AE8C38:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(156), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE8C68u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8C68u) goto L_08AE8C68;
    return;
L_08AE8C68:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE8C74u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8C74u) goto L_08AE8C74;
    return;
L_08AE8C74:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(656)));
    g4 = (g4 + static_cast<std::uint32_t>(150));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE8D74;
      }
      goto L_08AE8C90;
    }
}
L_08AE8C90:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(56));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 37u);
    hot_regs.g31 = (0x08AE8CA4u);
    hot_regs.g6 = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 117u, 0x08A40A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8CA4u) goto L_08AE8CA4;
    return;
L_08AE8CA4:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7616));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AE8CC8u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 1010u, 0x08AE3E58u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8CC8u) goto L_08AE8CC8;
    return;
L_08AE8CC8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    hot_regs.g31 = (0x08AE8D1Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 46u, 0x08A4842Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8D1Cu) goto L_08AE8D1C;
    return;
L_08AE8D1C:
    hot_regs.f20 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (15564u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AE8D50u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 255u, 0x08A41568u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8D50u) goto L_08AE8D50;
    return;
L_08AE8D50:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.g6 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (0u | 55u);
    hot_regs.g31 = (0x08AE8D6Cu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8D6Cu) goto L_08AE8D6C;
    return;
L_08AE8D6C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(656), hot_regs.g4);
    goto L_08AE8D74;
L_08AE8D74:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE8D98:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE8DB8u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8DB8u) goto L_08AE8DB8;
    return;
L_08AE8DB8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE8DC4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8DC4u) goto L_08AE8DC4;
    return;
L_08AE8DC4:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8DD4;
      }
      goto L_08AE8DD0;
    }
L_08AE8DD0:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(688), 0u);
    goto L_08AE8DD4;
L_08AE8DD4:
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
L_08AE8DE8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE8E10u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8E10u) goto L_08AE8E10;
    return;
L_08AE8E10:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE8E1Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8E1Cu) goto L_08AE8E1C;
    return;
L_08AE8E1C:
    hot_regs.g4 = (0u | 0u);
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8E44;
      }
      goto L_08AE8E28;
    }
L_08AE8E28:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29704)));
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 8u));
    { const bool branch_taken = static_cast<std::int32_t>(g17) <= 0;
    hot_regs.g5 = (static_cast<std::int32_t>(g17) < 40 ? 1u : 0u);
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08AE8E44;
      }
      goto L_08AE8E38;
    }
}
L_08AE8E38:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8E44;
      }
      goto L_08AE8E40;
    }
L_08AE8E40:
    hot_regs.g4 = (0u | 1u);
    goto L_08AE8E44;
L_08AE8E44:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE8E70;
      }
      goto L_08AE8E68;
    }
}
L_08AE8E68:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AE8EB8;
      }
      goto L_08AE8E70;
    }
L_08AE8E70:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE8E9C;
      }
      goto L_08AE8E90;
    }
}
L_08AE8E90:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE8EB8;
      }
      goto L_08AE8E9C;
    }
}
L_08AE8E9C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE8EB8;
      }
      goto L_08AE8EB4;
    }
}
L_08AE8EB4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE8EB8;
L_08AE8EB8:
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
L_08AE8ED0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE8EF0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8EF0u) goto L_08AE8EF0;
    return;
L_08AE8EF0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8F08;
      }
      goto L_08AE8EFC;
    }
L_08AE8EFC:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1781), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AE8F0C;
      }
      goto L_08AE8F08;
    }
L_08AE8F08:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1781), static_cast<std::uint8_t>(0u));
    goto L_08AE8F0C;
L_08AE8F0C:
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
L_08AE8F20:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE8F50u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8F50u) goto L_08AE8F50;
    return;
L_08AE8F50:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE8F5Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8F5Cu) goto L_08AE8F5C;
    return;
L_08AE8F5C:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(236)));
      if (branch_taken) {
          goto L_08AE8FB4;
      }
      goto L_08AE8F6C;
    }
L_08AE8F6C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (16384u << 16u);
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(236), g4);
    g4 = (g4 | 4u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(236), g4);
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE900C;
      }
      goto L_08AE8F8C;
    }
}
L_08AE8F8C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AE8F98u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8F98u) goto L_08AE8F98;
    return;
L_08AE8F98:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    hot_regs.g4 = (hot_regs.g4 | 2048u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g31 = (0x08AE8FACu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8FACu) goto L_08AE8FAC;
    return;
L_08AE8FAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE900C;
      }
      goto L_08AE8FB4;
    }
L_08AE8FB4:
    hot_regs.g5 = (49152u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(236), hot_regs.g4);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-5));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(236), hot_regs.g4);
    hot_regs.g31 = (0x08AE8FD8u);
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 321u, 0x08809958u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE8FD8u) goto L_08AE8FD8;
    return;
L_08AE8FD8:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE900C;
      }
      goto L_08AE8FE0;
    }
L_08AE8FE0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (65520u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(168));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08AE900Cu);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE900Cu) goto L_08AE900C;
    return;
L_08AE900C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE9028:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE9058u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9058u) goto L_08AE9058;
    return;
L_08AE9058:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE9064u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9064u) goto L_08AE9064;
    return;
L_08AE9064:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
      if (branch_taken) {
          goto L_08AE90B4;
      }
      goto L_08AE9074;
    }
L_08AE9074:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-8193));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), g4);
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE9110;
      }
      goto L_08AE908C;
    }
}
L_08AE908C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AE9098u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9098u) goto L_08AE9098;
    return;
L_08AE9098:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g4 = (hot_regs.g4 | 2048u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g31 = (0x08AE90ACu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE90ACu) goto L_08AE90AC;
    return;
L_08AE90AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9110;
      }
      goto L_08AE90B4;
    }
L_08AE90B4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 8192u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (g4 & 2048u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE9110;
      }
      goto L_08AE90CC;
    }
}
L_08AE90CC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u + static_cast<std::uint32_t>(-2049));
    g4 = (g4 & g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), g4);
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 2048u);
    { const bool branch_taken = g5 != 0u;
    g4 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE90F8;
      }
      goto L_08AE90E8;
    }
}
L_08AE90E8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g5 = (g5 & 2048u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE9100;
      }
      goto L_08AE90F8;
    }
}
L_08AE90F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08AE9100;
}
L_08AE9100:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9110;
      }
      goto L_08AE9108;
    }
L_08AE9108:
    hot_regs.g31 = (0x08AE9110u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9110u) goto L_08AE9110;
    return;
L_08AE9110:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE912C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 4u);
    hot_regs.g31 = (0x08AE9170u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9170u) goto L_08AE9170;
    return;
L_08AE9170:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(12)));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (g4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE922C;
      }
      goto L_08AE9194;
    }
}
L_08AE9194:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    ctx.gpr[16] = (0u | 1u);
    g4 = (ctx.gpr[18] << 5u);
    g17 = (0u + g4);
    g4 = (g4 << 6u);
    g17 = (g17 + g4);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    goto L_08AE91A8;
}
L_08AE91A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AE91C4;
      }
      goto L_08AE91B0;
    }
L_08AE91B0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
    ctx.gpr[20] = g20;
        goto L_08AE91CC;
    }
    goto L_08AE91C4;
}
L_08AE91C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE91EC;
      }
      goto L_08AE91CC;
    }
L_08AE91CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + ctx.gpr[18]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 128u);
    if (g4 == 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
        goto L_08AE91E8;
    }
    goto L_08AE91E0;
}
L_08AE91E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE91EC;
      }
      goto L_08AE91E8;
    }
L_08AE91E8:
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[17]);
    goto L_08AE91EC;
L_08AE91EC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9218;
      }
      goto L_08AE91F4;
    }
L_08AE91F4:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08AE920Cu);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 788u, 0x08AAF8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE920Cu) goto L_08AE920C;
    return;
L_08AE920C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9218;
      }
      goto L_08AE9214;
    }
L_08AE9214:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(680), ctx.gpr[16]);
    goto L_08AE9218;
L_08AE9218:
{
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.g4 = (g18 | 0u);
    g18 = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (g18 | 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2080));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08AE91A8;
      }
      goto L_08AE922C;
    }
}
L_08AE922C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE9260:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE9288u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9288u) goto L_08AE9288;
    return;
L_08AE9288:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE9294u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9294u) goto L_08AE9294;
    return;
L_08AE9294:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08AE92A0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 190u, 0x08945304u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE92A0u) goto L_08AE92A0;
    return;
L_08AE92A0:
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
L_08AE92B8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE92D8u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE92D8u) goto L_08AE92D8;
    return;
L_08AE92D8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE92E4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE92E4u) goto L_08AE92E4;
    return;
L_08AE92E4:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9318;
      }
      goto L_08AE92F4;
    }
L_08AE92F4:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (g4 | 0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(1653))))));
    hot_regs.g6 = (g4 & 7u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE9318;
      }
      goto L_08AE9308;
    }
}
L_08AE9308:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-8));
    g4 = (g4 & hot_regs.g6);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1653), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(1656), 0u);
    hot_regs.g4 = g4;
    goto L_08AE9318;
}
L_08AE9318:
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
L_08AE932C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE9354u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9354u) goto L_08AE9354;
    return;
L_08AE9354:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE9360u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9360u) goto L_08AE9360;
    return;
L_08AE9360:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (0u | 0u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(86))))));
    hot_regs.g6 = (g5 < static_cast<std::uint32_t>(170) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g5 = (g5 < static_cast<std::uint32_t>(-947) ? 1u : 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE9380;
      }
      goto L_08AE9374;
    }
}
L_08AE9374:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9380;
      }
      goto L_08AE937C;
    }
L_08AE937C:
    hot_regs.g4 = (0u | 1u);
    goto L_08AE9380;
L_08AE9380:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE93AC;
      }
      goto L_08AE93A4;
    }
}
L_08AE93A4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AE93F4;
      }
      goto L_08AE93AC;
    }
L_08AE93AC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE93D8;
      }
      goto L_08AE93CC;
    }
}
L_08AE93CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE93F4;
      }
      goto L_08AE93D8;
    }
}
L_08AE93D8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE93F4;
      }
      goto L_08AE93F0;
    }
}
L_08AE93F0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE93F4;
L_08AE93F4:
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
L_08AE940C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE9434u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9434u) goto L_08AE9434;
    return;
L_08AE9434:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE9440u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9440u) goto L_08AE9440;
    return;
L_08AE9440:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(852)));
    hot_regs.g6 = (0u | 6u);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08AE9458;
      }
      goto L_08AE9454;
    }
L_08AE9454:
    hot_regs.g4 = (0u | 1u);
    goto L_08AE9458;
L_08AE9458:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE9484;
      }
      goto L_08AE947C;
    }
}
L_08AE947C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AE94CC;
      }
      goto L_08AE9484;
    }
L_08AE9484:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE94B0;
      }
      goto L_08AE94A4;
    }
}
L_08AE94A4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE94CC;
      }
      goto L_08AE94B0;
    }
}
L_08AE94B0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE94CC;
      }
      goto L_08AE94C8;
    }
}
L_08AE94C8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE94CC;
L_08AE94CC:
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
L_08AE94E4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE950Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE950Cu) goto L_08AE950C;
    return;
L_08AE950C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE9518u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9518u) goto L_08AE9518;
    return;
L_08AE9518:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(852)));
    hot_regs.g6 = (0u | 5u);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08AE9530;
      }
      goto L_08AE952C;
    }
L_08AE952C:
    hot_regs.g4 = (0u | 1u);
    goto L_08AE9530;
L_08AE9530:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE955C;
      }
      goto L_08AE9554;
    }
}
L_08AE9554:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AE95A4;
      }
      goto L_08AE955C;
    }
L_08AE955C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE9588;
      }
      goto L_08AE957C;
    }
}
L_08AE957C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE95A4;
      }
      goto L_08AE9588;
    }
}
L_08AE9588:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE95A4;
      }
      goto L_08AE95A0;
    }
}
L_08AE95A0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE95A4;
L_08AE95A4:
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
L_08AE95BC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE95E4u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE95E4u) goto L_08AE95E4;
    return;
L_08AE95E4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE95F0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE95F0u) goto L_08AE95F0;
    return;
L_08AE95F0:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(852)));
    hot_regs.g6 = (0u | 4u);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08AE9608;
      }
      goto L_08AE9604;
    }
L_08AE9604:
    hot_regs.g4 = (0u | 1u);
    goto L_08AE9608;
L_08AE9608:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE9634;
      }
      goto L_08AE962C;
    }
}
L_08AE962C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AE967C;
      }
      goto L_08AE9634;
    }
L_08AE9634:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE9660;
      }
      goto L_08AE9654;
    }
}
L_08AE9654:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE967C;
      }
      goto L_08AE9660;
    }
}
L_08AE9660:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE967C;
      }
      goto L_08AE9678;
    }
}
L_08AE9678:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE967C;
L_08AE967C:
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
L_08AE9694:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE96BCu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE96BCu) goto L_08AE96BC;
    return;
L_08AE96BC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE96C8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE96C8u) goto L_08AE96C8;
    return;
L_08AE96C8:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (0u | 0u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(1060))))));
    g5 = (g5 & 1u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE96E0;
      }
      goto L_08AE96DC;
    }
}
L_08AE96DC:
    hot_regs.g4 = (0u | 1u);
    goto L_08AE96E0;
L_08AE96E0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE970C;
      }
      goto L_08AE9704;
    }
}
L_08AE9704:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AE9754;
      }
      goto L_08AE970C;
    }
L_08AE970C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE9738;
      }
      goto L_08AE972C;
    }
}
L_08AE972C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE9754;
      }
      goto L_08AE9738;
    }
}
L_08AE9738:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE9754;
      }
      goto L_08AE9750;
    }
}
L_08AE9750:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE9754;
L_08AE9754:
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
L_08AE976C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE9794u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9794u) goto L_08AE9794;
    return;
L_08AE9794:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE97A0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE97A0u) goto L_08AE97A0;
    return;
L_08AE97A0:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (0u | 0u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(615))))));
    g5 = (g5 & 16u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE97B8;
      }
      goto L_08AE97B4;
    }
}
L_08AE97B4:
    hot_regs.g4 = (0u | 1u);
    goto L_08AE97B8;
L_08AE97B8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE97E4;
      }
      goto L_08AE97DC;
    }
}
L_08AE97DC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AE982C;
      }
      goto L_08AE97E4;
    }
L_08AE97E4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE9810;
      }
      goto L_08AE9804;
    }
}
L_08AE9804:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE982C;
      }
      goto L_08AE9810;
    }
}
L_08AE9810:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE982C;
      }
      goto L_08AE9828;
    }
}
L_08AE9828:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE982C;
L_08AE982C:
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
L_08AE9844:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE9878u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9878u) goto L_08AE9878;
    return;
L_08AE9878:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE9884u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9884u) goto L_08AE9884;
    return;
L_08AE9884:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08AE9894u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9894u) goto L_08AE9894;
    return;
L_08AE9894:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (48972u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (49049u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.g31 = (0x08AE98B4u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE98B4u) goto L_08AE98B4;
    return;
L_08AE98B4:
    hot_regs.f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f14 = hot_regs.f20 + hot_regs.f12;
    ctx.fpr[24] = std::bit_cast<float>(0u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.f15 = hot_regs.f15 - ctx.fpr[16];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = ctx.fpr[16] - hot_regs.f12;
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x08AE98F8u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE98F8u) goto L_08AE98F8;
    return;
L_08AE98F8:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.g6 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (0u | 23u);
    hot_regs.g31 = (0x08AE9914u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9914u) goto L_08AE9914;
    return;
L_08AE9914:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE9938:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (2236u << 16u);
    ctx.gpr[30] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g5);
    ctx.gpr[18] = (ctx.gpr[22] + static_cast<std::uint32_t>(29704));
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g6 = (0u | 4u);
    hot_regs.g31 = (0x08AE9988u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9988u) goto L_08AE9988;
    return;
L_08AE9988:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    g17 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (g17 + static_cast<std::uint32_t>(-1));
    g4 = (g17 << 5u);
    g19 = (0u + g4);
    g4 = (g4 << 6u);
    g19 = (g19 + g4);
    g4 = (g17 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    ctx.gpr[19] = g19;
    goto L_08AE99B0;
}
L_08AE99B0:
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2080));
      if (branch_taken) {
          goto L_08AE9A48;
      }
      goto L_08AE99BC;
    }
L_08AE99BC:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08AE9A48;
      }
      goto L_08AE99C4;
    }
L_08AE99C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AE99E0;
      }
      goto L_08AE99CC;
    }
L_08AE99CC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
        goto L_08AE99E8;
    }
    goto L_08AE99E0;
}
L_08AE99E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE9A08;
      }
      goto L_08AE99E8;
    }
L_08AE99E8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + ctx.gpr[17]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 128u);
    if (g4 == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
        goto L_08AE9A04;
    }
    goto L_08AE99FC;
}
L_08AE99FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE9A08;
      }
      goto L_08AE9A04;
    }
L_08AE9A04:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[19]);
    goto L_08AE9A08;
L_08AE9A08:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9A40;
      }
      goto L_08AE9A10;
    }
L_08AE9A10:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(29704)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (0x08AE9A28u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 788u, 0x08AAF8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9A28u) goto L_08AE9A28;
    return;
L_08AE9A28:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9A40;
      }
      goto L_08AE9A30;
    }
L_08AE9A30:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE9A3Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 139u, 0x08B6CC28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9A3Cu) goto L_08AE9A3C;
    return;
L_08AE9A3C:
    ctx.gpr[21] = (hot_regs.g2 | 0u);
    goto L_08AE9A40;
L_08AE9A40:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AE99B0;
      }
      goto L_08AE9A48;
    }
L_08AE9A48:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(29704), ctx.gpr[21]);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g31 = (0x08AE9A5Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9A5Cu) goto L_08AE9A5C;
    return;
L_08AE9A5C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE9A90:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08AE9AC4u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9AC4u) goto L_08AE9AC4;
    return;
L_08AE9AC4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE9AD0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9AD0u) goto L_08AE9AD0;
    return;
L_08AE9AD0:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9B04;
      }
      goto L_08AE9ADC;
    }
L_08AE9ADC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(688)));
    { const bool branch_taken = g4 == 0u;
    hot_regs.g5 = (g4 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE9AFC;
      }
      goto L_08AE9AE8;
    }
}
L_08AE9AE8:
    hot_regs.g31 = (0x08AE9AF0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 139u, 0x08B6CC28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9AF0u) goto L_08AE9AF0;
    return;
L_08AE9AF0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g2);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(688), 0u);
      if (branch_taken) {
          goto L_08AE9B04;
      }
      goto L_08AE9AFC;
    }
L_08AE9AFC:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    goto L_08AE9B04;
L_08AE9B04:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08AE9B14u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9B14u) goto L_08AE9B14;
    return;
L_08AE9B14:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE9B34:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.f20 = std::bit_cast<float>(0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AE9B68u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9B68u) goto L_08AE9B68;
    return;
L_08AE9B68:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE9B74u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9B74u) goto L_08AE9B74;
    return;
L_08AE9B74:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (hot_regs.g2 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(72)));
    g5 = (0u + static_cast<std::uint32_t>(-497));
    g4 = (g4 & g5);
    g4 = (g4 | 80u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(72), g4);
    g5 = (32u << 16u);
    g4 = (g4 | g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(72), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08AE9C8C;
      }
      goto L_08AE9BA8;
    }
}
L_08AE9BA8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AE9BB4u);
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(944));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 420u, 0x08B0DB74u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9BB4u) goto L_08AE9BB4;
    return;
L_08AE9BB4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-943));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08AE9C64;
      }
      goto L_08AE9BC4;
    }
L_08AE9BC4:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 12u);
    hot_regs.g6 = (0u | 5u);
    hot_regs.g31 = (0x08AE9BD8u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 310u, 0x088316CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9BD8u) goto L_08AE9BD8;
    return;
L_08AE9BD8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 13u);
    hot_regs.g6 = (0u | 6u);
    hot_regs.g31 = (0x08AE9BECu);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 310u, 0x088316CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9BECu) goto L_08AE9BEC;
    return;
L_08AE9BEC:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 18u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08AE9C00u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9C00u) goto L_08AE9C00;
    return;
L_08AE9C00:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 19u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08AE9C14u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9C14u) goto L_08AE9C14;
    return;
L_08AE9C14:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 10u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE9C28u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9C28u) goto L_08AE9C28;
    return;
L_08AE9C28:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 8u);
    hot_regs.g6 = (0u | 3u);
    hot_regs.g31 = (0x08AE9C3Cu);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9C3Cu) goto L_08AE9C3C;
    return;
L_08AE9C3C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 11u);
    hot_regs.g6 = (0u | 4u);
    hot_regs.g31 = (0x08AE9C50u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9C50u) goto L_08AE9C50;
    return;
L_08AE9C50:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 9u);
    hot_regs.g6 = (0u | 5u);
    hot_regs.g31 = (0x08AE9C64u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9C64u) goto L_08AE9C64;
    return;
L_08AE9C64:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store16(g17 + static_cast<std::uint32_t>(666), static_cast<std::uint16_t>(0u));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(1653))))));
    g5 = (0u + static_cast<std::uint32_t>(-8));
    g4 = (g4 & g5);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(1653), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(1653))))));
    g5 = (0u + static_cast<std::uint32_t>(-9));
    g4 = (g4 & g5);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(1653), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08AE9C8C;
}
L_08AE9C8C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(613))))));
    g5 = (0u + static_cast<std::uint32_t>(-17));
    g4 = (g4 & g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(613))))));
    g5 = (0u + static_cast<std::uint32_t>(-65));
    g4 = (g4 & g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(618))))));
    g5 = (0u + static_cast<std::uint32_t>(-33));
    g4 = (g4 & g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(g4));
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE9CD8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 4u);
    hot_regs.g31 = (0x08AE9D00u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9D00u) goto L_08AE9D00;
    return;
L_08AE9D00:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE9D0Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9D0Cu) goto L_08AE9D0C;
    return;
L_08AE9D0C:
{
    float f12 = hot_regs.f12;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(12)));
    g4 = (16968u << 16u);
    f15 = std::bit_cast<float>(g4);
    f12 = f12 / f15;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = hot_regs.f13 / f15;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    f12 = hot_regs.f14 / f15;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    { const std::uint32_t vfpu_address = g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f15 = f15;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08AE9D5C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 4u);
    hot_regs.g31 = (0x08AE9D84u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9D84u) goto L_08AE9D84;
    return;
L_08AE9D84:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE9D90u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9D90u) goto L_08AE9D90;
    return;
L_08AE9D90:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (16968u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 / hot_regs.f15;
    hot_regs.f13 = hot_regs.f13 / hot_regs.f15;
    hot_regs.f14 = hot_regs.f14 / hot_regs.f15;
    hot_regs.g31 = (0x08AE9DB8u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9DB8u) goto L_08AE9DB8;
    return;
L_08AE9DB8:
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
L_08AE9DD0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08AE9E1Cu);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9E1Cu) goto L_08AE9E1C;
    return;
L_08AE9E1C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE9E28u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9E28u) goto L_08AE9E28;
    return;
L_08AE9E28:
{
    float f12 = hot_regs.f12;
    float f24 = ctx.fpr[24];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (hot_regs.g2 | 0u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(24)));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
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
    g4 = (ctx.vfpu_scalar_bits_ct<0u>());
    f12 = std::bit_cast<float>(g4);
    g4 = (17204u << 16u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (16457u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    f12 = f12 / hot_regs.f22;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(16)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(20)));
    f24 = std::bit_cast<float>(0u);
    g4 = (17332u << 16u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f24)) && f12 == f24));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[26] = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    ctx.gpr[20] = g20;
    hot_regs.f12 = f12;
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_08AE9EAC;
      }
      goto L_08AE9E94;
    }
}
}
L_08AE9E94:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f13) || std::isnan(ctx.fpr[24])) && hot_regs.f13 == ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE9EAC;
      }
      goto L_08AE9EA4;
    }
L_08AE9EA4:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[24]; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
      if (branch_taken) {
          goto L_08AE9EB8;
      }
      goto L_08AE9EAC;
    }
L_08AE9EAC:
    hot_regs.g31 = (0x08AE9EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9EB4u) goto L_08AE9EB4;
    return;
L_08AE9EB4:
    { const float fs = ctx.fpr[0]; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    goto L_08AE9EB8;
L_08AE9EB8:
{
    float f12 = hot_regs.f12;
    f12 = f12 / hot_regs.f22;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(ctx.fpr[24])) && f12 == ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08AE9EF8;
      }
      goto L_08AE9ED8;
    }
}
L_08AE9ED8:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f13) || std::isnan(ctx.fpr[24])) && hot_regs.f13 == ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE9EF8;
      }
      goto L_08AE9EE8;
    }
L_08AE9EE8:
{
    float f20 = hot_regs.f20;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[24]; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08AE9F0C;
      }
      goto L_08AE9EF8;
    }
}
L_08AE9EF8:
    hot_regs.g31 = (0x08AE9F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9F00u) goto L_08AE9F00;
    return;
L_08AE9F00:
{
    float f20 = hot_regs.f20;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    hot_regs.f20 = f20;
    goto L_08AE9F0C;
}
L_08AE9F0C:
{
    float f22 = hot_regs.f22;
    f22 = hot_regs.f20 / f22;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f22));
    ctx.set_fpu_condition((f22 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_08AE9F30;
      }
      goto L_08AE9F24;
    }
}
L_08AE9F24:
    hot_regs.f14 = hot_regs.f22 + ctx.fpr[26];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f14));
      if (branch_taken) {
          goto L_08AE9F48;
      }
      goto L_08AE9F30;
    }
L_08AE9F30:
    ctx.set_fpu_condition((hot_regs.f22 <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE9F48;
      }
      goto L_08AE9F40;
    }
L_08AE9F40:
    hot_regs.f14 = hot_regs.f22 - ctx.fpr[26];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f14));
    goto L_08AE9F48;
L_08AE9F48:
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE9F64;
      }
      goto L_08AE9F58;
    }
L_08AE9F58:
{
    float f12 = hot_regs.f12;
    f12 = f12 + ctx.fpr[26];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08AE9F7C;
      }
      goto L_08AE9F64;
    }
}
L_08AE9F64:
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE9F7C;
      }
      goto L_08AE9F74;
    }
L_08AE9F74:
{
    float f12 = hot_regs.f12;
    f12 = f12 - ctx.fpr[26];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08AE9F7C;
}
L_08AE9F7C:
    ctx.set_fpu_condition((hot_regs.f13 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE9F98;
      }
      goto L_08AE9F8C;
    }
L_08AE9F8C:
    hot_regs.f12 = hot_regs.f13 + ctx.fpr[26];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08AE9FB0;
      }
      goto L_08AE9F98;
    }
L_08AE9F98:
    ctx.set_fpu_condition((hot_regs.f13 <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE9FB0;
      }
      goto L_08AE9FA8;
    }
L_08AE9FA8:
    hot_regs.f12 = hot_regs.f13 - ctx.fpr[26];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08AE9FB0;
L_08AE9FB0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AE9FD8u);
    hot_regs.g6 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE9FD8u) goto L_08AE9FD8;
    return;
L_08AE9FD8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AEA00C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 4u);
    hot_regs.g31 = (0x08AEA034u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA034u) goto L_08AEA034;
    return;
L_08AEA034:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEA040u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA040u) goto L_08AEA040;
    return;
L_08AEA040:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (16457u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 4059u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (17204u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 / hot_regs.f15;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f13 = hot_regs.f13 / hot_regs.f15;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[16]; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f14 = hot_regs.f14 / hot_regs.f15;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f14));
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
    hot_regs.g31 = (0x08AEA0A0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA0A0u) goto L_08AEA0A0;
    return;
L_08AEA0A0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x08AEA0B4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA0B4u) goto L_08AEA0B4;
    return;
L_08AEA0B4:
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
L_08AEA0CC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AEA0F0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA0F0u) goto L_08AEA0F0;
    return;
L_08AEA0F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEA0FCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA0FCu) goto L_08AEA0FC;
    return;
L_08AEA0FC:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(272));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    hot_regs.g6 = (16256u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g5 = (0u | 9u);
    hot_regs.g6 = (0u | 178u);
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08AEA12Cu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA12Cu) goto L_08AEA12C;
    return;
L_08AEA12C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(272));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 11u);
    hot_regs.g6 = (0u | 174u);
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08AEA150u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA150u) goto L_08AEA150;
    return;
L_08AEA150:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AEA168:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(29704));
    ctx.gpr[22] = (0u | 1u);
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    hot_regs.g6 = (0u | 5u);
    hot_regs.g31 = (0x08AEA1C8u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA1C8u) goto L_08AEA1C8;
    return;
L_08AEA1C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    g17 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (0u | 2u);
    hot_regs.f20 = std::bit_cast<float>(0u);
    ctx.gpr[20] = (g17 + static_cast<std::uint32_t>(-1));
    g4 = (g17 << 5u);
    g19 = (0u + g4);
    g4 = (g4 << 6u);
    g19 = (g19 + g4);
    g4 = (g17 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    ctx.gpr[19] = g19;
    goto L_08AEA1F4;
}
L_08AEA1F4:
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2080));
      if (branch_taken) {
          goto L_08AEA2E8;
      }
      goto L_08AEA200;
    }
L_08AEA200:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[21] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08AEA2E8;
      }
      goto L_08AEA20C;
    }
L_08AEA20C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AEA228;
      }
      goto L_08AEA214;
    }
L_08AEA214:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
        goto L_08AEA230;
    }
    goto L_08AEA228;
}
L_08AEA228:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEA250;
      }
      goto L_08AEA230;
    }
L_08AEA230:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + ctx.gpr[17]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 128u);
    if (g4 == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
        goto L_08AEA24C;
    }
    goto L_08AEA244;
}
L_08AEA244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEA250;
      }
      goto L_08AEA24C;
    }
L_08AEA24C:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[19]);
    goto L_08AEA250;
L_08AEA250:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA2E0;
      }
      goto L_08AEA258;
    }
L_08AEA258:
    hot_regs.g31 = (0x08AEA260u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA260u) goto L_08AEA260;
    return;
L_08AEA260:
    { const bool branch_taken = hot_regs.g2 == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08AEA278;
      }
      goto L_08AEA268;
    }
L_08AEA268:
    hot_regs.g31 = (0x08AEA270u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA270u) goto L_08AEA270;
    return;
L_08AEA270:
    { const bool branch_taken = hot_regs.g2 != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08AEA2E0;
      }
      goto L_08AEA278;
    }
L_08AEA278:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f20)) && f12 == hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08AEA2E0;
      }
      goto L_08AEA28C;
    }
}
L_08AEA28C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    if (hot_regs.g5 == g4) {
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    hot_regs.g4 = g4;
        goto L_08AEA2A8;
    }
    goto L_08AEA29C;
}
L_08AEA29C:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AEA2E0;
      }
      goto L_08AEA2A4;
    }
L_08AEA2A4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    goto L_08AEA2A8;
L_08AEA2A8:
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08AEA2E0;
      }
      goto L_08AEA2B0;
    }
L_08AEA2B0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(29704)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (0x08AEA2C8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 788u, 0x08AAF8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA2C8u) goto L_08AEA2C8;
    return;
L_08AEA2C8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA2E0;
      }
      goto L_08AEA2D0;
    }
L_08AEA2D0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEA2DCu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 139u, 0x08B6CC28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA2DCu) goto L_08AEA2DC;
    return;
L_08AEA2DC:
    ctx.gpr[21] = (hot_regs.g2 | 0u);
    goto L_08AEA2E0;
L_08AEA2E0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AEA1F4;
      }
      goto L_08AEA2E8;
    }
L_08AEA2E8:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(29704), ctx.gpr[21]);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08AEA2FCu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA2FCu) goto L_08AEA2FC;
    return;
L_08AEA2FC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AEA334:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AEA358u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA358u) goto L_08AEA358;
    return;
L_08AEA358:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEA364u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA364u) goto L_08AEA364;
    return;
L_08AEA364:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(944));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g31 = (0x08AEA37Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 377u, 0x08B0D904u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA37Cu) goto L_08AEA37C;
    return;
L_08AEA37C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 19u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08AEA390u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA390u) goto L_08AEA390;
    return;
L_08AEA390:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g31 = (0x08AEA3A0u);
    hot_regs.g6 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 377u, 0x08B0D904u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA3A0u) goto L_08AEA3A0;
    return;
L_08AEA3A0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 19u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08AEA3B4u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA3B4u) goto L_08AEA3B4;
    return;
L_08AEA3B4:
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
L_08AEA3CC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AEA3ECu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA3ECu) goto L_08AEA3EC;
    return;
L_08AEA3EC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEA3F8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA3F8u) goto L_08AEA3F8;
    return;
L_08AEA3F8:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08AEA404u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA404u) goto L_08AEA404;
    return;
L_08AEA404:
    hot_regs.g4 = (0u | 3u);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08AEA420;
      }
      goto L_08AEA410;
    }
L_08AEA410:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15969u << 16u);
    g4 = (g4 | 18350u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
    goto L_08AEA420;
}
L_08AEA420:
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
L_08AEA434:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AEA45Cu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA45Cu) goto L_08AEA45C;
    return;
L_08AEA45C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEA468u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA468u) goto L_08AEA468;
    return;
L_08AEA468:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(618))))));
      if (branch_taken) {
          goto L_08AEA484;
      }
      goto L_08AEA478;
    }
L_08AEA478:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AEA490;
      }
      goto L_08AEA484;
    }
}
L_08AEA484:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (g4 & hot_regs.g6);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08AEA490;
}
L_08AEA490:
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
L_08AEA4A8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 4u);
    hot_regs.g31 = (0x08AEA4E0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA4E0u) goto L_08AEA4E0;
    return;
L_08AEA4E0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEA4ECu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA4ECu) goto L_08AEA4EC;
    return;
L_08AEA4EC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(4)));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(8)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(12)));
    g4 = (49864u << 16u);
    f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    g4 = (50042u << 16u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08AEA528;
      }
      goto L_08AEA514;
    }
}
}
L_08AEA514:
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
        goto L_08AEA53C;
    }
    goto L_08AEA528;
L_08AEA528:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08AEA534u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA534u) goto L_08AEA534;
    return;
L_08AEA534:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08AEA53C;
L_08AEA53C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08AEA554u);
    hot_regs.g6 = (0u | 1u);
    goto L_08AEBC84;
L_08AEA554:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
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
L_08AEA578:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AEA5A0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA5A0u) goto L_08AEA5A0;
    return;
L_08AEA5A0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEA5ACu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA5ACu) goto L_08AEA5AC;
    return;
L_08AEA5AC:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (0u | 0u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(618))))));
    g5 = (g5 & 32u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AEA5C4;
      }
      goto L_08AEA5C0;
    }
}
L_08AEA5C0:
    hot_regs.g4 = (0u | 1u);
    goto L_08AEA5C4;
L_08AEA5C4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AEA5F0;
      }
      goto L_08AEA5E8;
    }
}
L_08AEA5E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AEA638;
      }
      goto L_08AEA5F0;
    }
L_08AEA5F0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AEA61C;
      }
      goto L_08AEA610;
    }
}
L_08AEA610:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AEA638;
      }
      goto L_08AEA61C;
    }
}
L_08AEA61C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AEA638;
      }
      goto L_08AEA634;
    }
}
L_08AEA634:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AEA638;
L_08AEA638:
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
L_08AEA650:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AEA678u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA678u) goto L_08AEA678;
    return;
L_08AEA678:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEA684u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA684u) goto L_08AEA684;
    return;
L_08AEA684:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    f12 = std::bit_cast<float>(hot_regs.g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(632), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(f12));
    g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08AEA6B0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AEA6E0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA6E0u) goto L_08AEA6E0;
    return;
L_08AEA6E0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEA6ECu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA6ECu) goto L_08AEA6EC;
    return;
L_08AEA6EC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(632)));
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AEA70Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA70Cu) goto L_08AEA70C;
    return;
L_08AEA70C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AEA728:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AEA750u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA750u) goto L_08AEA750;
    return;
L_08AEA750:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEA75Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA75Cu) goto L_08AEA75C;
    return;
L_08AEA75C:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(618))))));
      if (branch_taken) {
          goto L_08AEA778;
      }
      goto L_08AEA76C;
    }
L_08AEA76C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AEA784;
      }
      goto L_08AEA778;
    }
}
L_08AEA778:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-129));
    g4 = (g4 & hot_regs.g6);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08AEA784;
}
L_08AEA784:
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
L_08AEA79C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AEA7D8u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA7D8u) goto L_08AEA7D8;
    return;
L_08AEA7D8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEA7E4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA7E4u) goto L_08AEA7E4;
    return;
L_08AEA7E4:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    ctx.gpr[17] = (0u | 5u);
    g4 = (16153u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(944));
    g4 = (17152u << 16u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    goto L_08AEA804;
}
L_08AEA804:
    hot_regs.g31 = (0x08AEA80Cu);
    ctx.gpr[20] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA80Cu) goto L_08AEA80C;
    return;
L_08AEA80C:
    ctx.set_fpu_condition((ctx.fpr[0] <= hot_regs.f22));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[20] = (0u | 1u);
        goto L_08AEA81C;
    }
    goto L_08AEA81C;
L_08AEA81C:
    hot_regs.g4 = (ctx.gpr[20] & 255u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA9C8;
      }
      goto L_08AEA828;
    }
L_08AEA828:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AEA83Cu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 388u, 0x08B0D978u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA83Cu) goto L_08AEA83C;
    return;
L_08AEA83C:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(-5));
    hot_regs.g5 = (hot_regs.g4 < static_cast<std::uint32_t>(13) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA9C8;
      }
      goto L_08AEA84C;
    }
L_08AEA84C:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(17064)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AEA864:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 18u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08AEA878u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA878u) goto L_08AEA878;
    return;
L_08AEA878:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA9C8;
      }
      goto L_08AEA880;
    }
L_08AEA880:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 19u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08AEA894u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA894u) goto L_08AEA894;
    return;
L_08AEA894:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA9C8;
      }
      goto L_08AEA89C;
    }
L_08AEA89C:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 10u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AEA8B0u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA8B0u) goto L_08AEA8B0;
    return;
L_08AEA8B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA9C8;
      }
      goto L_08AEA8B8;
    }
L_08AEA8B8:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 8u);
    hot_regs.g6 = (0u | 3u);
    hot_regs.g31 = (0x08AEA8CCu);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA8CCu) goto L_08AEA8CC;
    return;
L_08AEA8CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA9C8;
      }
      goto L_08AEA8D4;
    }
L_08AEA8D4:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 11u);
    hot_regs.g6 = (0u | 4u);
    hot_regs.g31 = (0x08AEA8E8u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA8E8u) goto L_08AEA8E8;
    return;
L_08AEA8E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA9C8;
      }
      goto L_08AEA8F0;
    }
L_08AEA8F0:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 9u);
    hot_regs.g6 = (0u | 5u);
    hot_regs.g31 = (0x08AEA904u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA904u) goto L_08AEA904;
    return;
L_08AEA904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA9C8;
      }
      goto L_08AEA90C;
    }
L_08AEA90C:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 15u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08AEA920u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 322u, 0x08831790u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA920u) goto L_08AEA920;
    return;
L_08AEA920:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA9C8;
      }
      goto L_08AEA928;
    }
L_08AEA928:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 14u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08AEA93Cu);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 322u, 0x08831790u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA93Cu) goto L_08AEA93C;
    return;
L_08AEA93C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA9C8;
      }
      goto L_08AEA944;
    }
L_08AEA944:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 17u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AEA958u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 322u, 0x08831790u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA958u) goto L_08AEA958;
    return;
L_08AEA958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA9C8;
      }
      goto L_08AEA960;
    }
L_08AEA960:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 16u);
    hot_regs.g6 = (0u | 3u);
    hot_regs.g31 = (0x08AEA974u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 322u, 0x08831790u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA974u) goto L_08AEA974;
    return;
L_08AEA974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA9C8;
      }
      goto L_08AEA97C;
    }
L_08AEA97C:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 20u);
    hot_regs.g6 = (0u | 4u);
    hot_regs.g31 = (0x08AEA990u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 322u, 0x08831790u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA990u) goto L_08AEA990;
    return;
L_08AEA990:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA9C8;
      }
      goto L_08AEA998;
    }
L_08AEA998:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 12u);
    hot_regs.g6 = (0u | 5u);
    hot_regs.g31 = (0x08AEA9ACu);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 322u, 0x08831790u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA9ACu) goto L_08AEA9AC;
    return;
L_08AEA9AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA9C8;
      }
      goto L_08AEA9B4;
    }
L_08AEA9B4:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 13u);
    hot_regs.g6 = (0u | 6u);
    hot_regs.g31 = (0x08AEA9C8u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 322u, 0x08831790u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEA9C8u) goto L_08AEA9C8;
    return;
L_08AEA9C8:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 18 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08AEA804;
      }
      goto L_08AEA9D8;
    }
}
L_08AEA9D8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AEAA04:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AEAA2Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEAA2Cu) goto L_08AEAA2C;
    return;
L_08AEAA2C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEAA38u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEAA38u) goto L_08AEAA38;
    return;
L_08AEAA38:
    hot_regs.g6 = (hot_regs.g2 | 0u);
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(619))))));
    hot_regs.g7 = (hot_regs.g5 & 2u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEAA60;
      }
      goto L_08AEAA50;
    }
L_08AEAA50:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (0u | 1u);
    hot_regs.g7 = (0u + static_cast<std::uint32_t>(-3));
    g5 = (g5 & hot_regs.g7);
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(619), static_cast<std::uint8_t>(g5));
    hot_regs.g5 = g5;
    goto L_08AEAA60;
}
L_08AEAA60:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AEAA8C;
      }
      goto L_08AEAA84;
    }
}
L_08AEAA84:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AEAAD4;
      }
      goto L_08AEAA8C;
    }
L_08AEAA8C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AEAAB8;
      }
      goto L_08AEAAAC;
    }
}
L_08AEAAAC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AEAAD4;
      }
      goto L_08AEAAB8;
    }
}
L_08AEAAB8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AEAAD4;
      }
      goto L_08AEAAD0;
    }
}
L_08AEAAD0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AEAAD4;
L_08AEAAD4:
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
L_08AEAAEC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08AEAB14u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 291u, 0x089D1AECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEAB14u) goto L_08AEAB14;
    return;
L_08AEAB14:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08AEAB34u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEAB34u) goto L_08AEAB34;
    return;
L_08AEAB34:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEAB40u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEAB40u) goto L_08AEAB40;
    return;
L_08AEAB40:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08AEAB50u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 1035u, 0x08AE3F8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEAB50u) goto L_08AEAB50;
    return;
L_08AEAB50:
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(86))))));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f12 = hot_regs.f14 - hot_regs.f15;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.f13 = ctx.fpr[16] + hot_regs.f15;
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    hot_regs.g31 = (0x08AEAB98u);
    hot_regs.f15 = ctx.fpr[16] - hot_regs.f15;
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEAB98u) goto L_08AEAB98;
    return;
L_08AEAB98:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), hot_regs.g6);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08AEAC00u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 584u, 0x088631C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEAC00u) goto L_08AEAC00;
    return;
L_08AEAC00:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(68));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08AEAC34u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 584u, 0x088631C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEAC34u) goto L_08AEAC34;
    return;
L_08AEAC34:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(72));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08AEAC68u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 584u, 0x088631C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEAC68u) goto L_08AEAC68;
    return;
L_08AEAC68:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.gpr[9] = (hot_regs.g29 + static_cast<std::uint32_t>(76));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08AEAC9Cu);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 584u, 0x088631C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEAC9Cu) goto L_08AEAC9C;
    return;
L_08AEAC9C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AEACCCu);
    hot_regs.g6 = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEACCCu) goto L_08AEACCC;
    return;
L_08AEACCC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AEACF0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(268), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(272), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(276), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(280), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AEAD1Cu);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEAD1Cu) goto L_08AEAD1C;
    return;
L_08AEAD1C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEAD2Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEAD2Cu) goto L_08AEAD2C;
    return;
L_08AEAD2C:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    hot_regs.g6 = (0u | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    ctx.gpr[18] = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_08AEAD58;
      }
      goto L_08AEAD48;
    }
L_08AEAD48:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (hot_regs.g5 << 2u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g6 = (hot_regs.g7 + g6);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = g6;
    goto L_08AEAD58;
}
L_08AEAD58:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(353)));
    g6 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    g6 = (hot_regs.g4 | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AEADB0;
      }
      goto L_08AEAD68;
    }
}
L_08AEAD68:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    g6 = (2232u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(16916));
    g8 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g8) ? 1u : 0u);
    { const bool branch_taken = g8 == 0u;
    hot_regs.g7 = (0u | 0u);
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08AEAD94;
      }
      goto L_08AEAD84;
    }
}
L_08AEAD84:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    g5 = (g5 << 2u);
    g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (g7 + g5);
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    goto L_08AEAD94;
}
L_08AEAD94:
    hot_regs.g5 = (hot_regs.g6 | 0u);
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g7 + static_cast<std::uint32_t>(353)));
    hot_regs.g31 = (0x08AEADA4u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEADA4u) goto L_08AEADA4;
    return;
L_08AEADA4:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    hot_regs.g6 = (hot_regs.g4 | 0u);
    goto L_08AEADB0;
L_08AEADB0:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AEADCC;
      }
      goto L_08AEADBC;
    }
}
L_08AEADBC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g5 << 2u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08AEADCC;
}
L_08AEADCC:
    hot_regs.g31 = (0x08AEADD4u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 764u, 0x08AA2FB4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEADD4u) goto L_08AEADD4;
    return;
L_08AEADD4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), hot_regs.g2);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(548), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(549), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(550), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(551), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g17 + static_cast<std::uint32_t>(86))))));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g6 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AEAE24;
      }
      goto L_08AEAE14;
    }
}
L_08AEAE14:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 << 2u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g5 + g4);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08AEAE24;
}
L_08AEAE24:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x08AEAE30u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 774u, 0x08AA3070u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEAE30u) goto L_08AEAE30;
    return;
L_08AEAE30:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(264), hot_regs.g2);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(264)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(552), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(553), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(554), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(555), static_cast<std::uint8_t>(g4));
    g4 = (ctx.gpr[16] << 24u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 24u));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(896), static_cast<std::uint8_t>(g4));
    g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(897), static_cast<std::uint8_t>(g4));
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(268)));
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(276)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(280)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AEAE8C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(268), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(272), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(276), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(280), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AEAEB8u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEAEB8u) goto L_08AEAEB8;
    return;
L_08AEAEB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEAEC8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEAEC8u) goto L_08AEAEC8;
    return;
L_08AEAEC8:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    hot_regs.g6 = (0u | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    ctx.gpr[18] = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_08AEAEF4;
      }
      goto L_08AEAEE4;
    }
L_08AEAEE4:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (hot_regs.g5 << 2u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g6 = (hot_regs.g7 + g6);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = g6;
    goto L_08AEAEF4;
}
L_08AEAEF4:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(354)));
    g6 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    g6 = (hot_regs.g4 | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AEAF4C;
      }
      goto L_08AEAF04;
    }
}
L_08AEAF04:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    g6 = (2232u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(16984));
    g8 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g8) ? 1u : 0u);
    { const bool branch_taken = g8 == 0u;
    hot_regs.g7 = (0u | 0u);
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08AEAF30;
      }
      goto L_08AEAF20;
    }
}
L_08AEAF20:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    g5 = (g5 << 2u);
    g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (g7 + g5);
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    goto L_08AEAF30;
}
L_08AEAF30:
    hot_regs.g5 = (hot_regs.g6 | 0u);
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g7 + static_cast<std::uint32_t>(354)));
    hot_regs.g31 = (0x08AEAF40u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEAF40u) goto L_08AEAF40;
    return;
L_08AEAF40:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    hot_regs.g6 = (hot_regs.g4 | 0u);
    goto L_08AEAF4C;
L_08AEAF4C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AEAF68;
      }
      goto L_08AEAF58;
    }
}
L_08AEAF58:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g5 << 2u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08AEAF68;
}
L_08AEAF68:
    hot_regs.g31 = (0x08AEAF70u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 784u, 0x08AA312Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEAF70u) goto L_08AEAF70;
    return;
L_08AEAF70:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), hot_regs.g2);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(548), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(549), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(550), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(551), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g17 + static_cast<std::uint32_t>(86))))));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g6 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AEAFC0;
      }
      goto L_08AEAFB0;
    }
}
L_08AEAFB0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 << 2u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g5 + g4);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08AEAFC0;
}
L_08AEAFC0:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x08AEAFCCu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 794u, 0x08AA31E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEAFCCu) goto L_08AEAFCC;
    return;
L_08AEAFCC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(264), hot_regs.g2);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(264)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(552), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(553), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(554), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(555), static_cast<std::uint8_t>(g4));
    g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(896), static_cast<std::uint8_t>(g4));
    g4 = (ctx.gpr[16] << 24u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 24u));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(897), static_cast<std::uint8_t>(g4));
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(268)));
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(276)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(280)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AEB028:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(268), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AEB058u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB058u) goto L_08AEB058;
    return;
L_08AEB058:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEB064u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB064u) goto L_08AEB064;
    return;
L_08AEB064:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(896))))));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AEB07Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB07Cu) goto L_08AEB07C;
    return;
L_08AEB07C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(264)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(268)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AEB098:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(268), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AEB0C8u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB0C8u) goto L_08AEB0C8;
    return;
L_08AEB0C8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEB0D4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB0D4u) goto L_08AEB0D4;
    return;
L_08AEB0D4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(897))))));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AEB0ECu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB0ECu) goto L_08AEB0EC;
    return;
L_08AEB0EC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(264)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(268)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AEB108:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08AEB138u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB138u) goto L_08AEB138;
    return;
L_08AEB138:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEB144u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB144u) goto L_08AEB144;
    return;
L_08AEB144:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(86))))));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AEB168;
      }
      goto L_08AEB158;
    }
}
L_08AEB158:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g5 << 2u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08AEB168;
}
L_08AEB168:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(353)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08AEB180u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB180u) goto L_08AEB180;
    return;
L_08AEB180:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AEB19C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08AEB1CCu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB1CCu) goto L_08AEB1CC;
    return;
L_08AEB1CC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEB1D8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB1D8u) goto L_08AEB1D8;
    return;
L_08AEB1D8:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(86))))));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AEB1FC;
      }
      goto L_08AEB1EC;
    }
}
L_08AEB1EC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g5 << 2u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08AEB1FC;
}
L_08AEB1FC:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(354)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08AEB214u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB214u) goto L_08AEB214;
    return;
L_08AEB214:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AEB230:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AEB254u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB254u) goto L_08AEB254;
    return;
L_08AEB254:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEB260u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB260u) goto L_08AEB260;
    return;
L_08AEB260:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(944));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AEB274u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 382u, 0x08B0D940u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB274u) goto L_08AEB274;
    return;
L_08AEB274:
    hot_regs.g4 = (hot_regs.g2 & 255u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB2AC;
      }
      goto L_08AEB280;
    }
L_08AEB280:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB2AC;
      }
      goto L_08AEB28C;
    }
L_08AEB28C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08AEB29Cu);
    hot_regs.g6 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 377u, 0x08B0D904u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB29Cu) goto L_08AEB29C;
    return;
L_08AEB29C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AEB2ACu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 3u, 0x08B00014u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB2ACu) goto L_08AEB2AC;
    return;
L_08AEB2AC:
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
L_08AEB2C4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AEB2ECu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB2ECu) goto L_08AEB2EC;
    return;
L_08AEB2EC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEB2F8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB2F8u) goto L_08AEB2F8;
    return;
L_08AEB2F8:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (hot_regs.g2 | 0u);
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g5 == 0u;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(864), g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AEB344;
      }
      goto L_08AEB308;
    }
}
L_08AEB308:
    hot_regs.g7 = (hot_regs.g4 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(864)));
    hot_regs.g4 = (hot_regs.g7 + static_cast<std::uint32_t>(880));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(48);
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
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (hot_regs.g7 | 0u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x08AEB344u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 828u, 0x0893FA88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB344u) goto L_08AEB344;
    return;
L_08AEB344:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AEB35C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AEB37Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB37Cu) goto L_08AEB37C;
    return;
L_08AEB37C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEB388u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB388u) goto L_08AEB388;
    return;
L_08AEB388:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(864), 0u);
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
L_08AEB3A0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08AEB3D0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB3D0u) goto L_08AEB3D0;
    return;
L_08AEB3D0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEB3DCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB3DCu) goto L_08AEB3DC;
    return;
L_08AEB3DC:
    hot_regs.g31 = (0x08AEB3E4u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 198u, 0x08B00BC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB3E4u) goto L_08AEB3E4;
    return;
L_08AEB3E4:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB41C;
      }
      goto L_08AEB3F0;
    }
L_08AEB3F0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 14u);
    g5 = (g5 ^ 8u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    g5 = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AEB41C;
      }
      goto L_08AEB40C;
    }
}
L_08AEB40C:
    hot_regs.g31 = (0x08AEB414u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 636u, 0x08B66A10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB414u) goto L_08AEB414;
    return;
L_08AEB414:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), hot_regs.g2);
      if (branch_taken) {
          goto L_08AEB424;
      }
      goto L_08AEB41C;
    }
L_08AEB41C:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    goto L_08AEB424;
L_08AEB424:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08AEB434u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB434u) goto L_08AEB434;
    return;
L_08AEB434:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AEB450:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08AEB480u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB480u) goto L_08AEB480;
    return;
L_08AEB480:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEB48Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB48Cu) goto L_08AEB48C;
    return;
L_08AEB48C:
    hot_regs.g31 = (0x08AEB494u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 198u, 0x08B00BC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB494u) goto L_08AEB494;
    return;
L_08AEB494:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB4CC;
      }
      goto L_08AEB4A0;
    }
L_08AEB4A0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 14u);
    g5 = (g5 ^ 4u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    g5 = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AEB4CC;
      }
      goto L_08AEB4BC;
    }
}
L_08AEB4BC:
    hot_regs.g31 = (0x08AEB4C4u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 139u, 0x08B6CC28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB4C4u) goto L_08AEB4C4;
    return;
L_08AEB4C4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), hot_regs.g2);
      if (branch_taken) {
          goto L_08AEB4D4;
      }
      goto L_08AEB4CC;
    }
L_08AEB4CC:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    goto L_08AEB4D4;
L_08AEB4D4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08AEB4E4u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB4E4u) goto L_08AEB4E4;
    return;
L_08AEB4E4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AEB500:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AEB528u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB528u) goto L_08AEB528;
    return;
L_08AEB528:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    hot_regs.g31 = (0x08AEB534u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB534u) goto L_08AEB534;
    return;
L_08AEB534:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(76)));
    g6 = (65504u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g5 = (g5 & g6);
    g4 = (g4 & 1u);
    g4 = (g4 << 21u);
    g4 = (g5 | g4);
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(76), g4);
    g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AEB57C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AEB5A4u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB5A4u) goto L_08AEB5A4;
    return;
L_08AEB5A4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEB5B0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB5B0u) goto L_08AEB5B0;
    return;
L_08AEB5B0:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(76)));
    g6 = (65504u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g5 = (g5 & g6);
    g4 = (g4 & 1u);
    g4 = (g4 << 21u);
    g4 = (g5 | g4);
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(76), g4);
    g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AEB5F8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 4u);
    hot_regs.g31 = (0x08AEB620u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB620u) goto L_08AEB620;
    return;
L_08AEB620:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEB62Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB62Cu) goto L_08AEB62C;
    return;
L_08AEB62C:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(880), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(884), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(888), std::bit_cast<std::uint32_t>(hot_regs.f14));
    g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AEB65C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AEB68Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB68Cu) goto L_08AEB68C;
    return;
L_08AEB68C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEB698u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB698u) goto L_08AEB698;
    return;
L_08AEB698:
    hot_regs.g31 = (0x08AEB6A0u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 203u, 0x08B00BF8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB6A0u) goto L_08AEB6A0;
    return;
L_08AEB6A0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    hot_regs.g31 = (0x08AEB6ACu);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 636u, 0x08B66A10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB6ACu) goto L_08AEB6AC;
    return;
L_08AEB6AC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AEB6C0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB6C0u) goto L_08AEB6C0;
    return;
L_08AEB6C0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AEB6DC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 3u);
    hot_regs.g31 = (0x08AEB70Cu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB70Cu) goto L_08AEB70C;
    return;
L_08AEB70C:
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEB720u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB720u) goto L_08AEB720;
    return;
L_08AEB720:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (hot_regs.g2 | 0u);
    g4 = (16256u << 16u);
    f12 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f22) || std::isnan(f12)) && hot_regs.f22 == f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(236)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08AEB74C;
      }
      goto L_08AEB73C;
    }
}
}
L_08AEB73C:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f20) || std::isnan(hot_regs.f12)) && hot_regs.f20 == hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AEB758;
      }
      goto L_08AEB74C;
    }
L_08AEB74C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(236), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AEB764;
      }
      goto L_08AEB758;
    }
}
L_08AEB758:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (g4 & hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(236), g4);
    hot_regs.g4 = g4;
    goto L_08AEB764;
}
L_08AEB764:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(352)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(188)));
    { const float fs = hot_regs.f22; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(192)));
    { const float fs = hot_regs.f20; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08AEB7A0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AEB7C0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB7C0u) goto L_08AEB7C0;
    return;
L_08AEB7C0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEB7CCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB7CCu) goto L_08AEB7CC;
    return;
L_08AEB7CC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (0u | 15000u);
    aot_mem.aot_store16(hot_regs.g2 + static_cast<std::uint32_t>(558), static_cast<std::uint16_t>(hot_regs.g4));
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
L_08AEB7E8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AEB810u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB810u) goto L_08AEB810;
    return;
L_08AEB810:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEB81Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB81Cu) goto L_08AEB81C;
    return;
L_08AEB81C:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(1280))))));
    g5 = (0u + static_cast<std::uint32_t>(-3));
    g4 = (g4 & g5);
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    g5 = (g5 & 255u);
    g5 = (g5 & 1u);
    g5 = (g5 << 1u);
    g4 = (g4 | g5);
    aot_mem.aot_store8(g2 + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(g4));
    g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AEB858:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AEB878u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB878u) goto L_08AEB878;
    return;
L_08AEB878:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEB884u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB884u) goto L_08AEB884;
    return;
L_08AEB884:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08AEB890u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 190u, 0x08945304u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB890u) goto L_08AEB890;
    return;
L_08AEB890:
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
L_08AEB8A4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AEB8CCu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB8CCu) goto L_08AEB8CC;
    return;
L_08AEB8CC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEB8D8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB8D8u) goto L_08AEB8D8;
    return;
L_08AEB8D8:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08AEB8E4u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 1019u, 0x08AE3ED0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB8E4u) goto L_08AEB8E4;
    return;
L_08AEB8E4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u < hot_regs.g2 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AEB910;
      }
      goto L_08AEB908;
    }
}
L_08AEB908:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AEB958;
      }
      goto L_08AEB910;
    }
L_08AEB910:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AEB93C;
      }
      goto L_08AEB930;
    }
}
L_08AEB930:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AEB958;
      }
      goto L_08AEB93C;
    }
}
L_08AEB93C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AEB958;
      }
      goto L_08AEB954;
    }
}
L_08AEB954:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AEB958;
L_08AEB958:
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
L_08AEB970:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AEB998u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB998u) goto L_08AEB998;
    return;
L_08AEB998:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEB9A4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB9A4u) goto L_08AEB9A4;
    return;
L_08AEB9A4:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08AEB9B0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 1019u, 0x08AE3ED0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEB9B0u) goto L_08AEB9B0;
    return;
L_08AEB9B0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u < hot_regs.g2 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AEB9DC;
      }
      goto L_08AEB9D4;
    }
}
L_08AEB9D4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AEBA24;
      }
      goto L_08AEB9DC;
    }
L_08AEB9DC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AEBA08;
      }
      goto L_08AEB9FC;
    }
}
L_08AEB9FC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AEBA24;
      }
      goto L_08AEBA08;
    }
}
L_08AEBA08:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AEBA24;
      }
      goto L_08AEBA20;
    }
}
L_08AEBA20:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AEBA24;
L_08AEBA24:
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
L_08AEBA3C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AEBA64u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBA64u) goto L_08AEBA64;
    return;
L_08AEBA64:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEBA70u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBA70u) goto L_08AEBA70;
    return;
L_08AEBA70:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(619))))));
    g5 = (0u + static_cast<std::uint32_t>(-17));
    g4 = (g4 & g5);
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    g5 = (g5 & 255u);
    g5 = (g5 & 1u);
    g5 = (g5 << 4u);
    g4 = (g4 | g5);
    aot_mem.aot_store8(g2 + static_cast<std::uint32_t>(619), static_cast<std::uint8_t>(g4));
    g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AEBAAC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AEBADCu);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBADCu) goto L_08AEBADC;
    return;
L_08AEBADC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEBAE8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBAE8u) goto L_08AEBAE8;
    return;
L_08AEBAE8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    g4 = (0u | 3u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g4);
    hot_regs.g7 = (0u | 5u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    hot_regs.g6 = (0u | 4u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g6);
    g4 = (0u | 8u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g4);
    g4 = (0u | 9u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g4);
    g4 = (0u | 10u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g4);
    g4 = (0u | 11u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g4);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AEBB48;
      }
      goto L_08AEBB38;
    }
}
L_08AEBB38:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08AEBB48;
      }
      goto L_08AEBB40;
    }
L_08AEBB40:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08AEBB7C;
      }
      goto L_08AEBB48;
    }
L_08AEBB48:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(944));
    hot_regs.g5 = (hot_regs.g5 << 2u);
    ctx.gpr[17] = (hot_regs.g29 + hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08AEBB60u);
    hot_regs.g6 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 377u, 0x08B0D904u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBB60u) goto L_08AEBB60;
    return;
L_08AEBB60:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1264)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AEBB7Cu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 3u, 0x08B00014u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBB7Cu) goto L_08AEBB7C;
    return;
L_08AEBB7C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AEBB98:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AEBBB8u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBBB8u) goto L_08AEBBB8;
    return;
L_08AEBBB8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBBCC;
      }
      goto L_08AEBBC4;
    }
L_08AEBBC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4224), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AEBBD4;
      }
      goto L_08AEBBCC;
    }
L_08AEBBCC:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4224), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08AEBBD4;
L_08AEBBD4:
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
L_08AEBBE8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AEBC20u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBC20u) goto L_08AEBC20;
    return;
L_08AEBC20:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AEBC2Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBC2Cu) goto L_08AEBC2C;
    return;
L_08AEBC2C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(384));
    hot_regs.g31 = (0x08AEBC3Cu);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 165u, 0x089DCF78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBC3Cu) goto L_08AEBC3C;
    return;
L_08AEBC3C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AEBC64u);
    hot_regs.g6 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBC64u) goto L_08AEBC64;
    return;
L_08AEBC64:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AEBC84:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), hot_regs.g31);
    g6 = (g6 & 255u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    { const bool branch_taken = g6 != 0u;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08AEBCCC;
      }
      goto L_08AEBCC0;
    }
}
L_08AEBCC0:
    hot_regs.g31 = (0x08AEBCC8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 160u, 0x08AD0AE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBCC8u) goto L_08AEBCC8;
    return;
L_08AEBCC8:
    hot_regs.f20 = hot_regs.f20 + ctx.fpr[0];
    goto L_08AEBCCC;
L_08AEBCCC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (0u | 0u);
    g4 = (g4 & 1u);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2049));
    g5 = (g5 & hot_regs.g6);
    g4 = (g4 << 11u);
    g4 = (g5 | g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(72), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(852)));
    g5 = (0u | 1u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AEBD0C;
      }
      goto L_08AEBCFC;
    }
}
L_08AEBCFC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08AEBD58;
      }
      goto L_08AEBD0C;
    }
L_08AEBD0C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(112));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08AEBD34u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBD34u) goto L_08AEBD34;
    return;
L_08AEBD34:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AEBD50u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 424u, 0x0886A030u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBD50u) goto L_08AEBD50;
    return;
L_08AEBD50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBEC4;
      }
      goto L_08AEBD58;
    }
L_08AEBD58:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(112));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08AEBD84u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBD84u) goto L_08AEBD84;
    return;
L_08AEBD84:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AEBDA0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 424u, 0x0886A030u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBDA0u) goto L_08AEBDA0;
    return;
L_08AEBDA0:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(533))))));
    hot_regs.g4 = (ctx.gpr[17] < static_cast<std::uint32_t>(23) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBEC4;
      }
      goto L_08AEBDB0;
    }
L_08AEBDB0:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g17);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(17120)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    ctx.gpr[17] = g17;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AEBDC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBEC4;
      }
      goto L_08AEBDD0;
    }
L_08AEBDD0:
    hot_regs.g31 = (0x08AEBDD8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBDD8u) goto L_08AEBDD8;
    return;
L_08AEBDD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBEC4;
      }
      goto L_08AEBDE0;
    }
L_08AEBDE0:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g31 = (0x08AEBDECu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBDECu) goto L_08AEBDEC;
    return;
L_08AEBDEC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AEBDFCu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 391u, 0x08B4196Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBDFCu) goto L_08AEBDFC;
    return;
L_08AEBDFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBEC4;
      }
      goto L_08AEBE04;
    }
L_08AEBE04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBEC4;
      }
      goto L_08AEBE0C;
    }
L_08AEBE0C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(448));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AEBE28u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 391u, 0x08B4196Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBE28u) goto L_08AEBE28;
    return;
L_08AEBE28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBEC4;
      }
      goto L_08AEBE30;
    }
L_08AEBE30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBEC4;
      }
      goto L_08AEBE38;
    }
L_08AEBE38:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(448));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AEBE54u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 391u, 0x08B4196Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBE54u) goto L_08AEBE54;
    return;
L_08AEBE54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBEC4;
      }
      goto L_08AEBE5C;
    }
L_08AEBE5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBEC4;
      }
      goto L_08AEBE64;
    }
L_08AEBE64:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBE98;
      }
      goto L_08AEBE70;
    }
L_08AEBE70:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(440)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AEBE90u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 391u, 0x08B4196Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBE90u) goto L_08AEBE90;
    return;
L_08AEBE90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBEB4;
      }
      goto L_08AEBE98;
    }
L_08AEBE98:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(448));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AEBEB4u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 391u, 0x08B4196Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBEB4u) goto L_08AEBEB4;
    return;
L_08AEBEB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBEC4;
      }
      goto L_08AEBEBC;
    }
L_08AEBEBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBEC4;
      }
      goto L_08AEBEC4;
    }
L_08AEBEC4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AEBEE8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
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
    ctx.gpr[23] = (hot_regs.g4 | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (2236u << 16u);
    ctx.gpr[22] = (ctx.gpr[21] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    hot_regs.g6 = (0u | 4u);
    hot_regs.g31 = (0x08AEBF4Cu);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBF4Cu) goto L_08AEBF4C;
    return;
L_08AEBF4C:
    hot_regs.g31 = (0x08AEBF54u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 168u, 0x08AECA18u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBF54u) goto L_08AEBF54;
    return;
L_08AEBF54:
    hot_regs.g4 = (49864u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    { const bool branch_taken = hot_regs.g2 == 0u;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-497));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 8u, 0x08AEC098u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08AEBF64;
    }
L_08AEBF64:
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g31 = (0x08AEBF70u);
    hot_regs.g4 = (0u | 1184u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBF70u) goto L_08AEBF70;
    return;
L_08AEBF70:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    if (ctx.gpr[16] == 0u) {
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
        goto L_08AEBF94;
    }
    goto L_08AEBF7C;
L_08AEBF7C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29704)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AEBF8Cu);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 689u, 0x088A2F88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBF8Cu) goto L_08AEBF8C;
    return;
L_08AEBF8C:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_08AEBF94;
L_08AEBF94:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g22 = ctx.gpr[22];
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(4)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(8)));
    f20 = std::bit_cast<float>(aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((!(std::isnan(f20) || std::isnan(hot_regs.f12)) && f20 == hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (50042u << 16u);
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08AEBFC8;
      }
      goto L_08AEBFB4;
    }
}
}
L_08AEBFB4:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-497));
      if (branch_taken) {
          goto L_08AEBFDC;
      }
      goto L_08AEBFC8;
    }
L_08AEBFC8:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x08AEBFD4u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBFD4u) goto L_08AEBFD4;
    return;
L_08AEBFD4:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-497));
    goto L_08AEBFDC;
L_08AEBFDC:
    hot_regs.g31 = (0x08AEBFE4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 160u, 0x08AD0AE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AEBFE4u) goto L_08AEBFE4;
    return;
L_08AEBFE4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    f12 = hot_regs.f20 + ctx.fpr[0];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    ctx.pc = 0x08AEC000u; return;}
}

}

void recomp_unit_0185(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0185_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_185(Runtime &runtime) {
    runtime.register_generated_unit(185u, 0x08AE8000u, 16384u, &recomp_unit_0185, &recomp_unit_0185_entry);
    runtime.register_function(0x08AE8000u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8008u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8014u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE802Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8030u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8054u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE807Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8088u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE80A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE80BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE80E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE80F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8128u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8148u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8154u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8164u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE817Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE81A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE81B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE81C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE81CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE81D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE81F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8218u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8224u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8270u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8284u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8294u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE82A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE82B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE82C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE82E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE82F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE82FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8310u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8338u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8344u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8360u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8378u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE83A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE83ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE83BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE83C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE83D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE83ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8414u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8420u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8430u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8448u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8468u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8474u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE847Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8490u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE84C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE84CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE84E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE84E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE84F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8500u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8508u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE852Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8534u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8558u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8574u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8598u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8600u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8610u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8618u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8620u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8628u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8634u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE863Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8650u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8670u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE867Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8684u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8698u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8718u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8720u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE874Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8764u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8798u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8800u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8824u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE882Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE884Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8858u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8870u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8874u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8894u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8900u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8908u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE890Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8930u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8938u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8958u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8964u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE897Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8980u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE899Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A00u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A18u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A9Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8AA8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8AB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8ABCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8AD0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8AD8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8AECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8AF4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8AF8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B00u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B08u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B10u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B18u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B20u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B30u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B38u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B3Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B44u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B5Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B70u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B7Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B90u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8BC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8BECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8BF8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C08u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C18u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C20u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C38u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C68u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C90u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8CA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8CC8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D1Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D50u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D6Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D98u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8DB8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8DC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8DD0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8DD4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8DE8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E10u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E1Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E28u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E38u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E40u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E44u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E68u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E70u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E90u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E9Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8EB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8EB8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8ED0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8EF0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8EFCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F08u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F0Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F20u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F50u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F5Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F6Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F8Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F98u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FD8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FE0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE900Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9028u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9058u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9064u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9074u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE908Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9098u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE90ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE90B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE90CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE90E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE90F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9100u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9108u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9110u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE912Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9170u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9194u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE920Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9214u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9218u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE922Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9260u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9288u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9294u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE92A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE92B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE92D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE92E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE92F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9308u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9318u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE932Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9354u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9360u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9374u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE937Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9380u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE940Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9434u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9440u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9454u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9458u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE947Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9484u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE950Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9518u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE952Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9530u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9554u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE955Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE957Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9588u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9604u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9608u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE962Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9634u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9654u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9660u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9678u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE967Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9694u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE96BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE96C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE96DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE96E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9704u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE970Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE972Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9738u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9750u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9754u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE976Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9794u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9804u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9810u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9828u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE982Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9844u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9878u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9884u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9894u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE98B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE98F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9914u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9938u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9988u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE99B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE99BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE99C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE99CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE99E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE99E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE99FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A08u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A10u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A28u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A30u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A3Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A40u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A48u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A5Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A90u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9AC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9AD0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9ADCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9AE8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9AF0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9AFCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B14u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B34u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B68u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9BA8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9BB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9BC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9BD8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9BECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9C00u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9C14u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9C28u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9C3Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9C50u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9C64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9C8Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9CD8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9D00u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9D0Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9D5Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9D84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9D90u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9DB8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9DD0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9E1Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9E28u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9E94u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9EA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9EACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9EB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9EB8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9ED8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9EE8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9EF8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F00u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F0Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F24u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F30u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F40u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F48u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F58u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F7Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F8Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F98u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9FA8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9FB0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9FD8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA00Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA034u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA040u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA0A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA0B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA0CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA0F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA0FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA12Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA150u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA168u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA1C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA1F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA200u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA20Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA214u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA228u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA230u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA244u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA24Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA250u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA258u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA260u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA268u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA270u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA278u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA28Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA29Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA334u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA358u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA364u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA37Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA390u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA404u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA410u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA420u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA434u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA45Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA468u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA478u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA484u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA490u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA514u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA528u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA534u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA53Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA554u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA578u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA610u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA61Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA634u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA638u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA650u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA678u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA684u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA70Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA728u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA750u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA75Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA76Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA778u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA784u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA79Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA7D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA7E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA804u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA80Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA81Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA828u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA83Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA84Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA864u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA878u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA880u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA894u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA89Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA904u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA90Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA920u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA928u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA93Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA944u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA958u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA960u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA974u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA97Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA990u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA998u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA2Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA38u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA50u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA60u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA8Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAAACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAAB8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAAD0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAAD4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAAECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB14u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB34u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB40u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB50u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB98u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAC00u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAC34u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAC68u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAC9Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEACCCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEACF0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD1Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD2Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD48u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD58u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD68u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD94u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEADA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEADB0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEADBCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEADCCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEADD4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE14u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE24u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE30u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE8Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAEB8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAEC8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAEE4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAEF4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF20u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF30u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF40u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF4Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF58u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF68u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF70u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAFB0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAFC0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAFCCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB028u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB058u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB064u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB07Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB098u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB0C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB0D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB0ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB108u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB138u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB144u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB158u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB168u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB180u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB19Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB214u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB230u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB254u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB260u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB274u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB280u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB28Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB29Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB308u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB344u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB35Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB37Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB388u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB3A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB3D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB3DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB3E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB3F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB40Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB414u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB41Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB424u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB434u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB450u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB480u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB48Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB494u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB4A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB4BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB4C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB4CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB4D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB4E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB500u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB528u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB534u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB57Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB620u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB62Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB65Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB68Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB698u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB6A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB6ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB6C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB6DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB70Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB720u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB73Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB74Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB758u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB764u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB7A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB7C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB7CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB7E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB810u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB81Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB858u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB878u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB884u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB890u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB8A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB8CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB8D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB8E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB908u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB910u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB930u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB93Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB954u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB958u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB970u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB998u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB9A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB9B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB9D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB9DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB9FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA08u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA20u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA24u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA3Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA70u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBAACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBADCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBAE8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB38u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB40u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB48u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB60u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB7Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB98u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBBB8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBBC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBBCCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBBD4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBBE8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC20u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC2Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC3Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBCC0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBCC8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBCCCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBCFCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD0Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD34u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD50u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD58u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDA0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDB0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDC8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDD0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDD8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDE0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDFCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE0Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE28u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE30u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE38u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE54u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE5Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE70u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE90u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE98u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBEB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBEBCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBEC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBEE8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF4Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF54u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF70u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF7Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF8Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF94u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBFB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBFC8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBFD4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBFDCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBFE4u, &recomp_unit_0185, "recomp_unit_0185");
}
} // namespace psprecomp
