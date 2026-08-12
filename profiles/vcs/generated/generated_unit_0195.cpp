#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0195[4089] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 8, 0, 9, 0, 10, 0,
    11, 12, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 15, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 26, 0, 0, 27, 0, 28, 0, 29,
    0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 36,
    0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 42, 0, 0, 43, 0, 0, 44, 0, 0, 0, 45, 0, 0,
    0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 51, 52, 0, 0, 53,
    0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0,
    0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 0, 75, 0, 76, 0, 0, 0, 0,
    0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0,
    0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102,
    0, 103, 0, 104, 0, 105, 0, 0, 106, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111,
    0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 115, 0, 0, 116, 0, 117, 0, 0, 118, 0, 119, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 121, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0, 128, 0, 0, 129, 0,
    130, 0, 131, 0, 132, 0, 133, 0, 0, 134, 0, 135, 0, 136, 0, 0, 137, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 141, 0, 142,
    0, 0, 143, 0, 144, 0, 0, 145, 0, 146, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 157,
    0, 0, 0, 0, 158, 0, 159, 160, 0, 0, 161, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 165, 166, 0, 167, 0, 0, 0, 168, 0, 169, 0,
    170, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0,
    180, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 184, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 188,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0, 0, 0, 0, 198, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0,
    202, 0, 0, 203, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 214, 0, 215, 0, 0, 216, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 220,
    0, 221, 0, 0, 222, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0,
    0, 227, 0, 0, 228, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0,
    237, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 243,
    0, 244, 0, 245, 0, 0, 0, 246, 0, 247, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 253, 0, 0, 0, 0,
    0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 259, 0, 0, 260,
    261, 0, 262, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 266, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0,
    0, 0, 0, 271, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0,
    0, 0, 0, 0, 0, 279, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 286, 0,
    0, 287, 0, 288, 0, 289, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0,
    0, 294, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 299, 0, 300, 0, 301, 0, 302, 0, 0,
    303, 0, 304, 0, 0, 305, 0, 0, 0, 306, 0, 0, 307, 0, 0, 308, 0, 0, 309, 0, 310, 0, 0, 311, 0, 312, 0, 0, 313, 0, 0, 0,
    0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 319, 0, 320, 0, 321, 0, 0, 0, 322,
    0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 326, 0, 327, 0, 328, 329, 0, 330, 0, 0, 331, 332, 0, 0, 0,
    0, 333, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 343, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0,
    0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353,
    0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 363, 0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 0, 369, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0,
    372, 0, 373, 374, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 382, 0,
    383, 384, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 387, 0, 0, 0, 0, 388, 0, 389, 0, 0, 0, 0, 390, 0, 391, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 395, 0, 0, 0, 0, 396, 0, 397,
    398, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 402, 0, 403, 404, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0,
    406, 0, 407, 0, 0, 0, 0, 408, 0, 409, 410, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 414, 0, 415, 416,
    0, 417, 0, 418, 0, 0, 0, 0, 419, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 423,
    0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427,
    428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 431, 0, 432, 433, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0,
    0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 438, 0, 439, 0, 0, 440, 0, 0, 441, 0, 442,
    0, 443, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    449, 0, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0,
    458, 0, 459, 0, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 465,
    0, 466, 0, 0, 0, 467, 0, 468, 0, 0, 0, 469, 0, 470, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 473, 0, 474, 0, 0, 0, 0, 0,
    475, 0, 476, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0,
    482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 485, 0,
    0, 0, 486, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 490, 0, 491, 0, 0, 0, 0, 492, 0, 493, 0, 494, 0, 0, 0, 495, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0,
    0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 502, 0, 503, 504, 0, 0, 0,
    0, 505, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 510, 0, 511, 512, 0, 0, 0,
    0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 514, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 521, 0, 522, 0, 0, 0, 0, 0, 523,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0,
    0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0, 535, 0, 0, 0, 0, 536, 0, 537, 0,
    538, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 541, 0, 542, 0, 543, 0, 0, 0, 0, 544, 0, 545, 0, 0, 0, 0, 546, 0, 547, 0,
    548, 0, 0, 0, 0, 549, 0, 550, 0, 0, 0, 0, 551, 0, 552, 0, 553, 0, 0, 0, 0, 554, 0, 555, 0, 0, 0, 0, 556, 0, 557, 0,
    558, 0, 0, 0, 0, 559, 0, 560, 0, 0, 0, 0, 561, 0, 562, 0, 563, 0, 0, 0, 0, 564, 0, 565, 0, 0, 0, 0, 566, 0, 567, 0,
    568, 0, 0, 0, 0, 569, 0, 570, 0, 0, 0, 0, 571, 0, 572, 0, 573, 0, 0, 0, 0, 574, 0, 575, 0, 0, 0, 0, 576, 0, 577, 0,
    578, 0, 0, 0, 0, 579, 0, 580, 0, 0, 0, 0, 581, 0, 582, 0, 583, 0, 0, 0, 0, 584, 0, 585, 0, 0, 0, 0, 586, 0, 587, 0,
    588, 0, 0, 0, 0, 589, 0, 590, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 593, 0, 594, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 595, 0, 596, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 602, 0, 603, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 607, 0, 608, 0, 609, 0, 0, 610, 0, 0, 0, 0, 0,
    0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 615, 0, 616, 617, 0, 0, 0, 0,
    0, 618, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 622, 0, 0,
    0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    626, 0, 627, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 630, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 632, 0, 633, 0, 634, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637,
    0, 0, 0, 0, 0, 638, 0, 639, 0, 640, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 643, 0, 0, 644, 0, 0,
    0, 0, 0, 645, 0, 0, 646, 0, 647, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649,
    0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 652, 0, 0, 0, 0, 653, 0, 654, 0, 655, 0, 656, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 658, 0, 0, 0, 0, 659, 0, 660, 661, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0,
    663, 0, 664, 0, 0, 0, 0, 665, 0, 666, 667, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 670, 0, 0, 0, 0, 671, 0, 672, 673,
    0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 676, 0, 0, 0, 0, 677, 0, 678, 679, 0, 680, 0, 681, 0, 0, 0, 0, 682,
    683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0,
    686, 0, 0, 0, 0, 687, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 690, 0, 691, 692, 0, 0, 0, 693, 0, 0, 0, 0, 694, 0, 695, 0, 696, 0, 697, 0, 698, 0, 699, 0, 700, 701, 0, 0, 0, 702, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 704, 0, 705, 0, 706, 0, 707, 0, 708, 0, 709, 0, 710, 0, 711, 712, 0, 0, 0,
    713, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 715, 0, 716, 717, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 720,
    0, 721, 0, 0, 0, 722, 0, 0, 0, 723, 0, 724, 0, 725, 0, 726, 0, 727, 0, 728, 0, 0, 729, 0, 730, 0, 731, 0, 0, 0, 732, 0,
    733, 0, 734, 0, 735, 736, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 740, 741, 0,
    742, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 744, 0, 745, 746, 0, 747, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 749, 0,
    750, 0, 0, 751, 0, 0, 0, 752, 0, 753, 754, 0, 0, 0, 755, 0, 0, 756, 0, 757, 758, 0, 759, 0, 0, 0, 0, 0, 0, 0, 760, 0,
    761, 762, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 765, 0, 766, 0, 767, 0, 0, 0, 0, 0, 0, 768, 0, 769, 0, 0,
    770, 0, 771, 0, 772, 0, 773, 0, 774, 775, 0, 0, 0, 776, 0, 0, 0, 0, 777, 0, 778, 0, 0, 0, 779, 0, 780, 0, 781, 0, 0, 782,
    0, 783, 0, 0, 0, 784, 0, 785, 0, 786, 0, 787, 0, 788, 789, 0, 0, 0, 790, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 792, 0, 0,
    793, 0, 794, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 0, 796, 0, 797, 0, 798, 0, 0, 799, 0, 800, 801, 0, 802, 0, 803, 0,
    0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 805,
};
void recomp_unit_0195_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B10000u;
        entry_id = (entry_delta < 16356u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0195[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B10000;
    case 2u: goto L_08B1000C;
    case 3u: goto L_08B10014;
    case 4u: goto L_08B1003C;
    case 5u: goto L_08B10048;
    case 6u: goto L_08B10050;
    case 7u: goto L_08B10058;
    case 8u: goto L_08B10068;
    case 9u: goto L_08B10070;
    case 10u: goto L_08B10078;
    case 11u: goto L_08B10080;
    case 12u: goto L_08B10084;
    case 13u: goto L_08B10098;
    case 14u: goto L_08B100A8;
    case 15u: goto L_08B100B0;
    case 16u: goto L_08B100BC;
    case 17u: goto L_08B100C4;
    case 18u: goto L_08B100DC;
    case 19u: goto L_08B100F8;
    case 20u: goto L_08B1010C;
    case 21u: goto L_08B1011C;
    case 22u: goto L_08B1012C;
    case 23u: goto L_08B10134;
    case 24u: goto L_08B10148;
    case 25u: goto L_08B10158;
    case 26u: goto L_08B10160;
    case 27u: goto L_08B1016C;
    case 28u: goto L_08B10174;
    case 29u: goto L_08B1017C;
    case 30u: goto L_08B10184;
    case 31u: goto L_08B10198;
    case 32u: goto L_08B101C4;
    case 33u: goto L_08B101D0;
    case 34u: goto L_08B101E4;
    case 35u: goto L_08B101F0;
    case 36u: goto L_08B101FC;
    case 37u: goto L_08B1020C;
    case 38u: goto L_08B1021C;
    case 39u: goto L_08B10228;
    case 40u: goto L_08B10238;
    case 41u: goto L_08B10248;
    case 42u: goto L_08B1024C;
    case 43u: goto L_08B10258;
    case 44u: goto L_08B10264;
    case 45u: goto L_08B10274;
    case 46u: goto L_08B1028C;
    case 47u: goto L_08B10294;
    case 48u: goto L_08B102B0;
    case 49u: goto L_08B102C8;
    case 50u: goto L_08B102DC;
    case 51u: goto L_08B102EC;
    case 52u: goto L_08B102F0;
    case 53u: goto L_08B102FC;
    case 54u: goto L_08B1030C;
    case 55u: goto L_08B10318;
    case 56u: goto L_08B10330;
    case 57u: goto L_08B10344;
    case 58u: goto L_08B10350;
    case 59u: goto L_08B10368;
    case 60u: goto L_08B10384;
    case 61u: goto L_08B1039C;
    case 62u: goto L_08B103B4;
    case 63u: goto L_08B103C4;
    case 64u: goto L_08B103CC;
    case 65u: goto L_08B103D4;
    case 66u: goto L_08B103F0;
    case 67u: goto L_08B10408;
    case 68u: goto L_08B10418;
    case 69u: goto L_08B10428;
    case 70u: goto L_08B10438;
    case 71u: goto L_08B10440;
    case 72u: goto L_08B10448;
    case 73u: goto L_08B10450;
    case 74u: goto L_08B10458;
    case 75u: goto L_08B10464;
    case 76u: goto L_08B1046C;
    case 77u: goto L_08B1048C;
    case 78u: goto L_08B104A0;
    case 79u: goto L_08B104AC;
    case 80u: goto L_08B104BC;
    case 81u: goto L_08B104C4;
    case 82u: goto L_08B104CC;
    case 83u: goto L_08B104D4;
    case 84u: goto L_08B104DC;
    case 85u: goto L_08B10518;
    case 86u: goto L_08B10520;
    case 87u: goto L_08B10550;
    case 88u: goto L_08B10558;
    case 89u: goto L_08B10570;
    case 90u: goto L_08B10598;
    case 91u: goto L_08B105A4;
    case 92u: goto L_08B105BC;
    case 93u: goto L_08B105E0;
    case 94u: goto L_08B105E8;
    case 95u: goto L_08B10628;
    case 96u: goto L_08B10634;
    case 97u: goto L_08B10678;
    case 98u: goto L_08B1068C;
    case 99u: goto L_08B10698;
    case 100u: goto L_08B106AC;
    case 101u: goto L_08B106B8;
    case 102u: goto L_08B106FC;
    case 103u: goto L_08B10704;
    case 104u: goto L_08B1070C;
    case 105u: goto L_08B10714;
    case 106u: goto L_08B10720;
    case 107u: goto L_08B10728;
    case 108u: goto L_08B1073C;
    case 109u: goto L_08B1074C;
    case 110u: goto L_08B10754;
    case 111u: goto L_08B1077C;
    case 112u: goto L_08B10784;
    case 113u: goto L_08B1079C;
    case 114u: goto L_08B107AC;
    case 115u: goto L_08B107B4;
    case 116u: goto L_08B107C0;
    case 117u: goto L_08B107C8;
    case 118u: goto L_08B107D4;
    case 119u: goto L_08B107DC;
    case 120u: goto L_08B107E0;
    case 121u: goto L_08B1080C;
    case 122u: goto L_08B1081C;
    case 123u: goto L_08B10824;
    case 124u: goto L_08B10838;
    case 125u: goto L_08B10848;
    case 126u: goto L_08B10854;
    case 127u: goto L_08B10864;
    case 128u: goto L_08B1086C;
    case 129u: goto L_08B10878;
    case 130u: goto L_08B10880;
    case 131u: goto L_08B10888;
    case 132u: goto L_08B10890;
    case 133u: goto L_08B10898;
    case 134u: goto L_08B108A4;
    case 135u: goto L_08B108AC;
    case 136u: goto L_08B108B4;
    case 137u: goto L_08B108C0;
    case 138u: goto L_08B108C8;
    case 139u: goto L_08B108D4;
    case 140u: goto L_08B108EC;
    case 141u: goto L_08B108F4;
    case 142u: goto L_08B108FC;
    case 143u: goto L_08B10908;
    case 144u: goto L_08B10910;
    case 145u: goto L_08B1091C;
    case 146u: goto L_08B10924;
    case 147u: goto L_08B10930;
    case 148u: goto L_08B10944;
    case 149u: goto L_08B1096C;
    case 150u: goto L_08B109B8;
    case 151u: goto L_08B109D0;
    case 152u: goto L_08B109D8;
    case 153u: goto L_08B109E0;
    case 154u: goto L_08B10A5C;
    case 155u: goto L_08B10A64;
    case 156u: goto L_08B10A74;
    case 157u: goto L_08B10A7C;
    case 158u: goto L_08B10A90;
    case 159u: goto L_08B10A98;
    case 160u: goto L_08B10A9C;
    case 161u: goto L_08B10AA8;
    case 162u: goto L_08B10AB4;
    case 163u: goto L_08B10ABC;
    case 164u: goto L_08B10ACC;
    case 165u: goto L_08B10AD4;
    case 166u: goto L_08B10AD8;
    case 167u: goto L_08B10AE0;
    case 168u: goto L_08B10AF0;
    case 169u: goto L_08B10AF8;
    case 170u: goto L_08B10B00;
    case 171u: goto L_08B10B08;
    case 172u: goto L_08B10B14;
    case 173u: goto L_08B10B30;
    case 174u: goto L_08B10B40;
    case 175u: goto L_08B10B78;
    case 176u: goto L_08B10BA0;
    case 177u: goto L_08B10BC0;
    case 178u: goto L_08B10BD0;
    case 179u: goto L_08B10BF4;
    case 180u: goto L_08B10C00;
    case 181u: goto L_08B10C08;
    case 182u: goto L_08B10C24;
    case 183u: goto L_08B10C34;
    case 184u: goto L_08B10C40;
    case 185u: goto L_08B10C48;
    case 186u: goto L_08B10C58;
    case 187u: goto L_08B10C70;
    case 188u: goto L_08B10C7C;
    case 189u: goto L_08B10C90;
    case 190u: goto L_08B10CAC;
    case 191u: goto L_08B10CB8;
    case 192u: goto L_08B10CC8;
    case 193u: goto L_08B10CDC;
    case 194u: goto L_08B10CF0;
    case 195u: goto L_08B10D14;
    case 196u: goto L_08B10D20;
    case 197u: goto L_08B10D28;
    case 198u: goto L_08B10D3C;
    case 199u: goto L_08B10D40;
    case 200u: goto L_08B10D5C;
    case 201u: goto L_08B10D78;
    case 202u: goto L_08B10D80;
    case 203u: goto L_08B10D8C;
    case 204u: goto L_08B10D94;
    case 205u: goto L_08B10DA8;
    case 206u: goto L_08B10DB8;
    case 207u: goto L_08B10DC0;
    case 208u: goto L_08B10DC8;
    case 209u: goto L_08B10DD4;
    case 210u: goto L_08B10DEC;
    case 211u: goto L_08B10E00;
    case 212u: goto L_08B10E20;
    case 213u: goto L_08B10E30;
    case 214u: goto L_08B10E3C;
    case 215u: goto L_08B10E44;
    case 216u: goto L_08B10E50;
    case 217u: goto L_08B10E58;
    case 218u: goto L_08B10E64;
    case 219u: goto L_08B10E70;
    case 220u: goto L_08B10E7C;
    case 221u: goto L_08B10E84;
    case 222u: goto L_08B10E90;
    case 223u: goto L_08B10E94;
    case 224u: goto L_08B10EA0;
    case 225u: goto L_08B10EBC;
    case 226u: goto L_08B10EF4;
    case 227u: goto L_08B10F04;
    case 228u: goto L_08B10F10;
    case 229u: goto L_08B10F18;
    case 230u: goto L_08B10F24;
    case 231u: goto L_08B10F30;
    case 232u: goto L_08B10F40;
    case 233u: goto L_08B10F50;
    case 234u: goto L_08B10F5C;
    case 235u: goto L_08B10F68;
    case 236u: goto L_08B10F74;
    case 237u: goto L_08B10F80;
    case 238u: goto L_08B10F8C;
    case 239u: goto L_08B10FA0;
    case 240u: goto L_08B10FCC;
    case 241u: goto L_08B10FD8;
    case 242u: goto L_08B10FEC;
    case 243u: goto L_08B10FFC;
    case 244u: goto L_08B11004;
    case 245u: goto L_08B1100C;
    case 246u: goto L_08B1101C;
    case 247u: goto L_08B11024;
    case 248u: goto L_08B11030;
    case 249u: goto L_08B11040;
    case 250u: goto L_08B11050;
    case 251u: goto L_08B1105C;
    case 252u: goto L_08B11068;
    case 253u: goto L_08B1106C;
    case 254u: goto L_08B1108C;
    case 255u: goto L_08B110BC;
    case 256u: goto L_08B110C4;
    case 257u: goto L_08B110D8;
    case 258u: goto L_08B110E8;
    case 259u: goto L_08B110F0;
    case 260u: goto L_08B110FC;
    case 261u: goto L_08B11100;
    case 262u: goto L_08B11108;
    case 263u: goto L_08B11110;
    case 264u: goto L_08B11124;
    case 265u: goto L_08B11134;
    case 266u: goto L_08B1113C;
    case 267u: goto L_08B11148;
    case 268u: goto L_08B11158;
    case 269u: goto L_08B11168;
    case 270u: goto L_08B11178;
    case 271u: goto L_08B1118C;
    case 272u: goto L_08B1119C;
    case 273u: goto L_08B111A4;
    case 274u: goto L_08B111B8;
    case 275u: goto L_08B111C4;
    case 276u: goto L_08B111D0;
    case 277u: goto L_08B111E0;
    case 278u: goto L_08B111F0;
    case 279u: goto L_08B11214;
    case 280u: goto L_08B11218;
    case 281u: goto L_08B11224;
    case 282u: goto L_08B1124C;
    case 283u: goto L_08B11260;
    case 284u: goto L_08B11268;
    case 285u: goto L_08B11270;
    case 286u: goto L_08B11278;
    case 287u: goto L_08B11284;
    case 288u: goto L_08B1128C;
    case 289u: goto L_08B11294;
    case 290u: goto L_08B112A8;
    case 291u: goto L_08B112B4;
    case 292u: goto L_08B112E8;
    case 293u: goto L_08B112F0;
    case 294u: goto L_08B11304;
    case 295u: goto L_08B11310;
    case 296u: goto L_08B11318;
    case 297u: goto L_08B11348;
    case 298u: goto L_08B11350;
    case 299u: goto L_08B1135C;
    case 300u: goto L_08B11364;
    case 301u: goto L_08B1136C;
    case 302u: goto L_08B11374;
    case 303u: goto L_08B11380;
    case 304u: goto L_08B11388;
    case 305u: goto L_08B11394;
    case 306u: goto L_08B113A4;
    case 307u: goto L_08B113B0;
    case 308u: goto L_08B113BC;
    case 309u: goto L_08B113C8;
    case 310u: goto L_08B113D0;
    case 311u: goto L_08B113DC;
    case 312u: goto L_08B113E4;
    case 313u: goto L_08B113F0;
    case 314u: goto L_08B11410;
    case 315u: goto L_08B11420;
    case 316u: goto L_08B11428;
    case 317u: goto L_08B1144C;
    case 318u: goto L_08B11454;
    case 319u: goto L_08B1145C;
    case 320u: goto L_08B11464;
    case 321u: goto L_08B1146C;
    case 322u: goto L_08B1147C;
    case 323u: goto L_08B11490;
    case 324u: goto L_08B114B0;
    case 325u: goto L_08B114BC;
    case 326u: goto L_08B114C4;
    case 327u: goto L_08B114CC;
    case 328u: goto L_08B114D4;
    case 329u: goto L_08B114D8;
    case 330u: goto L_08B114E0;
    case 331u: goto L_08B114EC;
    case 332u: goto L_08B114F0;
    case 333u: goto L_08B11504;
    case 334u: goto L_08B1150C;
    case 335u: goto L_08B11514;
    case 336u: goto L_08B11534;
    case 337u: goto L_08B11550;
    case 338u: goto L_08B11568;
    case 339u: goto L_08B11578;
    case 340u: goto L_08B115A0;
    case 341u: goto L_08B115D8;
    case 342u: goto L_08B115FC;
    case 343u: goto L_08B116A0;
    case 344u: goto L_08B116A4;
    case 345u: goto L_08B116BC;
    case 346u: goto L_08B116E4;
    case 347u: goto L_08B11708;
    case 348u: goto L_08B11754;
    case 349u: goto L_08B11758;
    case 350u: goto L_08B11768;
    case 351u: goto L_08B117AC;
    case 352u: goto L_08B117B4;
    case 353u: goto L_08B117FC;
    case 354u: goto L_08B1180C;
    case 355u: goto L_08B1181C;
    case 356u: goto L_08B11838;
    case 357u: goto L_08B1185C;
    case 358u: goto L_08B11864;
    case 359u: goto L_08B11890;
    case 360u: goto L_08B11898;
    case 361u: goto L_08B118CC;
    case 362u: goto L_08B118D4;
    case 363u: goto L_08B11908;
    case 364u: goto L_08B11910;
    case 365u: goto L_08B11918;
    case 366u: goto L_08B11920;
    case 367u: goto L_08B11928;
    case 368u: goto L_08B11930;
    case 369u: goto L_08B11938;
    case 370u: goto L_08B1193C;
    case 371u: goto L_08B1195C;
    case 372u: goto L_08B11980;
    case 373u: goto L_08B11988;
    case 374u: goto L_08B1198C;
    case 375u: goto L_08B11994;
    case 376u: goto L_08B119D0;
    case 377u: goto L_08B11A14;
    case 378u: goto L_08B11A30;
    case 379u: goto L_08B11A38;
    case 380u: goto L_08B11A68;
    case 381u: goto L_08B11A70;
    case 382u: goto L_08B11A78;
    case 383u: goto L_08B11A80;
    case 384u: goto L_08B11A84;
    case 385u: goto L_08B11AA8;
    case 386u: goto L_08B11ACC;
    case 387u: goto L_08B11B08;
    case 388u: goto L_08B11B1C;
    case 389u: goto L_08B11B24;
    case 390u: goto L_08B11B38;
    case 391u: goto L_08B11B40;
    case 392u: goto L_08B11B48;
    case 393u: goto L_08B11B50;
    case 394u: goto L_08B11BD8;
    case 395u: goto L_08B11BE0;
    case 396u: goto L_08B11BF4;
    case 397u: goto L_08B11BFC;
    case 398u: goto L_08B11C00;
    case 399u: goto L_08B11C08;
    case 400u: goto L_08B11C2C;
    case 401u: goto L_08B11C34;
    case 402u: goto L_08B11C48;
    case 403u: goto L_08B11C50;
    case 404u: goto L_08B11C54;
    case 405u: goto L_08B11C5C;
    case 406u: goto L_08B11C80;
    case 407u: goto L_08B11C88;
    case 408u: goto L_08B11C9C;
    case 409u: goto L_08B11CA4;
    case 410u: goto L_08B11CA8;
    case 411u: goto L_08B11CB0;
    case 412u: goto L_08B11CD4;
    case 413u: goto L_08B11CDC;
    case 414u: goto L_08B11CF0;
    case 415u: goto L_08B11CF8;
    case 416u: goto L_08B11CFC;
    case 417u: goto L_08B11D04;
    case 418u: goto L_08B11D0C;
    case 419u: goto L_08B11D20;
    case 420u: goto L_08B11D24;
    case 421u: goto L_08B11D58;
    case 422u: goto L_08B11DDC;
    case 423u: goto L_08B11DFC;
    case 424u: goto L_08B11E18;
    case 425u: goto L_08B11E30;
    case 426u: goto L_08B11E3C;
    case 427u: goto L_08B11E7C;
    case 428u: goto L_08B11E80;
    case 429u: goto L_08B11EA0;
    case 430u: goto L_08B11EA8;
    case 431u: goto L_08B11EBC;
    case 432u: goto L_08B11EC4;
    case 433u: goto L_08B11EC8;
    case 434u: goto L_08B11EEC;
    case 435u: goto L_08B11F0C;
    case 436u: goto L_08B11F3C;
    case 437u: goto L_08B11F4C;
    case 438u: goto L_08B11F54;
    case 439u: goto L_08B11F5C;
    case 440u: goto L_08B11F68;
    case 441u: goto L_08B11F74;
    case 442u: goto L_08B11F7C;
    case 443u: goto L_08B11F84;
    case 444u: goto L_08B11F90;
    case 445u: goto L_08B11FA0;
    case 446u: goto L_08B11FB4;
    case 447u: goto L_08B11FC4;
    case 448u: goto L_08B11FD8;
    case 449u: goto L_08B12000;
    case 450u: goto L_08B12010;
    case 451u: goto L_08B1201C;
    case 452u: goto L_08B12028;
    case 453u: goto L_08B12038;
    case 454u: goto L_08B12040;
    case 455u: goto L_08B12054;
    case 456u: goto L_08B12068;
    case 457u: goto L_08B12074;
    case 458u: goto L_08B12080;
    case 459u: goto L_08B12088;
    case 460u: goto L_08B12098;
    case 461u: goto L_08B120A0;
    case 462u: goto L_08B120B8;
    case 463u: goto L_08B120D8;
    case 464u: goto L_08B120F0;
    case 465u: goto L_08B120FC;
    case 466u: goto L_08B12104;
    case 467u: goto L_08B12114;
    case 468u: goto L_08B1211C;
    case 469u: goto L_08B1212C;
    case 470u: goto L_08B12134;
    case 471u: goto L_08B1213C;
    case 472u: goto L_08B12154;
    case 473u: goto L_08B12160;
    case 474u: goto L_08B12168;
    case 475u: goto L_08B12180;
    case 476u: goto L_08B12188;
    case 477u: goto L_08B12190;
    case 478u: goto L_08B121B4;
    case 479u: goto L_08B121D0;
    case 480u: goto L_08B121E0;
    case 481u: goto L_08B121F0;
    case 482u: goto L_08B12200;
    case 483u: goto L_08B12224;
    case 484u: goto L_08B1226C;
    case 485u: goto L_08B12278;
    case 486u: goto L_08B12288;
    case 487u: goto L_08B12290;
    case 488u: goto L_08B122B4;
    case 489u: goto L_08B122BC;
    case 490u: goto L_08B12308;
    case 491u: goto L_08B12310;
    case 492u: goto L_08B12324;
    case 493u: goto L_08B1232C;
    case 494u: goto L_08B12334;
    case 495u: goto L_08B12344;
    case 496u: goto L_08B12348;
    case 497u: goto L_08B12378;
    case 498u: goto L_08B1239C;
    case 499u: goto L_08B123B8;
    case 500u: goto L_08B123C0;
    case 501u: goto L_08B123D8;
    case 502u: goto L_08B123E4;
    case 503u: goto L_08B123EC;
    case 504u: goto L_08B123F0;
    case 505u: goto L_08B12404;
    case 506u: goto L_08B12418;
    case 507u: goto L_08B12434;
    case 508u: goto L_08B12448;
    case 509u: goto L_08B12450;
    case 510u: goto L_08B12464;
    case 511u: goto L_08B1246C;
    case 512u: goto L_08B12470;
    case 513u: goto L_08B1248C;
    case 514u: goto L_08B12518;
    case 515u: goto L_08B12520;
    case 516u: goto L_08B1253C;
    case 517u: goto L_08B12558;
    case 518u: goto L_08B125B0;
    case 519u: goto L_08B125CC;
    case 520u: goto L_08B125D4;
    case 521u: goto L_08B125DC;
    case 522u: goto L_08B125E4;
    case 523u: goto L_08B125FC;
    case 524u: goto L_08B12734;
    case 525u: goto L_08B1278C;
    case 526u: goto L_08B127D8;
    case 527u: goto L_08B12830;
    case 528u: goto L_08B1287C;
    case 529u: goto L_08B128D8;
    case 530u: goto L_08B12ACC;
    case 531u: goto L_08B12AE8;
    case 532u: goto L_08B12B04;
    case 533u: goto L_08B12B40;
    case 534u: goto L_08B12B54;
    case 535u: goto L_08B12B5C;
    case 536u: goto L_08B12B70;
    case 537u: goto L_08B12B78;
    case 538u: goto L_08B12B80;
    case 539u: goto L_08B12B94;
    case 540u: goto L_08B12B9C;
    case 541u: goto L_08B12BB0;
    case 542u: goto L_08B12BB8;
    case 543u: goto L_08B12BC0;
    case 544u: goto L_08B12BD4;
    case 545u: goto L_08B12BDC;
    case 546u: goto L_08B12BF0;
    case 547u: goto L_08B12BF8;
    case 548u: goto L_08B12C00;
    case 549u: goto L_08B12C14;
    case 550u: goto L_08B12C1C;
    case 551u: goto L_08B12C30;
    case 552u: goto L_08B12C38;
    case 553u: goto L_08B12C40;
    case 554u: goto L_08B12C54;
    case 555u: goto L_08B12C5C;
    case 556u: goto L_08B12C70;
    case 557u: goto L_08B12C78;
    case 558u: goto L_08B12C80;
    case 559u: goto L_08B12C94;
    case 560u: goto L_08B12C9C;
    case 561u: goto L_08B12CB0;
    case 562u: goto L_08B12CB8;
    case 563u: goto L_08B12CC0;
    case 564u: goto L_08B12CD4;
    case 565u: goto L_08B12CDC;
    case 566u: goto L_08B12CF0;
    case 567u: goto L_08B12CF8;
    case 568u: goto L_08B12D00;
    case 569u: goto L_08B12D14;
    case 570u: goto L_08B12D1C;
    case 571u: goto L_08B12D30;
    case 572u: goto L_08B12D38;
    case 573u: goto L_08B12D40;
    case 574u: goto L_08B12D54;
    case 575u: goto L_08B12D5C;
    case 576u: goto L_08B12D70;
    case 577u: goto L_08B12D78;
    case 578u: goto L_08B12D80;
    case 579u: goto L_08B12D94;
    case 580u: goto L_08B12D9C;
    case 581u: goto L_08B12DB0;
    case 582u: goto L_08B12DB8;
    case 583u: goto L_08B12DC0;
    case 584u: goto L_08B12DD4;
    case 585u: goto L_08B12DDC;
    case 586u: goto L_08B12DF0;
    case 587u: goto L_08B12DF8;
    case 588u: goto L_08B12E00;
    case 589u: goto L_08B12E14;
    case 590u: goto L_08B12E1C;
    case 591u: goto L_08B12E20;
    case 592u: goto L_08B12E54;
    case 593u: goto L_08B12E5C;
    case 594u: goto L_08B12E64;
    case 595u: goto L_08B12E98;
    case 596u: goto L_08B12EA0;
    case 597u: goto L_08B12EA4;
    case 598u: goto L_08B12ED0;
    case 599u: goto L_08B12F24;
    case 600u: goto L_08B12F34;
    case 601u: goto L_08B12F48;
    case 602u: goto L_08B12F68;
    case 603u: goto L_08B12F70;
    case 604u: goto L_08B12F9C;
    case 605u: goto L_08B12FC8;
    case 606u: goto L_08B13044;
    case 607u: goto L_08B1304C;
    case 608u: goto L_08B13054;
    case 609u: goto L_08B1305C;
    case 610u: goto L_08B13068;
    case 611u: goto L_08B13084;
    case 612u: goto L_08B130B0;
    case 613u: goto L_08B130DC;
    case 614u: goto L_08B13158;
    case 615u: goto L_08B13160;
    case 616u: goto L_08B13168;
    case 617u: goto L_08B1316C;
    case 618u: goto L_08B13184;
    case 619u: goto L_08B131A0;
    case 620u: goto L_08B131BC;
    case 621u: goto L_08B131D8;
    case 622u: goto L_08B131F4;
    case 623u: goto L_08B13210;
    case 624u: goto L_08B1322C;
    case 625u: goto L_08B13244;
    case 626u: goto L_08B13280;
    case 627u: goto L_08B13288;
    case 628u: goto L_08B1329C;
    case 629u: goto L_08B132EC;
    case 630u: goto L_08B132F4;
    case 631u: goto L_08B13334;
    case 632u: goto L_08B1333C;
    case 633u: goto L_08B13344;
    case 634u: goto L_08B1334C;
    case 635u: goto L_08B1335C;
    case 636u: goto L_08B133A0;
    case 637u: goto L_08B133FC;
    case 638u: goto L_08B13414;
    case 639u: goto L_08B1341C;
    case 640u: goto L_08B13424;
    case 641u: goto L_08B1342C;
    case 642u: goto L_08B13454;
    case 643u: goto L_08B13468;
    case 644u: goto L_08B13474;
    case 645u: goto L_08B1348C;
    case 646u: goto L_08B13498;
    case 647u: goto L_08B134A0;
    case 648u: goto L_08B134B4;
    case 649u: goto L_08B134FC;
    case 650u: goto L_08B13518;
    case 651u: goto L_08B1352C;
    case 652u: goto L_08B13534;
    case 653u: goto L_08B13548;
    case 654u: goto L_08B13550;
    case 655u: goto L_08B13558;
    case 656u: goto L_08B13560;
    case 657u: goto L_08B135AC;
    case 658u: goto L_08B135B4;
    case 659u: goto L_08B135C8;
    case 660u: goto L_08B135D0;
    case 661u: goto L_08B135D4;
    case 662u: goto L_08B135DC;
    case 663u: goto L_08B13600;
    case 664u: goto L_08B13608;
    case 665u: goto L_08B1361C;
    case 666u: goto L_08B13624;
    case 667u: goto L_08B13628;
    case 668u: goto L_08B13630;
    case 669u: goto L_08B13654;
    case 670u: goto L_08B1365C;
    case 671u: goto L_08B13670;
    case 672u: goto L_08B13678;
    case 673u: goto L_08B1367C;
    case 674u: goto L_08B13684;
    case 675u: goto L_08B136B0;
    case 676u: goto L_08B136B8;
    case 677u: goto L_08B136CC;
    case 678u: goto L_08B136D4;
    case 679u: goto L_08B136D8;
    case 680u: goto L_08B136E0;
    case 681u: goto L_08B136E8;
    case 682u: goto L_08B136FC;
    case 683u: goto L_08B13700;
    case 684u: goto L_08B13748;
    case 685u: goto L_08B13774;
    case 686u: goto L_08B13780;
    case 687u: goto L_08B13794;
    case 688u: goto L_08B1379C;
    case 689u: goto L_08B138B8;
    case 690u: goto L_08B13A04;
    case 691u: goto L_08B13A0C;
    case 692u: goto L_08B13A10;
    case 693u: goto L_08B13A20;
    case 694u: goto L_08B13A34;
    case 695u: goto L_08B13A3C;
    case 696u: goto L_08B13A44;
    case 697u: goto L_08B13A4C;
    case 698u: goto L_08B13A54;
    case 699u: goto L_08B13A5C;
    case 700u: goto L_08B13A64;
    case 701u: goto L_08B13A68;
    case 702u: goto L_08B13A78;
    case 703u: goto L_08B13AA8;
    case 704u: goto L_08B13AB4;
    case 705u: goto L_08B13ABC;
    case 706u: goto L_08B13AC4;
    case 707u: goto L_08B13ACC;
    case 708u: goto L_08B13AD4;
    case 709u: goto L_08B13ADC;
    case 710u: goto L_08B13AE4;
    case 711u: goto L_08B13AEC;
    case 712u: goto L_08B13AF0;
    case 713u: goto L_08B13B00;
    case 714u: goto L_08B13B20;
    case 715u: goto L_08B13B30;
    case 716u: goto L_08B13B38;
    case 717u: goto L_08B13B3C;
    case 718u: goto L_08B13B44;
    case 719u: goto L_08B13B74;
    case 720u: goto L_08B13B7C;
    case 721u: goto L_08B13B84;
    case 722u: goto L_08B13B94;
    case 723u: goto L_08B13BA4;
    case 724u: goto L_08B13BAC;
    case 725u: goto L_08B13BB4;
    case 726u: goto L_08B13BBC;
    case 727u: goto L_08B13BC4;
    case 728u: goto L_08B13BCC;
    case 729u: goto L_08B13BD8;
    case 730u: goto L_08B13BE0;
    case 731u: goto L_08B13BE8;
    case 732u: goto L_08B13BF8;
    case 733u: goto L_08B13C00;
    case 734u: goto L_08B13C08;
    case 735u: goto L_08B13C10;
    case 736u: goto L_08B13C14;
    case 737u: goto L_08B13C28;
    case 738u: goto L_08B13C48;
    case 739u: goto L_08B13C6C;
    case 740u: goto L_08B13C74;
    case 741u: goto L_08B13C78;
    case 742u: goto L_08B13C80;
    case 743u: goto L_08B13CA0;
    case 744u: goto L_08B13CB0;
    case 745u: goto L_08B13CB8;
    case 746u: goto L_08B13CBC;
    case 747u: goto L_08B13CC4;
    case 748u: goto L_08B13CF0;
    case 749u: goto L_08B13CF8;
    case 750u: goto L_08B13D00;
    case 751u: goto L_08B13D0C;
    case 752u: goto L_08B13D1C;
    case 753u: goto L_08B13D24;
    case 754u: goto L_08B13D28;
    case 755u: goto L_08B13D38;
    case 756u: goto L_08B13D44;
    case 757u: goto L_08B13D4C;
    case 758u: goto L_08B13D50;
    case 759u: goto L_08B13D58;
    case 760u: goto L_08B13D78;
    case 761u: goto L_08B13D80;
    case 762u: goto L_08B13D84;
    case 763u: goto L_08B13D8C;
    case 764u: goto L_08B13DB8;
    case 765u: goto L_08B13DC0;
    case 766u: goto L_08B13DC8;
    case 767u: goto L_08B13DD0;
    case 768u: goto L_08B13DEC;
    case 769u: goto L_08B13DF4;
    case 770u: goto L_08B13E00;
    case 771u: goto L_08B13E08;
    case 772u: goto L_08B13E10;
    case 773u: goto L_08B13E18;
    case 774u: goto L_08B13E20;
    case 775u: goto L_08B13E24;
    case 776u: goto L_08B13E34;
    case 777u: goto L_08B13E48;
    case 778u: goto L_08B13E50;
    case 779u: goto L_08B13E60;
    case 780u: goto L_08B13E68;
    case 781u: goto L_08B13E70;
    case 782u: goto L_08B13E7C;
    case 783u: goto L_08B13E84;
    case 784u: goto L_08B13E94;
    case 785u: goto L_08B13E9C;
    case 786u: goto L_08B13EA4;
    case 787u: goto L_08B13EAC;
    case 788u: goto L_08B13EB4;
    case 789u: goto L_08B13EB8;
    case 790u: goto L_08B13EC8;
    case 791u: goto L_08B13EE4;
    case 792u: goto L_08B13EF4;
    case 793u: goto L_08B13F00;
    case 794u: goto L_08B13F08;
    case 795u: goto L_08B13F24;
    case 796u: goto L_08B13F40;
    case 797u: goto L_08B13F48;
    case 798u: goto L_08B13F50;
    case 799u: goto L_08B13F5C;
    case 800u: goto L_08B13F64;
    case 801u: goto L_08B13F68;
    case 802u: goto L_08B13F70;
    case 803u: goto L_08B13F78;
    case 804u: goto L_08B13F8C;
    case 805u: goto L_08B13FE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B10000:
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B10098;
      }
      goto L_08B1000C;
    }
