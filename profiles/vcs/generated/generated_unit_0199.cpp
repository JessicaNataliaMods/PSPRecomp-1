#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0199[4089] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 6, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0,
    0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0,
    0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 57, 0, 0, 58, 0, 0, 0,
    0, 59, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0,
    0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 73, 0, 0, 74,
    0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 102, 0, 103, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 107, 0, 0, 0, 108, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122,
    0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0,
    0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 133, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 138,
    0, 139, 0, 140, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147,
    0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 150, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 155, 0, 156, 0, 0, 157, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 161, 0, 162, 0, 163, 0,
    164, 0, 165, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0,
    0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 0, 185, 0, 186, 0, 0, 0, 187, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191,
    0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 196, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199,
    0, 0, 0, 0, 0, 200, 0, 201, 202, 0, 203, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 208, 209, 0,
    210, 0, 0, 0, 0, 211, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0,
    0, 218, 0, 0, 0, 0, 219, 0, 220, 0, 221, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 224, 0, 225, 0, 226, 0, 227, 0, 0, 0, 0,
    0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 232, 0, 233, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 238, 0,
    239, 0, 0, 0, 0, 240, 241, 0, 242, 0, 243, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 248, 0, 0, 0, 249,
    0, 250, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 258,
    0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274,
    0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285,
    0, 286, 0, 287, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0,
    297, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 310, 0,
    0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 319, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322,
    0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 327, 0, 328, 0, 329, 0, 330, 0, 331, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 334, 0, 0, 335, 0, 336, 0, 337, 0, 338, 0, 339, 0, 340, 0, 341, 0, 342, 0, 343, 0,
    344, 0, 345, 0, 0, 0, 346, 0, 0, 347, 0, 348, 0, 349, 0, 350, 0, 351, 0, 352, 0, 0, 0, 353, 0, 354, 0, 355, 0, 356, 0, 357,
    0, 358, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 0, 366, 0, 0, 0, 0,
    367, 0, 368, 0, 0, 0, 369, 0, 370, 0, 371, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0,
    377, 0, 378, 0, 0, 0, 379, 0, 380, 0, 381, 0, 0, 0, 382, 0, 0, 383, 0, 384, 0, 385, 0, 386, 0, 0, 387, 0, 0, 0, 388, 0,
    0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 399, 0, 400, 0, 0, 0, 401, 0,
    0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 406, 0, 0, 0, 0, 0,
    407, 0, 408, 0, 0, 0, 0, 409, 0, 410, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413,
    0, 414, 0, 415, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 418, 0, 419, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 0, 422, 0,
    423, 0, 0, 424, 0, 425, 0, 426, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0,
    0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 437, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441,
    0, 0, 0, 442, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 448, 0, 0, 0, 449, 0,
    0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 452, 0, 453, 0, 0, 0, 454, 0, 455, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0, 458, 0, 459,
    0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 0, 462, 0, 0, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 466, 0, 467, 0, 0, 468,
    0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0,
    0, 0, 0, 0, 0, 476, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0,
    0, 0, 0, 481, 0, 0, 0, 482, 0, 483, 0, 484, 0, 0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 488, 0,
    0, 0, 0, 0, 489, 0, 0, 490, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 493, 0, 0, 494, 0, 0, 0, 495, 0, 496, 0, 0, 0,
    0, 497, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 500, 0, 0, 0, 0, 0, 501, 502, 0, 0, 0, 0, 0, 0, 503, 0, 0,
    504, 0, 0, 0, 0, 0, 0, 505, 0, 0, 506, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 510, 0, 0, 0, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 0,
    513, 0, 0, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 0, 0, 0, 516, 0, 517, 0, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 0, 520,
    0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 529, 0, 0, 530, 0, 0,
    0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 0, 533, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0,
    0, 0, 0, 536, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 540, 0, 541, 0, 0, 542, 0, 543, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 547, 0, 548,
    0, 0, 0, 549, 0, 550, 0, 0, 551, 0, 552, 0, 553, 0, 554, 0, 0, 0, 0, 0, 0, 555, 0, 0, 556, 0, 0, 0, 0, 0, 0, 557,
    0, 0, 558, 0, 559, 0, 560, 0, 561, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 565, 0, 566, 0, 0, 0, 0, 0, 0, 0,
    567, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 569, 0, 570, 0, 571, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 573, 0, 0, 574, 0, 0,
    0, 0, 0, 0, 0, 575, 0, 0, 576, 0, 0, 577, 0, 578, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 580, 0, 0, 581, 0, 0, 582, 0,
    0, 0, 0, 0, 0, 0, 583, 0, 0, 584, 0, 0, 585, 0, 586, 0, 0, 0, 0, 0, 0, 587, 0, 588, 0, 589, 0, 590, 0, 0, 0, 591,
    0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 594, 0, 595, 0, 0, 596, 0, 597, 0, 0, 598, 0, 599, 0, 0, 600, 0, 0,
    0, 601, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 604, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0,
    0, 610, 0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 614, 0, 615, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 623, 0, 624, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 626, 0, 627, 0, 628, 629, 0, 0, 0, 630, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0,
    0, 0, 0, 635, 636, 637, 0, 0, 638, 0, 0, 639, 0, 640, 641, 0, 0, 642, 0, 0, 643, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 646, 0, 0, 0, 0, 647, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 649, 0, 650, 0, 651, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 656, 0, 657, 0, 658, 0,
    659, 0, 0, 660, 0, 0, 661, 0, 0, 662, 0, 0, 663, 0, 664, 0, 665, 0, 666, 0, 0, 667, 0, 0, 668, 0, 0, 669, 670, 0, 0, 671,
    0, 0, 672, 0, 673, 0, 0, 674, 0, 0, 675, 0, 0, 676, 677, 0, 0, 0, 678, 679, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 685, 0, 0, 0,
    686, 0, 0, 0, 0, 687, 0, 0, 688, 0, 689, 0, 0, 0, 0, 0, 0, 690, 0, 0, 691, 0, 0, 692, 0, 0, 0, 0, 0, 0, 693, 0,
    694, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 697, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0,
    0, 0, 702, 0, 703, 0, 704, 0, 705, 0, 706, 0, 707, 0, 708, 0, 709, 0, 710, 0, 711, 0, 712, 0, 713, 0, 714, 715, 0, 716, 0, 717,
    0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 724, 0, 725, 0, 0, 0, 726, 0, 0, 0, 727, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 730, 0, 731, 0, 0, 0, 732, 0, 0,
    733, 0, 0, 734, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 738, 0, 739, 0,
    0, 0, 0, 0, 740, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 743, 0,
    744, 0, 0, 0, 745, 0, 0, 746, 0, 0, 0, 0, 0, 747, 0, 0, 748, 0, 749, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 751, 0, 752, 0, 753, 0, 0, 0, 754, 0, 755, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 757, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 759, 0, 760, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 767,
};
void recomp_unit_0199_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B20000u;
        entry_id = (entry_delta < 16356u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0199[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B20000;
    case 2u: goto L_08B20004;
    case 3u: goto L_08B2002C;
    case 4u: goto L_08B20034;
    case 5u: goto L_08B2003C;
    case 6u: goto L_08B20048;
    case 7u: goto L_08B20050;
    case 8u: goto L_08B2005C;
    case 9u: goto L_08B20084;
    case 10u: goto L_08B20098;
    case 11u: goto L_08B200D0;
    case 12u: goto L_08B200E4;
    case 13u: goto L_08B2010C;
    case 14u: goto L_08B20120;
    case 15u: goto L_08B20128;
    case 16u: goto L_08B20130;
    case 17u: goto L_08B20138;
    case 18u: goto L_08B20140;
    case 19u: goto L_08B2014C;
    case 20u: goto L_08B20168;
    case 21u: goto L_08B20178;
    case 22u: goto L_08B20184;
    case 23u: goto L_08B20194;
    case 24u: goto L_08B201A0;
    case 25u: goto L_08B201A8;
    case 26u: goto L_08B201B8;
    case 27u: goto L_08B201C4;
    case 28u: goto L_08B201DC;
    case 29u: goto L_08B201E4;
    case 30u: goto L_08B20200;
    case 31u: goto L_08B2020C;
    case 32u: goto L_08B20218;
    case 33u: goto L_08B20224;
    case 34u: goto L_08B20234;
    case 35u: goto L_08B20244;
    case 36u: goto L_08B20248;
    case 37u: goto L_08B20274;
    case 38u: goto L_08B20280;
    case 39u: goto L_08B202A8;
    case 40u: goto L_08B202B0;
    case 41u: goto L_08B202B8;
    case 42u: goto L_08B202D0;
    case 43u: goto L_08B202DC;
    case 44u: goto L_08B202E4;
    case 45u: goto L_08B202EC;
    case 46u: goto L_08B20304;
    case 47u: goto L_08B20310;
    case 48u: goto L_08B20328;
    case 49u: goto L_08B20334;
    case 50u: goto L_08B2034C;
    case 51u: goto L_08B20354;
    case 52u: goto L_08B20368;
    case 53u: goto L_08B20398;
    case 54u: goto L_08B203A0;
    case 55u: goto L_08B203C8;
    case 56u: goto L_08B203DC;
    case 57u: goto L_08B203E4;
    case 58u: goto L_08B203F0;
    case 59u: goto L_08B20404;
    case 60u: goto L_08B20408;
    case 61u: goto L_08B20524;
    case 62u: goto L_08B20544;
    case 63u: goto L_08B2054C;
    case 64u: goto L_08B2056C;
    case 65u: goto L_08B20574;
    case 66u: goto L_08B20584;
    case 67u: goto L_08B20590;
    case 68u: goto L_08B2059C;
    case 69u: goto L_08B205A8;
    case 70u: goto L_08B205BC;
    case 71u: goto L_08B205D8;
    case 72u: goto L_08B205E0;
    case 73u: goto L_08B205F0;
    case 74u: goto L_08B205FC;
    case 75u: goto L_08B20610;
    case 76u: goto L_08B20618;
    case 77u: goto L_08B20630;
    case 78u: goto L_08B2065C;
    case 79u: goto L_08B20680;
    case 80u: goto L_08B20698;
    case 81u: goto L_08B2070C;
    case 82u: goto L_08B20714;
    case 83u: goto L_08B20720;
    case 84u: goto L_08B20740;
    case 85u: goto L_08B20750;
    case 86u: goto L_08B20764;
    case 87u: goto L_08B20778;
    case 88u: goto L_08B207B0;
    case 89u: goto L_08B207C0;
    case 90u: goto L_08B207D0;
    case 91u: goto L_08B207D4;
    case 92u: goto L_08B207DC;
    case 93u: goto L_08B2080C;
    case 94u: goto L_08B2082C;
    case 95u: goto L_08B20834;
    case 96u: goto L_08B2083C;
    case 97u: goto L_08B2084C;
    case 98u: goto L_08B2085C;
    case 99u: goto L_08B20864;
    case 100u: goto L_08B208B8;
    case 101u: goto L_08B208C4;
    case 102u: goto L_08B208C8;
    case 103u: goto L_08B208D0;
    case 104u: goto L_08B208D4;
    case 105u: goto L_08B208DC;
    case 106u: goto L_08B20900;
    case 107u: goto L_08B2090C;
    case 108u: goto L_08B2091C;
    case 109u: goto L_08B20924;
    case 110u: goto L_08B20934;
    case 111u: goto L_08B20980;
    case 112u: goto L_08B20990;
    case 113u: goto L_08B20998;
    case 114u: goto L_08B209A8;
    case 115u: goto L_08B209B4;
    case 116u: goto L_08B209C0;
    case 117u: goto L_08B209D8;
    case 118u: goto L_08B209F8;
    case 119u: goto L_08B20A24;
    case 120u: goto L_08B20A2C;
    case 121u: goto L_08B20A60;
    case 122u: goto L_08B20A7C;
    case 123u: goto L_08B20A84;
    case 124u: goto L_08B20ACC;
    case 125u: goto L_08B20B14;
    case 126u: goto L_08B20B6C;
    case 127u: goto L_08B20B88;
    case 128u: goto L_08B20BD8;
    case 129u: goto L_08B20BEC;
    case 130u: goto L_08B20C10;
    case 131u: goto L_08B20C24;
    case 132u: goto L_08B20C34;
    case 133u: goto L_08B20C3C;
    case 134u: goto L_08B20C44;
    case 135u: goto L_08B20C50;
    case 136u: goto L_08B20C5C;
    case 137u: goto L_08B20C68;
    case 138u: goto L_08B20C7C;
    case 139u: goto L_08B20C84;
    case 140u: goto L_08B20C8C;
    case 141u: goto L_08B20C90;
    case 142u: goto L_08B20C98;
    case 143u: goto L_08B20CBC;
    case 144u: goto L_08B20CC4;
    case 145u: goto L_08B20CD4;
    case 146u: goto L_08B20CE8;
    case 147u: goto L_08B20CFC;
    case 148u: goto L_08B20D10;
    case 149u: goto L_08B20D20;
    case 150u: goto L_08B20D28;
    case 151u: goto L_08B20D30;
    case 152u: goto L_08B20D3C;
    case 153u: goto L_08B20D48;
    case 154u: goto L_08B20D58;
    case 155u: goto L_08B20D60;
    case 156u: goto L_08B20D68;
    case 157u: goto L_08B20D74;
    case 158u: goto L_08B20DCC;
    case 159u: goto L_08B20DD4;
    case 160u: goto L_08B20DDC;
    case 161u: goto L_08B20DE8;
    case 162u: goto L_08B20DF0;
    case 163u: goto L_08B20DF8;
    case 164u: goto L_08B20E00;
    case 165u: goto L_08B20E08;
    case 166u: goto L_08B20E14;
    case 167u: goto L_08B20E28;
    case 168u: goto L_08B20E40;
    case 169u: goto L_08B20E5C;
    case 170u: goto L_08B20E64;
    case 171u: goto L_08B20E88;
    case 172u: goto L_08B20E94;
    case 173u: goto L_08B20EA0;
    case 174u: goto L_08B20EA8;
    case 175u: goto L_08B20EB8;
    case 176u: goto L_08B20F14;
    case 177u: goto L_08B20F24;
    case 178u: goto L_08B20F30;
    case 179u: goto L_08B20F3C;
    case 180u: goto L_08B20F50;
    case 181u: goto L_08B20F5C;
    case 182u: goto L_08B21038;
    case 183u: goto L_08B21048;
    case 184u: goto L_08B21050;
    case 185u: goto L_08B21060;
    case 186u: goto L_08B21068;
    case 187u: goto L_08B21078;
    case 188u: goto L_08B21080;
    case 189u: goto L_08B210C4;
    case 190u: goto L_08B210F4;
    case 191u: goto L_08B210FC;
    case 192u: goto L_08B21104;
    case 193u: goto L_08B21120;
    case 194u: goto L_08B2112C;
    case 195u: goto L_08B21144;
    case 196u: goto L_08B2114C;
    case 197u: goto L_08B21150;
    case 198u: goto L_08B2116C;
    case 199u: goto L_08B2117C;
    case 200u: goto L_08B21194;
    case 201u: goto L_08B2119C;
    case 202u: goto L_08B211A0;
    case 203u: goto L_08B211A8;
    case 204u: goto L_08B211AC;
    case 205u: goto L_08B211C8;
    case 206u: goto L_08B211D4;
    case 207u: goto L_08B211EC;
    case 208u: goto L_08B211F4;
    case 209u: goto L_08B211F8;
    case 210u: goto L_08B21200;
    case 211u: goto L_08B21214;
    case 212u: goto L_08B2121C;
    case 213u: goto L_08B21228;
    case 214u: goto L_08B21244;
    case 215u: goto L_08B2124C;
    case 216u: goto L_08B21264;
    case 217u: goto L_08B21270;
    case 218u: goto L_08B21284;
    case 219u: goto L_08B21298;
    case 220u: goto L_08B212A0;
    case 221u: goto L_08B212A8;
    case 222u: goto L_08B212B4;
    case 223u: goto L_08B212C8;
    case 224u: goto L_08B212D4;
    case 225u: goto L_08B212DC;
    case 226u: goto L_08B212E4;
    case 227u: goto L_08B212EC;
    case 228u: goto L_08B21304;
    case 229u: goto L_08B21310;
    case 230u: goto L_08B2131C;
    case 231u: goto L_08B21328;
    case 232u: goto L_08B21330;
    case 233u: goto L_08B21338;
    case 234u: goto L_08B21340;
    case 235u: goto L_08B21348;
    case 236u: goto L_08B21364;
    case 237u: goto L_08B21370;
    case 238u: goto L_08B21378;
    case 239u: goto L_08B21380;
    case 240u: goto L_08B21394;
    case 241u: goto L_08B21398;
    case 242u: goto L_08B213A0;
    case 243u: goto L_08B213A8;
    case 244u: goto L_08B213AC;
    case 245u: goto L_08B213BC;
    case 246u: goto L_08B213D8;
    case 247u: goto L_08B213E0;
    case 248u: goto L_08B213EC;
    case 249u: goto L_08B213FC;
    case 250u: goto L_08B21404;
    case 251u: goto L_08B21418;
    case 252u: goto L_08B21420;
    case 253u: goto L_08B21484;
    case 254u: goto L_08B21490;
    case 255u: goto L_08B214B8;
    case 256u: goto L_08B214D8;
    case 257u: goto L_08B214E0;
    case 258u: goto L_08B214FC;
    case 259u: goto L_08B21508;
    case 260u: goto L_08B21524;
    case 261u: goto L_08B21530;
    case 262u: goto L_08B2154C;
    case 263u: goto L_08B21558;
    case 264u: goto L_08B21570;
    case 265u: goto L_08B21594;
    case 266u: goto L_08B215A0;
    case 267u: goto L_08B215AC;
    case 268u: goto L_08B2162C;
    case 269u: goto L_08B21648;
    case 270u: goto L_08B21658;
    case 271u: goto L_08B21668;
    case 272u: goto L_08B21678;
    case 273u: goto L_08B216D8;
    case 274u: goto L_08B216FC;
    case 275u: goto L_08B21714;
    case 276u: goto L_08B21720;
    case 277u: goto L_08B21748;
    case 278u: goto L_08B21754;
    case 279u: goto L_08B21784;
    case 280u: goto L_08B217A4;
    case 281u: goto L_08B217A8;
    case 282u: goto L_08B217BC;
    case 283u: goto L_08B217D4;
    case 284u: goto L_08B217F4;
    case 285u: goto L_08B217FC;
    case 286u: goto L_08B21804;
    case 287u: goto L_08B2180C;
    case 288u: goto L_08B21818;
    case 289u: goto L_08B21824;
    case 290u: goto L_08B21838;
    case 291u: goto L_08B21840;
    case 292u: goto L_08B218B0;
    case 293u: goto L_08B218BC;
    case 294u: goto L_08B218D8;
    case 295u: goto L_08B21940;
    case 296u: goto L_08B21964;
    case 297u: goto L_08B21980;
    case 298u: goto L_08B21984;
    case 299u: goto L_08B2199C;
    case 300u: goto L_08B219AC;
    case 301u: goto L_08B219C8;
    case 302u: goto L_08B219E4;
    case 303u: goto L_08B219F0;
    case 304u: goto L_08B21A10;
    case 305u: goto L_08B21A18;
    case 306u: goto L_08B21A34;
    case 307u: goto L_08B21A3C;
    case 308u: goto L_08B21A58;
    case 309u: goto L_08B21A64;
    case 310u: goto L_08B21A78;
    case 311u: goto L_08B21A94;
    case 312u: goto L_08B21AAC;
    case 313u: goto L_08B21AB8;
    case 314u: goto L_08B21AC0;
    case 315u: goto L_08B21AD4;
    case 316u: goto L_08B21AE4;
    case 317u: goto L_08B21B38;
    case 318u: goto L_08B21B40;
    case 319u: goto L_08B21B44;
    case 320u: goto L_08B21B4C;
    case 321u: goto L_08B21B60;
    case 322u: goto L_08B21B7C;
    case 323u: goto L_08B21B8C;
    case 324u: goto L_08B21B98;
    case 325u: goto L_08B21BBC;
    case 326u: goto L_08B21BC4;
    case 327u: goto L_08B21BCC;
    case 328u: goto L_08B21BD4;
    case 329u: goto L_08B21BDC;
    case 330u: goto L_08B21BE4;
    case 331u: goto L_08B21BEC;
    case 332u: goto L_08B21C14;
    case 333u: goto L_08B21C1C;
    case 334u: goto L_08B21C2C;
    case 335u: goto L_08B21C38;
    case 336u: goto L_08B21C40;
    case 337u: goto L_08B21C48;
    case 338u: goto L_08B21C50;
    case 339u: goto L_08B21C58;
    case 340u: goto L_08B21C60;
    case 341u: goto L_08B21C68;
    case 342u: goto L_08B21C70;
    case 343u: goto L_08B21C78;
    case 344u: goto L_08B21C80;
    case 345u: goto L_08B21C88;
    case 346u: goto L_08B21C98;
    case 347u: goto L_08B21CA4;
    case 348u: goto L_08B21CAC;
    case 349u: goto L_08B21CB4;
    case 350u: goto L_08B21CBC;
    case 351u: goto L_08B21CC4;
    case 352u: goto L_08B21CCC;
    case 353u: goto L_08B21CDC;
    case 354u: goto L_08B21CE4;
    case 355u: goto L_08B21CEC;
    case 356u: goto L_08B21CF4;
    case 357u: goto L_08B21CFC;
    case 358u: goto L_08B21D04;
    case 359u: goto L_08B21D0C;
    case 360u: goto L_08B21D1C;
    case 361u: goto L_08B21D40;
    case 362u: goto L_08B21D48;
    case 363u: goto L_08B21D50;
    case 364u: goto L_08B21D58;
    case 365u: goto L_08B21D60;
    case 366u: goto L_08B21D6C;
    case 367u: goto L_08B21D80;
    case 368u: goto L_08B21D88;
    case 369u: goto L_08B21D98;
    case 370u: goto L_08B21DA0;
    case 371u: goto L_08B21DA8;
    case 372u: goto L_08B21DC0;
    case 373u: goto L_08B21DC8;
    case 374u: goto L_08B21DD4;
    case 375u: goto L_08B21DDC;
    case 376u: goto L_08B21DF8;
    case 377u: goto L_08B21E00;
    case 378u: goto L_08B21E08;
    case 379u: goto L_08B21E18;
    case 380u: goto L_08B21E20;
    case 381u: goto L_08B21E28;
    case 382u: goto L_08B21E38;
    case 383u: goto L_08B21E44;
    case 384u: goto L_08B21E4C;
    case 385u: goto L_08B21E54;
    case 386u: goto L_08B21E5C;
    case 387u: goto L_08B21E68;
    case 388u: goto L_08B21E78;
    case 389u: goto L_08B21E88;
    case 390u: goto L_08B21EAC;
    case 391u: goto L_08B21EB4;
    case 392u: goto L_08B21ED0;
    case 393u: goto L_08B21F08;
    case 394u: goto L_08B21F20;
    case 395u: goto L_08B21F2C;
    case 396u: goto L_08B21F34;
    case 397u: goto L_08B21F44;
    case 398u: goto L_08B21F54;
    case 399u: goto L_08B21F60;
    case 400u: goto L_08B21F68;
    case 401u: goto L_08B21F78;
    case 402u: goto L_08B21F8C;
    case 403u: goto L_08B21FA8;
    case 404u: goto L_08B21FC4;
    case 405u: goto L_08B21FE4;
    case 406u: goto L_08B21FE8;
    case 407u: goto L_08B22000;
    case 408u: goto L_08B22008;
    case 409u: goto L_08B2201C;
    case 410u: goto L_08B22024;
    case 411u: goto L_08B2202C;
    case 412u: goto L_08B22060;
    case 413u: goto L_08B2207C;
    case 414u: goto L_08B22084;
    case 415u: goto L_08B2208C;
    case 416u: goto L_08B2209C;
    case 417u: goto L_08B220AC;
    case 418u: goto L_08B220B8;
    case 419u: goto L_08B220C0;
    case 420u: goto L_08B220D8;
    case 421u: goto L_08B220E0;
    case 422u: goto L_08B220F8;
    case 423u: goto L_08B22100;
    case 424u: goto L_08B2210C;
    case 425u: goto L_08B22114;
    case 426u: goto L_08B2211C;
    case 427u: goto L_08B22124;
    case 428u: goto L_08B22144;
    case 429u: goto L_08B22154;
    case 430u: goto L_08B22160;
    case 431u: goto L_08B2216C;
    case 432u: goto L_08B22188;
    case 433u: goto L_08B221A0;
    case 434u: goto L_08B22208;
    case 435u: goto L_08B22230;
    case 436u: goto L_08B2223C;
    case 437u: goto L_08B22244;
    case 438u: goto L_08B2224C;
    case 439u: goto L_08B2225C;
    case 440u: goto L_08B2226C;
    case 441u: goto L_08B2227C;
    case 442u: goto L_08B2228C;
    case 443u: goto L_08B22294;
    case 444u: goto L_08B222A4;
    case 445u: goto L_08B222BC;
    case 446u: goto L_08B222CC;
    case 447u: goto L_08B222E0;
    case 448u: goto L_08B222E8;
    case 449u: goto L_08B222F8;
    case 450u: goto L_08B22308;
    case 451u: goto L_08B22318;
    case 452u: goto L_08B22328;
    case 453u: goto L_08B22330;
    case 454u: goto L_08B22340;
    case 455u: goto L_08B22348;
    case 456u: goto L_08B22354;
    case 457u: goto L_08B22364;
    case 458u: goto L_08B22374;
    case 459u: goto L_08B2237C;
    case 460u: goto L_08B2239C;
    case 461u: goto L_08B223A8;
    case 462u: goto L_08B223B4;
    case 463u: goto L_08B223C4;
    case 464u: goto L_08B223D0;
    case 465u: goto L_08B223DC;
    case 466u: goto L_08B223E8;
    case 467u: goto L_08B223F0;
    case 468u: goto L_08B223FC;
    case 469u: goto L_08B22414;
    case 470u: goto L_08B2242C;
    case 471u: goto L_08B22480;
    case 472u: goto L_08B224B4;
    case 473u: goto L_08B224CC;
    case 474u: goto L_08B224E8;
    case 475u: goto L_08B224F8;
    case 476u: goto L_08B22514;
    case 477u: goto L_08B2251C;
    case 478u: goto L_08B22538;
    case 479u: goto L_08B22554;
    case 480u: goto L_08B22570;
    case 481u: goto L_08B2258C;
    case 482u: goto L_08B2259C;
    case 483u: goto L_08B225A4;
    case 484u: goto L_08B225AC;
    case 485u: goto L_08B225B8;
    case 486u: goto L_08B225D4;
    case 487u: goto L_08B225EC;
    case 488u: goto L_08B225F8;
    case 489u: goto L_08B22610;
    case 490u: goto L_08B2261C;
    case 491u: goto L_08B22628;
    case 492u: goto L_08B22640;
    case 493u: goto L_08B2264C;
    case 494u: goto L_08B22658;
    case 495u: goto L_08B22668;
    case 496u: goto L_08B22670;
    case 497u: goto L_08B22684;
    case 498u: goto L_08B2268C;
    case 499u: goto L_08B226B0;
    case 500u: goto L_08B226BC;
    case 501u: goto L_08B226D4;
    case 502u: goto L_08B226D8;
    case 503u: goto L_08B226F4;
    case 504u: goto L_08B22700;
    case 505u: goto L_08B2271C;
    case 506u: goto L_08B22728;
    case 507u: goto L_08B22740;
    case 508u: goto L_08B22758;
    case 509u: goto L_08B227B8;
    case 510u: goto L_08B227C4;
    case 511u: goto L_08B227D8;
    case 512u: goto L_08B227E0;
    case 513u: goto L_08B22800;
    case 514u: goto L_08B2281C;
    case 515u: goto L_08B22828;
    case 516u: goto L_08B22840;
    case 517u: goto L_08B22848;
    case 518u: goto L_08B22854;
    case 519u: goto L_08B22870;
    case 520u: goto L_08B2287C;
    case 521u: goto L_08B22894;
    case 522u: goto L_08B228AC;
    case 523u: goto L_08B2290C;
    case 524u: goto L_08B22918;
    case 525u: goto L_08B2292C;
    case 526u: goto L_08B22934;
    case 527u: goto L_08B22948;
    case 528u: goto L_08B2295C;
    case 529u: goto L_08B22968;
    case 530u: goto L_08B22974;
    case 531u: goto L_08B2298C;
    case 532u: goto L_08B229A8;
    case 533u: goto L_08B229B4;
    case 534u: goto L_08B229BC;
    case 535u: goto L_08B229EC;
    case 536u: goto L_08B22A0C;
    case 537u: goto L_08B22A18;
    case 538u: goto L_08B22A38;
    case 539u: goto L_08B22A40;
    case 540u: goto L_08B22A94;
    case 541u: goto L_08B22A9C;
    case 542u: goto L_08B22AA8;
    case 543u: goto L_08B22AB0;
    case 544u: goto L_08B22ABC;
    case 545u: goto L_08B22AD8;
    case 546u: goto L_08B22AE4;
    case 547u: goto L_08B22AF4;
    case 548u: goto L_08B22AFC;
    case 549u: goto L_08B22B0C;
    case 550u: goto L_08B22B14;
    case 551u: goto L_08B22B20;
    case 552u: goto L_08B22B28;
    case 553u: goto L_08B22B30;
    case 554u: goto L_08B22B38;
    case 555u: goto L_08B22B54;
    case 556u: goto L_08B22B60;
    case 557u: goto L_08B22B7C;
    case 558u: goto L_08B22B88;
    case 559u: goto L_08B22B90;
    case 560u: goto L_08B22B98;
    case 561u: goto L_08B22BA0;
    case 562u: goto L_08B22BAC;
    case 563u: goto L_08B22BBC;
    case 564u: goto L_08B22BCC;
    case 565u: goto L_08B22BD8;
    case 566u: goto L_08B22BE0;
    case 567u: goto L_08B22C00;
    case 568u: goto L_08B22C24;
    case 569u: goto L_08B22C2C;
    case 570u: goto L_08B22C34;
    case 571u: goto L_08B22C3C;
    case 572u: goto L_08B22C5C;
    case 573u: goto L_08B22C68;
    case 574u: goto L_08B22C74;
    case 575u: goto L_08B22C94;
    case 576u: goto L_08B22CA0;
    case 577u: goto L_08B22CAC;
    case 578u: goto L_08B22CB4;
    case 579u: goto L_08B22CD4;
    case 580u: goto L_08B22CE0;
    case 581u: goto L_08B22CEC;
    case 582u: goto L_08B22CF8;
    case 583u: goto L_08B22D18;
    case 584u: goto L_08B22D24;
    case 585u: goto L_08B22D30;
    case 586u: goto L_08B22D38;
    case 587u: goto L_08B22D54;
    case 588u: goto L_08B22D5C;
    case 589u: goto L_08B22D64;
    case 590u: goto L_08B22D6C;
    case 591u: goto L_08B22D7C;
    case 592u: goto L_08B22D84;
    case 593u: goto L_08B22DB0;
    case 594u: goto L_08B22DB8;
    case 595u: goto L_08B22DC0;
    case 596u: goto L_08B22DCC;
    case 597u: goto L_08B22DD4;
    case 598u: goto L_08B22DE0;
    case 599u: goto L_08B22DE8;
    case 600u: goto L_08B22DF4;
    case 601u: goto L_08B22E04;
    case 602u: goto L_08B22E14;
    case 603u: goto L_08B22E28;
    case 604u: goto L_08B22E30;
    case 605u: goto L_08B22E44;
    case 606u: goto L_08B22E6C;
    case 607u: goto L_08B22EB0;
    case 608u: goto L_08B22ED4;
    case 609u: goto L_08B22EEC;
    case 610u: goto L_08B22F04;
    case 611u: goto L_08B22F0C;
    case 612u: goto L_08B22F1C;
    case 613u: goto L_08B22F38;
    case 614u: goto L_08B22F4C;
    case 615u: goto L_08B22F54;
    case 616u: goto L_08B22F60;
    case 617u: goto L_08B22FD4;
    case 618u: goto L_08B22FF8;
    case 619u: goto L_08B23044;
    case 620u: goto L_08B23068;
    case 621u: goto L_08B23094;
    case 622u: goto L_08B23130;
    case 623u: goto L_08B2313C;
    case 624u: goto L_08B23144;
    case 625u: goto L_08B2314C;
    case 626u: goto L_08B23184;
    case 627u: goto L_08B2318C;
    case 628u: goto L_08B23194;
    case 629u: goto L_08B23198;
    case 630u: goto L_08B231A8;
    case 631u: goto L_08B231B8;
    case 632u: goto L_08B231E0;
    case 633u: goto L_08B23230;
    case 634u: goto L_08B2326C;
    case 635u: goto L_08B2328C;
    case 636u: goto L_08B23290;
    case 637u: goto L_08B23294;
    case 638u: goto L_08B232A0;
    case 639u: goto L_08B232AC;
    case 640u: goto L_08B232B4;
    case 641u: goto L_08B232B8;
    case 642u: goto L_08B232C4;
    case 643u: goto L_08B232D0;
    case 644u: goto L_08B232D8;
    case 645u: goto L_08B2331C;
    case 646u: goto L_08B23328;
    case 647u: goto L_08B2333C;
    case 648u: goto L_08B23344;
    case 649u: goto L_08B23414;
    case 650u: goto L_08B2341C;
    case 651u: goto L_08B23424;
    case 652u: goto L_08B2342C;
    case 653u: goto L_08B23454;
    case 654u: goto L_08B234A8;
    case 655u: goto L_08B234D0;
    case 656u: goto L_08B234E8;
    case 657u: goto L_08B234F0;
    case 658u: goto L_08B234F8;
    case 659u: goto L_08B23500;
    case 660u: goto L_08B2350C;
    case 661u: goto L_08B23518;
    case 662u: goto L_08B23524;
    case 663u: goto L_08B23530;
    case 664u: goto L_08B23538;
    case 665u: goto L_08B23540;
    case 666u: goto L_08B23548;
    case 667u: goto L_08B23554;
    case 668u: goto L_08B23560;
    case 669u: goto L_08B2356C;
    case 670u: goto L_08B23570;
    case 671u: goto L_08B2357C;
    case 672u: goto L_08B23588;
    case 673u: goto L_08B23590;
    case 674u: goto L_08B2359C;
    case 675u: goto L_08B235A8;
    case 676u: goto L_08B235B4;
    case 677u: goto L_08B235B8;
    case 678u: goto L_08B235C8;
    case 679u: goto L_08B235CC;
    case 680u: goto L_08B235D8;
    case 681u: goto L_08B23610;
    case 682u: goto L_08B23624;
    case 683u: goto L_08B23634;
    case 684u: goto L_08B23664;
    case 685u: goto L_08B23670;
    case 686u: goto L_08B23680;
    case 687u: goto L_08B23694;
    case 688u: goto L_08B236A0;
    case 689u: goto L_08B236A8;
    case 690u: goto L_08B236C4;
    case 691u: goto L_08B236D0;
    case 692u: goto L_08B236DC;
    case 693u: goto L_08B236F8;
    case 694u: goto L_08B23700;
    case 695u: goto L_08B23710;
    case 696u: goto L_08B23720;
    case 697u: goto L_08B2372C;
    case 698u: goto L_08B23734;
    case 699u: goto L_08B23774;
    case 700u: goto L_08B238B0;
    case 701u: goto L_08B238F4;
    case 702u: goto L_08B23908;
    case 703u: goto L_08B23910;
    case 704u: goto L_08B23918;
    case 705u: goto L_08B23920;
    case 706u: goto L_08B23928;
    case 707u: goto L_08B23930;
    case 708u: goto L_08B23938;
    case 709u: goto L_08B23940;
    case 710u: goto L_08B23948;
    case 711u: goto L_08B23950;
    case 712u: goto L_08B23958;
    case 713u: goto L_08B23960;
    case 714u: goto L_08B23968;
    case 715u: goto L_08B2396C;
    case 716u: goto L_08B23974;
    case 717u: goto L_08B2397C;
    case 718u: goto L_08B23984;
    case 719u: goto L_08B239CC;
    case 720u: goto L_08B23A2C;
    case 721u: goto L_08B23A70;
    case 722u: goto L_08B23A98;
    case 723u: goto L_08B23AD8;
    case 724u: goto L_08B23B0C;
    case 725u: goto L_08B23B14;
    case 726u: goto L_08B23B24;
    case 727u: goto L_08B23B34;
    case 728u: goto L_08B23B3C;
    case 729u: goto L_08B23BD0;
    case 730u: goto L_08B23BDC;
    case 731u: goto L_08B23BE4;
    case 732u: goto L_08B23BF4;
    case 733u: goto L_08B23C00;
    case 734u: goto L_08B23C0C;
    case 735u: goto L_08B23C20;
    case 736u: goto L_08B23C28;
    case 737u: goto L_08B23C58;
    case 738u: goto L_08B23C70;
    case 739u: goto L_08B23C78;
    case 740u: goto L_08B23C90;
    case 741u: goto L_08B23CA0;
    case 742u: goto L_08B23CF0;
    case 743u: goto L_08B23CF8;
    case 744u: goto L_08B23D00;
    case 745u: goto L_08B23D10;
    case 746u: goto L_08B23D1C;
    case 747u: goto L_08B23D34;
    case 748u: goto L_08B23D40;
    case 749u: goto L_08B23D48;
    case 750u: goto L_08B23D60;
    case 751u: goto L_08B23D9C;
    case 752u: goto L_08B23DA4;
    case 753u: goto L_08B23DAC;
    case 754u: goto L_08B23DBC;
    case 755u: goto L_08B23DC4;
    case 756u: goto L_08B23DE0;
    case 757u: goto L_08B23DF4;
    case 758u: goto L_08B23E34;
    case 759u: goto L_08B23E40;
    case 760u: goto L_08B23E48;
    case 761u: goto L_08B23E58;
    case 762u: goto L_08B23EB8;
    case 763u: goto L_08B23EE8;
    case 764u: goto L_08B23F2C;
    case 765u: goto L_08B23F54;
    case 766u: goto L_08B23FBC;
    case 767u: goto L_08B23FE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B20000:
    hot_regs.g2 = (hot_regs.g4 | 0u);
    goto L_08B20004;
L_08B20004:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (2280u << 16u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(20144));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12592));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08B2002Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 640u, 0x08AAEFC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2002Cu) goto L_08B2002C;
    return;
