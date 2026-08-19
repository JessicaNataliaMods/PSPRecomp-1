#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0206[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 10, 0, 0, 11, 0,
    0, 0, 0, 12, 13, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    19, 0, 20, 21, 0, 22, 0, 0, 23, 0, 24, 25, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0,
    30, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 44, 45,
    0, 46, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0,
    0, 51, 0, 52, 0, 0, 53, 0, 54, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 0, 0,
    0, 65, 0, 66, 0, 67, 0, 0, 68, 0, 0, 69, 0, 70, 0, 71, 0, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 0, 75, 0, 0, 76,
    0, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 0, 0, 0, 84, 0, 0, 85, 0, 86, 0, 0, 0, 87, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0,
    0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0,
    0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 114, 0, 0, 115, 0,
    0, 116, 0, 117, 0, 118, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 124, 0, 0, 125,
    0, 0, 126, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 132, 0, 0, 133, 0, 0, 134, 0, 135, 0, 136, 137, 0,
    0, 0, 138, 0, 0, 0, 139, 0, 140, 0, 0, 141, 0, 0, 142, 0, 143, 0, 144, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 148, 0, 0,
    149, 0, 0, 150, 0, 151, 0, 152, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 156, 0, 0, 157, 0, 0, 158, 0, 159, 0, 160, 161, 0, 0,
    0, 162, 0, 0, 0, 163, 0, 164, 0, 0, 165, 0, 0, 166, 0, 167, 0, 168, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 172, 0, 0, 173,
    0, 0, 174, 0, 175, 0, 176, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 180, 0, 0, 181, 0, 0, 182, 0, 183, 0, 184, 0, 185, 0,
    186, 0, 0, 187, 0, 0, 0, 188, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 191, 192, 0, 193, 0, 0, 194, 0, 0, 0, 195, 0, 196, 0,
    197, 0, 198, 0, 0, 0, 199, 200, 0, 201, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 205, 0, 206, 0, 0, 0, 0, 207, 0, 0,
    0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 210, 0, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 216, 0, 0,
    0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 227, 228, 0, 229, 0, 0,
    230, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243,
    0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 250, 0, 0,
    0, 251, 0, 252, 0, 0, 0, 253, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 257, 0, 258, 0, 0, 259, 0, 0, 0, 260, 0, 261,
    0, 0, 262, 0, 0, 0, 263, 0, 264, 0, 0, 265, 0, 0, 0, 266, 0, 267, 0, 0, 268, 0, 0, 0, 269, 0, 270, 0, 0, 271, 0, 0,
    0, 272, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 278, 0, 279, 0, 0, 280, 0, 0, 0, 0, 281, 0, 282, 0, 283,
    0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 291, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 296, 0, 297, 0, 0, 298, 0,
    299, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309,
    0, 310, 0, 311, 0, 312, 313, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 316, 0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 320, 0,
    0, 0, 0, 321, 0, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 332,
    0, 0, 333, 0, 334, 335, 0, 336, 0, 0, 337, 0, 338, 339, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 343, 0, 344, 0,
    0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 349, 0, 0, 350,
    0, 0, 0, 351, 0, 352, 0, 353, 0, 0, 0, 354, 0, 355, 0, 356, 0, 0, 357, 0, 0, 358, 0, 359, 0, 360, 0, 0, 361, 0, 0, 362,
    0, 363, 0, 0, 364, 0, 0, 365, 0, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 373, 0, 0,
    374, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 381, 0, 0, 382, 0, 383, 0, 0,
    0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 386, 0, 0, 0, 0, 387, 388, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 391, 0, 392, 0, 393,
    394, 0, 395, 0, 396, 0, 397, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    400, 0, 0, 401, 0, 0, 0, 402, 0, 403, 0, 404, 0, 405, 0, 0, 0, 0, 406, 0, 407, 0, 408, 0, 409, 0, 410, 0, 411, 0, 412, 0,
    0, 413, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 417, 0, 0, 418, 0, 0, 0, 419, 0, 420, 0, 421, 0, 0, 0, 422, 0, 423,
    0, 424, 0, 0, 425, 0, 0, 426, 0, 427, 0, 428, 0, 429, 0, 430, 431, 0, 432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434,
    0, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 438, 0, 439, 440, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 448, 0, 0, 0, 0, 449, 0, 0, 450,
    0, 0, 0, 451, 0, 452, 0, 0, 453, 0, 0, 0, 454, 0, 455, 0, 456, 0, 0, 0, 457, 0, 458, 0, 459, 0, 0, 460, 0, 0, 461, 0,
    462, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 465, 0, 466, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0,
    0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473, 0,
    474, 0, 0, 475, 0, 476, 0, 477, 0, 478, 0, 0, 0, 479, 0, 0, 480, 0, 481, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 487,
    0, 0, 488, 0, 0, 489, 0, 490, 0, 0, 491, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 0, 494, 0, 495, 0, 0, 496, 0, 0, 497, 0,
    0, 498, 0, 499, 0, 0, 0, 500, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0, 0, 0, 0,
    0, 0, 0, 505, 0, 506, 507, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510,
    0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 515, 0, 516, 517, 0, 518, 0, 519, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 525, 0, 0, 0, 526,
    0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 530, 531, 0, 0,
    0, 532, 0, 533, 534, 0, 0, 0, 535, 0, 536, 0, 0, 0, 537, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 0,
    0, 0, 0, 541, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 546, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    548, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0,
    553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 559, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 562, 0, 563, 564, 0, 0, 0, 0, 0, 0,
    0, 565, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 569, 0, 570, 0, 0, 571, 0, 572, 573, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 579, 0, 580, 0, 0,
    0, 0, 581, 582, 0, 0, 0, 0, 583, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 587, 0, 0,
    588, 0, 0, 0, 589, 0, 590, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 595, 0, 596, 597, 0, 0, 0, 0, 0, 0,
    0, 598, 0, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0, 601, 0, 602, 0, 603, 0, 0, 604, 0, 605, 606, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 610, 0, 0, 611, 0, 612, 0, 0, 0, 0, 0, 613, 614, 0, 0, 0, 0, 615, 0,
    616, 0, 0, 0, 0, 617, 0, 0, 0, 618, 0, 619, 0, 0, 0, 0, 620, 0, 621, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 623, 0, 0, 624, 0, 0, 0, 625, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 627, 0, 628, 0, 629, 0, 630, 0,
    631, 0, 0, 0, 0, 632, 633, 634, 0, 635, 636, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 639,
    0, 0, 0, 640, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 646,
    0, 647, 0, 0, 648, 0, 0, 0, 0, 649, 0, 650, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 653, 654, 0, 0, 0, 655, 0, 0, 0, 0,
    0, 656, 657, 0, 0, 658, 659, 0, 0, 0, 660, 0, 661, 0, 662, 0, 663, 0, 664, 0, 665, 666, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 671,
    0, 0, 0, 0, 0, 0, 672, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 675, 676, 0, 0, 677, 0,
    678, 679, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 683, 684, 0, 0, 685, 686, 0, 687, 0, 688, 0, 0, 0, 0, 689, 690, 0, 691, 0, 692, 0, 693, 0, 694, 0, 695,
    696, 0, 697, 0, 698, 0, 699, 0, 700, 0, 701, 0, 702, 0, 0, 0, 703, 0, 704, 0, 705, 0, 706, 0, 707, 0, 708, 709, 0, 710, 0, 711,
    0, 0, 712, 0, 713, 0, 714, 0, 715, 0, 716, 0, 717, 0, 718, 0, 719, 0, 720, 0, 721, 0, 722, 723, 0, 0, 724, 0, 0, 725, 0, 726,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 730, 0,
    0, 0, 731, 0, 732, 0, 733, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 0, 736, 0, 0, 0, 737, 0, 738, 0, 0, 739, 0, 0, 0, 0,
    0, 0, 0, 740, 0, 0, 0, 741, 0, 742, 0, 743, 0, 744, 0, 745, 0, 746, 0, 747, 0, 748, 0, 749, 750, 0, 751, 0, 752, 0, 753, 754,
    0, 755, 0, 756, 0, 757, 758, 0, 759, 0, 760, 0, 761, 762, 0, 763, 0, 0, 764, 0, 765, 766, 0, 767, 0, 768, 0, 769, 770, 0, 771, 0,
    0, 772, 0, 773, 774, 0, 775, 0, 776, 0, 777, 778, 0, 0, 0, 0, 0, 779, 0, 780, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782,
    0, 783, 0, 784, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 786, 787, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 789, 0, 0, 790, 0, 791, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 793, 0, 0, 794, 0, 0, 795, 0, 796, 0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 799, 0, 0, 0,
    800, 0, 0, 0, 801, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 0, 804,
    0, 805, 0, 0, 0, 806, 0, 0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 808, 0, 809, 0, 0, 810, 0,
    811, 812, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 815, 0,
    816, 817, 0, 818, 0, 0, 0, 819, 0, 0, 820, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 821, 0, 822, 0, 0,
    823, 824, 0, 0, 0, 825, 0, 826, 0, 827, 0, 828, 0, 829, 0, 830, 831, 0, 832, 833, 0, 834, 0, 835, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 837, 0, 0, 838, 0, 0, 839,
    0, 840, 0, 0, 0, 0, 0, 0, 0, 841, 0, 0, 0, 0, 0, 842, 0, 0, 0, 0, 843, 0, 0, 0, 844, 0, 0, 0, 845, 0, 846, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 847, 0, 848, 0, 0, 0, 849, 0, 850, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 851,
    0, 0, 852, 0, 853, 0, 854, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 855, 0, 856, 857, 0, 858, 0, 0, 0, 859, 0, 860, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 861, 0, 862, 863, 0, 0, 0, 864, 865, 0, 866, 0, 867, 0, 868, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 869, 0, 0, 0, 0, 870, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 871, 0, 0, 0, 872, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 873, 0, 0, 0, 0, 0, 874, 0, 0, 875,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 876, 0, 0, 0, 877, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 878, 0, 0, 0, 0, 0, 879, 0, 0, 880, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 881, 0, 0, 0, 882, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 883, 0, 0, 0, 0, 0, 884, 0, 0, 885, 0, 0, 0, 0, 0, 0, 0, 0, 886, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 887, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 888, 0, 0, 0, 889, 0, 0, 890, 0, 0, 891,
};
void recomp_unit_0206_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,29,6,31,7 fprs=12,13,14,15 gpr_occ=4565 fpr_occ=206 gpr_total=6703 fpr_total=280
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_7 = ctx.gpr[7];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_15 = ctx.fpr[15];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[6] = aot_gpr_6; ctx.gpr[31] = aot_gpr_31; ctx.gpr[7] = aot_gpr_7; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[15] = aot_fpr_15; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_7 = ctx.gpr[7]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_15 = ctx.fpr[15]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B3C000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0206[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B3C000;
    case 2u: goto L_08B3C010;
    case 3u: goto L_08B3C030;
    case 4u: goto L_08B3C06C;
    case 5u: goto L_08B3C07C;
    case 6u: goto L_08B3C0A8;
    case 7u: goto L_08B3C0B8;
    case 8u: goto L_08B3C0D0;
    case 9u: goto L_08B3C0E4;
    case 10u: goto L_08B3C0EC;
    case 11u: goto L_08B3C0F8;
    case 12u: goto L_08B3C10C;
    case 13u: goto L_08B3C110;
    case 14u: goto L_08B3C118;
    case 15u: goto L_08B3C128;
    case 16u: goto L_08B3C13C;
    case 17u: goto L_08B3C150;
    case 18u: goto L_08B3C170;
    case 19u: goto L_08B3C180;
    case 20u: goto L_08B3C188;
    case 21u: goto L_08B3C18C;
    case 22u: goto L_08B3C194;
    case 23u: goto L_08B3C1A0;
    case 24u: goto L_08B3C1A8;
    case 25u: goto L_08B3C1AC;
    case 26u: goto L_08B3C1BC;
    case 27u: goto L_08B3C1D0;
    case 28u: goto L_08B3C1DC;
    case 29u: goto L_08B3C1F8;
    case 30u: goto L_08B3C200;
    case 31u: goto L_08B3C204;
    case 32u: goto L_08B3C218;
    case 33u: goto L_08B3C224;
    case 34u: goto L_08B3C238;
    case 35u: goto L_08B3C24C;
    case 36u: goto L_08B3C254;
    case 37u: goto L_08B3C26C;
    case 38u: goto L_08B3C280;
    case 39u: goto L_08B3C294;
    case 40u: goto L_08B3C2A8;
    case 41u: goto L_08B3C2C8;
    case 42u: goto L_08B3C2DC;
    case 43u: goto L_08B3C2F0;
    case 44u: goto L_08B3C2F8;
    case 45u: goto L_08B3C2FC;
    case 46u: goto L_08B3C304;
    case 47u: goto L_08B3C314;
    case 48u: goto L_08B3C31C;
    case 49u: goto L_08B3C350;
    case 50u: goto L_08B3C36C;
    case 51u: goto L_08B3C384;
    case 52u: goto L_08B3C38C;
    case 53u: goto L_08B3C398;
    case 54u: goto L_08B3C3A0;
    case 55u: goto L_08B3C3A8;
    case 56u: goto L_08B3C3BC;
    case 57u: goto L_08B3C410;
    case 58u: goto L_08B3C41C;
    case 59u: goto L_08B3C43C;
    case 60u: goto L_08B3C444;
    case 61u: goto L_08B3C44C;
    case 62u: goto L_08B3C460;
    case 63u: goto L_08B3C468;
    case 64u: goto L_08B3C470;
    case 65u: goto L_08B3C484;
    case 66u: goto L_08B3C48C;
    case 67u: goto L_08B3C494;
    case 68u: goto L_08B3C4A0;
    case 69u: goto L_08B3C4AC;
    case 70u: goto L_08B3C4B4;
    case 71u: goto L_08B3C4BC;
    case 72u: goto L_08B3C4CC;
    case 73u: goto L_08B3C4D4;
    case 74u: goto L_08B3C4E4;
    case 75u: goto L_08B3C4F0;
    case 76u: goto L_08B3C4FC;
    case 77u: goto L_08B3C50C;
    case 78u: goto L_08B3C518;
    case 79u: goto L_08B3C524;
    case 80u: goto L_08B3C52C;
    case 81u: goto L_08B3C534;
    case 82u: goto L_08B3C53C;
    case 83u: goto L_08B3C544;
    case 84u: goto L_08B3C554;
    case 85u: goto L_08B3C560;
    case 86u: goto L_08B3C568;
    case 87u: goto L_08B3C578;
    case 88u: goto L_08B3C5E8;
    case 89u: goto L_08B3C604;
    case 90u: goto L_08B3C60C;
    case 91u: goto L_08B3C628;
    case 92u: goto L_08B3C630;
    case 93u: goto L_08B3C638;
    case 94u: goto L_08B3C668;
    case 95u: goto L_08B3C68C;
    case 96u: goto L_08B3C6A4;
    case 97u: goto L_08B3C6B4;
    case 98u: goto L_08B3C6C8;
    case 99u: goto L_08B3C6D0;
    case 100u: goto L_08B3C6D8;
    case 101u: goto L_08B3C6E0;
    case 102u: goto L_08B3C700;
    case 103u: goto L_08B3C720;
    case 104u: goto L_08B3C730;
    case 105u: goto L_08B3C740;
    case 106u: goto L_08B3C750;
    case 107u: goto L_08B3C770;
    case 108u: goto L_08B3C784;
    case 109u: goto L_08B3C830;
    case 110u: goto L_08B3C83C;
    case 111u: goto L_08B3C844;
    case 112u: goto L_08B3C854;
    case 113u: goto L_08B3C864;
    case 114u: goto L_08B3C86C;
    case 115u: goto L_08B3C878;
    case 116u: goto L_08B3C884;
    case 117u: goto L_08B3C88C;
    case 118u: goto L_08B3C894;
    case 119u: goto L_08B3C8A0;
    case 120u: goto L_08B3C8B0;
    case 121u: goto L_08B3C8C8;
    case 122u: goto L_08B3C8D8;
    case 123u: goto L_08B3C8E8;
    case 124u: goto L_08B3C8F0;
    case 125u: goto L_08B3C8FC;
    case 126u: goto L_08B3C908;
    case 127u: goto L_08B3C910;
    case 128u: goto L_08B3C918;
    case 129u: goto L_08B3C920;
    case 130u: goto L_08B3C934;
    case 131u: goto L_08B3C944;
    case 132u: goto L_08B3C94C;
    case 133u: goto L_08B3C958;
    case 134u: goto L_08B3C964;
    case 135u: goto L_08B3C96C;
    case 136u: goto L_08B3C974;
    case 137u: goto L_08B3C978;
    case 138u: goto L_08B3C988;
    case 139u: goto L_08B3C998;
    case 140u: goto L_08B3C9A0;
    case 141u: goto L_08B3C9AC;
    case 142u: goto L_08B3C9B8;
    case 143u: goto L_08B3C9C0;
    case 144u: goto L_08B3C9C8;
    case 145u: goto L_08B3C9CC;
    case 146u: goto L_08B3C9DC;
    case 147u: goto L_08B3C9EC;
    case 148u: goto L_08B3C9F4;
    case 149u: goto L_08B3CA00;
    case 150u: goto L_08B3CA0C;
    case 151u: goto L_08B3CA14;
    case 152u: goto L_08B3CA1C;
    case 153u: goto L_08B3CA20;
    case 154u: goto L_08B3CA30;
    case 155u: goto L_08B3CA40;
    case 156u: goto L_08B3CA48;
    case 157u: goto L_08B3CA54;
    case 158u: goto L_08B3CA60;
    case 159u: goto L_08B3CA68;
    case 160u: goto L_08B3CA70;
    case 161u: goto L_08B3CA74;
    case 162u: goto L_08B3CA84;
    case 163u: goto L_08B3CA94;
    case 164u: goto L_08B3CA9C;
    case 165u: goto L_08B3CAA8;
    case 166u: goto L_08B3CAB4;
    case 167u: goto L_08B3CABC;
    case 168u: goto L_08B3CAC4;
    case 169u: goto L_08B3CAC8;
    case 170u: goto L_08B3CAD8;
    case 171u: goto L_08B3CAE8;
    case 172u: goto L_08B3CAF0;
    case 173u: goto L_08B3CAFC;
    case 174u: goto L_08B3CB08;
    case 175u: goto L_08B3CB10;
    case 176u: goto L_08B3CB18;
    case 177u: goto L_08B3CB20;
    case 178u: goto L_08B3CB30;
    case 179u: goto L_08B3CB40;
    case 180u: goto L_08B3CB48;
    case 181u: goto L_08B3CB54;
    case 182u: goto L_08B3CB60;
    case 183u: goto L_08B3CB68;
    case 184u: goto L_08B3CB70;
    case 185u: goto L_08B3CB78;
    case 186u: goto L_08B3CB80;
    case 187u: goto L_08B3CB8C;
    case 188u: goto L_08B3CB9C;
    case 189u: goto L_08B3CBA8;
    case 190u: goto L_08B3CBB0;
    case 191u: goto L_08B3CBC8;
    case 192u: goto L_08B3CBCC;
    case 193u: goto L_08B3CBD4;
    case 194u: goto L_08B3CBE0;
    case 195u: goto L_08B3CBF0;
    case 196u: goto L_08B3CBF8;
    case 197u: goto L_08B3CC00;
    case 198u: goto L_08B3CC08;
    case 199u: goto L_08B3CC18;
    case 200u: goto L_08B3CC1C;
    case 201u: goto L_08B3CC24;
    case 202u: goto L_08B3CC3C;
    case 203u: goto L_08B3CC44;
    case 204u: goto L_08B3CC4C;
    case 205u: goto L_08B3CC58;
    case 206u: goto L_08B3CC60;
    case 207u: goto L_08B3CC74;
    case 208u: goto L_08B3CC98;
    case 209u: goto L_08B3CCA0;
    case 210u: goto L_08B3CCAC;
    case 211u: goto L_08B3CCBC;
    case 212u: goto L_08B3CCC8;
    case 213u: goto L_08B3CCD4;
    case 214u: goto L_08B3CCE0;
    case 215u: goto L_08B3CCEC;
    case 216u: goto L_08B3CCF4;
    case 217u: goto L_08B3CD04;
    case 218u: goto L_08B3CD0C;
    case 219u: goto L_08B3CD28;
    case 220u: goto L_08B3CD44;
    case 221u: goto L_08B3CD4C;
    case 222u: goto L_08B3CD7C;
    case 223u: goto L_08B3CDA4;
    case 224u: goto L_08B3CDBC;
    case 225u: goto L_08B3CDC8;
    case 226u: goto L_08B3CDD0;
    case 227u: goto L_08B3CDE8;
    case 228u: goto L_08B3CDEC;
    case 229u: goto L_08B3CDF4;
    case 230u: goto L_08B3CE00;
    case 231u: goto L_08B3CE14;
    case 232u: goto L_08B3CE24;
    case 233u: goto L_08B3CE30;
    case 234u: goto L_08B3CE3C;
    case 235u: goto L_08B3CE58;
    case 236u: goto L_08B3CE9C;
    case 237u: goto L_08B3CEA8;
    case 238u: goto L_08B3CEB4;
    case 239u: goto L_08B3CEBC;
    case 240u: goto L_08B3CED4;
    case 241u: goto L_08B3CF44;
    case 242u: goto L_08B3CF64;
    case 243u: goto L_08B3CFFC;
    case 244u: goto L_08B3D00C;
    case 245u: goto L_08B3D02C;
    case 246u: goto L_08B3D040;
    case 247u: goto L_08B3D050;
    case 248u: goto L_08B3D060;
    case 249u: goto L_08B3D06C;
    case 250u: goto L_08B3D074;
    case 251u: goto L_08B3D084;
    case 252u: goto L_08B3D08C;
    case 253u: goto L_08B3D09C;
    case 254u: goto L_08B3D0A4;
    case 255u: goto L_08B3D0B4;
    case 256u: goto L_08B3D0C4;
    case 257u: goto L_08B3D0D0;
    case 258u: goto L_08B3D0D8;
    case 259u: goto L_08B3D0E4;
    case 260u: goto L_08B3D0F4;
    case 261u: goto L_08B3D0FC;
    case 262u: goto L_08B3D108;
    case 263u: goto L_08B3D118;
    case 264u: goto L_08B3D120;
    case 265u: goto L_08B3D12C;
    case 266u: goto L_08B3D13C;
    case 267u: goto L_08B3D144;
    case 268u: goto L_08B3D150;
    case 269u: goto L_08B3D160;
    case 270u: goto L_08B3D168;
    case 271u: goto L_08B3D174;
    case 272u: goto L_08B3D184;
    case 273u: goto L_08B3D18C;
    case 274u: goto L_08B3D198;
    case 275u: goto L_08B3D258;
    case 276u: goto L_08B3D3A4;
    case 277u: goto L_08B3D3BC;
    case 278u: goto L_08B3D3C4;
    case 279u: goto L_08B3D3CC;
    case 280u: goto L_08B3D3D8;
    case 281u: goto L_08B3D3EC;
    case 282u: goto L_08B3D3F4;
    case 283u: goto L_08B3D3FC;
    case 284u: goto L_08B3D404;
    case 285u: goto L_08B3D414;
    case 286u: goto L_08B3D428;
    case 287u: goto L_08B3D430;
    case 288u: goto L_08B3D444;
    case 289u: goto L_08B3D45C;
    case 290u: goto L_08B3D470;
    case 291u: goto L_08B3D478;
    case 292u: goto L_08B3D4A0;
    case 293u: goto L_08B3D4A8;
    case 294u: goto L_08B3D4D4;
    case 295u: goto L_08B3D4DC;
    case 296u: goto L_08B3D4E4;
    case 297u: goto L_08B3D4EC;
    case 298u: goto L_08B3D4F8;
    case 299u: goto L_08B3D500;
    case 300u: goto L_08B3D514;
    case 301u: goto L_08B3D524;
    case 302u: goto L_08B3D53C;
    case 303u: goto L_08B3D544;
    case 304u: goto L_08B3D54C;
    case 305u: goto L_08B3D594;
    case 306u: goto L_08B3D5C4;
    case 307u: goto L_08B3D5CC;
    case 308u: goto L_08B3D5F0;
    case 309u: goto L_08B3D5FC;
    case 310u: goto L_08B3D604;
    case 311u: goto L_08B3D60C;
    case 312u: goto L_08B3D614;
    case 313u: goto L_08B3D618;
    case 314u: goto L_08B3D628;
    case 315u: goto L_08B3D630;
    case 316u: goto L_08B3D644;
    case 317u: goto L_08B3D64C;
    case 318u: goto L_08B3D658;
    case 319u: goto L_08B3D664;
    case 320u: goto L_08B3D678;
    case 321u: goto L_08B3D68C;
    case 322u: goto L_08B3D698;
    case 323u: goto L_08B3D6A0;
    case 324u: goto L_08B3D6BC;
    case 325u: goto L_08B3D6D8;
    case 326u: goto L_08B3D704;
    case 327u: goto L_08B3D720;
    case 328u: goto L_08B3D740;
    case 329u: goto L_08B3D750;
    case 330u: goto L_08B3D764;
    case 331u: goto L_08B3D770;
    case 332u: goto L_08B3D77C;
    case 333u: goto L_08B3D788;
    case 334u: goto L_08B3D790;
    case 335u: goto L_08B3D794;
    case 336u: goto L_08B3D79C;
    case 337u: goto L_08B3D7A8;
    case 338u: goto L_08B3D7B0;
    case 339u: goto L_08B3D7B4;
    case 340u: goto L_08B3D7BC;
    case 341u: goto L_08B3D7D8;
    case 342u: goto L_08B3D7E8;
    case 343u: goto L_08B3D7F0;
    case 344u: goto L_08B3D7F8;
    case 345u: goto L_08B3D804;
    case 346u: goto L_08B3D840;
    case 347u: goto L_08B3D85C;
    case 348u: goto L_08B3D868;
    case 349u: goto L_08B3D870;
    case 350u: goto L_08B3D87C;
    case 351u: goto L_08B3D88C;
    case 352u: goto L_08B3D894;
    case 353u: goto L_08B3D89C;
    case 354u: goto L_08B3D8AC;
    case 355u: goto L_08B3D8B4;
    case 356u: goto L_08B3D8BC;
    case 357u: goto L_08B3D8C8;
    case 358u: goto L_08B3D8D4;
    case 359u: goto L_08B3D8DC;
    case 360u: goto L_08B3D8E4;
    case 361u: goto L_08B3D8F0;
    case 362u: goto L_08B3D8FC;
    case 363u: goto L_08B3D904;
    case 364u: goto L_08B3D910;
    case 365u: goto L_08B3D91C;
    case 366u: goto L_08B3D928;
    case 367u: goto L_08B3D930;
    case 368u: goto L_08B3D938;
    case 369u: goto L_08B3D940;
    case 370u: goto L_08B3D948;
    case 371u: goto L_08B3D95C;
    case 372u: goto L_08B3D964;
    case 373u: goto L_08B3D974;
    case 374u: goto L_08B3D980;
    case 375u: goto L_08B3D994;
    case 376u: goto L_08B3D99C;
    case 377u: goto L_08B3D9AC;
    case 378u: goto L_08B3D9B8;
    case 379u: goto L_08B3D9C8;
    case 380u: goto L_08B3D9D8;
    case 381u: goto L_08B3D9E0;
    case 382u: goto L_08B3D9EC;
    case 383u: goto L_08B3D9F4;
    case 384u: goto L_08B3DA10;
    case 385u: goto L_08B3DA24;
    case 386u: goto L_08B3DA28;
    case 387u: goto L_08B3DA3C;
    case 388u: goto L_08B3DA40;
    case 389u: goto L_08B3DA4C;
    case 390u: goto L_08B3DA64;
    case 391u: goto L_08B3DA6C;
    case 392u: goto L_08B3DA74;
    case 393u: goto L_08B3DA7C;
    case 394u: goto L_08B3DA80;
    case 395u: goto L_08B3DA88;
    case 396u: goto L_08B3DA90;
    case 397u: goto L_08B3DA98;
    case 398u: goto L_08B3DAA0;
    case 399u: goto L_08B3DAC8;
    case 400u: goto L_08B3DB00;
    case 401u: goto L_08B3DB0C;
    case 402u: goto L_08B3DB1C;
    case 403u: goto L_08B3DB24;
    case 404u: goto L_08B3DB2C;
    case 405u: goto L_08B3DB34;
    case 406u: goto L_08B3DB48;
    case 407u: goto L_08B3DB50;
    case 408u: goto L_08B3DB58;
    case 409u: goto L_08B3DB60;
    case 410u: goto L_08B3DB68;
    case 411u: goto L_08B3DB70;
    case 412u: goto L_08B3DB78;
    case 413u: goto L_08B3DB84;
    case 414u: goto L_08B3DB8C;
    case 415u: goto L_08B3DB9C;
    case 416u: goto L_08B3DBB0;
    case 417u: goto L_08B3DBB8;
    case 418u: goto L_08B3DBC4;
    case 419u: goto L_08B3DBD4;
    case 420u: goto L_08B3DBDC;
    case 421u: goto L_08B3DBE4;
    case 422u: goto L_08B3DBF4;
    case 423u: goto L_08B3DBFC;
    case 424u: goto L_08B3DC04;
    case 425u: goto L_08B3DC10;
    case 426u: goto L_08B3DC1C;
    case 427u: goto L_08B3DC24;
    case 428u: goto L_08B3DC2C;
    case 429u: goto L_08B3DC34;
    case 430u: goto L_08B3DC3C;
    case 431u: goto L_08B3DC40;
    case 432u: goto L_08B3DC48;
    case 433u: goto L_08B3DC68;
    case 434u: goto L_08B3DC7C;
    case 435u: goto L_08B3DC98;
    case 436u: goto L_08B3DCA4;
    case 437u: goto L_08B3DCB0;
    case 438u: goto L_08B3DCBC;
    case 439u: goto L_08B3DCC4;
    case 440u: goto L_08B3DCC8;
    case 441u: goto L_08B3DCD8;
    case 442u: goto L_08B3DCE8;
    case 443u: goto L_08B3DD10;
    case 444u: goto L_08B3DD1C;
    case 445u: goto L_08B3DD30;
    case 446u: goto L_08B3DD4C;
    case 447u: goto L_08B3DD54;
    case 448u: goto L_08B3DD5C;
    case 449u: goto L_08B3DD70;
    case 450u: goto L_08B3DD7C;
    case 451u: goto L_08B3DD8C;
    case 452u: goto L_08B3DD94;
    case 453u: goto L_08B3DDA0;
    case 454u: goto L_08B3DDB0;
    case 455u: goto L_08B3DDB8;
    case 456u: goto L_08B3DDC0;
    case 457u: goto L_08B3DDD0;
    case 458u: goto L_08B3DDD8;
    case 459u: goto L_08B3DDE0;
    case 460u: goto L_08B3DDEC;
    case 461u: goto L_08B3DDF8;
    case 462u: goto L_08B3DE00;
    case 463u: goto L_08B3DE08;
    case 464u: goto L_08B3DE3C;
    case 465u: goto L_08B3DE48;
    case 466u: goto L_08B3DE50;
    case 467u: goto L_08B3DE60;
    case 468u: goto L_08B3DE6C;
    case 469u: goto L_08B3DE88;
    case 470u: goto L_08B3DE94;
    case 471u: goto L_08B3DEC0;
    case 472u: goto L_08B3DED8;
    case 473u: goto L_08B3DEF8;
    case 474u: goto L_08B3DF00;
    case 475u: goto L_08B3DF0C;
    case 476u: goto L_08B3DF14;
    case 477u: goto L_08B3DF1C;
    case 478u: goto L_08B3DF24;
    case 479u: goto L_08B3DF34;
    case 480u: goto L_08B3DF40;
    case 481u: goto L_08B3DF48;
    case 482u: goto L_08B3DF50;
    case 483u: goto L_08B3DF74;
    case 484u: goto L_08B3DF9C;
    case 485u: goto L_08B3DFAC;
    case 486u: goto L_08B3DFDC;
    case 487u: goto L_08B3DFFC;
    case 488u: goto L_08B3E008;
    case 489u: goto L_08B3E014;
    case 490u: goto L_08B3E01C;
    case 491u: goto L_08B3E028;
    case 492u: goto L_08B3E030;
    case 493u: goto L_08B3E044;
    case 494u: goto L_08B3E058;
    case 495u: goto L_08B3E060;
    case 496u: goto L_08B3E06C;
    case 497u: goto L_08B3E078;
    case 498u: goto L_08B3E084;
    case 499u: goto L_08B3E08C;
    case 500u: goto L_08B3E09C;
    case 501u: goto L_08B3E0A4;
    case 502u: goto L_08B3E0C8;
    case 503u: goto L_08B3E0DC;
    case 504u: goto L_08B3E0E8;
    case 505u: goto L_08B3E10C;
    case 506u: goto L_08B3E114;
    case 507u: goto L_08B3E118;
    case 508u: goto L_08B3E13C;
    case 509u: goto L_08B3E150;
    case 510u: goto L_08B3E17C;
    case 511u: goto L_08B3E188;
    case 512u: goto L_08B3E1A0;
    case 513u: goto L_08B3E1A8;
    case 514u: goto L_08B3E1CC;
    case 515u: goto L_08B3E1D8;
    case 516u: goto L_08B3E1E0;
    case 517u: goto L_08B3E1E4;
    case 518u: goto L_08B3E1EC;
    case 519u: goto L_08B3E1F4;
    case 520u: goto L_08B3E224;
    case 521u: goto L_08B3E22C;
    case 522u: goto L_08B3E240;
    case 523u: goto L_08B3E254;
    case 524u: goto L_08B3E260;
    case 525u: goto L_08B3E26C;
    case 526u: goto L_08B3E27C;
    case 527u: goto L_08B3E288;
    case 528u: goto L_08B3E330;
    case 529u: goto L_08B3E368;
    case 530u: goto L_08B3E370;
    case 531u: goto L_08B3E374;
    case 532u: goto L_08B3E384;
    case 533u: goto L_08B3E38C;
    case 534u: goto L_08B3E390;
    case 535u: goto L_08B3E3A0;
    case 536u: goto L_08B3E3A8;
    case 537u: goto L_08B3E3B8;
    case 538u: goto L_08B3E3C0;
    case 539u: goto L_08B3E460;
    case 540u: goto L_08B3E468;
    case 541u: goto L_08B3E48C;
    case 542u: goto L_08B3E498;
    case 543u: goto L_08B3E4DC;
    case 544u: goto L_08B3E5C0;
    case 545u: goto L_08B3E6A4;
    case 546u: goto L_08B3E720;
    case 547u: goto L_08B3E724;
    case 548u: goto L_08B3E780;
    case 549u: goto L_08B3E7A4;
    case 550u: goto L_08B3E7B4;
    case 551u: goto L_08B3E7D4;
    case 552u: goto L_08B3E7F0;
    case 553u: goto L_08B3E800;
    case 554u: goto L_08B3E830;
    case 555u: goto L_08B3E874;
    case 556u: goto L_08B3E89C;
    case 557u: goto L_08B3E8BC;
    case 558u: goto L_08B3E8E0;
    case 559u: goto L_08B3E8E8;
    case 560u: goto L_08B3E920;
    case 561u: goto L_08B3E940;
    case 562u: goto L_08B3E958;
    case 563u: goto L_08B3E960;
    case 564u: goto L_08B3E964;
    case 565u: goto L_08B3E984;
    case 566u: goto L_08B3E990;
    case 567u: goto L_08B3E9A4;
    case 568u: goto L_08B3E9B4;
    case 569u: goto L_08B3E9BC;
    case 570u: goto L_08B3E9C4;
    case 571u: goto L_08B3E9D0;
    case 572u: goto L_08B3E9D8;
    case 573u: goto L_08B3E9DC;
    case 574u: goto L_08B3EA08;
    case 575u: goto L_08B3EA18;
    case 576u: goto L_08B3EA2C;
    case 577u: goto L_08B3EA34;
    case 578u: goto L_08B3EA5C;
    case 579u: goto L_08B3EA6C;
    case 580u: goto L_08B3EA74;
    case 581u: goto L_08B3EA88;
    case 582u: goto L_08B3EA8C;
    case 583u: goto L_08B3EAA0;
    case 584u: goto L_08B3EAA8;
    case 585u: goto L_08B3EABC;
    case 586u: goto L_08B3EAE4;
    case 587u: goto L_08B3EAF4;
    case 588u: goto L_08B3EB00;
    case 589u: goto L_08B3EB10;
    case 590u: goto L_08B3EB18;
    case 591u: goto L_08B3EB38;
    case 592u: goto L_08B3EB68;
    case 593u: goto L_08B3EBA0;
    case 594u: goto L_08B3EBC0;
    case 595u: goto L_08B3EBD8;
    case 596u: goto L_08B3EBE0;
    case 597u: goto L_08B3EBE4;
    case 598u: goto L_08B3EC04;
    case 599u: goto L_08B3EC10;
    case 600u: goto L_08B3EC24;
    case 601u: goto L_08B3EC34;
    case 602u: goto L_08B3EC3C;
    case 603u: goto L_08B3EC44;
    case 604u: goto L_08B3EC50;
    case 605u: goto L_08B3EC58;
    case 606u: goto L_08B3EC5C;
    case 607u: goto L_08B3EC88;
    case 608u: goto L_08B3EC98;
    case 609u: goto L_08B3ECAC;
    case 610u: goto L_08B3ECB4;
    case 611u: goto L_08B3ECC0;
    case 612u: goto L_08B3ECC8;
    case 613u: goto L_08B3ECE0;
    case 614u: goto L_08B3ECE4;
    case 615u: goto L_08B3ECF8;
    case 616u: goto L_08B3ED00;
    case 617u: goto L_08B3ED14;
    case 618u: goto L_08B3ED24;
    case 619u: goto L_08B3ED2C;
    case 620u: goto L_08B3ED40;
    case 621u: goto L_08B3ED48;
    case 622u: goto L_08B3ED68;
    case 623u: goto L_08B3ED98;
    case 624u: goto L_08B3EDA4;
    case 625u: goto L_08B3EDB4;
    case 626u: goto L_08B3EDC0;
    case 627u: goto L_08B3EDE0;
    case 628u: goto L_08B3EDE8;
    case 629u: goto L_08B3EDF0;
    case 630u: goto L_08B3EDF8;
    case 631u: goto L_08B3EE00;
    case 632u: goto L_08B3EE14;
    case 633u: goto L_08B3EE18;
    case 634u: goto L_08B3EE1C;
    case 635u: goto L_08B3EE24;
    case 636u: goto L_08B3EE28;
    case 637u: goto L_08B3EE44;
    case 638u: goto L_08B3EE5C;
    case 639u: goto L_08B3EE7C;
    case 640u: goto L_08B3EE8C;
    case 641u: goto L_08B3EEA4;
    case 642u: goto L_08B3EED4;
    case 643u: goto L_08B3EF2C;
    case 644u: goto L_08B3EF30;
    case 645u: goto L_08B3EF6C;
    case 646u: goto L_08B3EF7C;
    case 647u: goto L_08B3EF84;
    case 648u: goto L_08B3EF90;
    case 649u: goto L_08B3EFA4;
    case 650u: goto L_08B3EFAC;
    case 651u: goto L_08B3EFBC;
    case 652u: goto L_08B3EFCC;
    case 653u: goto L_08B3EFD8;
    case 654u: goto L_08B3EFDC;
    case 655u: goto L_08B3EFEC;
    case 656u: goto L_08B3F004;
    case 657u: goto L_08B3F008;
    case 658u: goto L_08B3F014;
    case 659u: goto L_08B3F018;
    case 660u: goto L_08B3F028;
    case 661u: goto L_08B3F030;
    case 662u: goto L_08B3F038;
    case 663u: goto L_08B3F040;
    case 664u: goto L_08B3F048;
    case 665u: goto L_08B3F050;
    case 666u: goto L_08B3F054;
    case 667u: goto L_08B3F05C;
    case 668u: goto L_08B3F090;
    case 669u: goto L_08B3F0C8;
    case 670u: goto L_08B3F0F8;
    case 671u: goto L_08B3F0FC;
    case 672u: goto L_08B3F118;
    case 673u: goto L_08B3F11C;
    case 674u: goto L_08B3F15C;
    case 675u: goto L_08B3F168;
    case 676u: goto L_08B3F16C;
    case 677u: goto L_08B3F178;
    case 678u: goto L_08B3F180;
    case 679u: goto L_08B3F184;
    case 680u: goto L_08B3F1A4;
    case 681u: goto L_08B3F1B0;
    case 682u: goto L_08B3F1D8;
    case 683u: goto L_08B3F218;
    case 684u: goto L_08B3F21C;
    case 685u: goto L_08B3F228;
    case 686u: goto L_08B3F22C;
    case 687u: goto L_08B3F234;
    case 688u: goto L_08B3F23C;
    case 689u: goto L_08B3F250;
    case 690u: goto L_08B3F254;
    case 691u: goto L_08B3F25C;
    case 692u: goto L_08B3F264;
    case 693u: goto L_08B3F26C;
    case 694u: goto L_08B3F274;
    case 695u: goto L_08B3F27C;
    case 696u: goto L_08B3F280;
    case 697u: goto L_08B3F288;
    case 698u: goto L_08B3F290;
    case 699u: goto L_08B3F298;
    case 700u: goto L_08B3F2A0;
    case 701u: goto L_08B3F2A8;
    case 702u: goto L_08B3F2B0;
    case 703u: goto L_08B3F2C0;
    case 704u: goto L_08B3F2C8;
    case 705u: goto L_08B3F2D0;
    case 706u: goto L_08B3F2D8;
    case 707u: goto L_08B3F2E0;
    case 708u: goto L_08B3F2E8;
    case 709u: goto L_08B3F2EC;
    case 710u: goto L_08B3F2F4;
    case 711u: goto L_08B3F2FC;
    case 712u: goto L_08B3F308;
    case 713u: goto L_08B3F310;
    case 714u: goto L_08B3F318;
    case 715u: goto L_08B3F320;
    case 716u: goto L_08B3F328;
    case 717u: goto L_08B3F330;
    case 718u: goto L_08B3F338;
    case 719u: goto L_08B3F340;
    case 720u: goto L_08B3F348;
    case 721u: goto L_08B3F350;
    case 722u: goto L_08B3F358;
    case 723u: goto L_08B3F35C;
    case 724u: goto L_08B3F368;
    case 725u: goto L_08B3F374;
    case 726u: goto L_08B3F37C;
    case 727u: goto L_08B3F3AC;
    case 728u: goto L_08B3F3CC;
    case 729u: goto L_08B3F3D8;
    case 730u: goto L_08B3F3F8;
    case 731u: goto L_08B3F408;
    case 732u: goto L_08B3F410;
    case 733u: goto L_08B3F418;
    case 734u: goto L_08B3F424;
    case 735u: goto L_08B3F438;
    case 736u: goto L_08B3F448;
    case 737u: goto L_08B3F458;
    case 738u: goto L_08B3F460;
    case 739u: goto L_08B3F46C;
    case 740u: goto L_08B3F48C;
    case 741u: goto L_08B3F49C;
    case 742u: goto L_08B3F4A4;
    case 743u: goto L_08B3F4AC;
    case 744u: goto L_08B3F4B4;
    case 745u: goto L_08B3F4BC;
    case 746u: goto L_08B3F4C4;
    case 747u: goto L_08B3F4CC;
    case 748u: goto L_08B3F4D4;
    case 749u: goto L_08B3F4DC;
    case 750u: goto L_08B3F4E0;
    case 751u: goto L_08B3F4E8;
    case 752u: goto L_08B3F4F0;
    case 753u: goto L_08B3F4F8;
    case 754u: goto L_08B3F4FC;
    case 755u: goto L_08B3F504;
    case 756u: goto L_08B3F50C;
    case 757u: goto L_08B3F514;
    case 758u: goto L_08B3F518;
    case 759u: goto L_08B3F520;
    case 760u: goto L_08B3F528;
    case 761u: goto L_08B3F530;
    case 762u: goto L_08B3F534;
    case 763u: goto L_08B3F53C;
    case 764u: goto L_08B3F548;
    case 765u: goto L_08B3F550;
    case 766u: goto L_08B3F554;
    case 767u: goto L_08B3F55C;
    case 768u: goto L_08B3F564;
    case 769u: goto L_08B3F56C;
    case 770u: goto L_08B3F570;
    case 771u: goto L_08B3F578;
    case 772u: goto L_08B3F584;
    case 773u: goto L_08B3F58C;
    case 774u: goto L_08B3F590;
    case 775u: goto L_08B3F598;
    case 776u: goto L_08B3F5A0;
    case 777u: goto L_08B3F5A8;
    case 778u: goto L_08B3F5AC;
    case 779u: goto L_08B3F5C4;
    case 780u: goto L_08B3F5CC;
    case 781u: goto L_08B3F5D4;
    case 782u: goto L_08B3F5FC;
    case 783u: goto L_08B3F604;
    case 784u: goto L_08B3F60C;
    case 785u: goto L_08B3F618;
    case 786u: goto L_08B3F63C;
    case 787u: goto L_08B3F640;
    case 788u: goto L_08B3F654;
    case 789u: goto L_08B3F684;
    case 790u: goto L_08B3F690;
    case 791u: goto L_08B3F698;
    case 792u: goto L_08B3F6B4;
    case 793u: goto L_08B3F704;
    case 794u: goto L_08B3F710;
    case 795u: goto L_08B3F71C;
    case 796u: goto L_08B3F724;
    case 797u: goto L_08B3F744;
    case 798u: goto L_08B3F75C;
    case 799u: goto L_08B3F770;
    case 800u: goto L_08B3F780;
    case 801u: goto L_08B3F790;
    case 802u: goto L_08B3F79C;
    case 803u: goto L_08B3F7E8;
    case 804u: goto L_08B3F7FC;
    case 805u: goto L_08B3F804;
    case 806u: goto L_08B3F814;
    case 807u: goto L_08B3F820;
    case 808u: goto L_08B3F864;
    case 809u: goto L_08B3F86C;
    case 810u: goto L_08B3F878;
    case 811u: goto L_08B3F880;
    case 812u: goto L_08B3F884;
    case 813u: goto L_08B3F890;
    case 814u: goto L_08B3F8E0;
    case 815u: goto L_08B3F8F8;
    case 816u: goto L_08B3F900;
    case 817u: goto L_08B3F904;
    case 818u: goto L_08B3F90C;
    case 819u: goto L_08B3F91C;
    case 820u: goto L_08B3F928;
    case 821u: goto L_08B3F96C;
    case 822u: goto L_08B3F974;
    case 823u: goto L_08B3F980;
    case 824u: goto L_08B3F984;
    case 825u: goto L_08B3F994;
    case 826u: goto L_08B3F99C;
    case 827u: goto L_08B3F9A4;
    case 828u: goto L_08B3F9AC;
    case 829u: goto L_08B3F9B4;
    case 830u: goto L_08B3F9BC;
    case 831u: goto L_08B3F9C0;
    case 832u: goto L_08B3F9C8;
    case 833u: goto L_08B3F9CC;
    case 834u: goto L_08B3F9D4;
    case 835u: goto L_08B3F9DC;
    case 836u: goto L_08B3FA1C;
    case 837u: goto L_08B3FA64;
    case 838u: goto L_08B3FA70;
    case 839u: goto L_08B3FA7C;
    case 840u: goto L_08B3FA84;
    case 841u: goto L_08B3FAA4;
    case 842u: goto L_08B3FABC;
    case 843u: goto L_08B3FAD0;
    case 844u: goto L_08B3FAE0;
    case 845u: goto L_08B3FAF0;
    case 846u: goto L_08B3FAF8;
    case 847u: goto L_08B3FB2C;
    case 848u: goto L_08B3FB34;
    case 849u: goto L_08B3FB44;
    case 850u: goto L_08B3FB4C;
    case 851u: goto L_08B3FB7C;
    case 852u: goto L_08B3FB88;
    case 853u: goto L_08B3FB90;
    case 854u: goto L_08B3FB98;
    case 855u: goto L_08B3FBCC;
    case 856u: goto L_08B3FBD4;
    case 857u: goto L_08B3FBD8;
    case 858u: goto L_08B3FBE0;
    case 859u: goto L_08B3FBF0;
    case 860u: goto L_08B3FBF8;
    case 861u: goto L_08B3FC2C;
    case 862u: goto L_08B3FC34;
    case 863u: goto L_08B3FC38;
    case 864u: goto L_08B3FC48;
    case 865u: goto L_08B3FC4C;
    case 866u: goto L_08B3FC54;
    case 867u: goto L_08B3FC5C;
    case 868u: goto L_08B3FC64;
    case 869u: goto L_08B3FC9C;
    case 870u: goto L_08B3FCB0;
    case 871u: goto L_08B3FD04;
    case 872u: goto L_08B3FD14;
    case 873u: goto L_08B3FD58;
    case 874u: goto L_08B3FD70;
    case 875u: goto L_08B3FD7C;
    case 876u: goto L_08B3FDD0;
    case 877u: goto L_08B3FDE0;
    case 878u: goto L_08B3FE40;
    case 879u: goto L_08B3FE58;
    case 880u: goto L_08B3FE64;
    case 881u: goto L_08B3FEA0;
    case 882u: goto L_08B3FEB0;
    case 883u: goto L_08B3FF14;
    case 884u: goto L_08B3FF2C;
    case 885u: goto L_08B3FF38;
    case 886u: goto L_08B3FF5C;
    case 887u: goto L_08B3FF90;
    case 888u: goto L_08B3FFD4;
    case 889u: goto L_08B3FFE4;
    case 890u: goto L_08B3FFF0;
    case 891u: goto L_08B3FFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08B3C000:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 1060u, 0x08B3BFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B3C010;
    }
