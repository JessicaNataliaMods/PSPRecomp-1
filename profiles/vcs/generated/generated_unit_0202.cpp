#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0202[4086] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0,
    7, 0, 0, 8, 0, 9, 0, 0, 0, 10, 11, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0,
    0, 0, 16, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25,
    0, 0, 0, 26, 0, 0, 0, 27, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0,
    0, 0, 0, 0, 33, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0,
    0, 54, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0,
    0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0,
    76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 84, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 92, 0, 0, 93, 0, 94, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 102, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0,
    0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 108, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116,
    0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 121, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 135, 136, 0, 137, 0,
    138, 0, 0, 0, 139, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0,
    0, 145, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0,
    0, 151, 0, 0, 152, 0, 153, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0,
    0, 0, 0, 159, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 165, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 171,
    172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178,
    0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 182, 0, 183, 0, 184, 0, 185, 0, 0, 0,
    0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 192,
    0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0,
    0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 201, 0, 0, 202, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 206, 0, 0, 0, 207, 208, 0,
    0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 213, 214, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 220, 0, 221, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0,
    224, 0, 225, 226, 0, 227, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 231, 232, 0, 233, 234, 0, 0, 0, 0, 0, 0,
    0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 239, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 0,
    0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 0, 263, 0, 0,
    264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 271, 0,
    0, 272, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 286, 0, 287, 0,
    0, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 0, 292, 0, 293, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0,
    0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301,
    0, 0, 302, 0, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308,
    0, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0,
    315, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 321, 0,
    322, 0, 0, 323, 0, 324, 0, 325, 0, 0, 0, 0, 326, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 331, 0, 0, 0, 0, 0, 332, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0,
    0, 337, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 343, 344,
    0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 348, 349, 0, 0, 0, 0, 0, 0, 0,
    0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 0, 354, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0,
    0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 366, 0, 0, 0, 367, 0, 368, 0, 0, 369,
    0, 370, 0, 0, 0, 371, 0, 372, 0, 373, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 379,
    0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 382, 0, 0, 383, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387,
    0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 390, 0, 391, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 396, 397, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 0, 0, 0, 0,
    0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 402, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0,
    406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 410, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0,
    0, 413, 0, 0, 0, 414, 0, 415, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420,
    0, 0, 0, 0, 421, 422, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0,
    0, 427, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 433, 0, 0, 434,
    0, 435, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 438, 0, 439, 440, 0, 441, 0, 0, 442, 0, 0, 443, 0, 0, 0, 444, 0, 445, 0,
    446, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 453, 0, 0, 0, 454, 0,
    0, 455, 0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0,
    0, 462, 0, 0, 0, 0, 463, 0, 464, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 471, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 479, 0, 480, 0, 481, 482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 484,
    0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 488, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 491, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 494, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 500, 0, 0, 501, 0, 502, 0, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0, 505, 0,
    506, 507, 0, 508, 0, 0, 0, 509, 0, 510, 0, 511, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 0, 514, 0, 515, 0, 0, 0, 0, 0,
    516, 0, 0, 0, 517, 0, 0, 518, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 522, 523, 0, 0, 0, 0, 524,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 527,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 530, 0, 0, 0, 0,
    531, 532, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 536, 0, 0, 0, 0, 0, 537, 538, 0,
    0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0,
    0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 547, 0, 548, 0, 549, 0, 550, 0,
    0, 0, 0, 0, 0, 551, 0, 552, 0, 0, 553, 554, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 557, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 561, 0, 0, 0,
    0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 566, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0,
    570, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 573, 0, 0, 0, 0, 574, 0, 0, 575, 0,
    0, 0, 0, 576, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 581, 0, 0,
    0, 0, 0, 0, 582, 0, 0, 0, 0, 583, 584, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 588, 0, 0, 589, 0, 0, 590, 0, 591, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 594, 0, 595, 596, 0, 597, 0, 0, 0, 598,
    0, 599, 0, 600, 0, 0, 0, 601, 0, 0, 602, 0, 603, 0, 604, 0, 0, 0, 0, 0, 605, 0, 606, 0, 0, 0, 0, 0, 607, 0, 0, 0,
    608, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 612, 0, 613, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 618, 0, 0, 0, 0,
    0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 623,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 627,
    0, 0, 628, 0, 629, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633,
    0, 0, 634, 0, 635, 0, 636, 0, 0, 0, 0, 637, 0, 638, 0, 0, 0, 0, 639, 0, 640, 641, 0, 642, 0, 0, 0, 643, 0, 644, 0, 645,
    0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 650, 0, 651, 0, 0, 0, 652, 0, 0, 0,
    0, 0, 653, 0, 0, 654, 0, 0, 0, 0, 655, 656, 0, 657, 0, 658, 0, 0, 659, 0, 0, 660, 0, 661, 0, 0, 0, 662, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 665, 0, 0,
    0, 0, 666, 0, 0, 667, 0, 0, 0, 0, 0, 0, 668, 0, 0, 669, 670, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 673, 0, 0, 674, 0, 0, 675, 0, 676, 0, 0, 677, 0, 678, 0, 679, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0,
    0, 681, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 685, 0,
    686, 687, 0, 0, 0, 0, 0, 0, 688, 0, 689, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 691, 0, 0, 0, 0, 0, 692, 693, 0, 0, 0,
    0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 696, 0, 0, 0, 697, 0, 698, 699, 0, 0, 0, 0, 0, 0,
    700, 0, 701, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 703, 0, 0, 0, 0, 0, 704, 705, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 710,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0,
    0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 716, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0,
    0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 721, 0, 0, 0, 722, 0, 723, 0, 724, 725, 0, 0, 0, 0, 0, 0, 726, 0,
    727, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 729, 0, 0, 0, 0, 0, 730, 731, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 733, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 738, 0, 0, 0, 0, 739, 0, 0, 0, 740, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0,
    0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 744, 0, 0, 0, 0, 0, 745, 0, 0, 0, 746, 0, 0, 747, 0, 0, 0, 0,
    0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 752, 0, 0,
    0, 0, 753, 754, 0, 0, 755, 0, 0, 0, 756, 0, 0, 0, 757, 0, 758, 0, 759, 0, 0, 0, 760, 0, 761, 0, 762, 0, 763, 764, 0, 0,
    0, 0, 0, 0, 0, 0, 765, 0, 766, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 769, 770, 0, 771, 0,
    0, 0, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 0, 774, 0, 0, 775, 0, 0, 0, 776, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779,
};
void recomp_unit_0202_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B2C000u;
        entry_id = (entry_delta < 16344u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0202[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B2C000;
    case 2u: goto L_08B2C014;
    case 3u: goto L_08B2C01C;
    case 4u: goto L_08B2C030;
    case 5u: goto L_08B2C060;
    case 6u: goto L_08B2C06C;
    case 7u: goto L_08B2C080;
    case 8u: goto L_08B2C08C;
    case 9u: goto L_08B2C094;
    case 10u: goto L_08B2C0A4;
    case 11u: goto L_08B2C0A8;
    case 12u: goto L_08B2C0BC;
    case 13u: goto L_08B2C0C4;
    case 14u: goto L_08B2C0E4;
    case 15u: goto L_08B2C0F0;
    case 16u: goto L_08B2C108;
    case 17u: goto L_08B2C10C;
    case 18u: goto L_08B2C128;
    case 19u: goto L_08B2C160;
    case 20u: goto L_08B2C16C;
    case 21u: goto L_08B2C180;
    case 22u: goto L_08B2C1A8;
    case 23u: goto L_08B2C1C8;
    case 24u: goto L_08B2C1F0;
    case 25u: goto L_08B2C1FC;
    case 26u: goto L_08B2C20C;
    case 27u: goto L_08B2C21C;
    case 28u: goto L_08B2C220;
    case 29u: goto L_08B2C244;
    case 30u: goto L_08B2C24C;
    case 31u: goto L_08B2C26C;
    case 32u: goto L_08B2C278;
    case 33u: goto L_08B2C290;
    case 34u: goto L_08B2C294;
    case 35u: goto L_08B2C2AC;
    case 36u: goto L_08B2C2E4;
    case 37u: goto L_08B2C2F0;
    case 38u: goto L_08B2C320;
    case 39u: goto L_08B2C334;
    case 40u: goto L_08B2C354;
    case 41u: goto L_08B2C38C;
    case 42u: goto L_08B2C398;
    case 43u: goto L_08B2C3E8;
    case 44u: goto L_08B2C410;
    case 45u: goto L_08B2C430;
    case 46u: goto L_08B2C458;
    case 47u: goto L_08B2C464;
    case 48u: goto L_08B2C480;
    case 49u: goto L_08B2C494;
    case 50u: goto L_08B2C4B8;
    case 51u: goto L_08B2C4C0;
    case 52u: goto L_08B2C4E0;
    case 53u: goto L_08B2C4EC;
    case 54u: goto L_08B2C504;
    case 55u: goto L_08B2C508;
    case 56u: goto L_08B2C520;
    case 57u: goto L_08B2C548;
    case 58u: goto L_08B2C554;
    case 59u: goto L_08B2C564;
    case 60u: goto L_08B2C574;
    case 61u: goto L_08B2C58C;
    case 62u: goto L_08B2C594;
    case 63u: goto L_08B2C5C0;
    case 64u: goto L_08B2C5D8;
    case 65u: goto L_08B2C600;
    case 66u: goto L_08B2C60C;
    case 67u: goto L_08B2C61C;
    case 68u: goto L_08B2C62C;
    case 69u: goto L_08B2C63C;
    case 70u: goto L_08B2C654;
    case 71u: goto L_08B2C684;
    case 72u: goto L_08B2C690;
    case 73u: goto L_08B2C6B0;
    case 74u: goto L_08B2C6CC;
    case 75u: goto L_08B2C6F4;
    case 76u: goto L_08B2C700;
    case 77u: goto L_08B2C710;
    case 78u: goto L_08B2C72C;
    case 79u: goto L_08B2C734;
    case 80u: goto L_08B2C740;
    case 81u: goto L_08B2C750;
    case 82u: goto L_08B2C768;
    case 83u: goto L_08B2C788;
    case 84u: goto L_08B2C794;
    case 85u: goto L_08B2C79C;
    case 86u: goto L_08B2C7B0;
    case 87u: goto L_08B2C7D8;
    case 88u: goto L_08B2C7E4;
    case 89u: goto L_08B2C7F4;
    case 90u: goto L_08B2C848;
    case 91u: goto L_08B2C860;
    case 92u: goto L_08B2C888;
    case 93u: goto L_08B2C894;
    case 94u: goto L_08B2C89C;
    case 95u: goto L_08B2C8A8;
    case 96u: goto L_08B2C8B8;
    case 97u: goto L_08B2C8D8;
    case 98u: goto L_08B2C8E8;
    case 99u: goto L_08B2C900;
    case 100u: goto L_08B2C928;
    case 101u: goto L_08B2C934;
    case 102u: goto L_08B2C948;
    case 103u: goto L_08B2C94C;
    case 104u: goto L_08B2C970;
    case 105u: goto L_08B2C978;
    case 106u: goto L_08B2C998;
    case 107u: goto L_08B2C9A4;
    case 108u: goto L_08B2C9BC;
    case 109u: goto L_08B2C9C0;
    case 110u: goto L_08B2C9D8;
    case 111u: goto L_08B2CA0C;
    case 112u: goto L_08B2CA18;
    case 113u: goto L_08B2CA4C;
    case 114u: goto L_08B2CA54;
    case 115u: goto L_08B2CA58;
    case 116u: goto L_08B2CA7C;
    case 117u: goto L_08B2CA84;
    case 118u: goto L_08B2CAA0;
    case 119u: goto L_08B2CAB4;
    case 120u: goto L_08B2CAD0;
    case 121u: goto L_08B2CAD4;
    case 122u: goto L_08B2CADC;
    case 123u: goto L_08B2CAF4;
    case 124u: goto L_08B2CB1C;
    case 125u: goto L_08B2CB28;
    case 126u: goto L_08B2CB48;
    case 127u: goto L_08B2CB54;
    case 128u: goto L_08B2CB60;
    case 129u: goto L_08B2CB78;
    case 130u: goto L_08B2CBAC;
    case 131u: goto L_08B2CBB8;
    case 132u: goto L_08B2CBC8;
    case 133u: goto L_08B2CBD8;
    case 134u: goto L_08B2CBE4;
    case 135u: goto L_08B2CBEC;
    case 136u: goto L_08B2CBF0;
    case 137u: goto L_08B2CBF8;
    case 138u: goto L_08B2CC00;
    case 139u: goto L_08B2CC10;
    case 140u: goto L_08B2CC14;
    case 141u: goto L_08B2CC38;
    case 142u: goto L_08B2CC40;
    case 143u: goto L_08B2CC60;
    case 144u: goto L_08B2CC6C;
    case 145u: goto L_08B2CC84;
    case 146u: goto L_08B2CC88;
    case 147u: goto L_08B2CCA8;
    case 148u: goto L_08B2CCD8;
    case 149u: goto L_08B2CCE4;
    case 150u: goto L_08B2CCF4;
    case 151u: goto L_08B2CD04;
    case 152u: goto L_08B2CD10;
    case 153u: goto L_08B2CD18;
    case 154u: goto L_08B2CD1C;
    case 155u: goto L_08B2CD40;
    case 156u: goto L_08B2CD48;
    case 157u: goto L_08B2CD68;
    case 158u: goto L_08B2CD74;
    case 159u: goto L_08B2CD8C;
    case 160u: goto L_08B2CD90;
    case 161u: goto L_08B2CDAC;
    case 162u: goto L_08B2CDD4;
    case 163u: goto L_08B2CDE0;
    case 164u: goto L_08B2CDF0;
    case 165u: goto L_08B2CE08;
    case 166u: goto L_08B2CE0C;
    case 167u: goto L_08B2CE30;
    case 168u: goto L_08B2CE38;
    case 169u: goto L_08B2CE58;
    case 170u: goto L_08B2CE64;
    case 171u: goto L_08B2CE7C;
    case 172u: goto L_08B2CE80;
    case 173u: goto L_08B2CE98;
    case 174u: goto L_08B2CEC0;
    case 175u: goto L_08B2CECC;
    case 176u: goto L_08B2CEDC;
    case 177u: goto L_08B2CEEC;
    case 178u: goto L_08B2CEFC;
    case 179u: goto L_08B2CF14;
    case 180u: goto L_08B2CF3C;
    case 181u: goto L_08B2CF48;
    case 182u: goto L_08B2CF58;
    case 183u: goto L_08B2CF60;
    case 184u: goto L_08B2CF68;
    case 185u: goto L_08B2CF70;
    case 186u: goto L_08B2CF88;
    case 187u: goto L_08B2CFB0;
    case 188u: goto L_08B2CFBC;
    case 189u: goto L_08B2CFCC;
    case 190u: goto L_08B2CFDC;
    case 191u: goto L_08B2CFE4;
    case 192u: goto L_08B2CFFC;
    case 193u: goto L_08B2D01C;
    case 194u: goto L_08B2D028;
    case 195u: goto L_08B2D030;
    case 196u: goto L_08B2D044;
    case 197u: goto L_08B2D078;
    case 198u: goto L_08B2D084;
    case 199u: goto L_08B2D094;
    case 200u: goto L_08B2D0A4;
    case 201u: goto L_08B2D0AC;
    case 202u: goto L_08B2D0B8;
    case 203u: goto L_08B2D0C0;
    case 204u: goto L_08B2D0D0;
    case 205u: goto L_08B2D0D8;
    case 206u: goto L_08B2D0E4;
    case 207u: goto L_08B2D0F4;
    case 208u: goto L_08B2D0F8;
    case 209u: goto L_08B2D110;
    case 210u: goto L_08B2D118;
    case 211u: goto L_08B2D138;
    case 212u: goto L_08B2D144;
    case 213u: goto L_08B2D15C;
    case 214u: goto L_08B2D160;
    case 215u: goto L_08B2D180;
    case 216u: goto L_08B2D1D4;
    case 217u: goto L_08B2D1E0;
    case 218u: goto L_08B2D234;
    case 219u: goto L_08B2D240;
    case 220u: goto L_08B2D248;
    case 221u: goto L_08B2D250;
    case 222u: goto L_08B2D264;
    case 223u: goto L_08B2D26C;
    case 224u: goto L_08B2D280;
    case 225u: goto L_08B2D288;
    case 226u: goto L_08B2D28C;
    case 227u: goto L_08B2D294;
    case 228u: goto L_08B2D2A4;
    case 229u: goto L_08B2D2B0;
    case 230u: goto L_08B2D2CC;
    case 231u: goto L_08B2D2D4;
    case 232u: goto L_08B2D2D8;
    case 233u: goto L_08B2D2E0;
    case 234u: goto L_08B2D2E4;
    case 235u: goto L_08B2D304;
    case 236u: goto L_08B2D30C;
    case 237u: goto L_08B2D32C;
    case 238u: goto L_08B2D338;
    case 239u: goto L_08B2D350;
    case 240u: goto L_08B2D354;
    case 241u: goto L_08B2D394;
    case 242u: goto L_08B2D3BC;
    case 243u: goto L_08B2D3C8;
    case 244u: goto L_08B2D3D8;
    case 245u: goto L_08B2D3E4;
    case 246u: goto L_08B2D3F0;
    case 247u: goto L_08B2D408;
    case 248u: goto L_08B2D428;
    case 249u: goto L_08B2D434;
    case 250u: goto L_08B2D440;
    case 251u: goto L_08B2D444;
    case 252u: goto L_08B2D458;
    case 253u: goto L_08B2D49C;
    case 254u: goto L_08B2D4A8;
    case 255u: goto L_08B2D4B8;
    case 256u: goto L_08B2D4C4;
    case 257u: goto L_08B2D4D4;
    case 258u: goto L_08B2D520;
    case 259u: goto L_08B2D534;
    case 260u: goto L_08B2D54C;
    case 261u: goto L_08B2D558;
    case 262u: goto L_08B2D564;
    case 263u: goto L_08B2D574;
    case 264u: goto L_08B2D580;
    case 265u: goto L_08B2D5A0;
    case 266u: goto L_08B2D5AC;
    case 267u: goto L_08B2D5B4;
    case 268u: goto L_08B2D5CC;
    case 269u: goto L_08B2D5D8;
    case 270u: goto L_08B2D5E4;
    case 271u: goto L_08B2D5F8;
    case 272u: goto L_08B2D604;
    case 273u: goto L_08B2D61C;
    case 274u: goto L_08B2D624;
    case 275u: goto L_08B2D63C;
    case 276u: goto L_08B2D668;
    case 277u: goto L_08B2D6A8;
    case 278u: goto L_08B2D6B4;
    case 279u: goto L_08B2D6C4;
    case 280u: goto L_08B2D6D0;
    case 281u: goto L_08B2D6DC;
    case 282u: goto L_08B2D728;
    case 283u: goto L_08B2D73C;
    case 284u: goto L_08B2D754;
    case 285u: goto L_08B2D764;
    case 286u: goto L_08B2D770;
    case 287u: goto L_08B2D778;
    case 288u: goto L_08B2D78C;
    case 289u: goto L_08B2D798;
    case 290u: goto L_08B2D7A4;
    case 291u: goto L_08B2D7B0;
    case 292u: goto L_08B2D7C0;
    case 293u: goto L_08B2D7C8;
    case 294u: goto L_08B2D7D4;
    case 295u: goto L_08B2D7E8;
    case 296u: goto L_08B2D7F4;
    case 297u: goto L_08B2D80C;
    case 298u: goto L_08B2D814;
    case 299u: goto L_08B2D82C;
    case 300u: goto L_08B2D854;
    case 301u: goto L_08B2D87C;
    case 302u: goto L_08B2D888;
    case 303u: goto L_08B2D898;
    case 304u: goto L_08B2D8A4;
    case 305u: goto L_08B2D8B0;
    case 306u: goto L_08B2D8C8;
    case 307u: goto L_08B2D8F0;
    case 308u: goto L_08B2D8FC;
    case 309u: goto L_08B2D90C;
    case 310u: goto L_08B2D918;
    case 311u: goto L_08B2D924;
    case 312u: goto L_08B2D93C;
    case 313u: goto L_08B2D964;
    case 314u: goto L_08B2D970;
    case 315u: goto L_08B2D980;
    case 316u: goto L_08B2D98C;
    case 317u: goto L_08B2D998;
    case 318u: goto L_08B2D9B0;
    case 319u: goto L_08B2D9DC;
    case 320u: goto L_08B2D9E8;
    case 321u: goto L_08B2D9F8;
    case 322u: goto L_08B2DA00;
    case 323u: goto L_08B2DA0C;
    case 324u: goto L_08B2DA14;
    case 325u: goto L_08B2DA1C;
    case 326u: goto L_08B2DA30;
    case 327u: goto L_08B2DA34;
    case 328u: goto L_08B2DA58;
    case 329u: goto L_08B2DA60;
    case 330u: goto L_08B2DA80;
    case 331u: goto L_08B2DA8C;
    case 332u: goto L_08B2DAA4;
    case 333u: goto L_08B2DAA8;
    case 334u: goto L_08B2DAC4;
    case 335u: goto L_08B2DAEC;
    case 336u: goto L_08B2DAF8;
    case 337u: goto L_08B2DB04;
    case 338u: goto L_08B2DB08;
    case 339u: goto L_08B2DB2C;
    case 340u: goto L_08B2DB34;
    case 341u: goto L_08B2DB54;
    case 342u: goto L_08B2DB60;
    case 343u: goto L_08B2DB78;
    case 344u: goto L_08B2DB7C;
    case 345u: goto L_08B2DB94;
    case 346u: goto L_08B2DBBC;
    case 347u: goto L_08B2DBC8;
    case 348u: goto L_08B2DBDC;
    case 349u: goto L_08B2DBE0;
    case 350u: goto L_08B2DC04;
    case 351u: goto L_08B2DC0C;
    case 352u: goto L_08B2DC2C;
    case 353u: goto L_08B2DC38;
    case 354u: goto L_08B2DC50;
    case 355u: goto L_08B2DC54;
    case 356u: goto L_08B2DC6C;
    case 357u: goto L_08B2DC94;
    case 358u: goto L_08B2DCA0;
    case 359u: goto L_08B2DCB8;
    case 360u: goto L_08B2DCDC;
    case 361u: goto L_08B2DCE4;
    case 362u: goto L_08B2DD08;
    case 363u: goto L_08B2DD20;
    case 364u: goto L_08B2DD40;
    case 365u: goto L_08B2DD4C;
    case 366u: goto L_08B2DD58;
    case 367u: goto L_08B2DD68;
    case 368u: goto L_08B2DD70;
    case 369u: goto L_08B2DD7C;
    case 370u: goto L_08B2DD84;
    case 371u: goto L_08B2DD94;
    case 372u: goto L_08B2DD9C;
    case 373u: goto L_08B2DDA4;
    case 374u: goto L_08B2DDAC;
    case 375u: goto L_08B2DDB8;
    case 376u: goto L_08B2DDC4;
    case 377u: goto L_08B2DDD0;
    case 378u: goto L_08B2DDF4;
    case 379u: goto L_08B2DDFC;
    case 380u: goto L_08B2DE14;
    case 381u: goto L_08B2DE1C;
    case 382u: goto L_08B2DE30;
    case 383u: goto L_08B2DE3C;
    case 384u: goto L_08B2DE44;
    case 385u: goto L_08B2DE54;
    case 386u: goto L_08B2DE68;
    case 387u: goto L_08B2DE7C;
    case 388u: goto L_08B2DE9C;
    case 389u: goto L_08B2DEA8;
    case 390u: goto L_08B2DEB8;
    case 391u: goto L_08B2DEC0;
    case 392u: goto L_08B2DED4;
    case 393u: goto L_08B2DEE8;
    case 394u: goto L_08B2DF10;
    case 395u: goto L_08B2DF1C;
    case 396u: goto L_08B2DF34;
    case 397u: goto L_08B2DF38;
    case 398u: goto L_08B2DF5C;
    case 399u: goto L_08B2DF64;
    case 400u: goto L_08B2DF84;
    case 401u: goto L_08B2DF90;
    case 402u: goto L_08B2DFA8;
    case 403u: goto L_08B2DFAC;
    case 404u: goto L_08B2DFC4;
    case 405u: goto L_08B2DFF4;
    case 406u: goto L_08B2E000;
    case 407u: goto L_08B2E010;
    case 408u: goto L_08B2E028;
    case 409u: goto L_08B2E034;
    case 410u: goto L_08B2E048;
    case 411u: goto L_08B2E050;
    case 412u: goto L_08B2E068;
    case 413u: goto L_08B2E084;
    case 414u: goto L_08B2E094;
    case 415u: goto L_08B2E09C;
    case 416u: goto L_08B2E0A4;
    case 417u: goto L_08B2E0AC;
    case 418u: goto L_08B2E0C8;
    case 419u: goto L_08B2E0F0;
    case 420u: goto L_08B2E0FC;
    case 421u: goto L_08B2E110;
    case 422u: goto L_08B2E114;
    case 423u: goto L_08B2E138;
    case 424u: goto L_08B2E140;
    case 425u: goto L_08B2E160;
    case 426u: goto L_08B2E16C;
    case 427u: goto L_08B2E184;
    case 428u: goto L_08B2E188;
    case 429u: goto L_08B2E1A0;
    case 430u: goto L_08B2E204;
    case 431u: goto L_08B2E228;
    case 432u: goto L_08B2E264;
    case 433u: goto L_08B2E270;
    case 434u: goto L_08B2E27C;
    case 435u: goto L_08B2E284;
    case 436u: goto L_08B2E298;
    case 437u: goto L_08B2E2A0;
    case 438u: goto L_08B2E2B4;
    case 439u: goto L_08B2E2BC;
    case 440u: goto L_08B2E2C0;
    case 441u: goto L_08B2E2C8;
    case 442u: goto L_08B2E2D4;
    case 443u: goto L_08B2E2E0;
    case 444u: goto L_08B2E2F0;
    case 445u: goto L_08B2E2F8;
    case 446u: goto L_08B2E300;
    case 447u: goto L_08B2E310;
    case 448u: goto L_08B2E320;
    case 449u: goto L_08B2E32C;
    case 450u: goto L_08B2E33C;
    case 451u: goto L_08B2E348;
    case 452u: goto L_08B2E360;
    case 453u: goto L_08B2E368;
    case 454u: goto L_08B2E378;
    case 455u: goto L_08B2E384;
    case 456u: goto L_08B2E39C;
    case 457u: goto L_08B2E3A4;
    case 458u: goto L_08B2E3BC;
    case 459u: goto L_08B2E3CC;
    case 460u: goto L_08B2E3D8;
    case 461u: goto L_08B2E3EC;
    case 462u: goto L_08B2E404;
    case 463u: goto L_08B2E418;
    case 464u: goto L_08B2E420;
    case 465u: goto L_08B2E424;
    case 466u: goto L_08B2E438;
    case 467u: goto L_08B2E484;
    case 468u: goto L_08B2E4AC;
    case 469u: goto L_08B2E4C4;
    case 470u: goto L_08B2E4DC;
    case 471u: goto L_08B2E504;
    case 472u: goto L_08B2E510;
    case 473u: goto L_08B2E524;
    case 474u: goto L_08B2E540;
    case 475u: goto L_08B2E560;
    case 476u: goto L_08B2E578;
    case 477u: goto L_08B2E5A4;
    case 478u: goto L_08B2E5B0;
    case 479u: goto L_08B2E5BC;
    case 480u: goto L_08B2E5C4;
    case 481u: goto L_08B2E5CC;
    case 482u: goto L_08B2E5D0;
    case 483u: goto L_08B2E5F4;
    case 484u: goto L_08B2E5FC;
    case 485u: goto L_08B2E618;
    case 486u: goto L_08B2E62C;
    case 487u: goto L_08B2E648;
    case 488u: goto L_08B2E64C;
    case 489u: goto L_08B2E654;
    case 490u: goto L_08B2E668;
    case 491u: goto L_08B2E690;
    case 492u: goto L_08B2E69C;
    case 493u: goto L_08B2E6E4;
    case 494u: goto L_08B2E70C;
    case 495u: goto L_08B2E718;
    case 496u: goto L_08B2E760;
    case 497u: goto L_08B2E7C8;
    case 498u: goto L_08B2E7EC;
    case 499u: goto L_08B2E828;
    case 500u: goto L_08B2E834;
    case 501u: goto L_08B2E840;
    case 502u: goto L_08B2E848;
    case 503u: goto L_08B2E85C;
    case 504u: goto L_08B2E864;
    case 505u: goto L_08B2E878;
    case 506u: goto L_08B2E880;
    case 507u: goto L_08B2E884;
    case 508u: goto L_08B2E88C;
    case 509u: goto L_08B2E89C;
    case 510u: goto L_08B2E8A4;
    case 511u: goto L_08B2E8AC;
    case 512u: goto L_08B2E8BC;
    case 513u: goto L_08B2E8C8;
    case 514u: goto L_08B2E8E0;
    case 515u: goto L_08B2E8E8;
    case 516u: goto L_08B2E900;
    case 517u: goto L_08B2E910;
    case 518u: goto L_08B2E91C;
    case 519u: goto L_08B2E930;
    case 520u: goto L_08B2E948;
    case 521u: goto L_08B2E95C;
    case 522u: goto L_08B2E964;
    case 523u: goto L_08B2E968;
    case 524u: goto L_08B2E97C;
    case 525u: goto L_08B2E9C8;
    case 526u: goto L_08B2E9F0;
    case 527u: goto L_08B2E9FC;
    case 528u: goto L_08B2EA38;
    case 529u: goto L_08B2EA60;
    case 530u: goto L_08B2EA6C;
    case 531u: goto L_08B2EA80;
    case 532u: goto L_08B2EA84;
    case 533u: goto L_08B2EAA8;
    case 534u: goto L_08B2EAB0;
    case 535u: goto L_08B2EAD0;
    case 536u: goto L_08B2EADC;
    case 537u: goto L_08B2EAF4;
    case 538u: goto L_08B2EAF8;
    case 539u: goto L_08B2EB10;
    case 540u: goto L_08B2EB38;
    case 541u: goto L_08B2EB44;
    case 542u: goto L_08B2EB54;
    case 543u: goto L_08B2EB74;
    case 544u: goto L_08B2EB8C;
    case 545u: goto L_08B2EBC0;
    case 546u: goto L_08B2EBCC;
    case 547u: goto L_08B2EBE0;
    case 548u: goto L_08B2EBE8;
    case 549u: goto L_08B2EBF0;
    case 550u: goto L_08B2EBF8;
    case 551u: goto L_08B2EC14;
    case 552u: goto L_08B2EC1C;
    case 553u: goto L_08B2EC28;
    case 554u: goto L_08B2EC2C;
    case 555u: goto L_08B2EC3C;
    case 556u: goto L_08B2EC5C;
    case 557u: goto L_08B2EC84;
    case 558u: goto L_08B2EC90;
    case 559u: goto L_08B2ECBC;
    case 560u: goto L_08B2ECE4;
    case 561u: goto L_08B2ECF0;
    case 562u: goto L_08B2ED10;
    case 563u: goto L_08B2ED38;
    case 564u: goto L_08B2ED44;
    case 565u: goto L_08B2ED64;
    case 566u: goto L_08B2ED8C;
    case 567u: goto L_08B2ED98;
    case 568u: goto L_08B2EDD4;
    case 569u: goto L_08B2EDF4;
    case 570u: goto L_08B2EE00;
    case 571u: goto L_08B2EE24;
    case 572u: goto L_08B2EE4C;
    case 573u: goto L_08B2EE58;
    case 574u: goto L_08B2EE6C;
    case 575u: goto L_08B2EE78;
    case 576u: goto L_08B2EE8C;
    case 577u: goto L_08B2EE94;
    case 578u: goto L_08B2EEA8;
    case 579u: goto L_08B2EEC0;
    case 580u: goto L_08B2EEE8;
    case 581u: goto L_08B2EEF4;
    case 582u: goto L_08B2EF10;
    case 583u: goto L_08B2EF24;
    case 584u: goto L_08B2EF28;
    case 585u: goto L_08B2EF40;
    case 586u: goto L_08B2EFA8;
    case 587u: goto L_08B2EFCC;
    case 588u: goto L_08B2F008;
    case 589u: goto L_08B2F014;
    case 590u: goto L_08B2F020;
    case 591u: goto L_08B2F028;
    case 592u: goto L_08B2F03C;
    case 593u: goto L_08B2F044;
    case 594u: goto L_08B2F058;
    case 595u: goto L_08B2F060;
    case 596u: goto L_08B2F064;
    case 597u: goto L_08B2F06C;
    case 598u: goto L_08B2F07C;
    case 599u: goto L_08B2F084;
    case 600u: goto L_08B2F08C;
    case 601u: goto L_08B2F09C;
    case 602u: goto L_08B2F0A8;
    case 603u: goto L_08B2F0B0;
    case 604u: goto L_08B2F0B8;
    case 605u: goto L_08B2F0D0;
    case 606u: goto L_08B2F0D8;
    case 607u: goto L_08B2F0F0;
    case 608u: goto L_08B2F100;
    case 609u: goto L_08B2F10C;
    case 610u: goto L_08B2F120;
    case 611u: goto L_08B2F138;
    case 612u: goto L_08B2F14C;
    case 613u: goto L_08B2F154;
    case 614u: goto L_08B2F158;
    case 615u: goto L_08B2F16C;
    case 616u: goto L_08B2F1B8;
    case 617u: goto L_08B2F1E0;
    case 618u: goto L_08B2F1EC;
    case 619u: goto L_08B2F20C;
    case 620u: goto L_08B2F23C;
    case 621u: goto L_08B2F248;
    case 622u: goto L_08B2F260;
    case 623u: goto L_08B2F27C;
    case 624u: goto L_08B2F2B4;
    case 625u: goto L_08B2F2C0;
    case 626u: goto L_08B2F2E8;
    case 627u: goto L_08B2F2FC;
    case 628u: goto L_08B2F308;
    case 629u: goto L_08B2F310;
    case 630u: goto L_08B2F32C;
    case 631u: goto L_08B2F350;
    case 632u: goto L_08B2F3B4;
    case 633u: goto L_08B2F3FC;
    case 634u: goto L_08B2F408;
    case 635u: goto L_08B2F410;
    case 636u: goto L_08B2F418;
    case 637u: goto L_08B2F42C;
    case 638u: goto L_08B2F434;
    case 639u: goto L_08B2F448;
    case 640u: goto L_08B2F450;
    case 641u: goto L_08B2F454;
    case 642u: goto L_08B2F45C;
    case 643u: goto L_08B2F46C;
    case 644u: goto L_08B2F474;
    case 645u: goto L_08B2F47C;
    case 646u: goto L_08B2F48C;
    case 647u: goto L_08B2F49C;
    case 648u: goto L_08B2F4AC;
    case 649u: goto L_08B2F4B8;
    case 650u: goto L_08B2F4D8;
    case 651u: goto L_08B2F4E0;
    case 652u: goto L_08B2F4F0;
    case 653u: goto L_08B2F508;
    case 654u: goto L_08B2F514;
    case 655u: goto L_08B2F528;
    case 656u: goto L_08B2F52C;
    case 657u: goto L_08B2F534;
    case 658u: goto L_08B2F53C;
    case 659u: goto L_08B2F548;
    case 660u: goto L_08B2F554;
    case 661u: goto L_08B2F55C;
    case 662u: goto L_08B2F56C;
    case 663u: goto L_08B2F5B8;
    case 664u: goto L_08B2F5E8;
    case 665u: goto L_08B2F5F4;
    case 666u: goto L_08B2F608;
    case 667u: goto L_08B2F614;
    case 668u: goto L_08B2F630;
    case 669u: goto L_08B2F63C;
    case 670u: goto L_08B2F640;
    case 671u: goto L_08B2F650;
    case 672u: goto L_08B2F66C;
    case 673u: goto L_08B2F694;
    case 674u: goto L_08B2F6A0;
    case 675u: goto L_08B2F6AC;
    case 676u: goto L_08B2F6B4;
    case 677u: goto L_08B2F6C0;
    case 678u: goto L_08B2F6C8;
    case 679u: goto L_08B2F6D0;
    case 680u: goto L_08B2F6E8;
    case 681u: goto L_08B2F704;
    case 682u: goto L_08B2F71C;
    case 683u: goto L_08B2F74C;
    case 684u: goto L_08B2F758;
    case 685u: goto L_08B2F778;
    case 686u: goto L_08B2F780;
    case 687u: goto L_08B2F784;
    case 688u: goto L_08B2F7A0;
    case 689u: goto L_08B2F7A8;
    case 690u: goto L_08B2F7C8;
    case 691u: goto L_08B2F7D4;
    case 692u: goto L_08B2F7EC;
    case 693u: goto L_08B2F7F0;
    case 694u: goto L_08B2F80C;
    case 695u: goto L_08B2F83C;
    case 696u: goto L_08B2F848;
    case 697u: goto L_08B2F858;
    case 698u: goto L_08B2F860;
    case 699u: goto L_08B2F864;
    case 700u: goto L_08B2F880;
    case 701u: goto L_08B2F888;
    case 702u: goto L_08B2F8A8;
    case 703u: goto L_08B2F8B4;
    case 704u: goto L_08B2F8CC;
    case 705u: goto L_08B2F8D0;
    case 706u: goto L_08B2F8EC;
    case 707u: goto L_08B2F91C;
    case 708u: goto L_08B2F928;
    case 709u: goto L_08B2F960;
    case 710u: goto L_08B2F97C;
    case 711u: goto L_08B2F9AC;
    case 712u: goto L_08B2F9B8;
    case 713u: goto L_08B2F9F0;
    case 714u: goto L_08B2FA0C;
    case 715u: goto L_08B2FA34;
    case 716u: goto L_08B2FA40;
    case 717u: goto L_08B2FA4C;
    case 718u: goto L_08B2FA6C;
    case 719u: goto L_08B2FA84;
    case 720u: goto L_08B2FAAC;
    case 721u: goto L_08B2FAB8;
    case 722u: goto L_08B2FAC8;
    case 723u: goto L_08B2FAD0;
    case 724u: goto L_08B2FAD8;
    case 725u: goto L_08B2FADC;
    case 726u: goto L_08B2FAF8;
    case 727u: goto L_08B2FB00;
    case 728u: goto L_08B2FB20;
    case 729u: goto L_08B2FB2C;
    case 730u: goto L_08B2FB44;
    case 731u: goto L_08B2FB48;
    case 732u: goto L_08B2FB60;
    case 733u: goto L_08B2FB98;
    case 734u: goto L_08B2FBA4;
    case 735u: goto L_08B2FBD0;
    case 736u: goto L_08B2FBF0;
    case 737u: goto L_08B2FC20;
    case 738u: goto L_08B2FC2C;
    case 739u: goto L_08B2FC40;
    case 740u: goto L_08B2FC50;
    case 741u: goto L_08B2FC68;
    case 742u: goto L_08B2FC84;
    case 743u: goto L_08B2FCAC;
    case 744u: goto L_08B2FCB8;
    case 745u: goto L_08B2FCD0;
    case 746u: goto L_08B2FCE0;
    case 747u: goto L_08B2FCEC;
    case 748u: goto L_08B2FD04;
    case 749u: goto L_08B2FD30;
    case 750u: goto L_08B2FD3C;
    case 751u: goto L_08B2FD64;
    case 752u: goto L_08B2FD74;
    case 753u: goto L_08B2FD88;
    case 754u: goto L_08B2FD8C;
    case 755u: goto L_08B2FD98;
    case 756u: goto L_08B2FDA8;
    case 757u: goto L_08B2FDB8;
    case 758u: goto L_08B2FDC0;
    case 759u: goto L_08B2FDC8;
    case 760u: goto L_08B2FDD8;
    case 761u: goto L_08B2FDE0;
    case 762u: goto L_08B2FDE8;
    case 763u: goto L_08B2FDF0;
    case 764u: goto L_08B2FDF4;
    case 765u: goto L_08B2FE18;
    case 766u: goto L_08B2FE20;
    case 767u: goto L_08B2FE3C;
    case 768u: goto L_08B2FE50;
    case 769u: goto L_08B2FE6C;
    case 770u: goto L_08B2FE70;
    case 771u: goto L_08B2FE78;
    case 772u: goto L_08B2FE8C;
    case 773u: goto L_08B2FEB4;
    case 774u: goto L_08B2FED4;
    case 775u: goto L_08B2FEE0;
    case 776u: goto L_08B2FEF0;
    case 777u: goto L_08B2FF38;
    case 778u: goto L_08B2FFA0;
    case 779u: goto L_08B2FFD4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B2C000:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08B2C014u);
    hot_regs.g7 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C014u) goto L_08B2C014;
    return;