L_08B2002C:
    hot_regs.g31 = (0x08B20034u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(3612));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B20034u) goto L_08B20034;
    return;
L_08B20034:
    hot_regs.g31 = (0x08B2003Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 632u, 0x08AAEF5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2003Cu) goto L_08B2003C;
    return;
L_08B2003C:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(3624));
    hot_regs.g31 = (0x08B20048u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B20048u) goto L_08B20048;
    return;
L_08B20048:
    hot_regs.g31 = (0x08B20050u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(3608), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 642u, 0x08AAEFE8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B20050u) goto L_08B20050;
    return;
L_08B20050:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-128));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-129));
    goto L_08B2005C;
L_08B2005C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g16 = ctx.gpr[16];
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(406))))));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g7 = (g7 & hot_regs.g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(406), static_cast<std::uint8_t>(g7));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(406))))));
    g7 = (g7 & hot_regs.g6);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(406), static_cast<std::uint8_t>(g7));
    g7 = (static_cast<std::int32_t>(g4) < 32 ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    g16 = (g16 + static_cast<std::uint32_t>(416));
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08B2005C;
      }
      goto L_08B20084;
    }
}
L_08B20084:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08B20098;
L_08B20098:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g17 = ctx.gpr[17];
    aot_mem.aot_store16(g17 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g5));
    aot_mem.aot_store16(g17 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g6));
    aot_mem.aot_store16(g17 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g7));
    aot_mem.aot_store16(g17 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(g7));
    aot_mem.aot_store16(g17 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(g6));
    aot_mem.aot_store16(g17 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(g8));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (g5 + static_cast<std::uint32_t>(2));
    g17 = (g17 + static_cast<std::uint32_t>(12));
    g6 = (g6 + static_cast<std::uint32_t>(2));
    g7 = (g7 + static_cast<std::uint32_t>(2));
    ctx.gpr[9] = (static_cast<std::int32_t>(g4) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    g8 = (g8 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08B20098;
      }
      goto L_08B200D0;
    }
}
L_08B200D0:
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
L_08B200E4:
{
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g11 = ctx.gpr[11];
    g11 = (2280u << 16u);
    g11 = (g11 + static_cast<std::uint32_t>(20144));
    g9 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-128));
    ctx.gpr[8] = (g9 + static_cast<std::uint32_t>(2500));
    hot_regs.g7 = (g9 + static_cast<std::uint32_t>(5000));
    hot_regs.g6 = (g9 + static_cast<std::uint32_t>(10000));
    hot_regs.g5 = (g9 + static_cast<std::uint32_t>(20000));
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[9] = g9;
    ctx.gpr[11] = g11;
    goto L_08B2010C;
}
L_08B2010C:
{
    std::uint32_t g12 = ctx.gpr[12];
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(406))))));
    g12 = (ctx.gpr[3] & 127u);
    ctx.gpr[13] = (static_cast<std::int32_t>(g12) < 2 ? 1u : 0u);
    if (ctx.gpr[13] == 0u) {
    g12 = (static_cast<std::int32_t>(g12) < 3 ? 1u : 0u);
    ctx.gpr[12] = g12;
        goto L_08B20130;
    }
    goto L_08B20120;
}
L_08B20120:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B201C4;
      }
      goto L_08B20128;
    }
L_08B20128:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B20140;
      }
      goto L_08B20130;
    }
L_08B20130:
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B201A8;
      }
      goto L_08B20138;
    }
L_08B20138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B201C4;
      }
      goto L_08B20140;
    }
L_08B20140:
    ctx.gpr[12] = (ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B201A0;
      }
      goto L_08B2014C;
    }
L_08B2014C:
{
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g12 = ctx.gpr[12];
    g3 = (g3 & ctx.gpr[10]);
    g12 = (g3 | 2u);
    g3 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(404))))));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(406), static_cast<std::uint8_t>(g12));
    g12 = (static_cast<std::int32_t>(g3) < 4 ? 1u : 0u);
    { const bool branch_taken = g12 == 0u;
    // nop
    ctx.gpr[3] = g3;
    ctx.gpr[12] = g12;
      if (branch_taken) {
          goto L_08B20178;
      }
      goto L_08B20168;
    }
}
L_08B20168:
{
    std::uint32_t g11 = ctx.gpr[11];
    aot_mem.aot_store32(g11 + static_cast<std::uint32_t>(392), ctx.gpr[8]);
    aot_mem.aot_store32(g11 + static_cast<std::uint32_t>(396), hot_regs.g7);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(406))))));
      if (branch_taken) {
          goto L_08B201A0;
      }
      goto L_08B20178;
    }
}
L_08B20178:
{
    std::uint32_t g3 = ctx.gpr[3];
    g3 = (static_cast<std::int32_t>(g3) < 9 ? 1u : 0u);
    { const bool branch_taken = g3 == 0u;
    // nop
    ctx.gpr[3] = g3;
      if (branch_taken) {
          goto L_08B20194;
      }
      goto L_08B20184;
    }
}
L_08B20184:
{
    std::uint32_t g11 = ctx.gpr[11];
    aot_mem.aot_store32(g11 + static_cast<std::uint32_t>(392), hot_regs.g7);
    aot_mem.aot_store32(g11 + static_cast<std::uint32_t>(396), hot_regs.g6);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(406))))));
      if (branch_taken) {
          goto L_08B201A0;
      }
      goto L_08B20194;
    }
}
L_08B20194:
{
    std::uint32_t g11 = ctx.gpr[11];
    aot_mem.aot_store32(g11 + static_cast<std::uint32_t>(392), hot_regs.g6);
    aot_mem.aot_store32(g11 + static_cast<std::uint32_t>(396), hot_regs.g5);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(406))))));
    goto L_08B201A0;
}
L_08B201A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B201C4;
      }
      goto L_08B201A8;
    }