L_08B1000C:
    hot_regs.g31 = (0x08B10014u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 584u, 0x08B0E5E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10014u) goto L_08B10014;
    return;
L_08B10014:
    hot_regs.g4 = (hot_regs.g2 << 24u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 24u));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-497));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (hot_regs.g5 & hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g31 = (0x08B1003Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B1003Cu) goto L_08B1003C;
    return;
L_08B1003C:
    hot_regs.g4 = (0u | 4u);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B10058;
      }
      goto L_08B10048;
    }
L_08B10048:
    hot_regs.g31 = (0x08B10050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 575u, 0x08B0E56Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10050u) goto L_08B10050;
    return;
L_08B10050:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(hot_regs.g2));
      if (branch_taken) {
          goto L_08B10084;
      }
      goto L_08B10058;
    }
L_08B10058:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B10078;
      }
      goto L_08B10068;
    }
L_08B10068:
    hot_regs.g31 = (0x08B10070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 650u, 0x08B0EB4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10070u) goto L_08B10070;
    return;
L_08B10070:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(hot_regs.g2));
      if (branch_taken) {
          goto L_08B10084;
      }
      goto L_08B10078;
    }
L_08B10078:
    hot_regs.g31 = (0x08B10080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 555u, 0x08B0E454u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10080u) goto L_08B10080;
    return;