L_08B2C014:
    hot_regs.g31 = (0x08B2C01Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 79u, 0x0890849Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C01Cu) goto L_08B2C01C;
    return;
L_08B2C01C:
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
L_08B2C030:
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
    hot_regs.g31 = (0x08B2C060u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C060u) goto L_08B2C060;
    return;
L_08B2C060:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2C06Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C06Cu) goto L_08B2C06C;
    return;
L_08B2C06C:
    ctx.gpr[8] = (0u | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (hot_regs.g2 + static_cast<std::uint32_t>(1396));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    goto L_08B2C080;
L_08B2C080:
    ctx.gpr[9] = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08B2C094;
      }
      goto L_08B2C08C;
    }
L_08B2C08C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (0u | 1u);
      if (branch_taken) {
          goto L_08B2C0A8;
      }
      goto L_08B2C094;
    }
L_08B2C094:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (g8 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(28));
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08B2C080;
      }
      goto L_08B2C0A4;
    }
}
L_08B2C0A4:
    hot_regs.g6 = (0u | 0u);
    goto L_08B2C0A8;
L_08B2C0A8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 & 255u);
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g6 ^ g5);
    { const bool branch_taken = hot_regs.g4 != 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B2C0C4;
      }
      goto L_08B2C0BC;
    }
}
L_08B2C0BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g5));
      if (branch_taken) {
          goto L_08B2C10C;
      }
      goto L_08B2C0C4;
    }