L_08B201A8:
{
    std::uint32_t g12 = ctx.gpr[12];
    g12 = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(396)));
    g12 = (g12 < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = g12 == 0u;
    // nop
    ctx.gpr[12] = g12;
      if (branch_taken) {
          goto L_08B201C4;
      }
      goto L_08B201B8;
    }
}
L_08B201B8:
{
    std::uint32_t g3 = ctx.gpr[3];
    g3 = (g3 & ctx.gpr[10]);
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(406), static_cast<std::uint8_t>(g3));
    g3 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(406))))));
    ctx.gpr[3] = g3;
    goto L_08B201C4;
}
L_08B201C4:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g11 = ctx.gpr[11];
    g3 = (g3 & hot_regs.g4);
    aot_mem.aot_store8(g11 + static_cast<std::uint32_t>(406), static_cast<std::uint8_t>(g3));
    g2 = (g2 + static_cast<std::uint32_t>(1));
    g3 = (static_cast<std::int32_t>(g2) < 32 ? 1u : 0u);
    { const bool branch_taken = g3 != 0u;
    g11 = (g11 + static_cast<std::uint32_t>(416));
    hot_regs.g2 = g2;
    ctx.gpr[3] = g3;
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_08B2010C;
      }
      goto L_08B201DC;
    }
}
L_08B201DC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B201E4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x08B20200u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B20200u) goto L_08B20200;
    return;
L_08B20200:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x08B2020Cu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2020Cu) goto L_08B2020C;
    return;
L_08B2020C:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x08B20218u);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B20218u) goto L_08B20218;
    return;
L_08B20218:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x08B20224u);
    hot_regs.g5 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B20224u) goto L_08B20224;
    return;
L_08B20224:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(3608)));
    hot_regs.g4 = (0u | 1u);
    hot_regs.g31 = (0x08B20234u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B20234u) goto L_08B20234;
    return;
L_08B20234:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B20584;
      }
      goto L_08B20244;
    }
L_08B20244:
    hot_regs.g4 = (ctx.gpr[17] + ctx.gpr[17]);
    goto L_08B20248;
L_08B20248:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (ctx.gpr[17] + g4);
    hot_regs.g5 = (ctx.gpr[17] << 9u);
    g4 = (g4 << 5u);
    g16 = (hot_regs.g5 - g4);
    g4 = (2280u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(20144));
    g16 = (g16 + g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(406))))));
    g4 = (g4 & 127u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08B20574;
      }
      goto L_08B20274;
    }
}
L_08B20274:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(404))))));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B20574;
      }
      goto L_08B20280;
    }
L_08B20280:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(400)));
    g4 = (0u | 255u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(g4));
    g4 = (g5 | 0u);
    g5 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B202DC;
      }
      goto L_08B202A8;
    }
}
L_08B202A8:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_08B20354;
      }
      goto L_08B202B0;
    }
L_08B202B0:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) > 0;
    // nop
      if (branch_taken) {
          goto L_08B20310;
      }
      goto L_08B202B8;
    }
L_08B202B8:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08B202D0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B202D0u) goto L_08B202D0;
    return;
L_08B202D0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
      if (branch_taken) {
          goto L_08B20354;
      }
      goto L_08B202DC;
    }
L_08B202DC:
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B20334;
      }
      goto L_08B202E4;
    }
L_08B202E4:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B20354;
      }
      goto L_08B202EC;
    }
L_08B202EC:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.g5 = (0u | 132u);
    hot_regs.g6 = (0u | 34u);
    hot_regs.g7 = (0u | 11u);
    hot_regs.g31 = (0x08B20304u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B20304u) goto L_08B20304;
    return;
L_08B20304:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
      if (branch_taken) {
          goto L_08B20354;
      }
      goto L_08B20310;
    }
L_08B20310:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.g5 = (0u | 90u);
    hot_regs.g6 = (0u | 62u);
    hot_regs.g7 = (0u | 9u);
    hot_regs.g31 = (0x08B20328u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B20328u) goto L_08B20328;
    return;
L_08B20328:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
      if (branch_taken) {
          goto L_08B20354;
      }
      goto L_08B20334;
    }
L_08B20334:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.g5 = (0u | 108u);
    hot_regs.g6 = (0u | 108u);
    hot_regs.g7 = (0u | 96u);
    hot_regs.g31 = (0x08B2034Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2034Cu) goto L_08B2034C;
    return;
L_08B2034C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
    goto L_08B20354;
L_08B20354:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(406))))));
    hot_regs.g5 = (0u | 1u);
    g4 = (g4 & 127u);
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (ctx.gpr[17] + ctx.gpr[17]);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B20398;
      }
      goto L_08B20368;
    }
}
L_08B20368:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[17] + g4);
    g5 = (ctx.gpr[17] << 9u);
    g4 = (g4 << 5u);
    g4 = (g5 - g4);
    g5 = (2280u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(20144));
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(392)));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g5 < g4 ? 1u : 0u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(396)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_08B203A0;
    }
    goto L_08B20398;
}
L_08B20398:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g7 = (0u | 255u);
      if (branch_taken) {
          goto L_08B203C8;
      }
      goto L_08B203A0;
    }
L_08B203A0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(392)));
    g5 = (g4 - g5);
    g7 = (g5 << 8u);
    g5 = (g7 - g5);
    g4 = (g4 - hot_regs.g6);
    { const std::uint32_t dividend = g5; const std::uint32_t divisor = g4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (ctx.lo);
    g7 = (g4 << 16u);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 16u));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    goto L_08B203C8;
}
L_08B203C8:
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(404))))));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g6) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B20524;
      }
      goto L_08B203DC;
    }
L_08B203DC:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (0u | 128u);
      if (branch_taken) {
          goto L_08B20404;
      }
      goto L_08B203E4;
    }
L_08B203E4:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(404))))));
    { const bool branch_taken = hot_regs.g5 != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08B20408;
      }
      goto L_08B203F0;
    }
L_08B203F0:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(406))))));
    ctx.gpr[9] = (0u | 2u);
    g8 = (g8 & 127u);
    { const bool branch_taken = g8 != ctx.gpr[9];
    // nop
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08B20408;
      }
      goto L_08B20404;
    }
}
L_08B20404:
    hot_regs.g4 = (0u | 0u);
    goto L_08B20408;
L_08B20408:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    std::uint32_t g12 = ctx.gpr[12];
    std::uint32_t g13 = ctx.gpr[13];
    std::uint32_t g14 = ctx.gpr[14];
    std::uint32_t g29 = hot_regs.g29;
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g7)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g4 = (g5 << 4u);
    g8 = (g4 + g4);
    g4 = (g4 + g8);
    g8 = (2238u << 16u);
    g10 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(0)));
    g8 = (g8 + static_cast<std::uint32_t>(-272));
    g11 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(1)));
    g3 = (ctx.lo);
    g9 = (g4 + g8);
    g2 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(2)));
    g3 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g3) >> 8u));
    g3 = (g3 << 16u);
    aot_mem.aot_store8(g9 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g10));
    g3 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g3) >> 16u));
    aot_mem.aot_store8(g9 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g11));
    g3 = (g3 & 255u);
    aot_mem.aot_store8(g9 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g2));
    g12 = (g5 << 4u);
    aot_mem.aot_store8(g9 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g3));
    g12 = (ctx.gpr[16] + g12);
    g13 = (g5 << 2u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g12 + static_cast<std::uint32_t>(0)));
    g13 = (ctx.gpr[16] + g13);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g13 + static_cast<std::uint32_t>(256)));
    f15 = std::bit_cast<float>(g5);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g12 + static_cast<std::uint32_t>(4)));
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    f12 = f12 + f13;
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g13 + static_cast<std::uint32_t>(320)));
    g14 = (15820u << 16u);
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g12 + static_cast<std::uint32_t>(8)));
    f14 = f14 + f16;
    g14 = (g14 | 52429u);
    f18 = std::bit_cast<float>(g14);
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    f12 = f17 + f18;
    g14 = (16544u << 16u);
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f14));
    f13 = std::bit_cast<float>(0u);
    g14 = (g14 | 20972u);
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    f14 = std::bit_cast<float>(g14);
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g8 = (g8 + static_cast<std::uint32_t>(24));
    g4 = (g4 + g8);
    g8 = (16256u << 16u);
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g10));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g11));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g2));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g3));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g12 + static_cast<std::uint32_t>(0)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g13 + static_cast<std::uint32_t>(256)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g12 + static_cast<std::uint32_t>(4)));
    f13 = f13 - f16;
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g13 + static_cast<std::uint32_t>(320)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g12 + static_cast<std::uint32_t>(8)));
    f15 = f17 - f15;
    g5 = (g5 + static_cast<std::uint32_t>(1));
    f14 = f14 + f18;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(g8);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f15));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (static_cast<std::int32_t>(hot_regs.g6) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g2 = g2;
    ctx.gpr[3] = g3;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
    ctx.gpr[12] = g12;
    ctx.gpr[13] = g13;
    ctx.gpr[14] = g14;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
      if (branch_taken) {
          goto L_08B203DC;
      }
      goto L_08B20524;
    }
}
}
L_08B20524:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(404))))));
    hot_regs.g6 = (0u | 0u);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (2238u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(2));
    hot_regs.g7 = (0u | 1u);
    hot_regs.g31 = (0x08B20544u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-272));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 515u, 0x08AEE610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B20544u) goto L_08B20544;
    return;
L_08B20544:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B20574;
      }
      goto L_08B2054C;
    }
L_08B2054C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(404))))));
    hot_regs.g5 = (2236u << 16u);
    hot_regs.g6 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g6 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(12592));
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g6);
    hot_regs.g31 = (0x08B2056Cu);
    hot_regs.g4 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 536u, 0x08AEE8E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2056Cu) goto L_08B2056C;
    return;
L_08B2056C:
    hot_regs.g31 = (0x08B20574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 535u, 0x08AEE8D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B20574u) goto L_08B20574;
    return;
L_08B20574:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g17) < 32 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (g17 + g17);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08B20248;
      }
      goto L_08B20584;
    }
}
L_08B20584:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x08B20590u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B20590u) goto L_08B20590;
    return;
L_08B20590:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x08B2059Cu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2059Cu) goto L_08B2059C;
    return;
L_08B2059C:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g31 = (0x08B205A8u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B205A8u) goto L_08B205A8;
    return;
L_08B205A8:
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
L_08B205BC:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (2280u << 16u);
    ctx.gpr[9] = (0u | 1u);
    g8 = (g8 + static_cast<std::uint32_t>(20144));
    ctx.gpr[3] = (0u | 0u);
    hot_regs.g2 = (ctx.gpr[9] | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[10] = (g8 | 0u);
    ctx.gpr[8] = g8;
    goto L_08B205D8;
}
L_08B205D8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B20610;
      }
      goto L_08B205E0;
    }
L_08B205E0:
{
    std::uint32_t g12 = ctx.gpr[12];
    g12 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(406))))));
    g12 = (g12 & 127u);
    { const bool branch_taken = g12 != ctx.gpr[9];
    // nop
    ctx.gpr[12] = g12;
      if (branch_taken) {
          goto L_08B205FC;
      }
      goto L_08B205F0;
    }
}
L_08B205F0:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(384)));
    { const bool branch_taken = ctx.gpr[12] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B20610;
      }
      goto L_08B205FC;
    }
L_08B205FC:
{
    std::uint32_t g3 = ctx.gpr[3];
    g3 = (g3 + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(416));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(416));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (static_cast<std::int32_t>(g3) < 32 ? 1u : 0u);
    ctx.gpr[3] = g3;
      if (branch_taken) {
          goto L_08B205D8;
      }
      goto L_08B20610;
    }
}
L_08B20610:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2082C;
      }
      goto L_08B20618;
    }
L_08B20618:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(400)));
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    g4 = (g4 ^ 3u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == g4;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2065C;
      }
      goto L_08B20630;
    }
}
L_08B20630:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g10 = ctx.gpr[10];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(406))))));
    g5 = (0u + static_cast<std::uint32_t>(-128));
    g4 = (g4 & g5);
    g4 = (g4 | 2u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store8(g10 + static_cast<std::uint32_t>(406), static_cast<std::uint8_t>(g4));
    g4 = (g5 + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(g10 + static_cast<std::uint32_t>(392), g4);
    g4 = (g5 + static_cast<std::uint32_t>(20000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g10 + static_cast<std::uint32_t>(396), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B208D4;
      }
      goto L_08B2065C;
    }
}
L_08B2065C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g10 = ctx.gpr[10];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(406))))));
    hot_regs.g6 = (aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(388)));
    g4 = (g4 | 128u);
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store8(g10 + static_cast<std::uint32_t>(406), static_cast<std::uint8_t>(g4));
    g4 = (hot_regs.g2 - hot_regs.g6);
    g4 = (g4 < static_cast<std::uint32_t>(101) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2080C;
      }
      goto L_08B20680;
    }
}
L_08B20680:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g10 = ctx.gpr[10];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g10 + static_cast<std::uint32_t>(404))))));
    aot_mem.aot_store32(g10 + static_cast<std::uint32_t>(388), g4);
    g4 = (static_cast<std::int32_t>(hot_regs.g6) < 15 ? 1u : 0u);
    if (g4 == 0u) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(406))))));
    hot_regs.g4 = g4;
        goto L_08B207DC;
    }
    goto L_08B20698;
}
L_08B20698:
{
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g10 = ctx.gpr[10];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g10 + static_cast<std::uint32_t>(404))))));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g10 + static_cast<std::uint32_t>(404), static_cast<std::uint16_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g10 + static_cast<std::uint32_t>(404))))));
    g4 = (g4 << 4u);
    g4 = (ctx.gpr[11] + g4);
    g4 = (g4 + ctx.gpr[8]);
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g10 + static_cast<std::uint32_t>(404))))));
    g4 = (g4 << 4u);
    g4 = (ctx.gpr[11] + g4);
    g4 = (g4 + ctx.gpr[8]);
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-12)));
    f18 = f18 - f14;
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-16)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f16 = f16 - f15;
    { const float fs = f18; const float ft = f18; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    { const float fs = f16; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    f17 = f17 + f19;
    f17 = std::sqrt(f17);
    f15 = std::bit_cast<float>(0u);
    g4 = (16256u << 16u);
    ctx.set_fpu_condition((f17 <= f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    f14 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
      if (branch_taken) {
          goto L_08B20714;
      }
      goto L_08B2070C;
    }
}
}
L_08B2070C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
      if (branch_taken) {
          goto L_08B20720;
      }
      goto L_08B20714;
    }
L_08B20714:
{
    float f19 = ctx.fpr[19];
    f19 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = ctx.fpr[18] / f19;
    ctx.fpr[16] = ctx.fpr[16] / f19;
    ctx.fpr[19] = f19;
    goto L_08B20720;
}
L_08B20720:
{
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
    { const float fs = hot_regs.f12; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    { const float fs = hot_regs.f13; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    f18 = f18 + f19;
    f18 = std::sqrt(f18);
    ctx.set_fpu_condition((f18 <= hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
      if (branch_taken) {
          goto L_08B20750;
      }
      goto L_08B20740;
    }
}
L_08B20740:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    { const float fs = hot_regs.f14; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    f12 = f12 + f13;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08B20764;
      }
      goto L_08B20750;
    }
}
L_08B20750:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = f12 / ctx.fpr[18];
    f13 = f13 / ctx.fpr[18];
    { const float fs = f12; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08B20764;
}
L_08B20764:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_fpu_condition((f13 < hot_regs.f15));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    hot_regs.f13 = f13;
        goto L_08B20778;
    }
    goto L_08B20778;
}
L_08B20778:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f15 = hot_regs.f15;
    float f17 = ctx.fpr[17];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f12 = f13 + hot_regs.f14;
    g5 = (15872u << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(404))))));
    f15 = std::bit_cast<float>(g5);
    { const float fs = f17; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    g5 = (g4 << 2u);
    g5 = (ctx.gpr[11] + g5);
    g5 = (g5 + ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f17; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f12; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(f13));
    { const bool branch_taken = g4 != ctx.gpr[9];
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f15 = f15;
    ctx.fpr[17] = f17;
      if (branch_taken) {
          goto L_08B207C0;
      }
      goto L_08B207B0;
    }
}
}
L_08B207B0:
{
    std::uint32_t g10 = ctx.gpr[10];
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(260)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(324)));
    aot_mem.aot_store32(g10 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g10 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(hot_regs.f13));
    goto L_08B207C0;
}
L_08B207C0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(404))))));
    g4 = (static_cast<std::int32_t>(g4) < 9 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B207D4;
      }
      goto L_08B207D0;
    }
}
L_08B207D0:
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08B207D4;
L_08B207D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B208D4;
      }
      goto L_08B207DC;
    }
L_08B207DC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g10 = ctx.gpr[10];
    g5 = (0u + static_cast<std::uint32_t>(-128));
    g4 = (g4 & g5);
    g4 = (g4 | 2u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store8(g10 + static_cast<std::uint32_t>(406), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g10 + static_cast<std::uint32_t>(388), g5);
    g4 = (g5 + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(g10 + static_cast<std::uint32_t>(392), g4);
    g4 = (g5 + static_cast<std::uint32_t>(20000));
    aot_mem.aot_store32(g10 + static_cast<std::uint32_t>(396), g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B208D4;
      }
      goto L_08B2080C;
    }
}
L_08B2080C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(404))))));
    g4 = (g4 << 4u);
    g4 = (ctx.gpr[11] + g4);
    g4 = (g4 + ctx.gpr[8]);
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
          goto L_08B208D4;
      }
      goto L_08B2082C;
    }
}
L_08B2082C:
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    goto L_08B20834;
L_08B20834:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2085C;
      }
      goto L_08B2083C;
    }
L_08B2083C:
{
    std::uint32_t g11 = ctx.gpr[11];
    g11 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(406))))));
    g11 = (g11 & 127u);
    { const bool branch_taken = g11 == 0u;
    // nop
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_08B2085C;
      }
      goto L_08B2084C;
    }
}
L_08B2084C:
{
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (g10 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(416));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(g10) < 32 ? 1u : 0u);
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_08B20834;
      }
      goto L_08B2085C;
    }
}
L_08B2085C:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B208D0;
      }
      goto L_08B20864;
    }
L_08B20864:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(406))))));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-128));
    g9 = (g9 & ctx.gpr[10]);
    g9 = (g9 | 1u);
    aot_mem.aot_store8(g8 + static_cast<std::uint32_t>(406), static_cast<std::uint8_t>(g9));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(384), g4);
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(f12));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(406))))));
    g4 = (g4 | 128u);
    aot_mem.aot_store8(g8 + static_cast<std::uint32_t>(406), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store16(g8 + static_cast<std::uint32_t>(404), static_cast<std::uint16_t>(0u));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(-1000));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(388), g4);
    g4 = (aot_mem.aot_load8(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[9] = g9;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B208C4;
      }
      goto L_08B208B8;
    }
}
}
L_08B208B8:
    hot_regs.g4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(400), hot_regs.g4);
      if (branch_taken) {
          goto L_08B208C8;
      }
      goto L_08B208C4;
    }
L_08B208C4:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(400), hot_regs.g6);
    goto L_08B208C8;
L_08B208C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B208D4;
      }
      goto L_08B208D0;
    }
L_08B208D0:
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08B208D4;
L_08B208D4:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B208DC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (2280u << 16u);
    hot_regs.g7 = (2226u << 16u);
    hot_regs.g5 = (0u | 32u);
    hot_regs.g6 = (0u | 416u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(20144));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08B20900u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-4));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B20900u) goto L_08B20900;
    return;
L_08B20900:
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
L_08B2090C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08B2091Cu);
    // nop
    hot_regs.g29 = g29;
    goto L_08B209D8;
}
L_08B2091C:
    hot_regs.g31 = (0x08B20924u);
    // nop
    goto L_08B20A2C;