L_08B10080:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(hot_regs.g2));
    goto L_08B10084;
L_08B10084:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(g4));
    g4 = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B1012C;
      }
      goto L_08B10098;
    }
}
L_08B10098:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(533))))));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B1012C;
      }
      goto L_08B100A8;
    }
L_08B100A8:
    hot_regs.g31 = (0x08B100B0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B100B0u) goto L_08B100B0;
    return;
L_08B100B0:
    hot_regs.g4 = (0u | 4u);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B100DC;
      }
      goto L_08B100BC;
    }
L_08B100BC:
    hot_regs.g31 = (0x08B100C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 575u, 0x08B0E56Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B100C4u) goto L_08B100C4;
    return;
L_08B100C4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(hot_regs.g2));
    g4 = (0u | 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(g4));
    g4 = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B1012C;
      }
      goto L_08B100DC;
    }
}
L_08B100DC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-497));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g31 = (0x08B100F8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 502u, 0x08B0E0ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B100F8u) goto L_08B100F8;
    return;
L_08B100F8:
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (0u | 0u);
    hot_regs.g31 = (0x08B1010Cu);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(hot_regs.g4));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B1010Cu) goto L_08B1010C;
    return;
L_08B1010C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(2320)));
    g4 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B1012C;
      }
      goto L_08B1011C;
    }
}
L_08B1011C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(618))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-33));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08B1012C;
}
L_08B1012C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 685u, 0x08B0EE04u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08B10134;
    }
L_08B10134:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(g4));
    g4 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B10148;
      }
      goto L_08B10148;
    }
}
L_08B10148:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    g4 = (g4 & 1u);
    if (g4 == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(320)));
    hot_regs.g4 = g4;
        goto L_08B10198;
    }
    goto L_08B10158;
}
L_08B10158:
    hot_regs.g31 = (0x08B10160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10160u) goto L_08B10160;
    return;
L_08B10160:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(2320)));
    if (static_cast<std::int32_t>(hot_regs.g4) <= 0) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(320)));
        goto L_08B10198;
    }
    goto L_08B1016C;
L_08B1016C:
    hot_regs.g31 = (0x08B10174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 530u, 0x08AAE97Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10174u) goto L_08B10174;
    return;
L_08B10174:
    if (hot_regs.g2 == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(320)));
        goto L_08B10198;
    }
    goto L_08B1017C;
L_08B1017C:
    hot_regs.g31 = (0x08B10184u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 502u, 0x08B0E0ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10184u) goto L_08B10184;
    return;
L_08B10184:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (0u | 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(g4));
    g4 = (0u | 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(g4));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(320)));
    hot_regs.g4 = g4;
    goto L_08B10198;
}
L_08B10198:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(324)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (14761u << 16u);
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g4 = (g4 | 56970u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    f12 = f12 + f13;
    ctx.set_fpu_condition((f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08B101D0;
      }
      goto L_08B101C4;
    }
}
}
L_08B101C4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(508), g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(504), g4);
    hot_regs.g4 = g4;
    goto L_08B101D0;
}
L_08B101D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u | 48u);
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B10368;
      }
      goto L_08B101E4;
    }
}
L_08B101E4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534))))));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B10368;
      }
      goto L_08B101F0;
    }
L_08B101F0:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(533))))));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B10368;
      }
      goto L_08B101FC;
    }
L_08B101FC:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(533))))));
    hot_regs.g5 = (0u | 11u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B10368;
      }
      goto L_08B1020C;
    }
L_08B1020C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(533))))));
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B10368;
      }
      goto L_08B1021C;
    }
L_08B1021C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(535))))));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B10368;
      }
      goto L_08B10228;
    }
L_08B10228:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    hot_regs.g5 = (0u | 1u);
    if (g4 != hot_regs.g5) {
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    hot_regs.g4 = g4;
        goto L_08B1024C;
    }
    goto L_08B10238;
}
L_08B10238:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(533))))));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B10368;
      }
      goto L_08B10248;
    }
L_08B10248:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    goto L_08B1024C;
L_08B1024C:
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B10274;
      }
      goto L_08B10258;
    }
L_08B10258:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(532))))));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B10368;
      }
      goto L_08B10264;
    }
L_08B10264:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(532))))));
    hot_regs.g5 = (0u | 4u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B10368;
      }
      goto L_08B10274;
    }
L_08B10274:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (hot_regs.g5 - g4);
    g4 = (g4 < static_cast<std::uint32_t>(501) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B10294;
      }
      goto L_08B1028C;
    }
}
L_08B1028C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(504), hot_regs.g4);
    goto L_08B10294;
L_08B10294:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (14761u << 16u);
    g4 = (g4 | 56970u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B10368;
      }
      goto L_08B102B0;
    }
}
L_08B102B0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (hot_regs.g5 - g4);
    g4 = (g4 < static_cast<std::uint32_t>(2001) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B10368;
      }
      goto L_08B102C8;
    }
}
L_08B102C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (0u | 2u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(533))))));
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(612)));
    hot_regs.g4 = g4;
        goto L_08B102F0;
    }
    goto L_08B102DC;
}
L_08B102DC:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(533))))));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B102FC;
      }
      goto L_08B102EC;
    }
L_08B102EC:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    goto L_08B102F0;
L_08B102F0:
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B1030C;
      }
      goto L_08B102FC;
    }
L_08B102FC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(1500));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(512), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B10318;
      }
      goto L_08B1030C;
    }
}
L_08B1030C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(700));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(512), g4);
    hot_regs.g4 = g4;
    goto L_08B10318;
}
L_08B10318:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(504), g4);
    g4 = (0u | 1u);
    { const bool branch_taken = hot_regs.g5 != g4;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B10350;
      }
      goto L_08B10330;
    }
}
L_08B10330:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(532))))));
    g4 = (0u | 2u);
    hot_regs.g6 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    g4 = (g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_08B10344;
    }
    goto L_08B10344;
}
L_08B10344:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 24u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 24u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08B10350;
}
L_08B10350:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(392));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08B10368u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10368u) goto L_08B10368;
    return;
L_08B10368:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (16320u << 16u);
    g4 = (g4 & hot_regs.g5);
    g4 = (g4 >> 22u);
    g4 = (g4 & 7u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B10408;
      }
      goto L_08B10384;
    }
}
L_08B10384:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (hot_regs.g5 - g4);
    g4 = (g4 < static_cast<std::uint32_t>(30001) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B10408;
      }
      goto L_08B1039C;
    }
}
L_08B1039C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7668)));
    g4 = (hot_regs.g5 - g4);
    g4 = (g4 < static_cast<std::uint32_t>(30001) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B10408;
      }
      goto L_08B103B4;
    }
}
L_08B103B4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(533))))));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B10408;
      }
      goto L_08B103C4;
    }
L_08B103C4:
    hot_regs.g31 = (0x08B103CCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 561u, 0x08A0F37Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B103CCu) goto L_08B103CC;
    return;
L_08B103CC:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B10408;
      }
      goto L_08B103D4;
    }
L_08B103D4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-497));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g31 = (0x08B103F0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 365u, 0x08B41608u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B103F0u) goto L_08B103F0;
    return;
L_08B103F0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (0u | 2u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(400));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(512), g4);
    hot_regs.g4 = g4;
    goto L_08B10408;
}
L_08B10408:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B1046C;
      }
      goto L_08B10418;
    }
}
L_08B10418:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(533))))));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B10438;
      }
      goto L_08B10428;
    }
L_08B10428:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(533))))));
    hot_regs.g5 = (0u | 3u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B1046C;
      }
      goto L_08B10438;
    }
L_08B10438:
    hot_regs.g31 = (0x08B10440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10440u) goto L_08B10440;
    return;
L_08B10440:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1046C;
      }
      goto L_08B10448;
    }
L_08B10448:
    hot_regs.g31 = (0x08B10450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10450u) goto L_08B10450;
    return;
L_08B10450:
    hot_regs.g31 = (0x08B10458u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10458u) goto L_08B10458;
    return;
L_08B10458:
    hot_regs.g4 = (0u | 2u);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B1046C;
      }
      goto L_08B10464;
    }
L_08B10464:
    hot_regs.g4 = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08B1046C;
L_08B1046C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (48947u << 16u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    g4 = (g4 | 13107u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B104A0;
      }
      goto L_08B1048C;
    }
}
L_08B1048C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(512), g4);
    hot_regs.g4 = g4;
    goto L_08B104A0;
}
L_08B104A0:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534))))));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B1068C;
      }
      goto L_08B104AC;
    }
L_08B104AC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(533))))));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    g4 = (static_cast<std::int32_t>(g4) < 6 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B1068C;
      }
      goto L_08B104BC;
    }
}
L_08B104BC:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1068C;
      }
      goto L_08B104C4;
    }
L_08B104C4:
    hot_regs.g31 = (0x08B104CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B104CCu) goto L_08B104CC;
    return;
L_08B104CC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1068C;
      }
      goto L_08B104D4;
    }
L_08B104D4:
    hot_regs.g31 = (0x08B104DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 22u, 0x08960240u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B104DCu) goto L_08B104DC;
    return;
L_08B104DC:
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
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
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B1068C;
      }
      goto L_08B10518;
    }
L_08B10518:
    hot_regs.g31 = (0x08B10520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 22u, 0x08960240u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10520u) goto L_08B10520;
    return;
L_08B10520:
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B1068C;
      }
      goto L_08B10550;
    }
L_08B10550:
    hot_regs.g31 = (0x08B10558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10558u) goto L_08B10558;
    return;
L_08B10558:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08B10570u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f20 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f20 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10570u) goto L_08B10570;
    return;
L_08B10570:
{
    float f14 = hot_regs.f14;
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(16));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(0u);
    { const float fs = f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    hot_regs.f12 = hot_regs.f20 + f14;
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08B1068C;
      }
      goto L_08B10598;
    }
}
L_08B10598:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(336));
    hot_regs.g31 = (0x08B105A4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B105A4u) goto L_08B105A4;
    return;
L_08B105A4:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(336)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B105BCu);
    hot_regs.f20 = hot_regs.f13 - hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B105BCu) goto L_08B105BC;
    return;
L_08B105BC:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(340)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f20; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    hot_regs.f22 = hot_regs.f15 - hot_regs.f14;
    { const float fs = hot_regs.f22; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = ctx.fpr[16] + hot_regs.f13;
    ctx.fpr[24] = std::sqrt(hot_regs.f12);
    hot_regs.g31 = (0x08B105E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 22u, 0x08960240u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B105E0u) goto L_08B105E0;
    return;
L_08B105E0:
    hot_regs.g31 = (0x08B105E8u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 22u, 0x08960240u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B105E8u) goto L_08B105E8;
    return;
L_08B105E8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f26 = ctx.fpr[26];
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(4)));
    { const float fs = f26; const float ft = f26; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f13 = f15 + f16;
    f12 = std::sqrt(f13);
    hot_regs.g4 = (16128u << 16u);
    { const float fs = hot_regs.f20; const float ft = f26; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f15 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f22; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    { const float fs = ctx.fpr[24]; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f14 = f17 + f14;
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((f14 <= f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
      if (branch_taken) {
          goto L_08B1068C;
      }
      goto L_08B10628;
    }
}
L_08B10628:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(368));
    hot_regs.g31 = (0x08B10634u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10634u) goto L_08B10634;
    return;
L_08B10634:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16704u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B1068C;
      }
      goto L_08B10678;
    }
L_08B10678:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(512), g4);
    hot_regs.g4 = g4;
    goto L_08B1068C;
}
L_08B1068C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1073C;
      }
      goto L_08B10698;
    }
L_08B10698:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    hot_regs.g5 = (0u | 9u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B1073C;
      }
      goto L_08B106AC;
    }
}
L_08B106AC:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(400));
    hot_regs.g31 = (0x08B106B8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B106B8u) goto L_08B106B8;
    return;
L_08B106B8:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(384));
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
    hot_regs.g4 = (16752u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B1073C;
      }
      goto L_08B106FC;
    }
L_08B106FC:
    hot_regs.g31 = (0x08B10704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10704u) goto L_08B10704;
    return;
L_08B10704:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B10728;
      }
      goto L_08B1070C;
    }
L_08B1070C:
    hot_regs.g31 = (0x08B10714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10714u) goto L_08B10714;
    return;
L_08B10714:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B10720u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 587u, 0x08A66C04u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10720u) goto L_08B10720;
    return;
L_08B10720:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1073C;
      }
      goto L_08B10728;
    }
L_08B10728:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(512), g4);
    hot_regs.g4 = g4;
    goto L_08B1073C;
}
L_08B1073C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(618))))));
    g4 = (g4 & 32u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B10784;
      }
      goto L_08B1074C;
    }
}
L_08B1074C:
    hot_regs.g31 = (0x08B10754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10754u) goto L_08B10754;
    return;
L_08B10754:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g6 = (16320u << 16u);
    g4 = (g4 & hot_regs.g6);
    g5 = (hot_regs.g2 & 65535u);
    g4 = (g4 >> 22u);
    g4 = (g5 ^ g4);
    g4 = (g4 & 255u);
    g5 = (0u | 173u);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B10784;
      }
      goto L_08B1077C;
    }
}
L_08B1077C:
    hot_regs.g4 = (0u | 45u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(700), hot_regs.g4);
    goto L_08B10784;
L_08B10784:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16256u << 16u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(533))))));
    hot_regs.f14 = std::bit_cast<float>(g5);
    g5 = (0u | 1u);
    if (hot_regs.g4 != g5) {
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g5 = g5;
        goto L_08B107E0;
    }
    goto L_08B1079C;
}
L_08B1079C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(536))))));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    if (hot_regs.g5 == 0u) {
    g4 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    hot_regs.g4 = g4;
        goto L_08B107C0;
    }
    goto L_08B107AC;
}
L_08B107AC:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B107D4;
      }
      goto L_08B107B4;
    }
L_08B107B4:
    hot_regs.g4 = (16320u << 16u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
      if (branch_taken) {
          goto L_08B107DC;
      }
      goto L_08B107C0;
    }
L_08B107C0:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B107D4;
      }
      goto L_08B107C8;
    }
L_08B107C8:
    hot_regs.g4 = (16384u << 16u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
      if (branch_taken) {
          goto L_08B107DC;
      }
      goto L_08B107D4;
    }
L_08B107D4:
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    goto L_08B107DC;
L_08B107DC:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    goto L_08B107E0;
L_08B107E0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f15 = std::bit_cast<float>(0u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g4 = (15395u << 16u);
    f12 = f12 - hot_regs.f14;
    g4 = (g4 | 55050u);
    ctx.fpr[16] = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((f12 < hot_regs.f15));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_08B1080C;
    }
    goto L_08B1080C;
}
}
L_08B1080C:
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B10824;
      }
      goto L_08B1081C;
    }
L_08B1081C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(524), std::bit_cast<std::uint32_t>(hot_regs.f14));
      if (branch_taken) {
          goto L_08B10854;
      }
      goto L_08B10824;
    }
L_08B10824:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B10848;
      }
      goto L_08B10838;
    }
L_08B10838:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    f12 = f12 - hot_regs.f13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(524), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B10854;
      }
      goto L_08B10848;
    }
}
L_08B10848:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    f12 = f12 + hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(524), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08B10854;
}
L_08B10854:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B10944;
      }
      goto L_08B10864;
    }
}
L_08B10864:
    hot_regs.g31 = (0x08B1086Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B1086Cu) goto L_08B1086C;
    return;
L_08B1086C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(2320)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B10944;
      }
      goto L_08B10878;
    }
L_08B10878:
    hot_regs.g31 = (0x08B10880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10880u) goto L_08B10880;
    return;
L_08B10880:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B108C0;
      }
      goto L_08B10888;
    }
L_08B10888:
    hot_regs.g31 = (0x08B10890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10890u) goto L_08B10890;
    return;
L_08B10890:
    hot_regs.g31 = (0x08B10898u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10898u) goto L_08B10898;
    return;
L_08B10898:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = hot_regs.g2 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B108C0;
      }
      goto L_08B108A4;
    }
L_08B108A4:
    hot_regs.g31 = (0x08B108ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B108ACu) goto L_08B108AC;
    return;
L_08B108AC:
    hot_regs.g31 = (0x08B108B4u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B108B4u) goto L_08B108B4;
    return;
L_08B108B4:
    hot_regs.g4 = (0u | 2u);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B108EC;
      }
      goto L_08B108C0;
    }
L_08B108C0:
    hot_regs.g31 = (0x08B108C8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B108C8u) goto L_08B108C8;
    return;
L_08B108C8:
    hot_regs.g4 = (0u | 4u);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B10944;
      }
      goto L_08B108D4;
    }
L_08B108D4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(1000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(512), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B10944;
      }
      goto L_08B108EC;
    }
}
L_08B108EC:
    hot_regs.g31 = (0x08B108F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B108F4u) goto L_08B108F4;
    return;
L_08B108F4:
    hot_regs.g31 = (0x08B108FCu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B108FCu) goto L_08B108FC;
    return;
L_08B108FC:
    hot_regs.g4 = (0u | 4u);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B10944;
      }
      goto L_08B10908;
    }
L_08B10908:
    hot_regs.g31 = (0x08B10910u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10910u) goto L_08B10910;
    return;
L_08B10910:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = hot_regs.g2 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B10930;
      }
      goto L_08B1091C;
    }
L_08B1091C:
    hot_regs.g31 = (0x08B10924u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10924u) goto L_08B10924;
    return;
L_08B10924:
    hot_regs.g4 = (0u | 2u);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B10944;
      }
      goto L_08B10930;
    }
L_08B10930:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(512), g4);
    hot_regs.g4 = g4;
    goto L_08B10944;
}
L_08B10944:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(476)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(480)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(484)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(488)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(492)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(496)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(500)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(504)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(512));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B1096C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f17 = ctx.fpr[17];
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(320)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(324)));
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f17 = f14 + f15;
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    f17 = std::sqrt(f17);
    g6 = (15820u << 16u);
    g6 = (g6 | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(g6);
    ctx.set_fpu_condition((f17 < ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[17] = f17;
      if (branch_taken) {
          goto L_08B109D8;
      }
      goto L_08B109B8;
    }
}
}
L_08B109B8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g5 | 0u);
    hot_regs.f13 = hot_regs.f13 / ctx.fpr[17];
    g5 = (g8 + static_cast<std::uint32_t>(-1));
    hot_regs.f12 = hot_regs.f12 / ctx.fpr[17];
    { const bool branch_taken = g8 != 0u;
    hot_regs.g6 = (g5 | 0u);
    hot_regs.g5 = g5;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08B109E0;
      }
      goto L_08B109D0;
    }
}
L_08B109D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B10CDC;
      }
      goto L_08B109D8;
    }
L_08B109D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B10CDC;
      }
      goto L_08B109E0;
    }
L_08B109E0:
{
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f17 = ctx.fpr[17];
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g15 = ctx.gpr[15];
    std::uint32_t g24 = ctx.gpr[24];
    g8 = (16948u << 16u);
    f14 = std::bit_cast<float>(g8);
    g15 = (hot_regs.g5 << 5u);
    { const float fs = f17; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    g8 = (16800u << 16u);
    f15 = std::bit_cast<float>(g8);
    g24 = (0u + g15);
    g15 = (g15 << 6u);
    g24 = (g24 + g15);
    f17 = f17 + f15;
    g15 = (16204u << 16u);
    g15 = (g15 | 52429u);
    ctx.fpr[19] = std::bit_cast<float>(0u);
    g8 = (15692u << 16u);
    g8 = (g8 | 52429u);
    f15 = std::bit_cast<float>(g15);
    ctx.gpr[14] = (0u | 6u);
    g15 = (16179u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(g8);
    g15 = (g15 | 13107u);
    f14 = std::bit_cast<float>(g15);
    ctx.gpr[13] = (0u | 32u);
    g15 = (16544u << 16u);
    ctx.gpr[12] = (0u | 48u);
    ctx.fpr[18] = std::bit_cast<float>(g15);
    ctx.gpr[3] = (0u | 1u);
    hot_regs.g2 = (0u | 2u);
    ctx.gpr[11] = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    ctx.gpr[10] = (0u | 9u);
    ctx.gpr[9] = (0u | 10u);
    g8 = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[8] = g8;
    ctx.gpr[15] = g15;
    ctx.gpr[24] = g24;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[17] = f17;
    goto L_08B10A5C;
}
}
L_08B10A5C:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) < 0;
    // nop
      if (branch_taken) {
          goto L_08B10A74;
      }
      goto L_08B10A64;
    }
L_08B10A64:
{
    std::uint32_t g15 = ctx.gpr[15];
    g15 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(8)));
    g15 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g15) ? 1u : 0u);
    if (g15 != 0u) {
    g15 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(4)));
    ctx.gpr[15] = g15;
        goto L_08B10A7C;
    }
    goto L_08B10A74;
}
L_08B10A74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B10A9C;
      }
      goto L_08B10A7C;
    }
L_08B10A7C:
{
    std::uint32_t g15 = ctx.gpr[15];
    g15 = (g15 + hot_regs.g5);
    g15 = (aot_mem.aot_load8(g15 + static_cast<std::uint32_t>(0)));
    g15 = (g15 & 128u);
    if (g15 == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[15] = g15;
        goto L_08B10A98;
    }
    goto L_08B10A90;
}
L_08B10A90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B10A9C;
      }
      goto L_08B10A98;
    }