L_08B2C0C4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B2C0F0;
      }
      goto L_08B2C0E4;
    }
}
L_08B2C0E4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g5 & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2C10C;
      }
      goto L_08B2C0F0;
    }
}
L_08B2C0F0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g5 | g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2C10C;
      }
      goto L_08B2C108;
    }
}
L_08B2C108:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2C10C;
L_08B2C10C:
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
L_08B2C128:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08B2C160u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C160u) goto L_08B2C160;
    return;
L_08B2C160:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2C16Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C16Cu) goto L_08B2C16C;
    return;
L_08B2C16C:
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(8));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08B2C180u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 869u, 0x088F7DF0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C180u) goto L_08B2C180;
    return;
L_08B2C180:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B2C1A8u);
    hot_regs.g6 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C1A8u) goto L_08B2C1A8;
    return;
L_08B2C1A8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B2C1C8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2C1F0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C1F0u) goto L_08B2C1F0;
    return;
L_08B2C1F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2C1FCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C1FCu) goto L_08B2C1FC;
    return;
L_08B2C1FC:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g4 = (0u | 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2C220;
      }
      goto L_08B2C20C;
    }
L_08B2C20C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(236)));
    g5 = (g5 & 256u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2C220;
      }
      goto L_08B2C21C;
    }
}
L_08B2C21C:
    hot_regs.g4 = (0u | 1u);
    goto L_08B2C220;
L_08B2C220:
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
          goto L_08B2C24C;
      }
      goto L_08B2C244;
    }
}
L_08B2C244:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B2C294;
      }
      goto L_08B2C24C;
    }
L_08B2C24C:
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
          goto L_08B2C278;
      }
      goto L_08B2C26C;
    }
}
L_08B2C26C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2C294;
      }
      goto L_08B2C278;
    }
}
L_08B2C278:
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
          goto L_08B2C294;
      }
      goto L_08B2C290;
    }
}
L_08B2C290:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2C294;
L_08B2C294:
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
L_08B2C2AC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2C2E4u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C2E4u) goto L_08B2C2E4;
    return;
L_08B2C2E4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2C2F0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C2F0u) goto L_08B2C2F0;
    return;
L_08B2C2F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (hot_regs.g2 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1368));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g31 = (0x08B2C320u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 587u, 0x088F2CE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C320u) goto L_08B2C320;
    return;
L_08B2C320:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B2C334u);
    hot_regs.g6 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C334u) goto L_08B2C334;
    return;
L_08B2C334:
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
L_08B2C354:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 4u);
    hot_regs.g31 = (0x08B2C38Cu);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C38Cu) goto L_08B2C38C;
    return;
L_08B2C38C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2C398u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C398u) goto L_08B2C398;
    return;
L_08B2C398:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08B2C3E8u);
    hot_regs.g5 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C3E8u) goto L_08B2C3E8;
    return;
L_08B2C3E8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B2C410u);
    hot_regs.g6 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C410u) goto L_08B2C410;
    return;
L_08B2C410:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B2C430:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2C458u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C458u) goto L_08B2C458;
    return;
L_08B2C458:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2C464u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C464u) goto L_08B2C464;
    return;
L_08B2C464:
{
    std::uint32_t g7 = hot_regs.g7;
    hot_regs.g6 = (hot_regs.g2 | 0u);
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(464)));
    g7 = (128u << 16u);
    g7 = (hot_regs.g5 & g7);
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08B2C494;
      }
      goto L_08B2C480;
    }
}
L_08B2C480:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    hot_regs.g4 = (0u | 1u);
    g7 = (65408u << 16u);
    g7 = (g7 + static_cast<std::uint32_t>(-1));
    g5 = (g5 & g7);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(464), g5);
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    goto L_08B2C494;
}
L_08B2C494:
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
          goto L_08B2C4C0;
      }
      goto L_08B2C4B8;
    }
}
L_08B2C4B8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B2C508;
      }
      goto L_08B2C4C0;
    }
L_08B2C4C0:
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
          goto L_08B2C4EC;
      }
      goto L_08B2C4E0;
    }
}
L_08B2C4E0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2C508;
      }
      goto L_08B2C4EC;
    }
}
L_08B2C4EC:
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
          goto L_08B2C508;
      }
      goto L_08B2C504;
    }
}
L_08B2C504:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2C508;
L_08B2C508:
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
L_08B2C520:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2C548u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C548u) goto L_08B2C548;
    return;
L_08B2C548:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2C554u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C554u) goto L_08B2C554;
    return;
L_08B2C554:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
      if (branch_taken) {
          goto L_08B2C574;
      }
      goto L_08B2C564;
    }
L_08B2C564:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (16384u << 16u);
    g4 = (g4 | hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2C5C0;
      }
      goto L_08B2C574;
    }
}
L_08B2C574:
    hot_regs.g5 = (49152u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), hot_regs.g4);
    hot_regs.g31 = (0x08B2C58Cu);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 321u, 0x08809958u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C58Cu) goto L_08B2C58C;
    return;
L_08B2C58C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2C5C0;
      }
      goto L_08B2C594;
    }
L_08B2C594:
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
    hot_regs.g31 = (0x08B2C5C0u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C5C0u) goto L_08B2C5C0;
    return;
L_08B2C5C0:
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
L_08B2C5D8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2C600u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C600u) goto L_08B2C600;
    return;
L_08B2C600:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2C60Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C60Cu) goto L_08B2C60C;
    return;
L_08B2C60C:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(464)));
      if (branch_taken) {
          goto L_08B2C62C;
      }
      goto L_08B2C61C;
    }
L_08B2C61C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (256u << 16u);
    g4 = (g4 | hot_regs.g6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(464), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2C63C;
      }
      goto L_08B2C62C;
    }
}
L_08B2C62C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (65280u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(464), g4);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_08B2C63C;
}
L_08B2C63C:
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
L_08B2C654:
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
    hot_regs.g31 = (0x08B2C684u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C684u) goto L_08B2C684;
    return;
L_08B2C684:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2C690u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C690u) goto L_08B2C690;
    return;
L_08B2C690:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(1256)));
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B2C6B0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C6B0u) goto L_08B2C6B0;
    return;
L_08B2C6B0:
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
L_08B2C6CC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 3u);
    hot_regs.g31 = (0x08B2C6F4u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C6F4u) goto L_08B2C6F4;
    return;
L_08B2C6F4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2C700u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C700u) goto L_08B2C700;
    return;
L_08B2C700:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2C734;
      }
      goto L_08B2C710;
    }
L_08B2C710:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    hot_regs.g4 = (hot_regs.g4 | 4096u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2C72Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 654u, 0x089AB1F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C72Cu) goto L_08B2C72C;
    return;
L_08B2C72C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2C750;
      }
      goto L_08B2C734;
    }
L_08B2C734:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2C740u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 696u, 0x089AB4FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C740u) goto L_08B2C740;
    return;
L_08B2C740:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-4097));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), g4);
    hot_regs.g4 = g4;
    goto L_08B2C750;
}
L_08B2C750:
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
L_08B2C768:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2C788u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C788u) goto L_08B2C788;
    return;
L_08B2C788:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2C794u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C794u) goto L_08B2C794;
    return;
L_08B2C794:
    hot_regs.g31 = (0x08B2C79Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 766u, 0x089AB948u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C79Cu) goto L_08B2C79C;
    return;
L_08B2C79C:
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
L_08B2C7B0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 8u);
    hot_regs.g31 = (0x08B2C7D8u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C7D8u) goto L_08B2C7D8;
    return;
L_08B2C7D8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2C7E4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C7E4u) goto L_08B2C7E4;
    return;
L_08B2C7E4:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    hot_regs.g31 = (0x08B2C7F4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C7F4u) goto L_08B2C7F4;
    return;
L_08B2C7F4:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (16457u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 4059u);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (17204u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 / ctx.fpr[17];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08B2C848u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 76u, 0x0892C914u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C848u) goto L_08B2C848;
    return;
L_08B2C848:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08B2C860:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 3u);
    hot_regs.g31 = (0x08B2C888u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C888u) goto L_08B2C888;
    return;
L_08B2C888:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2C894u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C894u) goto L_08B2C894;
    return;
L_08B2C894:
    hot_regs.g31 = (0x08B2C89Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C89Cu) goto L_08B2C89C;
    return;
L_08B2C89C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2C8A8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C8A8u) goto L_08B2C8A8;
    return;
L_08B2C8A8:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(464)));
      if (branch_taken) {
          goto L_08B2C8D8;
      }
      goto L_08B2C8B8;
    }
L_08B2C8B8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (4096u << 16u);
    g4 = (g4 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(464), g4);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(684)));
    g6 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (g4 & g6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(684), g4);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B2C8E8;
      }
      goto L_08B2C8D8;
    }
}
L_08B2C8D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (61440u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(464), g4);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_08B2C8E8;
}
L_08B2C8E8:
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
L_08B2C900:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2C928u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C928u) goto L_08B2C928;
    return;