L_08B3C010:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C030:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), ctx.gpr[16], ctx.gpr[17]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    { const std::uint32_t aot_run_words[7]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    aot_gpr_31 = (0x08B3C06Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 469u, 0x08ABAA04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C06Cu) goto L_08B3C06C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C06C:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-11836), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_31 = (0x08B3C07Cu);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5432), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 538u, 0x08AD31E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C07Cu) goto L_08B3C07C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C07C:
    aot_gpr_4 = (2233u << 16u);
    ctx.gpr[17] = (2238u << 16u);
    ctx.gpr[22] = (2235u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-30952));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(14304));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1289));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B3C0A8u);
    aot_gpr_7 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C0A8u) goto L_08B3C0A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C0A8:
    aot_gpr_4 = (0u | 2u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08B3C0B8u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 162u, 0x08A94DB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C0B8u) goto L_08B3C0B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C0B8:
    ctx.gpr[21] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5024));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B3C0D0u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C0D0u) goto L_08B3C0D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C0D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B3C0E4u);
    aot_gpr_7 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 484u, 0x0886A440u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C0E4u) goto L_08B3C0E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C0E4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B3C110;
      }
      goto L_08B3C0EC;
    }
L_08B3C0EC:
    aot_gpr_4 = (ctx.gpr[20] << 11u);
    aot_gpr_31 = (0x08B3C0F8u);
    aot_gpr_4 = (0u + aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 694u, 0x08AD3BD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C0F8u) goto L_08B3C0F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C0F8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (aot_gpr_5 << 11u);
    aot_gpr_31 = (0x08B3C10Cu);
    aot_gpr_5 = (0u + aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 190u, 0x08A94F30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C10Cu) goto L_08B3C10C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C10C:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    goto L_08B3C110;