L_08B10A98:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[24]);
    goto L_08B10A9C;
L_08B10A9C:
    ctx.gpr[15] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[15] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B10CC8;
      }
      goto L_08B10AA8;
    }
L_08B10AA8:
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[25] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B10ABC;
      }
      goto L_08B10AB4;
    }
L_08B10AB4:
    { const bool branch_taken = ctx.gpr[25] != ctx.gpr[14];
    // nop
      if (branch_taken) {
          goto L_08B10CC8;
      }
      goto L_08B10ABC;
    }
L_08B10ABC:
{
    std::uint32_t g17 = ctx.gpr[17];
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(72)));
    g17 = (ctx.gpr[25] & 496u);
    if (g17 == ctx.gpr[13]) {
    g17 = (aot_mem.aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(612)));
    ctx.gpr[17] = g17;
        goto L_08B10AD8;
    }
    goto L_08B10ACC;
}
L_08B10ACC:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_08B10CC8;
      }
      goto L_08B10AD4;
    }
L_08B10AD4:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(612)));
    goto L_08B10AD8;
L_08B10AD8:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B10CC8;
      }
      goto L_08B10AE0;
    }
L_08B10AE0:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[18] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B10CC8;
      }
      goto L_08B10AF0;
    }
L_08B10AF0:
    { const bool branch_taken = ctx.gpr[16] == hot_regs.g4;
    ctx.gpr[16] = (ctx.gpr[17] & 2u);
      if (branch_taken) {
          goto L_08B10CC8;
      }
      goto L_08B10AF8;
    }
L_08B10AF8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[16] = (ctx.gpr[17] & 4u);
      if (branch_taken) {
          goto L_08B10CC8;
      }
      goto L_08B10B00;
    }
L_08B10B00:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B10CC8;
      }
      goto L_08B10B08;
    }
L_08B10B08:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(532))))));
    { const bool branch_taken = g16 == hot_regs.g2;
    g16 = (ctx.gpr[15] + static_cast<std::uint32_t>(48));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08B10CC8;
      }
      goto L_08B10B14;
    }
}
L_08B10B14:
{
    float f0 = ctx.fpr[0];
    f0 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    f0 = f0 - ctx.fpr[2];
    ctx.set_fpu_condition((f0 < ctx.fpr[19]));
    // nop
    if (ctx.fpu_condition()) {
    f0 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f0) ^ 0x80000000u);
    ctx.fpr[0] = f0;
        goto L_08B10B30;
    }
    goto L_08B10B30;
}
L_08B10B30:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B10CC8;
      }
      goto L_08B10B40;
    }
L_08B10B40:
{
    float f0 = ctx.fpr[0];
    float f1 = ctx.fpr[1];
    float f3 = ctx.fpr[3];
    float f4 = ctx.fpr[4];
    float f5 = ctx.fpr[5];
    f4 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    f0 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    f3 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    f4 = f4 - f0;
    f3 = f3 - ctx.fpr[2];
    { const float fs = f4; const float ft = f4; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f1 = std::bit_cast<float>(0x7FC00000u); else f1 = fs * ft; }
    { const float fs = f3; const float ft = f3; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f5 = std::bit_cast<float>(0x7FC00000u); else f5 = fs * ft; }
    f0 = f1 + f5;
    f0 = std::sqrt(f0);
    ctx.set_fpu_condition((f0 < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    ctx.fpr[0] = f0;
    ctx.fpr[1] = f1;
    ctx.fpr[3] = f3;
    ctx.fpr[4] = f4;
    ctx.fpr[5] = f5;
      if (branch_taken) {
          goto L_08B10CC8;
      }
      goto L_08B10B78;
    }
}
L_08B10B78:
{
    float f1 = ctx.fpr[1];
    float f2 = ctx.fpr[2];
    float f5 = ctx.fpr[5];
    float f6 = ctx.fpr[6];
    f1 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(320)));
    f2 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(324)));
    { const float fs = f1; const float ft = f1; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f5 = std::bit_cast<float>(0x7FC00000u); else f5 = fs * ft; }
    { const float fs = f2; const float ft = f2; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f6 = std::bit_cast<float>(0x7FC00000u); else f6 = fs * ft; }
    f5 = f5 + f6;
    f5 = std::sqrt(f5);
    ctx.set_fpu_condition((f5 <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    ctx.fpr[1] = f1;
    ctx.fpr[2] = f2;
    ctx.fpr[5] = f5;
    ctx.fpr[6] = f6;
      if (branch_taken) {
          goto L_08B10CC8;
      }
      goto L_08B10BA0;
    }
}
L_08B10BA0:
{
    float f0 = ctx.fpr[0];
    float f5 = ctx.fpr[5];
    float f6 = ctx.fpr[6];
    { const float fs = ctx.fpr[4]; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f5 = std::bit_cast<float>(0x7FC00000u); else f5 = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f6 = std::bit_cast<float>(0x7FC00000u); else f6 = fs * ft; }
    f5 = f5 + f6;
    f0 = f5 / f0;
    ctx.set_fpu_condition((f0 <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    ctx.fpr[0] = f0;
    ctx.fpr[5] = f5;
    ctx.fpr[6] = f6;
      if (branch_taken) {
          goto L_08B10CC8;
      }
      goto L_08B10BC0;
    }
}
L_08B10BC0:
    ctx.set_fpu_condition((ctx.fpr[0] <= hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[15] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08B10C90;
      }
      goto L_08B10BD0;
    }
L_08B10BD0:
{
    float f0 = ctx.fpr[0];
    float f5 = ctx.fpr[5];
    f0 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    f5 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f13; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    { const float fs = hot_regs.f12; const float ft = f5; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f5 = std::bit_cast<float>(0x7FC00000u); else f5 = fs * ft; }
    f0 = f0 + f5;
    ctx.set_fpu_condition((f0 <= hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    ctx.fpr[0] = f0;
    ctx.fpr[5] = f5;
        goto L_08B10C58;
    }
    goto L_08B10BF4;
}
L_08B10BF4:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(534))))));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08B10C48;
      }
      goto L_08B10C00;
    }
L_08B10C00:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08B10C48;
      }
      goto L_08B10C08;
    }
L_08B10C08:
{
    float f0 = ctx.fpr[0];
    float f2 = ctx.fpr[2];
    { const float fs = ctx.fpr[4]; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f2 = std::bit_cast<float>(0x7FC00000u); else f2 = fs * ft; }
    f0 = f0 - f2;
    ctx.set_fpu_condition((f0 <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    ctx.fpr[0] = f0;
    ctx.fpr[2] = f2;
      if (branch_taken) {
          goto L_08B10C34;
      }
      goto L_08B10C24;
    }
}
L_08B10C24:
{
    std::uint32_t g25 = ctx.gpr[25];
    aot_mem.aot_store8(ctx.gpr[15] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(ctx.gpr[10]));
    g25 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    { const bool branch_taken = 0u == 0u;
    g25 = (g25 + static_cast<std::uint32_t>(2000));
    ctx.gpr[25] = g25;
      if (branch_taken) {
          goto L_08B10C40;
      }
      goto L_08B10C34;
    }
}
L_08B10C34:
{
    std::uint32_t g25 = ctx.gpr[25];
    aot_mem.aot_store8(ctx.gpr[15] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(ctx.gpr[9]));
    g25 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g25 = (g25 + static_cast<std::uint32_t>(2000));
    ctx.gpr[25] = g25;
    goto L_08B10C40;
}
L_08B10C40:
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(512), ctx.gpr[25]);
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(72)));
    goto L_08B10C48;
L_08B10C48:
{
    std::uint32_t g25 = ctx.gpr[25];
    g25 = (g25 & ctx.gpr[8]);
    g25 = (g25 | 48u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(72), g25);
    ctx.gpr[25] = g25;
      if (branch_taken) {
          goto L_08B10CC8;
      }
      goto L_08B10C58;
    }
}
L_08B10C58:
{
    float f0 = ctx.fpr[0];
    float f2 = ctx.fpr[2];
    { const float fs = f2; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f2 = std::bit_cast<float>(0x7FC00000u); else f2 = fs * ft; }
    f0 = f0 + f2;
    ctx.set_fpu_condition((f0 < ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    ctx.fpr[0] = f0;
    ctx.fpr[2] = f2;
      if (branch_taken) {
          goto L_08B10CC8;
      }
      goto L_08B10C70;
    }
}
L_08B10C70:
    ctx.gpr[25] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(534))))));
    { const bool branch_taken = ctx.gpr[25] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B10CC8;
      }
      goto L_08B10C7C;
    }
L_08B10C7C:
{
    std::uint32_t g25 = ctx.gpr[25];
    aot_mem.aot_store8(ctx.gpr[15] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(ctx.gpr[3]));
    g25 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g25 = (g25 + static_cast<std::uint32_t>(2000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(512), g25);
    ctx.gpr[25] = g25;
      if (branch_taken) {
          goto L_08B10CC8;
      }
      goto L_08B10C90;
    }
}
L_08B10C90:
{
    float f0 = ctx.fpr[0];
    float f2 = ctx.fpr[2];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    { const float fs = f2; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f2 = std::bit_cast<float>(0x7FC00000u); else f2 = fs * ft; }
    f0 = f0 + f2;
    ctx.set_fpu_condition((f0 < ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    ctx.fpr[0] = f0;
    ctx.fpr[2] = f2;
      if (branch_taken) {
          goto L_08B10CC8;
      }
      goto L_08B10CAC;
    }
}
L_08B10CAC:
    ctx.gpr[25] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(534))))));
    { const bool branch_taken = ctx.gpr[25] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B10CC8;
      }
      goto L_08B10CB8;
    }
L_08B10CB8:
{
    std::uint32_t g25 = ctx.gpr[25];
    aot_mem.aot_store8(ctx.gpr[15] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(ctx.gpr[3]));
    g25 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g25 = (g25 + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(512), g25);
    ctx.gpr[25] = g25;
    goto L_08B10CC8;
}
L_08B10CC8:
{
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[15] = (g5 | 0u);
    g5 = (hot_regs.g6 + static_cast<std::uint32_t>(-1));
    hot_regs.g6 = (g5 | 0u);
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.gpr[24] = (ctx.gpr[24] + static_cast<std::uint32_t>(-2080));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B10A5C;
      }
      goto L_08B10CDC;
    }
}
L_08B10CDC:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B10CF0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08B10D14u);
    ctx.gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10D14u) goto L_08B10D14;
    return;
L_08B10D14:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 2u);
    { const bool branch_taken = hot_regs.g2 != g4;
    g4 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B10D40;
      }
      goto L_08B10D20;
    }
}
L_08B10D20:
    hot_regs.g31 = (0x08B10D28u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 397u, 0x08806C5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10D28u) goto L_08B10D28;
    return;
L_08B10D28:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (65280u << 16u);
    g4 = (hot_regs.g2 & g4);
    hot_regs.g5 = (43008u << 16u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B10D40;
      }
      goto L_08B10D3C;
    }
}
L_08B10D3C:
    ctx.gpr[18] = (0u | 1u);
    goto L_08B10D40;
L_08B10D40:
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
L_08B10D5C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08B10D78u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
    goto L_08B10CF0;
}
L_08B10D78:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B10DC8;
      }
      goto L_08B10D80;
    }
L_08B10D80:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B10D8Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 274u, 0x08B15604u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10D8Cu) goto L_08B10D8C;
    return;
L_08B10D8C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B10DC0;
      }
      goto L_08B10D94;
    }
L_08B10D94:
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (2237u << 16u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B10DA8u);
    ctx.gpr[16] = (hot_regs.g6 + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 276u, 0x08B15624u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10DA8u) goto L_08B10DA8;
    return;
L_08B10DA8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08B10DB8u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10DB8u) goto L_08B10DB8;
    return;
L_08B10DB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B10DEC;
      }
      goto L_08B10DC0;
    }
L_08B10DC0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B10DEC;
      }
      goto L_08B10DC8;
    }
L_08B10DC8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B10DD4u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    goto L_08B10E00;
L_08B10DD4:
    hot_regs.g5 = (hot_regs.g2 >> 16u);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (hot_regs.g2 & 65535u);
    hot_regs.g31 = (0x08B10DECu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10DECu) goto L_08B10DEC;
    return;
L_08B10DEC:
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
L_08B10E00:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08B10E20u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 397u, 0x08806C5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10E20u) goto L_08B10E20;
    return;
L_08B10E20:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(2260));
    hot_regs.g31 = (0x08B10E30u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 249u, 0x0889D344u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10E30u) goto L_08B10E30;
    return;
L_08B10E30:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B10E3Cu);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10E3Cu) goto L_08B10E3C;
    return;
L_08B10E3C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B10E58;
      }
      goto L_08B10E44;
    }
L_08B10E44:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B10E50u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10E50u) goto L_08B10E50;
    return;
L_08B10E50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B10EA0;
      }
      goto L_08B10E58;
    }
L_08B10E58:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B10E64u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10E64u) goto L_08B10E64;
    return;
L_08B10E64:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B10E70u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 453u, 0x088070DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10E70u) goto L_08B10E70;
    return;
L_08B10E70:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B10E7Cu);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10E7Cu) goto L_08B10E7C;
    return;
L_08B10E7C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B10E94;
      }
      goto L_08B10E84;
    }
L_08B10E84:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B10E90u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 397u, 0x08806C5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10E90u) goto L_08B10E90;
    return;
L_08B10E90:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    goto L_08B10E94;
L_08B10E94:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B10EA0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10EA0u) goto L_08B10EA0;
    return;
L_08B10EA0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[18] | 0u);
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
L_08B10EBC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g6 << 16u);
    hot_regs.g5 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    hot_regs.g6 = (43008u << 16u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g5 = (hot_regs.g4 | hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08B10EF4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 452u, 0x088070BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10EF4u) goto L_08B10EF4;
    return;
L_08B10EF4:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(2260));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B10F04u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 249u, 0x0889D344u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10F04u) goto L_08B10F04;
    return;
L_08B10F04:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B10F10u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10F10u) goto L_08B10F10;
    return;
L_08B10F10:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B10F5C;
      }
      goto L_08B10F18;
    }
L_08B10F18:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B10F24u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10F24u) goto L_08B10F24;
    return;
L_08B10F24:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B10F30u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 234u, 0x0889D28Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10F30u) goto L_08B10F30;
    return;
L_08B10F30:
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(2272));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B10F40u);
    hot_regs.g6 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10F40u) goto L_08B10F40;
    return;
L_08B10F40:
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(2280));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B10F50u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10F50u) goto L_08B10F50;
    return;
L_08B10F50:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B10F5Cu);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 486u, 0x08807414u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10F5Cu) goto L_08B10F5C;
    return;
L_08B10F5C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B10F68u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10F68u) goto L_08B10F68;
    return;
L_08B10F68:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B10F74u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10F74u) goto L_08B10F74;
    return;
L_08B10F74:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B10F80u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10F80u) goto L_08B10F80;
    return;
L_08B10F80:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B10F8Cu);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 492u, 0x08807510u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10F8Cu) goto L_08B10F8C;
    return;
L_08B10F8C:
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
L_08B10FA0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), hot_regs.g31);
    hot_regs.g31 = (0x08B10FCCu);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g29 = g29;
    goto L_08B10D5C;
}
L_08B10FCC:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1101C;
      }
      goto L_08B10FD8;
    }
L_08B10FD8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    hot_regs.g31 = (0x08B10FECu);
    ctx.gpr[20] = (ctx.gpr[18] + hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 639u, 0x08823710u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10FECu) goto L_08B10FEC;
    return;
L_08B10FEC:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08B10FFCu);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B10FFCu) goto L_08B10FFC;
    return;
L_08B10FFC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08B11024;
      }
      goto L_08B11004;
    }
L_08B11004:
    hot_regs.g31 = (0x08B1100Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 19u, 0x08824204u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B1100Cu) goto L_08B1100C;
    return;
L_08B1100C:
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1105C;
      }
      goto L_08B1101C;
    }
L_08B1101C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B1106C;
      }
      goto L_08B11024;
    }
L_08B11024:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
        goto L_08B11050;
    }
    goto L_08B11030;
}
L_08B11030:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g31 = (0x08B11040u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B11040u) goto L_08B11040;
    return;
L_08B11040:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(g18 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_08B11050;
}
L_08B11050:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = g4;
    goto L_08B1105C;
}
L_08B1105C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B11068u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 313u, 0x08931AD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B11068u) goto L_08B11068;
    return;
L_08B11068:
    hot_regs.g2 = (ctx.gpr[19] | 0u);
    goto L_08B1106C;
L_08B1106C:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_08B1108C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    hot_regs.g31 = (0x08B110BCu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 274u, 0x08B15604u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B110BCu) goto L_08B110BC;
    return;
L_08B110BC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B110F0;
      }
      goto L_08B110C4;
    }
L_08B110C4:
    hot_regs.g6 = (2237u << 16u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g31 = (0x08B110D8u);
    ctx.gpr[17] = (hot_regs.g6 + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 276u, 0x08B15624u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B110D8u) goto L_08B110D8;
    return;
L_08B110D8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08B110E8u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B110E8u) goto L_08B110E8;
    return;
L_08B110E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08B11100;
      }
      goto L_08B110F0;
    }
L_08B110F0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B110FCu);
    hot_regs.g5 = (0u | 1u);
    goto L_08B10D5C;
L_08B110FC:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    goto L_08B11100;
L_08B11100:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08B11110;
      }
      goto L_08B11108;
    }
L_08B11108:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08B11218;
      }
      goto L_08B11110;
    }
L_08B11110:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    hot_regs.g31 = (0x08B11124u);
    ctx.gpr[21] = (ctx.gpr[17] + hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 666u, 0x08A7FAA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B11124u) goto L_08B11124;
    return;
L_08B11124:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08B11134u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B11134u) goto L_08B11134;
    return;
L_08B11134:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B11178;
      }
      goto L_08B1113C;
    }
L_08B1113C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
        goto L_08B11168;
    }
    goto L_08B11148;
}
L_08B11148:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08B11158u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B11158u) goto L_08B11158;
    return;
L_08B11158:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_08B11168;
}
L_08B11168:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(194)));
    g18 = (g4 ^ 5u);
    { const bool branch_taken = 0u == 0u;
    g18 = (g18 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08B11218;
      }
      goto L_08B11178;
    }
}
L_08B11178:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    hot_regs.g31 = (0x08B1118Cu);
    ctx.gpr[21] = (ctx.gpr[17] + hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 639u, 0x08823710u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B1118Cu) goto L_08B1118C;
    return;
L_08B1118C:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08B1119Cu);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B1119Cu) goto L_08B1119C;
    return;
L_08B1119C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B11218;
      }
      goto L_08B111A4;
    }
L_08B111A4:
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08B111B8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B111B8u) goto L_08B111B8;
    return;
L_08B111B8:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B11218;
      }
      goto L_08B111C4;
    }
L_08B111C4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
        goto L_08B111F0;
    }
    goto L_08B111D0;
}
L_08B111D0:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(17));
    hot_regs.g31 = (0x08B111E0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B111E0u) goto L_08B111E0;
    return;
L_08B111E0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_08B111F0;
}
L_08B111F0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (16256u << 16u);
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(178)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B11218;
      }
      goto L_08B11214;
    }
}
}
L_08B11214:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08B11218;
L_08B11218:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B11224u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B11224u) goto L_08B11224;
    return;
L_08B11224:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B1124C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
        goto L_08B11270;
    }
    goto L_08B11260;
}
L_08B11260:
    hot_regs.g31 = (0x08B11268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B11268u) goto L_08B11268;
    return;
L_08B11268:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
    goto L_08B11270;
}
L_08B11270:
    hot_regs.g31 = (0x08B11278u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B11278u) goto L_08B11278;
    return;
L_08B11278:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g6 = (2232u << 16u);
      if (branch_taken) {
          goto L_08B11294;
      }
      goto L_08B11284;
    }
L_08B11284:
    hot_regs.g31 = (0x08B1128Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B1128Cu) goto L_08B1128C;
    return;
L_08B1128C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    hot_regs.g6 = (2232u << 16u);
    goto L_08B11294;
L_08B11294:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08B112A8u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(31656));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 328u, 0x0889D80Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B112A8u) goto L_08B112A8;
    return;
L_08B112A8:
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
L_08B112B4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[16] = (hot_regs.g7 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B112F0;
      }
      goto L_08B112E8;
    }
}
L_08B112E8:
    hot_regs.g31 = (0x08B112F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B112F0u) goto L_08B112F0;
    return;
L_08B112F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(2260));
    ctx.gpr[20] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x08B11304u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 249u, 0x0889D344u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B11304u) goto L_08B11304;
    return;
L_08B11304:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08B11310u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B11310u) goto L_08B11310;
    return;
L_08B11310:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B11350;
      }
      goto L_08B11318;
    }