L_08B2C928:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2C934u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2C934u) goto L_08B2C934;
    return;
L_08B2C934:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(2196)));
    hot_regs.g6 = (0u | 38u);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08B2C94C;
      }
      goto L_08B2C948;
    }
L_08B2C948:
    hot_regs.g4 = (0u | 1u);
    goto L_08B2C94C;
L_08B2C94C:
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
          goto L_08B2C978;
      }
      goto L_08B2C970;
    }
}
L_08B2C970:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B2C9C0;
      }
      goto L_08B2C978;
    }
L_08B2C978:
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
          goto L_08B2C9A4;
      }
      goto L_08B2C998;
    }
}
L_08B2C998:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2C9C0;
      }
      goto L_08B2C9A4;
    }
}
L_08B2C9A4:
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
          goto L_08B2C9C0;
      }
      goto L_08B2C9BC;
    }
}
L_08B2C9BC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2C9C0;
L_08B2C9C0:
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
L_08B2C9D8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 5u);
    hot_regs.g31 = (0x08B2CA0Cu);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2CA0Cu) goto L_08B2CA0C;
    return;
L_08B2CA0C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2CA18u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2CA18u) goto L_08B2CA18;
    return;
L_08B2CA18:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g31 = (0x08B2CA4Cu);
    hot_regs.g6 = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 302u, 0x08891FDCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2CA4Cu) goto L_08B2CA4C;
    return;
L_08B2CA4C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2CA58;
      }
      goto L_08B2CA54;
    }
L_08B2CA54:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B2CA58;
L_08B2CA58:
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
          goto L_08B2CA84;
      }
      goto L_08B2CA7C;
    }
}
L_08B2CA7C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08B2CAD4;
      }
      goto L_08B2CA84;
    }
L_08B2CA84:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g5 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g6));
    g4 = (static_cast<std::int32_t>(g5) < 9 ? 1u : 0u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_08B2CAB4;
    }
    goto L_08B2CAA0;
}
L_08B2CAA0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2CAD4;
      }
      goto L_08B2CAB4;
    }
}
L_08B2CAB4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (ctx.gpr[17] | g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2CAD4;
      }
      goto L_08B2CAD0;
    }
}
L_08B2CAD0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2CAD4;
L_08B2CAD4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B2CADC;
      }
      goto L_08B2CADC;
    }
L_08B2CADC:
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
L_08B2CAF4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 3u);
    hot_regs.g31 = (0x08B2CB1Cu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2CB1Cu) goto L_08B2CB1C;
    return;
L_08B2CB1C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2CB28u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2CB28u) goto L_08B2CB28;
    return;
L_08B2CB28:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (hot_regs.g2 | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    g5 = (0u | 1u);
    g5 = (g5 << (g4 & 31u));
    g5 = (g5 & 255u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    g4 = (aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(478)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2CB54;
      }
      goto L_08B2CB48;
    }
}
L_08B2CB48:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(hot_regs.g6 + static_cast<std::uint32_t>(478), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2CB60;
      }
      goto L_08B2CB54;
    }
}
L_08B2CB54:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (~(g5 | 0u));
    g4 = (g4 & g5);
    aot_mem.aot_store16(hot_regs.g6 + static_cast<std::uint32_t>(478), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08B2CB60;
}
L_08B2CB60:
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
L_08B2CB78:
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
    hot_regs.g31 = (0x08B2CBACu);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2CBACu) goto L_08B2CBAC;
    return;
L_08B2CBAC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2CBB8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2CBB8u) goto L_08B2CBB8;
    return;
L_08B2CBB8:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2CBC8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2CBC8u) goto L_08B2CBC8;
    return;
L_08B2CBC8:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2CC14;
      }
      goto L_08B2CBD8;
    }
L_08B2CBD8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1864)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2CC14;
      }
      goto L_08B2CBE4;
    }
L_08B2CBE4:
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B2CBF0;
      }
      goto L_08B2CBEC;
    }
L_08B2CBEC:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B2CBF0;
L_08B2CBF0:
    hot_regs.g31 = (0x08B2CBF8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2CBF8u) goto L_08B2CBF8;
    return;
L_08B2CBF8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2CC14;
      }
      goto L_08B2CC00;
    }
L_08B2CC00:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1864)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B2CC14;
      }
      goto L_08B2CC10;
    }
L_08B2CC10:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B2CC14;
L_08B2CC14:
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
          goto L_08B2CC40;
      }
      goto L_08B2CC38;
    }
}
L_08B2CC38:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08B2CC88;
      }
      goto L_08B2CC40;
    }
L_08B2CC40:
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
          goto L_08B2CC6C;
      }
      goto L_08B2CC60;
    }
}
L_08B2CC60:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2CC88;
      }
      goto L_08B2CC6C;
    }
}
L_08B2CC6C:
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
          goto L_08B2CC88;
      }
      goto L_08B2CC84;
    }
}
L_08B2CC84:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2CC88;
L_08B2CC88:
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
L_08B2CCA8:
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
    hot_regs.g31 = (0x08B2CCD8u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2CCD8u) goto L_08B2CCD8;
    return;
L_08B2CCD8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2CCE4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2CCE4u) goto L_08B2CCE4;
    return;
L_08B2CCE4:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08B2CCF4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2CCF4u) goto L_08B2CCF4;
    return;
L_08B2CCF4:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g4 = (0u | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2CD1C;
      }
      goto L_08B2CD04;
    }
L_08B2CD04:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(1864)));
    { const bool branch_taken = g17 == 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08B2CD1C;
      }
      goto L_08B2CD10;
    }
}
L_08B2CD10:
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B2CD1C;
      }
      goto L_08B2CD18;
    }
L_08B2CD18:
    hot_regs.g4 = (0u | 1u);
    goto L_08B2CD1C;
L_08B2CD1C:
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
          goto L_08B2CD48;
      }
      goto L_08B2CD40;
    }
}
L_08B2CD40:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B2CD90;
      }
      goto L_08B2CD48;
    }
L_08B2CD48:
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
          goto L_08B2CD74;
      }
      goto L_08B2CD68;
    }
}
L_08B2CD68:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2CD90;
      }
      goto L_08B2CD74;
    }
}
L_08B2CD74:
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
          goto L_08B2CD90;
      }
      goto L_08B2CD8C;
    }
}
L_08B2CD8C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2CD90;
L_08B2CD90:
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
L_08B2CDAC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2CDD4u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2CDD4u) goto L_08B2CDD4;
    return;
L_08B2CDD4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2CDE0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2CDE0u) goto L_08B2CDE0;
    return;
L_08B2CDE0:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g4 = (0u | 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2CE0C;
      }
      goto L_08B2CDF0;
    }
L_08B2CDF0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(2228)));
    g5 = (g5 ^ 68u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2CE0C;
      }
      goto L_08B2CE08;
    }
}
L_08B2CE08:
    hot_regs.g4 = (0u | 1u);
    goto L_08B2CE0C;
L_08B2CE0C:
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
          goto L_08B2CE38;
      }
      goto L_08B2CE30;
    }
}
L_08B2CE30:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B2CE80;
      }
      goto L_08B2CE38;
    }
L_08B2CE38:
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
          goto L_08B2CE64;
      }
      goto L_08B2CE58;
    }
}
L_08B2CE58:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2CE80;
      }
      goto L_08B2CE64;
    }
}
L_08B2CE64:
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
          goto L_08B2CE80;
      }
      goto L_08B2CE7C;
    }
}
L_08B2CE7C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2CE80;
L_08B2CE80:
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
L_08B2CE98:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2CEC0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2CEC0u) goto L_08B2CEC0;
    return;
L_08B2CEC0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2CECCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2CECCu) goto L_08B2CECC;
    return;
L_08B2CECC:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(464)));
      if (branch_taken) {
          goto L_08B2CEEC;
      }
      goto L_08B2CEDC;
    }
L_08B2CEDC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (32768u << 16u);
    g4 = (g4 | hot_regs.g6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(464), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2CEFC;
      }
      goto L_08B2CEEC;
    }
}
L_08B2CEEC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (32768u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(464), g4);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_08B2CEFC;
}
L_08B2CEFC:
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
L_08B2CF14:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2CF3Cu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2CF3Cu) goto L_08B2CF3C;
    return;
L_08B2CF3C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2CF48u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2CF48u) goto L_08B2CF48;
    return;
L_08B2CF48:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2CF68;
      }
      goto L_08B2CF58;
    }
L_08B2CF58:
    hot_regs.g31 = (0x08B2CF60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 912u, 0x0890BA20u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2CF60u) goto L_08B2CF60;
    return;
L_08B2CF60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2CF70;
      }
      goto L_08B2CF68;
    }
L_08B2CF68:
    hot_regs.g31 = (0x08B2CF70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 925u, 0x0890BB1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2CF70u) goto L_08B2CF70;
    return;
L_08B2CF70:
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
L_08B2CF88:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2CFB0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2CFB0u) goto L_08B2CFB0;
    return;
L_08B2CFB0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2CFBCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2CFBCu) goto L_08B2CFBC;
    return;
L_08B2CFBC:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(468)));
      if (branch_taken) {
          goto L_08B2CFDC;
      }
      goto L_08B2CFCC;
    }
L_08B2CFCC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (g4 & hot_regs.g6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(468), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2CFE4;
      }
      goto L_08B2CFDC;
    }
}
L_08B2CFDC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 1u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(468), g4);
    hot_regs.g4 = g4;
    goto L_08B2CFE4;
}
L_08B2CFE4:
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
L_08B2CFFC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2D01Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D01Cu) goto L_08B2D01C;
    return;
L_08B2D01C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2D028u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D028u) goto L_08B2D028;
    return;
L_08B2D028:
    hot_regs.g31 = (0x08B2D030u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 396u, 0x08929C28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D030u) goto L_08B2D030;
    return;
L_08B2D030:
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
L_08B2D044:
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
    hot_regs.g31 = (0x08B2D078u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D078u) goto L_08B2D078;
    return;
L_08B2D078:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2D084u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D084u) goto L_08B2D084;
    return;
L_08B2D084:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08B2D094u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D094u) goto L_08B2D094;
    return;
L_08B2D094:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g31 = (0x08B2D0A4u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D0A4u) goto L_08B2D0A4;
    return;
L_08B2D0A4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2D0D8;
      }
      goto L_08B2D0AC;
    }
L_08B2D0AC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2D0D8;
      }
      goto L_08B2D0B8;
    }
L_08B2D0B8:
    hot_regs.g31 = (0x08B2D0C0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 587u, 0x08A66C04u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D0C0u) goto L_08B2D0C0;
    return;
L_08B2D0C0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g4 = (0u < g4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g2 == 0u;
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2D0F8;
      }
      goto L_08B2D0D0;
    }
}
L_08B2D0D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08B2D0F8;
      }
      goto L_08B2D0D8;
    }
L_08B2D0D8:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08B2D0E4u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 587u, 0x08A66C04u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D0E4u) goto L_08B2D0E4;
    return;
L_08B2D0E4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g4 = (0u < g4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g2 == 0u;
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2D0F8;
      }
      goto L_08B2D0F4;
    }
}
L_08B2D0F4:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B2D0F8;
L_08B2D0F8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g5 = (0u < g17 ? 1u : 0u);
    g5 = (g5 & 255u);
    g5 = (g5 & 255u);
    g17 = (g5 ^ hot_regs.g4);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    g17 = (0u < g17 ? 1u : 0u);
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08B2D118;
      }
      goto L_08B2D110;
    }
}
L_08B2D110:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08B2D160;
      }
      goto L_08B2D118;
    }
L_08B2D118:
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
          goto L_08B2D144;
      }
      goto L_08B2D138;
    }
}
L_08B2D138:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2D160;
      }
      goto L_08B2D144;
    }
}
L_08B2D144:
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
          goto L_08B2D160;
      }
      goto L_08B2D15C;
    }
}
L_08B2D15C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2D160;
L_08B2D160:
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
L_08B2D180:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 6u);
    hot_regs.g31 = (0x08B2D1D4u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D1D4u) goto L_08B2D1D4;
    return;
L_08B2D1D4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2D1E0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D1E0u) goto L_08B2D1E0;
    return;
L_08B2D1E0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f26 = ctx.fpr[26];
    float f28 = ctx.fpr[28];
    float f30 = ctx.fpr[30];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    f26 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    f28 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    f30 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(12)));
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f20 = f12 - f26;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f22 = f13 - f28;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    ctx.fpr[24] = f14 - f30;
    f26 = f12 + f26;
    f28 = f13 + f28;
    f30 = f14 + f30;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    g18 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (g18 + static_cast<std::uint32_t>(-1));
    g4 = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g18)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[21] = (ctx.lo);
    g4 = (g18 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    ctx.fpr[26] = f26;
    ctx.fpr[28] = f28;
    ctx.fpr[30] = f30;
    goto L_08B2D234;
}
}
L_08B2D234:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-3344));
      if (branch_taken) {
          goto L_08B2D2E0;
      }
      goto L_08B2D240;
    }
L_08B2D240:
    if (ctx.gpr[19] != 0u) {
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
        goto L_08B2D2E4;
    }
    goto L_08B2D248;
L_08B2D248:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B2D264;
      }
      goto L_08B2D250;
    }
L_08B2D250:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g5 != 0u) {
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_08B2D26C;
    }
    goto L_08B2D264;
}
L_08B2D264:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B2D28C;
      }
      goto L_08B2D26C;
    }
L_08B2D26C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + ctx.gpr[18]);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 & 128u);
    if (g5 == 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = g5;
        goto L_08B2D288;
    }
    goto L_08B2D280;
}
L_08B2D280:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B2D28C;
      }
      goto L_08B2D288;
    }
L_08B2D288:
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[21]);
    goto L_08B2D28C;
L_08B2D28C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2D2D8;
      }
      goto L_08B2D294;
    }
L_08B2D294:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08B2D2B0;
      }
      goto L_08B2D2A4;
    }
L_08B2D2A4:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08B2D2D8;
      }
      goto L_08B2D2B0;
    }
L_08B2D2B0:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g31 = (0x08B2D2CCu);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 799u, 0x08AAF984u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D2CCu) goto L_08B2D2CC;
    return;
L_08B2D2CC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2D2D8;
      }
      goto L_08B2D2D4;
    }
L_08B2D2D4:
    ctx.gpr[19] = (0u | 1u);
    goto L_08B2D2D8;
L_08B2D2D8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B2D234;
      }
      goto L_08B2D2E0;
    }
L_08B2D2E0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    goto L_08B2D2E4;
L_08B2D2E4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g19 = ctx.gpr[19];
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g6 = (0u < g19 ? 1u : 0u);
    g6 = (g6 & 255u);
    g6 = (g6 & 255u);
    g4 = (0u < g4 ? 1u : 0u);
    g19 = (g6 ^ g4);
    { const bool branch_taken = hot_regs.g5 != 0u;
    g19 = (0u < g19 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08B2D30C;
      }
      goto L_08B2D304;
    }
}
L_08B2D304:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08B2D354;
      }
      goto L_08B2D30C;
    }
L_08B2D30C:
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
          goto L_08B2D338;
      }
      goto L_08B2D32C;
    }
}
L_08B2D32C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[19] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2D354;
      }
      goto L_08B2D338;
    }
}
L_08B2D338:
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
          goto L_08B2D354;
      }
      goto L_08B2D350;
    }
}
L_08B2D350:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2D354;
L_08B2D354:
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
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B2D394:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2D3BCu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D3BCu) goto L_08B2D3BC;
    return;
L_08B2D3BC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2D3C8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D3C8u) goto L_08B2D3C8;
    return;
L_08B2D3C8:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(468)));
      if (branch_taken) {
          goto L_08B2D3E4;
      }
      goto L_08B2D3D8;
    }
L_08B2D3D8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(468), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2D3F0;
      }
      goto L_08B2D3E4;
    }
}
L_08B2D3E4:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-5));
    g4 = (g4 & hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(468), g4);
    hot_regs.g4 = g4;
    goto L_08B2D3F0;
}
L_08B2D3F0:
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
L_08B2D408:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2D428u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D428u) goto L_08B2D428;
    return;
L_08B2D428:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2D434u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D434u) goto L_08B2D434;
    return;
L_08B2D434:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2D444;
      }
      goto L_08B2D440;
    }
L_08B2D440:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(1864), 0u);
    goto L_08B2D444;
L_08B2D444:
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
L_08B2D458:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[20] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[20] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08B2D49Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D49Cu) goto L_08B2D49C;
    return;
L_08B2D49C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08B2D4A8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D4A8u) goto L_08B2D4A8;
    return;
L_08B2D4A8:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08B2D4B8u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 641u, 0x089CA714u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D4B8u) goto L_08B2D4B8;
    return;
L_08B2D4B8:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2D624;
      }
      goto L_08B2D4C4;
    }