L_08B3C110:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3C200;
      }
      goto L_08B3C118;
    }
L_08B3C118:
    aot_gpr_4 = (ctx.gpr[20] << 11u);
    ctx.gpr[19] = (0u + aot_gpr_4);
    aot_gpr_31 = (0x08B3C128u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 694u, 0x08AD3BD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C128u) goto L_08B3C128;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C128:
    ctx.gpr[20] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(31984));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B3C13Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C13Cu) goto L_08B3C13C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C13C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B3C150u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 199u, 0x08A94FC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C150u) goto L_08B3C150;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C150:
    aot_gpr_4 = (24942u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(26989));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_6 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_gpr_31 = (0x08B3C170u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 285u, 0x08A3137Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C170u) goto L_08B3C170;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C170:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B3C18C;
      }
      goto L_08B3C180;
    }
L_08B3C180:
    aot_gpr_31 = (0x08B3C188u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C188u) goto L_08B3C188;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C188:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B3C18C;
L_08B3C18C:
    aot_gpr_31 = (0x08B3C194u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 690u, 0x0893ED4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C194u) goto L_08B3C194;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C194:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B3C1AC;
      }
      goto L_08B3C1A0;
    }
L_08B3C1A0:
    aot_gpr_31 = (0x08B3C1A8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C1A8u) goto L_08B3C1A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C1A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B3C1AC;
L_08B3C1AC:
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x08B3C1BCu);
    aot_gpr_7 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 549u, 0x0893E214u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C1BCu) goto L_08B3C1BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C1BC:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B3C1D0u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 563u, 0x08ABE988u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C1D0u) goto L_08B3C1D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C1D0:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08B3C1DCu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 179u, 0x08A94EB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C1DCu) goto L_08B3C1DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C1DC:
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(1650));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(50));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08B3C1F8u);
    ctx.gpr[8] = (0u | 32u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 128u, 0x088E2118u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C1F8u) goto L_08B3C1F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C1F8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08B3C204;
      }
      goto L_08B3C200;
    }
L_08B3C200:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    goto L_08B3C204;
L_08B3C204:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B3C218u);
    aot_gpr_7 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C218u) goto L_08B3C218;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C218:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5032));
    aot_gpr_31 = (0x08B3C224u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 359u, 0x088713B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C224u) goto L_08B3C224;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C224:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5036));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B3C238u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C238u) goto L_08B3C238;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C238:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B3C24Cu);
    aot_gpr_7 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 484u, 0x0886A440u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C24Cu) goto L_08B3C24C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C24C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B3C2F8;
      }
      goto L_08B3C254;
    }
L_08B3C254:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (aot_gpr_5 << 11u);
    aot_gpr_5 = (0u + aot_gpr_5);
    aot_gpr_31 = (0x08B3C26Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 363u, 0x088713F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C26Cu) goto L_08B3C26C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C26C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 11u);
    ctx.gpr[16] = (0u + aot_gpr_4);
    aot_gpr_31 = (0x08B3C280u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 694u, 0x08AD3BD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C280u) goto L_08B3C280;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C280:
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(31984));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B3C294u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C294u) goto L_08B3C294;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C294:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B3C2A8u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 361u, 0x088713D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C2A8u) goto L_08B3C2A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C2A8:
    aot_gpr_4 = (99u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24941));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_6 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_gpr_31 = (0x08B3C2C8u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 285u, 0x08A3137Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C2C8u) goto L_08B3C2C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C2C8:
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B3C2DCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 88u, 0x08A1C884u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C2DCu) goto L_08B3C2DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C2DC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B3C2F0u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 563u, 0x08ABE988u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C2F0u) goto L_08B3C2F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C2F0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(158), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08B3C2FC;
      }
      goto L_08B3C2F8;
    }
L_08B3C2F8:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(158), static_cast<std::uint8_t>(0u));
    goto L_08B3C2FC;
L_08B3C2FC:
    aot_gpr_31 = (0x08B3C304u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 365u, 0x08871414u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C304u) goto L_08B3C304;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C304:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), aot_gpr_4);
    aot_gpr_31 = (0x08B3C314u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C314u) goto L_08B3C314;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C314:
    aot_gpr_31 = (0x08B3C31Cu);
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(2288));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 27u, 0x08AB4198u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C31Cu) goto L_08B3C31C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C31C:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      ctx.gpr[22] = aot_run_words[7];
      ctx.gpr[23] = aot_run_words[8];
      ctx.gpr[30] = aot_run_words[9];
      aot_gpr_31 = aot_run_words[10];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C350:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08B3C36Cu);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 163u, 0x08A114E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C36Cu) goto L_08B3C36C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C36C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(157)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3C38C;
      }
      goto L_08B3C384;
    }
L_08B3C384:
    aot_gpr_31 = (0x08B3C38Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 604u, 0x08AD3670u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C38Cu) goto L_08B3C38C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C38C:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    aot_gpr_31 = (0x08B3C398u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C398u) goto L_08B3C398;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C398:
    aot_gpr_31 = (0x08B3C3A0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08B3C3BC;
L_08B3C3A0:
    aot_gpr_31 = (0x08B3C3A8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 165u, 0x08A11504u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C3A8u) goto L_08B3C3A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C3A8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C3BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1472));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1440), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1448), ctx.gpr[20]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (0u | 0u);
    { const std::uint32_t aot_run_words[8]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), ctx.gpr[16], ctx.gpr[17]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1408), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1444), ctx.gpr[19]);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1452), aot_run_words); }
    aot_gpr_31 = (0x08B3C410u);
    aot_gpr_4 = (0u | 8876u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C410u) goto L_08B3C410;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C410:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(160), ctx.gpr[2]);
    aot_gpr_31 = (0x08B3C41Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 104u, 0x0884C9C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C41Cu) goto L_08B3C41C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C41C:
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[21] = (2238u << 16u);
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(5060));
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(96));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(14304));
      if (branch_taken) {
          goto L_08B3C4A0;
      }
      goto L_08B3C43C;
    }
L_08B3C43C:
    aot_gpr_31 = (0x08B3C444u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 340u, 0x08B552D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C444u) goto L_08B3C444;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C444:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
        goto L_08B3C460;
    }
    goto L_08B3C44C;
L_08B3C44C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-32));
    ctx.gpr[22] = (aot_gpr_4 << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 24u));
      if (branch_taken) {
          goto L_08B3C460;
      }
      goto L_08B3C460;
    }
L_08B3C460:
    aot_gpr_31 = (0x08B3C468u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 340u, 0x08B552D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C468u) goto L_08B3C468;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C468:
    if (ctx.gpr[2] == 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
        goto L_08B3C484;
    }
    goto L_08B3C470;
L_08B3C470:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-32));
    aot_gpr_4 = (aot_gpr_4 << 24u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
      if (branch_taken) {
          goto L_08B3C484;
      }
      goto L_08B3C484;
    }
L_08B3C484:
    { const bool branch_taken = ctx.gpr[22] == aot_gpr_4;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3C494;
      }
      goto L_08B3C48C;
    }
L_08B3C48C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3C4B4;
      }
      goto L_08B3C494;
    }
L_08B3C494:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3C43C;
      }
      goto L_08B3C4A0;
    }
L_08B3C4A0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B3C4B4;
      }
      goto L_08B3C4AC;
    }
L_08B3C4AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3C4B4;
      }
      goto L_08B3C4B4;
    }
L_08B3C4B4:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3C4F0;
      }
      goto L_08B3C4BC;
    }
L_08B3C4BC:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B3C4CCu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 565u, 0x08A063CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C4CCu) goto L_08B3C4CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C4CC:
    aot_gpr_31 = (0x08B3C4D4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 910u, 0x08B3B344u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C4D4u) goto L_08B3C4D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C4D4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B3C4F0;
      }
      goto L_08B3C4E4;
    }
L_08B3C4E4:
    aot_gpr_5 = (aot_gpr_4 & 255u);
    aot_gpr_31 = (0x08B3C4F0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 567u, 0x08A063F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C4F0u) goto L_08B3C4F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C4F0:
    ctx.gpr[22] = (0u | 380u);
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(5068));
    ctx.gpr[19] = (0u | 1520u);
    goto L_08B3C4FC;
L_08B3C4FC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B3C518;
      }
      goto L_08B3C50C;
    }
L_08B3C50C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B3C518;
L_08B3C518:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B3C52C;
      }
      goto L_08B3C524;
    }
L_08B3C524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3C568;
      }
      goto L_08B3C52C;
    }
L_08B3C52C:
    aot_gpr_31 = (0x08B3C534u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C534u) goto L_08B3C534;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C534:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3C544;
      }
      goto L_08B3C53C;
    }
L_08B3C53C:
    aot_gpr_31 = (0x08B3C544u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 565u, 0x08AD340Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C544u) goto L_08B3C544;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C544:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B3C560;
      }
      goto L_08B3C554;
    }
L_08B3C554:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B3C560;
L_08B3C560:
    aot_gpr_31 = (0x08B3C568u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 456u, 0x088DF720u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C568u) goto L_08B3C568;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C568:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < 390 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B3C4FC;
      }
      goto L_08B3C578;
    }
L_08B3C578:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1332), ctx.gpr[23]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11232)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(120), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11236)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11836)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5432)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(112), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(159), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (0u | 0u);
    goto L_08B3C5E8;
L_08B3C5E8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(7940), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B3C5E8;
      }
      goto L_08B3C604;
    }
L_08B3C604:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (0u | 0u);
    goto L_08B3C60C;
L_08B3C60C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(3252), 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 50 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B3C60C;
      }
      goto L_08B3C628;
    }
L_08B3C628:
    aot_gpr_31 = (0x08B3C630u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 64u, 0x08A90840u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C630u) goto L_08B3C630;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C630:
    aot_gpr_31 = (0x08B3C638u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C638u) goto L_08B3C638;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C638:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    ctx.gpr[19] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_31 = (0x08B3C668u);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(2288));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 27u, 0x08AB4198u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C668u) goto L_08B3C668;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C668:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (65528u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3160)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3264), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B3C68Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C68Cu) goto L_08B3C68C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C68C:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (aot_gpr_5 | 128u);
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_31 = (0x08B3C6A4u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 8u, 0x08964108u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C6A4u) goto L_08B3C6A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C6A4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5072));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08B3C6B4u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C6B4u) goto L_08B3C6B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C6B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08B3C6C8u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 484u, 0x0886A440u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C6C8u) goto L_08B3C6C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C6C8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
        goto L_08B3C6E0;
    }
    goto L_08B3C6D0;