L_08B11318:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[19] << 16u);
    hot_regs.g6 = (43008u << 16u);
    hot_regs.g7 = (ctx.gpr[17] << 16u);
    ctx.gpr[16] = (hot_regs.g5 | hot_regs.g6);
    ctx.gpr[19] = (hot_regs.g7 | hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (ctx.gpr[18] & 65535u);
    ctx.gpr[19] = (ctx.gpr[19] | hot_regs.g4);
    ctx.gpr[16] = (ctx.gpr[16] | hot_regs.g5);
    hot_regs.g31 = (0x08B11348u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 424u, 0x08806DA8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B11348u) goto L_08B11348;
    return;
L_08B11348:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08B11364;
      }
      goto L_08B11350;
    }
L_08B11350:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08B1135Cu);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B1135Cu) goto L_08B1135C;
    return;
L_08B1135C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B113F0;
      }
      goto L_08B11364;
    }
L_08B11364:
    hot_regs.g31 = (0x08B1136Cu);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 540u, 0x088078B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B1136Cu) goto L_08B1136C;
    return;
L_08B1136C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B113E4;
      }
      goto L_08B11374;
    }
L_08B11374:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08B11380u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 397u, 0x08806C5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B11380u) goto L_08B11380;
    return;
L_08B11380:
    { const bool branch_taken = hot_regs.g2 != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08B113D0;
      }
      goto L_08B11388;
    }
L_08B11388:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08B11394u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 397u, 0x08806C5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B11394u) goto L_08B11394;
    return;
L_08B11394:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08B113A4u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B113A4u) goto L_08B113A4;
    return;
L_08B113A4:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08B113B0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 452u, 0x088070BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B113B0u) goto L_08B113B0;
    return;
L_08B113B0:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08B113BCu);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B113BCu) goto L_08B113BC;
    return;
L_08B113BC:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08B113C8u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 452u, 0x088070BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B113C8u) goto L_08B113C8;
    return;
L_08B113C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B113DC;
      }
      goto L_08B113D0;
    }
L_08B113D0:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08B113DCu);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B113DCu) goto L_08B113DC;
    return;
L_08B113DC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08B11364;
      }
      goto L_08B113E4;
    }
L_08B113E4:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08B113F0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B113F0u) goto L_08B113F0;
    return;
L_08B113F0:
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
L_08B11410:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(40)));
    hot_regs.g2 = (0u | 0u);
    if (g4 != 0u) {
    hot_regs.g2 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
        goto L_08B11420;
    }
    goto L_08B11420;
}
L_08B11420:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B11428:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(2288));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08B1144Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B1144Cu) goto L_08B1144C;
    return;
L_08B1144C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B1145C;
      }
      goto L_08B11454;
    }
L_08B11454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1147C;
      }
      goto L_08B1145C;
    }
L_08B1145C:
    hot_regs.g31 = (0x08B11464u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B11464u) goto L_08B11464;
    return;
L_08B11464:
    hot_regs.g31 = (0x08B1146Cu);
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B1146Cu) goto L_08B1146C;
    return;
L_08B1146C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), hot_regs.g2);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08B1147Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B1147Cu) goto L_08B1147C;
    return;
L_08B1147C:
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
L_08B11490:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(64)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B114C4;
      }
      goto L_08B114B0;
    }
}
L_08B114B0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B114CC;
      }
      goto L_08B114BC;
    }
L_08B114BC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
      if (branch_taken) {
          goto L_08B114D8;
      }
      goto L_08B114C4;
    }
L_08B114C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B114F0;
      }
      goto L_08B114CC;
    }
L_08B114CC:
    hot_regs.g31 = (0x08B114D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B114D4u) goto L_08B114D4;
    return;
L_08B114D4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B114D8;
L_08B114D8:
    hot_regs.g31 = (0x08B114E0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 690u, 0x0893ED4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B114E0u) goto L_08B114E0;
    return;
L_08B114E0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    hot_regs.g31 = (0x08B114ECu);
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B114ECu) goto L_08B114EC;
    return;
L_08B114EC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    goto L_08B114F0;
L_08B114F0:
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
L_08B11504:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(64)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1150C:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(60)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B11514:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (2280u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 + static_cast<std::uint32_t>(13608));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08B11534u);
    hot_regs.g5 = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 451u, 0x088DF69Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B11534u) goto L_08B11534;
    return;
L_08B11534:
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-31808));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), hot_regs.g5);
    hot_regs.g31 = (0x08B11550u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(2304));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B11550u) goto L_08B11550;
    return;
L_08B11550:
    hot_regs.g5 = (2232u << 16u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(10480));
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (0u | 40u);
    hot_regs.g31 = (0x08B11568u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(31680));
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 279u, 0x08A312B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B11568u) goto L_08B11568;
    return;
L_08B11568:
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
L_08B11578:
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
L_08B115A0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g7 | 0u);
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    ctx.gpr[18] = (g5 | 0u);
    hot_regs.g6 = (g4 | 0u);
    g4 = (2236u << 16u);
    g5 = (g4 + static_cast<std::uint32_t>(32304));
    g5 = (g5 + static_cast<std::uint32_t>(2656));
    hot_regs.g31 = (0x08B115D8u);
    g4 = (g29 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
    goto L_08B11578;
}
L_08B115D8:
{
    std::uint32_t g4 = hot_regs.g4;
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    g4 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    g4 = (16256u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B116A0;
      }
      goto L_08B115FC;
    }
}
L_08B115FC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g28 = ctx.gpr[28];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(8)));
    f13 = std::bit_cast<float>(g4);
    f12 = f13 / f12;
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-8744)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (17036u << 16u);
    f16 = std::bit_cast<float>(g4);
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f16)));
    { const float fs = f12; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-8740)));
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f13; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-8744)));
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    f14 = std::bit_cast<float>(hot_regs.g5);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-8740)));
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-16976)));
    f12 = f14 / f12;
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    hot_regs.g2 = (0u | 1u);
    { const float fs = f15; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-16976)));
    f12 = f14 / f12;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_08B116A4;
      }
      goto L_08B116A0;
    }
}
}
L_08B116A0:
    hot_regs.g2 = (0u | 0u);
    goto L_08B116A4;
L_08B116A4:
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
L_08B116BC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    ctx.gpr[16] = (g5 | 0u);
    hot_regs.g6 = (g4 | 0u);
    g4 = (2236u << 16u);
    g5 = (g4 + static_cast<std::uint32_t>(32304));
    g5 = (g5 + static_cast<std::uint32_t>(2656));
    hot_regs.g31 = (0x08B116E4u);
    g4 = (g29 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
    goto L_08B11578;
}
L_08B116E4:
{
    std::uint32_t g4 = hot_regs.g4;
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    g4 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    g4 = (16256u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B11754;
      }
      goto L_08B11708;
    }
}
L_08B11708:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    f13 = std::bit_cast<float>(g4);
    f12 = f13 / f12;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    hot_regs.g2 = (0u | 1u);
    f16 = std::bit_cast<float>(g4);
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f16)));
    { const float fs = f12; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_08B11758;
      }
      goto L_08B11754;
    }
}
}
L_08B11754:
    hot_regs.g2 = (0u | 0u);
    goto L_08B11758;
L_08B11758:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B11768:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    f12 = f12 - f16;
    f13 = f13 - ctx.fpr[17];
    f14 = f14 - f16;
    f15 = f15 - ctx.fpr[17];
    { const float fs = f12; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f14; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    { const float fs = f15; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    hot_regs.g4 = (0u | 0u);
    f12 = f12 - f13;
    f14 = f14 - f15;
    f16 = std::bit_cast<float>(0u);
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((f12 < f16));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.g4 = (0u | 1u);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
        goto L_08B117AC;
    }
    goto L_08B117AC;
}
L_08B117AC:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B117B4:
{
    float f12 = hot_regs.f12;
    float f26 = ctx.fpr[26];
    float f28 = ctx.fpr[28];
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f26));
    f26 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f28));
    f28 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.set_fpu_condition((f26 <= f28));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    ctx.fpr[26] = f26;
    ctx.fpr[28] = f28;
      if (branch_taken) {
          goto L_08B11838;
      }
      goto L_08B117FC;
    }
}
}
L_08B117FC:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B11838;
      }
      goto L_08B1180C;
    }
L_08B1180C:
    ctx.set_fpu_condition((ctx.fpr[26] < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B11838;
      }
      goto L_08B1181C;
    }
L_08B1181C:
{
    float f13 = hot_regs.f13;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    f13 = std::bit_cast<float>(hot_regs.g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    ctx.set_fpu_condition((ctx.fpr[24] < f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08B11930;
      }
      goto L_08B11838;
    }
}
L_08B11838:
{
    float f28 = ctx.fpr[28];
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f28));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f28));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f28));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08B1185Cu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_08B11768;
}
L_08B1185C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B11928;
      }
      goto L_08B11864;
    }
L_08B11864:
{
    float f15 = hot_regs.f15;
    float f28 = ctx.fpr[28];
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f28));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f28));
    f15 = std::bit_cast<float>(hot_regs.g4);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f28));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08B11890u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f15 = f15;
    goto L_08B11768;
}
L_08B11890:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B11920;
      }
      goto L_08B11898;
    }
L_08B11898:
{
    float f12 = hot_regs.f12;
    float f15 = hot_regs.f15;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    f12 = std::bit_cast<float>(hot_regs.g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f15 = std::bit_cast<float>(hot_regs.g5);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08B118CCu);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f15 = f15;
    goto L_08B11768;
}
L_08B118CC:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B11918;
      }
      goto L_08B118D4;
    }
L_08B118D4:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    f13 = std::bit_cast<float>(hot_regs.g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    f14 = std::bit_cast<float>(hot_regs.g5);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08B11908u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_08B11768;
}
L_08B11908:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B11938;
      }
      goto L_08B11910;
    }
L_08B11910:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B1193C;
      }
      goto L_08B11918;
    }
L_08B11918:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B1193C;
      }
      goto L_08B11920;
    }
L_08B11920:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B1193C;
      }
      goto L_08B11928;
    }
L_08B11928:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B1193C;
      }
      goto L_08B11930;
    }
L_08B11930:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B1193C;
      }
      goto L_08B11938;
    }
L_08B11938:
    hot_regs.g2 = (0u | 0u);
    goto L_08B1193C;
L_08B1193C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B1195C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = ctx.fpr[16] - f12;
    f13 = ctx.fpr[17] - f13;
    { const float fs = f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 - f13;
    ctx.set_fpu_condition((f12 < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08B11988;
      }
      goto L_08B11980;
    }
}
L_08B11980:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B1198C;
      }
      goto L_08B11988;
    }
L_08B11988:
    hot_regs.g2 = (0u | 1u);
    goto L_08B1198C;
L_08B1198C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B11994:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-224));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10544)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(188), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(204), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B11A78;
      }
      goto L_08B119D0;
    }
}
L_08B119D0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[17] = (g29 + static_cast<std::uint32_t>(96));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g4 = (g4 << 2u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(112));
    g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B11A14u);
    g5 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    goto L_08B11578;
}
}
L_08B11A14:
{
    std::uint32_t g29 = hot_regs.g29;
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(16));
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(20));
    hot_regs.g31 = (0x08B11A30u);
    hot_regs.g5 = (g29 | 0u);
    goto L_08B115A0;
}
L_08B11A30:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B11A70;
      }
      goto L_08B11A38;
    }
L_08B11A38:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B11A80;
      }
      goto L_08B11A68;
    }
}
L_08B11A68:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B11A84;
      }
      goto L_08B11A70;
    }
L_08B11A70:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B11D24;
      }
      goto L_08B11A78;
    }
L_08B11A78:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B11D24;
      }
      goto L_08B11A80;
    }
L_08B11A80:
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    goto L_08B11A84;
L_08B11A84:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16230u << 16u);
    { const float fs = hot_regs.f12; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    g4 = (g4 | 26214u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.gpr[22] = (0u | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10544)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    { const float fs = f20; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    hot_regs.g4 = g4;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08B11D20;
      }
      goto L_08B11AA8;
    }
}
}
L_08B11AA8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (16217u << 16u);
    hot_regs.f22 = std::bit_cast<float>(0u);
    g4 = (g4 | 39322u);
    g21 = (2280u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(64));
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(80));
    ctx.gpr[17] = (g29 + static_cast<std::uint32_t>(48));
    g21 = (g21 + static_cast<std::uint32_t>(13936));
    hot_regs.g4 = g4;
    ctx.gpr[21] = g21;
    goto L_08B11ACC;
}
L_08B11ACC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(124)));
    { const float fs = f13; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 - f13;
    ctx.set_fpu_condition((f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08B11D0C;
      }
      goto L_08B11B08;
    }
}
}
L_08B11B08:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08B11B1Cu);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    goto L_08B11E3C;
L_08B11B1C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B11B48;
      }
      goto L_08B11B24;
    }
L_08B11B24:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08B11B38u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    goto L_08B11E3C;
L_08B11B38:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B11B50;
      }
      goto L_08B11B40;
    }
L_08B11B40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B11D0C;
      }
      goto L_08B11B48;
    }
L_08B11B48:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B11D24;
      }
      goto L_08B11B50;
    }
L_08B11B50:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    ctx.gpr[20] = (0u | 0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(86))))));
    g4 = (g4 << 2u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g4 = (g4 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(48);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(86))))));
    g4 = (g4 << 2u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g4 = (g4 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(48);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08B11BD8u);
    g5 = (hot_regs.g29 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08B116BC;
}
L_08B11BD8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B11C00;
      }
      goto L_08B11BE0;
    }
L_08B11BE0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08B11BF4u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    goto L_08B11E3C;
L_08B11BF4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B11C00;
      }
      goto L_08B11BFC;
    }
L_08B11BFC:
    ctx.gpr[20] = (0u | 1u);
    goto L_08B11C00;
L_08B11C00:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B11C54;
      }
      goto L_08B11C08;
    }
L_08B11C08:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B11C2Cu);
    hot_regs.g5 = (g29 | 0u);
    goto L_08B116BC;
}
L_08B11C2C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B11C54;
      }
      goto L_08B11C34;
    }
L_08B11C34:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08B11C48u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    goto L_08B11E3C;
L_08B11C48:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B11C54;
      }
      goto L_08B11C50;
    }
L_08B11C50:
    ctx.gpr[20] = (0u | 1u);
    goto L_08B11C54;
L_08B11C54:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B11CA8;
      }
      goto L_08B11C5C;
    }
L_08B11C5C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B11C80u);
    hot_regs.g5 = (g29 | 0u);
    goto L_08B116BC;
}
L_08B11C80:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B11CA8;
      }
      goto L_08B11C88;
    }
L_08B11C88:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08B11C9Cu);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    goto L_08B11E3C;
L_08B11C9C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B11CA8;
      }
      goto L_08B11CA4;
    }
L_08B11CA4:
    ctx.gpr[20] = (0u | 1u);
    goto L_08B11CA8;
L_08B11CA8:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B11CFC;
      }
      goto L_08B11CB0;
    }
L_08B11CB0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B11CD4u);
    hot_regs.g5 = (g29 | 0u);
    goto L_08B116BC;
}
L_08B11CD4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B11CFC;
      }
      goto L_08B11CDC;
    }
L_08B11CDC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08B11CF0u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    goto L_08B11E3C;
L_08B11CF0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B11CFC;
      }
      goto L_08B11CF8;
    }
L_08B11CF8:
    ctx.gpr[20] = (0u | 1u);
    goto L_08B11CFC;
L_08B11CFC:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B11D0C;
      }
      goto L_08B11D04;
    }
L_08B11D04:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B11D24;
      }
      goto L_08B11D0C;
    }
L_08B11D0C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g22 = ctx.gpr[22];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10544)));
    g22 = (g22 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g22) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(128));
    hot_regs.g4 = g4;
    ctx.gpr[22] = g22;
      if (branch_taken) {
          goto L_08B11ACC;
      }
      goto L_08B11D20;
    }
}
L_08B11D20:
    hot_regs.g2 = (0u | 0u);
    goto L_08B11D24;
L_08B11D24:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(196)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(204)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(208)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B11D58:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(6))))));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(8))))));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(10))))));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g6 = (2236u << 16u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(32304));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g6 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(2))))));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g6) < static_cast<std::int32_t>(hot_regs.g7) ? 1u : 0u);
    hot_regs.g7 = (16128u << 16u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g7);
      if (branch_taken) {
          goto L_08B11DFC;
      }
      goto L_08B11DDC;
    }
L_08B11DDC:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    f14 = std::bit_cast<float>(g4);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    { const float fs = f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    f12 = hot_regs.f13 - f12;
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08B11E18;
      }
      goto L_08B11DFC;
    }
}
}
L_08B11DFC:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(2))))));
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    f14 = std::bit_cast<float>(g4);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    { const float fs = f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f13 - f12;
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    goto L_08B11E18;
}
}
L_08B11E18:
    hot_regs.g4 = (17274u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.g5 = (0u | 1u);
        goto L_08B11E30;
    }
    goto L_08B11E30;
L_08B11E30:
    hot_regs.g2 = (hot_regs.g5 & 255u);
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B11E3C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g18);
    g18 = (0u | 0u);
    ctx.gpr[16] = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B11EBC;
      }
      goto L_08B11E7C;
    }
}
L_08B11E7C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08B11E80;
L_08B11E80:
{
    std::uint32_t g17 = ctx.gpr[17];
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08B11EA0u);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(12)));
    goto L_08B1195C;
}
L_08B11EA0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B11EC4;
      }
      goto L_08B11EA8;
    }
L_08B11EA8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    g18 = (g18 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08B11E80;
      }
      goto L_08B11EBC;
    }
}
L_08B11EBC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B11EC8;
      }
      goto L_08B11EC4;
    }
L_08B11EC4:
    hot_regs.g2 = (0u | 0u);
    goto L_08B11EC8;
L_08B11EC8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B11EEC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(10540), g4);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(10536), hot_regs.g5);
    g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g28 + static_cast<std::uint32_t>(2322), static_cast<std::uint16_t>(g4));
    aot_mem.aot_store16(g28 + static_cast<std::uint32_t>(2324), static_cast<std::uint16_t>(g4));
    aot_mem.aot_store16(g28 + static_cast<std::uint32_t>(2326), static_cast<std::uint16_t>(g4));
    jump_target = hot_regs.g31;
    aot_mem.aot_store16(g28 + static_cast<std::uint32_t>(2328), static_cast<std::uint16_t>(g4));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B11F0C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10544), 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B11F54;
      }
      goto L_08B11F3C;
    }
}
L_08B11F3C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(2326))))));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08B11F5C;
      }
      goto L_08B11F4C;
    }
L_08B11F4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B11F68;
      }
      goto L_08B11F54;
    }
L_08B11F54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B12200;
      }
      goto L_08B11F5C;
    }
L_08B11F5C:
{
    std::uint32_t g28 = ctx.gpr[28];
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g28 + static_cast<std::uint32_t>(2322))))));
    aot_mem.aot_store16(g28 + static_cast<std::uint32_t>(2328), static_cast<std::uint16_t>(ctx.gpr[16]));
    aot_mem.aot_store16(g28 + static_cast<std::uint32_t>(2326), static_cast<std::uint16_t>(hot_regs.g4));
    goto L_08B11F68;
}
L_08B11F68:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(2326))))));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08B12028;
      }
      goto L_08B11F74;
    }
L_08B11F74:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = (0u | 1u);
    goto L_08B11F7C;
L_08B11F7C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B12028;
      }
      goto L_08B11F84;
    }
L_08B11F84:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(2326))))));
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08B12028;
      }
      goto L_08B11F90;
    }
L_08B11F90:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10536)));
    g5 = (g5 << 4u);
    hot_regs.g31 = (0x08B11FA0u);
    g4 = (g4 + g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08B11D58;
}
L_08B11FA0:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(2326))))));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10536)));
    g6 = (hot_regs.g5 << 4u);
    { const bool branch_taken = hot_regs.g2 == 0u;
    g6 = (ctx.gpr[9] + g6);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B12010;
      }
      goto L_08B11FB4;
    }
}
L_08B11FB4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(2328))))));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[16];
    ctx.gpr[8] = (hot_regs.g5 << 4u);
      if (branch_taken) {
          goto L_08B11FD8;
      }
      goto L_08B11FC4;
    }
L_08B11FC4:
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(2322), static_cast<std::uint16_t>(hot_regs.g7));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(14))))));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(2324))))));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[9] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08B12000;
      }
      goto L_08B11FD8;
    }
L_08B11FD8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (g4 << 4u);
    g4 = (g9 + g4);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(g7));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g28 + static_cast<std::uint32_t>(2326))))));
    g9 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(10536)));
    g4 = (g4 << 4u);
    g7 = (g9 + g4);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(14))))));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g28 + static_cast<std::uint32_t>(2324))))));
    g4 = (g9 + ctx.gpr[8]);
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    ctx.gpr[9] = g9;
    goto L_08B12000;
}
L_08B12000:
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(2326), static_cast<std::uint16_t>(hot_regs.g7));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(hot_regs.g6));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(2324), static_cast<std::uint16_t>(hot_regs.g5));
      if (branch_taken) {
          goto L_08B1201C;
      }
      goto L_08B12010;
    }
L_08B12010:
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(2328), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(14))))));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(2326), static_cast<std::uint16_t>(hot_regs.g4));
    goto L_08B1201C;
L_08B1201C:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 16 ? 1u : 0u);
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08B11F7C;
      }
      goto L_08B12028;
    }
}
L_08B12028:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(2324))))));
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[16];
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10544)));
      if (branch_taken) {
          goto L_08B12104;
      }
      goto L_08B12038;
    }