L_08B2D4C4:
    ctx.gpr[17] = (0u | 2u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B2D4D4u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 334u, 0x08911320u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D4D4u) goto L_08B2D4D4;
    return;
L_08B2D4D4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(456)));
    g5 = (65532u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(456), g4);
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(460)));
    g5 = (65024u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(460), g4);
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(464)));
    g5 = (61440u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(464), g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(614))))));
    g4 = (g4 & 2u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2D534;
      }
      goto L_08B2D520;
    }
}
L_08B2D520:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(456)));
    g5 = (65528u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(456), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08B2D534;
}
L_08B2D534:
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B2D54Cu);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D54Cu) goto L_08B2D54C;
    return;
L_08B2D54C:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B2D558u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D558u) goto L_08B2D558;
    return;
L_08B2D558:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B2D564u);
    hot_regs.g5 = (0u | 55u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D564u) goto L_08B2D564;
    return;
L_08B2D564:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08B2D574u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 307u, 0x089B56FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D574u) goto L_08B2D574;
    return;
L_08B2D574:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08B2D580u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 72u, 0x08B00520u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D580u) goto L_08B2D580;
    return;
L_08B2D580:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-497));
    g4 = (g4 & hot_regs.g5);
    g4 = (g4 | 48u);
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(72), g4);
    g4 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = g4 == ctx.gpr[21];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2D5B4;
      }
      goto L_08B2D5A0;
    }
}
L_08B2D5A0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B2D5B4;
      }
      goto L_08B2D5AC;
    }
L_08B2D5AC:
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08B2D5B4;
L_08B2D5B4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(613))))));
    hot_regs.g4 = (hot_regs.g4 | 16u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g31 = (0x08B2D5CCu);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 382u, 0x08A8DF08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D5CCu) goto L_08B2D5CC;
    return;
L_08B2D5CC:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(312), static_cast<std::uint8_t>(hot_regs.g2));
    hot_regs.g31 = (0x08B2D5D8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 540u, 0x08B26CECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D5D8u) goto L_08B2D5D8;
    return;
L_08B2D5D8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2D5E4u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D5E4u) goto L_08B2D5E4;
    return;
L_08B2D5E4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29704), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08B2D5F8u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D5F8u) goto L_08B2D5F8;
    return;
L_08B2D5F8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2D63C;
      }
      goto L_08B2D604;
    }
L_08B2D604:
    hot_regs.g4 = (2239u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(21784));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29704)));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2D61Cu);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 275u, 0x08861C90u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D61Cu) goto L_08B2D61C;
    return;
L_08B2D61C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2D63C;
      }
      goto L_08B2D624;
    }
L_08B2D624:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08B2D63Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D63Cu) goto L_08B2D63C;
    return;
L_08B2D63C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B2D668:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2D6A8u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D6A8u) goto L_08B2D6A8;
    return;
L_08B2D6A8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08B2D6B4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D6B4u) goto L_08B2D6B4;
    return;
L_08B2D6B4:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B2D6C4u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 641u, 0x089CA714u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D6C4u) goto L_08B2D6C4;
    return;
L_08B2D6C4:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2D814;
      }
      goto L_08B2D6D0;
    }
L_08B2D6D0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B2D6DCu);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 334u, 0x08911320u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D6DCu) goto L_08B2D6DC;
    return;
L_08B2D6DC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(456)));
    g5 = (65532u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(456), g4);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(460)));
    g5 = (65024u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(460), g4);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(464)));
    g5 = (61440u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(464), g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(614))))));
    g4 = (g4 & 2u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2D73C;
      }
      goto L_08B2D728;
    }
}
L_08B2D728:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    g5 = (65528u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08B2D73C;
}
L_08B2D73C:
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
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g31 = (0x08B2D754u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 382u, 0x08A8DF08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D754u) goto L_08B2D754;
    return;
L_08B2D754:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(312), static_cast<std::uint8_t>(hot_regs.g2));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) >= 0;
    // nop
      if (branch_taken) {
          goto L_08B2D778;
      }
      goto L_08B2D764;
    }
L_08B2D764:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B2D770u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 10u, 0x08B000ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D770u) goto L_08B2D770;
    return;
L_08B2D770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2D78C;
      }
      goto L_08B2D778;
    }
L_08B2D778:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B2D78Cu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 24u, 0x08B00214u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D78Cu) goto L_08B2D78C;
    return;
L_08B2D78C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B2D798u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D798u) goto L_08B2D798;
    return;
L_08B2D798:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B2D7A4u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D7A4u) goto L_08B2D7A4;
    return;
L_08B2D7A4:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B2D7B0u);
    hot_regs.g5 = (0u | 55u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D7B0u) goto L_08B2D7B0;
    return;
L_08B2D7B0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B2D7C0u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 307u, 0x089B56FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D7C0u) goto L_08B2D7C0;
    return;
L_08B2D7C0:
    hot_regs.g31 = (0x08B2D7C8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 540u, 0x08B26CECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D7C8u) goto L_08B2D7C8;
    return;
L_08B2D7C8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2D7D4u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D7D4u) goto L_08B2D7D4;
    return;
L_08B2D7D4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29704), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08B2D7E8u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D7E8u) goto L_08B2D7E8;
    return;
L_08B2D7E8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2D82C;
      }
      goto L_08B2D7F4;
    }
L_08B2D7F4:
    hot_regs.g4 = (2239u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(21784));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29704)));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2D80Cu);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 275u, 0x08861C90u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D80Cu) goto L_08B2D80C;
    return;
L_08B2D80C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2D82C;
      }
      goto L_08B2D814;
    }
L_08B2D814:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08B2D82Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D82Cu) goto L_08B2D82C;
    return;
L_08B2D82C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08B2D854:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2D87Cu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D87Cu) goto L_08B2D87C;
    return;
L_08B2D87C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2D888u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D888u) goto L_08B2D888;
    return;
L_08B2D888:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(468)));
      if (branch_taken) {
          goto L_08B2D8A4;
      }
      goto L_08B2D898;
    }
L_08B2D898:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(468), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2D8B0;
      }
      goto L_08B2D8A4;
    }
}
L_08B2D8A4:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-129));
    g4 = (g4 & hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(468), g4);
    hot_regs.g4 = g4;
    goto L_08B2D8B0;
}
L_08B2D8B0:
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
L_08B2D8C8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2D8F0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D8F0u) goto L_08B2D8F0;
    return;
L_08B2D8F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2D8FCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D8FCu) goto L_08B2D8FC;
    return;
L_08B2D8FC:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(468)));
      if (branch_taken) {
          goto L_08B2D918;
      }
      goto L_08B2D90C;
    }
L_08B2D90C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 256u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(468), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2D924;
      }
      goto L_08B2D918;
    }
}
L_08B2D918:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-257));
    g4 = (g4 & hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(468), g4);
    hot_regs.g4 = g4;
    goto L_08B2D924;
}
L_08B2D924:
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
L_08B2D93C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2D964u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D964u) goto L_08B2D964;
    return;
L_08B2D964:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2D970u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D970u) goto L_08B2D970;
    return;
L_08B2D970:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(468)));
      if (branch_taken) {
          goto L_08B2D98C;
      }
      goto L_08B2D980;
    }
L_08B2D980:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 512u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(468), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2D998;
      }
      goto L_08B2D98C;
    }
}
L_08B2D98C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-513));
    g4 = (g4 & hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(468), g4);
    hot_regs.g4 = g4;
    goto L_08B2D998;
}
L_08B2D998:
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
L_08B2D9B0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2D9DCu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D9DCu) goto L_08B2D9DC;
    return;
L_08B2D9DC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2D9E8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D9E8u) goto L_08B2D9E8;
    return;
L_08B2D9E8:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g31 = (0x08B2D9F8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2D9F8u) goto L_08B2D9F8;
    return;
L_08B2D9F8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2DA34;
      }
      goto L_08B2DA00;
    }
L_08B2DA00:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2DA34;
      }
      goto L_08B2DA0C;
    }
L_08B2DA0C:
    hot_regs.g31 = (0x08B2DA14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 456u, 0x08B01BA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DA14u) goto L_08B2DA14;
    return;
L_08B2DA14:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2DA34;
      }
      goto L_08B2DA1C;
    }
L_08B2DA1C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 219u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2DA34;
      }
      goto L_08B2DA30;
    }
}
L_08B2DA30:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B2DA34;
L_08B2DA34:
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
          goto L_08B2DA60;
      }
      goto L_08B2DA58;
    }
}
L_08B2DA58:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08B2DAA8;
      }
      goto L_08B2DA60;
    }
L_08B2DA60:
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
          goto L_08B2DA8C;
      }
      goto L_08B2DA80;
    }
}
L_08B2DA80:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2DAA8;
      }
      goto L_08B2DA8C;
    }
}
L_08B2DA8C:
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
          goto L_08B2DAA8;
      }
      goto L_08B2DAA4;
    }
}
L_08B2DAA4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2DAA8;
L_08B2DAA8:
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
L_08B2DAC4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2DAECu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DAECu) goto L_08B2DAEC;
    return;
L_08B2DAEC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2DAF8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DAF8u) goto L_08B2DAF8;
    return;
L_08B2DAF8:
    hot_regs.g4 = (0u | 0u);
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2DB08;
      }
      goto L_08B2DB04;
    }
L_08B2DB04:
    hot_regs.g4 = (0u | 1u);
    goto L_08B2DB08;
L_08B2DB08:
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
          goto L_08B2DB34;
      }
      goto L_08B2DB2C;
    }
}
L_08B2DB2C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B2DB7C;
      }
      goto L_08B2DB34;
    }
L_08B2DB34:
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
          goto L_08B2DB60;
      }
      goto L_08B2DB54;
    }
}
L_08B2DB54:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2DB7C;
      }
      goto L_08B2DB60;
    }
}
L_08B2DB60:
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
          goto L_08B2DB7C;
      }
      goto L_08B2DB78;
    }
}
L_08B2DB78:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2DB7C;
L_08B2DB7C:
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
L_08B2DB94:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2DBBCu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DBBCu) goto L_08B2DBBC;
    return;
L_08B2DBBC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2DBC8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DBC8u) goto L_08B2DBC8;
    return;
L_08B2DBC8:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(2236)));
    hot_regs.g6 = (0u | 12u);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08B2DBE0;
      }
      goto L_08B2DBDC;
    }
L_08B2DBDC:
    hot_regs.g4 = (0u | 1u);
    goto L_08B2DBE0;
L_08B2DBE0:
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
          goto L_08B2DC0C;
      }
      goto L_08B2DC04;
    }
}
L_08B2DC04:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B2DC54;
      }
      goto L_08B2DC0C;
    }
L_08B2DC0C:
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
          goto L_08B2DC38;
      }
      goto L_08B2DC2C;
    }
}
L_08B2DC2C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2DC54;
      }
      goto L_08B2DC38;
    }
}
L_08B2DC38:
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
          goto L_08B2DC54;
      }
      goto L_08B2DC50;
    }
}
L_08B2DC50:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2DC54;
L_08B2DC54:
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
L_08B2DC6C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2DC94u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DC94u) goto L_08B2DC94;
    return;
L_08B2DC94:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2DCA0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DCA0u) goto L_08B2DCA0;
    return;
L_08B2DCA0:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(460)));
    hot_regs.g7 = (0u + static_cast<std::uint32_t>(-513));
    { const bool branch_taken = hot_regs.g6 == 0u;
    g4 = (g4 & hot_regs.g7);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2DCE4;
      }
      goto L_08B2DCB8;
    }
}
L_08B2DCB8:
    hot_regs.g4 = (hot_regs.g4 | 512u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(460), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(456)));
    hot_regs.g6 = (4096u << 16u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(456), hot_regs.g4);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x08B2DCDCu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DCDCu) goto L_08B2DCDC;
    return;
L_08B2DCDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2DD08;
      }
      goto L_08B2DCE4;
    }
L_08B2DCE4:
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(460), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(456)));
    hot_regs.g6 = (61440u << 16u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(456), hot_regs.g4);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x08B2DD08u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DD08u) goto L_08B2DD08;
    return;
L_08B2DD08:
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
L_08B2DD20:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2DD40u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DD40u) goto L_08B2DD40;
    return;
L_08B2DD40:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2DD4Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DD4Cu) goto L_08B2DD4C;
    return;
L_08B2DD4C:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2DE68;
      }
      goto L_08B2DD58;
    }
L_08B2DD58:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    g5 = (0u | 55u);
    { const bool branch_taken = hot_regs.g4 == g5;
    g5 = (0u | 22u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2DE68;
      }
      goto L_08B2DD68;
    }
}
L_08B2DD68:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B2DE68;
      }
      goto L_08B2DD70;
    }
L_08B2DD70:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2DD7Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DD7Cu) goto L_08B2DD7C;
    return;
L_08B2DD7C:
    hot_regs.g31 = (0x08B2DD84u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 976u, 0x0890BDFCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DD84u) goto L_08B2DD84;
    return;
L_08B2DD84:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    g5 = (0u | 61u);
    { const bool branch_taken = hot_regs.g4 == g5;
    g5 = (0u | 59u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2DD9C;
      }
      goto L_08B2DD94;
    }
}
L_08B2DD94:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B2DDA4;
      }
      goto L_08B2DD9C;
    }
L_08B2DD9C:
    hot_regs.g31 = (0x08B2DDA4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DDA4u) goto L_08B2DDA4;
    return;
L_08B2DDA4:
    hot_regs.g31 = (0x08B2DDACu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 195u, 0x0886D420u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DDACu) goto L_08B2DDAC;
    return;
L_08B2DDAC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2DDB8u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DDB8u) goto L_08B2DDB8;
    return;
L_08B2DDB8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2DDC4u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DDC4u) goto L_08B2DDC4;
    return;
L_08B2DDC4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2DDD0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DDD0u) goto L_08B2DDD0;
    return;
L_08B2DDD0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-8193));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), hot_regs.g4);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-4097));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), hot_regs.g4);
    hot_regs.g31 = (0x08B2DDF4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 410u, 0x08909880u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DDF4u) goto L_08B2DDF4;
    return;
L_08B2DDF4:
    hot_regs.g31 = (0x08B2DDFCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DDFCu) goto L_08B2DDFC;
    return;
L_08B2DDFC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-9));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), hot_regs.g4);
    hot_regs.g31 = (0x08B2DE14u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DE14u) goto L_08B2DE14;
    return;
L_08B2DE14:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2DE30;
      }
      goto L_08B2DE1C;
    }
L_08B2DE1C:
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(776)));
      if (branch_taken) {
          goto L_08B2DE44;
      }
      goto L_08B2DE30;
    }
}
L_08B2DE30:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2DE3Cu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 304u, 0x08911138u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DE3Cu) goto L_08B2DE3C;
    return;
L_08B2DE3C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
    goto L_08B2DE44;
L_08B2DE44:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2DE54u);
    hot_regs.g7 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DE54u) goto L_08B2DE54;
    return;
L_08B2DE54:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    g5 = (57344u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08B2DE68;
}
L_08B2DE68:
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
L_08B2DE7C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2DE9Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DE9Cu) goto L_08B2DE9C;
    return;
L_08B2DE9C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2DEA8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DEA8u) goto L_08B2DEA8;
    return;
L_08B2DEA8:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2DED4;
      }
      goto L_08B2DEB8;
    }
L_08B2DEB8:
    hot_regs.g31 = (0x08B2DEC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DEC0u) goto L_08B2DEC0;
    return;
L_08B2DEC0:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1340)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2DED4u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 746u, 0x08A02EC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DED4u) goto L_08B2DED4;
    return;
L_08B2DED4:
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
L_08B2DEE8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2DF10u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DF10u) goto L_08B2DF10;
    return;
L_08B2DF10:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2DF1Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DF1Cu) goto L_08B2DF1C;
    return;
L_08B2DF1C:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (0u | 0u);
    g5 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(464)));
    hot_regs.g6 = (1u << 16u);
    g5 = (g5 & hot_regs.g6);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2DF38;
      }
      goto L_08B2DF34;
    }
}
L_08B2DF34:
    hot_regs.g4 = (0u | 1u);
    goto L_08B2DF38;
L_08B2DF38:
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
          goto L_08B2DF64;
      }
      goto L_08B2DF5C;
    }
}
L_08B2DF5C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B2DFAC;
      }
      goto L_08B2DF64;
    }
L_08B2DF64:
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
          goto L_08B2DF90;
      }
      goto L_08B2DF84;
    }
}
L_08B2DF84:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2DFAC;
      }
      goto L_08B2DF90;
    }
}
L_08B2DF90:
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
          goto L_08B2DFAC;
      }
      goto L_08B2DFA8;
    }
}
L_08B2DFA8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2DFAC;
L_08B2DFAC:
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
L_08B2DFC4:
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
    hot_regs.g31 = (0x08B2DFF4u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2DFF4u) goto L_08B2DFF4;
    return;
L_08B2DFF4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2E000u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E000u) goto L_08B2E000;
    return;
L_08B2E000:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
      if (branch_taken) {
          goto L_08B2E050;
      }
      goto L_08B2E010;
    }