L_08B3C6D0:
    aot_gpr_31 = (0x08B3C6D8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08B3C030;
L_08B3C6D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3D54C;
      }
      goto L_08B3C6E0;
    }
L_08B3C6E0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_4 << 11u);
    aot_gpr_4 = (0u + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 << 11u);
    aot_gpr_4 = (0u + aot_gpr_4);
    aot_gpr_31 = (0x08B3C700u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C700u) goto L_08B3C700;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C700:
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1289));
    aot_gpr_5 = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_7 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08B3C720u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-30952));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C720u) goto L_08B3C720;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C720:
    aot_gpr_4 = (0u | 2u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08B3C730u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 162u, 0x08A94DB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C730u) goto L_08B3C730;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C730:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (0x08B3C740u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 190u, 0x08A94F30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C740u) goto L_08B3C740;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C740:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B3C750u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 199u, 0x08A94FC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C750u) goto L_08B3C750;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C750:
    aot_gpr_4 = (99u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(30068));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1048), aot_gpr_4);
    aot_gpr_6 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1052), 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1048));
    aot_gpr_31 = (0x08B3C770u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 285u, 0x08A3137Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C770u) goto L_08B3C770;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C770:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1056), ctx.gpr[2]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1324), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B3C784u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 179u, 0x08A94EB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C784u) goto L_08B3C784;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C784:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1320), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1316), aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5080));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5084));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1388), aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(5092));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1384), aot_gpr_5);
    aot_gpr_7 = (ctx.gpr[28] + static_cast<std::uint32_t>(5100));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1380), aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5108));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1376), aot_gpr_7);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5120));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1372), aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(5128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1368), aot_gpr_5);
    aot_gpr_7 = (ctx.gpr[28] + static_cast<std::uint32_t>(5136));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1364), aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5144));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1360), aot_gpr_7);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5156));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1356), aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(5160));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1328), aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5168));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1352), aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5184));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1348), aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(5196));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1344), aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5220));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1340), aot_gpr_6);
    aot_gpr_7 = (ctx.gpr[28] + static_cast<std::uint32_t>(5208));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1312), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1336), aot_gpr_7);
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(1180));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(1140));
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(1108));
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(5180));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1392), ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1324)));
    goto L_08B3C830;
L_08B3C830:
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08B3C83Cu);
    aot_gpr_6 = (0u | 1024u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 929u, 0x08B3B43Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3C83Cu) goto L_08B3C83C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C83C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1324), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B3D3C4;
      }
      goto L_08B3C844;
    }
L_08B3C844:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1388)));
      if (branch_taken) {
          goto L_08B3C878;
      }
      goto L_08B3C854;
    }
L_08B3C854:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3C86C;
      }
      goto L_08B3C864;
    }
L_08B3C864:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3C88C;
      }
      goto L_08B3C86C;
    }
L_08B3C86C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3C854;
      }
      goto L_08B3C878;
    }
L_08B3C878:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B3C88C;
      }
      goto L_08B3C884;
    }
L_08B3C884:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3C88C;
      }
      goto L_08B3C88C;
    }
L_08B3C88C:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3C8A0;
      }
      goto L_08B3C894;
    }
L_08B3C894:
    aot_gpr_4 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1316), aot_gpr_4);
      if (branch_taken) {
          goto L_08B3D3BC;
      }
      goto L_08B3C8A0;
    }
L_08B3C8A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1316)));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3D3BC;
      }
      goto L_08B3C8B0;
    }
L_08B3C8B0:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30928)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3C8C8:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1384)));
      if (branch_taken) {
          goto L_08B3C8FC;
      }
      goto L_08B3C8D8;
    }
L_08B3C8D8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3C8F0;
      }
      goto L_08B3C8E8;
    }
L_08B3C8E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3C910;
      }
      goto L_08B3C8F0;
    }
L_08B3C8F0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3C8D8;
      }
      goto L_08B3C8FC;
    }
L_08B3C8FC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B3C910;
      }
      goto L_08B3C908;
    }
L_08B3C908:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3C910;
      }
      goto L_08B3C910;
    }
L_08B3C910:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3C920;
      }
      goto L_08B3C918;
    }
L_08B3C918:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1316), aot_gpr_4);
    goto L_08B3C920;
L_08B3C920:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1380)));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1316)));
      if (branch_taken) {
          goto L_08B3C958;
      }
      goto L_08B3C934;
    }
L_08B3C934:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3C94C;
      }
      goto L_08B3C944;
    }
L_08B3C944:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3C96C;
      }
      goto L_08B3C94C;
    }
L_08B3C94C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3C934;
      }
      goto L_08B3C958;
    }
L_08B3C958:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B3C96C;
      }
      goto L_08B3C964;
    }
L_08B3C964:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3C96C;
      }
      goto L_08B3C96C;
    }
L_08B3C96C:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3C978;
      }
      goto L_08B3C974;
    }
L_08B3C974:
    ctx.gpr[8] = (0u | 2u);
    goto L_08B3C978;
L_08B3C978:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1376)));
      if (branch_taken) {
          goto L_08B3C9AC;
      }
      goto L_08B3C988;
    }
L_08B3C988:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3C9A0;
      }
      goto L_08B3C998;
    }
L_08B3C998:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3C9C0;
      }
      goto L_08B3C9A0;
    }
L_08B3C9A0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3C988;
      }
      goto L_08B3C9AC;
    }
L_08B3C9AC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B3C9C0;
      }
      goto L_08B3C9B8;
    }
L_08B3C9B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3C9C0;
      }
      goto L_08B3C9C0;
    }
L_08B3C9C0:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3C9CC;
      }
      goto L_08B3C9C8;
    }
L_08B3C9C8:
    ctx.gpr[8] = (0u | 3u);
    goto L_08B3C9CC;
L_08B3C9CC:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1372)));
      if (branch_taken) {
          goto L_08B3CA00;
      }
      goto L_08B3C9DC;
    }
L_08B3C9DC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3C9F4;
      }
      goto L_08B3C9EC;
    }
L_08B3C9EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3CA14;
      }
      goto L_08B3C9F4;
    }
L_08B3C9F4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3C9DC;
      }
      goto L_08B3CA00;
    }
L_08B3CA00:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B3CA14;
      }
      goto L_08B3CA0C;
    }
L_08B3CA0C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3CA14;
      }
      goto L_08B3CA14;
    }
L_08B3CA14:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3CA20;
      }
      goto L_08B3CA1C;
    }
L_08B3CA1C:
    ctx.gpr[8] = (0u | 4u);
    goto L_08B3CA20;
L_08B3CA20:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1368)));
      if (branch_taken) {
          goto L_08B3CA54;
      }
      goto L_08B3CA30;
    }
L_08B3CA30:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3CA48;
      }
      goto L_08B3CA40;
    }
L_08B3CA40:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3CA68;
      }
      goto L_08B3CA48;
    }
L_08B3CA48:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3CA30;
      }
      goto L_08B3CA54;
    }
L_08B3CA54:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B3CA68;
      }
      goto L_08B3CA60;
    }
L_08B3CA60:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3CA68;
      }
      goto L_08B3CA68;
    }
L_08B3CA68:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3CA74;
      }
      goto L_08B3CA70;
    }
L_08B3CA70:
    ctx.gpr[8] = (0u | 5u);
    goto L_08B3CA74;
L_08B3CA74:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1364)));
      if (branch_taken) {
          goto L_08B3CAA8;
      }
      goto L_08B3CA84;
    }
L_08B3CA84:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3CA9C;
      }
      goto L_08B3CA94;
    }
L_08B3CA94:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3CABC;
      }
      goto L_08B3CA9C;
    }
L_08B3CA9C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3CA84;
      }
      goto L_08B3CAA8;
    }
L_08B3CAA8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B3CABC;
      }
      goto L_08B3CAB4;
    }
L_08B3CAB4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3CABC;
      }
      goto L_08B3CABC;
    }
L_08B3CABC:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3CAC8;
      }
      goto L_08B3CAC4;
    }
L_08B3CAC4:
    ctx.gpr[8] = (0u | 6u);
    goto L_08B3CAC8;
L_08B3CAC8:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1360)));
      if (branch_taken) {
          goto L_08B3CAFC;
      }
      goto L_08B3CAD8;
    }
L_08B3CAD8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3CAF0;
      }
      goto L_08B3CAE8;
    }
L_08B3CAE8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3CB10;
      }
      goto L_08B3CAF0;
    }
L_08B3CAF0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3CAD8;
      }
      goto L_08B3CAFC;
    }
L_08B3CAFC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B3CB10;
      }
      goto L_08B3CB08;
    }
L_08B3CB08:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3CB10;
      }
      goto L_08B3CB10;
    }
L_08B3CB10:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1316), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08B3CB20;
      }
      goto L_08B3CB18;
    }
L_08B3CB18:
    aot_gpr_4 = (0u | 7u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1316), aot_gpr_4);
    goto L_08B3CB20;
L_08B3CB20:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1356)));
      if (branch_taken) {
          goto L_08B3CB54;
      }
      goto L_08B3CB30;
    }
L_08B3CB30:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3CB48;
      }
      goto L_08B3CB40;
    }
L_08B3CB40:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3CB68;
      }
      goto L_08B3CB48;
    }
L_08B3CB48:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3CB30;
      }
      goto L_08B3CB54;
    }
L_08B3CB54:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B3CB68;
      }
      goto L_08B3CB60;
    }
L_08B3CB60:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3CB68;
      }
      goto L_08B3CB68;
    }
L_08B3CB68:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3CB78;
      }
      goto L_08B3CB70;
    }
L_08B3CB70:
    aot_gpr_4 = (0u | 8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1316), aot_gpr_4);
    goto L_08B3CB78;
L_08B3CB78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3D3BC;
      }
      goto L_08B3CB80;
    }
L_08B3CB80:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(1320)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3CBCC;
      }
      goto L_08B3CB8C;
    }
L_08B3CB8C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1328)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(1060));
    aot_gpr_31 = (0x08B3CB9Cu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 579u, 0x08B56358u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3CB9Cu) goto L_08B3CB9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3CB9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1060)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3CBB0;
      }
      goto L_08B3CBA8;
    }
L_08B3CBA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B3CBCC;
      }
      goto L_08B3CBB0;
    }
L_08B3CBB0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1060)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1060), aot_gpr_5);
    aot_gpr_31 = (0x08B3CBC8u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 346u, 0x088DE1A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3CBC8u) goto L_08B3CBC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3CBC8:
    aot_gpr_4 = (0u | 1u);
    goto L_08B3CBCC;
L_08B3CBCC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1320), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B3D3BC;
      }
      goto L_08B3CBD4;
    }
L_08B3CBD4:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1352)));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_7 = (0u | 0u);
    goto L_08B3CBE0;
L_08B3CBE0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr_5 == aot_gpr_6) {
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
        goto L_08B3CBF8;
    }
    goto L_08B3CBF0;
L_08B3CBF0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3CC1C;
      }
      goto L_08B3CBF8;
    }
L_08B3CBF8:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3CC08;
      }
      goto L_08B3CC00;
    }
L_08B3CC00:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B3CC1C;
      }
      goto L_08B3CC08;
    }
L_08B3CC08:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_7 < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3CBE0;
      }
      goto L_08B3CC18;
    }
L_08B3CC18:
    aot_gpr_4 = (0u | 0u);
    goto L_08B3CC1C;
L_08B3CC1C:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_08B3CC98;
      }
      goto L_08B3CC24;
    }
L_08B3CC24:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1348)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(31));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(1064));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(1068));
    aot_gpr_31 = (0x08B3CC3Cu);
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(1072));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 579u, 0x08B56358u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3CC3Cu) goto L_08B3CC3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3CC3C:
    aot_gpr_31 = (0x08B3CC44u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3CC44u) goto L_08B3CC44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3CC44:
    aot_gpr_31 = (0x08B3CC4Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3CC4Cu) goto L_08B3CC4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3CC4C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3CC74;
      }
      goto L_08B3CC58;
    }
L_08B3CC58:
    aot_gpr_31 = (0x08B3CC60u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3CC60u) goto L_08B3CC60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3CC60:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3CC98;
      }
      goto L_08B3CC74;
    }
L_08B3CC74:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1064), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1088), aot_run_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1088));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08B3CC98;
L_08B3CC98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3D3BC;
      }
      goto L_08B3CCA0;
    }
L_08B3CCA0:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08B3CCACu);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 523u, 0x08B59E08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3CCACu) goto L_08B3CCAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3CCAC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1328)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(1104));
    aot_gpr_31 = (0x08B3CCBCu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 579u, 0x08B56358u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3CCBCu) goto L_08B3CCBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3CCBC:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08B3CCC8u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 523u, 0x08B59E08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3CCC8u) goto L_08B3CCC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3CCC8:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x08B3CCD4u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3CCD4u) goto L_08B3CCD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3CCD4:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08B3CCE0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 523u, 0x08B59E08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3CCE0u) goto L_08B3CCE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3CCE0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B3CCECu);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 154u, 0x08B58998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3CCECu) goto L_08B3CCEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3CCEC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08B3CDC8;
      }
      goto L_08B3CCF4;
    }
L_08B3CCF4:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1140), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B3CD04u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3CD04u) goto L_08B3CD04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3CD04:
    aot_gpr_31 = (0x08B3CD0Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 154u, 0x08B58998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3CD0Cu) goto L_08B3CD0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3CD0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(50));
    aot_gpr_31 = (0x08B3CD28u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3CD28u) goto L_08B3CD28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3CD28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1650));
    aot_gpr_31 = (0x08B3CD44u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3CD44u) goto L_08B3CD44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3CD44:
    if (ctx.gpr[17] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
        goto L_08B3CD7C;
    }
    goto L_08B3CD4C;
L_08B3CD4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (0u | 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(3252), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B3CDA4;
      }
      goto L_08B3CD7C;
    }
L_08B3CD7C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    aot_gpr_6 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(3252), aot_gpr_6);
    goto L_08B3CDA4;
L_08B3CDA4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), aot_gpr_5);
    aot_gpr_31 = (0x08B3CDBCu);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 523u, 0x08B59E08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3CDBCu) goto L_08B3CDBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3CDBC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3CCF4;
      }
      goto L_08B3CDC8;
    }
L_08B3CDC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3D3BC;
      }
      goto L_08B3CDD0;
    }
L_08B3CDD0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1344)));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(1172));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(1176));
    aot_gpr_31 = (0x08B3CDE8u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 579u, 0x08B56358u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3CDE8u) goto L_08B3CDE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3CDE8:
    ctx.gpr[16] = (0u | 0u);
    goto L_08B3CDEC;
L_08B3CDEC:
    aot_gpr_31 = (0x08B3CDF4u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3CDF4u) goto L_08B3CDF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3CDF4:
    aot_gpr_4 = (ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3CE3C;
      }
      goto L_08B3CE00;
    }
L_08B3CE00:
    aot_gpr_4 = (aot_gpr_29 + ctx.gpr[16]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1180))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 97 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3CE30;
      }
      goto L_08B3CE14;
    }
L_08B3CE14:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1180))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 123 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3CE30;
      }
      goto L_08B3CE24;
    }
L_08B3CE24:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1180))))));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1180), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08B3CE30;
L_08B3CE30:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_08B3CDEC;
      }
      goto L_08B3CE3C;
    }
L_08B3CE3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(3452));
    aot_gpr_31 = (0x08B3CE58u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3CE58u) goto L_08B3CE58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3CE58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1172)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(3964), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1176)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_7 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4220), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), aot_gpr_4);
      if (branch_taken) {
          goto L_08B3D3BC;
      }
      goto L_08B3CE9C;
    }
L_08B3CE9C:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08B3CEA8u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 523u, 0x08B59E08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3CEA8u) goto L_08B3CEA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3CEA8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B3CEB4u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 98u, 0x0884C944u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3CEB4u) goto L_08B3CEB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3CEB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3D3BC;
      }
      goto L_08B3CEBC;
    }
L_08B3CEBC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1340)));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(1188));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(1192));
    aot_gpr_31 = (0x08B3CED4u);
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(1196));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 579u, 0x08B56358u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3CED4u) goto L_08B3CED4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3CED4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_7 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_7);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1188)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8196), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_7 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_7);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1192)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8200), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_7 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_7);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1196)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8204), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), aot_gpr_4);
      if (branch_taken) {
          goto L_08B3D3BC;
      }
      goto L_08B3CF44;
    }
L_08B3CF44:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(1200));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1336)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(1232));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(1236));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(1240));
    aot_gpr_31 = (0x08B3CF64u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 579u, 0x08B56358u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3CF64u) goto L_08B3CF64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3CF64:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_7 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_7 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1232)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_7);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4476), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_7 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_7 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1236)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_7);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4480), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_7 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_7 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1240)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_7);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4484), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_7 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_7 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_7);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_31 = (0x08B3CFFCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4488));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3CFFCu) goto L_08B3CFFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3CFFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), aot_gpr_4);
      if (branch_taken) {
          goto L_08B3D3BC;
      }
      goto L_08B3D00C;
    }
L_08B3D00C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1404), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1400), ctx.gpr[19]);
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(1244));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1396), ctx.gpr[23]);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08B3D02Cu);
    aot_gpr_6 = (0u | 32u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D02Cu) goto L_08B3D02C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D02C:
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(1276));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08B3D040u);
    aot_gpr_6 = (0u | 32u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D040u) goto L_08B3D040;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D040:
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1312)));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08B3D050u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 523u, 0x08B59E08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D050u) goto L_08B3D050;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D050:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B3D060u);
    aot_gpr_6 = (0u | 31u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D060u) goto L_08B3D060;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D060:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08B3D06Cu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 523u, 0x08B59E08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D06Cu) goto L_08B3D06C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D06C:
    aot_gpr_31 = (0x08B3D074u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D074u) goto L_08B3D074;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D074:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08B3D084u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 523u, 0x08B59E08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D084u) goto L_08B3D084;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D084:
    aot_gpr_31 = (0x08B3D08Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D08Cu) goto L_08B3D08C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D08C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08B3D09Cu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 523u, 0x08B59E08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D09Cu) goto L_08B3D09C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D09C:
    aot_gpr_31 = (0x08B3D0A4u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D0A4u) goto L_08B3D0A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D0A4:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08B3D0B4u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 523u, 0x08B59E08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D0B4u) goto L_08B3D0B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D0B4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B3D0C4u);
    aot_gpr_6 = (0u | 31u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D0C4u) goto L_08B3D0C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D0C4:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08B3D0D0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 523u, 0x08B59E08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D0D0u) goto L_08B3D0D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D0D0:
    aot_gpr_31 = (0x08B3D0D8u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 935u, 0x08B577CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D0D8u) goto L_08B3D0D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D0D8:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B3D0E4u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B627F0, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D0E4u) goto L_08B3D0E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D0E4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08B3D0F4u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 523u, 0x08B59E08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D0F4u) goto L_08B3D0F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D0F4:
    aot_gpr_31 = (0x08B3D0FCu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 935u, 0x08B577CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D0FCu) goto L_08B3D0FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D0FC:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B3D108u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B627F0, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D108u) goto L_08B3D108;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D108:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08B3D118u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 523u, 0x08B59E08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D118u) goto L_08B3D118;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D118:
    aot_gpr_31 = (0x08B3D120u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 935u, 0x08B577CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D120u) goto L_08B3D120;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D120:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B3D12Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B627F0, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D12Cu) goto L_08B3D12C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D12C:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08B3D13Cu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 523u, 0x08B59E08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D13Cu) goto L_08B3D13C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D13C:
    aot_gpr_31 = (0x08B3D144u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 935u, 0x08B577CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D144u) goto L_08B3D144;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D144:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B3D150u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B627F0, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D150u) goto L_08B3D150;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D150:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08B3D160u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 523u, 0x08B59E08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D160u) goto L_08B3D160;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D160:
    aot_gpr_31 = (0x08B3D168u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 935u, 0x08B577CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D168u) goto L_08B3D168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D168:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B3D174u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B627F0, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D174u) goto L_08B3D174;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D174:
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08B3D184u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 523u, 0x08B59E08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D184u) goto L_08B3D184;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D184:
    aot_gpr_31 = (0x08B3D18Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 935u, 0x08B577CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D18Cu) goto L_08B3D18C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D18C:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B3D198u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B627F0, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D198u) goto L_08B3D198;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D198:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_6 = (aot_gpr_4 << 4u);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_7 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(6908), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_6 = (aot_gpr_4 << 4u);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_7 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(6912), ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_6 = (aot_gpr_4 << 4u);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_7 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(6916), ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_6 = (aot_gpr_4 << 4u);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_7 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(6920), ctx.gpr[30]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_7 = (aot_gpr_4 << 4u);
    ctx.gpr[8] = (aot_gpr_7 + aot_gpr_7);
    aot_gpr_4 = (ctx.gpr[8] - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_7);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B3D258u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6924));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D258u) goto L_08B3D258;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D258:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_6 = (aot_gpr_4 << 4u);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_7 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(6956), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_6 = (aot_gpr_4 << 4u);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_7 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(6960), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_6 = (aot_gpr_4 << 4u);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_7 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(6964), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_6 = (aot_gpr_4 << 4u);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_7 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(6968), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_6 = (aot_gpr_4 << 4u);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_7 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(6972), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_6 = (aot_gpr_4 << 4u);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_7 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(6976), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_6 = (aot_gpr_4 << 4u);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_7 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(6980), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_6 = (aot_gpr_4 << 4u);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_7 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(6981), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_7 = (aot_gpr_4 << 4u);
    ctx.gpr[8] = (aot_gpr_7 + aot_gpr_7);
    aot_gpr_4 = (ctx.gpr[8] - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_7);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1244));
    aot_gpr_31 = (0x08B3D3A4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6876));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D3A4u) goto L_08B3D3A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D3A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1396), aot_run_words);
      ctx.gpr[23] = aot_run_words[0];
      ctx.gpr[19] = aot_run_words[1];
      ctx.gpr[30] = aot_run_words[2];
    }
    goto L_08B3D3BC;