L_08B20924:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(3648), hot_regs.g2);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B20934:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(3648)));
    g5 = (2u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-3299));
    { const std::int32_t dividend = static_cast<std::int32_t>(g4); const std::int32_t divisor = static_cast<std::int32_t>(g5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g4 = (0u + static_cast<std::uint32_t>(16807));
    g5 = (0u + static_cast<std::uint32_t>(2836));
    hot_regs.g6 = (ctx.hi);
    hot_regs.g7 = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g2 = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g7)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g4 = (ctx.lo);
    g2 = (g2 - g4);
    { const bool branch_taken = static_cast<std::int32_t>(g2) > 0;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(3648), g2);
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B20990;
      }
      goto L_08B20980;
    }
}
L_08B20980:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    g4 = (32768u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    g2 = (g2 + g4);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(3648), g2);
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    goto L_08B20990;
}
L_08B20990:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B20998:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08B209A8u);
    // nop
    hot_regs.g29 = g29;
    goto L_08B20934;
}
L_08B209A8:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(hot_regs.g2);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g2) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B209C0;
      }
      goto L_08B209B4;
    }
}
L_08B209B4:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    goto L_08B209C0;
L_08B209C0:
{
    float f0 = ctx.fpr[0];
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (12288u << 16u);
    f0 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    ctx.fpr[0] = f0;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08B209D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (2236u << 16u);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(12784), g4);
    hot_regs.g6 = (0u | 1u);
    g5 = (g5 + static_cast<std::uint32_t>(12784));
    g4 = (27656u << 16u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(3652), hot_regs.g6);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g4 = (g4 + static_cast<std::uint32_t>(-30363));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08B209F8;
}
L_08B209F8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(-4)));
    ctx.gpr[8] = (g7 >> 30u);
    g7 = (g7 ^ ctx.gpr[8]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g7)) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g7 = (ctx.lo);
    g7 = (g7 + g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g7);
    g6 = (g6 + static_cast<std::uint32_t>(1));
    g7 = (static_cast<std::int32_t>(g6) < 624 ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    g5 = (g5 + static_cast<std::uint32_t>(4));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08B209F8;
      }
      goto L_08B20A24;
    }
}
L_08B20A24:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(3652), hot_regs.g6);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B20A2C:
{
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(3652)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g19);
    g19 = (2236u << 16u);
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 624 ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[18] = (g19 + static_cast<std::uint32_t>(12784));
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B20B6C;
      }
      goto L_08B20A60;
    }
}
L_08B20A60:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (32768u << 16u);
    ctx.gpr[21] = (0u | 0u);
    hot_regs.g5 = (0u | 625u);
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    g16 = (g16 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    ctx.gpr[17] = (32768u << 16u);
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08B20A84;
      }
      goto L_08B20A7C;
    }
}
L_08B20A7C:
    hot_regs.g31 = (0x08B20A84u);
    hot_regs.g4 = (0u | 5489u);
    goto L_08B209D8;
L_08B20A84:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g21 = ctx.gpr[21];
    g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(4)));
    g4 = (g4 & ctx.gpr[17]);
    g6 = (g5 & ctx.gpr[16]);
    g5 = (g5 & 1u);
    g4 = (g4 | g6);
    g5 = (g5 << 2u);
    g6 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(1588)));
    g5 = (ctx.gpr[28] + g5);
    g4 = (g4 >> 1u);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(3656)));
    g4 = (g6 ^ g4);
    g4 = (g4 ^ g5);
    g21 = (g21 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(0), g4);
    g4 = (static_cast<std::int32_t>(g21) < 227 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g20 = (g20 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[20] = g20;
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_08B20A84;
      }
      goto L_08B20ACC;
    }
}
L_08B20ACC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g21 = ctx.gpr[21];
    g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(4)));
    g4 = (g4 & ctx.gpr[17]);
    g6 = (g5 & ctx.gpr[16]);
    g5 = (g5 & 1u);
    g4 = (g4 | g6);
    g5 = (g5 << 2u);
    g6 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(-908)));
    g5 = (ctx.gpr[28] + g5);
    g4 = (g4 >> 1u);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(3656)));
    g4 = (g6 ^ g4);
    g4 = (g4 ^ g5);
    g21 = (g21 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(0), g4);
    g4 = (static_cast<std::int32_t>(g21) < 623 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g20 = (g20 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[20] = g20;
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_08B20ACC;
      }
      goto L_08B20B14;
    }
}
L_08B20B14:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(2492)));
    g5 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(12784)));
    g4 = (g4 & ctx.gpr[17]);
    g5 = (g5 & ctx.gpr[16]);
    g4 = (g4 | g5);
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(1584)));
    g6 = (g4 & 1u);
    g4 = (g4 >> 1u);
    g6 = (g6 << 2u);
    g4 = (g5 ^ g4);
    g5 = (ctx.gpr[28] + g6);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(3656)));
    g6 = (0u << 2u);
    g4 = (g4 ^ g5);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(2492), g4);
    g4 = (g6 + g18);
    g19 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (0u + static_cast<std::uint32_t>(1));
    g4 = (g19 >> 11u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(3652), g5);
    { const bool branch_taken = 0u == 0u;
    g19 = (g19 ^ g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08B20B88;
      }
      goto L_08B20B6C;
    }
}
L_08B20B6C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g19 = ctx.gpr[19];
    g5 = (g4 << 2u);
    g5 = (g5 + ctx.gpr[18]);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g19 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(3652), g4);
    g4 = (g19 >> 11u);
    g19 = (g19 ^ g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[19] = g19;
    goto L_08B20B88;
}
L_08B20B88:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g5 = (40236u << 16u);
    g4 = (g19 << 7u);
    g5 = (g5 + static_cast<std::uint32_t>(22144));
    g4 = (g4 & g5);
    g4 = (g19 ^ g4);
    g5 = (g4 << 15u);
    hot_regs.g6 = (61382u << 16u);
    g5 = (g5 & hot_regs.g6);
    g2 = (g4 ^ g5);
    g4 = (g2 >> 18u);
    g2 = (g2 ^ g4);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    g19 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B20BD8:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), 0u);
    jump_target = hot_regs.g31;
    hot_regs.g2 = (g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B20BEC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    hot_regs.g7 = (2226u << 16u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (0u | 20u);
    hot_regs.g6 = (0u | 12u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08B20C10u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(3032));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B20C10u) goto L_08B20C10;
    return;
L_08B20C10:
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
L_08B20C24:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.g5 = (hot_regs.g5 & 1u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B20C44;
      }
      goto L_08B20C34;
    }
}
L_08B20C34:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B20C44;
      }
      goto L_08B20C3C;
    }
L_08B20C3C:
    hot_regs.g31 = (0x08B20C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B20C44u) goto L_08B20C44;
    return;
L_08B20C44:
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
L_08B20C50:
    hot_regs.g7 = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g5 = (hot_regs.g4 | 0u);
    goto L_08B20C5C;
L_08B20C5C:
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B20C84;
      }
      goto L_08B20C68;
    }
L_08B20C68:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g7 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(12));
    ctx.gpr[8] = (static_cast<std::int32_t>(g7) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(12));
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08B20C5C;
      }
      goto L_08B20C7C;
    }
}
L_08B20C7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B20C8C;
      }
      goto L_08B20C84;
    }
L_08B20C84:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g4 + hot_regs.g6);
      if (branch_taken) {
          goto L_08B20C90;
      }
      goto L_08B20C8C;
    }
L_08B20C8C:
    hot_regs.g2 = (0u | 0u);
    goto L_08B20C90;
L_08B20C90:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B20C98:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), hot_regs.g31);
    hot_regs.g31 = (0x08B20CBCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B20CBCu) goto L_08B20CBC;
    return;
L_08B20CBC:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B20D20;
      }
      goto L_08B20CC4;
    }
L_08B20CC4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B20D20;
      }
      goto L_08B20CD4;
    }
L_08B20CD4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (32u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B20D20;
      }
      goto L_08B20CE8;
    }
}
L_08B20CE8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    hot_regs.g5 = (64u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B20D20;
      }
      goto L_08B20CFC;
    }
}
L_08B20CFC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    hot_regs.g5 = (512u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B20D20;
      }
      goto L_08B20D10;
    }
}
L_08B20D10:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    g4 = (g4 & 256u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B20D28;
      }
      goto L_08B20D20;
    }
}
L_08B20D20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B20E28;
      }
      goto L_08B20D28;
    }
L_08B20D28:
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_08B20D30;
L_08B20D30:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B20D48;
      }
      goto L_08B20D3C;
    }
L_08B20D3C:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g6 == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08B20D60;
      }
      goto L_08B20D48;
    }
L_08B20D48:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 20 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(12));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B20D30;
      }
      goto L_08B20D58;
    }
}
L_08B20D58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B20D68;
      }
      goto L_08B20D60;
    }
L_08B20D60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B20E28;
      }
      goto L_08B20D68;
    }
L_08B20D68:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B20DF8;
      }
      goto L_08B20D74;
    }
L_08B20D74:
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (16384u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (49864u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g31 = (0x08B20DCCu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B20DCCu) goto L_08B20DCC;
    return;
L_08B20DCC:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B20DF0;
      }
      goto L_08B20DD4;
    }
L_08B20DD4:
    hot_regs.g31 = (0x08B20DDCu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_08B20C50;
L_08B20DDC:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B20E00;
      }
      goto L_08B20DE8;
    }
L_08B20DE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B20E28;
      }
      goto L_08B20DF0;
    }
L_08B20DF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B20E28;
      }
      goto L_08B20DF8;
    }
L_08B20DF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B20E28;
      }
      goto L_08B20E00;
    }
L_08B20E00:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B20E14;
      }
      goto L_08B20E08;
    }
L_08B20E08:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B20E14u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B20E14u) goto L_08B20E14;
    return;
L_08B20E14:
{
    std::uint32_t g18 = ctx.gpr[18];
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1356), g18);
    hot_regs.g31 = (0x08B20E28u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_08B2114C;
}
L_08B20E28:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_08B20E40:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (0u | 5u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08B20E5Cu);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 9u, 0x08980080u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B20E5Cu) goto L_08B20E5C;
    return;
L_08B20E5C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B20EA8;
      }
      goto L_08B20E64;
    }
L_08B20E64:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 << 4u);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g5 = (2247u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-3872));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g31 = (0x08B20E88u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 54u, 0x089902D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B20E88u) goto L_08B20E88;
    return;
L_08B20E88:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B20EA8;
      }
      goto L_08B20E94;
    }
L_08B20E94:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08B20EA0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08B20C98;
L_08B20EA0:
    hot_regs.g31 = (0x08B20EA8u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 21u, 0x08980164u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B20EA8u) goto L_08B20EA8;
    return;
L_08B20EA8:
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
L_08B20EB8:
{
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.fpr[6] = std::bit_cast<float>(0u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    g10 = (18804u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    g10 = (g10 | 9200u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.fpr[8] = std::bit_cast<float>(g10);
    ctx.gpr[9] = (hot_regs.g5 | 0u);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    g10 = (16128u << 16u);
    ctx.gpr[8] = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(g10);
    hot_regs.g7 = (0u | 2u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = g10;
    hot_regs.g29 = g29;
    goto L_08B20F14;
}
L_08B20F14:
    ctx.gpr[3] = (hot_regs.g5 | 0u);
    ctx.fpr[7] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[11] = (hot_regs.g4 | 0u);
    goto L_08B20F24;
L_08B20F24:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21050;
      }
      goto L_08B20F30;
    }
L_08B20F30:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = ctx.gpr[12] == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08B21050;
      }
      goto L_08B20F3C;
    }
L_08B20F3C:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((!(std::isnan(f13) || std::isnan(ctx.fpr[6])) && f13 == ctx.fpr[6]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08B21050;
      }
      goto L_08B20F50;
    }
}
L_08B20F50:
{
    std::uint32_t g12 = ctx.gpr[12];
    g12 = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = g12 != ctx.gpr[8];
    g12 = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
    ctx.gpr[12] = g12;
      if (branch_taken) {
          goto L_08B21050;
      }
      goto L_08B20F5C;
    }
}
L_08B20F5C:
{
    float f9 = ctx.fpr[9];
    float f10 = ctx.fpr[10];
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f21 = ctx.fpr[21];
{
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g12 = ctx.gpr[12];
    std::uint32_t g13 = ctx.gpr[13];
    std::uint32_t g14 = ctx.gpr[14];
    std::uint32_t g15 = ctx.gpr[15];
    std::uint32_t g29 = hot_regs.g29;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g12 + static_cast<std::uint32_t>(0)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g12 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(f13));
    g12 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(f14));
    g13 = (std::bit_cast<std::uint32_t>(f14));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(0)));
    ctx.fpr[5] = std::bit_cast<float>(g12);
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(4)));
    ctx.fpr[4] = std::bit_cast<float>(g13);
    g14 = (std::bit_cast<std::uint32_t>(f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(f15));
    g15 = (std::bit_cast<std::uint32_t>(f16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(f16));
    ctx.fpr[2] = std::bit_cast<float>(g14);
    ctx.fpr[0] = std::bit_cast<float>(g15);
    g12 = (std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    g13 = (std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    g14 = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    g15 = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    f13 = std::bit_cast<float>(g12);
    f14 = std::bit_cast<float>(g14);
    f15 = std::bit_cast<float>(g13);
    f16 = std::bit_cast<float>(g15);
    f13 = f13 - f14;
    f15 = f15 - f16;
    ctx.fpr[3] = std::bit_cast<float>(g12);
    ctx.fpr[1] = std::bit_cast<float>(g13);
    g12 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(f13));
    g13 = (std::bit_cast<std::uint32_t>(f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(f15));
    ctx.fpr[17] = std::bit_cast<float>(g12);
    f16 = std::bit_cast<float>(g13);
    g12 = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    g13 = (std::bit_cast<std::uint32_t>(f16));
    f15 = std::bit_cast<float>(g12);
    f14 = std::bit_cast<float>(g13);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f15));
    { const float fs = f15; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f9 = std::bit_cast<float>(0x7FC00000u); else f9 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f14));
    ctx.fpr[19] = std::bit_cast<float>(g14);
    ctx.fpr[18] = std::bit_cast<float>(g15);
    f13 = f13 + f9;
    f13 = std::sqrt(f13);
    g10 = (g10 + static_cast<std::uint32_t>(48));
    { const float fs = f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f21 = std::bit_cast<float>(0x7FC00000u); else f21 = fs * ft; }
    f10 = std::bit_cast<float>(aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(8)));
    ctx.fpr[11] = std::bit_cast<float>(aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(8)));
    f10 = f10 - ctx.fpr[11];
    ctx.set_fpu_condition((f10 < f21));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    ctx.gpr[10] = g10;
    ctx.gpr[12] = g12;
    ctx.gpr[13] = g13;
    ctx.gpr[14] = g14;
    ctx.gpr[15] = g15;
    ctx.fpr[9] = f9;
    ctx.fpr[10] = f10;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[21] = f21;
      if (branch_taken) {
          goto L_08B21050;
      }
      goto L_08B21038;
    }
}
}
L_08B21038:
    ctx.set_fpu_condition((hot_regs.f13 < ctx.fpr[7]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B21050;
      }
      goto L_08B21048;
    }
L_08B21048:
    ctx.gpr[3] = (hot_regs.g2 | 0u);
    ctx.fpr[7] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    goto L_08B21050;
L_08B21050:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (g2 + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(g2) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(12));
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_08B20F24;
      }
      goto L_08B21060;
    }
}
L_08B21060:
    { const bool branch_taken = ctx.gpr[3] != hot_regs.g5;
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[7]));
      if (branch_taken) {
          goto L_08B21080;
      }
      goto L_08B21068;
    }
L_08B21068:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(g8) < 2 ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.gpr[8] = g8;
        goto L_08B210C4;
    }
    goto L_08B21078;
}
L_08B21078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B20F14;
      }
      goto L_08B21080;
    }
L_08B21080:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    g5 = (g3 + g3);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    g5 = (g3 + g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f15));
    g2 = (g5 << 2u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const bool branch_taken = 0u == 0u;
    g2 = (hot_regs.g4 + g2);
    hot_regs.g2 = g2;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B210F4;
      }
      goto L_08B210C4;
    }
}
L_08B210C4:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g2 = (0u | 0u);
    goto L_08B210F4;
}
L_08B210F4:
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B210FC:
    hot_regs.g6 = (0u | 0u);
    hot_regs.g5 = (0u | 0u);
    goto L_08B21104;
L_08B21104:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g5 + g5);
    g7 = (g5 + g7);
    g7 = (g7 << 2u);
    g7 = (hot_regs.g4 + g7);
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08B2112C;
      }
      goto L_08B21120;
    }
}
L_08B21120:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(1));
    g6 = (g6 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    hot_regs.g6 = g6;
    goto L_08B2112C;
}
L_08B2112C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g5 = (g5 << 16u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 16u));
    hot_regs.g7 = (static_cast<std::int32_t>(g5) < 20 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B21104;
      }
      goto L_08B21144;
    }
}
L_08B21144:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g6 & 65535u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B2114C:
    hot_regs.g6 = (0u | 0u);
    goto L_08B21150;
L_08B21150:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (g6 + g6);
    g5 = (g6 + g5);
    g5 = (g5 << 2u);
    g5 = (hot_regs.g4 + g5);
    hot_regs.g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2117C;
      }
      goto L_08B2116C;
    }
}
L_08B2116C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g5 = (g5 < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2119C;
      }
      goto L_08B2117C;
    }
}
L_08B2117C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (g6 + static_cast<std::uint32_t>(1));
    g6 = (g5 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    g5 = (static_cast<std::int32_t>(g6) < 20 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B21150;
      }
      goto L_08B21194;
    }
}
L_08B21194:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B211A0;
      }
      goto L_08B2119C;
    }
L_08B2119C:
    hot_regs.g2 = (0u | 1u);
    goto L_08B211A0;
L_08B211A0:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B211A8:
    hot_regs.g6 = (0u | 0u);
    goto L_08B211AC;
L_08B211AC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (g6 + g6);
    g5 = (g6 + g5);
    g5 = (g5 << 2u);
    g5 = (hot_regs.g4 + g5);
    hot_regs.g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B211D4;
      }
      goto L_08B211C8;
    }
}
L_08B211C8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B211F4;
      }
      goto L_08B211D4;
    }
}
L_08B211D4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (g6 + static_cast<std::uint32_t>(1));
    g6 = (g5 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    g5 = (static_cast<std::int32_t>(g6) < 20 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B211AC;
      }
      goto L_08B211EC;
    }
}
L_08B211EC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B211F8;
      }
      goto L_08B211F4;
    }
L_08B211F4:
    hot_regs.g2 = (0u | 1u);
    goto L_08B211F8;
L_08B211F8:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B21200:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g4 = (2280u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08B21214u);
    g4 = (g4 + static_cast<std::uint32_t>(2352));
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
    goto L_08B20BEC;
}
L_08B21214:
    hot_regs.g31 = (0x08B2121Cu);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(3672));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2121Cu) goto L_08B2121C;
    return;
L_08B2121C:
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
L_08B21228:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(3700)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(3700), 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B21270;
      }
      goto L_08B21244;
    }
}
L_08B21244:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (2236u << 16u);
    g16 = (g16 + static_cast<std::uint32_t>(29232));
    ctx.gpr[16] = g16;
    goto L_08B2124C;
}
L_08B2124C:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B21264u);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21264u) goto L_08B21264;
    return;
L_08B21264:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2124C;
      }
      goto L_08B21270;
    }
L_08B21270:
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
L_08B21284:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g5 = (0u | 2u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == g5;
    g5 = (0u | 1u);
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B212A0;
      }
      goto L_08B21298;
    }
}
L_08B21298:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B212A8;
      }
      goto L_08B212A0;
    }
L_08B212A0:
    hot_regs.g31 = (0x08B212A8u);
    // nop
    goto L_08B21228;
L_08B212A8:
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
L_08B212B4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B212D4;
      }
      goto L_08B212C8;
    }
}
L_08B212C8:
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B212DC;
      }
      goto L_08B212D4;
    }
L_08B212D4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(3700), hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    goto L_08B212DC;
L_08B212DC:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B212EC;
      }
      goto L_08B212E4;
    }
L_08B212E4:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(4), hot_regs.g6);
    goto L_08B212EC;
L_08B212EC:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    hot_regs.g6 = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g31 = (0x08B21304u);
    hot_regs.g4 = (hot_regs.g6 + static_cast<std::uint32_t>(29232));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21304u) goto L_08B21304;
    return;
L_08B21304:
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
L_08B21310:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B21328;
      }
      goto L_08B2131C;
    }
L_08B2131C:
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B21330;
      }
      goto L_08B21328;
    }
L_08B21328:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(3700), hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    goto L_08B21330;
L_08B21330:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21340;
      }
      goto L_08B21338;
    }
L_08B21338:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(4), g4);
    hot_regs.g4 = g4;
    goto L_08B21340;
}
L_08B21340:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B21348:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B21378;
      }
      goto L_08B21364;
    }
}
L_08B21364:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B21380;
      }
      goto L_08B21370;
    }
L_08B21370:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B213A8;
      }
      goto L_08B21378;
    }
L_08B21378:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B213AC;
      }
      goto L_08B21380;
    }
L_08B21380:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (g4 | 0u);
    g4 = (g5 | 0u);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = g5 == hot_regs.g6;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B21398;
      }
      goto L_08B21394;
    }
}
L_08B21394:
    rt.unsupported(0x08B21394u, 0x0000000Du, "special? not lowered yet"); return;
L_08B21398:
    hot_regs.g31 = (0x08B213A0u);
    // nop
    goto L_08B212B4;
L_08B213A0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), 0u);
    goto L_08B213A8;
L_08B213A8:
    hot_regs.g2 = (ctx.gpr[16] | 0u);
    goto L_08B213AC;
L_08B213AC:
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
L_08B213BC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B213E0;
      }
      goto L_08B213D8;
    }
}
L_08B213D8:
    hot_regs.g31 = (0x08B213E0u);
    // nop
    goto L_08B212B4;
L_08B213E0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B213FC;
      }
      goto L_08B213EC;
    }
L_08B213EC:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g31 = (0x08B213FCu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(31984));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B213FCu) goto L_08B213FC;
    return;
L_08B213FC:
    hot_regs.g31 = (0x08B21404u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21404u) goto L_08B21404;
    return;