L_08B2E010:
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
          goto L_08B2E0AC;
      }
      goto L_08B2E028;
    }
}
L_08B2E028:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2E034u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E034u) goto L_08B2E034;
    return;
L_08B2E034:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g4 = (hot_regs.g4 | 2048u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g31 = (0x08B2E048u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E048u) goto L_08B2E048;
    return;
L_08B2E048:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2E0AC;
      }
      goto L_08B2E050;
    }
L_08B2E050:
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
          goto L_08B2E0AC;
      }
      goto L_08B2E068;
    }
}
L_08B2E068:
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
          goto L_08B2E094;
      }
      goto L_08B2E084;
    }
}
L_08B2E084:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g5 = (g5 & 2048u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2E09C;
      }
      goto L_08B2E094;
    }
}
L_08B2E094:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08B2E09C;
}
L_08B2E09C:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2E0AC;
      }
      goto L_08B2E0A4;
    }
L_08B2E0A4:
    hot_regs.g31 = (0x08B2E0ACu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E0ACu) goto L_08B2E0AC;
    return;
L_08B2E0AC:
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
L_08B2E0C8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2E0F0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E0F0u) goto L_08B2E0F0;
    return;
L_08B2E0F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2E0FCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E0FCu) goto L_08B2E0FC;
    return;
L_08B2E0FC:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (0u | 0u);
    g5 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(468)));
    g5 = (g5 & 8192u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2E114;
      }
      goto L_08B2E110;
    }
}
L_08B2E110:
    hot_regs.g4 = (0u | 1u);
    goto L_08B2E114;
L_08B2E114:
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
          goto L_08B2E140;
      }
      goto L_08B2E138;
    }
}
L_08B2E138:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B2E188;
      }
      goto L_08B2E140;
    }
L_08B2E140:
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
          goto L_08B2E16C;
      }
      goto L_08B2E160;
    }
}
L_08B2E160:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2E188;
      }
      goto L_08B2E16C;
    }
}
L_08B2E16C:
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
          goto L_08B2E188;
      }
      goto L_08B2E184;
    }
}
L_08B2E184:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2E188;
L_08B2E188:
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
L_08B2E1A0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), hot_regs.g31);
    ctx.gpr[20] = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 7u);
    hot_regs.g31 = (0x08B2E204u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E204u) goto L_08B2E204;
    return;
L_08B2E204:
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g31 = (0x08B2E228u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E228u) goto L_08B2E228;
    return;
L_08B2E228:
{
    float f12 = hot_regs.f12;
    float f30 = ctx.fpr[30];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g30 = ctx.gpr[30];
    f30 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    g4 = (16544u << 16u);
    f12 = std::bit_cast<float>(g4);
    ctx.fpr[28] = f30 - f12;
    f30 = f30 + f12;
    g30 = (65532u << 16u);
    g30 = (g30 + static_cast<std::uint32_t>(-1));
    g23 = (2239u << 16u);
    g23 = (g23 + static_cast<std::uint32_t>(21784));
    ctx.gpr[22] = (g17 + static_cast<std::uint32_t>(-1));
    g4 = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g17)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[21] = (ctx.lo);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    g4 = (g17 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[23] = g23;
    ctx.gpr[30] = g30;
    hot_regs.f12 = f12;
    ctx.fpr[30] = f30;
    goto L_08B2E264;
}
}
L_08B2E264:
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-3344));
      if (branch_taken) {
          goto L_08B2E420;
      }
      goto L_08B2E270;
    }
L_08B2E270:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != g4;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2E424;
      }
      goto L_08B2E27C;
    }
}
L_08B2E27C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B2E298;
      }
      goto L_08B2E284;
    }
L_08B2E284:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
        goto L_08B2E2A0;
    }
    goto L_08B2E298;
}
L_08B2E298:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B2E2C0;
      }
      goto L_08B2E2A0;
    }
L_08B2E2A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + ctx.gpr[17]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 128u);
    if (g4 == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
        goto L_08B2E2BC;
    }
    goto L_08B2E2B4;
}
L_08B2E2B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B2E2C0;
      }
      goto L_08B2E2BC;
    }
L_08B2E2BC:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[21]);
    goto L_08B2E2C0;
L_08B2E2C0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2E418;
      }
      goto L_08B2E2C8;
    }
L_08B2E2C8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2E2D4u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E2D4u) goto L_08B2E2D4;
    return;
L_08B2E2D4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7980)));
    { const bool branch_taken = hot_regs.g2 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B2E418;
      }
      goto L_08B2E2E0;
    }
L_08B2E2E0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B2E418;
      }
      goto L_08B2E2F0;
    }
L_08B2E2F0:
    hot_regs.g31 = (0x08B2E2F8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E2F8u) goto L_08B2E2F8;
    return;
L_08B2E2F8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2E418;
      }
      goto L_08B2E300;
    }
L_08B2E300:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    g4 = (32768u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2E418;
      }
      goto L_08B2E310;
    }
}
L_08B2E310:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    g4 = (hot_regs.g5 & g4);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2E418;
      }
      goto L_08B2E320;
    }
}
L_08B2E320:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2236)));
    { const bool branch_taken = g4 != 0u;
    g4 = (1u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2E418;
      }
      goto L_08B2E32C;
    }
}
L_08B2E32C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    g4 = (hot_regs.g5 & g4);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2E418;
      }
      goto L_08B2E33C;
    }
}
L_08B2E33C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2E418;
      }
      goto L_08B2E348;
    }
L_08B2E348:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x08B2E360u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 563u, 0x08863028u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E360u) goto L_08B2E360;
    return;
L_08B2E360:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (2u << 16u);
      if (branch_taken) {
          goto L_08B2E418;
      }
      goto L_08B2E368;
    }
L_08B2E368:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    g4 = (hot_regs.g5 & g4);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2E418;
      }
      goto L_08B2E378;
    }
}
L_08B2E378:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2E418;
      }
      goto L_08B2E384;
    }
L_08B2E384:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x08B2E39Cu);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 788u, 0x08AAF8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E39Cu) goto L_08B2E39C;
    return;
L_08B2E39C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2E418;
      }
      goto L_08B2E3A4;
    }
L_08B2E3A4:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B2E418;
      }
      goto L_08B2E3BC;
    }
L_08B2E3BC:
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B2E418;
      }
      goto L_08B2E3CC;
    }
L_08B2E3CC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2E3D8u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E3D8u) goto L_08B2E3D8;
    return;
L_08B2E3D8:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7980), ctx.gpr[18]);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2E3ECu);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 334u, 0x08911320u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E3ECu) goto L_08B2E3EC;
    return;
L_08B2E3EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    g4 = (g4 & ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), g4);
    g4 = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2E418;
      }
      goto L_08B2E404;
    }
}
L_08B2E404:
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2E418u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 275u, 0x08861C90u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E418u) goto L_08B2E418;
    return;
L_08B2E418:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B2E264;
      }
      goto L_08B2E420;
    }
L_08B2E420:
    hot_regs.g4 = (2236u << 16u);
    goto L_08B2E424;
L_08B2E424:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(29704), ctx.gpr[18]);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08B2E438u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E438u) goto L_08B2E438;
    return;
L_08B2E438:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08B2E484:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2E4ACu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E4ACu) goto L_08B2E4AC;
    return;
L_08B2E4AC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(7));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u < hot_regs.g5 ? 1u : 0u);
    hot_regs.g31 = (0x08B2E4C4u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 531u, 0x08A87734u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E4C4u) goto L_08B2E4C4;
    return;
L_08B2E4C4:
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
L_08B2E4DC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2E504u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E504u) goto L_08B2E504;
    return;
L_08B2E504:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2E510u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E510u) goto L_08B2E510;
    return;
L_08B2E510:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (hot_regs.g2 | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(464)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(468)));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B2E540;
      }
      goto L_08B2E524;
    }
}
L_08B2E524:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g7 = (1024u << 16u);
    g5 = (g5 | hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(464), g5);
    g5 = (64u << 16u);
    g4 = (g4 | g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(468), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2E560;
      }
      goto L_08B2E540;
    }
}
L_08B2E540:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (64512u << 16u);
    g7 = (g7 + static_cast<std::uint32_t>(-1));
    g5 = (g5 & g7);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(464), g5);
    g5 = (65472u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(468), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    goto L_08B2E560;
}
L_08B2E560:
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
L_08B2E578:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2E5A4u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E5A4u) goto L_08B2E5A4;
    return;
L_08B2E5A4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2E5B0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E5B0u) goto L_08B2E5B0;
    return;
L_08B2E5B0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08B2E5BCu);
    hot_regs.g5 = (0u | 153u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E5BCu) goto L_08B2E5BC;
    return;
L_08B2E5BC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2E5CC;
      }
      goto L_08B2E5C4;
    }
L_08B2E5C4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B2E5D0;
      }
      goto L_08B2E5CC;
    }
L_08B2E5CC:
    hot_regs.g4 = (0u | 0u);
    goto L_08B2E5D0;
L_08B2E5D0:
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
          goto L_08B2E5FC;
      }
      goto L_08B2E5F4;
    }
}
L_08B2E5F4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B2E64C;
      }
      goto L_08B2E5FC;
    }
L_08B2E5FC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g7));
    g5 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    if (g5 == 0u) {
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
        goto L_08B2E62C;
    }
    goto L_08B2E618;
}
L_08B2E618:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 & g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2E64C;
      }
      goto L_08B2E62C;
    }
}
L_08B2E62C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 | g5);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2E64C;
      }
      goto L_08B2E648;
    }
}
L_08B2E648:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2E64C;
L_08B2E64C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B2E654;
      }
      goto L_08B2E654;
    }
L_08B2E654:
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
L_08B2E668:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2E690u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E690u) goto L_08B2E690;
    return;
L_08B2E690:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2E69Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E69Cu) goto L_08B2E69C;
    return;
L_08B2E69C:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(468)));
    g6 = (65535u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g5 = (g5 & g6);
    g4 = (g4 & 1u);
    g4 = (g4 << 16u);
    g4 = (g5 | g4);
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(468), g4);
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
L_08B2E6E4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2E70Cu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E70Cu) goto L_08B2E70C;
    return;
L_08B2E70C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2E718u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E718u) goto L_08B2E718;
    return;
L_08B2E718:
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
    g5 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(468)));
    g6 = (65534u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g5 = (g5 & g6);
    g4 = (g4 & 1u);
    g4 = (g4 << 17u);
    g4 = (g5 | g4);
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(468), g4);
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
L_08B2E760:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[21] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g5);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g6 = (0u | 4u);
    hot_regs.g31 = (0x08B2E7C8u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E7C8u) goto L_08B2E7C8;
    return;
L_08B2E7C8:
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g31 = (0x08B2E7ECu);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E7ECu) goto L_08B2E7EC;
    return;
L_08B2E7EC:
{
    float f12 = hot_regs.f12;
    float f30 = ctx.fpr[30];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g23 = ctx.gpr[23];
    f30 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[30] = (32768u << 16u);
    g4 = (16544u << 16u);
    f12 = std::bit_cast<float>(g4);
    ctx.fpr[28] = f30 - f12;
    f30 = f30 + f12;
    g23 = (65532u << 16u);
    g23 = (g23 + static_cast<std::uint32_t>(-1));
    g22 = (2239u << 16u);
    g22 = (g22 + static_cast<std::uint32_t>(21784));
    ctx.gpr[20] = (g17 + static_cast<std::uint32_t>(-1));
    g4 = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g17)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[19] = (ctx.lo);
    g4 = (g17 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[22] = g22;
    ctx.gpr[23] = g23;
    hot_regs.f12 = f12;
    ctx.fpr[30] = f30;
    goto L_08B2E828;
}
}
L_08B2E828:
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-3344));
      if (branch_taken) {
          goto L_08B2E964;
      }
      goto L_08B2E834;
    }
L_08B2E834:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != g4;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2E968;
      }
      goto L_08B2E840;
    }
}
L_08B2E840:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B2E85C;
      }
      goto L_08B2E848;
    }
L_08B2E848:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
        goto L_08B2E864;
    }
    goto L_08B2E85C;
}
L_08B2E85C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B2E884;
      }
      goto L_08B2E864;
    }
L_08B2E864:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + ctx.gpr[17]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 128u);
    if (g4 == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
        goto L_08B2E880;
    }
    goto L_08B2E878;
}
L_08B2E878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B2E884;
      }
      goto L_08B2E880;
    }
L_08B2E880:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[19]);
    goto L_08B2E884;
L_08B2E884:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2E95C;
      }
      goto L_08B2E88C;
    }
L_08B2E88C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2E95C;
      }
      goto L_08B2E89C;
    }
}
L_08B2E89C:
    hot_regs.g31 = (0x08B2E8A4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E8A4u) goto L_08B2E8A4;
    return;
L_08B2E8A4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2E95C;
      }
      goto L_08B2E8AC;
    }
L_08B2E8AC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    g4 = (g4 & ctx.gpr[30]);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2E95C;
      }
      goto L_08B2E8BC;
    }
}
L_08B2E8BC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2236)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2E95C;
      }
      goto L_08B2E8C8;
    }
L_08B2E8C8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x08B2E8E0u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 788u, 0x08AAF8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E8E0u) goto L_08B2E8E0;
    return;
L_08B2E8E0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2E95C;
      }
      goto L_08B2E8E8;
    }
L_08B2E8E8:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B2E95C;
      }
      goto L_08B2E900;
    }
L_08B2E900:
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B2E95C;
      }
      goto L_08B2E910;
    }
L_08B2E910:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2E91Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E91Cu) goto L_08B2E91C;
    return;
L_08B2E91C:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7980), ctx.gpr[18]);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2E930u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 334u, 0x08911320u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E930u) goto L_08B2E930;
    return;
L_08B2E930:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    g4 = (g4 & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), g4);
    g4 = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2E95C;
      }
      goto L_08B2E948;
    }
}
L_08B2E948:
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2E95Cu);
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 275u, 0x08861C90u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E95Cu) goto L_08B2E95C;
    return;
L_08B2E95C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B2E828;
      }
      goto L_08B2E964;
    }
L_08B2E964:
    hot_regs.g4 = (2236u << 16u);
    goto L_08B2E968;
L_08B2E968:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(29704), ctx.gpr[18]);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08B2E97Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E97Cu) goto L_08B2E97C;
    return;
L_08B2E97C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08B2E9C8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2E9F0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E9F0u) goto L_08B2E9F0;
    return;
L_08B2E9F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2E9FCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2E9FCu) goto L_08B2E9FC;
    return;
L_08B2E9FC:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(468)));
    g5 = (65504u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 << 21u);
    g4 = (g4 | g5);
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(468), g4);
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
L_08B2EA38:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2EA60u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2EA60u) goto L_08B2EA60;
    return;
L_08B2EA60:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2EA6Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2EA6Cu) goto L_08B2EA6C;
    return;
L_08B2EA6C:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (0u | 0u);
    g5 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(460)));
    g5 = (g5 & 8192u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2EA84;
      }
      goto L_08B2EA80;
    }
}
L_08B2EA80:
    hot_regs.g4 = (0u | 1u);
    goto L_08B2EA84;
L_08B2EA84:
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
          goto L_08B2EAB0;
      }
      goto L_08B2EAA8;
    }
}
L_08B2EAA8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B2EAF8;
      }
      goto L_08B2EAB0;
    }
L_08B2EAB0:
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
          goto L_08B2EADC;
      }
      goto L_08B2EAD0;
    }
}
L_08B2EAD0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2EAF8;
      }
      goto L_08B2EADC;
    }
}
L_08B2EADC:
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
          goto L_08B2EAF8;
      }
      goto L_08B2EAF4;
    }
}
L_08B2EAF4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2EAF8;
L_08B2EAF8:
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
L_08B2EB10:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2EB38u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2EB38u) goto L_08B2EB38;
    return;
L_08B2EB38:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2EB44u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2EB44u) goto L_08B2EB44;
    return;
L_08B2EB44:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08B2EB54u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2EB54u) goto L_08B2EB54;
    return;
L_08B2EB54:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    hot_regs.g5 = (4u << 16u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08B2EB74u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 550u, 0x0891ECB8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2EB74u) goto L_08B2EB74;
    return;
L_08B2EB74:
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
L_08B2EB8C:
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
    hot_regs.g31 = (0x08B2EBC0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2EBC0u) goto L_08B2EBC0;
    return;
L_08B2EBC0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2EBCCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2EBCCu) goto L_08B2EBCC;
    return;
L_08B2EBCC:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2EC2C;
      }
      goto L_08B2EBE0;
    }
L_08B2EBE0:
    hot_regs.g31 = (0x08B2EBE8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2EBE8u) goto L_08B2EBE8;
    return;
L_08B2EBE8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2EC2C;
      }
      goto L_08B2EBF0;
    }
L_08B2EBF0:
    hot_regs.g31 = (0x08B2EBF8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2EBF8u) goto L_08B2EBF8;
    return;
L_08B2EBF8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2EC2C;
      }
      goto L_08B2EC14;
    }
}
L_08B2EC14:
    hot_regs.g31 = (0x08B2EC1Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2EC1Cu) goto L_08B2EC1C;
    return;