L_08B3D3BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1324)));
      if (branch_taken) {
          goto L_08B3C830;
      }
      goto L_08B3D3C4;
    }
L_08B3D3C4:
    aot_gpr_31 = (0x08B3D3CCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1392)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D3CCu) goto L_08B3D3CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D3CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[30] = (0u | 3u);
      if (branch_taken) {
          goto L_08B3D3F4;
      }
      goto L_08B3D3D8;
    }
L_08B3D3D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(5224));
      if (branch_taken) {
          goto L_08B3D404;
      }
      goto L_08B3D3EC;
    }
L_08B3D3EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3D53C;
      }
      goto L_08B3D3F4;
    }
L_08B3D3F4:
    aot_gpr_31 = (0x08B3D3FCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08B3C030;
L_08B3D3FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3D54C;
      }
      goto L_08B3D404;
    }
L_08B3D404:
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(1308));
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(5232));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_08B3D414;
L_08B3D414:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_31 = (0x08B3D428u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(50));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D428u) goto L_08B3D428;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D428:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3D444;
      }
      goto L_08B3D430;
    }
L_08B3D430:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(3252), aot_gpr_5);
      if (branch_taken) {
          goto L_08B3D524;
      }
      goto L_08B3D444;
    }
L_08B3D444:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_5 = (0u | 2u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3252)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B3D500;
      }
      goto L_08B3D45C;
    }
L_08B3D45C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_31 = (0x08B3D470u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(50));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 146u, 0x08AEC930u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D470u) goto L_08B3D470;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D470:
    if (ctx.gpr[2] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
        goto L_08B3D4A8;
    }
    goto L_08B3D478;
L_08B3D478:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1308)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(3252), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_5 = (0u | 14u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3252)));
    aot_gpr_31 = (0x08B3D4A0u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D4A0u) goto L_08B3D4A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D4A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3D4F8;
      }
      goto L_08B3D4A8;
    }
L_08B3D4A8:
    aot_gpr_5 = (ctx.gpr[20] + static_cast<std::uint32_t>(380));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(3252), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[16]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(3252)));
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(50));
    aot_gpr_31 = (0x08B3D4D4u);
    aot_gpr_6 = (0u | 14u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 552u, 0x08AD32D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D4D4u) goto L_08B3D4D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D4D4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(380));
    goto L_08B3D4DC;
L_08B3D4DC:
    aot_gpr_31 = (0x08B3D4E4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D4E4u) goto L_08B3D4E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D4E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3D4F8;
      }
      goto L_08B3D4EC;
    }
L_08B3D4EC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(380));
      if (branch_taken) {
          goto L_08B3D4DC;
      }
      goto L_08B3D4F8;
    }
L_08B3D4F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3D524;
      }
      goto L_08B3D500;
    }
L_08B3D500:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3252)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08B3D524;
      }
      goto L_08B3D514;
    }
L_08B3D514:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3248)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(3252), aot_gpr_5);
    goto L_08B3D524;
L_08B3D524:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B3D414;
      }
      goto L_08B3D53C;
    }
L_08B3D53C:
    aot_gpr_31 = (0x08B3D544u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D544u) goto L_08B3D544;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D544:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), aot_gpr_4);
    goto L_08B3D54C;
L_08B3D54C:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1408), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      ctx.gpr[16] = aot_run_words[6];
      ctx.gpr[17] = aot_run_words[7];
      ctx.gpr[18] = aot_run_words[8];
      ctx.gpr[19] = aot_run_words[9];
      ctx.gpr[20] = aot_run_words[10];
      ctx.gpr[21] = aot_run_words[11];
      ctx.gpr[22] = aot_run_words[12];
      ctx.gpr[23] = aot_run_words[13];
      ctx.gpr[30] = aot_run_words[14];
      aot_gpr_31 = aot_run_words[15];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1472));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D594:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    { const std::uint32_t aot_run_words[8]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B3D604;
      }
      goto L_08B3D5C4;
    }
L_08B3D5C4:
    aot_gpr_31 = (0x08B3D5CCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 163u, 0x08A114E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D5CCu) goto L_08B3D5CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D5CC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-11836), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5432), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B3D60C;
      }
      goto L_08B3D5F0;
    }
L_08B3D5F0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    aot_gpr_31 = (0x08B3D5FCu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 346u, 0x088DE1A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D5FCu) goto L_08B3D5FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D5FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08B3D618;
      }
      goto L_08B3D604;
    }
L_08B3D604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3DAA0;
      }
      goto L_08B3D60C;
    }
L_08B3D60C:
    aot_gpr_31 = (0x08B3D614u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 350u, 0x088DE1D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D614u) goto L_08B3D614;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D614:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_08B3D618;
L_08B3D618:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (65528u << 16u);
      if (branch_taken) {
          goto L_08B3D68C;
      }
      goto L_08B3D628;
    }
L_08B3D628:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    goto L_08B3D630;
L_08B3D630:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6676)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3D678;
      }
      goto L_08B3D644;
    }
L_08B3D644:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(6676));
      if (branch_taken) {
          goto L_08B3D664;
      }
      goto L_08B3D64C;
    }
L_08B3D64C:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08B3D658u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A93004, 163u, 430u, 0x08A93004u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D658u) goto L_08B3D658;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D658:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(6676)));
    goto L_08B3D664;
L_08B3D664:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (8u << 16u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(72), aot_gpr_4);
    goto L_08B3D678;
L_08B3D678:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B3D630;
      }
      goto L_08B3D68C;
    }
L_08B3D68C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    aot_gpr_31 = (0x08B3D698u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 231u, 0x08AB92E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D698u) goto L_08B3D698;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D698:
    aot_gpr_31 = (0x08B3D6A0u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 64u, 0x08A90840u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D6A0u) goto L_08B3D6A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D6A0:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08B3D764;
      }
      goto L_08B3D6BC;
    }
L_08B3D6BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(7740)));
    aot_gpr_31 = (0x08B3D6D8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D6D8u) goto L_08B3D6D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D6D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(7740)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(72));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08B3D704u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D704u) goto L_08B3D704;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D704:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(7740)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3D750;
      }
      goto L_08B3D720;
    }
L_08B3D720:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(24));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08B3D740u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_7);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D740u) goto L_08B3D740;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D740:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_08B3D750;
L_08B3D750:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(7740), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08B3D6BC;
      }
      goto L_08B3D764;
    }
L_08B3D764:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_31 = (0x08B3D770u);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 197u, 0x088E25C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D770u) goto L_08B3D770;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D770:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3D7BC;
      }
      goto L_08B3D77C;
    }
L_08B3D77C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3D794;
      }
      goto L_08B3D788;
    }
L_08B3D788:
    aot_gpr_31 = (0x08B3D790u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D790u) goto L_08B3D790;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D790:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B3D794;
L_08B3D794:
    aot_gpr_31 = (0x08B3D79Cu);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 690u, 0x0893ED4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D79Cu) goto L_08B3D79C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D79C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B3D7B4;
      }
      goto L_08B3D7A8;
    }
L_08B3D7A8:
    aot_gpr_31 = (0x08B3D7B0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D7B0u) goto L_08B3D7B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D7B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B3D7B4;
L_08B3D7B4:
    aot_gpr_31 = (0x08B3D7BCu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 556u, 0x0893E35Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D7BCu) goto L_08B3D7BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D7BC:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(7940), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(158)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3D7F8;
      }
      goto L_08B3D7D8;
    }
L_08B3D7D8:
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_31 = (0x08B3D7E8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 125u, 0x08A1CC44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D7E8u) goto L_08B3D7E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D7E8:
    aot_gpr_31 = (0x08B3D7F0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 203u, 0x08A1D1F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D7F0u) goto L_08B3D7F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D7F0:
    aot_gpr_31 = (0x08B3D7F8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 611u, 0x08A1BEE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D7F8u) goto L_08B3D7F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D7F8:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr_31 = (0x08B3D804u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D804u) goto L_08B3D804;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D804:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_7 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_6 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_7 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-6992));
    ctx.gpr[17] = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (8u << 16u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_31 = (0x08B3D840u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D840u) goto L_08B3D840;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D840:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-129));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B3D85Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 8u, 0x08964108u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D85Cu) goto L_08B3D85C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D85C:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(5060));
      if (branch_taken) {
          goto L_08B3D8C8;
      }
      goto L_08B3D868;
    }
L_08B3D868:
    aot_gpr_31 = (0x08B3D870u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 340u, 0x08B552D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D870u) goto L_08B3D870;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D870:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B3D88C;
      }
      goto L_08B3D87C;
    }
L_08B3D87C:
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(-32));
    ctx.gpr[18] = (aot_gpr_5 << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 24u));
      if (branch_taken) {
          goto L_08B3D88C;
      }
      goto L_08B3D88C;
    }
L_08B3D88C:
    aot_gpr_31 = (0x08B3D894u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 340u, 0x08B552D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D894u) goto L_08B3D894;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D894:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B3D8AC;
      }
      goto L_08B3D89C;
    }
L_08B3D89C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-32));
    aot_gpr_4 = (aot_gpr_4 << 24u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
      if (branch_taken) {
          goto L_08B3D8AC;
      }
      goto L_08B3D8AC;
    }
L_08B3D8AC:
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_4;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3D8BC;
      }
      goto L_08B3D8B4;
    }
L_08B3D8B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3D8DC;
      }
      goto L_08B3D8BC;
    }
L_08B3D8BC:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3D868;
      }
      goto L_08B3D8C8;
    }
L_08B3D8C8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B3D8DC;
      }
      goto L_08B3D8D4;
    }
L_08B3D8D4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3D8DC;
      }
      goto L_08B3D8DC;
    }
L_08B3D8DC:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3D8FC;
      }
      goto L_08B3D8E4;
    }
L_08B3D8E4:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x08B3D8F0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 571u, 0x08A06434u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D8F0u) goto L_08B3D8F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D8F0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B3D8FCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 565u, 0x08A063CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D8FCu) goto L_08B3D8FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D8FC:
    aot_gpr_31 = (0x08B3D904u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 538u, 0x08AD31E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D904u) goto L_08B3D904;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D904:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8424), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08B3D910u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D910u) goto L_08B3D910;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D910:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B3D91Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 941u, 0x0898BA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D91Cu) goto L_08B3D91C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D91C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(157)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3DA28;
      }
      goto L_08B3D928;
    }
L_08B3D928:
    aot_gpr_31 = (0x08B3D930u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 528u, 0x08AD312Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D930u) goto L_08B3D930;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D930:
    aot_gpr_31 = (0x08B3D938u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 532u, 0x08AD317Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D938u) goto L_08B3D938;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D938:
    aot_gpr_31 = (0x08B3D940u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 536u, 0x08AD31CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D940u) goto L_08B3D940;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D940:
    aot_gpr_31 = (0x08B3D948u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(157), static_cast<std::uint8_t>(0u));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D948u) goto L_08B3D948;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D948:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B3DA24;
      }
      goto L_08B3D95C;
    }
L_08B3D95C:
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (0u | 0u);
    goto L_08B3D964;
L_08B3D964:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_31 = (0x08B3D974u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8796)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D974u) goto L_08B3D974;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D974:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr_31 = (0x08B3D980u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 614u, 0x08AD3708u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D980u) goto L_08B3D980;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D980:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08B3D994u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D994u) goto L_08B3D994;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D994:
    aot_gpr_31 = (0x08B3D99Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D99Cu) goto L_08B3D99C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D99C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_31 = (0x08B3D9ACu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8796)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D9ACu) goto L_08B3D9AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D9AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08B3D9E0;
      }
      goto L_08B3D9B8;
    }
L_08B3D9B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_31 = (0x08B3D9C8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8796)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D9C8u) goto L_08B3D9C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D9C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08B3D9D8u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D9D8u) goto L_08B3D9D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D9D8:
    aot_gpr_31 = (0x08B3D9E0u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D9E0u) goto L_08B3D9E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D9E0:
    aot_gpr_4 = (ctx.gpr[21] & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3D9F4;
      }
      goto L_08B3D9EC;
    }
L_08B3D9EC:
    aot_gpr_31 = (0x08B3D9F4u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3D9F4u) goto L_08B3D9F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3D9F4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[19]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8836)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8796)));
    aot_gpr_31 = (0x08B3DA10u);
    aot_gpr_7 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DA10u) goto L_08B3DA10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DA10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B3D964;
      }
      goto L_08B3DA24;
    }
L_08B3DA24:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), 0u);
    goto L_08B3DA28;
L_08B3DA28:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_08B3DA64;
      }
      goto L_08B3DA3C;
    }
L_08B3DA3C:
    ctx.gpr[18] = (0u | 0u);
    goto L_08B3DA40;
L_08B3DA40:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_31 = (0x08B3DA4Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3252)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 625u, 0x08AD37C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DA4Cu) goto L_08B3DA4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DA4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_08B3DA40;
      }
      goto L_08B3DA64;
    }
L_08B3DA64:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3DA80;
      }
      goto L_08B3DA6C;
    }
L_08B3DA6C:
    aot_gpr_31 = (0x08B3DA74u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 123u, 0x0884CAE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DA74u) goto L_08B3DA74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DA74:
    aot_gpr_31 = (0x08B3DA7Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DA7Cu) goto L_08B3DA7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DA7C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), 0u);
    goto L_08B3DA80;
L_08B3DA80:
    aot_gpr_31 = (0x08B3DA88u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DA88u) goto L_08B3DA88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DA88:
    aot_gpr_31 = (0x08B3DA90u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 602u, 0x08AD3650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DA90u) goto L_08B3DA90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DA90:
    aot_gpr_31 = (0x08B3DA98u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DA98u) goto L_08B3DA98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DA98:
    aot_gpr_31 = (0x08B3DAA0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 165u, 0x08A11504u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DAA0u) goto L_08B3DAA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DAA0:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DAC8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B3DB50;
      }
      goto L_08B3DB00;
    }
L_08B3DB00:
    ctx.gpr[17] = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B3DB48;
      }
      goto L_08B3DB0C;
    }
L_08B3DB0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B3DB70;
      }
      goto L_08B3DB1C;
    }
L_08B3DB1C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B3DC3C;
      }
      goto L_08B3DB24;
    }
L_08B3DB24:
    aot_gpr_31 = (0x08B3DB2Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 1001u, 0x08B3B9CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DB2Cu) goto L_08B3DB2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DB2C:
    aot_gpr_31 = (0x08B3DB34u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 1028u, 0x08B3BCD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DB34u) goto L_08B3DB34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DB34:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), aot_gpr_5);
      if (branch_taken) {
          goto L_08B3DC40;
      }
      goto L_08B3DB48;
    }
L_08B3DB48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3DF74;
      }
      goto L_08B3DB50;
    }
L_08B3DB50:
    aot_gpr_31 = (0x08B3DB58u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 163u, 0x08A114E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DB58u) goto L_08B3DB58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DB58:
    aot_gpr_31 = (0x08B3DB60u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 1042u, 0x08B3BEA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DB60u) goto L_08B3DB60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DB60:
    aot_gpr_31 = (0x08B3DB68u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 165u, 0x08A11504u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DB68u) goto L_08B3DB68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DB68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3DF74;
      }
      goto L_08B3DB70;
    }
L_08B3DB70:
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3DB8C;
      }
      goto L_08B3DB78;
    }
L_08B3DB78:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3DB9C;
      }
      goto L_08B3DB84;
    }
L_08B3DB84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3DC3C;
      }
      goto L_08B3DB8C;
    }
L_08B3DB8C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18)));
      if (branch_taken) {
          goto L_08B3DC40;
      }
      goto L_08B3DB9C;
    }
L_08B3DB9C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(5060));
      if (branch_taken) {
          goto L_08B3DC10;
      }
      goto L_08B3DBB0;
    }
L_08B3DBB0:
    aot_gpr_31 = (0x08B3DBB8u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 340u, 0x08B552D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DBB8u) goto L_08B3DBB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DBB8:
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B3DBD4;
      }
      goto L_08B3DBC4;
    }
L_08B3DBC4:
    aot_gpr_5 = (ctx.gpr[20] + static_cast<std::uint32_t>(-32));
    ctx.gpr[20] = (aot_gpr_5 << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 24u));
      if (branch_taken) {
          goto L_08B3DBD4;
      }
      goto L_08B3DBD4;
    }
L_08B3DBD4:
    aot_gpr_31 = (0x08B3DBDCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 340u, 0x08B552D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DBDCu) goto L_08B3DBDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DBDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B3DBF4;
      }
      goto L_08B3DBE4;
    }
L_08B3DBE4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-32));
    aot_gpr_4 = (aot_gpr_4 << 24u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
      if (branch_taken) {
          goto L_08B3DBF4;
      }
      goto L_08B3DBF4;
    }
L_08B3DBF4:
    { const bool branch_taken = ctx.gpr[20] == aot_gpr_4;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3DC04;
      }
      goto L_08B3DBFC;
    }
L_08B3DBFC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3DC24;
      }
      goto L_08B3DC04;
    }
L_08B3DC04:
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3DBB0;
      }
      goto L_08B3DC10;
    }
L_08B3DC10:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B3DC24;
      }
      goto L_08B3DC1C;
    }
L_08B3DC1C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3DC24;
      }
      goto L_08B3DC24;
    }
L_08B3DC24:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3DC34;
      }
      goto L_08B3DC2C;
    }
L_08B3DC2C:
    aot_gpr_31 = (0x08B3DC34u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 569u, 0x08A06414u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DC34u) goto L_08B3DC34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DC34:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18)));
      if (branch_taken) {
          goto L_08B3DC40;
      }
      goto L_08B3DC3C;
    }
L_08B3DC3C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18)));
    goto L_08B3DC40;
L_08B3DC40:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (16968u << 16u);
      if (branch_taken) {
          goto L_08B3DF74;
      }
      goto L_08B3DC48;
    }
L_08B3DC48:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7684)));
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[20];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_31 = (0x08B3DC68u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 983u, 0x08B3B880u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DC68u) goto L_08B3DC68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DC68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B3DD1C;
      }
      goto L_08B3DC7C;
    }
L_08B3DC7C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    aot_gpr_6 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(3964)));
    aot_gpr_6 = (aot_gpr_6 < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3DD1C;
      }
      goto L_08B3DC98;
    }
L_08B3DC98:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_gpr_4 = (aot_gpr_4 << 3u);
      if (branch_taken) {
          goto L_08B3DCD8;
      }
      goto L_08B3DCA4;
    }
L_08B3DCA4:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_31 = (0x08B3DCB0u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DCB0u) goto L_08B3DCB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DCB0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3DCC8;
      }
      goto L_08B3DCBC;
    }
L_08B3DCBC:
    aot_gpr_31 = (0x08B3DCC4u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DCC4u) goto L_08B3DCC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DCC4:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08B3DCC8;