L_08B21404:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 1u);
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
L_08B21418:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(3696)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B21420:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g7 = (7680u << 16u);
    g7 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g7);
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g6 = (g6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(13))))));
    g7 = (g7 & 63u);
    g10 = (49664u << 16u);
    g7 = (g7 + static_cast<std::uint32_t>(-1));
    g10 = (g10 + static_cast<std::uint32_t>(1));
    g8 = (g7 << 16u);
    g8 = (g8 | g10);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g8);
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g8 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g10 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(15)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[11] = (g10 & 96u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    g6 = (0u | 1u);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[10] = g10;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B21524;
      }
      goto L_08B21484;
    }
}
L_08B21484:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (ctx.gpr[10] & 64u);
    { const bool branch_taken = g9 == 0u;
    g9 = (49920u << 16u);
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08B214B8;
      }
      goto L_08B21490;
    }
}
L_08B21490:
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    g9 = (49920u << 16u);
    g9 = (g9 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    g9 = (0u | 16u);
    g8 = (g8 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), g8);
    g10 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(15)));
    { const bool branch_taken = 0u == 0u;
    g10 = (g10 & 15u);
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_08B214D8;
      }
      goto L_08B214B8;
    }
}
L_08B214B8:
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    g9 = (g9 + static_cast<std::uint32_t>(5));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    g9 = (0u | 256u);
    g8 = (g8 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), g8);
    g10 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(15)));
    g10 = (g10 & 15u);
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    goto L_08B214D8;
}
L_08B214D8:
    { const bool branch_taken = ctx.gpr[10] != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08B214FC;
      }
      goto L_08B214E0;
    }
L_08B214E0:
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (50433u << 16u);
    g10 = (g10 + static_cast<std::uint32_t>(-255));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), g10);
    g8 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    g8 = (g8 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), g8);
    ctx.gpr[8] = g8;
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_08B21570;
      }
      goto L_08B214FC;
    }
}
L_08B214FC:
    ctx.gpr[11] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08B21570;
      }
      goto L_08B21508;
    }
L_08B21508:
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (50433u << 16u);
    g10 = (g10 + static_cast<std::uint32_t>(-253));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), g10);
    g8 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    g8 = (g8 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), g8);
    ctx.gpr[8] = g8;
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_08B21570;
      }
      goto L_08B21524;
    }
}
L_08B21524:
{
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (g10 & 15u);
    { const bool branch_taken = g10 != hot_regs.g6;
    // nop
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_08B2154C;
      }
      goto L_08B21530;
    }
}
L_08B21530:
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (49920u << 16u);
    g10 = (g10 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), g10);
    g8 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    g8 = (g8 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), g8);
    ctx.gpr[8] = g8;
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_08B21570;
      }
      goto L_08B2154C;
    }
}
L_08B2154C:
    ctx.gpr[11] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08B21570;
      }
      goto L_08B21558;
    }
L_08B21558:
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (49920u << 16u);
    g10 = (g10 + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), g10);
    g8 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    g8 = (g8 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), g8);
    ctx.gpr[8] = g8;
    ctx.gpr[10] = g10;
    goto L_08B21570;
}
L_08B21570:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g12 = ctx.gpr[12];
    std::uint32_t g13 = ctx.gpr[13];
    ctx.gpr[14] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g13 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(11))))));
    g12 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(10))))));
    g13 = (g13 & 63u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8))))));
    g12 = (g12 & 63u);
    ctx.gpr[10] = (hot_regs.g7 < static_cast<std::uint32_t>(0) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[12] = g12;
    ctx.gpr[13] = g13;
      if (branch_taken) {
          goto L_08B21668;
      }
      goto L_08B21594;
    }
}
L_08B21594:
{
    std::uint32_t g11 = ctx.gpr[11];
    g11 = (256u << 16u);
    g11 = (g11 + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (255u << 16u);
    ctx.gpr[11] = g11;
    goto L_08B215A0;
}
L_08B215A0:
{
    std::uint32_t g15 = ctx.gpr[15];
    g15 = (hot_regs.g2 < static_cast<std::uint32_t>(0) ? 1u : 0u);
    { const bool branch_taken = g15 != 0u;
    g15 = (hot_regs.g6 << (ctx.gpr[13] & 31u));
    ctx.gpr[15] = g15;
      if (branch_taken) {
          goto L_08B2162C;
      }
      goto L_08B215AC;
    }
}
L_08B215AC:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g15 = ctx.gpr[15];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g24 = ctx.gpr[24];
    std::uint32_t g25 = ctx.gpr[25];
    g15 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    g24 = (ctx.gpr[3] << 3u);
    { const std::int32_t dividend = static_cast<std::int32_t>(g24); const std::int32_t divisor = static_cast<std::int32_t>(g15); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g15 = (g2 + static_cast<std::uint32_t>(160));
    g15 = (g15 << 24u);
    g24 = (ctx.gpr[14] & ctx.gpr[11]);
    g25 = (g2 + static_cast<std::uint32_t>(184));
    g15 = (g15 | g24);
    g25 = (g25 << 24u);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), g15);
    g25 = (g25 | ctx.gpr[12]);
    g16 = (ctx.gpr[13] << 8u);
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g15 = (g2 + static_cast<std::uint32_t>(168));
    g25 = (g25 | g16);
    g15 = (g15 << 24u);
    g24 = (ctx.gpr[14] >> 8u);
    g8 = (g8 + static_cast<std::uint32_t>(4));
    g24 = (g24 & ctx.gpr[10]);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g16 = (ctx.lo);
    g15 = (g15 | g16);
    g15 = (g15 | g24);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), g15);
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g8 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), g25);
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g8 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g15 = (hot_regs.g6 << (ctx.gpr[13] & 31u));
    ctx.gpr[8] = g8;
    ctx.gpr[15] = g15;
    ctx.gpr[16] = g16;
    ctx.gpr[24] = g24;
    ctx.gpr[25] = g25;
    goto L_08B2162C;
}
L_08B2162C:
{
    std::uint32_t g15 = ctx.gpr[15];
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(g15)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    g15 = (static_cast<std::int32_t>(ctx.gpr[3]) < 17 ? 1u : 0u);
    ctx.gpr[24] = (ctx.lo);
    { const bool branch_taken = g15 != 0u;
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[24]);
    ctx.gpr[15] = g15;
      if (branch_taken) {
          goto L_08B21658;
      }
      goto L_08B21648;
    }
}
L_08B21648:
{
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g15 = ctx.gpr[15];
    g15 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g3) >> 1u));
    g15 = (g15 >> 31u);
    g3 = (g3 + g15);
    g3 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g3) >> 1u));
    ctx.gpr[3] = g3;
    ctx.gpr[15] = g15;
    goto L_08B21658;
}
L_08B21658:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (g2 + static_cast<std::uint32_t>(1));
    ctx.gpr[15] = (hot_regs.g7 < g2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[15] == 0u;
    // nop
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_08B215A0;
      }
      goto L_08B21668;
    }
}
L_08B21668:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(15)));
    g4 = (g4 & 96u);
    { const bool branch_taken = g4 == 0u;
    g4 = (256u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B216D8;
      }
      goto L_08B21678;
    }
}
L_08B21678:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    g4 = (ctx.gpr[14] & g4);
    g6 = (45056u << 16u);
    g4 = (g4 | g6);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g7 = (ctx.gpr[14] >> 8u);
    g8 = (255u << 16u);
    g7 = (g7 & g8);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    g8 = (45312u << 16u);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g7 = (g7 | g8);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g7);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 3u));
    g7 = (50176u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g6 = (g6 | g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g6);
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g8 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_08B216D8;
}
L_08B216D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (51968u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (hot_regs.g6 + static_cast<std::uint32_t>(29552));
    { const bool branch_taken = g5 == g4;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B21714;
      }
      goto L_08B216FC;
    }
}
L_08B216FC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (2816u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    goto L_08B21714;
}
L_08B21714:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B21720:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), hot_regs.g31);
    hot_regs.g31 = (0x08B21748u);
    hot_regs.g6 = (0u | 2048u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 498u, 0x088DF9D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21748u) goto L_08B21748;
    return;
L_08B21748:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B21754u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    goto L_08B21420;
L_08B21754:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (hot_regs.g4 - hot_regs.g5);
    hot_regs.g5 = (hot_regs.g6 - hot_regs.g7);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g5);
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(12));
    hot_regs.g31 = (0x08B21784u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(29232));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21784u) goto L_08B21784;
    return;
L_08B21784:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (hot_regs.g2 | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(3700)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(0), g4);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 == 0u;
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08B217A8;
      }
      goto L_08B217A4;
    }
}
L_08B217A4:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    goto L_08B217A8;
L_08B217A8:
    hot_regs.g6 = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(3700), ctx.gpr[17]);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08B217BCu);
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B217BCu) goto L_08B217BC;
    return;
L_08B217BC:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B217D4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(3696)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g4;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B21804;
      }
      goto L_08B217F4;
    }
}
L_08B217F4:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[18] = (2236u << 16u);
      if (branch_taken) {
          goto L_08B2180C;
      }
      goto L_08B217FC;
    }
L_08B217FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21964;
      }
      goto L_08B21804;
    }
L_08B21804:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21984;
      }
      goto L_08B2180C;
    }
L_08B2180C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21964;
      }
      goto L_08B21818;
    }
L_08B21818:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29552));
      if (branch_taken) {
          goto L_08B218D8;
      }
      goto L_08B21824;
    }
L_08B21824:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(29232));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(301)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B218B0;
      }
      goto L_08B21838;
    }
}
L_08B21838:
    hot_regs.g31 = (0x08B21840u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08B21720;
L_08B21840:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g5 = (15u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(12));
    g6 = (g4 >> 8u);
    g5 = (g6 & g5);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(20), g5);
    g6 = (4096u << 16u);
    hot_regs.g7 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 | g6);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(0), g5);
    g6 = (256u << 16u);
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g6);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g6 = (2560u << 16u);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(29552), g5);
    g4 = (g4 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(29552), g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(13))))));
    g6 = (g4 & 64u);
    g17 = (g4 & 128u);
    g4 = (0u < g6 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    g17 = (0u < g17 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08B21940;
      }
      goto L_08B218B0;
    }
}
L_08B218B0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B218BCu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    goto L_08B21420;
L_08B218BC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(13))))));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29552)));
    hot_regs.g6 = (g4 & 64u);
    g17 = (g4 & 128u);
    g4 = (0u < hot_regs.g6 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    g17 = (0u < g17 ? 1u : 0u);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08B21940;
      }
      goto L_08B218D8;
    }
}
L_08B218D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (g5 + static_cast<std::uint32_t>(12));
    g5 = (g4 >> 8u);
    g6 = (15u << 16u);
    g5 = (g5 & g6);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(20), g5);
    g6 = (4096u << 16u);
    hot_regs.g7 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 | g6);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(0), g5);
    g6 = (256u << 16u);
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g6);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g6 = (2560u << 16u);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(29552), g5);
    g4 = (g4 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(29552), g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(13))))));
    g6 = (g4 & 64u);
    g17 = (g4 & 128u);
    g4 = (0u < g6 ? 1u : 0u);
    g17 = (0u < g17 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[17] = g17;
    goto L_08B21940;
}
L_08B21940:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (50944u << 16u);
    g4 = (g4 | g6);
    g6 = (ctx.gpr[17] << 8u);
    g4 = (g4 | g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29552), g4);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B21980;
      }
      goto L_08B21964;
    }
}
L_08B21964:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    hot_regs.g5 = (7680u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    ctx.gpr[16] = (0u | 0u);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(29552), g4);
    hot_regs.g4 = g4;
    goto L_08B21980;
}
L_08B21980:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(3696), ctx.gpr[16]);
    goto L_08B21984;
L_08B21984:
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
L_08B2199C:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(1780))))));
    g2 = (g4 & 2u);
    jump_target = hot_regs.g31;
    g2 = (0u < g2 ? 1u : 0u);
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B219AC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08B219C8u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 838u, 0x08913670u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B219C8u) goto L_08B219C8;
    return;
L_08B219C8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2235u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-30520));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), g4);
    g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 17 ? 1u : 0u);
    if (hot_regs.g5 == 0u) {
    g4 = (static_cast<std::int32_t>(g4) < 18 ? 1u : 0u);
    hot_regs.g4 = g4;
        goto L_08B21A10;
    }
    goto L_08B219E4;
}
L_08B219E4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(g4) < 16 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B21A3C;
      }
      goto L_08B219F0;
    }
}
L_08B219F0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(2308))))));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(2292), 0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(2296), 0u);
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(2308), static_cast<std::uint8_t>(g4));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (g16 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B21A64;
      }
      goto L_08B21A10;
    }
}
L_08B21A10:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B219F0;
      }
      goto L_08B21A18;
    }
L_08B21A18:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (0u | 13u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08B21A34u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21A34u) goto L_08B21A34;
    return;
L_08B21A34:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2288), 0u);
      if (branch_taken) {
          goto L_08B219F0;
      }
      goto L_08B21A3C;
    }
L_08B21A3C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (0u | 12u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08B21A58u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21A58u) goto L_08B21A58;
    return;
L_08B21A58:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2288), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2304), 0u);
      if (branch_taken) {
          goto L_08B219F0;
      }
      goto L_08B21A64;
    }
L_08B21A64:
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
L_08B21A78:
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
          goto L_08B21AC0;
      }
      goto L_08B21A94;
    }
}
L_08B21A94:
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-30520));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B21AACu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 416u, 0x08905FECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21AACu) goto L_08B21AAC;
    return;
L_08B21AAC:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21AC0;
      }
      goto L_08B21AB8;
    }
L_08B21AB8:
    hot_regs.g31 = (0x08B21AC0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 477u, 0x08906308u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21AC0u) goto L_08B21AC0;
    return;
L_08B21AC0:
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
L_08B21AD4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21B40;
      }
      goto L_08B21AE4;
    }
L_08B21AE4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1152)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
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
    hot_regs.g4 = (16880u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B21B40;
      }
      goto L_08B21B38;
    }
L_08B21B38:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B21B44;
      }
      goto L_08B21B40;
    }
L_08B21B40:
    hot_regs.g2 = (0u | 1u);
    goto L_08B21B44;
L_08B21B44:
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B21B4C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08B21B60u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 832u, 0x0891FD10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21B60u) goto L_08B21B60;
    return;
L_08B21B60:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (2u << 16u);
    g4 = (g4 & hot_regs.g5);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B21BE4;
      }
      goto L_08B21B7C;
    }
}
L_08B21B7C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 58u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B21BDC;
      }
      goto L_08B21B8C;
    }
L_08B21B8C:
    hot_regs.g5 = (0u | 57u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B21BD4;
      }
      goto L_08B21B98;
    }
L_08B21B98:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.g6 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g6 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    hot_regs.g31 = (0x08B21BBCu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 382u, 0x08A45F20u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21BBCu) goto L_08B21BBC;
    return;
L_08B21BBC:
    hot_regs.g31 = (0x08B21BC4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21BC4u) goto L_08B21BC4;
    return;
L_08B21BC4:
    if (hot_regs.g2 != 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1940)));
        goto L_08B21BEC;
    }
    goto L_08B21BCC;
L_08B21BCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21C1C;
      }
      goto L_08B21BD4;
    }
L_08B21BD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21D0C;
      }
      goto L_08B21BDC;
    }
L_08B21BDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21D0C;
      }
      goto L_08B21BE4;
    }
L_08B21BE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21D0C;
      }
      goto L_08B21BEC;
    }
L_08B21BEC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1944)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    f12 = std::sqrt(f12);
    hot_regs.f14 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08B21C1C;
      }
      goto L_08B21C14;
    }
}
L_08B21C14:
    hot_regs.g31 = (0x08B21C1Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 753u, 0x0890748Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21C1Cu) goto L_08B21C1C;
    return;
L_08B21C1C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 7 ? 1u : 0u);
    if (hot_regs.g5 == 0u) {
    g4 = (static_cast<std::int32_t>(g4) < 8 ? 1u : 0u);
    hot_regs.g4 = g4;
        goto L_08B21C40;
    }
    goto L_08B21C2C;
}
L_08B21C2C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(g4) < 6 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B21C88;
      }
      goto L_08B21C38;
    }
}
L_08B21C38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21C80;
      }
      goto L_08B21C40;
    }
L_08B21C40:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21C88;
      }
      goto L_08B21C48;
    }
L_08B21C48:
    hot_regs.g31 = (0x08B21C50u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21C50u) goto L_08B21C50;
    return;
L_08B21C50:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21C70;
      }
      goto L_08B21C58;
    }
L_08B21C58:
    hot_regs.g31 = (0x08B21C60u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 85u, 0x08910510u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21C60u) goto L_08B21C60;
    return;
L_08B21C60:
    hot_regs.g31 = (0x08B21C68u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 461u, 0x08916ABCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21C68u) goto L_08B21C68;
    return;
L_08B21C68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21C78;
      }
      goto L_08B21C70;
    }
L_08B21C70:
    hot_regs.g31 = (0x08B21C78u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 777u, 0x0890B078u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21C78u) goto L_08B21C78;
    return;
L_08B21C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21C88;
      }
      goto L_08B21C80;
    }
L_08B21C80:
    hot_regs.g31 = (0x08B21C88u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 461u, 0x08916ABCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21C88u) goto L_08B21C88;
    return;
L_08B21C88:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 17 ? 1u : 0u);
    if (hot_regs.g5 == 0u) {
    g4 = (static_cast<std::int32_t>(g4) < 18 ? 1u : 0u);
    hot_regs.g4 = g4;
        goto L_08B21CAC;
    }
    goto L_08B21C98;
}
L_08B21C98:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(g4) < 16 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B21D0C;
      }
      goto L_08B21CA4;
    }
}
L_08B21CA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21CBC;
      }
      goto L_08B21CAC;
    }
L_08B21CAC:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B21CEC;
      }
      goto L_08B21CB4;
    }
L_08B21CB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21D0C;
      }
      goto L_08B21CBC;
    }
L_08B21CBC:
    hot_regs.g31 = (0x08B21CC4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21CC4u) goto L_08B21CC4;
    return;
L_08B21CC4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B21CDC;
      }
      goto L_08B21CCC;
    }
L_08B21CCC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 55u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B21CE4;
      }
      goto L_08B21CDC;
    }
L_08B21CDC:
    hot_regs.g31 = (0x08B21CE4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08B21D1C;
L_08B21CE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21D0C;
      }
      goto L_08B21CEC;
    }
L_08B21CEC:
    hot_regs.g31 = (0x08B21CF4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21CF4u) goto L_08B21CF4;
    return;
L_08B21CF4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21D04;
      }
      goto L_08B21CFC;
    }
L_08B21CFC:
    hot_regs.g31 = (0x08B21D04u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08B22C00;
L_08B21D04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21D0C;
      }
      goto L_08B21D0C;
    }
L_08B21D0C:
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
L_08B21D1C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-384));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(356), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(360), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(364), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(368), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(372), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(376), hot_regs.g31);
    hot_regs.g31 = (0x08B21D40u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21D40u) goto L_08B21D40;
    return;
L_08B21D40:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B21E4C;
      }
      goto L_08B21D48;
    }
L_08B21D48:
    hot_regs.g31 = (0x08B21D50u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21D50u) goto L_08B21D50;
    return;
L_08B21D50:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21E4C;
      }
      goto L_08B21D58;
    }
L_08B21D58:
    hot_regs.g31 = (0x08B21D60u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 813u, 0x089079CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21D60u) goto L_08B21D60;
    return;
L_08B21D60:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1900)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21E4C;
      }
      goto L_08B21D6C;
    }
L_08B21D6C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1904)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B21E4C;
      }
      goto L_08B21D80;
    }
}
L_08B21D80:
    hot_regs.g31 = (0x08B21D88u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 824u, 0x08907A54u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21D88u) goto L_08B21D88;
    return;
L_08B21D88:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1900), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1904), 0u);
    hot_regs.g31 = (0x08B21D98u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21D98u) goto L_08B21D98;
    return;
L_08B21D98:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21E4C;
      }
      goto L_08B21DA0;
    }
L_08B21DA0:
    hot_regs.g31 = (0x08B21DA8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21DA8u) goto L_08B21DA8;
    return;
L_08B21DA8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u | 3u);
    g4 = (g4 & 14u);
    g4 = (g4 >> 1u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B21E4C;
      }
      goto L_08B21DC0;
    }
}
L_08B21DC0:
    hot_regs.g31 = (0x08B21DC8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21DC8u) goto L_08B21DC8;
    return;
L_08B21DC8:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08B21DD4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21DD4u) goto L_08B21DD4;
    return;
L_08B21DD4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21E4C;
      }
      goto L_08B21DDC;
    }
L_08B21DDC:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    hot_regs.g31 = (0x08B21DF8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21DF8u) goto L_08B21DF8;
    return;
L_08B21DF8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21E20;
      }
      goto L_08B21E00;
    }
L_08B21E00:
    hot_regs.g31 = (0x08B21E08u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21E08u) goto L_08B21E08;
    return;
L_08B21E08:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 8u);
    hot_regs.g31 = (0x08B21E18u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21E18u) goto L_08B21E18;
    return;
L_08B21E18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21E44;
      }
      goto L_08B21E20;
    }
L_08B21E20:
    hot_regs.g31 = (0x08B21E28u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21E28u) goto L_08B21E28;
    return;
L_08B21E28:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08B21E38u);
    hot_regs.g6 = (0u | 6000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21E38u) goto L_08B21E38;
    return;
L_08B21E38:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B21E44u);
    hot_regs.g5 = (0u | 119u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21E44u) goto L_08B21E44;
    return;
L_08B21E44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22BE0;
      }
      goto L_08B21E4C;
    }
L_08B21E4C:
    hot_regs.g31 = (0x08B21E54u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21E54u) goto L_08B21E54;
    return;
L_08B21E54:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2207C;
      }
      goto L_08B21E5C;
    }
L_08B21E5C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2207C;
      }
      goto L_08B21E68;
    }