L_08B2EC1C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2EC28u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2EC28u) goto L_08B2EC28;
    return;
L_08B2EC28:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g2);
    goto L_08B2EC2C;
L_08B2EC2C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08B2EC3Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2EC3Cu) goto L_08B2EC3C;
    return;
L_08B2EC3C:
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
L_08B2EC5C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2EC84u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2EC84u) goto L_08B2EC84;
    return;
L_08B2EC84:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2EC90u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2EC90u) goto L_08B2EC90;
    return;
L_08B2EC90:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    f12 = std::bit_cast<float>(hot_regs.g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(2084), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(f12));
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
L_08B2ECBC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2ECE4u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2ECE4u) goto L_08B2ECE4;
    return;
L_08B2ECE4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2ECF0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2ECF0u) goto L_08B2ECF0;
    return;
L_08B2ECF0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(1264), hot_regs.g4);
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
L_08B2ED10:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2ED38u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2ED38u) goto L_08B2ED38;
    return;
L_08B2ED38:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2ED44u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2ED44u) goto L_08B2ED44;
    return;
L_08B2ED44:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(1268), hot_regs.g4);
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
L_08B2ED64:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2ED8Cu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2ED8Cu) goto L_08B2ED8C;
    return;
L_08B2ED8C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2ED98u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2ED98u) goto L_08B2ED98;
    return;
L_08B2ED98:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(468)));
    g5 = (65408u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    g5 = (g5 & 1u);
    g5 = (g5 << 23u);
    g4 = (g4 | g5);
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(468), g4);
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
L_08B2EDD4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2EDF4u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2EDF4u) goto L_08B2EDF4;
    return;
L_08B2EDF4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2EE00u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2EE00u) goto L_08B2EE00;
    return;
L_08B2EE00:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(468)));
    hot_regs.g5 = (16u << 16u);
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(468), g4);
    g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B2EE24:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 3u);
    hot_regs.g31 = (0x08B2EE4Cu);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2EE4Cu) goto L_08B2EE4C;
    return;
L_08B2EE4C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2EE58u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2EE58u) goto L_08B2EE58;
    return;
L_08B2EE58:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g5);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2EEA8;
      }
      goto L_08B2EE6C;
    }
L_08B2EE6C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) >= 0;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B2EE94;
      }
      goto L_08B2EE78;
    }
L_08B2EE78:
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 1u);
    hot_regs.g31 = (0x08B2EE8Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2EE8Cu) goto L_08B2EE8C;
    return;
L_08B2EE8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2EEA8;
      }
      goto L_08B2EE94;
    }
L_08B2EE94:
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    hot_regs.g7 = (0u | 1u);
    hot_regs.g31 = (0x08B2EEA8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2EEA8u) goto L_08B2EEA8;
    return;
L_08B2EEA8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08B2EEC0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2EEE8u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2EEE8u) goto L_08B2EEE8;
    return;
L_08B2EEE8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2EEF4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2EEF4u) goto L_08B2EEF4;
    return;
L_08B2EEF4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    hot_regs.g6 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(468)));
    g7 = (65024u << 16u);
    g7 = (g7 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g5 == 0u;
    g4 = (g4 & g7);
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08B2EF24;
      }
      goto L_08B2EF10;
    }
}
L_08B2EF10:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 & 1u);
    g5 = (g5 << 25u);
    g4 = (g4 | g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(468), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2EF28;
      }
      goto L_08B2EF24;
    }
}
L_08B2EF24:
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(468), hot_regs.g4);
    goto L_08B2EF28;
L_08B2EF28:
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
L_08B2EF40:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[21] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g5);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g6 = (0u | 4u);
    hot_regs.g31 = (0x08B2EFA8u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2EFA8u) goto L_08B2EFA8;
    return;
L_08B2EFA8:
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g31 = (0x08B2EFCCu);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2EFCCu) goto L_08B2EFCC;
    return;
L_08B2EFCC:
{
    float f12 = hot_regs.f12;
    float f30 = ctx.fpr[30];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g23 = ctx.gpr[23];
    f30 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[30] = (32768u << 16u);
    g4 = (16544u << 16u);
    f12 = std::bit_cast<float>(g4);
    ctx.fpr[28] = f30 - f12;
    f30 = f30 + f12;
    g23 = (65532u << 16u);
    g23 = (g23 + static_cast<std::uint32_t>(-1));
    g22 = (2239u << 16u);
    g22 = (g22 + static_cast<std::uint32_t>(21784));
    ctx.gpr[20] = (g17 + static_cast<std::uint32_t>(-1));
    g4 = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g17)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[19] = (ctx.lo);
    g4 = (g17 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[22] = g22;
    ctx.gpr[23] = g23;
    hot_regs.f12 = f12;
    ctx.fpr[30] = f30;
    goto L_08B2F008;
}
}
L_08B2F008:
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-3344));
      if (branch_taken) {
          goto L_08B2F154;
      }
      goto L_08B2F014;
    }
L_08B2F014:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != g4;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2F158;
      }
      goto L_08B2F020;
    }
}
L_08B2F020:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B2F03C;
      }
      goto L_08B2F028;
    }
L_08B2F028:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
        goto L_08B2F044;
    }
    goto L_08B2F03C;
}
L_08B2F03C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B2F064;
      }
      goto L_08B2F044;
    }
L_08B2F044:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + ctx.gpr[17]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 128u);
    if (g4 == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
        goto L_08B2F060;
    }
    goto L_08B2F058;
}
L_08B2F058:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B2F064;
      }
      goto L_08B2F060;
    }
L_08B2F060:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[19]);
    goto L_08B2F064;
L_08B2F064:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2F14C;
      }
      goto L_08B2F06C;
    }
L_08B2F06C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2F14C;
      }
      goto L_08B2F07C;
    }
}
L_08B2F07C:
    hot_regs.g31 = (0x08B2F084u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F084u) goto L_08B2F084;
    return;
L_08B2F084:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2F14C;
      }
      goto L_08B2F08C;
    }
L_08B2F08C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    g4 = (g4 & ctx.gpr[30]);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2F14C;
      }
      goto L_08B2F09C;
    }
}
L_08B2F09C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2236)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2F14C;
      }
      goto L_08B2F0A8;
    }
L_08B2F0A8:
    hot_regs.g31 = (0x08B2F0B0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F0B0u) goto L_08B2F0B0;
    return;
L_08B2F0B0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2F14C;
      }
      goto L_08B2F0B8;
    }
L_08B2F0B8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x08B2F0D0u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 788u, 0x08AAF8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F0D0u) goto L_08B2F0D0;
    return;
L_08B2F0D0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2F14C;
      }
      goto L_08B2F0D8;
    }
L_08B2F0D8:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B2F14C;
      }
      goto L_08B2F0F0;
    }
L_08B2F0F0:
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B2F14C;
      }
      goto L_08B2F100;
    }
L_08B2F100:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2F10Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F10Cu) goto L_08B2F10C;
    return;
L_08B2F10C:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7980), ctx.gpr[18]);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2F120u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 334u, 0x08911320u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F120u) goto L_08B2F120;
    return;
L_08B2F120:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    g4 = (g4 & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), g4);
    g4 = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2F14C;
      }
      goto L_08B2F138;
    }
}
L_08B2F138:
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2F14Cu);
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 275u, 0x08861C90u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F14Cu) goto L_08B2F14C;
    return;
L_08B2F14C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B2F008;
      }
      goto L_08B2F154;
    }
L_08B2F154:
    hot_regs.g4 = (2236u << 16u);
    goto L_08B2F158;
L_08B2F158:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(29704), ctx.gpr[18]);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08B2F16Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F16Cu) goto L_08B2F16C;
    return;
L_08B2F16C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08B2F1B8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2F1E0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F1E0u) goto L_08B2F1E0;
    return;
L_08B2F1E0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2F1ECu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F1ECu) goto L_08B2F1EC;
    return;
L_08B2F1EC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(2208), hot_regs.g4);
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
L_08B2F20C:
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
    hot_regs.g31 = (0x08B2F23Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F23Cu) goto L_08B2F23C;
    return;
L_08B2F23C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2F248u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F248u) goto L_08B2F248;
    return;
L_08B2F248:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(2208)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B2F260u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F260u) goto L_08B2F260;
    return;
L_08B2F260:
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
L_08B2F27C:
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
    hot_regs.g31 = (0x08B2F2B4u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F2B4u) goto L_08B2F2B4;
    return;
L_08B2F2B4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2F2C0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F2C0u) goto L_08B2F2C0;
    return;
L_08B2F2C0:
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
          goto L_08B2F2FC;
      }
      goto L_08B2F2E8;
    }
}
}
L_08B2F2E8:
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
        goto L_08B2F310;
    }
    goto L_08B2F2FC;
L_08B2F2FC:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08B2F308u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F308u) goto L_08B2F308;
    return;
L_08B2F308:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08B2F310;
L_08B2F310:
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(527));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08B2F32Cu);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 211u, 0x08B312F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F32Cu) goto L_08B2F32C;
    return;
L_08B2F32C:
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
L_08B2F350:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), hot_regs.g31);
    ctx.gpr[22] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g5);
    hot_regs.g6 = (0u | 8u);
    hot_regs.g31 = (0x08B2F3B4u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F3B4u) goto L_08B2F3B4;
    return;
L_08B2F3B4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g30 = ctx.gpr[30];
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(12)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(16)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(20)));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    g17 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (0u | 0u);
    g30 = (65532u << 16u);
    g30 = (g30 + static_cast<std::uint32_t>(-1));
    g23 = (2239u << 16u);
    g23 = (g23 + static_cast<std::uint32_t>(21784));
    ctx.gpr[21] = (g17 + static_cast<std::uint32_t>(-1));
    g4 = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g17)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[18] = (ctx.lo);
    g4 = (g17 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    ctx.gpr[23] = g23;
    ctx.gpr[30] = g30;
    goto L_08B2F3FC;
}
L_08B2F3FC:
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-3344));
      if (branch_taken) {
          goto L_08B2F534;
      }
      goto L_08B2F408;
    }
L_08B2F408:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2F534;
      }
      goto L_08B2F410;
    }
L_08B2F410:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B2F42C;
      }
      goto L_08B2F418;
    }
L_08B2F418:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
        goto L_08B2F434;
    }
    goto L_08B2F42C;
}
L_08B2F42C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B2F454;
      }
      goto L_08B2F434;
    }
L_08B2F434:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + ctx.gpr[17]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 128u);
    if (g4 == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
        goto L_08B2F450;
    }
    goto L_08B2F448;
}
L_08B2F448:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B2F454;
      }
      goto L_08B2F450;
    }
L_08B2F450:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[18]);
    goto L_08B2F454;
L_08B2F454:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2F52C;
      }
      goto L_08B2F45C;
    }
L_08B2F45C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B2F52C;
      }
      goto L_08B2F46C;
    }
L_08B2F46C:
    hot_regs.g31 = (0x08B2F474u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F474u) goto L_08B2F474;
    return;
L_08B2F474:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2F52C;
      }
      goto L_08B2F47C;
    }
L_08B2F47C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    g4 = (32768u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2F52C;
      }
      goto L_08B2F48C;
    }
}
L_08B2F48C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    g4 = (hot_regs.g5 & g4);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2F52C;
      }
      goto L_08B2F49C;
    }
}
L_08B2F49C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B2F4B8;
      }
      goto L_08B2F4AC;
    }
L_08B2F4AC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B2F52C;
      }
      goto L_08B2F4B8;
    }
L_08B2F4B8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g31 = (0x08B2F4D8u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 799u, 0x08AAF984u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F4D8u) goto L_08B2F4D8;
    return;
L_08B2F4D8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2F52C;
      }
      goto L_08B2F4E0;
    }
L_08B2F4E0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7980), ctx.gpr[17]);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2F4F0u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 334u, 0x08911320u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F4F0u) goto L_08B2F4F0;
    return;
L_08B2F4F0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    g4 = (g4 & ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), g4);
    g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[20] = (0u | 1u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2F52C;
      }
      goto L_08B2F508;
    }
}
L_08B2F508:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2F514u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F514u) goto L_08B2F514;
    return;
L_08B2F514:
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2F528u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 275u, 0x08861C90u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F528u) goto L_08B2F528;
    return;
L_08B2F528:
    ctx.gpr[20] = (0u | 1u);
    goto L_08B2F52C;
L_08B2F52C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B2F3FC;
      }
      goto L_08B2F534;
    }
L_08B2F534:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    hot_regs.g4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08B2F548;
      }
      goto L_08B2F53C;
    }
L_08B2F53C:
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(29704), hot_regs.g5);
      if (branch_taken) {
          goto L_08B2F55C;
      }
      goto L_08B2F548;
    }
L_08B2F548:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2F554u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F554u) goto L_08B2F554;
    return;
L_08B2F554:
    hot_regs.g4 = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(29704), hot_regs.g2);
    goto L_08B2F55C;
L_08B2F55C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08B2F56Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F56Cu) goto L_08B2F56C;
    return;
L_08B2F56C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08B2F5B8:
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
    hot_regs.g31 = (0x08B2F5E8u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F5E8u) goto L_08B2F5E8;
    return;
L_08B2F5E8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2F5F4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F5F4u) goto L_08B2F5F4;
    return;
L_08B2F5F4:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), hot_regs.g5);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2F640;
      }
      goto L_08B2F608;
    }
L_08B2F608:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2F640;
      }
      goto L_08B2F614;
    }
}
L_08B2F614:
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
          goto L_08B2F640;
      }
      goto L_08B2F630;
    }
}
L_08B2F630:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08B2F63Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F63Cu) goto L_08B2F63C;
    return;
L_08B2F63C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), hot_regs.g2);
    goto L_08B2F640;
L_08B2F640:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B2F650u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F650u) goto L_08B2F650;
    return;
L_08B2F650:
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
L_08B2F66C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2F694u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F694u) goto L_08B2F694;
    return;
L_08B2F694:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2F6A0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F6A0u) goto L_08B2F6A0;
    return;
L_08B2F6A0:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08B2F6ACu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F6ACu) goto L_08B2F6AC;
    return;
L_08B2F6AC:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2F6E8;
      }
      goto L_08B2F6B4;
    }
L_08B2F6B4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2F6C0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F6C0u) goto L_08B2F6C0;
    return;
L_08B2F6C0:
    hot_regs.g31 = (0x08B2F6C8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 976u, 0x0890BDFCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F6C8u) goto L_08B2F6C8;
    return;
L_08B2F6C8:
    hot_regs.g31 = (0x08B2F6D0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 195u, 0x0886D420u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F6D0u) goto L_08B2F6D0;
    return;
L_08B2F6D0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(776), 0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08B2F6E8u);
    hot_regs.g7 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F6E8u) goto L_08B2F6E8;
    return;
L_08B2F6E8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g31 = (0x08B2F704u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 148u, 0x08A40C70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F704u) goto L_08B2F704;
    return;
L_08B2F704:
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
L_08B2F71C:
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
    hot_regs.g31 = (0x08B2F74Cu);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F74Cu) goto L_08B2F74C;
    return;
L_08B2F74C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2F758u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F758u) goto L_08B2F758;
    return;
L_08B2F758:
{
    float f13 = hot_regs.f13;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(1256)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    f13 = std::bit_cast<float>(hot_regs.g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    ctx.set_fpu_condition((hot_regs.f12 <= f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08B2F780;
      }
      goto L_08B2F778;
    }
}
L_08B2F778:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B2F784;
      }
      goto L_08B2F780;
    }
L_08B2F780:
    hot_regs.g4 = (0u | 0u);
    goto L_08B2F784;
L_08B2F784:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
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
          goto L_08B2F7A8;
      }
      goto L_08B2F7A0;
    }
}
L_08B2F7A0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B2F7F0;
      }
      goto L_08B2F7A8;
    }
L_08B2F7A8:
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
          goto L_08B2F7D4;
      }
      goto L_08B2F7C8;
    }
}
L_08B2F7C8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2F7F0;
      }
      goto L_08B2F7D4;
    }
}
L_08B2F7D4:
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
          goto L_08B2F7F0;
      }
      goto L_08B2F7EC;
    }
}
L_08B2F7EC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2F7F0;
L_08B2F7F0:
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
L_08B2F80C:
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
    hot_regs.g31 = (0x08B2F83Cu);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F83Cu) goto L_08B2F83C;
    return;
L_08B2F83C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2F848u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F848u) goto L_08B2F848;
    return;
L_08B2F848:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(1360)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B2F860;
      }
      goto L_08B2F858;
    }
L_08B2F858:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B2F864;
      }
      goto L_08B2F860;
    }
L_08B2F860:
    hot_regs.g4 = (0u | 0u);
    goto L_08B2F864;
L_08B2F864:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
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
          goto L_08B2F888;
      }
      goto L_08B2F880;
    }
}
L_08B2F880:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B2F8D0;
      }
      goto L_08B2F888;
    }