L_08B3DCC8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    goto L_08B3DCD8;
L_08B3DCD8:
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(3452));
    aot_gpr_31 = (0x08B3DCE8u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DCE8u) goto L_08B3DCE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DCE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4220)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_7 = (0u | 0u);
    aot_gpr_31 = (0x08B3DD10u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 216u, 0x08AB9068u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DD10u) goto L_08B3DD10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DD10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), aot_gpr_4);
    goto L_08B3DD1C;
L_08B3DD1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08B3DD70;
      }
      goto L_08B3DD30;
    }
L_08B3DD30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(7740)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 380 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 390 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B3DD5C;
      }
      goto L_08B3DD4C;
    }
L_08B3DD4C:
    { const bool branch_taken = aot_gpr_6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3DD5C;
      }
      goto L_08B3DD54;
    }
L_08B3DD54:
    aot_gpr_31 = (0x08B3DD5Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 951u, 0x08B3B5A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DD5Cu) goto L_08B3DD5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DD5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B3DD30;
      }
      goto L_08B3DD70;
    }
L_08B3DD70:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(158)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3DF74;
      }
      goto L_08B3DD7C;
    }
L_08B3DD7C:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(5060));
      if (branch_taken) {
          goto L_08B3DDEC;
      }
      goto L_08B3DD8C;
    }
L_08B3DD8C:
    aot_gpr_31 = (0x08B3DD94u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 340u, 0x08B552D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DD94u) goto L_08B3DD94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DD94:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B3DDB0;
      }
      goto L_08B3DDA0;
    }
L_08B3DDA0:
    aot_gpr_5 = (ctx.gpr[21] + static_cast<std::uint32_t>(-32));
    ctx.gpr[21] = (aot_gpr_5 << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 24u));
      if (branch_taken) {
          goto L_08B3DDB0;
      }
      goto L_08B3DDB0;
    }
L_08B3DDB0:
    aot_gpr_31 = (0x08B3DDB8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 340u, 0x08B552D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DDB8u) goto L_08B3DDB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DDB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B3DDD0;
      }
      goto L_08B3DDC0;
    }
L_08B3DDC0:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-32));
    aot_gpr_4 = (aot_gpr_4 << 24u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
      if (branch_taken) {
          goto L_08B3DDD0;
      }
      goto L_08B3DDD0;
    }
L_08B3DDD0:
    { const bool branch_taken = ctx.gpr[21] == aot_gpr_4;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3DDE0;
      }
      goto L_08B3DDD8;
    }
L_08B3DDD8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3DE00;
      }
      goto L_08B3DDE0;
    }
L_08B3DDE0:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3DD8C;
      }
      goto L_08B3DDEC;
    }
L_08B3DDEC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B3DE00;
      }
      goto L_08B3DDF8;
    }
L_08B3DDF8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3DE00;
      }
      goto L_08B3DE00;
    }
L_08B3DE00:
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (2236u << 16u);
      if (branch_taken) {
          goto L_08B3DF74;
      }
      goto L_08B3DE08;
    }
L_08B3DE08:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(112))))));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B3DF74;
      }
      goto L_08B3DE3C;
    }
L_08B3DE3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B3DF74;
      }
      goto L_08B3DE48;
    }
L_08B3DE48:
    aot_gpr_31 = (0x08B3DE50u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 41u, 0x08A1C544u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DE50u) goto L_08B3DE50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DE50:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(1000));
    aot_gpr_4 = (ctx.gpr[2] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3DE88;
      }
      goto L_08B3DE60;
    }
L_08B3DE60:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(159)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3DE88;
      }
      goto L_08B3DE6C;
    }
L_08B3DE6C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(159), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_6 = (16256u << 16u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_31 = (0x08B3DE88u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DE88u) goto L_08B3DE88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DE88:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3DF40;
      }
      goto L_08B3DE94;
    }
L_08B3DE94:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_15 = aot_fpr_12 / ctx.fpr[20];
    aot_gpr_5 = (17530u << 16u);
    aot_gpr_6 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_15; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_15 < aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
      if (branch_taken) {
          goto L_08B3DED8;
      }
      goto L_08B3DEC0;
    }
L_08B3DEC0:
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[20];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
      if (branch_taken) {
          goto L_08B3DEF8;
      }
      goto L_08B3DED8;
    }
L_08B3DED8:
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[20];
    aot_gpr_5 = (32768u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    goto L_08B3DEF8;
L_08B3DEF8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), aot_gpr_4);
      if (branch_taken) {
          goto L_08B3DF74;
      }
      goto L_08B3DF00;
    }
L_08B3DF00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08B3DF1C;
      }
      goto L_08B3DF0C;
    }
L_08B3DF0C:
    aot_gpr_31 = (0x08B3DF14u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DF14u) goto L_08B3DF14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DF14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_gpr_5 = (0u | 0u);
    goto L_08B3DF1C;
L_08B3DF1C:
    aot_gpr_31 = (0x08B3DF24u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 618u, 0x089BAEB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DF24u) goto L_08B3DF24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DF24:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08B3DF34u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 1020u, 0x08B3BC20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DF34u) goto L_08B3DF34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DF34:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), 0u);
      if (branch_taken) {
          goto L_08B3DF74;
      }
      goto L_08B3DF40;
    }
L_08B3DF40:
    aot_gpr_31 = (0x08B3DF48u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 139u, 0x0884CC2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DF48u) goto L_08B3DF48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DF48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3DF74;
      }
      goto L_08B3DF50;
    }
L_08B3DF50:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 1000u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), aot_gpr_4);
    aot_gpr_6 = (16256u << 16u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_31 = (0x08B3DF74u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DF74u) goto L_08B3DF74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DF74:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DF9C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B3DFACu);
    aot_gpr_4 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3DFACu) goto L_08B3DFAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DFAC:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3DFDC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
      if (branch_taken) {
          goto L_08B3E030;
      }
      goto L_08B3DFFC;
    }
L_08B3DFFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3E01C;
      }
      goto L_08B3E008;
    }
L_08B3E008:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3E014;
      }
      goto L_08B3E014;
    }
L_08B3E014:
    aot_gpr_31 = (0x08B3E01Cu);
    // nop
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3E01Cu) goto L_08B3E01C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E01C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B3E028u);
    aot_gpr_5 = (0u | 0u);
    goto L_08B3E058;
L_08B3E028:
    aot_gpr_31 = (0x08B3E030u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3E030u) goto L_08B3E030;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E030:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E044:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E058:
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3E06C;
      }
      goto L_08B3E060;
    }
L_08B3E060:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(80)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(80), aot_gpr_6);
    goto L_08B3E06C;
L_08B3E06C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3E078;
      }
      goto L_08B3E078;
    }
L_08B3E078:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E084:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E08C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (0u | 0u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
        goto L_08B3E09C;
    }
    goto L_08B3E09C;
L_08B3E09C:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E0A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3E118;
      }
      goto L_08B3E0C8;
    }
L_08B3E0C8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B3E10C;
      }
      goto L_08B3E0DC;
    }
L_08B3E0DC:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_31 = (0x08B3E0E8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B3DFDC;
L_08B3E0E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B3E0DC;
      }
      goto L_08B3E10C;
    }
L_08B3E10C:
    aot_gpr_31 = (0x08B3E114u);
    // nop
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3E114u) goto L_08B3E114;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E114:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08B3E118;
L_08B3E118:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E13C:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), 0u);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E150:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B3E1A8;
      }
      goto L_08B3E17C;
    }
L_08B3E17C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_gpr_5 << 2u);
      if (branch_taken) {
          goto L_08B3E1D8;
      }
      goto L_08B3E188;
    }
L_08B3E188:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_7 = (0u | 1u);
    aot_gpr_31 = (0x08B3E1A0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 523u, 0x08ABE6BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3E1A0u) goto L_08B3E1A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E1A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B3E1E4;
      }
      goto L_08B3E1A8;
    }
L_08B3E1A8:
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_gpr_31 = (0x08B3E1CCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08B3E240;
L_08B3E1CC:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B3E22C;
      }
      goto L_08B3E1D8;
    }
L_08B3E1D8:
    aot_gpr_31 = (0x08B3E1E0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3E1E0u) goto L_08B3E1E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E1E0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08B3E1E4;
L_08B3E1E4:
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08B3E1F4;
    }
    goto L_08B3E1EC;
L_08B3E1EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B3E22C;
      }
      goto L_08B3E1F4;
    }
L_08B3E1F4:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_gpr_31 = (0x08B3E224u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08B3E240;
L_08B3E224:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    goto L_08B3E22C;
L_08B3E22C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E240:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E254:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_31;
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E260:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E26C:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), 0u);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E27C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10584), 0u);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10588), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E288:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_4 & 255u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_6);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_6);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_6);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_4);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10584)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_6);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 96 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_7 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B3E460;
      }
      goto L_08B3E330;
    }
L_08B3E330:
    aot_gpr_6 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (2281u << 16u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-29760));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_5);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_15 < aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08B3E370;
      }
      goto L_08B3E368;
    }
L_08B3E368:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_15));
      if (branch_taken) {
          goto L_08B3E374;
      }
      goto L_08B3E370;
    }
L_08B3E370:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    goto L_08B3E374;
L_08B3E374:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          goto L_08B3E38C;
      }
      goto L_08B3E384;
    }
L_08B3E384:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_08B3E390;
      }
      goto L_08B3E38C;
    }
L_08B3E38C:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B3E390;
L_08B3E390:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_15 <= aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          goto L_08B3E3A8;
      }
      goto L_08B3E3A0;
    }
L_08B3E3A0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_15));
      if (branch_taken) {
          goto L_08B3E3A8;
      }
      goto L_08B3E3A8;
    }
L_08B3E3A8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_14));
      if (branch_taken) {
          goto L_08B3E3C0;
      }
      goto L_08B3E3B8;
    }
L_08B3E3B8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_08B3E3C0;
      }
      goto L_08B3E3C0;
    }
L_08B3E3C0:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(24));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10584)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(40));
    aot_gpr_7 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_7 - aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10584)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    aot_gpr_7 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_7 - aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10584)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_gpr_6 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10584)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10584), aot_gpr_4);
    goto L_08B3E460;
L_08B3E460:
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E468:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2281u << 16u);
    aot_gpr_7 = (2228u << 16u);
    aot_gpr_5 = (0u | 96u);
    aot_gpr_6 = (0u | 56u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-29760));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B3E48Cu);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-7572));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3E48Cu) goto L_08B3E48C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E48C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E498:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
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
    ctx.execute_vfpu_vi2f_ct<2u, 1u, 2u, 3u>();
    ctx.execute_vfpu_vi2f_ct<66u, 32u, 1u, 0u>();
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<98u, 66u, 64u, 1u, 1u>();
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E4DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_gpr_4 = (aot_gpr_5 & 65535u);
    aot_gpr_5 = (aot_gpr_6 & 65535u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_4 << 3u);
    aot_gpr_7 = (aot_gpr_4 + aot_gpr_7);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_7);
    ctx.gpr[10] = (aot_gpr_6 + aot_gpr_4);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
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
    ctx.execute_vfpu_vi2f_ct<2u, 1u, 2u, 3u>();
    ctx.execute_vfpu_vi2f_ct<66u, 32u, 1u, 0u>();
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<98u, 66u, 64u, 1u, 1u>();
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[10] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
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
    ctx.execute_vfpu_vi2f_ct<2u, 1u, 2u, 3u>();
    ctx.execute_vfpu_vi2f_ct<66u, 32u, 1u, 0u>();
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<98u, 66u, 64u, 1u, 1u>();
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E5C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_gpr_4 = (aot_gpr_5 & 65535u);
    aot_gpr_5 = (aot_gpr_6 & 65535u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_4 << 3u);
    aot_gpr_7 = (aot_gpr_4 + aot_gpr_7);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_7);
    ctx.gpr[10] = (aot_gpr_6 + aot_gpr_4);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
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
    ctx.execute_vfpu_vi2f_ct<2u, 1u, 2u, 3u>();
    ctx.execute_vfpu_vi2f_ct<66u, 32u, 1u, 0u>();
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<98u, 66u, 64u, 1u, 1u>();
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[10] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
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
    ctx.execute_vfpu_vi2f_ct<2u, 1u, 2u, 3u>();
    ctx.execute_vfpu_vi2f_ct<66u, 32u, 1u, 0u>();
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<98u, 66u, 64u, 1u, 1u>();
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = aot_fpr_14 - aot_fpr_15;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + aot_fpr_14;
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E6A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_5 & 65535u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[9] = (ctx.gpr[19] << 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[19] + ctx.gpr[9]);
    ctx.gpr[20] = (ctx.gpr[19] + ctx.gpr[20]);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(8))))));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    ctx.gpr[21] = (ctx.gpr[21] & 15u);
    ctx.gpr[23] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    ctx.gpr[22] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[18] = (aot_gpr_7 | 0u);
      if (branch_taken) {
          goto L_08B3E800;
      }
      goto L_08B3E720;
    }
L_08B3E720:
    ctx.gpr[30] = (ctx.gpr[18] | 0u);
    goto L_08B3E724;
L_08B3E724:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(30040)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[20]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[23]);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_6 << 3u);
    aot_gpr_4 = (aot_gpr_4 & 16383u);
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08B3E7F0;
      }
      goto L_08B3E780;
    }
L_08B3E780:
    aot_gpr_6 = (aot_gpr_5 << 3u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3E7B4;
      }
      goto L_08B3E7A4;
    }
L_08B3E7A4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3E7F0;
      }
      goto L_08B3E7B4;
    }
L_08B3E7B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_5);
    jump_target = aot_gpr_7;
    aot_gpr_31 = (0x08B3E7D4u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3E7D4u) goto L_08B3E7D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E7D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08B3E7F0;
L_08B3E7F0:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B3E724;
      }
      goto L_08B3E800;
    }
L_08B3E800:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      ctx.gpr[30] = aot_run_words[8];
      aot_gpr_31 = aot_run_words[9];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E830:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[17] = (aot_gpr_7 | 0u);
    aot_gpr_4 = (aot_gpr_5 & 65535u);
    ctx.gpr[18] = (aot_gpr_6 & 65535u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_4 << 3u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_31 = (0x08B3E874u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_08B3E498;
L_08B3E874:
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[18] << 3u);
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_31 = (0x08B3E89Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_08B3E498;
L_08B3E89C:
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E8BC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-30144));
    aot_gpr_7 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_7);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E8E0:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E8E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words); }
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B3EB38;
      }
      goto L_08B3E920;
    }
L_08B3E920:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[18] - ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B3E958;
      }
      goto L_08B3E940;
    }
L_08B3E940:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[19]);
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3E964;
      }
      goto L_08B3E958;
    }
L_08B3E958:
    aot_gpr_31 = (0x08B3E960u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 365u, 0x08B658A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3E960u) goto L_08B3E960;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E960:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    goto L_08B3E964;
L_08B3E964:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_7 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08B3EABC;
    }
    goto L_08B3E984;
L_08B3E984:
    aot_gpr_5 = (aot_gpr_4 < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08B3E9A4;
      }
      goto L_08B3E990;
    }
L_08B3E990:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3E9B4;
      }
      goto L_08B3E9A4;
    }
L_08B3E9A4:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08B3E9B4;
L_08B3E9B4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08B3E9DC;
      }
      goto L_08B3E9BC;
    }
L_08B3E9BC:
    aot_gpr_31 = (0x08B3E9C4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3E9C4u) goto L_08B3E9C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E9C4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3E9DC;
      }
      goto L_08B3E9D0;
    }
L_08B3E9D0:
    aot_gpr_31 = (0x08B3E9D8u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3E9D8u) goto L_08B3E9D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3E9D8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08B3E9DC;
L_08B3E9DC:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(19))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(22))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B3EA08u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08B3FC9C;
L_08B3EA08:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[22];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B3EA34;
      }
      goto L_08B3EA18;
    }
L_08B3EA18:
    ctx.gpr[20] = (ctx.gpr[23] - ctx.gpr[22]);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B3EA2Cu);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3EA2Cu) goto L_08B3EA2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3EA2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08B3EA34;
      }
      goto L_08B3EA34;
    }
L_08B3EA34:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(26))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(29))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[23] = (ctx.gpr[20] | 0u);
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B3EA5Cu);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08B3FC9C;
L_08B3EA5C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[22];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B3EA74;
      }
      goto L_08B3EA6C;
    }
L_08B3EA6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08B3EA8C;
      }
      goto L_08B3EA74;
    }
L_08B3EA74:
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B3EA88u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3EA88u) goto L_08B3EA88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3EA88:
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[17]);
    goto L_08B3EA8C;
L_08B3EA8C:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3EAA8;
      }
      goto L_08B3EAA0;
    }
L_08B3EAA0:
    aot_gpr_31 = (0x08B3EAA8u);
    // nop
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3EAA8u) goto L_08B3EAA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3EAA8:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[21] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_08B3EB38;
      }
      goto L_08B3EABC;
    }
L_08B3EABC:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(34))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(37))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x08B3EAE4u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08B3FC9C;
L_08B3EAE4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[21];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B3EB00;
      }
      goto L_08B3EAF4;
    }
L_08B3EAF4:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08B3EB18;
      }
      goto L_08B3EB00;
    }
L_08B3EB00:
    aot_gpr_6 = (ctx.gpr[18] - ctx.gpr[21]);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B3EB10u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3EB10u) goto L_08B3EB10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3EB10:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[19]);
    goto L_08B3EB18;
L_08B3EB18:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_08B3EB38;
L_08B3EB38:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3EB68:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_run_words); }
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B3ED68;
      }
      goto L_08B3EBA0;
    }
L_08B3EBA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[18] - ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B3EBD8;
      }
      goto L_08B3EBC0;
    }
L_08B3EBC0:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[19]);
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3EBE4;
      }
      goto L_08B3EBD8;
    }
L_08B3EBD8:
    aot_gpr_31 = (0x08B3EBE0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 365u, 0x08B658A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3EBE0u) goto L_08B3EBE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3EBE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    goto L_08B3EBE4;
L_08B3EBE4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3ED14;
      }
      goto L_08B3EC04;
    }
L_08B3EC04:
    aot_gpr_5 = (aot_gpr_4 < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08B3EC24;
      }
      goto L_08B3EC10;
    }
L_08B3EC10:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3EC34;
      }
      goto L_08B3EC24;
    }
L_08B3EC24:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08B3EC34;
L_08B3EC34:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08B3EC5C;
      }
      goto L_08B3EC3C;
    }
L_08B3EC3C:
    aot_gpr_31 = (0x08B3EC44u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3EC44u) goto L_08B3EC44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3EC44:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3EC5C;
      }
      goto L_08B3EC50;
    }
L_08B3EC50:
    aot_gpr_31 = (0x08B3EC58u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3EC58u) goto L_08B3EC58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3EC58:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08B3EC5C;
L_08B3EC5C:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(19))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(22))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B3EC88u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08B3FC9C;
L_08B3EC88:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[22];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B3ECB4;
      }
      goto L_08B3EC98;
    }
L_08B3EC98:
    ctx.gpr[20] = (ctx.gpr[23] - ctx.gpr[22]);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B3ECACu);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3ECACu) goto L_08B3ECAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3ECAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08B3ECB4;
      }
      goto L_08B3ECB4;
    }
L_08B3ECB4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
    aot_gpr_5 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08B3ECC8;
      }
      goto L_08B3ECC0;
    }
L_08B3ECC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08B3ECE4;
      }
      goto L_08B3ECC8;
    }
L_08B3ECC8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08B3ECE0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3ECE0u) goto L_08B3ECE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3ECE0:
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[17]);
    goto L_08B3ECE4;
L_08B3ECE4:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3ED00;
      }
      goto L_08B3ECF8;
    }
L_08B3ECF8:
    aot_gpr_31 = (0x08B3ED00u);
    // nop
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3ED00u) goto L_08B3ED00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3ED00:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[21] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_08B3ED68;
      }
      goto L_08B3ED14;
    }
L_08B3ED14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_6;
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3ED2C;
      }
      goto L_08B3ED24;
    }
L_08B3ED24:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08B3ED48;
      }
      goto L_08B3ED2C;
    }
L_08B3ED2C:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_7 = (ctx.gpr[18] - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08B3ED40u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3ED40u) goto L_08B3ED40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3ED40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    goto L_08B3ED48;
L_08B3ED48:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_08B3ED68;
L_08B3ED68:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3ED98:
    ctx.gpr[2] = (2228u << 16u);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-4712));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3EDA4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B3EDB4u);
    // nop
    goto L_08B3ED98;
L_08B3EDB4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3EDC0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_31 = (0x08B3EDE0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_08B3ED98;
L_08B3EDE0:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[18] = (0u | 1u);
        goto L_08B3EE28;
    }
    goto L_08B3EDE8;