L_08B21E68:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2207C;
      }
      goto L_08B21E78;
    }
}
L_08B21E78:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    hot_regs.g5 = (0u | 16u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B2207C;
      }
      goto L_08B21E88;
    }
L_08B21E88:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    g4 = (2280u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(2352));
    g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g5 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08B21EACu);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08B20EB8;
}
L_08B21EAC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B21F34;
      }
      goto L_08B21EB4;
    }
L_08B21EB4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g4 = (16840u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B21F34;
      }
      goto L_08B21ED0;
    }
L_08B21ED0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(320));
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
    hot_regs.g4 = (15395u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B21F34;
      }
      goto L_08B21F08;
    }
L_08B21F08:
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B21F20u);
    hot_regs.g5 = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21F20u) goto L_08B21F20;
    return;
L_08B21F20:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B21F2Cu);
    hot_regs.g5 = (0u | 140u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B21F2Cu) goto L_08B21F2C;
    return;
L_08B21F2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2207C;
      }
      goto L_08B21F34;
    }
L_08B21F34:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = g4 != ctx.gpr[16];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2207C;
      }
      goto L_08B21F44;
    }
}
L_08B21F44:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 55u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B2207C;
      }
      goto L_08B21F54;
    }
L_08B21F54:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(533))))));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2207C;
      }
      goto L_08B21F60;
    }
L_08B21F60:
    hot_regs.g31 = (0x08B21F68u);
    // nop
    goto L_08B20934;
L_08B21F68:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    g4 = (g4 & 31u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2207C;
      }
      goto L_08B21F78;
    }
}
L_08B21F78:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    hot_regs.g5 = (0u | 0u);
    g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B2201C;
      }
      goto L_08B21F8C;
    }
}
L_08B21F8C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (hot_regs.g5 << 2u);
    g6 = (ctx.gpr[16] + g6);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(1784)));
    hot_regs.g7 = (0u | 16u);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = g6 != hot_regs.g7;
    g6 = (hot_regs.g5 << 2u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B22008;
      }
      goto L_08B21FA8;
    }
}
L_08B21FA8:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (ctx.gpr[16] + g6);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(1784)));
    hot_regs.g7 = (0u | 24u);
    g6 = (g6 + static_cast<std::uint32_t>(2228));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g6 == hot_regs.g7;
    g6 = (hot_regs.g5 << 2u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B21FE8;
      }
      goto L_08B21FC4;
    }
}
L_08B21FC4:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (hot_regs.g5 << 2u);
    g6 = (ctx.gpr[16] + g6);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(1784)));
    hot_regs.g7 = (0u | 61u);
    g6 = (g6 + static_cast<std::uint32_t>(2228));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g6 != hot_regs.g7;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B22008;
      }
      goto L_08B21FE4;
    }
}
L_08B21FE4:
    hot_regs.g6 = (hot_regs.g5 << 2u);
    goto L_08B21FE8;
L_08B21FE8:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (ctx.gpr[16] + g6);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(1784)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = g6 != hot_regs.g7;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B22008;
      }
      goto L_08B22000;
    }
}
L_08B22000:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B2201C;
      }
      goto L_08B22008;
    }
L_08B22008:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B21F8C;
      }
      goto L_08B2201C;
    }
}
L_08B2201C:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2207C;
      }
      goto L_08B22024;
    }
L_08B22024:
    hot_regs.g31 = (0x08B2202Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2202Cu) goto L_08B2202C;
    return;
L_08B2202C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(618))))));
    g4 = (0u | 1u);
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-33));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(g4));
    g5 = (g5 & hot_regs.g6);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(g5));
    g5 = (0u | 12u);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(g5));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(613))))));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(g4));
    g4 = (g5 & 2u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2207C;
      }
      goto L_08B22060;
    }
}
L_08B22060:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(613))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-3));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5452)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5452), g4);
    hot_regs.g4 = g4;
    goto L_08B2207C;
}
L_08B2207C:
    hot_regs.g31 = (0x08B22084u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22084u) goto L_08B22084;
    return;
L_08B22084:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22BE0;
      }
      goto L_08B2208C;
    }
L_08B2208C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 17u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B22BE0;
      }
      goto L_08B2209C;
    }
L_08B2209C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2292)));
    g5 = (static_cast<std::int32_t>(g4) < 65 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (static_cast<std::int32_t>(g4) < 129 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B220F8;
      }
      goto L_08B220AC;
    }
}
L_08B220AC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 33 ? 1u : 0u);
    if (hot_regs.g5 == 0u) {
    g4 = (static_cast<std::int32_t>(g4) < 64 ? 1u : 0u);
    hot_regs.g4 = g4;
        goto L_08B220D8;
    }
    goto L_08B220B8;
}
L_08B220B8:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_08B22BE0;
      }
      goto L_08B220C0;
    }
L_08B220C0:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2233u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-32040)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B220D8:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B22BE0;
      }
      goto L_08B220E0;
    }
L_08B220E0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (0u | 256u);
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(460)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(2292), g4);
    g4 = (hot_regs.g5 | 8192u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(460), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B22BE0;
      }
      goto L_08B220F8;
    }
}
L_08B220F8:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g5 = (0u | 256u);
      if (branch_taken) {
          goto L_08B22114;
      }
      goto L_08B22100;
    }
L_08B22100:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(g4) < 128 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B22BE0;
      }
      goto L_08B2210C;
    }
}
L_08B2210C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22AB0;
      }
      goto L_08B22114;
    }
L_08B22114:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B22B38;
      }
      goto L_08B2211C;
    }
L_08B2211C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22BE0;
      }
      goto L_08B22124;
    }
L_08B22124:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (2280u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(2352));
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g5 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08B22144u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08B20EB8;
}
L_08B22144:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2304), 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22230;
      }
      goto L_08B22154;
    }
L_08B22154:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2288), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2216C;
      }
      goto L_08B22160;
    }
}
L_08B22160:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g31 = (0x08B2216Cu);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2216Cu) goto L_08B2216C;
    return;
L_08B2216C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(816));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (0u | 1u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B22188u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 608u, 0x089F3910u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22188u) goto L_08B22188;
    return;
L_08B22188:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(816));
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08B221A0u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 608u, 0x089F3910u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B221A0u) goto L_08B221A0;
    return;
L_08B221A0:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
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
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
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
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B22208u);
    hot_regs.g5 = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 661u, 0x08ACDF58u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22208u) goto L_08B22208;
    return;
L_08B22208:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(456)));
    g4 = (g4 | 16384u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(456), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(2292), ctx.gpr[19]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(2296), g17);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(4), g4);
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B22374;
      }
      goto L_08B22230;
    }
}
L_08B22230:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22330;
      }
      goto L_08B2223C;
    }
L_08B2223C:
    hot_regs.g31 = (0x08B22244u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22244u) goto L_08B22244;
    return;
L_08B22244:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B22374;
      }
      goto L_08B2224C;
    }
L_08B2224C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    hot_regs.g5 = (0u | 18u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B22294;
      }
      goto L_08B2225C;
    }
L_08B2225C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B22294;
      }
      goto L_08B2226C;
    }
}
L_08B2226C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(563)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B22294;
      }
      goto L_08B2227C;
    }
}
L_08B2227C:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2228Cu);
    hot_regs.g5 = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2228Cu) goto L_08B2228C;
    return;
L_08B2228C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22374;
      }
      goto L_08B22294;
    }
L_08B22294:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B222E8;
      }
      goto L_08B222A4;
    }
}
L_08B222A4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    hot_regs.g5 = (0u | 16u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(900)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B222E8;
      }
      goto L_08B222BC;
    }
}
L_08B222BC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    hot_regs.g5 = (0u | 8u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B222E8;
      }
      goto L_08B222CC;
    }
L_08B222CC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(900)));
    hot_regs.g31 = (0x08B222E0u);
    hot_regs.g5 = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B222E0u) goto L_08B222E0;
    return;
L_08B222E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22374;
      }
      goto L_08B222E8;
    }
L_08B222E8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    hot_regs.g5 = (0u | 18u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B22374;
      }
      goto L_08B222F8;
    }
L_08B222F8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    hot_regs.g5 = (0u | 17u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B22374;
      }
      goto L_08B22308;
    }
L_08B22308:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    hot_regs.g5 = (0u | 8u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B22374;
      }
      goto L_08B22318;
    }
L_08B22318:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B22328u);
    hot_regs.g5 = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22328u) goto L_08B22328;
    return;
L_08B22328:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22374;
      }
      goto L_08B22330;
    }
L_08B22330:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 5u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B22374;
      }
      goto L_08B22340;
    }
L_08B22340:
    hot_regs.g31 = (0x08B22348u);
    // nop
    goto L_08B20934;
L_08B22348:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    if (static_cast<std::int32_t>(g4) >= 0) {
    g4 = (g4 & 7u);
    hot_regs.g4 = g4;
        goto L_08B22364;
    }
    goto L_08B22354;
}
L_08B22354:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u - g4);
    g4 = (g4 & 7u);
    { const bool branch_taken = 0u == 0u;
    g4 = (0u - g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B22364;
      }
      goto L_08B22364;
    }
}
L_08B22364:
    hot_regs.g5 = (hot_regs.g4 << 24u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 24u));
    hot_regs.g31 = (0x08B22374u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22374u) goto L_08B22374;
    return;
L_08B22374:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22BE0;
      }
      goto L_08B2237C;
    }
L_08B2237C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (2280u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(2352));
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g5 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08B2239Cu);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08B20EB8;
}
L_08B2239C:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B224B4;
      }
      goto L_08B223A8;
    }
L_08B223A8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2296)));
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B223C4;
      }
      goto L_08B223B4;
    }
L_08B223B4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B224CC;
      }
      goto L_08B223C4;
    }
L_08B223C4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2288), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B223DC;
      }
      goto L_08B223D0;
    }
}
L_08B223D0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g31 = (0x08B223DCu);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B223DCu) goto L_08B223DC;
    return;
L_08B223DC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g31 = (0x08B223E8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08B21AD4;
L_08B223E8:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B223FC;
      }
      goto L_08B223F0;
    }
L_08B223F0:
    hot_regs.g4 = (0u | 256u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2292), hot_regs.g4);
      if (branch_taken) {
          goto L_08B22BE0;
      }
      goto L_08B223FC;
    }
L_08B223FC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(816));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B22414u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 608u, 0x089F3910u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22414u) goto L_08B22414;
    return;
L_08B22414:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(816));
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08B2242Cu);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 608u, 0x089F3910u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2242Cu) goto L_08B2242C;
    return;
L_08B2242C:
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B22480u);
    hot_regs.g5 = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 661u, 0x08ACDF58u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22480u) goto L_08B22480;
    return;
L_08B22480:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(456)));
    g4 = (g4 | 16384u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(456), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2296)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(4), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(2296), g17);
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B224CC;
      }
      goto L_08B224B4;
    }
}
L_08B224B4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (0u | 256u);
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(456)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(2292), g4);
    g4 = (0u + static_cast<std::uint32_t>(-16385));
    g4 = (hot_regs.g5 & g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(456), g4);
    hot_regs.g4 = g4;
    goto L_08B224CC;
}
L_08B224CC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g4 = (16544u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B225A4;
      }
      goto L_08B224E8;
    }
L_08B224E8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1712)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2251C;
      }
      goto L_08B224F8;
    }
}
L_08B224F8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-16385));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B22514u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22514u) goto L_08B22514;
    return;
L_08B22514:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B225A4;
      }
      goto L_08B2251C;
    }
L_08B2251C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g4 = (16528u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B225A4;
      }
      goto L_08B22538;
    }
L_08B22538:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-16385));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B22554u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22554u) goto L_08B22554;
    return;
L_08B22554:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B2259C;
      }
      goto L_08B22570;
    }
L_08B22570:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g4 = (16528u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B225A4;
      }
      goto L_08B2258C;
    }
L_08B2258C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2296)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B225A4;
      }
      goto L_08B2259C;
    }
}
L_08B2259C:
    hot_regs.g4 = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2292), hot_regs.g4);
    goto L_08B225A4;
L_08B225A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22BE0;
      }
      goto L_08B225AC;
    }
L_08B225AC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B225EC;
      }
      goto L_08B225B8;
    }
L_08B225B8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B225EC;
      }
      goto L_08B225D4;
    }
L_08B225D4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g5 = (32768u << 16u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(460)));
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B225F8;
      }
      goto L_08B225EC;
    }
}
L_08B225EC:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2292), hot_regs.g4);
      if (branch_taken) {
          goto L_08B22BE0;
      }
      goto L_08B225F8;
    }
L_08B225F8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(1768), hot_regs.g5);
    hot_regs.g31 = (0x08B22610u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22610u) goto L_08B22610;
    return;
L_08B22610:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2261Cu);
    hot_regs.g5 = (0u | 27u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2261Cu) goto L_08B2261C;
    return;
L_08B2261C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B22628u);
    hot_regs.g5 = (0u | 27u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22628u) goto L_08B22628;
    return;
L_08B22628:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08B22640u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22640u) goto L_08B22640;
    return;
L_08B22640:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2264Cu);
    hot_regs.g5 = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2264Cu) goto L_08B2264C;
    return;
L_08B2264C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B22658u);
    hot_regs.g5 = (0u | 139u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22658u) goto L_08B22658;
    return;
L_08B22658:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2296)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2268C;
      }
      goto L_08B22668;
    }
}
L_08B22668:
    hot_regs.g31 = (0x08B22670u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22670u) goto L_08B22670;
    return;
L_08B22670:
    hot_regs.g4 = (0u | 128u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2292), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B22684u);
    hot_regs.g5 = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22684u) goto L_08B22684;
    return;
L_08B22684:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2296)));
      if (branch_taken) {
          goto L_08B226D8;
      }
      goto L_08B2268C;
    }
L_08B2268C:
    hot_regs.g4 = (0u | 16u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2292), hot_regs.g4);
    ctx.gpr[8] = (16512u << 16u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[8]);
    hot_regs.g6 = (0u | 26u);
    hot_regs.g31 = (0x08B226B0u);
    hot_regs.g7 = (0u | 223u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B226B0u) goto L_08B226B0;
    return;
L_08B226B0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B226BCu);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B226BCu) goto L_08B226BC;
    return;
L_08B226BC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (hot_regs.g5 | 8192u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), hot_regs.g5);
    hot_regs.g31 = (0x08B226D4u);
    hot_regs.g5 = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B226D4u) goto L_08B226D4;
    return;
L_08B226D4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2296)));
    goto L_08B226D8;
L_08B226D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2308))))));
    g4 = (g4 | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2308), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B22BE0;
      }
      goto L_08B226F4;
    }
}
L_08B226F4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2271C;
      }
      goto L_08B22700;
    }
L_08B22700:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B22728;
      }
      goto L_08B2271C;
    }
L_08B2271C:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2292), hot_regs.g4);
      if (branch_taken) {
          goto L_08B22BE0;
      }
      goto L_08B22728;
    }
L_08B22728:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(816));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B22740u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 608u, 0x089F3910u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22740u) goto L_08B22740;
    return;
L_08B22740:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(816));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B22758u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 608u, 0x089F3910u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22758u) goto L_08B22758;
    return;
L_08B22758:
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (16384u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = hot_regs.f14 - hot_regs.f12;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08B227B8u);
    hot_regs.f13 = hot_regs.f13 - hot_regs.f15;
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B227B8u) goto L_08B227B8;
    return;
L_08B227B8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g31 = (0x08B227C4u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 563u, 0x08A8EF4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B227C4u) goto L_08B227C4;
    return;
L_08B227C4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1716), hot_regs.g4);
    hot_regs.g31 = (0x08B227D8u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(1716));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B227D8u) goto L_08B227D8;
    return;
L_08B227D8:
    hot_regs.g31 = (0x08B227E0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 332u, 0x0890932Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B227E0u) goto L_08B227E0;
    return;
L_08B227E0:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2260)));
    f12 = f12 - hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f12 < hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f12 = f12;
        goto L_08B22800;
    }
    goto L_08B22800;
}
L_08B22800:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16201u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    hot_regs.g4 = g4;
        goto L_08B22828;
    }
    goto L_08B2281C;
}
L_08B2281C:
    hot_regs.g4 = (0u | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2292), hot_regs.g4);
      if (branch_taken) {
          goto L_08B22840;
      }
      goto L_08B22828;
    }
L_08B22828:
{
    float f12 = hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2260)));
    hot_regs.g4 = (16128u << 16u);
    f12 = f12 + hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08B22840;
}
L_08B22840:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22BE0;
      }
      goto L_08B22848;
    }
L_08B22848:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22870;
      }
      goto L_08B22854;
    }
L_08B22854:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B2287C;
      }
      goto L_08B22870;
    }
L_08B22870:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2292), hot_regs.g4);
      if (branch_taken) {
          goto L_08B22BE0;
      }
      goto L_08B2287C;
    }
L_08B2287C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(816));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B22894u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 608u, 0x089F3910u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22894u) goto L_08B22894;
    return;
L_08B22894:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(816));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B228ACu);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 608u, 0x089F3910u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B228ACu) goto L_08B228AC;
    return;
L_08B228AC:
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (16384u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = hot_regs.f14 - hot_regs.f12;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08B2290Cu);
    hot_regs.f13 = hot_regs.f13 - hot_regs.f15;
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2290Cu) goto L_08B2290C;
    return;
L_08B2290C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g31 = (0x08B22918u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 563u, 0x08A8EF4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22918u) goto L_08B22918;
    return;
L_08B22918:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1716), hot_regs.g4);
    hot_regs.g31 = (0x08B2292Cu);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(1716));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2292Cu) goto L_08B2292C;
    return;
L_08B2292C:
    hot_regs.g31 = (0x08B22934u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 332u, 0x0890932Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22934u) goto L_08B22934;
    return;
L_08B22934:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1736)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B22A9C;
      }
      goto L_08B22948;
    }
}
L_08B22948:
    hot_regs.g4 = (0u | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2292), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2295Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2295Cu) goto L_08B2295C;
    return;
L_08B2295C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B22968u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22968u) goto L_08B22968;
    return;
L_08B22968:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B22974u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22974u) goto L_08B22974;
    return;
L_08B22974:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g5 = (64u << 16u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(456)));
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B22AA8;
      }
      goto L_08B2298C;
    }
}
L_08B2298C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g5 = (17096u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08B229A8u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B229A8u) goto L_08B229A8;
    return;
L_08B229A8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g31 = (0x08B229B4u);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B229B4u) goto L_08B229B4;
    return;
L_08B229B4:
    hot_regs.g31 = (0x08B229BCu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 70u, 0x0891C44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B229BCu) goto L_08B229BC;
    return;
L_08B229BC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g5 = (0u | 1u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (hot_regs.g5 & 1u);
    hot_regs.g7 = (0u + static_cast<std::uint32_t>(-513));
    hot_regs.g6 = (hot_regs.g6 & hot_regs.g7);
    hot_regs.g5 = (hot_regs.g5 << 9u);
    hot_regs.g5 = (hot_regs.g6 | hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(72), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g31 = (0x08B229ECu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B229ECu) goto L_08B229EC;
    return;
L_08B229EC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(248));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08B22A0Cu);
    hot_regs.g5 = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22A0Cu) goto L_08B22A0C;
    return;
L_08B22A0C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g31 = (0x08B22A18u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22A18u) goto L_08B22A18;
    return;
L_08B22A18:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(248));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08B22A38u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g7);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22A38u) goto L_08B22A38;
    return;
L_08B22A38:
    hot_regs.g31 = (0x08B22A40u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 976u, 0x0890BDFCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22A40u) goto L_08B22A40;
    return;
L_08B22A40:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g5 = (57344u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(456)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = (hot_regs.g6 & hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(456), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(464)));
    hot_regs.g5 = (hot_regs.g6 & hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(464), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1025));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(468)));
    hot_regs.g5 = (hot_regs.g6 & hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(468), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g5 = (0u | 124u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(2116), 0u);
    hot_regs.g31 = (0x08B22A94u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22A94u) goto L_08B22A94;
    return;
L_08B22A94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22AA8;
      }
      goto L_08B22A9C;
    }
L_08B22A9C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B22AA8u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22AA8u) goto L_08B22AA8;
    return;
L_08B22AA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22BE0;
      }
      goto L_08B22AB0;
    }
L_08B22AB0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22AD8;
      }
      goto L_08B22ABC;
    }
L_08B22ABC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B22AE4;
      }
      goto L_08B22AD8;
    }
L_08B22AD8:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2292), hot_regs.g4);
      if (branch_taken) {
          goto L_08B22BE0;
      }
      goto L_08B22AE4;
    }
L_08B22AE4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2296)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B22AFC;
      }
      goto L_08B22AF4;
    }
}
L_08B22AF4:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2292), hot_regs.g4);
    goto L_08B22AFC;
L_08B22AFC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2296)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B22B14;
      }
      goto L_08B22B0C;
    }
}
L_08B22B0C:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2292), hot_regs.g4);
    goto L_08B22B14;
L_08B22B14:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2280u << 16u);
    hot_regs.g31 = (0x08B22B20u);
    g4 = (g4 + static_cast<std::uint32_t>(2352));
    hot_regs.g4 = g4;
    goto L_08B211A8;
}
L_08B22B20:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22B30;
      }
      goto L_08B22B28;
    }
L_08B22B28:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2292), hot_regs.g4);
    goto L_08B22B30;
L_08B22B30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22BE0;
      }
      goto L_08B22B38;
    }
L_08B22B38:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2308))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2308), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B22B54u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22B54u) goto L_08B22B54;
    return;
L_08B22B54:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2296)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22B7C;
      }
      goto L_08B22B60;
    }
L_08B22B60:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2296)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2296)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(2296), 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08B22B7C;
}
L_08B22B7C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B22BD8;
      }
      goto L_08B22B88;
    }