L_08B12038:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (2280u << 16u);
    g20 = (g20 + static_cast<std::uint32_t>(13936));
    ctx.gpr[20] = g20;
    goto L_08B12040;
}
L_08B12040:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10536)));
    ctx.gpr[19] = (ctx.gpr[18] << 4u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 48 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    g5 = (g5 + ctx.gpr[19]);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B12080;
      }
      goto L_08B12054;
    }
}
L_08B12054:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 7u);
    hot_regs.g6 = (g4 + ctx.gpr[20]);
    g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x08B12068u);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    hot_regs.g4 = g4;
    goto L_08B1248C;
}
L_08B12068:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10536)));
    { const bool branch_taken = hot_regs.g2 == 0u;
    g5 = (g5 + ctx.gpr[19]);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B12080;
      }
      goto L_08B12074;
    }
}
L_08B12074:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10544)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10544), g4);
    hot_regs.g4 = g4;
    goto L_08B12080;
}
L_08B12080:
    hot_regs.g31 = (0x08B12088u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    goto L_08B11D58;
L_08B12088:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10536)));
    hot_regs.g6 = (hot_regs.g4 + ctx.gpr[19]);
    { const bool branch_taken = hot_regs.g2 != 0u;
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(14))))));
      if (branch_taken) {
          goto L_08B120F0;
      }
      goto L_08B12098;
    }
L_08B12098:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    hot_regs.g7 = (ctx.gpr[18] << 4u);
      if (branch_taken) {
          goto L_08B120B8;
      }
      goto L_08B120A0;
    }
L_08B120A0:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (hot_regs.g4 | 0u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(2324), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(2322))))));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = 0u == 0u;
    g19 = (g19 + hot_regs.g7);
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08B120D8;
      }
      goto L_08B120B8;
    }
}
L_08B120B8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (ctx.gpr[17] << 4u);
    g4 = (g4 + g6);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(g5));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10536)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(2322))))));
    g5 = (g6 + ctx.gpr[19]);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(14))))));
    ctx.gpr[19] = (g6 + hot_regs.g7);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08B120D8;
}
L_08B120D8:
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(hot_regs.g4));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(2322), static_cast<std::uint16_t>(hot_regs.g6));
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10544)));
      if (branch_taken) {
          goto L_08B120FC;
      }
      goto L_08B120F0;
    }
L_08B120F0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10544)));
    goto L_08B120FC;
L_08B120FC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08B12040;
      }
      goto L_08B12104;
    }
L_08B12104:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (2280u << 16u);
      if (branch_taken) {
          goto L_08B12200;
      }
      goto L_08B12114;
    }
L_08B12114:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(13936));
    ctx.gpr[21] = (g16 + static_cast<std::uint32_t>(128));
    ctx.gpr[16] = g16;
    goto L_08B1211C;
}
L_08B1211C:
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B121F0;
      }
      goto L_08B1212C;
    }
L_08B1212C:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (ctx.gpr[17] << 7u);
    g20 = (g20 + ctx.gpr[19]);
    ctx.gpr[20] = g20;
    goto L_08B12134;
}
L_08B12134:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B121E0;
      }
      goto L_08B1213C;
    }
L_08B1213C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(124)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(124)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B121E0;
      }
      goto L_08B12154;
    }
L_08B12154:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08B12160u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    goto L_08B12224;
L_08B12160:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10544)));
      if (branch_taken) {
          goto L_08B121E0;
      }
      goto L_08B12168;
    }
L_08B12168:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g4 | 0u);
    g4 = (ctx.gpr[17] | 0u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g6 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g7 = (ctx.gpr[17] << 7u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B121D0;
      }
      goto L_08B12180;
    }
}
L_08B12180:
{
    std::uint32_t g7 = hot_regs.g7;
    hot_regs.g6 = (g7 + ctx.gpr[16]);
    g7 = (g7 + ctx.gpr[21]);
    hot_regs.g7 = g7;
    goto L_08B12188;
}
L_08B12188:
    hot_regs.g5 = (0u | 0u);
    ctx.gpr[8] = (0u | 16u);
    goto L_08B12190;
L_08B12190:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g11 = ctx.gpr[11];
    g9 = (hot_regs.g7 + g5);
    ctx.gpr[10] = (aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(4)));
    g11 = (hot_regs.g6 + g5);
    aot_mem.aot_store32(g11 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(g11 + static_cast<std::uint32_t>(4), g9);
    g8 = (g8 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = g8 != 0u;
    g5 = (g5 + static_cast<std::uint32_t>(8));
    hot_regs.g5 = g5;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_08B12190;
      }
      goto L_08B121B4;
    }
}
L_08B121B4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10544)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(128));
    ctx.gpr[8] = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(128));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B12188;
      }
      goto L_08B121D0;
    }
}
L_08B121D0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10544), hot_regs.g5);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-128));
    hot_regs.g4 = (hot_regs.g5 | 0u);
    goto L_08B121E0;
L_08B121E0:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(128));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08B12134;
      }
      goto L_08B121F0;
    }
}
L_08B121F0:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08B1211C;
      }
      goto L_08B12200;
    }
}
L_08B12200:
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
L_08B12224:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g16);
    g16 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g18);
    g18 = (0u | 0u);
    ctx.gpr[17] = (g5 | 0u);
    g5 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), hot_regs.g31);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B12344;
      }
      goto L_08B1226C;
    }
}
L_08B1226C:
    hot_regs.f20 = std::bit_cast<float>(0u);
    ctx.gpr[19] = (ctx.gpr[16] + ctx.gpr[19]);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    goto L_08B12278;
L_08B12278:
    ctx.gpr[21] = (0u | 0u);
    hot_regs.g6 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08B12334;
      }
      goto L_08B12288;
    }
L_08B12288:
{
    std::uint32_t g22 = ctx.gpr[22];
    g22 = (0u | 0u);
    g22 = (ctx.gpr[17] + g22);
    ctx.gpr[22] = g22;
    goto L_08B12290;
}
L_08B12290:
{
    std::uint32_t g23 = ctx.gpr[23];
    g23 = (ctx.gpr[22] | 0u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(8)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08B122B4u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[23] = g23;
    goto L_08B1195C;
}
L_08B122B4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1232C;
      }
      goto L_08B122BC;
    }
L_08B122BC:
{
    float f0 = ctx.fpr[0];
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
{
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g23 = ctx.gpr[23];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(8)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(0)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(16)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(4)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(8)));
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(12)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(0)));
    f0 = std::bit_cast<float>(aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(12)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(4)));
    { const float fs = f0; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f18));
    f16 = ctx.fpr[19] + f16;
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f17));
    f17 = ctx.fpr[2] + f0;
    hot_regs.g31 = (0x08B12308u);
    f18 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.fpr[0] = f0;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    goto L_08B1195C;
}
}
L_08B12308:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1232C;
      }
      goto L_08B12310;
    }
L_08B12310:
{
    std::uint32_t g21 = ctx.gpr[21];
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    g21 = (g21 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g21) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(20));
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_08B12290;
      }
      goto L_08B12324;
    }
}
L_08B12324:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08B12334;
      }
      goto L_08B1232C;
    }
L_08B1232C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B12348;
      }
      goto L_08B12334;
    }
L_08B12334:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08B12278;
      }
      goto L_08B12344;
    }
}
L_08B12344:
    hot_regs.g2 = (0u | 1u);
    goto L_08B12348;
L_08B12348:
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
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B12378:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-80));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10544)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B123E4;
      }
      goto L_08B1239C;
    }
}
L_08B1239C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
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
    hot_regs.g5 = (g29 + static_cast<std::uint32_t>(32));
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x08B123B8u);
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(52));
    hot_regs.g4 = g4;
    goto L_08B115A0;
}
L_08B123B8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B12464;
      }
      goto L_08B123C0;
    }
L_08B123C0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
        goto L_08B123EC;
    }
    goto L_08B123D8;
}
L_08B123D8:
{
    float f22 = hot_regs.f22;
    f22 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = hot_regs.f20; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_08B123F0;
      }
      goto L_08B123E4;
    }
}
L_08B123E4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B12470;
      }
      goto L_08B123EC;
    }
L_08B123EC:
{
    float f22 = hot_regs.f22;
    { const float fs = hot_regs.f20; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    hot_regs.f22 = f22;
    goto L_08B123F0;
}
L_08B123F0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10544)));
    ctx.gpr[17] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (16217u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B12464;
      }
      goto L_08B12404;
    }
}
L_08B12404:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (g4 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    g16 = (2280u << 16u);
    { const float fs = f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    g16 = (g16 + static_cast<std::uint32_t>(13936));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.f20 = f20;
    goto L_08B12418;
}
}
L_08B12418:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    f12 = f12 - hot_regs.f20;
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B12450;
      }
      goto L_08B12434;
    }
}
L_08B12434:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g31 = (0x08B12448u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08B11E3C;
L_08B12448:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B1246C;
      }
      goto L_08B12450;
    }
L_08B12450:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10544)));
    g17 = (g17 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08B12418;
      }
      goto L_08B12464;
    }
}
L_08B12464:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B12470;
      }
      goto L_08B1246C;
    }
L_08B1246C:
    hot_regs.g2 = (0u | 1u);
    goto L_08B12470;
L_08B12470:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
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
L_08B1248C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-832));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(784), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(788), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(792), g18);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(796), g19);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(800), g20);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(804), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(808), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(812), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(816), hot_regs.g31);
    g17 = (hot_regs.g5 | 0u);
    g16 = (g4 | 0u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(120), 0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(6))))));
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(8))))));
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(10))))));
    f14 = std::bit_cast<float>(g4);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f14));
    { const std::uint32_t vfpu_address = g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g18 = (g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g18 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(10496));
    g19 = (g29 + static_cast<std::uint32_t>(128));
    g20 = (g29 + static_cast<std::uint32_t>(132));
    g4 = (g18 | 0u);
    hot_regs.g6 = (g19 | 0u);
    hot_regs.g31 = (0x08B12518u);
    hot_regs.g7 = (g20 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
    ctx.gpr[19] = g19;
    ctx.gpr[20] = g20;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_08B115A0;
}
}
L_08B12518:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B125DC;
      }
      goto L_08B12520;
    }
L_08B12520:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10504)));
    hot_regs.g4 = (49942u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B125D4;
      }
      goto L_08B1253C;
    }
L_08B1253C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10504)));
    hot_regs.g4 = (17302u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B125CC;
      }
      goto L_08B12558;
    }
L_08B12558:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    g10 = (16051u << 16u);
    hot_regs.f14 = std::bit_cast<float>(0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    g10 = (g10 | 13107u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    hot_regs.f13 = std::bit_cast<float>(g10);
    g10 = (2236u << 16u);
    ctx.gpr[11] = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    g10 = (g10 + static_cast<std::uint32_t>(32304));
    g21 = (2280u << 16u);
    g23 = (2280u << 16u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10504)));
    g4 = (g29 + static_cast<std::uint32_t>(16));
    g5 = (g29 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(80));
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(96));
    ctx.gpr[8] = (g29 + static_cast<std::uint32_t>(32));
    ctx.gpr[9] = (g29 + static_cast<std::uint32_t>(48));
    g10 = (g10 + static_cast<std::uint32_t>(48));
    g21 = (g21 + static_cast<std::uint32_t>(13680));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    g23 = (g23 + static_cast<std::uint32_t>(13808));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[10] = g10;
    ctx.gpr[21] = g21;
    ctx.gpr[23] = g23;
      if (branch_taken) {
          goto L_08B125E4;
      }
      goto L_08B125B0;
    }
}
L_08B125B0:
{
    float f13 = hot_regs.f13;
    float f15 = hot_regs.f15;
{
    std::uint32_t g11 = ctx.gpr[11];
    g11 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g11 = (g11 << 16u);
    g11 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g11) >> 16u));
    f15 = std::bit_cast<float>(g11);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = f15; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.gpr[11] = g11;
    hot_regs.f13 = f13;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08B125FC;
      }
      goto L_08B125CC;
    }
}
}
L_08B125CC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B12EA4;
      }
      goto L_08B125D4;
    }
L_08B125D4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B12EA4;
      }
      goto L_08B125DC;
    }
L_08B125DC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B12EA4;
      }
      goto L_08B125E4;
    }
L_08B125E4:
{
    float f13 = hot_regs.f13;
    float f15 = hot_regs.f15;
{
    std::uint32_t g11 = ctx.gpr[11];
    g11 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    g11 = (g11 << 16u);
    g11 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g11) >> 16u));
    f15 = std::bit_cast<float>(g11);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    { const float fs = f15; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.gpr[11] = g11;
    hot_regs.f13 = f13;
    hot_regs.f15 = f15;
    goto L_08B125FC;
}
}
L_08B125FC:
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[11]);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    ctx.gpr[11] = (14537u << 16u);
    ctx.gpr[11] = (ctx.gpr[11] | 4059u);
    hot_regs.f15 = std::bit_cast<float>(ctx.gpr[11]);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[11]);
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
    ctx.gpr[11] = (ctx.vfpu_scalar_bits_ct<1u>());
    hot_regs.f13 = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[11]);
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
    ctx.gpr[11] = (ctx.vfpu_scalar_bits_ct<1u>());
    hot_regs.f15 = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[11]);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g2 = (16128u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g2);
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[11] = (0u - ctx.gpr[11]);
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[11]);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[11]);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f15));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[11]);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
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
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g2 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g2);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[11] = (0u | 1u);
        goto L_08B12734;
    }
    goto L_08B12734;
L_08B12734:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g2 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g2);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[11] = (0u | 1u);
        goto L_08B1278C;
    }
    goto L_08B1278C;
L_08B1278C:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g2 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g2);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[11] = (0u | 1u);
        goto L_08B127D8;
    }
    goto L_08B127D8;
L_08B127D8:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(138), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g2 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g2);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[11] = (0u | 1u);
        goto L_08B12830;
    }
    goto L_08B12830;
L_08B12830:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(139), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g2 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g2);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[11] = (0u | 1u);
        goto L_08B1287C;
    }
    goto L_08B1287C;
L_08B1287C:
    hot_regs.g2 = (ctx.gpr[10] | 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[10] = (0u | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[11] = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[11]);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[10] = (0u | 1u);
        goto L_08B128D8;
    }
    goto L_08B128D8;
L_08B128D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g21 = ctx.gpr[21];
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(g10));
    { const std::uint32_t vfpu_address = g18 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = g9 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g9 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g21 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g18 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = g9 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g9 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g10 = (g21 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g10 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g18 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = g9 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g9 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g10 = (g21 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g10 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g18 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = g9 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g9 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g10 = (g21 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g10 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g18 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = g9 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g9 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g10 = (g21 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g10 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g18 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = g9 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g9 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g10 = (g21 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g10 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g18 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = g9 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g9 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g10 = (g21 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g10 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g18 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = g9 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g9 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g21 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g18 = (0u | 0u);
    ctx.gpr[22] = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    g4 = (0u | 0u);
    g21 = (g4 + g21);
    ctx.gpr[23] = (g4 + ctx.gpr[23]);
    hot_regs.g4 = g4;
    ctx.gpr[10] = g10;
    ctx.gpr[18] = g18;
    ctx.gpr[21] = g21;
    goto L_08B12ACC;
}
L_08B12ACC:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08B12AE8u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    goto L_08B115A0;
L_08B12AE8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (g18 + ctx.gpr[28]);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10512), static_cast<std::uint8_t>(hot_regs.g2));
    g18 = (g18 + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    g4 = (static_cast<std::int32_t>(g18) < 8 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08B12ACC;
      }
      goto L_08B12B04;
    }
}
L_08B12B04:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (18804u << 16u);
    g4 = (g4 | 9214u);
    f12 = std::bit_cast<float>(g4);
    g4 = (51572u << 16u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(10528), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(10520), std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 | 9214u);
    f12 = std::bit_cast<float>(g4);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(10532), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(10524), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(138)));
    g4 = (g4 ^ hot_regs.g5);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B12B5C;
      }
      goto L_08B12B40;
    }
}
}
L_08B12B40:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 4u);
    hot_regs.g31 = (0x08B12B54u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    goto L_08B12ED0;
L_08B12B54:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B12B78;
      }
      goto L_08B12B5C;
    }
L_08B12B5C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(139)));
    g4 = (g4 ^ hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B12B80;
      }
      goto L_08B12B70;
    }
}
L_08B12B70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B12B9C;
      }
      goto L_08B12B78;
    }
L_08B12B78:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B12EA4;
      }
      goto L_08B12B80;
    }
L_08B12B80:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 2u);
    hot_regs.g6 = (0u | 6u);
    hot_regs.g31 = (0x08B12B94u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    goto L_08B12ED0;
L_08B12B94:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B12BB8;
      }
      goto L_08B12B9C;
    }
L_08B12B9C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(140)));
    g4 = (g4 ^ hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B12BC0;
      }
      goto L_08B12BB0;
    }
}
L_08B12BB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B12BDC;
      }
      goto L_08B12BB8;
    }
L_08B12BB8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B12EA4;
      }
      goto L_08B12BC0;
    }
L_08B12BC0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B12BD4u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    goto L_08B12ED0;
L_08B12BD4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B12BF8;
      }
      goto L_08B12BDC;
    }
L_08B12BDC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(141)));
    g4 = (g4 ^ hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B12C00;
      }
      goto L_08B12BF0;
    }
}
L_08B12BF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B12C1C;
      }
      goto L_08B12BF8;
    }
L_08B12BF8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B12EA4;
      }
      goto L_08B12C00;
    }
L_08B12C00:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 4u);
    hot_regs.g6 = (0u | 6u);
    hot_regs.g31 = (0x08B12C14u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    goto L_08B12ED0;
L_08B12C14:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B12C38;
      }
      goto L_08B12C1C;
    }
L_08B12C1C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(137)));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(138)));
    g4 = (g4 ^ hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B12C40;
      }
      goto L_08B12C30;
    }
}
L_08B12C30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B12C5C;
      }
      goto L_08B12C38;
    }
L_08B12C38:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B12EA4;
      }
      goto L_08B12C40;
    }
L_08B12C40:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g6 = (0u | 5u);
    hot_regs.g31 = (0x08B12C54u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    goto L_08B12ED0;
L_08B12C54:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B12C78;
      }
      goto L_08B12C5C;
    }
L_08B12C5C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(137)));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(139)));
    g4 = (g4 ^ hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B12C80;
      }
      goto L_08B12C70;
    }
}
L_08B12C70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B12C9C;
      }
      goto L_08B12C78;
    }
L_08B12C78:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B12EA4;
      }
      goto L_08B12C80;
    }
L_08B12C80:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 3u);
    hot_regs.g6 = (0u | 7u);
    hot_regs.g31 = (0x08B12C94u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    goto L_08B12ED0;
L_08B12C94:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B12CB8;
      }
      goto L_08B12C9C;
    }
L_08B12C9C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(137)));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(140)));
    g4 = (g4 ^ hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B12CC0;
      }
      goto L_08B12CB0;
    }
}
L_08B12CB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B12CDC;
      }
      goto L_08B12CB8;
    }
L_08B12CB8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B12EA4;
      }
      goto L_08B12CC0;
    }
L_08B12CC0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g6 = (0u | 3u);
    hot_regs.g31 = (0x08B12CD4u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    goto L_08B12ED0;
L_08B12CD4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B12CF8;
      }
      goto L_08B12CDC;
    }
L_08B12CDC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(137)));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(141)));
    g4 = (g4 ^ hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B12D00;
      }
      goto L_08B12CF0;
    }
}
L_08B12CF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B12D1C;
      }
      goto L_08B12CF8;
    }
L_08B12CF8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B12EA4;
      }
      goto L_08B12D00;
    }
L_08B12D00:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 5u);
    hot_regs.g6 = (0u | 7u);
    hot_regs.g31 = (0x08B12D14u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    goto L_08B12ED0;
L_08B12D14:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B12D38;
      }
      goto L_08B12D1C;
    }
L_08B12D1C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(138)));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(140)));
    g4 = (g4 ^ hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B12D40;
      }
      goto L_08B12D30;
    }
}
L_08B12D30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B12D5C;
      }
      goto L_08B12D38;
    }
L_08B12D38:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B12EA4;
      }
      goto L_08B12D40;
    }
L_08B12D40:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08B12D54u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    goto L_08B12ED0;
L_08B12D54:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B12D78;
      }
      goto L_08B12D5C;
    }
L_08B12D5C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(140)));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(139)));
    g4 = (g4 ^ hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B12D80;
      }
      goto L_08B12D70;
    }
}
L_08B12D70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B12D9C;
      }
      goto L_08B12D78;
    }
L_08B12D78:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B12EA4;
      }
      goto L_08B12D80;
    }
L_08B12D80:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 2u);
    hot_regs.g6 = (0u | 3u);
    hot_regs.g31 = (0x08B12D94u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    goto L_08B12ED0;
L_08B12D94:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B12DB8;
      }
      goto L_08B12D9C;
    }
L_08B12D9C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(139)));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(141)));
    g4 = (g4 ^ hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B12DC0;
      }
      goto L_08B12DB0;
    }
}
L_08B12DB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B12DDC;
      }
      goto L_08B12DB8;
    }
L_08B12DB8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B12EA4;
      }
      goto L_08B12DC0;
    }