L_08B3EDE8:
    aot_gpr_31 = (0x08B3EDF0u);
    ctx.gpr[17] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3EDF0u) goto L_08B3EDF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3EDF0:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_08B3EE18;
    }
    goto L_08B3EDF8;
L_08B3EDF8:
    aot_gpr_31 = (0x08B3EE00u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 115u, 0x08980688u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3EE00u) goto L_08B3EE00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3EE00:
    aot_gpr_4 = (ctx.gpr[2] ^ ctx.gpr[16]);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08B3EE1C;
      }
      goto L_08B3EE14;
    }
L_08B3EE14:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B3EE18;
L_08B3EE18:
    aot_gpr_4 = (ctx.gpr[17] & 255u);
    goto L_08B3EE1C;
L_08B3EE1C:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3EE28;
      }
      goto L_08B3EE24;
    }
L_08B3EE24:
    ctx.gpr[18] = (0u | 1u);
    goto L_08B3EE28;
L_08B3EE28:
    ctx.gpr[2] = (ctx.gpr[18] & 255u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3EE44:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_31 = (0x08B3EE5Cu);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 472u, 0x08AC59D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3EE5Cu) goto L_08B3EE5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3EE5C:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-30104));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(5256));
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(184));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B3EE7Cu);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3EE7Cu) goto L_08B3EE7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3EE7C:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(196));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x08B3EE8Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3EE8Cu) goto L_08B3EE8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3EE8C:
    { const std::uint32_t aot_run_words[4]{0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[16] + static_cast<std::uint32_t>(208), aot_run_words); }
    aot_gpr_31 = (0x08B3EEA4u);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(248));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 116u, 0x08B68708u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3EEA4u) goto L_08B3EEA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3EEA4:
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[16] + static_cast<std::uint32_t>(260), aot_run_words); }
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(272), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(273), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3EED4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[7]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    aot_gpr_5 = (aot_gpr_4 - ctx.gpr[18]);
    aot_gpr_6 = (0u | 36u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[20] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B3F018;
      }
      goto L_08B3EF2C;
    }
L_08B3EF2C:
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(5));
    goto L_08B3EF30;
L_08B3EF30:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), aot_gpr_6);
      if (branch_taken) {
          goto L_08B3F004;
      }
      goto L_08B3EF6C;
    }
L_08B3EF6C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    goto L_08B3EF7C;
L_08B3EF7C:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B3EFA4;
      }
      goto L_08B3EF84;
    }
L_08B3EF84:
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[21] == aot_gpr_7;
    // nop
      if (branch_taken) {
          goto L_08B3EFA4;
      }
      goto L_08B3EF90;
    }
L_08B3EF90:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3EF7C;
      }
      goto L_08B3EFA4;
    }
L_08B3EFA4:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
    aot_gpr_7 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B3EFEC;
      }
      goto L_08B3EFAC;
    }
L_08B3EFAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (aot_gpr_4 | 0u);
    if (ctx.gpr[21] == ctx.gpr[22]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
        goto L_08B3F008;
    }
    goto L_08B3EFBC;
L_08B3EFBC:
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B3EFDC;
      }
      goto L_08B3EFCC;
    }
L_08B3EFCC:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08B3EFD8u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3EFD8u) goto L_08B3EFD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3EFD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    goto L_08B3EFDC;
L_08B3EFDC:
    aot_gpr_5 = (ctx.gpr[22] - ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), aot_gpr_4);
      if (branch_taken) {
          goto L_08B3F004;
      }
      goto L_08B3EFEC;
    }
L_08B3EFEC:
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (aot_gpr_7 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08B3F004u);
    aot_gpr_7 = (ctx.gpr[23] | 0u);
    goto L_08B3E8E8;
L_08B3F004:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    goto L_08B3F008;
L_08B3F008:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) > 0;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08B3EF30;
      }
      goto L_08B3F014;
    }
L_08B3F014:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B3F018;
L_08B3F018:
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[18];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B3F05C;
      }
      goto L_08B3F028;
    }
L_08B3F028:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08B3F050;
      }
      goto L_08B3F030;
    }
L_08B3F030:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B3F050;
      }
      goto L_08B3F038;
    }
L_08B3F038:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08B3F050;
      }
      goto L_08B3F040;
    }
L_08B3F040:
    if (aot_gpr_4 == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(36));
        goto L_08B3F054;
    }
    goto L_08B3F048;
L_08B3F048:
    aot_gpr_31 = (0x08B3F050u);
    // nop
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F050u) goto L_08B3F050;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F050:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(36));
    goto L_08B3F054;
L_08B3F054:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B3F028;
      }
      goto L_08B3F05C;
    }
L_08B3F05C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F090:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    { const std::uint32_t aot_run_words[5]{ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_5);
      if (branch_taken) {
          goto L_08B3F37C;
      }
      goto L_08B3F0C8;
    }
L_08B3F0C8:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-30104));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(216)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(212)));
    ctx.gpr[19] = (0u | 36u);
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(212));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(260));
    ctx.gpr[23] = (ctx.gpr[20] + static_cast<std::uint32_t>(196));
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[30] = (ctx.gpr[20] + static_cast<std::uint32_t>(184));
      if (branch_taken) {
          goto L_08B3F0FC;
      }
      goto L_08B3F0F8;
    }
L_08B3F0F8:
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(208), 0u);
    goto L_08B3F0FC;
L_08B3F0FC:
    aot_gpr_6 = (aot_gpr_4 - aot_gpr_5);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_6 = (ctx.lo);
    aot_gpr_6 = (ctx.gpr[17] < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08B3F1A4;
      }
      goto L_08B3F118;
    }
L_08B3F118:
    ctx.gpr[16] = (0u | 0u);
    goto L_08B3F11C;
L_08B3F11C:
    aot_gpr_4 = (aot_gpr_5 + ctx.gpr[16]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B3F15Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 143u, 0x08B6CC70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F15Cu) goto L_08B3F15C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F15C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F16C;
      }
      goto L_08B3F168;
    }
L_08B3F168:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), 0u);
    goto L_08B3F16C;
L_08B3F16C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(216)));
        goto L_08B3F184;
    }
    goto L_08B3F178;
L_08B3F178:
    aot_gpr_31 = (0x08B3F180u);
    // nop
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F180u) goto L_08B3F180;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F180:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(216)));
    goto L_08B3F184;
L_08B3F184:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(212)));
    aot_gpr_6 = (aot_gpr_4 - aot_gpr_5);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (ctx.lo);
    aot_gpr_6 = (ctx.gpr[17] < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08B3F11C;
      }
      goto L_08B3F1A4;
    }
L_08B3F1A4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B3F1B0u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    goto L_08B3EED4;
L_08B3F1B0:
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(264)));
    aot_gpr_5 = (0u | 24u);
    aot_gpr_4 = (aot_gpr_7 | 0u);
    aot_gpr_6 = (aot_gpr_4 - aot_gpr_4);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) <= 0;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B3F21C;
      }
      goto L_08B3F1D8;
    }
L_08B3F1D8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_7 = aot_run_words[0];
      ctx.gpr[8] = aot_run_words[1];
      ctx.gpr[9] = aot_run_words[2];
    }
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_7, ctx.gpr[8], ctx.gpr[9]};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) > 0;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08B3F1D8;
      }
      goto L_08B3F218;
    }
L_08B3F218:
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(264)));
    goto L_08B3F21C;
L_08B3F21C:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_7;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B3F234;
      }
      goto L_08B3F228;
    }
L_08B3F228:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    goto L_08B3F22C;
L_08B3F22C:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_7;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08B3F22C;
      }
      goto L_08B3F234;
    }
L_08B3F234:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(264), aot_gpr_5);
      if (branch_taken) {
          goto L_08B3F27C;
      }
      goto L_08B3F23C;
    }
L_08B3F23C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(260)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(264)));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B3F25C;
      }
      goto L_08B3F250;
    }
L_08B3F250:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(24));
    goto L_08B3F254;
L_08B3F254:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08B3F254;
      }
      goto L_08B3F25C;
    }
L_08B3F25C:
    if (ctx.gpr[21] == 0u) {
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(224));
        goto L_08B3F280;
    }
    goto L_08B3F264;
L_08B3F264:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(224));
        goto L_08B3F280;
    }
    goto L_08B3F26C;
L_08B3F26C:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(224));
        goto L_08B3F280;
    }
    goto L_08B3F274;
L_08B3F274:
    aot_gpr_31 = (0x08B3F27Cu);
    // nop
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F27Cu) goto L_08B3F27C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F27C:
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(224));
    goto L_08B3F280;
L_08B3F280:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(248));
      if (branch_taken) {
          goto L_08B3F2A8;
      }
      goto L_08B3F288;
    }
L_08B3F288:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B3F2A8;
      }
      goto L_08B3F290;
    }
L_08B3F290:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(248)));
      if (branch_taken) {
          goto L_08B3F2A8;
      }
      goto L_08B3F298;
    }
L_08B3F298:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F2A8;
      }
      goto L_08B3F2A0;
    }
L_08B3F2A0:
    aot_gpr_31 = (0x08B3F2A8u);
    // nop
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F2A8u) goto L_08B3F2A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F2A8:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F318;
      }
      goto L_08B3F2B0;
    }
L_08B3F2B0:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(212)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B3F2F4;
      }
      goto L_08B3F2C0;
    }
L_08B3F2C0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08B3F2E8;
      }
      goto L_08B3F2C8;
    }
L_08B3F2C8:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B3F2E8;
      }
      goto L_08B3F2D0;
    }
L_08B3F2D0:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08B3F2E8;
      }
      goto L_08B3F2D8;
    }
L_08B3F2D8:
    if (aot_gpr_4 == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(36));
        goto L_08B3F2EC;
    }
    goto L_08B3F2E0;
L_08B3F2E0:
    aot_gpr_31 = (0x08B3F2E8u);
    // nop
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F2E8u) goto L_08B3F2E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F2E8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(36));
    goto L_08B3F2EC;
L_08B3F2EC:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08B3F2C0;
      }
      goto L_08B3F2F4;
    }
L_08B3F2F4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F318;
      }
      goto L_08B3F2FC;
    }
L_08B3F2FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F318;
      }
      goto L_08B3F308;
    }
L_08B3F308:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F318;
      }
      goto L_08B3F310;
    }
L_08B3F310:
    aot_gpr_31 = (0x08B3F318u);
    // nop
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F318u) goto L_08B3F318;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F318:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F338;
      }
      goto L_08B3F320;
    }
L_08B3F320:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(196)));
      if (branch_taken) {
          goto L_08B3F338;
      }
      goto L_08B3F328;
    }
L_08B3F328:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F338;
      }
      goto L_08B3F330;
    }
L_08B3F330:
    aot_gpr_31 = (0x08B3F338u);
    // nop
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F338u) goto L_08B3F338;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F338:
    if (ctx.gpr[30] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
        goto L_08B3F35C;
    }
    goto L_08B3F340;
L_08B3F340:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(184)));
      if (branch_taken) {
          goto L_08B3F358;
      }
      goto L_08B3F348;
    }
L_08B3F348:
    if (aot_gpr_4 == 0u) {
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
        goto L_08B3F35C;
    }
    goto L_08B3F350;
L_08B3F350:
    aot_gpr_31 = (0x08B3F358u);
    // nop
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F358u) goto L_08B3F358;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F358:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    goto L_08B3F35C;
L_08B3F35C:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B3F368u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 486u, 0x08AC5AE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F368u) goto L_08B3F368;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F368:
    aot_gpr_4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F37C;
      }
      goto L_08B3F374;
    }
L_08B3F374:
    aot_gpr_31 = (0x08B3F37Cu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F37Cu) goto L_08B3F37C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F37C:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      ctx.gpr[30] = aot_run_words[8];
      aot_gpr_31 = aot_run_words[9];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F3AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08B3F3CCu);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F3CCu) goto L_08B3F3CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F3CC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F3D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(272)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(273)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F408;
      }
      goto L_08B3F3F8;
    }
L_08B3F3F8:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(273), static_cast<std::uint8_t>(aot_gpr_5));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(273)));
      if (branch_taken) {
          goto L_08B3F410;
      }
      goto L_08B3F408;
    }
L_08B3F408:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(273), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(273)));
    goto L_08B3F410;
L_08B3F410:
    aot_gpr_31 = (0x08B3F418u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 571u, 0x08AC61E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F418u) goto L_08B3F418;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F418:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F424:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(273)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B3F448;
      }
      goto L_08B3F438;
    }
L_08B3F438:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(273), static_cast<std::uint8_t>(aot_gpr_5));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(273)));
      if (branch_taken) {
          goto L_08B3F458;
      }
      goto L_08B3F448;
    }
L_08B3F448:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(272)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(273), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(273)));
    goto L_08B3F458;
L_08B3F458:
    aot_gpr_31 = (0x08B3F460u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 571u, 0x08AC61E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F460u) goto L_08B3F460;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F460:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F46C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08B3F48Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F48Cu) goto L_08B3F48C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F48C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(150)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B3F4B4;
      }
      goto L_08B3F49C;
    }
L_08B3F49C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B3F5AC;
      }
      goto L_08B3F4A4;
    }
L_08B3F4A4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
      if (branch_taken) {
          goto L_08B3F4CC;
      }
      goto L_08B3F4AC;
    }
L_08B3F4AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F504;
      }
      goto L_08B3F4B4;
    }
L_08B3F4B4:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B3F53C;
      }
      goto L_08B3F4BC;
    }
L_08B3F4BC:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F578;
      }
      goto L_08B3F4C4;
    }
L_08B3F4C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F5AC;
      }
      goto L_08B3F4CC;
    }
L_08B3F4CC:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F4E0;
      }
      goto L_08B3F4D4;
    }
L_08B3F4D4:
    aot_gpr_31 = (0x08B3F4DCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F4DCu) goto L_08B3F4DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F4DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08B3F4E0;
L_08B3F4E0:
    aot_gpr_31 = (0x08B3F4E8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 646u, 0x089C6DFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F4E8u) goto L_08B3F4E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F4E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F4F8;
      }
      goto L_08B3F4F0;
    }
L_08B3F4F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B3F4FC;
      }
      goto L_08B3F4F8;
    }
L_08B3F4F8:
    ctx.gpr[17] = (0u | 4u);
    goto L_08B3F4FC;
L_08B3F4FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F5AC;
      }
      goto L_08B3F504;
    }
L_08B3F504:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F518;
      }
      goto L_08B3F50C;
    }
L_08B3F50C:
    aot_gpr_31 = (0x08B3F514u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F514u) goto L_08B3F514;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F514:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08B3F518;
L_08B3F518:
    aot_gpr_31 = (0x08B3F520u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 646u, 0x089C6DFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F520u) goto L_08B3F520;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F520:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F530;
      }
      goto L_08B3F528;
    }
L_08B3F528:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08B3F534;
      }
      goto L_08B3F530;
    }
L_08B3F530:
    ctx.gpr[17] = (0u | 5u);
    goto L_08B3F534;
L_08B3F534:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F5AC;
      }
      goto L_08B3F53C;
    }
L_08B3F53C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F554;
      }
      goto L_08B3F548;
    }
L_08B3F548:
    aot_gpr_31 = (0x08B3F550u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F550u) goto L_08B3F550;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F550:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08B3F554;
L_08B3F554:
    aot_gpr_31 = (0x08B3F55Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 646u, 0x089C6DFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F55Cu) goto L_08B3F55C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F55C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F56C;
      }
      goto L_08B3F564;
    }
L_08B3F564:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_08B3F570;
      }
      goto L_08B3F56C;
    }
L_08B3F56C:
    ctx.gpr[17] = (0u | 6u);
    goto L_08B3F570;
L_08B3F570:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F5AC;
      }
      goto L_08B3F578;
    }
L_08B3F578:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F590;
      }
      goto L_08B3F584;
    }
L_08B3F584:
    aot_gpr_31 = (0x08B3F58Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F58Cu) goto L_08B3F58C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F58C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08B3F590;
L_08B3F590:
    aot_gpr_31 = (0x08B3F598u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 646u, 0x089C6DFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F598u) goto L_08B3F598;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F598:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F5A8;
      }
      goto L_08B3F5A0;
    }
L_08B3F5A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 3u);
      if (branch_taken) {
          goto L_08B3F5AC;
      }
      goto L_08B3F5A8;
    }
L_08B3F5A8:
    ctx.gpr[17] = (0u | 7u);
    goto L_08B3F5AC;
L_08B3F5AC:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(273), static_cast<std::uint8_t>(ctx.gpr[17]));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F5C4:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F5CC:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F5D4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 36u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08B3F5FCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 640u, 0x08AAEFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F5FCu) goto L_08B3F5FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F5FC:
    aot_gpr_31 = (0x08B3F604u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F604u) goto L_08B3F604;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F604:
    aot_gpr_31 = (0x08B3F60Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 632u, 0x08AAEF5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F60Cu) goto L_08B3F60C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F60C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr_31 = (0x08B3F618u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F618u) goto L_08B3F618;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F618:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (ctx.gpr[19] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B3F684;
      }
      goto L_08B3F63C;
    }
L_08B3F63C:
    ctx.gpr[17] = (0u | 0u);
    goto L_08B3F640;
L_08B3F640:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08B3F654u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F654u) goto L_08B3F654;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F654:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (ctx.gpr[19] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08B3F640;
      }
      goto L_08B3F684;
    }
L_08B3F684:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(248)));
    aot_gpr_31 = (0x08B3F690u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F690u) goto L_08B3F690;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F690:
    aot_gpr_31 = (0x08B3F698u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), ctx.gpr[2]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 642u, 0x08AAEFE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F698u) goto L_08B3F698;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F698:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F6B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 36u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_7);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[10]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[9] & 255u);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_run_words); }
    ctx.gpr[17] = (ctx.lo);
    aot_gpr_7 = (ctx.gpr[17] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B3F710;
      }
      goto L_08B3F704;
    }
L_08B3F704:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_7);
      if (branch_taken) {
          goto L_08B3F71C;
      }
      goto L_08B3F710;
    }
L_08B3F710:
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_7);
    goto L_08B3F71C;
L_08B3F71C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08B3F780;
      }
      goto L_08B3F724;
    }
L_08B3F724:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[17] << 5u);
    aot_gpr_6 = (ctx.gpr[17] << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_31 = (0x08B3F744u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F744u) goto L_08B3F744;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F744:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08B3F780;
      }
      goto L_08B3F75C;
    }
L_08B3F75C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_31 = (0x08B3F770u);
    aot_gpr_4 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F770u) goto L_08B3F770;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F770:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    goto L_08B3F780;
L_08B3F780:
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = aot_gpr_7 == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B3F804;
      }
      goto L_08B3F790;
    }
L_08B3F790:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(36));
        goto L_08B3F7FC;
    }
    goto L_08B3F79C;
L_08B3F79C:
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_7);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (ctx.gpr[8] + static_cast<std::uint32_t>(24));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_7 + static_cast<std::uint32_t>(24));
    aot_gpr_31 = (0x08B3F7E8u);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 143u, 0x08B6CC70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F7E8u) goto L_08B3F7E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F7E8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(36));
    goto L_08B3F7FC;
L_08B3F7FC:
    { const bool branch_taken = aot_gpr_7 != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08B3F790;
      }
      goto L_08B3F804;
    }
L_08B3F804:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = aot_gpr_7 != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08B3F878;
      }
      goto L_08B3F814;
    }
L_08B3F814:
    aot_gpr_7 = (ctx.gpr[19] | 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F86C;
      }
      goto L_08B3F820;
    }
L_08B3F820:
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(24));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_7 + static_cast<std::uint32_t>(24));
    aot_gpr_31 = (0x08B3F864u);
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(20), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 143u, 0x08B6CC70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F864u) goto L_08B3F864;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F864:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    goto L_08B3F86C;
L_08B3F86C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(36));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B3F904;
      }
      goto L_08B3F878;
    }
L_08B3F878:
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B3F900;
      }
      goto L_08B3F880;
    }
L_08B3F880:
    ctx.gpr[8] = (aot_gpr_6 + static_cast<std::uint32_t>(24));
    goto L_08B3F884;
L_08B3F884:
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[9] == 0u) {
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
        goto L_08B3F8F8;
    }
    goto L_08B3F890;
L_08B3F890:
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (ctx.gpr[9] + static_cast<std::uint32_t>(24));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (ctx.gpr[8] | 0u);
    aot_gpr_31 = (0x08B3F8E0u);
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(20), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 143u, 0x08B6CC70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F8E0u) goto L_08B3F8E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F8E0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    goto L_08B3F8F8;
L_08B3F8F8:
    { const bool branch_taken = aot_gpr_7 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08B3F884;
      }
      goto L_08B3F900;
    }