L_08B22B88:
    hot_regs.g31 = (0x08B22B90u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22B90u) goto L_08B22B90;
    return;
L_08B22B90:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B22BD8;
      }
      goto L_08B22B98;
    }
L_08B22B98:
    hot_regs.g31 = (0x08B22BA0u);
    // nop
    goto L_08B20934;
L_08B22BA0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    if (static_cast<std::int32_t>(g4) >= 0) {
    g4 = (g4 & 7u);
    hot_regs.g4 = g4;
        goto L_08B22BBC;
    }
    goto L_08B22BAC;
}
L_08B22BAC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u - g4);
    g4 = (g4 & 7u);
    { const bool branch_taken = 0u == 0u;
    g4 = (0u - g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B22BBC;
      }
      goto L_08B22BBC;
    }
}
L_08B22BBC:
    hot_regs.g5 = (hot_regs.g4 << 24u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 24u));
    hot_regs.g31 = (0x08B22BCCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22BCCu) goto L_08B22BCC;
    return;
L_08B22BCC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B22BD8u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22BD8u) goto L_08B22BD8;
    return;
L_08B22BD8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2288), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2292), 0u);
    goto L_08B22BE0;
L_08B22BE0:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(356)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(360)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(364)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(368)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(372)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(376)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B22C00:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), g16);
    g16 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2292)));
    g5 = (0u | 256u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), hot_regs.g31);
    { const bool branch_taken = g4 == g5;
    g5 = (0u | 128u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B22DD4;
      }
      goto L_08B22C24;
    }
}
L_08B22C24:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 1u);
      if (branch_taken) {
          goto L_08B22D6C;
      }
      goto L_08B22C2C;
    }
L_08B22C2C:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B22CB4;
      }
      goto L_08B22C34;
    }
L_08B22C34:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B22CAC;
      }
      goto L_08B22C3C;
    }
L_08B22C3C:
    hot_regs.g4 = (2238u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(14864));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08B22C5Cu);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 688u, 0x089CFB70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22C5Cu) goto L_08B22C5C;
    return;
L_08B22C5C:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22CAC;
      }
      goto L_08B22C68;
    }
L_08B22C68:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B22C74u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22C74u) goto L_08B22C74;
    return;
L_08B22C74:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
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
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08B22C94u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 686u, 0x0890AA84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22C94u) goto L_08B22C94;
    return;
L_08B22C94:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B22CA0u);
    hot_regs.g5 = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22CA0u) goto L_08B22CA0;
    return;
L_08B22CA0:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2292), hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2300), ctx.gpr[17]);
    goto L_08B22CAC;
L_08B22CAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22E30;
      }
      goto L_08B22CB4;
    }
L_08B22CB4:
    hot_regs.g4 = (2238u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(14864));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08B22CD4u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 688u, 0x089CFB70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22CD4u) goto L_08B22CD4;
    return;
L_08B22CD4:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22D30;
      }
      goto L_08B22CE0;
    }
L_08B22CE0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2300)));
    { const bool branch_taken = ctx.gpr[17] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B22D30;
      }
      goto L_08B22CEC;
    }
L_08B22CEC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B22CF8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22CF8u) goto L_08B22CF8;
    return;
L_08B22CF8:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
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
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08B22D18u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 686u, 0x0890AA84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22D18u) goto L_08B22D18;
    return;
L_08B22D18:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B22D24u);
    hot_regs.g5 = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22D24u) goto L_08B22D24;
    return;
L_08B22D24:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2300), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22D38;
      }
      goto L_08B22D30;
    }
L_08B22D30:
    hot_regs.g4 = (0u | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2292), hot_regs.g4);
    goto L_08B22D38;
L_08B22D38:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (16544u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B22D64;
      }
      goto L_08B22D54;
    }
L_08B22D54:
    hot_regs.g31 = (0x08B22D5Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22D5Cu) goto L_08B22D5C;
    return;
L_08B22D5C:
    hot_regs.g4 = (0u | 128u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2292), hot_regs.g4);
    goto L_08B22D64;
L_08B22D64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22CAC;
      }
      goto L_08B22D6C;
    }
L_08B22D6C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2300)));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B22D84;
      }
      goto L_08B22D7C;
    }
}
L_08B22D7C:
    hot_regs.g4 = (0u | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2292), hot_regs.g4);
    goto L_08B22D84;
L_08B22D84:
    hot_regs.g4 = (16880u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (2238u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(14864));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.g31 = (0x08B22DB0u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 688u, 0x089CFB70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22DB0u) goto L_08B22DB0;
    return;
L_08B22DB0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22DC0;
      }
      goto L_08B22DB8;
    }
L_08B22DB8:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2292), hot_regs.g4);
    goto L_08B22DC0;
L_08B22DC0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B22DCCu);
    hot_regs.g5 = (0u | 150u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22DCCu) goto L_08B22DCC;
    return;
L_08B22DCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22CAC;
      }
      goto L_08B22DD4;
    }
L_08B22DD4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B22DE0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22DE0u) goto L_08B22DE0;
    return;
L_08B22DE0:
    hot_regs.g31 = (0x08B22DE8u);
    // nop
    goto L_08B20934;
L_08B22DE8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    if (static_cast<std::int32_t>(g4) >= 0) {
    g4 = (g4 & 7u);
    hot_regs.g4 = g4;
        goto L_08B22E04;
    }
    goto L_08B22DF4;
}
L_08B22DF4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u - g4);
    g4 = (g4 & 7u);
    { const bool branch_taken = 0u == 0u;
    g4 = (0u - g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B22E04;
      }
      goto L_08B22E04;
    }
}
L_08B22E04:
    hot_regs.g5 = (hot_regs.g4 << 24u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 24u));
    hot_regs.g31 = (0x08B22E14u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22E14u) goto L_08B22E14;
    return;
L_08B22E14:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2300), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2292), 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B22E28u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22E28u) goto L_08B22E28;
    return;
L_08B22E28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22CAC;
      }
      goto L_08B22E30;
    }
L_08B22E30:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B22E44:
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
L_08B22E6C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
L_08B22EB0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(10580), static_cast<std::uint16_t>(0u));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g4 = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    hot_regs.g6 = (2281u << 16u);
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B22F4C;
      }
      goto L_08B22ED4;
    }
}
L_08B22ED4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2281u << 16u);
    hot_regs.g7 = (0u | 2u);
    hot_regs.g5 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-32080));
    g4 = (g4 + static_cast<std::uint32_t>(-31480));
    hot_regs.g4 = g4;
    goto L_08B22EEC;
}
L_08B22EEC:
{
    std::uint32_t g11 = ctx.gpr[11];
    g11 = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    g11 = (g11 + ctx.gpr[8]);
    g11 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g11 + static_cast<std::uint32_t>(8))))));
    hot_regs.g2 = (g11 & 128u);
    { const bool branch_taken = hot_regs.g2 == 0u;
    g11 = (g11 & 15u);
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_08B22F38;
      }
      goto L_08B22F04;
    }
}
L_08B22F04:
    { const bool branch_taken = ctx.gpr[11] != hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08B22F38;
      }
      goto L_08B22F0C;
    }
L_08B22F0C:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(10580))))));
    hot_regs.g2 = (static_cast<std::int32_t>(ctx.gpr[11]) < 300 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B22F38;
      }
      goto L_08B22F1C;
    }
L_08B22F1C:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g11 = ctx.gpr[11];
    g2 = (g11 + g11);
    g2 = (g2 + hot_regs.g6);
    aot_mem.aot_store16(g2 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    g2 = (g11 + hot_regs.g4);
    aot_mem.aot_store8(g2 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    g11 = (g11 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(10580), static_cast<std::uint16_t>(g11));
    hot_regs.g2 = g2;
    ctx.gpr[11] = g11;
    goto L_08B22F38;
}
L_08B22F38:
{
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    g11 = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    g10 = (g10 + static_cast<std::uint32_t>(1));
    g11 = (static_cast<std::int32_t>(g10) < static_cast<std::int32_t>(g11) ? 1u : 0u);
    { const bool branch_taken = g11 != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(10));
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_08B22EEC;
      }
      goto L_08B22F4C;
    }
}
L_08B22F4C:
    hot_regs.g31 = (0x08B22F54u);
    // nop
    goto L_08B2331C;
L_08B22F54:
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
L_08B22F60:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-512));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(444), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(464), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(468), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(472), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(476), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(480), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(484), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(488), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(492), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(496), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(500), hot_regs.g31);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(184)));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[16] = (hot_regs.g4 & 15u);
    hot_regs.g31 = (0x08B22FD4u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22FD4u) goto L_08B22FD4;
    return;
L_08B22FD4:
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(240)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x08B22FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B22FF8u) goto L_08B22FF8;
    return;
L_08B22FF8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g23 = ctx.gpr[23];
    ctx.gpr[30] = (hot_regs.g2 | 0u);
    g4 = (ctx.gpr[16] << 6u);
    g5 = (ctx.gpr[16] << 2u);
    g17 = (g4 - g5);
    g4 = (g17 << 2u);
    g17 = (g17 + g4);
    g4 = (g17 + static_cast<std::uint32_t>(300));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 4u));
    g4 = (g4 >> 28u);
    g4 = (g17 + g4);
    g23 = (g4 + static_cast<std::uint32_t>(300));
    g23 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g23) >> 4u));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(10580))))));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g23) ? 1u : 0u);
    g5 = (2281u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-31168));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(440), g5);
    if (g4 != 0u) {
    g23 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(10580))))));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    ctx.gpr[23] = g23;
        goto L_08B23044;
    }
    goto L_08B23044;
}
L_08B23044:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g23 = ctx.gpr[23];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 4u));
    g4 = (g4 >> 28u);
    g23 = (g23 << 16u);
    g17 = (g17 + g4);
    g23 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g23) >> 16u));
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 4u));
    g4 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(g23) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (2281u << 16u);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    ctx.gpr[23] = g23;
      if (branch_taken) {
          goto L_08B231B8;
      }
      goto L_08B23068;
    }
}
L_08B23068:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g22 = ctx.gpr[22];
    g18 = (ctx.gpr[17] + ctx.gpr[17]);
    g4 = (g4 + static_cast<std::uint32_t>(-32080));
    g18 = (g18 + g4);
    g4 = (18120u << 16u);
    g22 = (2281u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(g4);
    g20 = (2238u << 16u);
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(216));
    ctx.gpr[21] = (0u | 1u);
    g22 = (g22 + static_cast<std::uint32_t>(-31480));
    g20 = (g20 + static_cast<std::uint32_t>(-6992));
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
    ctx.gpr[20] = g20;
    ctx.gpr[22] = g22;
    goto L_08B23094;
}
L_08B23094:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f24 = ctx.fpr[24];
    float f26 = ctx.fpr[26];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g16 << 3u);
    g5 = (g16 + g5);
    g5 = (g16 + g5);
    g9 = (g4 + g5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(0))))));
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(g9);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    f12 = f12 - f13;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(220)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    f14 = f14 - hot_regs.f15;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(f14));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f20 = std::bit_cast<float>(g4);
    g4 = (std::bit_cast<std::uint32_t>(f14));
    hot_regs.f22 = std::bit_cast<float>(g4);
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    f24 = std::bit_cast<float>(g4);
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f22));
    f26 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(f24));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(f26));
    { const float fs = f24; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f26; const float ft = f26; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    ctx.set_fpu_condition((f12 < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (ctx.gpr[17] + ctx.gpr[22]);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[9] = g9;
    ctx.gpr[16] = g16;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    ctx.fpr[24] = f24;
    ctx.fpr[26] = f26;
      if (branch_taken) {
          goto L_08B23194;
      }
      goto L_08B23130;
    }
}
}
L_08B23130:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B23198;
      }
      goto L_08B2313C;
    }
L_08B2313C:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
      if (branch_taken) {
          goto L_08B23198;
      }
      goto L_08B23144;
    }
L_08B23144:
    hot_regs.g31 = (0x08B2314Cu);
    // nop
    goto L_08B20934;
L_08B2314C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    hot_regs.g6 = (g4 + g4);
    hot_regs.g7 = (g4 << 8u);
    g4 = (g4 + hot_regs.g6);
    g4 = (g4 << 5u);
    g4 = (hot_regs.g7 + g4);
    g4 = (g4 + ctx.gpr[20]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (hot_regs.g2 & 65535u);
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(2316)));
    g5 = (g5 & 100u);
    g4 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B23198;
      }
      goto L_08B23184;
    }
}
L_08B23184:
    hot_regs.g31 = (0x08B2318Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 17u, 0x08B24190u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2318Cu) goto L_08B2318C;
    return;
L_08B2318C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B23198;
      }
      goto L_08B23194;
    }
L_08B23194:
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08B23198;
L_08B23198:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08B23094;
      }
      goto L_08B231A8;
    }
}
L_08B231A8:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08B231B8;
}
L_08B231B8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(440)));
    g5 = (g5 & 15u);
    g17 = (g5 << 4u);
    g5 = (g17 + g17);
    g17 = (g17 + g5);
    ctx.gpr[16] = (g17 + g4);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (g5 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(184)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
        goto L_08B23294;
    }
    goto L_08B231E0;
}
L_08B231E0:
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[17] + hot_regs.g4);
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
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
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
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(288));
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
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08B23230u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23230u) goto L_08B23230;
    return;
L_08B23230:
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
    hot_regs.g4 = (18145u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 51200u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B23290;
      }
      goto L_08B2326C;
    }
L_08B2326C:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(336));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08B2328Cu);
    // nop
    goto L_08B23774;
L_08B2328C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    goto L_08B23290;
L_08B23290:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(184)));
    goto L_08B23294;
L_08B23294:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 1u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = g4;
        goto L_08B232B8;
    }
    goto L_08B232A0;
}
L_08B232A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(176)));
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = g4;
        goto L_08B232B8;
    }
    goto L_08B232AC;
}
L_08B232AC:
    hot_regs.g31 = (0x08B232B4u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B232B4u) goto L_08B232B4;
    return;
L_08B232B4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    goto L_08B232B8;
L_08B232B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B232D8;
      }
      goto L_08B232C4;
    }
}
L_08B232C4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B232D8;
      }
      goto L_08B232D0;
    }
L_08B232D0:
    hot_regs.g31 = (0x08B232D8u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B232D8u) goto L_08B232D8;
    return;
L_08B232D8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(444)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(448)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(452)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(456)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(460)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(464)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(468)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(472)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(476)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(480)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(484)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(488)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(492)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(496)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(500)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(512));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B2331C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2281u << 16u);
    hot_regs.g5 = (0u | 0u);
    g4 = (g4 + static_cast<std::uint32_t>(-31168));
    hot_regs.g4 = g4;
    goto L_08B23328;
}
L_08B23328:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 16 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B23328;
      }
      goto L_08B2333C;
    }
}
L_08B2333C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B23344:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(292), ctx.gpr[20]);
    ctx.gpr[20] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(288), ctx.gpr[19]);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(260), ctx.gpr[20]);
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), 0u);
    hot_regs.g4 = (hot_regs.g5 & hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (49088u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16358u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 26214u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f20 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (49126u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (hot_regs.g4 | 26214u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (16320u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(276), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(280), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(284), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(296), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(300), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(304), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(308), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(312), hot_regs.g31);
    hot_regs.g31 = (0x08B23414u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23414u) goto L_08B23414;
    return;
L_08B23414:
{
    std::uint32_t g20 = ctx.gpr[20];
    { const bool branch_taken = hot_regs.g2 == 0u;
    g20 = (g20 + g20);
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_08B2342C;
      }
      goto L_08B2341C;
    }
}
L_08B2341C:
    hot_regs.g31 = (0x08B23424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23424u) goto L_08B23424;
    return;
L_08B23424:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08B23454;
      }
      goto L_08B2342C;
    }
L_08B2342C:
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
    ctx.gpr[22] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08B23454;
}
L_08B23454:
{
    float f22 = hot_regs.f22;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(828)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    f22 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    g4 = (g20 << 4u);
    g20 = (g29 + g4);
    g4 = (49097u << 16u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(12)));
    g4 = (g4 | 4059u);
    f22 = f22 / hot_regs.f12;
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(208));
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(176));
    ctx.gpr[17] = (0u | 2u);
    g20 = (g20 + static_cast<std::uint32_t>(80));
    ctx.fpr[24] = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[20] = g20;
    hot_regs.f22 = f22;
    goto L_08B234A8;
}
}
L_08B234A8:
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08B234D0u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    goto L_08B22E44;
L_08B234D0:
{
    std::uint32_t g5 = hot_regs.g5;
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(86))))));
    g5 = (0u | 234u);
    { const bool branch_taken = hot_regs.g4 == g5;
    g5 = (0u | 218u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2350C;
      }
      goto L_08B234E8;
    }
}
L_08B234E8:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 193u);
      if (branch_taken) {
          goto L_08B23524;
      }
      goto L_08B234F0;
    }
L_08B234F0:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 191u);
      if (branch_taken) {
          goto L_08B23518;
      }
      goto L_08B234F8;
    }
L_08B234F8:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B23530;
      }
      goto L_08B23500;
    }
L_08B23500:
    ctx.gpr[18] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_08B23538;
      }
      goto L_08B2350C;
    }
L_08B2350C:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 9u);
      if (branch_taken) {
          goto L_08B23538;
      }
      goto L_08B23518;
    }
L_08B23518:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 10u);
      if (branch_taken) {
          goto L_08B23538;
      }
      goto L_08B23524;
    }
L_08B23524:
    ctx.gpr[18] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 11u);
      if (branch_taken) {
          goto L_08B23538;
      }
      goto L_08B23530;
    }
L_08B23530:
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g4 = (0u | 8u);
    goto L_08B23538;
L_08B23538:
    hot_regs.g31 = (0x08B23540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23540u) goto L_08B23540;
    return;
L_08B23540:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B23590;
      }
      goto L_08B23548;
    }
L_08B23548:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g31 = (0x08B23554u);
    hot_regs.g4 = (0u | 2352u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 475u, 0x089062ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23554u) goto L_08B23554;
    return;
L_08B23554:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (hot_regs.g2 | 0u);
    { const bool branch_taken = g16 == 0u;
    hot_regs.g4 = (g16 | 0u);
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08B23570;
      }
      goto L_08B23560;
    }
}
L_08B23560:
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B2356Cu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 437u, 0x08A31EA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2356Cu) goto L_08B2356C;
    return;
L_08B2356C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08B23570;
L_08B23570:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08B23588;
      }
      goto L_08B2357C;
    }
L_08B2357C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B23588u);
    hot_regs.g5 = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23588u) goto L_08B23588;
    return;
L_08B23588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B235CC;
      }
      goto L_08B23590;
    }
L_08B23590:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g31 = (0x08B2359Cu);
    hot_regs.g4 = (0u | 2352u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 475u, 0x089062ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2359Cu) goto L_08B2359C;
    return;
L_08B2359C:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (hot_regs.g2 | 0u);
    { const bool branch_taken = g16 == 0u;
    hot_regs.g4 = (g16 | 0u);
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08B235B8;
      }
      goto L_08B235A8;
    }
}
L_08B235A8:
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08B235B4u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 437u, 0x08A31EA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B235B4u) goto L_08B235B4;
    return;
L_08B235B4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08B235B8;
L_08B235B8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B235C8u);
    hot_regs.g5 = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B235C8u) goto L_08B235C8;
    return;
L_08B235C8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    goto L_08B235CC;
L_08B235CC:
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08B235D8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 719u, 0x08B1FB98u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B235D8u) goto L_08B235D8;
    return;
L_08B235D8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(176)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(180)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08B23610u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23610u) goto L_08B23610;
    return;
L_08B23610:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(240)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(248)));
    hot_regs.g31 = (0x08B23624u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23624u) goto L_08B23624;
    return;
L_08B23624:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2297), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g31 = (0x08B23634u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23634u) goto L_08B23634;
    return;
L_08B23634:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(460)));
    g4 = (g4 | 512u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(460), g4);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2049));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(460), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1260), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(2288), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B23670;
      }
      goto L_08B23664;
    }
}
L_08B23664:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2288)));
    hot_regs.g31 = (0x08B23670u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23670u) goto L_08B23670;
    return;
L_08B23670:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(260)));
    ctx.gpr[17] = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B23694;
      }
      goto L_08B23680;
    }
L_08B23680:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    g4 = (0u + static_cast<std::uint32_t>(-4097));
    g4 = (hot_regs.g5 & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B236A0;
      }
      goto L_08B23694;
    }
}
L_08B23694:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    g4 = (g4 | 4096u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), g4);
    hot_regs.g4 = g4;
    goto L_08B236A0;
}
L_08B236A0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B236D0;
      }
      goto L_08B236A8;
    }
L_08B236A8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(240));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08B236C4u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B236C4u) goto L_08B236C4;
    return;
L_08B236C4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B236D0u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 716u, 0x088E76D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B236D0u) goto L_08B236D0;
    return;
L_08B236D0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B236DCu);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B236DCu) goto L_08B236DC;
    return;
L_08B236DC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (hot_regs.g4 | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), hot_regs.g4);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x08B236F8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 190u, 0x08945304u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B236F8u) goto L_08B236F8;
    return;
L_08B236F8:
    hot_regs.g31 = (0x08B23700u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23700u) goto L_08B23700;
    return;
L_08B23700:
{
    std::uint32_t g21 = ctx.gpr[21];
    g21 = (g21 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g21) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_08B234A8;
      }
      goto L_08B23710;
    }
}
L_08B23710:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B23734;
      }
      goto L_08B23720;
    }
}
L_08B23720:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B23734;
      }
      goto L_08B2372C;
    }
L_08B2372C:
    hot_regs.g31 = (0x08B23734u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23734u) goto L_08B23734;
    return;