L_08B12DC0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 6u);
    hot_regs.g6 = (0u | 7u);
    hot_regs.g31 = (0x08B12DD4u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    goto L_08B12ED0;
L_08B12DD4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B12DF8;
      }
      goto L_08B12DDC;
    }
L_08B12DDC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(141)));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(138)));
    g4 = (g4 ^ hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B12E00;
      }
      goto L_08B12DF0;
    }
}
L_08B12DF0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
      if (branch_taken) {
          goto L_08B12E20;
      }
      goto L_08B12DF8;
    }
L_08B12DF8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B12EA4;
      }
      goto L_08B12E00;
    }
L_08B12E00:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 4u);
    hot_regs.g6 = (0u | 5u);
    hot_regs.g31 = (0x08B12E14u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    goto L_08B12ED0;
L_08B12E14:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B12E5C;
      }
      goto L_08B12E1C;
    }
L_08B12E1C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    goto L_08B12E20;
L_08B12E20:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10524)));
    f13 = std::bit_cast<float>(g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10520)));
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    g4 = (15820u << 16u);
    g4 = (g4 | 52429u);
    f12 = f12 - hot_regs.f14;
    hot_regs.f15 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((f12 < f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08B12E98;
      }
      goto L_08B12E54;
    }
}
}
L_08B12E54:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
      if (branch_taken) {
          goto L_08B12E64;
      }
      goto L_08B12E5C;
    }
L_08B12E5C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B12EA4;
      }
      goto L_08B12E64;
    }
L_08B12E64:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10532)));
    f13 = std::bit_cast<float>(g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10528)));
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    g4 = (15759u << 16u);
    g4 = (g4 | 23593u);
    f12 = f12 - hot_regs.f14;
    hot_regs.f15 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((f12 < f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08B12EA0;
      }
      goto L_08B12E98;
    }
}
}
L_08B12E98:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B12EA4;
      }
      goto L_08B12EA0;
    }
L_08B12EA0:
    hot_regs.g2 = (0u | 1u);
    goto L_08B12EA4;
L_08B12EA4:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(784)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(788)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(792)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(796)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(800)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(804)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(808)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(812)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(816)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(832));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B12ED0:
{
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-352));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(316), g18);
    g18 = (hot_regs.g5 + ctx.gpr[28]);
    hot_regs.g4 = (aot_mem.aot_load8(g18 + static_cast<std::uint32_t>(10512)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(308), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(312), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(320), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(324), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(328), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(332), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(336), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(340), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(344), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (hot_regs.g7 | 0u);
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B12F34;
      }
      goto L_08B12F24;
    }
}
L_08B12F24:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[16] + ctx.gpr[28]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(10512)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B12F68;
      }
      goto L_08B12F34;
    }
}
L_08B12F34:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(10512)));
    ctx.gpr[18] = (hot_regs.g5 << 4u);
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[20] = (ctx.gpr[16] << 4u);
      if (branch_taken) {
          goto L_08B12F70;
      }
      goto L_08B12F48;
    }
L_08B12F48:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2280u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(13808));
    g4 = (ctx.gpr[18] + g4);
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
    g4 = (ctx.gpr[16] + ctx.gpr[28]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B1305C;
      }
      goto L_08B12F68;
    }
}
L_08B12F68:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B1335C;
      }
      goto L_08B12F70;
    }
L_08B12F70:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    ctx.gpr[22] = (g4 + static_cast<std::uint32_t>(2656));
    g4 = (2280u << 16u);
    ctx.gpr[23] = (g4 + static_cast<std::uint32_t>(13680));
    ctx.gpr[30] = (ctx.gpr[18] + ctx.gpr[23]);
    g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08B12F9Cu);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    hot_regs.g4 = g4;
    goto L_08B11578;
}
L_08B12F9C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g23 = ctx.gpr[23];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    g4 = (16268u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    f12 = f12 - hot_regs.f20;
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) & 0x7FFFFFFFu);
    g23 = (ctx.gpr[20] + g23);
    g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08B12FC8u);
    hot_regs.g6 = (g23 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[23] = g23;
    hot_regs.f12 = f12;
    goto L_08B11578;
}
}
L_08B12FC8:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.f13 = hot_regs.f13 - hot_regs.f20;
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13) & 0x7FFFFFFFu);
    hot_regs.f14 = hot_regs.f22 + hot_regs.f12;
    hot_regs.f12 = hot_regs.f12 / hot_regs.f14;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = hot_regs.f13 - hot_regs.f12;
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(68));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x08B13044u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    goto L_08B115A0;
L_08B13044:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B13054;
      }
      goto L_08B1304C;
    }
L_08B1304C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B1335C;
      }
      goto L_08B13054;
    }
L_08B13054:
    hot_regs.g4 = (ctx.gpr[16] + ctx.gpr[28]);
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    goto L_08B1305C;
L_08B1305C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(10512)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B13084;
      }
      goto L_08B13068;
    }
}
L_08B13068:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2280u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(13808));
    g4 = (ctx.gpr[20] + g4);
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B1316C;
      }
      goto L_08B13084;
    }
}
L_08B13084:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    ctx.gpr[21] = (g4 + static_cast<std::uint32_t>(2656));
    g4 = (2280u << 16u);
    ctx.gpr[22] = (g4 + static_cast<std::uint32_t>(13680));
    g18 = (g18 + ctx.gpr[22]);
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08B130B0u);
    hot_regs.g6 = (g18 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
    goto L_08B11578;
}
L_08B130B0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    g4 = (16268u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    f12 = f12 - hot_regs.f20;
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) & 0x7FFFFFFFu);
    g20 = (g20 + ctx.gpr[22]);
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08B130DCu);
    hot_regs.g6 = (g20 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[20] = g20;
    hot_regs.f12 = f12;
    goto L_08B11578;
}
}
L_08B130DC:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    hot_regs.f13 = hot_regs.f13 - hot_regs.f20;
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13) & 0x7FFFFFFFu);
    hot_regs.f12 = hot_regs.f22 + hot_regs.f12;
    hot_regs.f12 = hot_regs.f22 / hot_regs.f12;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = hot_regs.f13 - hot_regs.f12;
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(68));
    hot_regs.g31 = (0x08B13158u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    goto L_08B115A0;
L_08B13158:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B13168;
      }
      goto L_08B13160;
    }
L_08B13160:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B1335C;
      }
      goto L_08B13168;
    }
L_08B13168:
    ctx.fpr[28] = std::bit_cast<float>(0u);
    goto L_08B1316C;
L_08B1316C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10520)));
    ctx.set_fpu_condition((hot_regs.f13 < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10520)));
    hot_regs.f12 = f12;
        goto L_08B13184;
    }
    goto L_08B13184;
}
L_08B13184:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10520), std::bit_cast<std::uint32_t>(f13));
    ctx.set_fpu_condition((f13 < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10520)));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_08B131A0;
    }
    goto L_08B131A0;
}
L_08B131A0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g28 = ctx.gpr[28];
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(10520), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(10524)));
    ctx.set_fpu_condition((hot_regs.f13 <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(10524)));
    hot_regs.f12 = f12;
        goto L_08B131BC;
    }
    goto L_08B131BC;
}
}
L_08B131BC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10524), std::bit_cast<std::uint32_t>(f13));
    ctx.set_fpu_condition((f13 <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10524)));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_08B131D8;
    }
    goto L_08B131D8;
}
L_08B131D8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g28 = ctx.gpr[28];
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(10524), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(10528)));
    ctx.set_fpu_condition((hot_regs.f13 < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(10528)));
    hot_regs.f12 = f12;
        goto L_08B131F4;
    }
    goto L_08B131F4;
}
}
L_08B131F4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10528), std::bit_cast<std::uint32_t>(f13));
    ctx.set_fpu_condition((f13 < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10528)));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_08B13210;
    }
    goto L_08B13210;
}
L_08B13210:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g28 = ctx.gpr[28];
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(10528), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(10532)));
    ctx.set_fpu_condition((hot_regs.f13 <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(10532)));
    hot_regs.f12 = f12;
        goto L_08B1322C;
    }
    goto L_08B1322C;
}
}
L_08B1322C:
{
    float f20 = hot_regs.f20;
    f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10532), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_fpu_condition((hot_regs.f12 <= f20));
    // nop
    if (!ctx.fpu_condition()) {
    f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10532)));
    hot_regs.f20 = f20;
        goto L_08B13244;
    }
    goto L_08B13244;
}
L_08B13244:
{
    float f20 = hot_regs.f20;
    float f22 = hot_regs.f22;
    float f24 = ctx.fpr[24];
    float f26 = ctx.fpr[26];
{
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(10532), std::bit_cast<std::uint32_t>(f20));
    f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    f24 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f20));
    f26 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f22));
    f24 = f24 - f20;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(10496)));
    f26 = f26 - f22;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(10500)));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f24));
    hot_regs.g31 = (0x08B13280u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f26));
    hot_regs.f20 = f20;
    hot_regs.f22 = f22;
    ctx.fpr[24] = f24;
    ctx.fpr[26] = f26;
    goto L_08B1195C;
}
}
L_08B13280:
    if (hot_regs.g2 != 0u) {
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
        goto L_08B1329C;
    }
    goto L_08B13288;
L_08B13288:
{
    float f24 = ctx.fpr[24];
    float f26 = ctx.fpr[26];
    hot_regs.f20 = hot_regs.f20 + f24;
    hot_regs.f22 = hot_regs.f22 + f26;
    f24 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f24) ^ 0x80000000u);
    f26 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f26) ^ 0x80000000u);
    { const float fs = f24; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.fpr[24] = f24;
    ctx.fpr[26] = f26;
    goto L_08B1329C;
}
L_08B1329C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f24 = ctx.fpr[24];
    float f26 = ctx.fpr[26];
{
    std::uint32_t g4 = hot_regs.g4;
    { const float fs = f26; const float ft = f26; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    f12 = std::sqrt(f12);
    f24 = f24 / f12;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    hot_regs.g5 = (g4 << 4u);
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    g4 = (ctx.gpr[17] + g4);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    f26 = f26 / f12;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f24));
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f24));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f26));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08B132ECu);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f26));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    ctx.fpr[24] = f24;
    ctx.fpr[26] = f26;
    goto L_08B117B4;
}
}
L_08B132EC:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B1334C;
      }
      goto L_08B132F4;
    }
L_08B132F4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    f12 = std::bit_cast<float>(g4);
    f13 = std::bit_cast<float>(hot_regs.g5);
    g4 = (16128u << 16u);
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f17 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    f14 = std::bit_cast<float>(g4);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const float fs = f16; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    { const float fs = f17; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g31 = (0x08B13334u);
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    goto L_08B1195C;
}
}
L_08B13334:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B13344;
      }
      goto L_08B1333C;
    }
L_08B1333C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B1335C;
      }
      goto L_08B13344;
    }
L_08B13344:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B1335C;
      }
      goto L_08B1334C;
    }
L_08B1334C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    hot_regs.g2 = (0u | 0u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), g4);
    hot_regs.g4 = g4;
    goto L_08B1335C;
}
L_08B1335C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(288)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(292)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(296)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(300)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(304)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(308)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(312)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(316)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(320)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(324)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(328)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(332)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(336)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(340)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(344)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B133A0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(228), ctx.gpr[22]);
    ctx.gpr[22] = (g4 | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10544)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(204), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(220), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(224), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(232), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(236), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(240), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B13424;
      }
      goto L_08B133FC;
    }
}
L_08B133FC:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(32));
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(36));
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08B13414u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    goto L_08B115A0;
}
L_08B13414:
    if (hot_regs.g2 != 0u) {
    { const float fs = hot_regs.f20; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
        goto L_08B1342C;
    }
    goto L_08B1341C;
L_08B1341C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B136FC;
      }
      goto L_08B13424;
    }
L_08B13424:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B13700;
      }
      goto L_08B1342C;
    }
L_08B1342C:
    { const float fs = hot_regs.f22; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.f12 = hot_regs.f12 + hot_regs.f14;
    hot_regs.f12 = std::sqrt(hot_regs.f12);
    hot_regs.g31 = (0x08B13454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13454u) goto L_08B13454;
    return;
L_08B13454:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2348)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2344)));
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x08B13468u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13468u) goto L_08B13468;
    return;
L_08B13468:
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x08B13474u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13474u) goto L_08B13474;
    return;
L_08B13474:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B13498;
      }
      goto L_08B1348C;
    }
L_08B1348C:
{
    float f30 = ctx.fpr[30];
    f30 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[28]; const float ft = f30; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f30 = std::bit_cast<float>(0x7FC00000u); else f30 = fs * ft; }
    ctx.fpr[30] = f30;
      if (branch_taken) {
          goto L_08B134A0;
      }
      goto L_08B13498;
    }
}
L_08B13498:
{
    float f30 = ctx.fpr[30];
    f30 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[28]; const float ft = f30; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f30 = std::bit_cast<float>(0x7FC00000u); else f30 = fs * ft; }
    ctx.fpr[30] = f30;
    goto L_08B134A0;
}
L_08B134A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10544)));
    ctx.gpr[20] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (16217u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B136FC;
      }
      goto L_08B134B4;
    }
}
L_08B134B4:
{
    float f22 = hot_regs.f22;
    float f24 = ctx.fpr[24];
    float f26 = ctx.fpr[26];
    float f28 = ctx.fpr[28];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g4 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    f26 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    g4 = (16128u << 16u);
    hot_regs.f20 = std::bit_cast<float>(0u);
    f24 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    f22 = std::bit_cast<float>(g4);
    { const float fs = f26; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f26 = std::bit_cast<float>(0x7FC00000u); else f26 = fs * ft; }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    { const float fs = f24; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f24 = std::bit_cast<float>(0x7FC00000u); else f24 = fs * ft; }
    g17 = (2280u << 16u);
    { const float fs = f28; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f28 = std::bit_cast<float>(0x7FC00000u); else f28 = fs * ft; }
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(96));
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(64));
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(112));
    { const float fs = hot_regs.f13; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(80));
    g17 = (g17 + static_cast<std::uint32_t>(13936));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    hot_regs.f22 = f22;
    ctx.fpr[24] = f24;
    ctx.fpr[26] = f26;
    ctx.fpr[28] = f28;
    goto L_08B134FC;
}
}
L_08B134FC:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    f12 = f12 - ctx.fpr[28];
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B136E8;
      }
      goto L_08B13518;
    }
}
L_08B13518:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (0x08B1352Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_08B11E3C;
L_08B1352C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B13558;
      }
      goto L_08B13534;
    }
L_08B13534:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (0x08B13548u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_08B11E3C;
L_08B13548:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B13560;
      }
      goto L_08B13550;
    }
L_08B13550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B136E8;
      }
      goto L_08B13558;
    }
L_08B13558:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B13700;
      }
      goto L_08B13560;
    }
L_08B13560:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f22));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(48));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f22));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08B135ACu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g4 = g4;
    goto L_08B116BC;
}
L_08B135AC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B135D4;
      }
      goto L_08B135B4;
    }
L_08B135B4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (0x08B135C8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_08B11E3C;
L_08B135C8:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B135D4;
      }
      goto L_08B135D0;
    }
L_08B135D0:
    ctx.gpr[16] = (0u | 1u);
    goto L_08B135D4;
L_08B135D4:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B13628;
      }
      goto L_08B135DC;
    }
L_08B135DC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08B13600u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    goto L_08B116BC;
}
L_08B13600:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B13628;
      }
      goto L_08B13608;
    }
L_08B13608:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (0x08B1361Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_08B11E3C;
L_08B1361C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B13628;
      }
      goto L_08B13624;
    }
L_08B13624:
    ctx.gpr[16] = (0u | 1u);
    goto L_08B13628;
L_08B13628:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B1367C;
      }
      goto L_08B13630;
    }
L_08B13630:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08B13654u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    goto L_08B116BC;
}
L_08B13654:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1367C;
      }
      goto L_08B1365C;
    }
L_08B1365C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (0x08B13670u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_08B11E3C;
L_08B13670:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B1367C;
      }
      goto L_08B13678;
    }
L_08B13678:
    ctx.gpr[16] = (0u | 1u);
    goto L_08B1367C;
L_08B1367C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B136D8;
      }
      goto L_08B13684;
    }
L_08B13684:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(32));
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(36));
    hot_regs.g31 = (0x08B136B0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    goto L_08B115A0;
}
L_08B136B0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B136D8;
      }
      goto L_08B136B8;
    }
L_08B136B8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (0x08B136CCu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_08B11E3C;
L_08B136CC:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B136D8;
      }
      goto L_08B136D4;
    }
L_08B136D4:
    ctx.gpr[16] = (0u | 1u);
    goto L_08B136D8;
L_08B136D8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B136E8;
      }
      goto L_08B136E0;
    }
L_08B136E0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B13700;
      }
      goto L_08B136E8;
    }
L_08B136E8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10544)));
    g20 = (g20 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g20) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(128));
    hot_regs.g4 = g4;
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_08B134FC;
      }
      goto L_08B136FC;
    }
}
L_08B136FC:
    hot_regs.g2 = (0u | 0u);
    goto L_08B13700;
L_08B13700:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(196)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(204)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(208)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(212)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(220)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(224)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(228)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(232)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(236)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B13748:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-272));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(268), hot_regs.g31);
    hot_regs.g31 = (0x08B13774u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13774u) goto L_08B13774;
    return;
L_08B13774:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x08B13780u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13780u) goto L_08B13780;
    return;
L_08B13780:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08B13794u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13794u) goto L_08B13794;
    return;
L_08B13794:
    hot_regs.g31 = (0x08B1379Cu);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B1379Cu) goto L_08B1379C;
    return;
L_08B1379C:
{
    float f0 = ctx.fpr[0];
    float f1 = ctx.fpr[1];
    float f2 = ctx.fpr[2];
    float f3 = ctx.fpr[3];
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(4)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2424)));
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const float fs = f13; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    g4 = (std::bit_cast<std::uint32_t>(f18));
    g5 = (std::bit_cast<std::uint32_t>(f19));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), g5);
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    g4 = (std::bit_cast<std::uint32_t>(f16));
    g5 = (std::bit_cast<std::uint32_t>(f17));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), g5);
    f0 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    f2 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    g4 = (std::bit_cast<std::uint32_t>(f0));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    g5 = (std::bit_cast<std::uint32_t>(f2));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g5);
    f1 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    f3 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    f1 = f17 - f1;
    f0 = f16 - f3;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(f14));
    g4 = (std::bit_cast<std::uint32_t>(f1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g4);
    g4 = (std::bit_cast<std::uint32_t>(f0));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g4);
    f2 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(f18));
    g5 = (std::bit_cast<std::uint32_t>(f2));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(f19));
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    f3 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    f3 = f19 - f3;
    f12 = f18 - ctx.fpr[4];
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(f1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(f0));
    g4 = (std::bit_cast<std::uint32_t>(f3));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), g4);
    g4 = (std::bit_cast<std::uint32_t>(f12));
    f0 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), g4);
    f2 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    g4 = (std::bit_cast<std::uint32_t>(f0));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g4);
    g4 = (std::bit_cast<std::uint32_t>(f2));
    f1 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(f3));
    f3 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    { const float fs = f1; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f1 = std::bit_cast<float>(0x7FC00000u); else f1 = fs * ft; }
    { const float fs = f3; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f3 = std::bit_cast<float>(0x7FC00000u); else f3 = fs * ft; }
    f0 = f1 + f3;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f0 <= f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.fpr[0] = f0;
    ctx.fpr[1] = f1;
    ctx.fpr[2] = f2;
    ctx.fpr[3] = f3;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
      if (branch_taken) {
          goto L_08B13A0C;
      }
      goto L_08B138B8;
    }
}
}
L_08B138B8:
{
    float f0 = ctx.fpr[0];
    float f1 = ctx.fpr[1];
    float f2 = ctx.fpr[2];
    float f3 = ctx.fpr[3];
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    { const float fs = f13; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g4 = (std::bit_cast<std::uint32_t>(f0));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), g4);
    g5 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(188), g5);
    f2 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    f1 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
    g4 = (std::bit_cast<std::uint32_t>(f2));
    g5 = (std::bit_cast<std::uint32_t>(f1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), g5);
    f3 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    g4 = (std::bit_cast<std::uint32_t>(f3));
    g5 = (std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), g5);
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    f2 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    f17 = f17 + ctx.fpr[5];
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(f0));
    f16 = f16 + f2;
    g4 = (std::bit_cast<std::uint32_t>(f17));
    g5 = (std::bit_cast<std::uint32_t>(f16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), g5);
    f0 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    f1 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    g4 = (std::bit_cast<std::uint32_t>(f0));
    g5 = (std::bit_cast<std::uint32_t>(f1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), g5);
    f2 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    f3 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(f13));
    f13 = f19 - f2;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(f17));
    f18 = f18 - f3;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(f16));
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15) ^ 0x80000000u);
    g4 = (std::bit_cast<std::uint32_t>(f13));
    g5 = (std::bit_cast<std::uint32_t>(f18));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), g5);
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    g4 = (std::bit_cast<std::uint32_t>(f16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f2));
    g5 = (std::bit_cast<std::uint32_t>(f17));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), g5);
    g4 = (std::bit_cast<std::uint32_t>(f15));
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14) ^ 0x80000000u);
    f0 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    g5 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f3));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f19));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(f0));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(f18));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), g5);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    g4 = (std::bit_cast<std::uint32_t>(f13));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    g5 = (std::bit_cast<std::uint32_t>(f16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), g5);
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    { const float fs = f17; const float ft = f18; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = f17 + f13;
    ctx.set_fpu_condition((f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.fpr[0] = f0;
    ctx.fpr[1] = f1;
    ctx.fpr[2] = f2;
    ctx.fpr[3] = f3;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
      if (branch_taken) {
          goto L_08B13A0C;
      }
      goto L_08B13A04;
    }
}
}
L_08B13A04:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B13A10;
      }
      goto L_08B13A0C;
    }