L_08B3F900:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B3F904;
L_08B3F904:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F984;
      }
      goto L_08B3F90C;
    }
L_08B3F90C:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B3F984;
      }
      goto L_08B3F91C;
    }
L_08B3F91C:
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_7 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B3F974;
      }
      goto L_08B3F928;
    }
L_08B3F928:
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(24));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(16), aot_gpr_5);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_7 + static_cast<std::uint32_t>(24));
    aot_gpr_31 = (0x08B3F96Cu);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 143u, 0x08B6CC70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F96Cu) goto L_08B3F96C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F96C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    goto L_08B3F974;
L_08B3F974:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(36));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08B3F91C;
      }
      goto L_08B3F980;
    }
L_08B3F980:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B3F984;
L_08B3F984:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B3F9CC;
      }
      goto L_08B3F994;
    }
L_08B3F994:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08B3F9BC;
      }
      goto L_08B3F99C;
    }
L_08B3F99C:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B3F9BC;
      }
      goto L_08B3F9A4;
    }
L_08B3F9A4:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08B3F9BC;
      }
      goto L_08B3F9AC;
    }
L_08B3F9AC:
    if (aot_gpr_4 == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(36));
        goto L_08B3F9C0;
    }
    goto L_08B3F9B4;
L_08B3F9B4:
    aot_gpr_31 = (0x08B3F9BCu);
    // nop
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F9BCu) goto L_08B3F9BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F9BC:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(36));
    goto L_08B3F9C0;
L_08B3F9C0:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08B3F994;
      }
      goto L_08B3F9C8;
    }
L_08B3F9C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08B3F9CC;
L_08B3F9CC:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3F9DC;
      }
      goto L_08B3F9D4;
    }
L_08B3F9D4:
    aot_gpr_31 = (0x08B3F9DCu);
    // nop
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3F9DCu) goto L_08B3F9DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3F9DC:
    aot_gpr_4 = (ctx.gpr[17] << 5u);
    aot_gpr_5 = (ctx.gpr[17] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), aot_gpr_4);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3FA1C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 24u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_7);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[10]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[9] & 255u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    ctx.gpr[17] = (ctx.lo);
    aot_gpr_7 = (ctx.gpr[17] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B3FA70;
      }
      goto L_08B3FA64;
    }
L_08B3FA64:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_7);
      if (branch_taken) {
          goto L_08B3FA7C;
      }
      goto L_08B3FA70;
    }
L_08B3FA70:
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_7);
    goto L_08B3FA7C;
L_08B3FA7C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08B3FAE0;
      }
      goto L_08B3FA84;
    }
L_08B3FA84:
    aot_gpr_7 = (ctx.gpr[17] << 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_4 = (aot_gpr_7 + aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_7 + aot_gpr_4);
    aot_gpr_31 = (0x08B3FAA4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3FAA4u) goto L_08B3FAA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3FAA4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      aot_gpr_7 = aot_run_words[2];
    }
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08B3FAE0;
      }
      goto L_08B3FABC;
    }
L_08B3FABC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_31 = (0x08B3FAD0u);
    aot_gpr_4 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3FAD0u) goto L_08B3FAD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3FAD0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    goto L_08B3FAE0;
L_08B3FAE0:
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = aot_gpr_7 == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B3FB34;
      }
      goto L_08B3FAF0;
    }
L_08B3FAF0:
    if (ctx.gpr[19] == 0u) {
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(24));
        goto L_08B3FB2C;
    }
    goto L_08B3FAF8;
L_08B3FAF8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_7 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[8] = aot_run_words[0];
      ctx.gpr[9] = aot_run_words[1];
      ctx.gpr[10] = aot_run_words[2];
    }
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(20)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[8], ctx.gpr[9], ctx.gpr[10]};
      aot_mem.aot_direct_store32_block(ctx.gpr[19] + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(24));
    goto L_08B3FB2C;
L_08B3FB2C:
    { const bool branch_taken = aot_gpr_7 != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08B3FAF0;
      }
      goto L_08B3FB34;
    }
L_08B3FB34:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = aot_gpr_7 != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08B3FB88;
      }
      goto L_08B3FB44;
    }
L_08B3FB44:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3FB7C;
      }
      goto L_08B3FB4C;
    }
L_08B3FB4C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_7 = aot_run_words[0];
      ctx.gpr[8] = aot_run_words[1];
      ctx.gpr[9] = aot_run_words[2];
    }
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_7, ctx.gpr[8], aot_gpr_6};
      aot_mem.aot_direct_store32_block(ctx.gpr[19] + static_cast<std::uint32_t>(12), aot_run_words); }
    goto L_08B3FB7C;
L_08B3FB7C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B3FBD8;
      }
      goto L_08B3FB88;
    }
L_08B3FB88:
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B3FBD4;
      }
      goto L_08B3FB90;
    }
L_08B3FB90:
    if (ctx.gpr[19] == 0u) {
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
        goto L_08B3FBCC;
    }
    goto L_08B3FB98;
L_08B3FB98:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[8] = aot_run_words[0];
      ctx.gpr[9] = aot_run_words[1];
      ctx.gpr[10] = aot_run_words[2];
    }
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[8], ctx.gpr[9], ctx.gpr[10]};
      aot_mem.aot_direct_store32_block(ctx.gpr[19] + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    goto L_08B3FBCC;
L_08B3FBCC:
    { const bool branch_taken = aot_gpr_7 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08B3FB90;
      }
      goto L_08B3FBD4;
    }
L_08B3FBD4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B3FBD8;
L_08B3FBD8:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3FC38;
      }
      goto L_08B3FBE0;
    }
L_08B3FBE0:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B3FC38;
      }
      goto L_08B3FBF0;
    }
L_08B3FBF0:
    if (ctx.gpr[19] == 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
        goto L_08B3FC2C;
    }
    goto L_08B3FBF8;
L_08B3FBF8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_6 = aot_run_words[0];
      aot_gpr_7 = aot_run_words[1];
      ctx.gpr[8] = aot_run_words[2];
    }
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_6, aot_gpr_7, ctx.gpr[8]};
      aot_mem.aot_direct_store32_block(ctx.gpr[19] + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    goto L_08B3FC2C;
L_08B3FC2C:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08B3FBF0;
      }
      goto L_08B3FC34;
    }
L_08B3FC34:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B3FC38;
L_08B3FC38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B3FC54;
      }
      goto L_08B3FC48;
    }
L_08B3FC48:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(24));
    goto L_08B3FC4C;
L_08B3FC4C:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08B3FC4C;
      }
      goto L_08B3FC54;
    }
L_08B3FC54:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3FC64;
      }
      goto L_08B3FC5C;
    }
L_08B3FC5C:
    aot_gpr_31 = (0x08B3FC64u);
    // nop
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3FC64u) goto L_08B3FC64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3FC64:
    aot_gpr_4 = (ctx.gpr[17] << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), aot_gpr_4);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3FC9C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3FCB0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-768));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(728), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(748), ctx.gpr[23]);
    ctx.gpr[23] = (0u | 24u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[8]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), ctx.gpr[16], ctx.gpr[17]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(696), aot_run_words); }
    { const std::uint32_t aot_run_words[4]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(732), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(752), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(756), aot_gpr_31);
    aot_gpr_31 = (0x08B3FD04u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 585u, 0x08AC62A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3FD04u) goto L_08B3FD04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3FD04:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x08B3FD14u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3FD14u) goto L_08B3FD14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3FD14:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[18] + static_cast<std::uint32_t>(12), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      aot_gpr_6 = aot_run_words[2];
    }
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_7);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_gpr_31 = (0x08B3FD58u);
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3FD58u) goto L_08B3FD58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3FD58:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 255u);
    aot_gpr_7 = (0u | 255u);
    aot_gpr_31 = (0x08B3FD70u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3FD70u) goto L_08B3FD70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3FD70:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B3FD7Cu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 121u, 0x08AF51FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3FD7Cu) goto L_08B3FD7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3FD7C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(273)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    aot_gpr_6 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(44));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(24));
    aot_gpr_31 = (0x08B3FDD0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 143u, 0x08B6CC70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3FDD0u) goto L_08B3FDD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3FDD0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x08B3FDE0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3FDE0u) goto L_08B3FDE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3FDE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_6 = (16128u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(56));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    aot_gpr_31 = (0x08B3FE40u);
    aot_fpr_14 = aot_fpr_12 + aot_fpr_14;
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3FE40u) goto L_08B3FE40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3FE40:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 255u);
    aot_gpr_7 = (0u | 255u);
    aot_gpr_31 = (0x08B3FE58u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3FE58u) goto L_08B3FE58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3FE58:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B3FE64u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 121u, 0x08AF51FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3FE64u) goto L_08B3FE64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3FE64:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(224)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(228)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(236)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(240)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(244)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_gpr_31 = (0x08B3FEA0u);
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(248));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 143u, 0x08B6CC70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3FEA0u) goto L_08B3FEA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3FEA0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x08B3FEB0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3FEB0u) goto L_08B3FEB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3FEB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(108));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x08B3FF14u);
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3FF14u) goto L_08B3FF14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3FF14:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 255u);
    aot_gpr_7 = (0u | 255u);
    aot_gpr_31 = (0x08B3FF2Cu);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3FF2Cu) goto L_08B3FF2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3FF2C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B3FF38u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 121u, 0x08AF51FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3FF38u) goto L_08B3FF38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3FF38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(264)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(260)));
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[17]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (ctx.gpr[21] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (17389u << 16u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 20u, 0x08B40190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B3FF5C;
    }
L_08B3FF5C:
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(148));
    aot_gpr_5 = (17391u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(660));
    aot_gpr_5 = (17287u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(676));
    aot_gpr_5 = (16672u << 16u);
    ctx.gpr[20] = (0u | 0u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_5);
    goto L_08B3FF90;
L_08B3FF90:
    aot_gpr_5 = (ctx.gpr[17] + ctx.gpr[20]);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_6 = aot_run_words[0];
      aot_gpr_7 = aot_run_words[1];
      ctx.gpr[8] = aot_run_words[2];
    }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), ctx.gpr[8]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_6, aot_gpr_7, aot_gpr_5};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(124)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(273)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    // nop
      if (branch_taken) {
          goto L_08B3FFE4;
      }
      goto L_08B3FFD4;
    }
L_08B3FFD4:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 19u, 0x08B40180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B3FFE4;
    }
L_08B3FFE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 5u, 0x08B4001Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B3FFF0;
L_08B3FFF0:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08B3FFFCu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3FFFCu) goto L_08B3FFFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3FFFC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B40000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0206(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0206_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_206(Runtime &runtime) {
    runtime.register_generated_unit(206u, 0x08B3C000u, 16384u, &recomp_unit_0206, &recomp_unit_0206_entry);
    runtime.register_function(0x08B3C000u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C010u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C030u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C06Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C07Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C0A8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C0B8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C0D0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C0E4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C0ECu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C0F8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C10Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C110u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C118u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C128u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C13Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C150u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C170u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C180u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C188u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C18Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C194u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C1A0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C1A8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C1ACu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C1BCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C1D0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C1DCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C1F8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C200u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C204u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C218u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C224u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C238u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C24Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C254u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C26Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C280u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C294u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C2A8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C2C8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C2DCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C2F0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C2F8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C2FCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C304u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C314u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C31Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C350u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C36Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C384u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C38Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C398u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C3A0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C3A8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C3BCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C410u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C41Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C43Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C444u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C44Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C460u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C468u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C470u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C484u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C48Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C494u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C4A0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C4ACu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C4B4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C4BCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C4CCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C4D4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C4E4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C4F0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C4FCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C50Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C518u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C524u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C52Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C534u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C53Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C544u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C554u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C560u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C568u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C578u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C5E8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C604u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C60Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C628u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C630u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C638u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C668u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C68Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C6A4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C6B4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C6C8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C6D0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C6D8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C6E0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C700u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C720u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C730u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C740u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C750u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C770u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C784u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C830u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C83Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C844u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C854u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C864u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C86Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C878u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C884u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C88Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C894u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C8A0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C8B0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C8C8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C8D8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C8E8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C8F0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C8FCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C908u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C910u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C918u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C920u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C934u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C944u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C94Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C958u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C964u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C96Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C974u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C978u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C988u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C998u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C9A0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C9ACu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C9B8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C9C0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C9C8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C9CCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C9DCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C9ECu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3C9F4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CA00u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CA0Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CA14u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CA1Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CA20u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CA30u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CA40u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CA48u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CA54u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CA60u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CA68u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CA70u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CA74u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CA84u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CA94u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CA9Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CAA8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CAB4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CABCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CAC4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CAC8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CAD8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CAE8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CAF0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CAFCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CB08u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CB10u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CB18u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CB20u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CB30u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CB40u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CB48u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CB54u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CB60u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CB68u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CB70u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CB78u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CB80u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CB8Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CB9Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CBA8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CBB0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CBC8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CBCCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CBD4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CBE0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CBF0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CBF8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CC00u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CC08u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CC18u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CC1Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CC24u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CC3Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CC44u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CC4Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CC58u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CC60u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CC74u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CC98u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CCA0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CCACu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CCBCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CCC8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CCD4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CCE0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CCECu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CCF4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CD04u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CD0Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CD28u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CD44u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CD4Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CD7Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CDA4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CDBCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CDC8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CDD0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CDE8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CDECu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CDF4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CE00u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CE14u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CE24u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CE30u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CE3Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CE58u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CE9Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CEA8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CEB4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CEBCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CED4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CF44u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CF64u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3CFFCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D00Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D02Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D040u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D050u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D060u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D06Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D074u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D084u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D08Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D09Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D0A4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D0B4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D0C4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D0D0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D0D8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D0E4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D0F4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D0FCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D108u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D118u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D120u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D12Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D13Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D144u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D150u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D160u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D168u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D174u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D184u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D18Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D198u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D258u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D3A4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D3BCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D3C4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D3CCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D3D8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D3ECu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D3F4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D3FCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D404u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D414u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D428u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D430u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D444u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D45Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D470u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D478u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D4A0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D4A8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D4D4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D4DCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D4E4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D4ECu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D4F8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D500u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D514u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D524u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D53Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D544u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D54Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D594u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D5C4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D5CCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D5F0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D5FCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D604u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D60Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D614u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D618u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D628u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D630u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D644u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D64Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D658u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D664u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D678u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D68Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D698u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D6A0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D6BCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D6D8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D704u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D720u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D740u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D750u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D764u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D770u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D77Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D788u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D790u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D794u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D79Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D7A8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D7B0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D7B4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D7BCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D7D8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D7E8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D7F0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D7F8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D804u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D840u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D85Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D868u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D870u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D87Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D88Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D894u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D89Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D8ACu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D8B4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D8BCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D8C8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D8D4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D8DCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D8E4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D8F0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D8FCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D904u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D910u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D91Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D928u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D930u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D938u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D940u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D948u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D95Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D964u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D974u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D980u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D994u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D99Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D9ACu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D9B8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D9C8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D9D8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D9E0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D9ECu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3D9F4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DA10u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DA24u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DA28u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DA3Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DA40u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DA4Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DA64u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DA6Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DA74u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DA7Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DA80u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DA88u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DA90u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DA98u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DAA0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DAC8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DB00u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DB0Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DB1Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DB24u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DB2Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DB34u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DB48u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DB50u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DB58u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DB60u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DB68u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DB70u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DB78u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DB84u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DB8Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DB9Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DBB0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DBB8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DBC4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DBD4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DBDCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DBE4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DBF4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DBFCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DC04u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DC10u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DC1Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DC24u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DC2Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DC34u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DC3Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DC40u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DC48u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DC68u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DC7Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DC98u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DCA4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DCB0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DCBCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DCC4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DCC8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DCD8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DCE8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DD10u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DD1Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DD30u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DD4Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DD54u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DD5Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DD70u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DD7Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DD8Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DD94u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DDA0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DDB0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DDB8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DDC0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DDD0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DDD8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DDE0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DDECu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DDF8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DE00u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DE08u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DE3Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DE48u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DE50u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DE60u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DE6Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DE88u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DE94u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DEC0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DED8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DEF8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DF00u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DF0Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DF14u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DF1Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DF24u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DF34u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DF40u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DF48u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DF50u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DF74u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DF9Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DFACu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DFDCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3DFFCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E008u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E014u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E01Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E028u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E030u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E044u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E058u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E060u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E06Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E078u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E084u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E08Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E09Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E0A4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E0C8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E0DCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E0E8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E10Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E114u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E118u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E13Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E150u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E17Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E188u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E1A0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E1A8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E1CCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E1D8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E1E0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E1E4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E1ECu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E1F4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E224u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E22Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E240u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E254u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E260u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E26Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E27Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E288u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E330u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E368u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E370u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E374u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E384u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E38Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E390u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E3A0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E3A8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E3B8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E3C0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E460u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E468u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E48Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E498u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E4DCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E5C0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E6A4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E720u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E724u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E780u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E7A4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E7B4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E7D4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E7F0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E800u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E830u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E874u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E89Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E8BCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E8E0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E8E8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E920u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E940u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E958u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E960u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E964u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E984u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E990u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E9A4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E9B4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E9BCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E9C4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E9D0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E9D8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3E9DCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EA08u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EA18u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EA2Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EA34u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EA5Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EA6Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EA74u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EA88u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EA8Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EAA0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EAA8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EABCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EAE4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EAF4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EB00u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EB10u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EB18u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EB38u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EB68u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EBA0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EBC0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EBD8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EBE0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EBE4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EC04u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EC10u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EC24u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EC34u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EC3Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EC44u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EC50u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EC58u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EC5Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EC88u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EC98u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3ECACu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3ECB4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3ECC0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3ECC8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3ECE0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3ECE4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3ECF8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3ED00u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3ED14u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3ED24u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3ED2Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3ED40u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3ED48u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3ED68u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3ED98u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EDA4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EDB4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EDC0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EDE0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EDE8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EDF0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EDF8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EE00u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EE14u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EE18u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EE1Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EE24u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EE28u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EE44u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EE5Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EE7Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EE8Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EEA4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EED4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EF2Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EF30u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EF6Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EF7Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EF84u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EF90u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EFA4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EFACu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EFBCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EFCCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EFD8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EFDCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3EFECu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F004u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F008u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F014u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F018u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F028u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F030u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F038u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F040u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F048u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F050u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F054u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F05Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F090u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F0C8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F0F8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F0FCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F118u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F11Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F15Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F168u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F16Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F178u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F180u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F184u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F1A4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F1B0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F1D8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F218u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F21Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F228u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F22Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F234u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F23Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F250u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F254u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F25Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F264u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F26Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F274u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F27Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F280u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F288u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F290u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F298u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F2A0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F2A8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F2B0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F2C0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F2C8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F2D0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F2D8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F2E0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F2E8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F2ECu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F2F4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F2FCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F308u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F310u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F318u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F320u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F328u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F330u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F338u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F340u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F348u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F350u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F358u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F35Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F368u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F374u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F37Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F3ACu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F3CCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F3D8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F3F8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F408u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F410u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F418u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F424u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F438u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F448u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F458u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F460u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F46Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F48Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F49Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F4A4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F4ACu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F4B4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F4BCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F4C4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F4CCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F4D4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F4DCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F4E0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F4E8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F4F0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F4F8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F4FCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F504u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F50Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F514u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F518u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F520u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F528u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F530u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F534u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F53Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F548u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F550u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F554u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F55Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F564u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F56Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F570u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F578u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F584u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F58Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F590u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F598u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F5A0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F5A8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F5ACu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F5C4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F5CCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F5D4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F5FCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F604u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F60Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F618u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F63Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F640u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F654u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F684u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F690u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F698u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F6B4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F704u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F710u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F71Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F724u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F744u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F75Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F770u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F780u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F790u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F79Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F7E8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F7FCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F804u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F814u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F820u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F864u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F86Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F878u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F880u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F884u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F890u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F8E0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F8F8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F900u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F904u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F90Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F91Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F928u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F96Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F974u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F980u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F984u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F994u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F99Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F9A4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F9ACu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F9B4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F9BCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F9C0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F9C8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F9CCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F9D4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3F9DCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FA1Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FA64u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FA70u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FA7Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FA84u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FAA4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FABCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FAD0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FAE0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FAF0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FAF8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FB2Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FB34u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FB44u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FB4Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FB7Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FB88u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FB90u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FB98u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FBCCu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FBD4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FBD8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FBE0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FBF0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FBF8u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FC2Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FC34u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FC38u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FC48u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FC4Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FC54u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FC5Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FC64u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FC9Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FCB0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FD04u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FD14u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FD58u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FD70u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FD7Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FDD0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FDE0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FE40u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FE58u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FE64u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FEA0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FEB0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FF14u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FF2Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FF38u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FF5Cu, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FF90u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FFD4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FFE4u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FFF0u, &recomp_unit_0206, "recomp_unit_0206");
    runtime.register_function(0x08B3FFFCu, &recomp_unit_0206, "recomp_unit_0206");
}
} // namespace psprecomp