L_08B23734:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 1u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(264)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(268)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(276)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(280)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(284)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(288)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(292)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(296)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(300)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(304)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(308)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(312)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B23774:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-736));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(676), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(680), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(684), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(688), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(692), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(696), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(700), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(704), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(708), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(712), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(716), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(720), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(724), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(728), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(732), hot_regs.g31);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(224), 0u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(232)));
    hot_regs.g7 = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g6 = (hot_regs.g6 & hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(232), hot_regs.g6);
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g7 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g7);
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
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
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
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08B238B0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B238B0u) goto L_08B238B0;
    return;
L_08B238B0:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (49024u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16000u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g6 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08B23908;
      }
      goto L_08B238F4;
    }
L_08B238F4:
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
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
    goto L_08B23908;
L_08B23908:
    hot_regs.g31 = (0x08B23910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23910u) goto L_08B23910;
    return;
L_08B23910:
    hot_regs.g31 = (0x08B23918u);
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 1029u, 0x08AB3FB8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23918u) goto L_08B23918;
    return;
L_08B23918:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B23928;
      }
      goto L_08B23920;
    }
L_08B23920:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 218u);
      if (branch_taken) {
          goto L_08B2396C;
      }
      goto L_08B23928;
    }
L_08B23928:
    hot_regs.g31 = (0x08B23930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23930u) goto L_08B23930;
    return;
L_08B23930:
    hot_regs.g31 = (0x08B23938u);
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 1021u, 0x08AB3F70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23938u) goto L_08B23938;
    return;
L_08B23938:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B23948;
      }
      goto L_08B23940;
    }
L_08B23940:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 193u);
      if (branch_taken) {
          goto L_08B2396C;
      }
      goto L_08B23948;
    }
L_08B23948:
    hot_regs.g31 = (0x08B23950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23950u) goto L_08B23950;
    return;
L_08B23950:
    hot_regs.g31 = (0x08B23958u);
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 1013u, 0x08AB3F28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23958u) goto L_08B23958;
    return;
L_08B23958:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B23968;
      }
      goto L_08B23960;
    }
L_08B23960:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 234u);
      if (branch_taken) {
          goto L_08B2396C;
      }
      goto L_08B23968;
    }
L_08B23968:
    ctx.gpr[16] = (0u | 207u);
    goto L_08B2396C;
L_08B2396C:
    hot_regs.g31 = (0x08B23974u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23974u) goto L_08B23974;
    return;
L_08B23974:
    if (hot_regs.g2 != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
        goto L_08B23984;
    }
    goto L_08B2397C;
L_08B2397C:
    ctx.gpr[16] = (0u | 207u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    goto L_08B23984;
L_08B23984:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[23] = (ctx.gpr[16] << 2u);
    g4 = (g4 + ctx.gpr[23]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (16320u << 16u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    f12 = std::bit_cast<float>(g5);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    { const float fs = hot_regs.f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 + ctx.fpr[26];
    f12 = hot_regs.f22 / f12;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(656), ctx.gpr[16]);
    g4 = (0u | 6u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(652), g4);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (static_cast<std::int32_t>(g4) < 6 ? 1u : 0u);
    if (g5 != 0u) {
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(652), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
        goto L_08B239CC;
    }
    goto L_08B239CC;
}
}
L_08B239CC:
{
    float f12 = hot_regs.f12;
    float f28 = ctx.fpr[28];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(652)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(hot_regs.f22));
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    f28 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g5 = (48768u << 16u);
    f28 = hot_regs.f22 / f28;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (48896u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g7 = (16128u << 16u);
    ctx.gpr[8] = (16256u << 16u);
    ctx.gpr[30] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    f12 = std::bit_cast<float>(hot_regs.g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    ctx.fpr[28] = f28;
      if (branch_taken) {
          goto L_08B23DF4;
      }
      goto L_08B23A2C;
    }
}
}
L_08B23A2C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(660)));
    { const float fs = ctx.fpr[28]; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (16153u << 16u);
    { const float fs = hot_regs.f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g4 = (g4 | 39322u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(320));
    g4 = (16240u << 16u);
    g4 = (g4 | 41943u);
    f12 = f13 + f12;
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(304));
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(208));
    ctx.fpr[30] = std::bit_cast<float>(g4);
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(288));
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(240));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(ctx.gpr[30]);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08B23A70;
}
}
L_08B23A70:
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(664)));
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const float fs = ctx.fpr[28]; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x08B23A98u);
    hot_regs.f20 = hot_regs.f20 + hot_regs.f15;
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 943u, 0x0885FFE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23A98u) goto L_08B23A98;
    return;
L_08B23A98:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f24 = ctx.fpr[24];
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(f12));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) ^ 0x80000000u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(f24));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(f24));
    hot_regs.g4 = (16256u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(f24));
    hot_regs.g31 = (0x08B23AD8u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08B20934;
}
}
L_08B23AD8:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (15172u << 16u);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (17152u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (hot_regs.g5 | 39846u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    hot_regs.g31 = (0x08B23B0Cu);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 926u, 0x0885FD1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23B0Cu) goto L_08B23B0C;
    return;
L_08B23B0C:
    hot_regs.g31 = (0x08B23B14u);
    // nop
    goto L_08B20934;
L_08B23B14:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    hot_regs.g5 = (g4 & 1u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B23B34;
      }
      goto L_08B23B24;
    }
}
L_08B23B24:
    hot_regs.g5 = (16457u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 4059u);
    hot_regs.g31 = (0x08B23B34u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 926u, 0x0885FD1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23B34u) goto L_08B23B34;
    return;
L_08B23B34:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (hot_regs.g29 | 0u);
    goto L_08B23B3C;
L_08B23B3C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(216)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f22;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(hot_regs.f12));
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
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[23]);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.f12 = hot_regs.f12 - ctx.fpr[26];
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    hot_regs.g7 = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g31 = (0x08B23BD0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 365u, 0x0889A004u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23BD0u) goto L_08B23BD0;
    return;
L_08B23BD0:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(240))))));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B23BE4;
      }
      goto L_08B23BDC;
    }
L_08B23BDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B23BF4;
      }
      goto L_08B23BE4;
    }
L_08B23BE4:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (g17 < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08B23B3C;
      }
      goto L_08B23BF4;
    }
}
L_08B23BF4:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g31 = (0x08B23C00u);
    hot_regs.g4 = (0u | 1920u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23C00u) goto L_08B23C00;
    return;
L_08B23C00:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (hot_regs.g2 | 0u);
    if (g16 == 0u) {
    g16 = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = g16;
        goto L_08B23C28;
    }
    goto L_08B23C0C;
}
L_08B23C0C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(656)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08B23C20u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 92u, 0x08834A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23C20u) goto L_08B23C20;
    return;
L_08B23C20:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08B23C28;
L_08B23C28:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-497));
    hot_regs.g4 = (hot_regs.g5 & hot_regs.g4);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (hot_regs.g6 + static_cast<std::uint32_t>(384));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(216)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08B23C58u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23C58u) goto L_08B23C58;
    return;
L_08B23C58:
    hot_regs.f12 = ctx.fpr[0] - hot_regs.f22;
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    hot_regs.g31 = (0x08B23C70u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23C70u) goto L_08B23C70;
    return;
L_08B23C70:
    hot_regs.g31 = (0x08B23C78u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 155u, 0x08848E78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23C78u) goto L_08B23C78;
    return;
L_08B23C78:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2049));
    hot_regs.g5 = (hot_regs.g6 & hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B23C90u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23C90u) goto L_08B23C90;
    return;
L_08B23C90:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(680), hot_regs.g4);
    hot_regs.g31 = (0x08B23CA0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23CA0u) goto L_08B23CA0;
    return;
L_08B23CA0:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-9));
    hot_regs.g4 = (hot_regs.g5 & hot_regs.g4);
    hot_regs.g6 = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(439), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(433), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(427), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(614))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g4 = (hot_regs.g5 | 128u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(614), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g31 = (0x08B23CF0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 238u, 0x08B00E18u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23CF0u) goto L_08B23CF0;
    return;
L_08B23CF0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B23D1C;
      }
      goto L_08B23CF8;
    }
L_08B23CF8:
    hot_regs.g31 = (0x08B23D00u);
    // nop
    goto L_08B20934;
L_08B23D00:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B23D1C;
      }
      goto L_08B23D10;
    }
}
L_08B23D10:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(618))))));
    g4 = (g4 | 32u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08B23D1C;
}
L_08B23D1C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B23DBC;
      }
      goto L_08B23D34;
    }
L_08B23D34:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08B23D40u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 190u, 0x08945304u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23D40u) goto L_08B23D40;
    return;
L_08B23D40:
    hot_regs.g31 = (0x08B23D48u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23D48u) goto L_08B23D48;
    return;
L_08B23D48:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(615))))));
    hot_regs.g4 = (hot_regs.g4 | 32u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(hot_regs.g4));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(352));
    hot_regs.g31 = (0x08B23D60u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23D60u) goto L_08B23D60;
    return;
L_08B23D60:
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B23DA4;
      }
      goto L_08B23D9C;
    }
L_08B23D9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(626), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B23DAC;
      }
      goto L_08B23DA4;
    }
L_08B23DA4:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(626), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08B23DAC;
L_08B23DAC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(7000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(652), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B23DE0;
      }
      goto L_08B23DBC;
    }
}
L_08B23DBC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B23DE0;
      }
      goto L_08B23DC4;
    }
L_08B23DC4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (0u | 3u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08B23DE0u);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23DE0u) goto L_08B23DE0;
    return;
L_08B23DE0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g30 = ctx.gpr[30];
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(652)));
    g30 = (g30 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g30) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g4 != 0u) {
    hot_regs.f12 = std::bit_cast<float>(g30);
    hot_regs.g4 = g4;
    ctx.gpr[30] = g30;
        goto L_08B23A70;
    }
    goto L_08B23DF4;
}
L_08B23DF4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(660)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f15 = std::bit_cast<float>(ctx.gpr[16]);
    hot_regs.f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f15)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    hot_regs.f14 = hot_regs.f15 - hot_regs.f14;
    hot_regs.f12 = hot_regs.f12 / hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(68)));
    hot_regs.g6 = (ctx.gpr[28] + static_cast<std::uint32_t>(3740));
    hot_regs.g5 = (0u | 1u);
    hot_regs.g31 = (0x08B23E34u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23E34u) goto L_08B23E34;
    return;
L_08B23E34:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    hot_regs.g31 = (0x08B23E40u);
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23E40u) goto L_08B23E40;
    return;
L_08B23E40:
    if (hot_regs.g2 == 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(232)));
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 13u, 0x08B24128u>(ctx, &aot_mem, &hot_regs); return;
    }
    goto L_08B23E48;
L_08B23E48:
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(644), ctx.gpr[16]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 12u, 0x08B24124u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08B23E58;
    }
L_08B23E58:
{
    float f13 = hot_regs.f13;
    float f28 = ctx.fpr[28];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (48896u << 16u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(660)));
    hot_regs.f14 = std::bit_cast<float>(g4);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(648)));
    g4 = (15172u << 16u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f28 = std::bit_cast<float>(0x7FC00000u); else f28 = fs * ft; }
    g4 = (g4 | 39846u);
    { const float fs = f13; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.fpr[30] = std::bit_cast<float>(g4);
    hot_regs.g5 = (15820u << 16u);
    g4 = (16544u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    g18 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(644)));
    hot_regs.g6 = (16384u << 16u);
    f28 = f28 + f13;
    g4 = (hot_regs.g5 | 52429u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g6);
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(400));
    ctx.fpr[26] = std::bit_cast<float>(g4);
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(384));
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(416));
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(368));
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(432));
    g18 = (g18 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
    hot_regs.f13 = f13;
    ctx.fpr[28] = f28;
    goto L_08B23EB8;
}
}
L_08B23EB8:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(668), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(648)));
    hot_regs.f13 = std::bit_cast<float>(ctx.gpr[18]);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.fpr[28] = ctx.fpr[28] + hot_regs.f12;
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x08B23EE8u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 943u, 0x0885FFE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23EE8u) goto L_08B23EE8;
    return;
L_08B23EE8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f24 = ctx.fpr[24];
{
    std::uint32_t g29 = hot_regs.g29;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(f13));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f14));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(f24));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(f24));
    hot_regs.g4 = (16256u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(f24));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g31 = (0x08B23F2Cu);
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08B20934;
}
}
L_08B23F2C:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g5 = (17152u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.f12 = hot_regs.f13 - hot_regs.f12;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x08B23F54u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 926u, 0x0885FD1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B23F54u) goto L_08B23F54;
    return;
L_08B23F54:
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08B23FBCu);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(208)));
    goto L_08B20934;
L_08B23FBC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    g4 = (g4 & 15u);
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    { const float fs = f12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = ctx.fpr[28] + f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g31 = (0x08B23FE0u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(212)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08B20934;
}
}
L_08B23FE0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    g4 = (g4 & 15u);
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    { const float fs = f12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = ctx.fpr[28] + f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(f13));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(208)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    ctx.pc = 0x08B24000u; return;}
}

}

void recomp_unit_0199(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0199_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_199(Runtime &runtime) {
    runtime.register_generated_unit(199u, 0x08B20000u, 16384u, &recomp_unit_0199, &recomp_unit_0199_entry);
    runtime.register_function(0x08B20000u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20004u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2002Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20034u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2003Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20048u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20050u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2005Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20084u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20098u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B200D0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B200E4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2010Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20120u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20128u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20130u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20138u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20140u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2014Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20168u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20178u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20184u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20194u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B201A0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B201A8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B201B8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B201C4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B201DCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B201E4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20200u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2020Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20218u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20224u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20234u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20244u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20248u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20274u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20280u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B202A8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B202B0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B202B8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B202D0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B202DCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B202E4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B202ECu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20304u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20310u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20328u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20334u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2034Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20354u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20368u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20398u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B203A0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B203C8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B203DCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B203E4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B203F0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20404u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20408u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20524u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20544u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2054Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2056Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20574u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20584u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20590u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2059Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B205A8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B205BCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B205D8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B205E0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B205F0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B205FCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20610u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20618u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20630u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2065Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20680u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20698u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2070Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20714u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20720u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20740u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20750u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20764u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20778u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B207B0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B207C0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B207D0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B207D4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B207DCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2080Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2082Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20834u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2083Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2084Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2085Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20864u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B208B8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B208C4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B208C8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B208D0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B208D4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B208DCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20900u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2090Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2091Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20924u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20934u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20980u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20990u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20998u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B209A8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B209B4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B209C0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B209D8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B209F8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20A24u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20A2Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20A60u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20A7Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20A84u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20ACCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20B14u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20B6Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20B88u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20BD8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20BECu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20C10u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20C24u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20C34u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20C3Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20C44u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20C50u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20C5Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20C68u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20C7Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20C84u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20C8Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20C90u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20C98u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20CBCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20CC4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20CD4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20CE8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20CFCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20D10u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20D20u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20D28u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20D30u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20D3Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20D48u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20D58u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20D60u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20D68u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20D74u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20DCCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20DD4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20DDCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20DE8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20DF0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20DF8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20E00u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20E08u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20E14u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20E28u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20E40u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20E5Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20E64u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20E88u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20E94u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20EA0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20EA8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20EB8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20F14u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20F24u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20F30u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20F3Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20F50u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B20F5Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21038u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21048u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21050u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21060u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21068u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21078u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21080u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B210C4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B210F4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B210FCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21104u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21120u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2112Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21144u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2114Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21150u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2116Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2117Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21194u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2119Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B211A0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B211A8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B211ACu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B211C8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B211D4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B211ECu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B211F4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B211F8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21200u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21214u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2121Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21228u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21244u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2124Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21264u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21270u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21284u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21298u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B212A0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B212A8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B212B4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B212C8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B212D4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B212DCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B212E4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B212ECu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21304u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21310u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2131Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21328u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21330u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21338u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21340u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21348u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21364u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21370u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21378u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21380u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21394u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21398u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B213A0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B213A8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B213ACu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B213BCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B213D8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B213E0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B213ECu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B213FCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21404u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21418u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21420u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21484u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21490u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B214B8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B214D8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B214E0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B214FCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21508u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21524u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21530u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2154Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21558u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21570u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21594u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B215A0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B215ACu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2162Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21648u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21658u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21668u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21678u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B216D8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B216FCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21714u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21720u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21748u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21754u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21784u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B217A4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B217A8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B217BCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B217D4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B217F4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B217FCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21804u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2180Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21818u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21824u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21838u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21840u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B218B0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B218BCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B218D8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21940u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21964u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21980u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21984u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2199Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B219ACu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B219C8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B219E4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B219F0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21A10u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21A18u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21A34u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21A3Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21A58u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21A64u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21A78u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21A94u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21AACu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21AB8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21AC0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21AD4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21AE4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21B38u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21B40u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21B44u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21B4Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21B60u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21B7Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21B8Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21B98u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21BBCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21BC4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21BCCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21BD4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21BDCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21BE4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21BECu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21C14u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21C1Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21C2Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21C38u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21C40u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21C48u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21C50u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21C58u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21C60u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21C68u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21C70u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21C78u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21C80u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21C88u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21C98u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21CA4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21CACu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21CB4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21CBCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21CC4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21CCCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21CDCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21CE4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21CECu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21CF4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21CFCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21D04u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21D0Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21D1Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21D40u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21D48u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21D50u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21D58u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21D60u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21D6Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21D80u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21D88u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21D98u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21DA0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21DA8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21DC0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21DC8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21DD4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21DDCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21DF8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21E00u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21E08u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21E18u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21E20u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21E28u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21E38u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21E44u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21E4Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21E54u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21E5Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21E68u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21E78u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21E88u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21EACu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21EB4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21ED0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21F08u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21F20u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21F2Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21F34u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21F44u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21F54u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21F60u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21F68u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21F78u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21F8Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21FA8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21FC4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21FE4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B21FE8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22000u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22008u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2201Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22024u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2202Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22060u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2207Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22084u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2208Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2209Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B220ACu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B220B8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B220C0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B220D8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B220E0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B220F8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22100u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2210Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22114u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2211Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22124u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22144u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22154u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22160u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2216Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22188u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B221A0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22208u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22230u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2223Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22244u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2224Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2225Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2226Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2227Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2228Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22294u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B222A4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B222BCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B222CCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B222E0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B222E8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B222F8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22308u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22318u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22328u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22330u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22340u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22348u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22354u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22364u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22374u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2237Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2239Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B223A8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B223B4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B223C4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B223D0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B223DCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B223E8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B223F0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B223FCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22414u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2242Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22480u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B224B4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B224CCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B224E8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B224F8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22514u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2251Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22538u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22554u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22570u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2258Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2259Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B225A4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B225ACu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B225B8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B225D4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B225ECu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B225F8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22610u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2261Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22628u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22640u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2264Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22658u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22668u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22670u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22684u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2268Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B226B0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B226BCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B226D4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B226D8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B226F4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22700u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2271Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22728u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22740u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22758u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B227B8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B227C4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B227D8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B227E0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22800u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2281Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22828u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22840u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22848u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22854u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22870u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2287Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22894u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B228ACu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2290Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22918u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2292Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22934u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22948u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2295Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22968u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22974u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2298Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B229A8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B229B4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B229BCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B229ECu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22A0Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22A18u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22A38u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22A40u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22A94u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22A9Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22AA8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22AB0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22ABCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22AD8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22AE4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22AF4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22AFCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22B0Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22B14u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22B20u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22B28u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22B30u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22B38u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22B54u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22B60u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22B7Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22B88u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22B90u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22B98u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22BA0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22BACu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22BBCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22BCCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22BD8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22BE0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22C00u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22C24u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22C2Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22C34u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22C3Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22C5Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22C68u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22C74u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22C94u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22CA0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22CACu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22CB4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22CD4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22CE0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22CECu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22CF8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22D18u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22D24u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22D30u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22D38u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22D54u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22D5Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22D64u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22D6Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22D7Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22D84u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22DB0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22DB8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22DC0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22DCCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22DD4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22DE0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22DE8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22DF4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22E04u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22E14u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22E28u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22E30u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22E44u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22E6Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22EB0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22ED4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22EECu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22F04u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22F0Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22F1Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22F38u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22F4Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22F54u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22F60u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22FD4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B22FF8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23044u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23068u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23094u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23130u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2313Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23144u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2314Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23184u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2318Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23194u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23198u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B231A8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B231B8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B231E0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23230u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2326Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2328Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23290u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23294u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B232A0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B232ACu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B232B4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B232B8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B232C4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B232D0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B232D8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2331Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23328u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2333Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23344u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23414u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2341Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23424u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2342Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23454u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B234A8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B234D0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B234E8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B234F0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B234F8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23500u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2350Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23518u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23524u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23530u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23538u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23540u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23548u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23554u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23560u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2356Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23570u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2357Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23588u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23590u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2359Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B235A8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B235B4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B235B8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B235C8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B235CCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B235D8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23610u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23624u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23634u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23664u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23670u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23680u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23694u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B236A0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B236A8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B236C4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B236D0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B236DCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B236F8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23700u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23710u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23720u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2372Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23734u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23774u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B238B0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B238F4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23908u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23910u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23918u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23920u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23928u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23930u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23938u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23940u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23948u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23950u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23958u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23960u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23968u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2396Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23974u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B2397Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23984u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B239CCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23A2Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23A70u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23A98u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23AD8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23B0Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23B14u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23B24u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23B34u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23B3Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23BD0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23BDCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23BE4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23BF4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23C00u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23C0Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23C20u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23C28u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23C58u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23C70u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23C78u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23C90u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23CA0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23CF0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23CF8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23D00u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23D10u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23D1Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23D34u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23D40u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23D48u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23D60u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23D9Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23DA4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23DACu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23DBCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23DC4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23DE0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23DF4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23E34u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23E40u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23E48u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23E58u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23EB8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23EE8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23F2Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23F54u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23FBCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x08B23FE0u, &recomp_unit_0199, "recomp_unit_0199");
}
} // namespace psprecomp