L_08B13A0C:
    hot_regs.g2 = (0u | 0u);
    goto L_08B13A10;
L_08B13A10:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(264)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(268)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B13A20:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08B13A34u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
    goto L_08B13B00;
}
L_08B13A34:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B13A64;
      }
      goto L_08B13A3C;
    }
L_08B13A3C:
    hot_regs.g31 = (0x08B13A44u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08B13B44;
L_08B13A44:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B13A5C;
      }
      goto L_08B13A4C;
    }
L_08B13A4C:
    hot_regs.g31 = (0x08B13A54u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08B13D8C;
L_08B13A54:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B13A64;
      }
      goto L_08B13A5C;
    }
L_08B13A5C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B13A68;
      }
      goto L_08B13A64;
    }
L_08B13A64:
    hot_regs.g2 = (0u | 0u);
    goto L_08B13A68;
L_08B13A68:
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
L_08B13A78:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(76)));
    g5 = (2u << 16u);
    g5 = (hot_regs.g6 & g5);
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B13AEC;
      }
      goto L_08B13AA8;
    }
}
L_08B13AA8:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B13AEC;
      }
      goto L_08B13AB4;
    }
L_08B13AB4:
    hot_regs.g31 = (0x08B13ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 58u, 0x08AD0600u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13ABCu) goto L_08B13ABC;
    return;
L_08B13ABC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B13AEC;
      }
      goto L_08B13AC4;
    }
L_08B13AC4:
    hot_regs.g31 = (0x08B13ACCu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 696u, 0x0890EF94u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13ACCu) goto L_08B13ACC;
    return;
L_08B13ACC:
    hot_regs.g31 = (0x08B13AD4u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13AD4u) goto L_08B13AD4;
    return;
L_08B13AD4:
    hot_regs.g31 = (0x08B13ADCu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 696u, 0x0890EF94u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13ADCu) goto L_08B13ADC;
    return;
L_08B13ADC:
    { const bool branch_taken = ctx.gpr[16] == hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08B13AEC;
      }
      goto L_08B13AE4;
    }
L_08B13AE4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B13AF0;
      }
      goto L_08B13AEC;
    }
L_08B13AEC:
    hot_regs.g2 = (0u | 0u);
    goto L_08B13AF0;
L_08B13AF0:
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
L_08B13B00:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 14u);
    g5 = (g5 ^ 6u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B13B38;
      }
      goto L_08B13B20;
    }
}
L_08B13B20:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(2276)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B13B38;
      }
      goto L_08B13B30;
    }
}
L_08B13B30:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B13B3C;
      }
      goto L_08B13B38;
    }
L_08B13B38:
    hot_regs.g2 = (0u | 0u);
    goto L_08B13B3C;
L_08B13B3C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B13B44:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B13C10;
      }
      goto L_08B13B74;
    }
}
L_08B13B74:
    hot_regs.g31 = (0x08B13B7Cu);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13B7Cu) goto L_08B13B7C;
    return;
L_08B13B7C:
    { const bool branch_taken = ctx.gpr[17] == hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08B13BAC;
      }
      goto L_08B13B84;
    }
L_08B13B84:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 41u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B13BAC;
      }
      goto L_08B13B94;
    }
L_08B13B94:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 8 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B13BE0;
      }
      goto L_08B13BA4;
    }
L_08B13BA4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g4) < 10 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B13BB4;
      }
      goto L_08B13BAC;
    }
L_08B13BAC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B13C14;
      }
      goto L_08B13BB4;
    }
L_08B13BB4:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B13BE0;
      }
      goto L_08B13BBC;
    }
L_08B13BBC:
    hot_regs.g31 = (0x08B13BC4u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13BC4u) goto L_08B13BC4;
    return;
L_08B13BC4:
    { const bool branch_taken = ctx.gpr[17] == hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08B13BD8;
      }
      goto L_08B13BCC;
    }
L_08B13BCC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = 0u == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(216));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B13BE8;
      }
      goto L_08B13BD8;
    }
}
L_08B13BD8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B13C14;
      }
      goto L_08B13BE0;
    }
L_08B13BE0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    g4 = (g4 + static_cast<std::uint32_t>(216));
    hot_regs.g4 = g4;
    goto L_08B13BE8;
}
L_08B13BE8:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08B13BF8u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13BF8u) goto L_08B13BF8;
    return;
L_08B13BF8:
    hot_regs.g31 = (0x08B13C00u);
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13C00u) goto L_08B13C00;
    return;
L_08B13C00:
    { const bool branch_taken = ctx.gpr[16] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08B13C10;
      }
      goto L_08B13C08;
    }
L_08B13C08:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B13C14;
      }
      goto L_08B13C10;
    }
L_08B13C10:
    hot_regs.g2 = (0u | 0u);
    goto L_08B13C14;
L_08B13C14:
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
L_08B13C28:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 14u);
    g5 = (g5 ^ 6u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B13C74;
      }
      goto L_08B13C48;
    }
}
L_08B13C48:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(1929))))));
    hot_regs.g6 = (g5 << 5u);
    g5 = (g5 << 2u);
    g5 = (hot_regs.g6 - g5);
    g4 = (g4 + g5);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B13C74;
      }
      goto L_08B13C6C;
    }
}
L_08B13C6C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B13C78;
      }
      goto L_08B13C74;
    }
L_08B13C74:
    hot_regs.g2 = (0u | 0u);
    goto L_08B13C78;
L_08B13C78:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B13C80:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 14u);
    g5 = (g5 ^ 6u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B13CB8;
      }
      goto L_08B13CA0;
    }
}
L_08B13CA0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1360)));
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B13CB8;
      }
      goto L_08B13CB0;
    }
}
L_08B13CB0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B13CBC;
      }
      goto L_08B13CB8;
    }
L_08B13CB8:
    hot_regs.g2 = (0u | 0u);
    goto L_08B13CBC;
L_08B13CBC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B13CC4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B13D24;
      }
      goto L_08B13CF0;
    }
}
L_08B13CF0:
    hot_regs.g31 = (0x08B13CF8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13CF8u) goto L_08B13CF8;
    return;
L_08B13CF8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B13D24;
      }
      goto L_08B13D00;
    }
L_08B13D00:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = g16 == 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08B13D24;
      }
      goto L_08B13D0C;
    }
}
L_08B13D0C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B13D24;
      }
      goto L_08B13D1C;
    }
L_08B13D1C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B13D28;
      }
      goto L_08B13D24;
    }
L_08B13D24:
    hot_regs.g2 = (0u | 0u);
    goto L_08B13D28;
L_08B13D28:
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
L_08B13D38:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B13D4C;
      }
      goto L_08B13D44;
    }
}
L_08B13D44:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B13D50;
      }
      goto L_08B13D4C;
    }
L_08B13D4C:
    hot_regs.g2 = (0u | 0u);
    goto L_08B13D50;
L_08B13D50:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B13D58:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 8u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B13D80;
      }
      goto L_08B13D78;
    }
}
L_08B13D78:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B13D84;
      }
      goto L_08B13D80;
    }
L_08B13D80:
    hot_regs.g2 = (0u | 0u);
    goto L_08B13D84;
L_08B13D84:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B13D8C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B13E20;
      }
      goto L_08B13DB8;
    }
}
L_08B13DB8:
    hot_regs.g31 = (0x08B13DC0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13DC0u) goto L_08B13DC0;
    return;
L_08B13DC0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B13E20;
      }
      goto L_08B13DC8;
    }
L_08B13DC8:
    hot_regs.g31 = (0x08B13DD0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13DD0u) goto L_08B13DD0;
    return;
L_08B13DD0:
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
          goto L_08B13E20;
      }
      goto L_08B13DEC;
    }
}
L_08B13DEC:
    hot_regs.g31 = (0x08B13DF4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13DF4u) goto L_08B13DF4;
    return;
L_08B13DF4:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08B13E00u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13E00u) goto L_08B13E00;
    return;
L_08B13E00:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B13E18;
      }
      goto L_08B13E08;
    }
L_08B13E08:
    hot_regs.g31 = (0x08B13E10u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13E10u) goto L_08B13E10;
    return;
L_08B13E10:
    { const bool branch_taken = ctx.gpr[16] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08B13E20;
      }
      goto L_08B13E18;
    }
L_08B13E18:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B13E24;
      }
      goto L_08B13E20;
    }
L_08B13E20:
    hot_regs.g2 = (0u | 0u);
    goto L_08B13E24;
L_08B13E24:
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
L_08B13E34:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08B13E48u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
    goto L_08B13B44;
}
L_08B13E48:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B13EAC;
      }
      goto L_08B13E50;
    }
L_08B13E50:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(2208)));
    { const bool branch_taken = static_cast<std::int32_t>(g4) > 0;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B13EA4;
      }
      goto L_08B13E60;
    }
}
L_08B13E60:
    hot_regs.g31 = (0x08B13E68u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08B13D8C;
L_08B13E68:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B13E9C;
      }
      goto L_08B13E70;
    }
L_08B13E70:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B13E94;
      }
      goto L_08B13E7C;
    }
L_08B13E7C:
    hot_regs.g31 = (0x08B13E84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13E84u) goto L_08B13E84;
    return;
L_08B13E84:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(3332)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B13EB4;
      }
      goto L_08B13E94;
    }
L_08B13E94:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B13EB8;
      }
      goto L_08B13E9C;
    }
L_08B13E9C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B13EB8;
      }
      goto L_08B13EA4;
    }
L_08B13EA4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B13EB8;
      }
      goto L_08B13EAC;
    }
L_08B13EAC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B13EB8;
      }
      goto L_08B13EB4;
    }
L_08B13EB4:
    hot_regs.g2 = (0u | 0u);
    goto L_08B13EB8;
L_08B13EB8:
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
L_08B13EC8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g4 = (0u | 36u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08B13EE4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13EE4u) goto L_08B13EE4;
    return;
L_08B13EE4:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B13F08;
      }
      goto L_08B13EF4;
    }
L_08B13EF4:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g4);
    hot_regs.g31 = (0x08B13F00u);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13F00u) goto L_08B13F00;
    return;
L_08B13F00:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    goto L_08B13F08;
L_08B13F08:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g2 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B13F24:
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
          goto L_08B13F78;
      }
      goto L_08B13F40;
    }
}
L_08B13F40:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g4 = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B13F68;
      }
      goto L_08B13F48;
    }
L_08B13F48:
    hot_regs.g31 = (0x08B13F50u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 721u, 0x08B6BAECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13F50u) goto L_08B13F50;
    return;
L_08B13F50:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (g4 == 0u) {
    g4 = (ctx.gpr[16] & 1u);
    hot_regs.g4 = g4;
        goto L_08B13F68;
    }
    goto L_08B13F5C;
}
L_08B13F5C:
    hot_regs.g31 = (0x08B13F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13F64u) goto L_08B13F64;
    return;
L_08B13F64:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    goto L_08B13F68;
L_08B13F68:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B13F78;
      }
      goto L_08B13F70;
    }
L_08B13F70:
    hot_regs.g31 = (0x08B13F78u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B13F78u) goto L_08B13F78;
    return;
L_08B13F78:
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
L_08B13F8C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-96));
    hot_regs.g6 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    hot_regs.g7 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = hot_regs.f13 - hot_regs.f14;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = hot_regs.f13; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = hot_regs.f13 + ctx.fpr[18];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), hot_regs.g31);
    hot_regs.f12 = std::sqrt(hot_regs.f12);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 13u, 0x08B141D8u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08B13FE0;
    }
L_08B13FE0:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g29 = hot_regs.g29;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    f14 = std::bit_cast<float>(0u);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f14));
    { const float fs = f15; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.pc = 0x08B14000u; return;}
}

}

void recomp_unit_0195(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0195_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_195(Runtime &runtime) {
    runtime.register_generated_unit(195u, 0x08B10000u, 16384u, &recomp_unit_0195, &recomp_unit_0195_entry);
    runtime.register_function(0x08B10000u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1000Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10014u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1003Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10048u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10050u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10058u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10068u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10070u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10078u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10080u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10084u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10098u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B100A8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B100B0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B100BCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B100C4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B100DCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B100F8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1010Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1011Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1012Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10134u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10148u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10158u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10160u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1016Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10174u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1017Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10184u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10198u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B101C4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B101D0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B101E4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B101F0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B101FCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1020Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1021Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10228u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10238u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10248u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1024Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10258u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10264u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10274u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1028Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10294u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B102B0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B102C8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B102DCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B102ECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B102F0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B102FCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1030Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10318u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10330u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10344u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10350u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10368u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10384u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1039Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B103B4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B103C4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B103CCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B103D4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B103F0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10408u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10418u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10428u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10438u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10440u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10448u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10450u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10458u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10464u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1046Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1048Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B104A0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B104ACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B104BCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B104C4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B104CCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B104D4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B104DCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10518u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10520u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10550u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10558u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10570u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10598u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B105A4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B105BCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B105E0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B105E8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10628u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10634u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10678u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1068Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10698u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B106ACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B106B8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B106FCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10704u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1070Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10714u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10720u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10728u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1073Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1074Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10754u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1077Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10784u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1079Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B107ACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B107B4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B107C0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B107C8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B107D4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B107DCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B107E0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1080Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1081Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10824u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10838u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10848u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10854u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10864u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1086Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10878u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10880u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10888u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10890u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10898u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B108A4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B108ACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B108B4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B108C0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B108C8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B108D4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B108ECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B108F4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B108FCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10908u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10910u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1091Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10924u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10930u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10944u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1096Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B109B8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B109D0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B109D8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B109E0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10A5Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10A64u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10A74u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10A7Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10A90u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10A98u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10A9Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10AA8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10AB4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10ABCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10ACCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10AD4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10AD8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10AE0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10AF0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10AF8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10B00u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10B08u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10B14u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10B30u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10B40u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10B78u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10BA0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10BC0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10BD0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10BF4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10C00u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10C08u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10C24u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10C34u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10C40u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10C48u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10C58u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10C70u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10C7Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10C90u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10CACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10CB8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10CC8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10CDCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10CF0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10D14u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10D20u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10D28u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10D3Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10D40u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10D5Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10D78u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10D80u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10D8Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10D94u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10DA8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10DB8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10DC0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10DC8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10DD4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10DECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10E00u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10E20u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10E30u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10E3Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10E44u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10E50u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10E58u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10E64u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10E70u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10E7Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10E84u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10E90u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10E94u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10EA0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10EBCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10EF4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10F04u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10F10u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10F18u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10F24u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10F30u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10F40u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10F50u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10F5Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10F68u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10F74u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10F80u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10F8Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10FA0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10FCCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10FD8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10FECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10FFCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11004u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1100Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1101Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11024u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11030u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11040u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11050u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1105Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11068u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1106Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1108Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B110BCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B110C4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B110D8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B110E8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B110F0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B110FCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11100u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11108u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11110u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11124u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11134u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1113Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11148u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11158u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11168u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11178u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1118Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1119Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B111A4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B111B8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B111C4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B111D0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B111E0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B111F0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11214u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11218u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11224u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1124Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11260u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11268u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11270u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11278u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11284u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1128Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11294u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B112A8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B112B4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B112E8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B112F0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11304u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11310u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11318u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11348u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11350u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1135Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11364u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1136Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11374u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11380u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11388u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11394u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B113A4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B113B0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B113BCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B113C8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B113D0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B113DCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B113E4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B113F0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11410u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11420u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11428u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1144Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11454u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1145Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11464u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1146Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1147Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11490u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B114B0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B114BCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B114C4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B114CCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B114D4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B114D8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B114E0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B114ECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B114F0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11504u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1150Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11514u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11534u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11550u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11568u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11578u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B115A0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B115D8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B115FCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B116A0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B116A4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B116BCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B116E4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11708u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11754u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11758u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11768u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B117ACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B117B4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B117FCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1180Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1181Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11838u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1185Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11864u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11890u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11898u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B118CCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B118D4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11908u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11910u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11918u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11920u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11928u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11930u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11938u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1193Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1195Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11980u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11988u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1198Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11994u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B119D0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11A14u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11A30u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11A38u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11A68u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11A70u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11A78u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11A80u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11A84u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11AA8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11ACCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11B08u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11B1Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11B24u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11B38u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11B40u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11B48u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11B50u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11BD8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11BE0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11BF4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11BFCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C00u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C08u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C2Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C34u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C48u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C50u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C54u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C5Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C80u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C88u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C9Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11CA4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11CA8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11CB0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11CD4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11CDCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11CF0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11CF8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11CFCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D04u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D0Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D20u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D24u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D58u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11DDCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11DFCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11E18u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11E30u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11E3Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11E7Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11E80u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11EA0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11EA8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11EBCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11EC4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11EC8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11EECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11F0Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11F3Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11F4Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11F54u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11F5Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11F68u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11F74u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11F7Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11F84u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11F90u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11FA0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11FB4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11FC4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11FD8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12000u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12010u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1201Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12028u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12038u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12040u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12054u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12068u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12074u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12080u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12088u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12098u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B120A0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B120B8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B120D8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B120F0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B120FCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12104u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12114u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1211Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1212Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12134u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1213Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12154u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12160u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12168u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12180u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12188u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12190u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B121B4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B121D0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B121E0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B121F0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12200u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12224u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1226Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12278u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12288u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12290u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B122B4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B122BCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12308u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12310u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12324u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1232Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12334u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12344u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12348u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12378u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1239Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B123B8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B123C0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B123D8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B123E4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B123ECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B123F0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12404u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12418u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12434u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12448u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12450u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12464u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1246Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12470u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1248Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12518u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12520u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1253Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12558u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B125B0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B125CCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B125D4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B125DCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B125E4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B125FCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12734u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1278Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B127D8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12830u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1287Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B128D8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12ACCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12AE8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12B04u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12B40u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12B54u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12B5Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12B70u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12B78u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12B80u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12B94u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12B9Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12BB0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12BB8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12BC0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12BD4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12BDCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12BF0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12BF8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12C00u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12C14u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12C1Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12C30u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12C38u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12C40u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12C54u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12C5Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12C70u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12C78u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12C80u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12C94u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12C9Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12CB0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12CB8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12CC0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12CD4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12CDCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12CF0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12CF8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12D00u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12D14u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12D1Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12D30u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12D38u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12D40u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12D54u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12D5Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12D70u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12D78u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12D80u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12D94u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12D9Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12DB0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12DB8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12DC0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12DD4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12DDCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12DF0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12DF8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E00u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E14u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E1Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E20u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E54u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E5Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E64u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E98u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12EA0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12EA4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12ED0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F24u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F34u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F48u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F68u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F70u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F9Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12FC8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13044u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1304Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13054u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1305Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13068u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13084u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B130B0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B130DCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13158u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13160u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13168u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1316Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13184u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B131A0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B131BCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B131D8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B131F4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13210u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1322Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13244u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13280u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13288u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1329Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B132ECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B132F4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13334u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1333Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13344u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1334Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1335Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B133A0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B133FCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13414u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1341Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13424u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1342Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13454u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13468u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13474u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1348Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13498u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B134A0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B134B4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B134FCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13518u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1352Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13534u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13548u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13550u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13558u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13560u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B135ACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B135B4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B135C8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B135D0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B135D4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B135DCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13600u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13608u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1361Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13624u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13628u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13630u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13654u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1365Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13670u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13678u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1367Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13684u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B136B0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B136B8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B136CCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B136D4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B136D8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B136E0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B136E8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B136FCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13700u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13748u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13774u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13780u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13794u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1379Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B138B8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13A04u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13A0Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13A10u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13A20u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13A34u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13A3Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13A44u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13A4Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13A54u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13A5Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13A64u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13A68u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13A78u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13AA8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13AB4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13ABCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13AC4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13ACCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13AD4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13ADCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13AE4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13AECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13AF0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13B00u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13B20u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13B30u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13B38u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13B3Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13B44u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13B74u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13B7Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13B84u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13B94u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13BA4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13BACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13BB4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13BBCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13BC4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13BCCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13BD8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13BE0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13BE8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13BF8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C00u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C08u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C10u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C14u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C28u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C48u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C6Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C74u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C78u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C80u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13CA0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13CB0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13CB8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13CBCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13CC4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13CF0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13CF8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D00u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D0Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D1Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D24u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D28u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D38u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D44u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D4Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D50u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D58u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D78u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D80u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D84u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D8Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13DB8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13DC0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13DC8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13DD0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13DECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13DF4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13E00u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13E08u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13E10u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13E18u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13E20u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13E24u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13E34u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13E48u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13E50u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13E60u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13E68u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13E70u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13E7Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13E84u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13E94u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13E9Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13EA4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13EACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13EB4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13EB8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13EC8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13EE4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13EF4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13F00u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13F08u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13F24u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13F40u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13F48u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13F50u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13F5Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13F64u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13F68u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13F70u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13F78u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13F8Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13FE0u, &recomp_unit_0195, "recomp_unit_0195");
}
} // namespace psprecomp