L_08B2F888:
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
          goto L_08B2F8B4;
      }
      goto L_08B2F8A8;
    }
}
L_08B2F8A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2F8D0;
      }
      goto L_08B2F8B4;
    }
}
L_08B2F8B4:
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
          goto L_08B2F8D0;
      }
      goto L_08B2F8CC;
    }
}
L_08B2F8CC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2F8D0;
L_08B2F8D0:
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
L_08B2F8EC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B2F91Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F91Cu) goto L_08B2F91C;
    return;
L_08B2F91C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2F928u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F928u) goto L_08B2F928;
    return;
L_08B2F928:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(16));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    { const float fs = hot_regs.f13; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f13 = hot_regs.f14 + hot_regs.f13;
    hot_regs.f13 = std::sqrt(hot_regs.f13);
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B2F960u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F960u) goto L_08B2F960;
    return;
L_08B2F960:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B2F97C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B2F9ACu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F9ACu) goto L_08B2F9AC;
    return;
L_08B2F9AC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2F9B8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F9B8u) goto L_08B2F9B8;
    return;
L_08B2F9B8:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(16));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f13; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f14;
    hot_regs.f12 = std::sqrt(hot_regs.f12);
    hot_regs.f12 = hot_regs.f13 / hot_regs.f12;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B2F9F0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2F9F0u) goto L_08B2F9F0;
    return;
L_08B2F9F0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B2FA0C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2FA34u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2FA34u) goto L_08B2FA34;
    return;
L_08B2FA34:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2FA40u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2FA40u) goto L_08B2FA40;
    return;
L_08B2FA40:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2FA6C;
      }
      goto L_08B2FA4C;
    }
L_08B2FA4C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(472)));
    g6 = (0u + static_cast<std::uint32_t>(-9));
    g5 = (g5 & g6);
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    g6 = (g6 & 1u);
    g6 = (g6 << 3u);
    g5 = (g5 | g6);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(472), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08B2FA6C;
}
L_08B2FA6C:
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
L_08B2FA84:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2FAACu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2FAACu) goto L_08B2FAAC;
    return;
L_08B2FAAC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2FAB8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2FAB8u) goto L_08B2FAB8;
    return;
L_08B2FAB8:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(2236)));
    g5 = (0u | 17u);
    { const bool branch_taken = hot_regs.g4 == g5;
    g5 = (0u | 18u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2FAD0;
      }
      goto L_08B2FAC8;
    }
}
L_08B2FAC8:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B2FAD8;
      }
      goto L_08B2FAD0;
    }
L_08B2FAD0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B2FADC;
      }
      goto L_08B2FAD8;
    }
L_08B2FAD8:
    hot_regs.g4 = (0u | 0u);
    goto L_08B2FADC;
L_08B2FADC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
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
          goto L_08B2FB00;
      }
      goto L_08B2FAF8;
    }
}
L_08B2FAF8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B2FB48;
      }
      goto L_08B2FB00;
    }
L_08B2FB00:
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
          goto L_08B2FB2C;
      }
      goto L_08B2FB20;
    }
}
L_08B2FB20:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2FB48;
      }
      goto L_08B2FB2C;
    }
}
L_08B2FB2C:
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
          goto L_08B2FB48;
      }
      goto L_08B2FB44;
    }
}
L_08B2FB44:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2FB48;
L_08B2FB48:
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
L_08B2FB60:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08B2FB98u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2FB98u) goto L_08B2FB98;
    return;
L_08B2FB98:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2FBA4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2FBA4u) goto L_08B2FBA4;
    return;
L_08B2FBA4:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B2FBD0u);
    hot_regs.g6 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2FBD0u) goto L_08B2FBD0;
    return;
L_08B2FBD0:
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
L_08B2FBF0:
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
    hot_regs.g31 = (0x08B2FC20u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2FC20u) goto L_08B2FC20;
    return;
L_08B2FC20:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2FC2Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2FC2Cu) goto L_08B2FC2C;
    return;
L_08B2FC2C:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(86))))));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B2FC50;
      }
      goto L_08B2FC40;
    }
}
L_08B2FC40:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g5 << 2u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08B2FC50;
}
L_08B2FC50:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(71)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B2FC68u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2FC68u) goto L_08B2FC68;
    return;
L_08B2FC68:
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
L_08B2FC84:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2FCACu);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2FCACu) goto L_08B2FCAC;
    return;
L_08B2FCAC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2FCB8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2FCB8u) goto L_08B2FCB8;
    return;
L_08B2FCB8:
{
    std::uint32_t g7 = hot_regs.g7;
    hot_regs.g6 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(86))))));
    g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g7 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    { const bool branch_taken = g7 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08B2FCE0;
      }
      goto L_08B2FCD0;
    }
}
L_08B2FCD0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g5 << 2u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08B2FCE0;
}
L_08B2FCE0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08B2FCECu);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1276));
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 632u, 0x08903654u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2FCECu) goto L_08B2FCEC;
    return;
L_08B2FCEC:
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
L_08B2FD04:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2FD30u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2FD30u) goto L_08B2FD30;
    return;
L_08B2FD30:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2FD3Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2FD3Cu) goto L_08B2FD3C;
    return;
L_08B2FD3C:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(320));
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
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(2244)));
    hot_regs.g6 = (0u | 2u);
    if (hot_regs.g4 == hot_regs.g6) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(2244)));
        goto L_08B2FD8C;
    }
    goto L_08B2FD64;
L_08B2FD64:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(2244)));
    hot_regs.g6 = (0u | 6u);
    if (g4 == hot_regs.g6) {
    g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(2244)));
    hot_regs.g4 = g4;
        goto L_08B2FD8C;
    }
    goto L_08B2FD74;
}
L_08B2FD74:
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B2FDF0;
      }
      goto L_08B2FD88;
    }
L_08B2FD88:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(2244)));
    goto L_08B2FD8C;
L_08B2FD8C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2FDF0;
      }
      goto L_08B2FD98;
    }
}
L_08B2FD98:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(2228)));
    hot_regs.g7 = (0u | 43u);
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B2FDB8;
      }
      goto L_08B2FDA8;
    }
L_08B2FDA8:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(2228)));
    hot_regs.g7 = (0u | 44u);
    { const bool branch_taken = hot_regs.g6 != hot_regs.g7;
    hot_regs.g4 = (hot_regs.g4 & 255u);
      if (branch_taken) {
          goto L_08B2FDC0;
      }
      goto L_08B2FDB8;
    }
L_08B2FDB8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08B2FDC0;
}
L_08B2FDC0:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2FDF0;
      }
      goto L_08B2FDC8;
    }
L_08B2FDC8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(2228)));
    hot_regs.g6 = (0u | 45u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08B2FDF0;
      }
      goto L_08B2FDD8;
    }
L_08B2FDD8:
    hot_regs.g31 = (0x08B2FDE0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2FDE0u) goto L_08B2FDE0;
    return;
L_08B2FDE0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2FDF0;
      }
      goto L_08B2FDE8;
    }
L_08B2FDE8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B2FDF4;
      }
      goto L_08B2FDF0;
    }
L_08B2FDF0:
    hot_regs.g4 = (0u | 0u);
    goto L_08B2FDF4;
L_08B2FDF4:
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
          goto L_08B2FE20;
      }
      goto L_08B2FE18;
    }
}
L_08B2FE18:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B2FE70;
      }
      goto L_08B2FE20;
    }
L_08B2FE20:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g7));
    g5 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    if (g5 == 0u) {
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
        goto L_08B2FE50;
    }
    goto L_08B2FE3C;
}
L_08B2FE3C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 & g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2FE70;
      }
      goto L_08B2FE50;
    }
}
L_08B2FE50:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 | g5);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2FE70;
      }
      goto L_08B2FE6C;
    }
}
L_08B2FE6C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2FE70;
L_08B2FE70:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B2FE78;
      }
      goto L_08B2FE78;
    }
L_08B2FE78:
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
L_08B2FE8C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08B2FEB4u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 291u, 0x089D1AECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2FEB4u) goto L_08B2FEB4;
    return;
L_08B2FEB4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08B2FED4u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2FED4u) goto L_08B2FED4;
    return;
L_08B2FED4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2FEE0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2FEE0u) goto L_08B2FEE0;
    return;
L_08B2FEE0:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08B2FEF0u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 544u, 0x08B26D30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2FEF0u) goto L_08B2FEF0;
    return;
L_08B2FEF0:
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
    hot_regs.g31 = (0x08B2FF38u);
    hot_regs.f15 = ctx.fpr[16] - hot_regs.f15;
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2FF38u) goto L_08B2FF38;
    return;
L_08B2FF38:
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
    hot_regs.g31 = (0x08B2FFA0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 584u, 0x088631C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2FFA0u) goto L_08B2FFA0;
    return;
L_08B2FFA0:
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
    hot_regs.g31 = (0x08B2FFD4u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 584u, 0x088631C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2FFD4u) goto L_08B2FFD4;
    return;
L_08B2FFD4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.gpr[8] = (g29 + static_cast<std::uint32_t>(72));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (g29 | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    ctx.pc = 0x08B30000u; return;}

}

void recomp_unit_0202(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0202_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_202(Runtime &runtime) {
    runtime.register_generated_unit(202u, 0x08B2C000u, 16384u, &recomp_unit_0202, &recomp_unit_0202_entry);
    runtime.register_function(0x08B2C000u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C014u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C01Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C030u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C060u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C06Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C080u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C08Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C094u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C0A4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C0A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C0BCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C0C4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C0E4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C0F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C108u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C10Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C128u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C160u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C16Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C180u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C1A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C1C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C1F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C1FCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C20Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C21Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C220u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C244u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C24Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C26Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C278u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C290u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C294u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C2ACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C2E4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C2F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C320u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C334u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C354u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C38Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C398u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C3E8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C410u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C430u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C458u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C464u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C480u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C494u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C4B8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C4C0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C4E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C4ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C504u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C508u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C520u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C548u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C554u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C564u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C574u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C58Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C594u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C5C0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C5D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C600u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C60Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C61Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C62Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C63Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C654u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C684u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C690u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C6B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C6CCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C6F4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C700u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C710u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C72Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C734u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C740u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C750u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C768u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C788u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C794u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C79Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C7B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C7D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C7E4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C7F4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C848u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C860u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C888u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C894u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C89Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C8A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C8B8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C8D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C8E8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C900u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C928u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C934u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C948u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C94Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C970u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C978u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C998u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C9A4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C9BCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C9C0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C9D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA0Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA18u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA4Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA54u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA7Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA84u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CAA0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CAB4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CAD0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CAD4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CADCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CAF4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB1Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB28u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB48u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB54u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB60u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB78u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CBACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CBB8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CBC8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CBD8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CBE4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CBECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CBF0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CBF8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC00u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC10u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC14u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC38u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC40u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC60u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC6Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC84u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC88u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CCA8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CCD8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CCE4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CCF4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD04u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD10u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD18u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD1Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD40u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD48u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD68u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD74u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD8Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD90u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CDACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CDD4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CDE0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CDF0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE08u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE0Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE30u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE38u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE64u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE7Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE80u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE98u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CEC0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CECCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CEDCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CEECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CEFCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CF14u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CF3Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CF48u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CF58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CF60u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CF68u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CF70u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CF88u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CFB0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CFBCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CFCCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CFDCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CFE4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CFFCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D01Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D028u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D030u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D044u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D078u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D084u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D094u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D0A4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D0ACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D0B8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D0C0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D0D0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D0D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D0E4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D0F4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D0F8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D110u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D118u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D138u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D144u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D15Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D160u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D180u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D1D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D1E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D234u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D240u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D248u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D250u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D264u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D26Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D280u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D288u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D28Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D294u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D2A4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D2B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D2CCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D2D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D2D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D2E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D2E4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D304u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D30Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D32Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D338u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D350u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D354u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D394u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D3BCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D3C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D3D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D3E4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D3F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D408u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D428u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D434u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D440u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D444u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D458u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D49Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D4A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D4B8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D4C4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D4D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D520u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D534u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D54Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D558u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D564u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D574u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D580u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D5A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D5ACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D5B4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D5CCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D5D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D5E4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D5F8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D604u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D61Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D624u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D63Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D668u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D6A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D6B4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D6C4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D6D0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D6DCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D728u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D73Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D754u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D764u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D770u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D778u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D78Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D798u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D7A4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D7B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D7C0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D7C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D7D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D7E8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D7F4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D80Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D814u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D82Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D854u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D87Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D888u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D898u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D8A4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D8B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D8C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D8F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D8FCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D90Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D918u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D924u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D93Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D964u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D970u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D980u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D98Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D998u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D9B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D9DCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D9E8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D9F8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA00u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA0Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA14u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA1Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA30u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA34u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA60u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA80u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA8Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DAA4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DAA8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DAC4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DAECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DAF8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB04u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB08u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB2Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB34u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB54u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB60u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB78u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB7Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB94u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DBBCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DBC8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DBDCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DBE0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC04u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC0Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC2Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC38u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC50u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC54u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC6Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC94u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCA0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCB8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCDCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCE4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD08u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD20u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD40u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD4Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD68u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD70u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD7Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD84u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD94u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD9Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDA4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDB8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDC4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDD0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDF4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDFCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE14u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE1Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE30u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE3Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE44u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE54u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE68u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE7Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE9Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEA8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEB8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEC0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DED4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEE8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF10u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF1Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF34u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF38u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF5Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF64u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF84u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF90u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DFA8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DFACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DFC4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DFF4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E000u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E010u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E028u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E034u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E048u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E050u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E068u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E084u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E094u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E09Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E0A4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E0ACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E0C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E0F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E0FCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E110u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E114u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E138u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E140u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E160u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E16Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E184u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E188u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E1A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E204u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E228u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E264u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E270u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E27Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E284u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E298u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E2A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E2B4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E2BCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E2C0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E2C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E2D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E2E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E2F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E2F8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E300u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E310u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E320u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E32Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E33Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E348u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E360u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E368u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E378u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E384u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E39Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E3A4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E3BCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E3CCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E3D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E3ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E404u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E418u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E420u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E424u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E438u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E484u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E4ACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E4C4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E4DCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E504u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E510u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E524u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E540u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E560u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E578u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5A4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5BCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5C4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5CCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5D0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5F4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5FCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E618u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E62Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E648u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E64Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E654u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E668u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E690u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E69Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E6E4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E70Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E718u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E760u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E7C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E7ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E828u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E834u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E840u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E848u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E85Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E864u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E878u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E880u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E884u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E88Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E89Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E8A4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E8ACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E8BCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E8C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E8E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E8E8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E900u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E910u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E91Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E930u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E948u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E95Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E964u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E968u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E97Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E9C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E9F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E9FCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EA38u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EA60u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EA6Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EA80u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EA84u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EAA8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EAB0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EAD0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EADCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EAF4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EAF8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EB10u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EB38u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EB44u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EB54u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EB74u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EB8Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EBC0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EBCCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EBE0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EBE8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EBF0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EBF8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC14u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC1Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC28u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC2Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC3Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC5Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC84u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC90u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ECBCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ECE4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ECF0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED10u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED38u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED44u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED64u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED8Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED98u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EDD4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EDF4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE00u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE24u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE4Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE6Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE78u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE8Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE94u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EEA8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EEC0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EEE8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EEF4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EF10u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EF24u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EF28u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EF40u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EFA8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EFCCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F008u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F014u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F020u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F028u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F03Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F044u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F058u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F060u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F064u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F06Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F07Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F084u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F08Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F09Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F0A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F0B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F0B8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F0D0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F0D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F0F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F100u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F10Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F120u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F138u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F14Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F154u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F158u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F16Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F1B8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F1E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F1ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F20Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F23Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F248u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F260u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F27Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F2B4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F2C0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F2E8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F2FCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F308u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F310u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F32Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F350u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F3B4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F3FCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F408u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F410u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F418u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F42Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F434u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F448u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F450u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F454u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F45Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F46Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F474u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F47Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F48Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F49Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F4ACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F4B8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F4D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F4E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F4F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F508u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F514u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F528u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F52Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F534u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F53Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F548u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F554u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F55Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F56Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F5B8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F5E8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F5F4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F608u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F614u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F630u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F63Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F640u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F650u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F66Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F694u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F6A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F6ACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F6B4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F6C0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F6C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F6D0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F6E8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F704u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F71Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F74Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F758u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F778u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F780u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F784u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F7A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F7A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F7C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F7D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F7ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F7F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F80Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F83Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F848u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F858u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F860u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F864u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F880u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F888u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F8A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F8B4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F8CCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F8D0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F8ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F91Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F928u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F960u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F97Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F9ACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F9B8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F9F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FA0Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FA34u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FA40u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FA4Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FA6Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FA84u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FAACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FAB8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FAC8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FAD0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FAD8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FADCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FAF8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FB00u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FB20u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FB2Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FB44u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FB48u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FB60u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FB98u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FBA4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FBD0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FBF0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FC20u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FC2Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FC40u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FC50u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FC68u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FC84u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FCACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FCB8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FCD0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FCE0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FCECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FD04u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FD30u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FD3Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FD64u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FD74u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FD88u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FD8Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FD98u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FDA8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FDB8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FDC0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FDC8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FDD8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FDE0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FDE8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FDF0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FDF4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FE18u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FE20u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FE3Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FE50u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FE6Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FE70u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FE78u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FE8Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FEB4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FED4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FEE0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FEF0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FF38u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FFA0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FFD4u, &recomp_unit_0202, "recomp_unit_0202");
}
} // namespace psprecomp
