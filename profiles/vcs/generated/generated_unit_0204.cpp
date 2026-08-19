#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0204[4094] = {
    1, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 10, 0, 11, 12, 0, 13, 0, 0,
    14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 18, 0, 19, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0, 0, 0, 28, 0, 29, 0, 0, 0,
    0, 30, 0, 31, 32, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 35, 0, 36, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0,
    0, 46, 0, 47, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 55, 0, 56, 0, 0,
    0, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 65, 0, 66,
    0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 70, 71, 0, 72, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75,
    0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0,
    0, 82, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 89, 0, 0, 90, 91, 0, 92,
    0, 93, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 98, 0, 0, 99, 100, 0, 101, 0, 102, 103, 0, 0,
    104, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 109, 0, 0, 110, 111, 0, 112, 0, 113, 0, 114, 0,
    0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 118, 0, 0, 119, 120, 0, 121, 0, 122, 123, 0, 124, 0, 125, 0, 0, 0,
    0, 0, 126, 0, 0, 0, 127, 0, 0, 128, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134,
    0, 135, 0, 0, 0, 136, 137, 0, 138, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 141, 0, 0, 142, 143, 0, 0, 0, 144, 0, 0, 0, 145,
    0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 151, 0, 152, 0, 153, 0, 0, 0,
    154, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161,
    0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0,
    168, 0, 0, 0, 0, 169, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0,
    184, 0, 0, 185, 0, 0, 186, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 193, 0, 194, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 197, 0, 198, 199, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0,
    0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0,
    0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 218, 0,
    0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0,
    223, 0, 0, 224, 0, 225, 226, 0, 0, 0, 0, 227, 0, 228, 0, 0, 229, 0, 0, 0, 230, 0, 231, 232, 0, 0, 0, 0, 0, 0, 233, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 237,
    0, 238, 0, 0, 0, 0, 239, 0, 240, 241, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0,
    248, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0,
    0, 258, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 261, 0, 262, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0,
    0, 0, 268, 269, 0, 0, 0, 270, 0, 0, 271, 0, 272, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 279, 0, 0, 0, 0, 280, 0, 281, 0, 0, 282,
    0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0,
    0, 0, 287, 0, 0, 288, 0, 289, 0, 290, 0, 0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0,
    294, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 307, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 313, 0, 314, 0, 0,
    0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0,
    318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 326, 327, 0, 328, 0,
    0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 331, 0, 332, 0, 333, 0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 0, 339, 0, 0, 0, 340, 0,
    0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 347, 0, 348,
    0, 349, 0, 350, 0, 0, 351, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0,
    0, 0, 0, 356, 0, 357, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 362, 0, 363, 0, 0, 364, 0, 0, 0,
    365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0, 371, 0, 0,
    0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 375, 0, 376, 0, 377, 0, 378, 0, 379, 0, 380, 0, 0, 0, 381, 0, 0, 0, 382,
    0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 388, 0, 0, 389, 0, 0,
    0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 395, 0, 396, 0,
    0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 399, 0, 400, 0, 401, 0, 402, 0, 403, 0, 404, 0, 0, 405, 0, 0, 0, 406, 0, 407,
    0, 408, 0, 409, 0, 410, 0, 411, 0, 412, 0, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0,
    0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 422, 0, 423, 0, 424, 0, 0, 425, 0, 0,
    0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 432, 0,
    0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0,
    438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 446,
    0, 0, 447, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 0, 453, 0, 0, 454, 0, 0, 0, 455, 0,
    0, 456, 0, 0, 0, 457, 0, 0, 458, 0, 0, 459, 0, 0, 460, 0, 0, 0, 461, 0, 0, 462, 0, 0, 463, 0, 0, 464, 0, 0, 0, 465,
    0, 0, 466, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 469, 0, 0, 470, 0, 0, 471, 0, 0, 472, 0, 0, 0, 473, 0, 0, 474, 0, 475,
    0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 478, 479, 0, 480, 0, 481, 0, 0, 482, 0, 483, 0, 484, 0, 0,
    485, 0, 0, 486, 0, 0, 0, 487, 488, 0, 0, 0, 0, 0, 0, 489, 0, 490, 0, 491, 0, 0, 492, 0, 0, 493, 0, 0, 0, 494, 0, 495,
    0, 0, 496, 0, 497, 0, 498, 0, 0, 499, 0, 0, 500, 0, 0, 0, 0, 501, 0, 502, 0, 0, 503, 0, 504, 0, 505, 0, 0, 506, 0, 0,
    507, 0, 0, 0, 508, 509, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 512, 0, 0, 513, 0, 0, 514, 0, 0, 0, 515, 0, 516, 0, 0, 517,
    0, 518, 0, 519, 0, 0, 520, 0, 0, 521, 0, 0, 0, 522, 0, 523, 0, 0, 524, 0, 525, 0, 526, 0, 0, 527, 0, 0, 528, 0, 0, 0,
    529, 0, 530, 0, 0, 531, 0, 0, 532, 0, 0, 533, 0, 0, 0, 0, 534, 0, 535, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0, 542,
    0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 547, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 550,
    0, 0, 0, 551, 0, 0, 552, 0, 0, 0, 553, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 556, 0, 557, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 562, 0, 0,
    563, 0, 0, 564, 0, 0, 565, 0, 0, 0, 566, 0, 0, 567, 0, 0, 568, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 572, 0,
    0, 0, 0, 0, 573, 0, 0, 574, 0, 0, 575, 0, 0, 576, 0, 0, 577, 0, 0, 0, 578, 0, 0, 579, 0, 580, 0, 581, 582, 0, 0, 0,
    0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 0, 586, 0, 587, 0, 588, 0, 0, 589, 0, 0, 0, 590, 0, 591,
    0, 592, 0, 0, 593, 0, 594, 0, 0, 0, 0, 595, 0, 596, 0, 0, 0, 0, 597, 0, 598, 0, 0, 599, 0, 0, 0, 600, 0, 601, 0, 0,
    602, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 606,
    0, 0, 0, 0, 0, 0, 607, 608, 0, 609, 0, 0, 0, 0, 610, 0, 0, 611, 0, 0, 612, 0, 0, 613, 0, 614, 0, 615, 0, 0, 0, 616,
    0, 0, 617, 0, 618, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0, 0, 621, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 0, 624, 0, 0, 0,
    625, 0, 0, 626, 0, 0, 0, 0, 0, 627, 0, 0, 628, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 631, 0, 632,
    0, 633, 0, 634, 0, 635, 0, 636, 0, 637, 0, 638, 0, 639, 0, 640, 0, 641, 0, 642, 0, 643, 0, 644, 0, 645, 0, 646, 0, 647, 0, 648,
    0, 649, 0, 650, 0, 651, 0, 652, 0, 653, 0, 654, 0, 655, 0, 656, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 658, 0, 0, 659, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 662, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0,
    0, 0, 664, 0, 0, 665, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0, 670, 0, 671, 0,
    672, 0, 673, 0, 0, 0, 674, 0, 0, 675, 0, 0, 0, 676, 0, 0, 677, 0, 0, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 680, 0,
    0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 684, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 688, 0, 0, 0, 0, 0, 689, 0,
    690, 0, 0, 0, 0, 691, 0, 0, 692, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 695,
    0, 0, 0, 0, 0, 696, 0, 697, 0, 698, 0, 699, 0, 700, 0, 701, 0, 702, 0, 703, 0, 704, 0, 705, 0, 706, 0, 707, 0, 708, 0, 709,
    0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 712, 0, 713, 0, 714, 0, 715, 0, 0, 0,
    716, 0, 717, 0, 718, 0, 719, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 722, 0, 723, 0, 724, 0, 0, 0,
    0, 0, 0, 0, 0, 725, 0, 726, 0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 729, 0, 0, 0, 0, 730, 0, 0, 0, 0, 731, 0, 0, 0,
    0, 0, 732, 0, 733, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 735, 0, 736, 0, 737, 0, 738, 0, 0, 739, 0, 0, 0, 0, 740, 0, 0,
    0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 743, 0, 744, 0, 745, 0, 746, 0, 0, 747, 0, 0, 0, 748, 0, 0,
    0, 749, 0, 0, 750, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 754, 0, 755,
    0, 756, 0, 757, 0, 758, 0, 0, 759, 0, 760, 0, 0, 0, 0, 0, 761, 0, 762, 0, 763, 0, 764, 0, 765, 0, 766, 0, 767, 0, 768, 0,
    769, 0, 770, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 773, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 775, 0, 776,
    0, 0, 777, 0, 778, 0, 0, 0, 0, 779, 0, 780, 0, 781, 0, 782, 0, 0, 783, 0, 784, 0, 785, 0, 786, 0, 787, 0, 788, 0, 0, 0,
    0, 789, 0, 0, 0, 0, 0, 790, 0, 791, 0, 792, 0, 0, 793, 0, 794, 0, 0, 0, 795, 0, 796, 0, 0, 0, 797, 0, 798, 0, 0, 0,
    799, 0, 800, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 802, 803, 0, 804, 0, 805, 0, 806, 0, 0, 807, 0, 808, 0, 0, 0, 0, 0, 809,
    0, 810, 0, 811, 0, 812, 0, 813, 0, 814, 0, 815, 0, 816, 0, 817, 0, 818, 0, 819, 0, 820, 0, 821, 0, 822, 0, 823, 0, 824, 0, 825,
    0, 0, 0, 0, 0, 826, 0, 827, 0, 828, 0, 829, 0, 830, 0, 831, 0, 832, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 834, 0, 835,
    0, 0, 836, 0, 837, 0, 0, 838, 0, 839, 0, 0, 840, 0, 841, 0, 0, 842, 0, 843, 0, 0, 844, 0, 845, 0, 0, 846, 847, 0, 0, 848,
    0, 0, 849, 0, 850, 0, 0, 0, 851, 0, 852, 0, 0, 0, 853, 0, 854, 0, 0, 0, 855, 0, 856, 0, 0, 0, 857, 858, 0, 859, 0, 860,
    0, 861, 0, 862, 863, 0, 0, 864, 0, 865, 0, 0, 866, 0, 867, 0, 868, 0, 0, 869, 0, 0, 870, 0, 871, 872, 0, 873, 0, 0, 0, 874,
    0, 0, 0, 875, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 876, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 877, 878, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 879, 880, 0, 0, 0, 881, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 882, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 883, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 884, 0, 0, 0, 0, 0, 885, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 886, 0, 0, 0, 887, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 888, 0, 0, 0, 0, 0, 889, 0, 890, 0, 0, 891, 0, 892, 0, 0, 893,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 894, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 895, 0,
    896, 0, 897, 0, 0, 0, 898, 0, 0, 0, 0, 899, 0, 900, 0, 0, 0, 0, 901, 0, 902, 0, 903, 0, 904, 0, 905, 0, 0, 0, 906, 0,
    0, 0, 0, 907, 0, 908, 0, 0, 0, 0, 909, 0, 910, 0, 911, 0, 912, 0, 0, 0, 913, 0, 0, 0, 0, 914, 0, 915, 0, 0, 0, 0,
    916, 0, 0, 917, 0, 0, 0, 0, 0, 0, 0, 0, 0, 918, 0, 919, 0, 0, 920, 0, 0, 0, 921, 0, 0, 922, 0, 0, 0, 0, 0, 0,
    0, 923, 0, 0, 0, 0, 924, 0, 0, 0, 0, 0, 0, 0, 0, 925, 0, 926, 0, 927, 0, 928, 0, 929, 0, 930, 931, 0, 932, 0, 933, 0,
    934, 0, 935, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 936, 0, 0, 0, 0, 0, 0, 0, 937, 0, 938, 0, 939,
};
void recomp_unit_0204_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,16,6,29,31 fprs=12,13,14,15 gpr_occ=3623 fpr_occ=1025 gpr_total=4792 fpr_total=1304
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_15 = ctx.fpr[15];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[16] = aot_gpr_16; ctx.gpr[6] = aot_gpr_6; ctx.gpr[29] = aot_gpr_29; ctx.gpr[31] = aot_gpr_31; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[15] = aot_fpr_15; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_31 = ctx.gpr[31]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_15 = ctx.fpr[15]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B34004u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0204[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B34004;
    case 2u: goto L_08B3401C;
    case 3u: goto L_08B34020;
    case 4u: goto L_08B34050;
    case 5u: goto L_08B34098;
    case 6u: goto L_08B340B0;
    case 7u: goto L_08B340B8;
    case 8u: goto L_08B340C8;
    case 9u: goto L_08B340D0;
    case 10u: goto L_08B340E4;
    case 11u: goto L_08B340EC;
    case 12u: goto L_08B340F0;
    case 13u: goto L_08B340F8;
    case 14u: goto L_08B34104;
    case 15u: goto L_08B3410C;
    case 16u: goto L_08B34138;
    case 17u: goto L_08B34168;
    case 18u: goto L_08B34190;
    case 19u: goto L_08B34198;
    case 20u: goto L_08B341A0;
    case 21u: goto L_08B341B4;
    case 22u: goto L_08B341CC;
    case 23u: goto L_08B341D0;
    case 24u: goto L_08B34200;
    case 25u: goto L_08B34244;
    case 26u: goto L_08B34254;
    case 27u: goto L_08B3425C;
    case 28u: goto L_08B3426C;
    case 29u: goto L_08B34274;
    case 30u: goto L_08B34288;
    case 31u: goto L_08B34290;
    case 32u: goto L_08B34294;
    case 33u: goto L_08B342A0;
    case 34u: goto L_08B342A8;
    case 35u: goto L_08B342C0;
    case 36u: goto L_08B342C8;
    case 37u: goto L_08B342CC;
    case 38u: goto L_08B342E0;
    case 39u: goto L_08B3430C;
    case 40u: goto L_08B34338;
    case 41u: goto L_08B34340;
    case 42u: goto L_08B34350;
    case 43u: goto L_08B34358;
    case 44u: goto L_08B3436C;
    case 45u: goto L_08B34374;
    case 46u: goto L_08B34388;
    case 47u: goto L_08B34390;
    case 48u: goto L_08B3439C;
    case 49u: goto L_08B343A4;
    case 50u: goto L_08B343BC;
    case 51u: goto L_08B343C4;
    case 52u: goto L_08B343D4;
    case 53u: goto L_08B343DC;
    case 54u: goto L_08B343E4;
    case 55u: goto L_08B343F0;
    case 56u: goto L_08B343F8;
    case 57u: goto L_08B34414;
    case 58u: goto L_08B3441C;
    case 59u: goto L_08B34428;
    case 60u: goto L_08B34444;
    case 61u: goto L_08B3445C;
    case 62u: goto L_08B34468;
    case 63u: goto L_08B34484;
    case 64u: goto L_08B344F4;
    case 65u: goto L_08B344F8;
    case 66u: goto L_08B34500;
    case 67u: goto L_08B34508;
    case 68u: goto L_08B34514;
    case 69u: goto L_08B34530;
    case 70u: goto L_08B345A0;
    case 71u: goto L_08B345A4;
    case 72u: goto L_08B345AC;
    case 73u: goto L_08B345B4;
    case 74u: goto L_08B345C4;
    case 75u: goto L_08B34680;
    case 76u: goto L_08B34698;
    case 77u: goto L_08B346B4;
    case 78u: goto L_08B346BC;
    case 79u: goto L_08B346C4;
    case 80u: goto L_08B346D4;
    case 81u: goto L_08B346FC;
    case 82u: goto L_08B34708;
    case 83u: goto L_08B3470C;
    case 84u: goto L_08B34718;
    case 85u: goto L_08B34724;
    case 86u: goto L_08B34730;
    case 87u: goto L_08B34754;
    case 88u: goto L_08B3475C;
    case 89u: goto L_08B34768;
    case 90u: goto L_08B34774;
    case 91u: goto L_08B34778;
    case 92u: goto L_08B34780;
    case 93u: goto L_08B34788;
    case 94u: goto L_08B34790;
    case 95u: goto L_08B3479C;
    case 96u: goto L_08B347C0;
    case 97u: goto L_08B347C8;
    case 98u: goto L_08B347D4;
    case 99u: goto L_08B347E0;
    case 100u: goto L_08B347E4;
    case 101u: goto L_08B347EC;
    case 102u: goto L_08B347F4;
    case 103u: goto L_08B347F8;
    case 104u: goto L_08B34804;
    case 105u: goto L_08B34810;
    case 106u: goto L_08B3481C;
    case 107u: goto L_08B34840;
    case 108u: goto L_08B34848;
    case 109u: goto L_08B34854;
    case 110u: goto L_08B34860;
    case 111u: goto L_08B34864;
    case 112u: goto L_08B3486C;
    case 113u: goto L_08B34874;
    case 114u: goto L_08B3487C;
    case 115u: goto L_08B34888;
    case 116u: goto L_08B348AC;
    case 117u: goto L_08B348B4;
    case 118u: goto L_08B348C0;
    case 119u: goto L_08B348CC;
    case 120u: goto L_08B348D0;
    case 121u: goto L_08B348D8;
    case 122u: goto L_08B348E0;
    case 123u: goto L_08B348E4;
    case 124u: goto L_08B348EC;
    case 125u: goto L_08B348F4;
    case 126u: goto L_08B3490C;
    case 127u: goto L_08B3491C;
    case 128u: goto L_08B34928;
    case 129u: goto L_08B3492C;
    case 130u: goto L_08B3493C;
    case 131u: goto L_08B3494C;
    case 132u: goto L_08B34958;
    case 133u: goto L_08B34978;
    case 134u: goto L_08B34980;
    case 135u: goto L_08B34988;
    case 136u: goto L_08B34998;
    case 137u: goto L_08B3499C;
    case 138u: goto L_08B349A4;
    case 139u: goto L_08B349B8;
    case 140u: goto L_08B349C0;
    case 141u: goto L_08B349D0;
    case 142u: goto L_08B349DC;
    case 143u: goto L_08B349E0;
    case 144u: goto L_08B349F0;
    case 145u: goto L_08B34A00;
    case 146u: goto L_08B34A0C;
    case 147u: goto L_08B34A38;
    case 148u: goto L_08B34A3C;
    case 149u: goto L_08B34A4C;
    case 150u: goto L_08B34A5C;
    case 151u: goto L_08B34A64;
    case 152u: goto L_08B34A6C;
    case 153u: goto L_08B34A74;
    case 154u: goto L_08B34A84;
    case 155u: goto L_08B34A88;
    case 156u: goto L_08B34A90;
    case 157u: goto L_08B34AB0;
    case 158u: goto L_08B34ACC;
    case 159u: goto L_08B34AD8;
    case 160u: goto L_08B34AF4;
    case 161u: goto L_08B34B00;
    case 162u: goto L_08B34B0C;
    case 163u: goto L_08B34B8C;
    case 164u: goto L_08B34BA0;
    case 165u: goto L_08B34BB4;
    case 166u: goto L_08B34BBC;
    case 167u: goto L_08B34BF0;
    case 168u: goto L_08B34C04;
    case 169u: goto L_08B34C18;
    case 170u: goto L_08B34C20;
    case 171u: goto L_08B34C28;
    case 172u: goto L_08B34C30;
    case 173u: goto L_08B34C5C;
    case 174u: goto L_08B34C6C;
    case 175u: goto L_08B34C94;
    case 176u: goto L_08B34CA4;
    case 177u: goto L_08B34CB0;
    case 178u: goto L_08B34CBC;
    case 179u: goto L_08B34CC8;
    case 180u: goto L_08B34CD4;
    case 181u: goto L_08B34CE0;
    case 182u: goto L_08B34CEC;
    case 183u: goto L_08B34CF8;
    case 184u: goto L_08B34D04;
    case 185u: goto L_08B34D10;
    case 186u: goto L_08B34D1C;
    case 187u: goto L_08B34D24;
    case 188u: goto L_08B34D2C;
    case 189u: goto L_08B34D54;
    case 190u: goto L_08B34D9C;
    case 191u: goto L_08B34DB0;
    case 192u: goto L_08B34DCC;
    case 193u: goto L_08B34E0C;
    case 194u: goto L_08B34E14;
    case 195u: goto L_08B34E24;
    case 196u: goto L_08B34E2C;
    case 197u: goto L_08B34E40;
    case 198u: goto L_08B34E48;
    case 199u: goto L_08B34E4C;
    case 200u: goto L_08B34E58;
    case 201u: goto L_08B34E70;
    case 202u: goto L_08B34E78;
    case 203u: goto L_08B34E88;
    case 204u: goto L_08B34E98;
    case 205u: goto L_08B34EA8;
    case 206u: goto L_08B34EB4;
    case 207u: goto L_08B34EC4;
    case 208u: goto L_08B34ECC;
    case 209u: goto L_08B34EE0;
    case 210u: goto L_08B34EEC;
    case 211u: goto L_08B34EF8;
    case 212u: goto L_08B34F1C;
    case 213u: goto L_08B34F28;
    case 214u: goto L_08B34F30;
    case 215u: goto L_08B34F4C;
    case 216u: goto L_08B34F60;
    case 217u: goto L_08B34F6C;
    case 218u: goto L_08B34F7C;
    case 219u: goto L_08B34F90;
    case 220u: goto L_08B34FC4;
    case 221u: goto L_08B34FF0;
    case 222u: goto L_08B34FFC;
    case 223u: goto L_08B35004;
    case 224u: goto L_08B35010;
    case 225u: goto L_08B35018;
    case 226u: goto L_08B3501C;
    case 227u: goto L_08B35030;
    case 228u: goto L_08B35038;
    case 229u: goto L_08B35044;
    case 230u: goto L_08B35054;
    case 231u: goto L_08B3505C;
    case 232u: goto L_08B35060;
    case 233u: goto L_08B3507C;
    case 234u: goto L_08B350C4;
    case 235u: goto L_08B350E8;
    case 236u: goto L_08B350F0;
    case 237u: goto L_08B35100;
    case 238u: goto L_08B35108;
    case 239u: goto L_08B3511C;
    case 240u: goto L_08B35124;
    case 241u: goto L_08B35128;
    case 242u: goto L_08B35134;
    case 243u: goto L_08B35140;
    case 244u: goto L_08B3514C;
    case 245u: goto L_08B35158;
    case 246u: goto L_08B35164;
    case 247u: goto L_08B3517C;
    case 248u: goto L_08B35184;
    case 249u: goto L_08B35194;
    case 250u: goto L_08B351A8;
    case 251u: goto L_08B351B4;
    case 252u: goto L_08B351BC;
    case 253u: goto L_08B351D8;
    case 254u: goto L_08B351E4;
    case 255u: goto L_08B35218;
    case 256u: goto L_08B35260;
    case 257u: goto L_08B3527C;
    case 258u: goto L_08B35288;
    case 259u: goto L_08B35298;
    case 260u: goto L_08B352A0;
    case 261u: goto L_08B352B4;
    case 262u: goto L_08B352BC;
    case 263u: goto L_08B352C4;
    case 264u: goto L_08B352D0;
    case 265u: goto L_08B352DC;
    case 266u: goto L_08B352EC;
    case 267u: goto L_08B352FC;
    case 268u: goto L_08B3530C;
    case 269u: goto L_08B35310;
    case 270u: goto L_08B35320;
    case 271u: goto L_08B3532C;
    case 272u: goto L_08B35334;
    case 273u: goto L_08B35340;
    case 274u: goto L_08B35348;
    case 275u: goto L_08B35374;
    case 276u: goto L_08B353A4;
    case 277u: goto L_08B353CC;
    case 278u: goto L_08B353D4;
    case 279u: goto L_08B353D8;
    case 280u: goto L_08B353EC;
    case 281u: goto L_08B353F4;
    case 282u: goto L_08B35400;
    case 283u: goto L_08B35408;
    case 284u: goto L_08B35424;
    case 285u: goto L_08B35440;
    case 286u: goto L_08B35470;
    case 287u: goto L_08B3548C;
    case 288u: goto L_08B35498;
    case 289u: goto L_08B354A0;
    case 290u: goto L_08B354A8;
    case 291u: goto L_08B354B4;
    case 292u: goto L_08B354BC;
    case 293u: goto L_08B35570;
    case 294u: goto L_08B35584;
    case 295u: goto L_08B3558C;
    case 296u: goto L_08B355B8;
    case 297u: goto L_08B355D0;
    case 298u: goto L_08B355D8;
    case 299u: goto L_08B355F0;
    case 300u: goto L_08B35604;
    case 301u: goto L_08B3561C;
    case 302u: goto L_08B35630;
    case 303u: goto L_08B35670;
    case 304u: goto L_08B35684;
    case 305u: goto L_08B356A8;
    case 306u: goto L_08B356BC;
    case 307u: goto L_08B356C4;
    case 308u: goto L_08B356CC;
    case 309u: goto L_08B356D4;
    case 310u: goto L_08B356DC;
    case 311u: goto L_08B356E4;
    case 312u: goto L_08B356EC;
    case 313u: goto L_08B356F0;
    case 314u: goto L_08B356F8;
    case 315u: goto L_08B35714;
    case 316u: goto L_08B3572C;
    case 317u: goto L_08B3576C;
    case 318u: goto L_08B35784;
    case 319u: goto L_08B357A8;
    case 320u: goto L_08B357C0;
    case 321u: goto L_08B357C8;
    case 322u: goto L_08B357D0;
    case 323u: goto L_08B357D8;
    case 324u: goto L_08B357E0;
    case 325u: goto L_08B357E8;
    case 326u: goto L_08B357F0;
    case 327u: goto L_08B357F4;
    case 328u: goto L_08B357FC;
    case 329u: goto L_08B3581C;
    case 330u: goto L_08B35824;
    case 331u: goto L_08B3582C;
    case 332u: goto L_08B35834;
    case 333u: goto L_08B3583C;
    case 334u: goto L_08B35844;
    case 335u: goto L_08B3584C;
    case 336u: goto L_08B35854;
    case 337u: goto L_08B3585C;
    case 338u: goto L_08B35864;
    case 339u: goto L_08B3586C;
    case 340u: goto L_08B3587C;
    case 341u: goto L_08B3588C;
    case 342u: goto L_08B35898;
    case 343u: goto L_08B358B4;
    case 344u: goto L_08B358C8;
    case 345u: goto L_08B358E8;
    case 346u: goto L_08B358F0;
    case 347u: goto L_08B358F8;
    case 348u: goto L_08B35900;
    case 349u: goto L_08B35908;
    case 350u: goto L_08B35910;
    case 351u: goto L_08B3591C;
    case 352u: goto L_08B3592C;
    case 353u: goto L_08B35938;
    case 354u: goto L_08B35958;
    case 355u: goto L_08B3596C;
    case 356u: goto L_08B35990;
    case 357u: goto L_08B35998;
    case 358u: goto L_08B359A0;
    case 359u: goto L_08B359B0;
    case 360u: goto L_08B359D0;
    case 361u: goto L_08B359D8;
    case 362u: goto L_08B359E0;
    case 363u: goto L_08B359E8;
    case 364u: goto L_08B359F4;
    case 365u: goto L_08B35A04;
    case 366u: goto L_08B35A10;
    case 367u: goto L_08B35A30;
    case 368u: goto L_08B35A44;
    case 369u: goto L_08B35A68;
    case 370u: goto L_08B35A70;
    case 371u: goto L_08B35A78;
    case 372u: goto L_08B35A88;
    case 373u: goto L_08B35AA8;
    case 374u: goto L_08B35AB0;
    case 375u: goto L_08B35AB8;
    case 376u: goto L_08B35AC0;
    case 377u: goto L_08B35AC8;
    case 378u: goto L_08B35AD0;
    case 379u: goto L_08B35AD8;
    case 380u: goto L_08B35AE0;
    case 381u: goto L_08B35AF0;
    case 382u: goto L_08B35B00;
    case 383u: goto L_08B35B0C;
    case 384u: goto L_08B35B28;
    case 385u: goto L_08B35B3C;
    case 386u: goto L_08B35B5C;
    case 387u: goto L_08B35B64;
    case 388u: goto L_08B35B6C;
    case 389u: goto L_08B35B78;
    case 390u: goto L_08B35B88;
    case 391u: goto L_08B35B94;
    case 392u: goto L_08B35BB4;
    case 393u: goto L_08B35BC8;
    case 394u: goto L_08B35BEC;
    case 395u: goto L_08B35BF4;
    case 396u: goto L_08B35BFC;
    case 397u: goto L_08B35C0C;
    case 398u: goto L_08B35C2C;
    case 399u: goto L_08B35C34;
    case 400u: goto L_08B35C3C;
    case 401u: goto L_08B35C44;
    case 402u: goto L_08B35C4C;
    case 403u: goto L_08B35C54;
    case 404u: goto L_08B35C5C;
    case 405u: goto L_08B35C68;
    case 406u: goto L_08B35C78;
    case 407u: goto L_08B35C80;
    case 408u: goto L_08B35C88;
    case 409u: goto L_08B35C90;
    case 410u: goto L_08B35C98;
    case 411u: goto L_08B35CA0;
    case 412u: goto L_08B35CA8;
    case 413u: goto L_08B35CC0;
    case 414u: goto L_08B35CC8;
    case 415u: goto L_08B35CD8;
    case 416u: goto L_08B35CE8;
    case 417u: goto L_08B35CF4;
    case 418u: goto L_08B35D10;
    case 419u: goto L_08B35D24;
    case 420u: goto L_08B35D40;
    case 421u: goto L_08B35D4C;
    case 422u: goto L_08B35D5C;
    case 423u: goto L_08B35D64;
    case 424u: goto L_08B35D6C;
    case 425u: goto L_08B35D78;
    case 426u: goto L_08B35D88;
    case 427u: goto L_08B35D94;
    case 428u: goto L_08B35DB4;
    case 429u: goto L_08B35DC8;
    case 430u: goto L_08B35DEC;
    case 431u: goto L_08B35DF4;
    case 432u: goto L_08B35DFC;
    case 433u: goto L_08B35E0C;
    case 434u: goto L_08B35EC4;
    case 435u: goto L_08B35ED0;
    case 436u: goto L_08B35EE4;
    case 437u: goto L_08B35EF4;
    case 438u: goto L_08B35F04;
    case 439u: goto L_08B35F14;
    case 440u: goto L_08B35F24;
    case 441u: goto L_08B35F34;
    case 442u: goto L_08B35F44;
    case 443u: goto L_08B35F54;
    case 444u: goto L_08B35F64;
    case 445u: goto L_08B35F70;
    case 446u: goto L_08B35F80;
    case 447u: goto L_08B35F8C;
    case 448u: goto L_08B35F9C;
    case 449u: goto L_08B35FA8;
    case 450u: goto L_08B35FB8;
    case 451u: goto L_08B35FC4;
    case 452u: goto L_08B35FD0;
    case 453u: goto L_08B35FE0;
    case 454u: goto L_08B35FEC;
    case 455u: goto L_08B35FFC;
    case 456u: goto L_08B36008;
    case 457u: goto L_08B36018;
    case 458u: goto L_08B36024;
    case 459u: goto L_08B36030;
    case 460u: goto L_08B3603C;
    case 461u: goto L_08B3604C;
    case 462u: goto L_08B36058;
    case 463u: goto L_08B36064;
    case 464u: goto L_08B36070;
    case 465u: goto L_08B36080;
    case 466u: goto L_08B3608C;
    case 467u: goto L_08B3609C;
    case 468u: goto L_08B360A8;
    case 469u: goto L_08B360B8;
    case 470u: goto L_08B360C4;
    case 471u: goto L_08B360D0;
    case 472u: goto L_08B360DC;
    case 473u: goto L_08B360EC;
    case 474u: goto L_08B360F8;
    case 475u: goto L_08B36100;
    case 476u: goto L_08B36108;
    case 477u: goto L_08B36138;
    case 478u: goto L_08B36148;
    case 479u: goto L_08B3614C;
    case 480u: goto L_08B36154;
    case 481u: goto L_08B3615C;
    case 482u: goto L_08B36168;
    case 483u: goto L_08B36170;
    case 484u: goto L_08B36178;
    case 485u: goto L_08B36184;
    case 486u: goto L_08B36190;
    case 487u: goto L_08B361A0;
    case 488u: goto L_08B361A4;
    case 489u: goto L_08B361C0;
    case 490u: goto L_08B361C8;
    case 491u: goto L_08B361D0;
    case 492u: goto L_08B361DC;
    case 493u: goto L_08B361E8;
    case 494u: goto L_08B361F8;
    case 495u: goto L_08B36200;
    case 496u: goto L_08B3620C;
    case 497u: goto L_08B36214;
    case 498u: goto L_08B3621C;
    case 499u: goto L_08B36228;
    case 500u: goto L_08B36234;
    case 501u: goto L_08B36248;
    case 502u: goto L_08B36250;
    case 503u: goto L_08B3625C;
    case 504u: goto L_08B36264;
    case 505u: goto L_08B3626C;
    case 506u: goto L_08B36278;
    case 507u: goto L_08B36284;
    case 508u: goto L_08B36294;
    case 509u: goto L_08B36298;
    case 510u: goto L_08B362B4;
    case 511u: goto L_08B362BC;
    case 512u: goto L_08B362C4;
    case 513u: goto L_08B362D0;
    case 514u: goto L_08B362DC;
    case 515u: goto L_08B362EC;
    case 516u: goto L_08B362F4;
    case 517u: goto L_08B36300;
    case 518u: goto L_08B36308;
    case 519u: goto L_08B36310;
    case 520u: goto L_08B3631C;
    case 521u: goto L_08B36328;
    case 522u: goto L_08B36338;
    case 523u: goto L_08B36340;
    case 524u: goto L_08B3634C;
    case 525u: goto L_08B36354;
    case 526u: goto L_08B3635C;
    case 527u: goto L_08B36368;
    case 528u: goto L_08B36374;
    case 529u: goto L_08B36384;
    case 530u: goto L_08B3638C;
    case 531u: goto L_08B36398;
    case 532u: goto L_08B363A4;
    case 533u: goto L_08B363B0;
    case 534u: goto L_08B363C4;
    case 535u: goto L_08B363CC;
    case 536u: goto L_08B363D4;
    case 537u: goto L_08B36448;
    case 538u: goto L_08B364C4;
    case 539u: goto L_08B364D4;
    case 540u: goto L_08B364E0;
    case 541u: goto L_08B364F4;
    case 542u: goto L_08B36500;
    case 543u: goto L_08B36514;
    case 544u: goto L_08B36520;
    case 545u: goto L_08B36534;
    case 546u: goto L_08B36540;
    case 547u: goto L_08B36554;
    case 548u: goto L_08B36560;
    case 549u: goto L_08B36574;
    case 550u: goto L_08B36580;
    case 551u: goto L_08B36590;
    case 552u: goto L_08B3659C;
    case 553u: goto L_08B365AC;
    case 554u: goto L_08B365B8;
    case 555u: goto L_08B365F8;
    case 556u: goto L_08B36620;
    case 557u: goto L_08B36628;
    case 558u: goto L_08B36638;
    case 559u: goto L_08B36648;
    case 560u: goto L_08B36654;
    case 561u: goto L_08B3666C;
    case 562u: goto L_08B36678;
    case 563u: goto L_08B36684;
    case 564u: goto L_08B36690;
    case 565u: goto L_08B3669C;
    case 566u: goto L_08B366AC;
    case 567u: goto L_08B366B8;
    case 568u: goto L_08B366C4;
    case 569u: goto L_08B366D0;
    case 570u: goto L_08B366E0;
    case 571u: goto L_08B366F0;
    case 572u: goto L_08B366FC;
    case 573u: goto L_08B36714;
    case 574u: goto L_08B36720;
    case 575u: goto L_08B3672C;
    case 576u: goto L_08B36738;
    case 577u: goto L_08B36744;
    case 578u: goto L_08B36754;
    case 579u: goto L_08B36760;
    case 580u: goto L_08B36768;
    case 581u: goto L_08B36770;
    case 582u: goto L_08B36774;
    case 583u: goto L_08B36790;
    case 584u: goto L_08B367AC;
    case 585u: goto L_08B367BC;
    case 586u: goto L_08B367CC;
    case 587u: goto L_08B367D4;
    case 588u: goto L_08B367DC;
    case 589u: goto L_08B367E8;
    case 590u: goto L_08B367F8;
    case 591u: goto L_08B36800;
    case 592u: goto L_08B36808;
    case 593u: goto L_08B36814;
    case 594u: goto L_08B3681C;
    case 595u: goto L_08B36830;
    case 596u: goto L_08B36838;
    case 597u: goto L_08B3684C;
    case 598u: goto L_08B36854;
    case 599u: goto L_08B36860;
    case 600u: goto L_08B36870;
    case 601u: goto L_08B36878;
    case 602u: goto L_08B36884;
    case 603u: goto L_08B36894;
    case 604u: goto L_08B368C8;
    case 605u: goto L_08B368E4;
    case 606u: goto L_08B36900;
    case 607u: goto L_08B3691C;
    case 608u: goto L_08B36920;
    case 609u: goto L_08B36928;
    case 610u: goto L_08B3693C;
    case 611u: goto L_08B36948;
    case 612u: goto L_08B36954;
    case 613u: goto L_08B36960;
    case 614u: goto L_08B36968;
    case 615u: goto L_08B36970;
    case 616u: goto L_08B36980;
    case 617u: goto L_08B3698C;
    case 618u: goto L_08B36994;
    case 619u: goto L_08B369A4;
    case 620u: goto L_08B369B8;
    case 621u: goto L_08B369C4;
    case 622u: goto L_08B369CC;
    case 623u: goto L_08B369DC;
    case 624u: goto L_08B369F4;
    case 625u: goto L_08B36A04;
    case 626u: goto L_08B36A10;
    case 627u: goto L_08B36A28;
    case 628u: goto L_08B36A34;
    case 629u: goto L_08B36A4C;
    case 630u: goto L_08B36A60;
    case 631u: goto L_08B36A78;
    case 632u: goto L_08B36A80;
    case 633u: goto L_08B36A88;
    case 634u: goto L_08B36A90;
    case 635u: goto L_08B36A98;
    case 636u: goto L_08B36AA0;
    case 637u: goto L_08B36AA8;
    case 638u: goto L_08B36AB0;
    case 639u: goto L_08B36AB8;
    case 640u: goto L_08B36AC0;
    case 641u: goto L_08B36AC8;
    case 642u: goto L_08B36AD0;
    case 643u: goto L_08B36AD8;
    case 644u: goto L_08B36AE0;
    case 645u: goto L_08B36AE8;
    case 646u: goto L_08B36AF0;
    case 647u: goto L_08B36AF8;
    case 648u: goto L_08B36B00;
    case 649u: goto L_08B36B08;
    case 650u: goto L_08B36B10;
    case 651u: goto L_08B36B18;
    case 652u: goto L_08B36B20;
    case 653u: goto L_08B36B28;
    case 654u: goto L_08B36B30;
    case 655u: goto L_08B36B38;
    case 656u: goto L_08B36B40;
    case 657u: goto L_08B36B54;
    case 658u: goto L_08B36C0C;
    case 659u: goto L_08B36C18;
    case 660u: goto L_08B36C2C;
    case 661u: goto L_08B36C4C;
    case 662u: goto L_08B36C58;
    case 663u: goto L_08B36C6C;
    case 664u: goto L_08B36C8C;
    case 665u: goto L_08B36C98;
    case 666u: goto L_08B36CA8;
    case 667u: goto L_08B36CC8;
    case 668u: goto L_08B36CD4;
    case 669u: goto L_08B36CE4;
    case 670u: goto L_08B36CF4;
    case 671u: goto L_08B36CFC;
    case 672u: goto L_08B36D04;
    case 673u: goto L_08B36D0C;
    case 674u: goto L_08B36D1C;
    case 675u: goto L_08B36D28;
    case 676u: goto L_08B36D38;
    case 677u: goto L_08B36D44;
    case 678u: goto L_08B36D5C;
    case 679u: goto L_08B36D6C;
    case 680u: goto L_08B36D7C;
    case 681u: goto L_08B36D8C;
    case 682u: goto L_08B36D9C;
    case 683u: goto L_08B36DAC;
    case 684u: goto L_08B36DB8;
    case 685u: goto L_08B36DC0;
    case 686u: goto L_08B36E30;
    case 687u: goto L_08B36E58;
    case 688u: goto L_08B36E64;
    case 689u: goto L_08B36E7C;
    case 690u: goto L_08B36E84;
    case 691u: goto L_08B36E98;
    case 692u: goto L_08B36EA4;
    case 693u: goto L_08B36EB8;
    case 694u: goto L_08B36EEC;
    case 695u: goto L_08B36F00;
    case 696u: goto L_08B36F18;
    case 697u: goto L_08B36F20;
    case 698u: goto L_08B36F28;
    case 699u: goto L_08B36F30;
    case 700u: goto L_08B36F38;
    case 701u: goto L_08B36F40;
    case 702u: goto L_08B36F48;
    case 703u: goto L_08B36F50;
    case 704u: goto L_08B36F58;
    case 705u: goto L_08B36F60;
    case 706u: goto L_08B36F68;
    case 707u: goto L_08B36F70;
    case 708u: goto L_08B36F78;
    case 709u: goto L_08B36F80;
    case 710u: goto L_08B36F88;
    case 711u: goto L_08B36FD4;
    case 712u: goto L_08B36FDC;
    case 713u: goto L_08B36FE4;
    case 714u: goto L_08B36FEC;
    case 715u: goto L_08B36FF4;
    case 716u: goto L_08B37004;
    case 717u: goto L_08B3700C;
    case 718u: goto L_08B37014;
    case 719u: goto L_08B3701C;
    case 720u: goto L_08B37024;
    case 721u: goto L_08B37058;
    case 722u: goto L_08B37064;
    case 723u: goto L_08B3706C;
    case 724u: goto L_08B37074;
    case 725u: goto L_08B37098;
    case 726u: goto L_08B370A0;
    case 727u: goto L_08B370AC;
    case 728u: goto L_08B370BC;
    case 729u: goto L_08B370CC;
    case 730u: goto L_08B370E0;
    case 731u: goto L_08B370F4;
    case 732u: goto L_08B3710C;
    case 733u: goto L_08B37114;
    case 734u: goto L_08B37128;
    case 735u: goto L_08B37140;
    case 736u: goto L_08B37148;
    case 737u: goto L_08B37150;
    case 738u: goto L_08B37158;
    case 739u: goto L_08B37164;
    case 740u: goto L_08B37178;
    case 741u: goto L_08B37190;
    case 742u: goto L_08B371BC;
    case 743u: goto L_08B371C4;
    case 744u: goto L_08B371CC;
    case 745u: goto L_08B371D4;
    case 746u: goto L_08B371DC;
    case 747u: goto L_08B371E8;
    case 748u: goto L_08B371F8;
    case 749u: goto L_08B37208;
    case 750u: goto L_08B37214;
    case 751u: goto L_08B37230;
    case 752u: goto L_08B37244;
    case 753u: goto L_08B37270;
    case 754u: goto L_08B37278;
    case 755u: goto L_08B37280;
    case 756u: goto L_08B37288;
    case 757u: goto L_08B37290;
    case 758u: goto L_08B37298;
    case 759u: goto L_08B372A4;
    case 760u: goto L_08B372AC;
    case 761u: goto L_08B372C4;
    case 762u: goto L_08B372CC;
    case 763u: goto L_08B372D4;
    case 764u: goto L_08B372DC;
    case 765u: goto L_08B372E4;
    case 766u: goto L_08B372EC;
    case 767u: goto L_08B372F4;
    case 768u: goto L_08B372FC;
    case 769u: goto L_08B37304;
    case 770u: goto L_08B3730C;
    case 771u: goto L_08B37314;
    case 772u: goto L_08B3733C;
    case 773u: goto L_08B37344;
    case 774u: goto L_08B37360;
    case 775u: goto L_08B37378;
    case 776u: goto L_08B37380;
    case 777u: goto L_08B3738C;
    case 778u: goto L_08B37394;
    case 779u: goto L_08B373A8;
    case 780u: goto L_08B373B0;
    case 781u: goto L_08B373B8;
    case 782u: goto L_08B373C0;
    case 783u: goto L_08B373CC;
    case 784u: goto L_08B373D4;
    case 785u: goto L_08B373DC;
    case 786u: goto L_08B373E4;
    case 787u: goto L_08B373EC;
    case 788u: goto L_08B373F4;
    case 789u: goto L_08B37408;
    case 790u: goto L_08B37420;
    case 791u: goto L_08B37428;
    case 792u: goto L_08B37430;
    case 793u: goto L_08B3743C;
    case 794u: goto L_08B37444;
    case 795u: goto L_08B37454;
    case 796u: goto L_08B3745C;
    case 797u: goto L_08B3746C;
    case 798u: goto L_08B37474;
    case 799u: goto L_08B37484;
    case 800u: goto L_08B3748C;
    case 801u: goto L_08B37494;
    case 802u: goto L_08B374B8;
    case 803u: goto L_08B374BC;
    case 804u: goto L_08B374C4;
    case 805u: goto L_08B374CC;
    case 806u: goto L_08B374D4;
    case 807u: goto L_08B374E0;
    case 808u: goto L_08B374E8;
    case 809u: goto L_08B37500;
    case 810u: goto L_08B37508;
    case 811u: goto L_08B37510;
    case 812u: goto L_08B37518;
    case 813u: goto L_08B37520;
    case 814u: goto L_08B37528;
    case 815u: goto L_08B37530;
    case 816u: goto L_08B37538;
    case 817u: goto L_08B37540;
    case 818u: goto L_08B37548;
    case 819u: goto L_08B37550;
    case 820u: goto L_08B37558;
    case 821u: goto L_08B37560;
    case 822u: goto L_08B37568;
    case 823u: goto L_08B37570;
    case 824u: goto L_08B37578;
    case 825u: goto L_08B37580;
    case 826u: goto L_08B37598;
    case 827u: goto L_08B375A0;
    case 828u: goto L_08B375A8;
    case 829u: goto L_08B375B0;
    case 830u: goto L_08B375B8;
    case 831u: goto L_08B375C0;
    case 832u: goto L_08B375C8;
    case 833u: goto L_08B375E0;
    case 834u: goto L_08B375F8;
    case 835u: goto L_08B37600;
    case 836u: goto L_08B3760C;
    case 837u: goto L_08B37614;
    case 838u: goto L_08B37620;
    case 839u: goto L_08B37628;
    case 840u: goto L_08B37634;
    case 841u: goto L_08B3763C;
    case 842u: goto L_08B37648;
    case 843u: goto L_08B37650;
    case 844u: goto L_08B3765C;
    case 845u: goto L_08B37664;
    case 846u: goto L_08B37670;
    case 847u: goto L_08B37674;
    case 848u: goto L_08B37680;
    case 849u: goto L_08B3768C;
    case 850u: goto L_08B37694;
    case 851u: goto L_08B376A4;
    case 852u: goto L_08B376AC;
    case 853u: goto L_08B376BC;
    case 854u: goto L_08B376C4;
    case 855u: goto L_08B376D4;
    case 856u: goto L_08B376DC;
    case 857u: goto L_08B376EC;
    case 858u: goto L_08B376F0;
    case 859u: goto L_08B376F8;
    case 860u: goto L_08B37700;
    case 861u: goto L_08B37708;
    case 862u: goto L_08B37710;
    case 863u: goto L_08B37714;
    case 864u: goto L_08B37720;
    case 865u: goto L_08B37728;
    case 866u: goto L_08B37734;
    case 867u: goto L_08B3773C;
    case 868u: goto L_08B37744;
    case 869u: goto L_08B37750;
    case 870u: goto L_08B3775C;
    case 871u: goto L_08B37764;
    case 872u: goto L_08B37768;
    case 873u: goto L_08B37770;
    case 874u: goto L_08B37780;
    case 875u: goto L_08B37790;
    case 876u: goto L_08B37978;
    case 877u: goto L_08B379EC;
    case 878u: goto L_08B379F0;
    case 879u: goto L_08B37A64;
    case 880u: goto L_08B37A68;
    case 881u: goto L_08B37A78;
    case 882u: goto L_08B37B20;
    case 883u: goto L_08B37BDC;
    case 884u: goto L_08B37C08;
    case 885u: goto L_08B37C20;
    case 886u: goto L_08B37C4C;
    case 887u: goto L_08B37C5C;
    case 888u: goto L_08B37CC0;
    case 889u: goto L_08B37CD8;
    case 890u: goto L_08B37CE0;
    case 891u: goto L_08B37CEC;
    case 892u: goto L_08B37CF4;
    case 893u: goto L_08B37D00;
    case 894u: goto L_08B37D3C;
    case 895u: goto L_08B37D7C;
    case 896u: goto L_08B37D84;
    case 897u: goto L_08B37D8C;
    case 898u: goto L_08B37D9C;
    case 899u: goto L_08B37DB0;
    case 900u: goto L_08B37DB8;
    case 901u: goto L_08B37DCC;
    case 902u: goto L_08B37DD4;
    case 903u: goto L_08B37DDC;
    case 904u: goto L_08B37DE4;
    case 905u: goto L_08B37DEC;
    case 906u: goto L_08B37DFC;
    case 907u: goto L_08B37E10;
    case 908u: goto L_08B37E18;
    case 909u: goto L_08B37E2C;
    case 910u: goto L_08B37E34;
    case 911u: goto L_08B37E3C;
    case 912u: goto L_08B37E44;
    case 913u: goto L_08B37E54;
    case 914u: goto L_08B37E68;
    case 915u: goto L_08B37E70;
    case 916u: goto L_08B37E84;
    case 917u: goto L_08B37E90;
    case 918u: goto L_08B37EB8;
    case 919u: goto L_08B37EC0;
    case 920u: goto L_08B37ECC;
    case 921u: goto L_08B37EDC;
    case 922u: goto L_08B37EE8;
    case 923u: goto L_08B37F08;
    case 924u: goto L_08B37F1C;
    case 925u: goto L_08B37F40;
    case 926u: goto L_08B37F48;
    case 927u: goto L_08B37F50;
    case 928u: goto L_08B37F58;
    case 929u: goto L_08B37F60;
    case 930u: goto L_08B37F68;
    case 931u: goto L_08B37F6C;
    case 932u: goto L_08B37F74;
    case 933u: goto L_08B37F7C;
    case 934u: goto L_08B37F84;
    case 935u: goto L_08B37F8C;
    case 936u: goto L_08B37FC8;
    case 937u: goto L_08B37FE8;
    case 938u: goto L_08B37FF0;
    case 939u: goto L_08B37FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08B34004:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    ctx.gpr[23] = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-3344));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[23]);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 807u, 0x08B33EF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B3401C;
    }
L_08B3401C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B34020;
L_08B34020:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B34050:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    ctx.gpr[21] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_5);
    ctx.gpr[23] = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const std::uint32_t aot_run_words[5]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[23]);
      if (branch_taken) {
          goto L_08B341CC;
      }
      goto L_08B34098;
    }
L_08B34098:
    aot_gpr_4 = (ctx.gpr[23] << 5u);
    ctx.gpr[30] = (0u + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 6u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[30] = (ctx.gpr[30] + aot_gpr_4);
    goto L_08B340B0;
L_08B340B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) < 0;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08B340C8;
      }
      goto L_08B340B8;
    }
L_08B340B8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
        goto L_08B340D0;
    }
    goto L_08B340C8;
L_08B340C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08B340F0;
      }
      goto L_08B340D0;
    }
L_08B340D0:
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[23]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 128u);
    if (aot_gpr_5 == 0u) {
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_08B340EC;
    }
    goto L_08B340E4;
L_08B340E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08B340F0;
      }
      goto L_08B340EC;
    }
L_08B340EC:
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[30]);
    goto L_08B340F0;
L_08B340F0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B341B4;
      }
      goto L_08B340F8;
    }
L_08B340F8:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08B34104u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 735u, 0x08B33710u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B34104u) goto L_08B34104;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B34104:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B341B4;
      }
      goto L_08B3410C;
    }
L_08B3410C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (0u | 0u);
      if (branch_taken) {
          goto L_08B341B4;
      }
      goto L_08B34138;
    }
L_08B34138:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B34168u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 611u, 0x08B32D3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B34168u) goto L_08B34168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B34168:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08B34190u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08B356F8;
L_08B34190:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B341A0;
      }
      goto L_08B34198;
    }
L_08B34198:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B341D0;
      }
      goto L_08B341A0;
    }
L_08B341A0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B34138;
      }
      goto L_08B341B4;
    }
L_08B341B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    ctx.gpr[23] = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-2080));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[23]);
      if (branch_taken) {
          goto L_08B340B0;
      }
      goto L_08B341CC;
    }
L_08B341CC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B341D0;
L_08B341D0:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_08B34200:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B342E0;
      }
      goto L_08B34244;
    }
L_08B34244:
    aot_gpr_4 = (ctx.gpr[19] << 5u);
    ctx.gpr[18] = (0u + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 6u);
    ctx.gpr[18] = (ctx.gpr[18] + aot_gpr_4);
    goto L_08B34254;
L_08B34254:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B3426C;
      }
      goto L_08B3425C;
    }
L_08B3425C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
        goto L_08B34274;
    }
    goto L_08B3426C;
L_08B3426C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08B34294;
      }
      goto L_08B34274;
    }
L_08B34274:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_08B34290;
    }
    goto L_08B34288;
L_08B34288:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08B34294;
      }
      goto L_08B34290;
    }
L_08B34290:
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[18]);
    goto L_08B34294;
L_08B34294:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B342CC;
      }
      goto L_08B342A0;
    }
L_08B342A0:
    { const bool branch_taken = aot_gpr_5 == aot_gpr_16;
    // nop
      if (branch_taken) {
          goto L_08B342CC;
      }
      goto L_08B342A8;
    }
L_08B342A8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B342C0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_08B35604;
L_08B342C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B342CC;
      }
      goto L_08B342C8;
    }
L_08B342C8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08B342CC;
L_08B342CC:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2080));
      if (branch_taken) {
          goto L_08B34254;
      }
      goto L_08B342E0;
    }
L_08B342E0:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_08B3430C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B34428;
      }
      goto L_08B34338;
    }
L_08B34338:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B34350;
      }
      goto L_08B34340;
    }
L_08B34340:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_08B34358;
    }
    goto L_08B34350;
L_08B34350:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B34388;
      }
      goto L_08B34358;
    }
L_08B34358:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[18] << 5u);
      if (branch_taken) {
          goto L_08B34374;
      }
      goto L_08B3436C;
    }
L_08B3436C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B34388;
      }
      goto L_08B34374;
    }
L_08B34374:
    aot_gpr_5 = (0u + aot_gpr_4);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_4);
    goto L_08B34388;
L_08B34388:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3441C;
      }
      goto L_08B34390;
    }
L_08B34390:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B3439Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 735u, 0x08B33710u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3439Cu) goto L_08B3439C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3439C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3441C;
      }
      goto L_08B343A4;
    }
L_08B343A4:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B343BCu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_08B35604;
L_08B343BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3441C;
      }
      goto L_08B343C4;
    }
L_08B343C4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3441C;
      }
      goto L_08B343D4;
    }
L_08B343D4:
    aot_gpr_31 = (0x08B343DCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 772u, 0x08AFF508u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B343DCu) goto L_08B343DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B343DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3441C;
      }
      goto L_08B343E4;
    }
L_08B343E4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B343F0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B343F0u) goto L_08B343F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B343F0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B34414;
      }
      goto L_08B343F8;
    }
L_08B343F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B34414u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B34414u) goto L_08B34414;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B34414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B34428;
      }
      goto L_08B3441C;
    }
L_08B3441C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B34338;
      }
      goto L_08B34428;
    }
L_08B34428:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_08B34444:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08B3445Cu);
    aot_gpr_5 = (0u | 0u);
    goto L_08B346D4;
L_08B3445C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B34508;
      }
      goto L_08B34468;
    }
L_08B34468:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(148)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B344F8;
      }
      goto L_08B34484;
    }
L_08B34484:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
    aot_gpr_4 = (16281u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_15;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[16];
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_31 = (0x08B344F4u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_08B345C4;
L_08B344F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_08B344F8;
L_08B344F8:
    aot_gpr_31 = (0x08B34500u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B34500u) goto L_08B34500;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B34500:
    aot_gpr_31 = (0x08B34508u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B34508u) goto L_08B34508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B34508:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B345B4;
      }
      goto L_08B34514;
    }
L_08B34514:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(152)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B345A4;
      }
      goto L_08B34530;
    }
L_08B34530:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
    aot_gpr_4 = (16281u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_15;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[16];
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_31 = (0x08B345A0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_08B345C4;
L_08B345A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_08B345A4;
L_08B345A4:
    aot_gpr_31 = (0x08B345ACu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B345ACu) goto L_08B345AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B345AC:
    aot_gpr_31 = (0x08B345B4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B345B4u) goto L_08B345B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B345B4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B345C4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_4 = (49097u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat_ct<0u, 1u, 2u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B34680:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08B34698u);
    aot_gpr_5 = (0u | 0u);
    goto L_08B346D4;
L_08B34698:
    aot_gpr_5 = (16585u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x08B346B4u);
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 914u, 0x0885F854u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B346B4u) goto L_08B346B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B346B4:
    aot_gpr_31 = (0x08B346BCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B346BCu) goto L_08B346BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B346BC:
    aot_gpr_31 = (0x08B346C4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B346C4u) goto L_08B346C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B346C4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B346D4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B34708;
      }
      goto L_08B346FC;
    }
L_08B346FC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3470C;
      }
      goto L_08B34708;
    }
L_08B34708:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B3470C;
L_08B3470C:
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B347F8;
      }
      goto L_08B34718;
    }
L_08B34718:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(74)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B34790;
      }
      goto L_08B34724;
    }
L_08B34724:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B34730u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15952)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 699u, 0x08B66EB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B34730u) goto L_08B34730;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B34730:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15952)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 128u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3475C;
      }
      goto L_08B34754;
    }
L_08B34754:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08B347F8;
      }
      goto L_08B3475C;
    }
L_08B3475C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08B34768u);
    ctx.gpr[18] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 582u, 0x08B72EA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B34768u) goto L_08B34768;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B34768:
    aot_gpr_5 = (ctx.gpr[2] & 127u);
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_5;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B34778;
      }
      goto L_08B34774;
    }
L_08B34774:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B34778;
L_08B34778:
    aot_gpr_31 = (0x08B34780u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 426u, 0x0896DA80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B34780u) goto L_08B34780;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B34780:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B347F8;
      }
      goto L_08B34788;
    }
L_08B34788:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08B347F8;
      }
      goto L_08B34790;
    }
L_08B34790:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B3479Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 696u, 0x08B66E60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3479Cu) goto L_08B3479C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3479C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 128u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B347C8;
      }
      goto L_08B347C0;
    }
L_08B347C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08B347F8;
      }
      goto L_08B347C8;
    }
L_08B347C8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08B347D4u);
    ctx.gpr[18] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 636u, 0x08B66A10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B347D4u) goto L_08B347D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B347D4:
    aot_gpr_5 = (ctx.gpr[2] & 127u);
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_5;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B347E4;
      }
      goto L_08B347E0;
    }
L_08B347E0:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B347E4;
L_08B347E4:
    aot_gpr_31 = (0x08B347ECu);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 426u, 0x0896DA80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B347ECu) goto L_08B347EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B347EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B347F8;
      }
      goto L_08B347F4;
    }
L_08B347F4:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B347F8;
L_08B347F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B348E4;
      }
      goto L_08B34804;
    }
L_08B34804:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(75)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3487C;
      }
      goto L_08B34810;
    }
L_08B34810:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B3481Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15952)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 699u, 0x08B66EB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3481Cu) goto L_08B3481C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3481C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15952)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 128u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B34848;
      }
      goto L_08B34840;
    }
L_08B34840:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08B348E4;
      }
      goto L_08B34848;
    }
L_08B34848:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08B34854u);
    ctx.gpr[18] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(73)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 582u, 0x08B72EA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B34854u) goto L_08B34854;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B34854:
    aot_gpr_5 = (ctx.gpr[2] & 127u);
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_5;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B34864;
      }
      goto L_08B34860;
    }
L_08B34860:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B34864;
L_08B34864:
    aot_gpr_31 = (0x08B3486Cu);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 426u, 0x0896DA80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3486Cu) goto L_08B3486C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3486C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B348E4;
      }
      goto L_08B34874;
    }
L_08B34874:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08B348E4;
      }
      goto L_08B3487C;
    }
L_08B3487C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B34888u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 696u, 0x08B66E60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B34888u) goto L_08B34888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B34888:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 128u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B348B4;
      }
      goto L_08B348AC;
    }
L_08B348AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08B348E4;
      }
      goto L_08B348B4;
    }
L_08B348B4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08B348C0u);
    ctx.gpr[18] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(73)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 636u, 0x08B66A10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B348C0u) goto L_08B348C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B348C0:
    aot_gpr_5 = (ctx.gpr[2] & 127u);
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_5;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B348D0;
      }
      goto L_08B348CC;
    }
L_08B348CC:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B348D0;
L_08B348D0:
    aot_gpr_31 = (0x08B348D8u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 426u, 0x0896DA80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B348D8u) goto L_08B348D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B348D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B348E4;
      }
      goto L_08B348E0;
    }
L_08B348E0:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B348E4;
L_08B348E4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B348F4;
      }
      goto L_08B348EC;
    }
L_08B348EC:
    aot_gpr_31 = (0x08B348F4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B36B54;
L_08B348F4:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_08B3490C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(61)));
    aot_gpr_6 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    // nop
      if (branch_taken) {
          goto L_08B34928;
      }
      goto L_08B3491C;
    }
L_08B3491C:
    ctx.gpr[8] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 16u);
      if (branch_taken) {
          goto L_08B3492C;
      }
      goto L_08B34928;
    }
L_08B34928:
    ctx.gpr[7] = (0u | 0u);
    goto L_08B3492C;
L_08B3492C:
    aot_gpr_6 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_6 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[8] << 4u);
      if (branch_taken) {
          goto L_08B34998;
      }
      goto L_08B3493C;
    }
L_08B3493C:
    ctx.gpr[9] = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(13712));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[9]);
    goto L_08B3494C;
L_08B3494C:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B34988;
      }
      goto L_08B34958;
    }
L_08B34958:
    aot_gpr_4 = (ctx.gpr[8] << 2u);
    aot_gpr_4 = (ctx.gpr[28] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-17312)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_5 << (aot_gpr_6 & 31u));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B34980;
      }
      goto L_08B34978;
    }
L_08B34978:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B3499C;
      }
      goto L_08B34980;
    }
L_08B34980:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B3499C;
      }
      goto L_08B34988;
    }
L_08B34988:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (aot_gpr_6 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B3494C;
      }
      goto L_08B34998;
    }
L_08B34998:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B3499C;
L_08B3499C:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B349A4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (0u | 4u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_08B349B8;
    }
    goto L_08B349B8;
L_08B349B8:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_5 & 255u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B349C0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(61)));
    aot_gpr_6 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    // nop
      if (branch_taken) {
          goto L_08B349DC;
      }
      goto L_08B349D0;
    }
L_08B349D0:
    ctx.gpr[7] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (0u | 16u);
      if (branch_taken) {
          goto L_08B349E0;
      }
      goto L_08B349DC;
    }
L_08B349DC:
    aot_gpr_6 = (0u | 0u);
    goto L_08B349E0;
L_08B349E0:
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[8] = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
      if (branch_taken) {
          goto L_08B34A84;
      }
      goto L_08B349F0;
    }
L_08B349F0:
    ctx.gpr[9] = (2234u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(13712));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    goto L_08B34A00;
L_08B34A00:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B34A74;
      }
      goto L_08B34A0C;
    }
L_08B34A0C:
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[28] + ctx.gpr[8]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-17312)));
    ctx.gpr[7] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[7] << (aot_gpr_4 & 31u));
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-17312), aot_gpr_4);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B34A6C;
      }
      goto L_08B34A38;
    }
L_08B34A38:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-17312)));
    goto L_08B34A3C;
L_08B34A3C:
    ctx.gpr[8] = (ctx.gpr[7] << (aot_gpr_4 & 31u));
    ctx.gpr[8] = (aot_gpr_5 & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B34A64;
      }
      goto L_08B34A4C;
    }
L_08B34A4C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B34A3C;
      }
      goto L_08B34A5C;
    }
L_08B34A5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B34A6C;
      }
      goto L_08B34A64;
    }
L_08B34A64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B34A88;
      }
      goto L_08B34A6C;
    }
L_08B34A6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B34A88;
      }
      goto L_08B34A74;
    }
L_08B34A74:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B34A00;
      }
      goto L_08B34A84;
    }
L_08B34A84:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B34A88;
L_08B34A88:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B34A90:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_5 = (19224u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 38528u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_15));
      if (branch_taken) {
          goto L_08B34ACC;
      }
      goto L_08B34AB0;
    }
L_08B34AB0:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    ctx.fpr[16] = ctx.fpr[16] - aot_fpr_12;
    ctx.fpr[17] = ctx.fpr[17] - aot_fpr_13;
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    goto L_08B34ACC;
L_08B34ACC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B34AF4;
      }
      goto L_08B34AD8;
    }
L_08B34AD8:
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(44)));
    aot_fpr_15 = aot_fpr_15 - aot_fpr_12;
    ctx.fpr[17] = ctx.fpr[17] - aot_fpr_13;
    { const float fs = aot_fpr_15; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_fpr_15 = aot_fpr_15 + ctx.fpr[17];
    goto L_08B34AF4;
L_08B34AF4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B34B8C;
      }
      goto L_08B34B00;
    }
L_08B34B00:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B34B8C;
      }
      goto L_08B34B0C;
    }
L_08B34B0C:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (16128u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_5);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[17];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[19];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[19];
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(56)));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(ctx.fpr[17]), std::bit_cast<std::uint32_t>(ctx.fpr[3])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_fpr_13 = ctx.fpr[17] - aot_fpr_13;
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_14 = aot_fpr_12 + aot_fpr_13;
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    goto L_08B34B8C;
L_08B34B8C:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_15));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
        goto L_08B34BA0;
    }
    goto L_08B34BA0;
L_08B34BA0:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08B34BB4;
    }
    goto L_08B34BB4;
L_08B34BB4:
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B34BBC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_6 & 255u);
    { const std::uint32_t aot_run_words[5]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), aot_gpr_16, ctx.gpr[17]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B34D2C;
      }
      goto L_08B34BF0;
    }
L_08B34BF0:
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16800u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    goto L_08B34C04;
L_08B34C04:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B34D24;
      }
      goto L_08B34C18;
    }
L_08B34C18:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B34D24;
      }
      goto L_08B34C20;
    }
L_08B34C20:
    aot_gpr_31 = (0x08B34C28u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 426u, 0x0896DA80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B34C28u) goto L_08B34C28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B34C28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B34D24;
      }
      goto L_08B34C30;
    }
L_08B34C30:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
        goto L_08B34C5C;
    }
    goto L_08B34C5C;
L_08B34C5C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[20])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B34D24;
      }
      goto L_08B34C6C;
    }
L_08B34C6C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
        goto L_08B34C94;
    }
    goto L_08B34C94;
L_08B34C94:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[20])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B34D24;
      }
      goto L_08B34CA4;
    }
L_08B34CA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B34CEC;
      }
      goto L_08B34CB0;
    }
L_08B34CB0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08B34CD4;
      }
      goto L_08B34CBC;
    }
L_08B34CBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15952)));
    aot_gpr_31 = (0x08B34CC8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 582u, 0x08B72EA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B34CC8u) goto L_08B34CC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B34CC8:
    aot_gpr_4 = (ctx.gpr[2] & 127u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B34D24;
      }
      goto L_08B34CD4;
    }
L_08B34CD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    aot_gpr_31 = (0x08B34CE0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 636u, 0x08B66A10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B34CE0u) goto L_08B34CE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B34CE0:
    aot_gpr_4 = (ctx.gpr[2] & 127u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B34D24;
      }
      goto L_08B34CEC;
    }
L_08B34CEC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08B34D10;
      }
      goto L_08B34CF8;
    }
L_08B34CF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15952)));
    aot_gpr_31 = (0x08B34D04u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 582u, 0x08B72EA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B34D04u) goto L_08B34D04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B34D04:
    aot_gpr_4 = (ctx.gpr[2] & 127u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B34D24;
      }
      goto L_08B34D10;
    }
L_08B34D10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    aot_gpr_31 = (0x08B34D1Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 636u, 0x08B66A10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B34D1Cu) goto L_08B34D1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B34D1C:
    aot_gpr_4 = (ctx.gpr[2] & 127u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B34D24;
L_08B34D24:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B34C04;
      }
      goto L_08B34D2C;
    }
L_08B34D2C:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      aot_gpr_16 = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      ctx.gpr[18] = aot_run_words[5];
      ctx.gpr[19] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B34D54:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[8]);
    { const std::uint32_t aot_run_words[11]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    goto L_08B34D9C;
L_08B34D9C:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08B34D9C;
      }
      goto L_08B34DB0;
    }
L_08B34DB0:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[30] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B34F60;
      }
      goto L_08B34DCC;
    }
L_08B34DCC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] << 5u);
    ctx.gpr[21] = (0u + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 6u);
    aot_gpr_5 = (2238u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + aot_gpr_4);
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (16256u << 16u);
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_5);
    ctx.gpr[20] = (ctx.gpr[7] + ctx.gpr[20]);
    goto L_08B34E0C;
L_08B34E0C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B34E24;
      }
      goto L_08B34E14;
    }
L_08B34E14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
        goto L_08B34E2C;
    }
    goto L_08B34E24;
L_08B34E24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B34E4C;
      }
      goto L_08B34E2C;
    }
L_08B34E2C:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    if (aot_gpr_4 == 0u) {
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_08B34E48;
    }
    goto L_08B34E40;
L_08B34E40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B34E4C;
      }
      goto L_08B34E48;
    }
L_08B34E48:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[21]);
    goto L_08B34E4C;
L_08B34E4C:
    aot_gpr_16 = (ctx.gpr[17] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B34F4C;
      }
      goto L_08B34E58;
    }
L_08B34E58:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_31 = (0x08B34E70u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    goto L_08B35604;
L_08B34E70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B34F4C;
      }
      goto L_08B34E78;
    }
L_08B34E78:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(612)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B34E98;
      }
      goto L_08B34E88;
    }
L_08B34E88:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(618))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B34F4C;
      }
      goto L_08B34E98;
    }
L_08B34E98:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (0u | 4u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
        goto L_08B34EA8;
    }
    goto L_08B34EA8;
L_08B34EA8:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_08B34EF8;
    }
    goto L_08B34EB4;
L_08B34EB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_31 = (0x08B34EC4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 752u, 0x08B338E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B34EC4u) goto L_08B34EC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B34EC4:
    if (ctx.gpr[2] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_08B34EF8;
    }
    goto L_08B34ECC;
L_08B34ECC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u | 80u);
    aot_gpr_4 = (aot_gpr_4 & 496u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_08B34EF8;
    }
    goto L_08B34EE0;
L_08B34EE0:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B34EECu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08B35E0C;
L_08B34EEC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    goto L_08B34EF8;
L_08B34EF8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_31 = (0x08B34F1Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 264u, 0x089616E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B34F1Cu) goto L_08B34F1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B34F1C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B34F28u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B34F28u) goto L_08B34F28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B34F28:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B34F4C;
      }
      goto L_08B34F30;
    }
L_08B34F30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B34F4Cu);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B34F4Cu) goto L_08B34F4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B34F4C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-2080));
      if (branch_taken) {
          goto L_08B34E0C;
      }
      goto L_08B34F60;
    }
L_08B34F60:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[19] << 4u);
      if (branch_taken) {
          goto L_08B34F90;
      }
      goto L_08B34F6C;
    }
L_08B34F6C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_08B34F7C;
L_08B34F7C:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08B34F7C;
      }
      goto L_08B34F90;
    }
L_08B34F90:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B34FC4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    goto L_08B34FF0;
L_08B34FF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3501C;
      }
      goto L_08B34FFC;
    }
L_08B34FFC:
    aot_gpr_31 = (0x08B35004u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08B36108;
L_08B35004:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3501C;
      }
      goto L_08B35010;
    }
L_08B35010:
    aot_gpr_31 = (0x08B35018u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B35018u) goto L_08B35018;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B35018:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    goto L_08B3501C;
L_08B3501C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08B34FF0;
      }
      goto L_08B35030;
    }
L_08B35030:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (aot_gpr_16 | 0u);
    goto L_08B35038;
L_08B35038:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3505C;
      }
      goto L_08B35044;
    }
L_08B35044:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08B35038;
      }
      goto L_08B35054;
    }
L_08B35054:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B35060;
      }
      goto L_08B3505C;
    }
L_08B3505C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B35060;
L_08B35060:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_08B3507C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_run_words); }
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (ctx.gpr[18] << 5u);
      if (branch_taken) {
          goto L_08B351E4;
      }
      goto L_08B350C4;
    }
L_08B350C4:
    ctx.gpr[19] = (0u + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 6u);
    ctx.gpr[19] = (ctx.gpr[19] + aot_gpr_4);
    aot_gpr_4 = (16128u << 16u);
    ctx.gpr[30] = (0u | 6u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[23] = (0u | 9u);
    ctx.gpr[22] = (0u | 8u);
    ctx.gpr[21] = (0u | 80u);
    goto L_08B350E8;
L_08B350E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B35100;
      }
      goto L_08B350F0;
    }
L_08B350F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
        goto L_08B35108;
    }
    goto L_08B35100;
L_08B35100:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B35128;
      }
      goto L_08B35108;
    }
L_08B35108:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    if (aot_gpr_4 == 0u) {
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08B35124;
    }
    goto L_08B3511C;
L_08B3511C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B35128;
      }
      goto L_08B35124;
    }
L_08B35124:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_08B35128;
L_08B35128:
    aot_gpr_16 = (ctx.gpr[17] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B351D8;
      }
      goto L_08B35134;
    }
L_08B35134:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35164;
      }
      goto L_08B35140;
    }
L_08B35140:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08B35164;
      }
      goto L_08B3514C;
    }
L_08B3514C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08B35164;
      }
      goto L_08B35158;
    }
L_08B35158:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08B351D8;
      }
      goto L_08B35164;
    }
L_08B35164:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08B3517Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_08B35604;
L_08B3517C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B351D8;
      }
      goto L_08B35184;
    }
L_08B35184:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08B351A8;
      }
      goto L_08B35194;
    }
L_08B35194:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[20])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B351D8;
      }
      goto L_08B351A8;
    }
L_08B351A8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B351B4u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B351B4u) goto L_08B351B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B351B4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B351D8;
      }
      goto L_08B351BC;
    }
L_08B351BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B351D8u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B351D8u) goto L_08B351D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B351D8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2080));
      if (branch_taken) {
          goto L_08B350E8;
      }
      goto L_08B351E4;
    }
L_08B351E4:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B35218:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    ctx.gpr[22] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const std::uint32_t aot_run_words[6]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_5 << 5u);
      if (branch_taken) {
          goto L_08B35440;
      }
      goto L_08B35260;
    }
L_08B35260:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_5);
    aot_gpr_5 = (0u + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_4);
    goto L_08B3527C;
L_08B3527C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08B35298;
      }
      goto L_08B35288;
    }
L_08B35288:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
        goto L_08B352A0;
    }
    goto L_08B35298;
L_08B35298:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (0u | 0u);
      if (branch_taken) {
          goto L_08B352C4;
      }
      goto L_08B352A0;
    }
L_08B352A0:
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    if (aot_gpr_4 == 0u) {
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
        goto L_08B352BC;
    }
    goto L_08B352B4;
L_08B352B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (0u | 0u);
      if (branch_taken) {
          goto L_08B352C4;
      }
      goto L_08B352BC;
    }
L_08B352BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (aot_gpr_4 + ctx.gpr[30]);
    goto L_08B352C4;
L_08B352C4:
    ctx.gpr[21] = (ctx.gpr[30] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35424;
      }
      goto L_08B352D0;
    }
L_08B352D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(852)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
        goto L_08B35310;
    }
    goto L_08B352DC;
L_08B352DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 6u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
        goto L_08B35310;
    }
    goto L_08B352EC;
L_08B352EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 9u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
        goto L_08B35310;
    }
    goto L_08B352FC;
L_08B352FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B35424;
      }
      goto L_08B3530C;
    }
L_08B3530C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    goto L_08B35310;
L_08B35310:
    aot_gpr_5 = (0u | 80u);
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B35424;
      }
      goto L_08B35320;
    }
L_08B35320:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B3532Cu);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 735u, 0x08B33710u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3532Cu) goto L_08B3532C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3532C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35424;
      }
      goto L_08B35334;
    }
L_08B35334:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(62)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08B35348;
      }
      goto L_08B35340;
    }
L_08B35340:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08B353EC;
      }
      goto L_08B35348;
    }
L_08B35348:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (0u | 0u);
      if (branch_taken) {
          goto L_08B353EC;
      }
      goto L_08B35374;
    }
L_08B35374:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08B353A4u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 611u, 0x08B32D3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B353A4u) goto L_08B353A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B353A4:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B353CCu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    goto L_08B356F8;
L_08B353CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B353D8;
      }
      goto L_08B353D4;
    }
L_08B353D4:
    ctx.gpr[19] = (0u | 1u);
    goto L_08B353D8;
L_08B353D8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B35374;
      }
      goto L_08B353EC;
    }
L_08B353EC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35424;
      }
      goto L_08B353F4;
    }
L_08B353F4:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08B35400u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B35400u) goto L_08B35400;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B35400:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35424;
      }
      goto L_08B35408;
    }
L_08B35408:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B35424u);
    aot_gpr_4 = (ctx.gpr[30] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B35424u) goto L_08B35424;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B35424:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2080));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_4);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_5);
      if (branch_taken) {
          goto L_08B3527C;
      }
      goto L_08B35440;
    }
L_08B35440:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B35470:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_31);
    aot_gpr_31 = (0x08B3548Cu);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3548Cu) goto L_08B3548C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3548C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B35498u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 761u, 0x08B33A00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B35498u) goto L_08B35498;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B35498:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B35584;
      }
      goto L_08B354A0;
    }
L_08B354A0:
    aot_gpr_31 = (0x08B354A8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B354A8u) goto L_08B354A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B354A8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B354B4u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 805u, 0x08B33E90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B354B4u) goto L_08B354B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B354B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B35584;
      }
      goto L_08B354BC;
    }
L_08B354BC:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_5 = (16128u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_fpr_15 = aot_fpr_15 + ctx.fpr[16];
    { const float fs = aot_fpr_15; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[18];
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B3558C;
      }
      goto L_08B35570;
    }
L_08B35570:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_08B355B8;
      }
      goto L_08B35584;
    }
L_08B35584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B355F0;
      }
      goto L_08B3558C;
    }
L_08B3558C:
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = aot_fpr_15 + aot_fpr_14;
    aot_fpr_12 = ctx.fpr[17] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B355B8;
L_08B355B8:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B355D0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 615u, 0x08B32E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B355D0u) goto L_08B355D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B355D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B355F0;
      }
      goto L_08B355D8;
    }
L_08B355D8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_16 + static_cast<std::uint32_t>(48), aot_run_words); }
    goto L_08B355F0;
L_08B355F0:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B35604:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(56)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B356E4;
      }
      goto L_08B3561C;
    }
L_08B3561C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(96)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B356DC;
      }
      goto L_08B35630;
    }
L_08B35630:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_fpr_14 = aot_fpr_14 - aot_fpr_12;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_15;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_fpr_15 = aot_fpr_15 + ctx.fpr[17];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_15 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B356D4;
      }
      goto L_08B35670;
    }
L_08B35670:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(128)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_15 <= ctx.fpr[16])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B356CC;
      }
      goto L_08B35684;
    }
L_08B35684:
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(88)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_14 = aot_fpr_14 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B356C4;
      }
      goto L_08B356A8;
    }
L_08B356A8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(132)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B356EC;
      }
      goto L_08B356BC;
    }
L_08B356BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B356F0;
      }
      goto L_08B356C4;
    }
L_08B356C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B356F0;
      }
      goto L_08B356CC;
    }
L_08B356CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B356F0;
      }
      goto L_08B356D4;
    }
L_08B356D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B356F0;
      }
      goto L_08B356DC;
    }
L_08B356DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B356F0;
      }
      goto L_08B356E4;
    }
L_08B356E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B356F0;
      }
      goto L_08B356EC;
    }
L_08B356EC:
    ctx.gpr[2] = (0u | 1u);
    goto L_08B356F0;
L_08B356F0:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B356F8:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(56)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_fpr_14 = aot_fpr_14 - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B357E8;
      }
      goto L_08B35714;
    }
L_08B35714:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(96)));
    aot_fpr_14 = aot_fpr_14 + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B357E0;
      }
      goto L_08B3572C;
    }
L_08B3572C:
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_fpr_15 = aot_fpr_15 - aot_fpr_13;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[18];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B357D8;
      }
      goto L_08B3576C;
    }
L_08B3576C:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(128)));
    ctx.fpr[17] = ctx.fpr[17] + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] <= ctx.fpr[17])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B357D0;
      }
      goto L_08B35784;
    }
L_08B35784:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(88)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_15 = aot_fpr_15 + aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_15 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B357C8;
      }
      goto L_08B357A8;
    }
L_08B357A8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(132)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_15 <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B357F0;
      }
      goto L_08B357C0;
    }
L_08B357C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B357F4;
      }
      goto L_08B357C8;
    }
L_08B357C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B357F4;
      }
      goto L_08B357D0;
    }
L_08B357D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B357F4;
      }
      goto L_08B357D8;
    }
L_08B357D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B357F4;
      }
      goto L_08B357E0;
    }
L_08B357E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B357F4;
      }
      goto L_08B357E8;
    }
L_08B357E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B357F4;
      }
      goto L_08B357F0;
    }
L_08B357F0:
    ctx.gpr[2] = (0u | 1u);
    goto L_08B357F4;
L_08B357F4:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B357FC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(62)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B35834;
      }
      goto L_08B3581C;
    }
L_08B3581C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    // nop
      if (branch_taken) {
          goto L_08B3582C;
      }
      goto L_08B35824;
    }
L_08B35824:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    // nop
      if (branch_taken) {
          goto L_08B3584C;
      }
      goto L_08B3582C;
    }
L_08B3582C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B359A0;
      }
      goto L_08B35834;
    }
L_08B35834:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B3586C;
      }
      goto L_08B3583C;
    }
L_08B3583C:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3582C;
      }
      goto L_08B35844;
    }
L_08B35844:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35910;
      }
      goto L_08B3584C;
    }
L_08B3584C:
    aot_gpr_31 = (0x08B35854u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 719u, 0x08B335BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B35854u) goto L_08B35854;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B35854:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35864;
      }
      goto L_08B3585C;
    }
L_08B3585C:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B35864;
L_08B35864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3582C;
      }
      goto L_08B3586C;
    }
L_08B3586C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B3588C;
      }
      goto L_08B3587C;
    }
L_08B3587C:
    aot_gpr_4 = (15523u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B35898;
      }
      goto L_08B3588C;
    }
L_08B3588C:
    aot_gpr_4 = (15651u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B35898;
L_08B35898:
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = aot_fpr_15; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
        goto L_08B358B4;
    }
    goto L_08B358B4;
L_08B358B4:
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B358E8;
      }
      goto L_08B358C8;
    }
L_08B358C8:
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x08B358E8u);
    aot_gpr_6 = (0u | 74u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B358E8u) goto L_08B358E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B358E8:
    aot_gpr_31 = (0x08B358F0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B34444;
L_08B358F0:
    aot_gpr_31 = (0x08B358F8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 719u, 0x08B335BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B358F8u) goto L_08B358F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B358F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B35908;
      }
      goto L_08B35900;
    }
L_08B35900:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B35908;
L_08B35908:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3582C;
      }
      goto L_08B35910;
    }
L_08B35910:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B3592C;
      }
      goto L_08B3591C;
    }
L_08B3591C:
    aot_gpr_4 = (15477u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B35938;
      }
      goto L_08B3592C;
    }
L_08B3592C:
    aot_gpr_4 = (15631u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 23593u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B35938;
L_08B35938:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_15 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
        goto L_08B35958;
    }
    goto L_08B35958;
L_08B35958:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B35990;
      }
      goto L_08B3596C;
    }
L_08B3596C:
    aot_gpr_4 = (0u | 1u);
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x08B35990u);
    aot_gpr_6 = (0u | 75u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B35990u) goto L_08B35990;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B35990:
    aot_gpr_31 = (0x08B35998u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B34444;
L_08B35998:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3582C;
      }
      goto L_08B359A0;
    }
L_08B359A0:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B359B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(62)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
        goto L_08B359E0;
    }
    goto L_08B359D0;
L_08B359D0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    // nop
      if (branch_taken) {
          goto L_08B359D8;
      }
      goto L_08B359D8;
    }
L_08B359D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35A78;
      }
      goto L_08B359E0;
    }
L_08B359E0:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B359D8;
      }
      goto L_08B359E8;
    }
L_08B359E8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B35A04;
      }
      goto L_08B359F4;
    }
L_08B359F4:
    aot_gpr_4 = (15477u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B35A10;
      }
      goto L_08B35A04;
    }
L_08B35A04:
    aot_gpr_4 = (15631u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 23593u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B35A10;
L_08B35A10:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_15 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
        goto L_08B35A30;
    }
    goto L_08B35A30;
L_08B35A30:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B35A68;
      }
      goto L_08B35A44;
    }
L_08B35A44:
    aot_gpr_4 = (0u | 1u);
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x08B35A68u);
    aot_gpr_6 = (0u | 75u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B35A68u) goto L_08B35A68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B35A68:
    aot_gpr_31 = (0x08B35A70u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B34444;
L_08B35A70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B359D8;
      }
      goto L_08B35A78;
    }
L_08B35A78:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B35A88:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(62)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B35AC0;
      }
      goto L_08B35AA8;
    }
L_08B35AA8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    // nop
      if (branch_taken) {
          goto L_08B35AB8;
      }
      goto L_08B35AB0;
    }
L_08B35AB0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    // nop
      if (branch_taken) {
          goto L_08B35AD8;
      }
      goto L_08B35AB8;
    }
L_08B35AB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35BFC;
      }
      goto L_08B35AC0;
    }
L_08B35AC0:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B35AE0;
      }
      goto L_08B35AC8;
    }
L_08B35AC8:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35AB8;
      }
      goto L_08B35AD0;
    }
L_08B35AD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35B6C;
      }
      goto L_08B35AD8;
    }
L_08B35AD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35AB8;
      }
      goto L_08B35AE0;
    }
L_08B35AE0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B35B00;
      }
      goto L_08B35AF0;
    }
L_08B35AF0:
    aot_gpr_4 = (15523u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B35B0C;
      }
      goto L_08B35B00;
    }
L_08B35B00:
    aot_gpr_4 = (15651u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B35B0C;
L_08B35B0C:
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = aot_fpr_15; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
        goto L_08B35B28;
    }
    goto L_08B35B28;
L_08B35B28:
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B35B5C;
      }
      goto L_08B35B3C;
    }
L_08B35B3C:
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x08B35B5Cu);
    aot_gpr_6 = (0u | 74u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B35B5Cu) goto L_08B35B5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B35B5C:
    aot_gpr_31 = (0x08B35B64u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B34444;
L_08B35B64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35AB8;
      }
      goto L_08B35B6C;
    }
L_08B35B6C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B35B88;
      }
      goto L_08B35B78;
    }
L_08B35B78:
    aot_gpr_4 = (15477u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B35B94;
      }
      goto L_08B35B88;
    }
L_08B35B88:
    aot_gpr_4 = (15631u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 23593u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B35B94;
L_08B35B94:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_15 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
        goto L_08B35BB4;
    }
    goto L_08B35BB4;
L_08B35BB4:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B35BEC;
      }
      goto L_08B35BC8;
    }
L_08B35BC8:
    aot_gpr_4 = (0u | 1u);
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x08B35BECu);
    aot_gpr_6 = (0u | 75u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B35BECu) goto L_08B35BEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B35BEC:
    aot_gpr_31 = (0x08B35BF4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B34444;
L_08B35BF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35AB8;
      }
      goto L_08B35BFC;
    }
L_08B35BFC:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B35C0C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(62)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B35C44;
      }
      goto L_08B35C2C;
    }
L_08B35C2C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    // nop
      if (branch_taken) {
          goto L_08B35C3C;
      }
      goto L_08B35C34;
    }
L_08B35C34:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    // nop
      if (branch_taken) {
          goto L_08B35C5C;
      }
      goto L_08B35C3C;
    }
L_08B35C3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35DFC;
      }
      goto L_08B35C44;
    }
L_08B35C44:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B35CC8;
      }
      goto L_08B35C4C;
    }
L_08B35C4C:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35C3C;
      }
      goto L_08B35C54;
    }
L_08B35C54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35D6C;
      }
      goto L_08B35C5C;
    }
L_08B35C5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35CC0;
      }
      goto L_08B35C68;
    }
L_08B35C68:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08B35C78u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 615u, 0x08B32E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B35C78u) goto L_08B35C78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B35C78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35CC0;
      }
      goto L_08B35C80;
    }
L_08B35C80:
    aot_gpr_31 = (0x08B35C88u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B34050;
L_08B35C88:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B35CC0;
      }
      goto L_08B35C90;
    }
L_08B35C90:
    aot_gpr_31 = (0x08B35C98u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 727u, 0x08B336A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B35C98u) goto L_08B35C98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B35C98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35CC0;
      }
      goto L_08B35CA0;
    }
L_08B35CA0:
    aot_gpr_31 = (0x08B35CA8u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B35CA8u) goto L_08B35CA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B35CA8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u | 2u);
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(0u));
    goto L_08B35CC0;
L_08B35CC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35C3C;
      }
      goto L_08B35CC8;
    }
L_08B35CC8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B35CE8;
      }
      goto L_08B35CD8;
    }
L_08B35CD8:
    aot_gpr_4 = (15523u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B35CF4;
      }
      goto L_08B35CE8;
    }
L_08B35CE8:
    aot_gpr_4 = (15651u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B35CF4;
L_08B35CF4:
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = aot_fpr_15; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
        goto L_08B35D10;
    }
    goto L_08B35D10;
L_08B35D10:
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B35D5C;
      }
      goto L_08B35D24;
    }
L_08B35D24:
    ctx.gpr[7] = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B35D40u);
    aot_gpr_6 = (0u | 74u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B35D40u) goto L_08B35D40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B35D40:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08B35D4Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B35D4Cu) goto L_08B35D4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B35D4C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08B35D5C;
L_08B35D5C:
    aot_gpr_31 = (0x08B35D64u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B34444;
L_08B35D64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35C3C;
      }
      goto L_08B35D6C;
    }
L_08B35D6C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B35D88;
      }
      goto L_08B35D78;
    }
L_08B35D78:
    aot_gpr_4 = (15477u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B35D94;
      }
      goto L_08B35D88;
    }
L_08B35D88:
    aot_gpr_4 = (15631u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 23593u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B35D94;
L_08B35D94:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_15 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
        goto L_08B35DB4;
    }
    goto L_08B35DB4;
L_08B35DB4:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B35DEC;
      }
      goto L_08B35DC8;
    }
L_08B35DC8:
    aot_gpr_4 = (0u | 1u);
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x08B35DECu);
    aot_gpr_6 = (0u | 75u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B35DECu) goto L_08B35DEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B35DEC:
    aot_gpr_31 = (0x08B35DF4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B34444;
L_08B35DF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35C3C;
      }
      goto L_08B35DFC;
    }
L_08B35DFC:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B35E0C:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(548)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(549)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(550)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(551)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(552)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(553)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(554)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(555)));
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(aot_gpr_6));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(695)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(556))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(557))))));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(618))))));
    aot_gpr_6 = (aot_gpr_6 & 1u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35ED0;
      }
      goto L_08B35EC4;
    }
L_08B35EC4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_gpr_6 | 32768u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_6);
    goto L_08B35ED0;
L_08B35ED0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (1024u << 16u);
    ctx.gpr[7] = (aot_gpr_6 & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35EF4;
      }
      goto L_08B35EE4;
    }
L_08B35EE4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_gpr_6 | 1u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    goto L_08B35EF4;
L_08B35EF4:
    ctx.gpr[7] = (2048u << 16u);
    ctx.gpr[7] = (aot_gpr_6 & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35F14;
      }
      goto L_08B35F04;
    }
L_08B35F04:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_gpr_6 | 2u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    goto L_08B35F14;
L_08B35F14:
    ctx.gpr[7] = (4u << 16u);
    ctx.gpr[7] = (aot_gpr_6 & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35F34;
      }
      goto L_08B35F24;
    }
L_08B35F24:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_gpr_6 | 4u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    goto L_08B35F34;
L_08B35F34:
    ctx.gpr[7] = (4096u << 16u);
    ctx.gpr[7] = (aot_gpr_6 & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35F54;
      }
      goto L_08B35F44;
    }
L_08B35F44:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_gpr_6 | 8u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    goto L_08B35F54;
L_08B35F54:
    ctx.gpr[7] = (8192u << 16u);
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[7]);
    { const bool branch_taken = aot_gpr_6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35F70;
      }
      goto L_08B35F64;
    }
L_08B35F64:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_gpr_6 | 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_6);
    goto L_08B35F70;
L_08B35F70:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(617))))));
    aot_gpr_6 = (aot_gpr_6 & 8u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35F8C;
      }
      goto L_08B35F80;
    }
L_08B35F80:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_gpr_6 | 32u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_6);
    goto L_08B35F8C;
L_08B35F8C:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(615))))));
    aot_gpr_6 = (aot_gpr_6 & 1u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35FA8;
      }
      goto L_08B35F9C;
    }
L_08B35F9C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_gpr_6 | 64u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_6);
    goto L_08B35FA8;
L_08B35FA8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(236)));
    aot_gpr_6 = (aot_gpr_6 & 1u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35FC4;
      }
      goto L_08B35FB8;
    }
L_08B35FB8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_gpr_6 | 128u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_6);
    goto L_08B35FC4;
L_08B35FC4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B36030;
      }
      goto L_08B35FD0;
    }
L_08B35FD0:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(616))))));
    aot_gpr_6 = (aot_gpr_6 & 1u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B35FEC;
      }
      goto L_08B35FE0;
    }
L_08B35FE0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_gpr_6 | 256u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_6);
    goto L_08B35FEC;
L_08B35FEC:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1653))))));
    aot_gpr_6 = (aot_gpr_6 & 7u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36008;
      }
      goto L_08B35FFC;
    }
L_08B35FFC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_gpr_6 | 512u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_6);
    goto L_08B36008;
L_08B36008:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1653))))));
    aot_gpr_6 = (aot_gpr_6 & 64u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36024;
      }
      goto L_08B36018;
    }
L_08B36018:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_gpr_6 | 1024u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_6);
    goto L_08B36024;
L_08B36024:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1708)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B36100;
      }
      goto L_08B36030;
    }
L_08B36030:
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B36064;
      }
      goto L_08B3603C;
    }
L_08B3603C:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(616))))));
    aot_gpr_6 = (aot_gpr_6 & 1u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36058;
      }
      goto L_08B3604C;
    }
L_08B3604C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_gpr_6 | 256u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_6);
    goto L_08B36058;
L_08B36058:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B36100;
      }
      goto L_08B36064;
    }
L_08B36064:
    ctx.gpr[7] = (0u | 9u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B360D0;
      }
      goto L_08B36070;
    }
L_08B36070:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(616))))));
    aot_gpr_6 = (aot_gpr_6 & 1u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3608C;
      }
      goto L_08B36080;
    }
L_08B36080:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_gpr_6 | 256u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_6);
    goto L_08B3608C;
L_08B3608C:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1653))))));
    aot_gpr_6 = (aot_gpr_6 & 7u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B360A8;
      }
      goto L_08B3609C;
    }
L_08B3609C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_gpr_6 | 512u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_6);
    goto L_08B360A8;
L_08B360A8:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1653))))));
    aot_gpr_6 = (aot_gpr_6 & 64u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B360C4;
      }
      goto L_08B360B8;
    }
L_08B360B8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_gpr_6 | 1024u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_6);
    goto L_08B360C4;
L_08B360C4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1708)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B36100;
      }
      goto L_08B360D0;
    }
L_08B360D0:
    ctx.gpr[7] = (0u | 8u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B36100;
      }
      goto L_08B360DC;
    }
L_08B360DC:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(616))))));
    aot_gpr_6 = (aot_gpr_6 & 1u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B360F8;
      }
      goto L_08B360EC;
    }
L_08B360EC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_gpr_6 | 256u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_6);
    goto L_08B360F8;
L_08B360F8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1352)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B36100;
L_08B36100:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36108:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(4280));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_31 = (0x08B36138u);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36138u) goto L_08B36138;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36138:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_4 & 32768u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3614C;
      }
      goto L_08B36148;
    }
L_08B36148:
    ctx.gpr[17] = (0u | 2u);
    goto L_08B3614C;
L_08B3614C:
    aot_gpr_31 = (0x08B36154u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36154u) goto L_08B36154;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36154:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36770;
      }
      goto L_08B3615C;
    }
L_08B3615C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(45))))));
    aot_gpr_31 = (0x08B36168u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(46))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 613u, 0x08B32D90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36168u) goto L_08B36168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36168:
    aot_gpr_31 = (0x08B36170u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 217u, 0x08AECC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36170u) goto L_08B36170;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36170:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B361C0;
      }
      goto L_08B36178;
    }
L_08B36178:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08B36184u);
    aot_gpr_4 = (0u | 1584u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36184u) goto L_08B36184;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36184:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B361A4;
      }
      goto L_08B36190;
    }
L_08B36190:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B361A0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 581u, 0x08A5A7FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B361A0u) goto L_08B361A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B361A0:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08B361A4;
L_08B361A4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1280))))));
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B363D4;
      }
      goto L_08B361C0;
    }
L_08B361C0:
    aot_gpr_31 = (0x08B361C8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 168u, 0x08AECA18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B361C8u) goto L_08B361C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B361C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3620C;
      }
      goto L_08B361D0;
    }
L_08B361D0:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08B361DCu);
    aot_gpr_4 = (0u | 1184u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B361DCu) goto L_08B361DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B361DC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[19] == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
        goto L_08B36200;
    }
    goto L_08B361E8;
L_08B361E8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B361F8u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0039_entry, 39u, 689u, 0x088A2F88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B361F8u) goto L_08B361F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B361F8:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_08B36200;
L_08B36200:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B363D4;
      }
      goto L_08B3620C;
    }
L_08B3620C:
    aot_gpr_31 = (0x08B36214u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 181u, 0x08AECAA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36214u) goto L_08B36214;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36214:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3625C;
      }
      goto L_08B3621C;
    }
L_08B3621C:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08B36228u);
    aot_gpr_4 = (0u | 1920u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36228u) goto L_08B36228;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36228:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[19] == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
        goto L_08B36250;
    }
    goto L_08B36234;
L_08B36234:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B36248u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0012_entry, 12u, 92u, 0x08834A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36248u) goto L_08B36248;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36248:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_08B36250;
L_08B36250:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B363D4;
      }
      goto L_08B3625C;
    }
L_08B3625C:
    aot_gpr_31 = (0x08B36264u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 229u, 0x08AECCC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36264u) goto L_08B36264;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36264:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B362B4;
      }
      goto L_08B3626C;
    }
L_08B3626C:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08B36278u);
    aot_gpr_4 = (0u | 1632u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36278u) goto L_08B36278;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36278:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36298;
      }
      goto L_08B36284;
    }
L_08B36284:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B36294u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 304u, 0x08969648u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36294u) goto L_08B36294;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36294:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08B36298;
L_08B36298:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1280))))));
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B363D4;
      }
      goto L_08B362B4;
    }
L_08B362B4:
    aot_gpr_31 = (0x08B362BCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 241u, 0x08AECD48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B362BCu) goto L_08B362BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B362BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36300;
      }
      goto L_08B362C4;
    }
L_08B362C4:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08B362D0u);
    aot_gpr_4 = (0u | 1984u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B362D0u) goto L_08B362D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B362D0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[19] == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
        goto L_08B362F4;
    }
    goto L_08B362DC;
L_08B362DC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B362ECu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 406u, 0x08B199C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B362ECu) goto L_08B362EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B362EC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_08B362F4;
L_08B362F4:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B363D4;
      }
      goto L_08B36300;
    }
L_08B36300:
    aot_gpr_31 = (0x08B36308u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 193u, 0x08AECB2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36308u) goto L_08B36308;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36308:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3634C;
      }
      goto L_08B36310;
    }
L_08B36310:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08B3631Cu);
    aot_gpr_4 = (0u | 2080u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3631Cu) goto L_08B3631C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3631C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[19] == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
        goto L_08B36340;
    }
    goto L_08B36328;
L_08B36328:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B36338u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0122_entry, 122u, 226u, 0x089ED94Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36338u) goto L_08B36338;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36338:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_08B36340;
L_08B36340:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B363D4;
      }
      goto L_08B3634C;
    }
L_08B3634C:
    aot_gpr_31 = (0x08B36354u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 205u, 0x08AECBB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36354u) goto L_08B36354;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36354:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36398;
      }
      goto L_08B3635C;
    }
L_08B3635C:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08B36368u);
    aot_gpr_4 = (0u | 2064u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36368u) goto L_08B36368;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36368:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[19] == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
        goto L_08B3638C;
    }
    goto L_08B36374;
L_08B36374:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B36384u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 257u, 0x089D96B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36384u) goto L_08B36384;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36384:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_08B3638C;
L_08B3638C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B363D4;
      }
      goto L_08B36398;
    }
L_08B36398:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08B363A4u);
    aot_gpr_4 = (0u | 1920u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B363A4u) goto L_08B363A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B363A4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[19] == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
        goto L_08B363CC;
    }
    goto L_08B363B0;
L_08B363B0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B363C4u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0012_entry, 12u, 92u, 0x08834A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B363C4u) goto L_08B363C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B363C4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_08B363CC;
L_08B363CC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    goto L_08B363D4;
L_08B363D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-497));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_4 = (aot_gpr_4 | 64u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (16256u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B36448u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 72u, 0x08B00520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36448u) goto L_08B36448;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36448:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(548), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(37)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(549), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(38)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(550), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(39)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(551), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(552), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(41)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(553), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(42)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-129));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(554), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(43)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(613))))));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(555), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(695), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(615))))));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 | 4u);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(680), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_gpr_4 & 32768u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B364D4;
      }
      goto L_08B364C4;
    }
L_08B364C4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(618))))));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    goto L_08B364D4;
L_08B364D4:
    aot_gpr_5 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B364F4;
      }
      goto L_08B364E0;
    }
L_08B364E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (1024u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    goto L_08B364F4;
L_08B364F4:
    aot_gpr_5 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36514;
      }
      goto L_08B36500;
    }
L_08B36500:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (2048u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    goto L_08B36514;
L_08B36514:
    aot_gpr_5 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36534;
      }
      goto L_08B36520;
    }
L_08B36520:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (4u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    goto L_08B36534;
L_08B36534:
    aot_gpr_5 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36554;
      }
      goto L_08B36540;
    }
L_08B36540:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (4096u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    goto L_08B36554;
L_08B36554:
    aot_gpr_5 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36574;
      }
      goto L_08B36560;
    }
L_08B36560:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (8192u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    goto L_08B36574;
L_08B36574:
    aot_gpr_5 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36590;
      }
      goto L_08B36580;
    }
L_08B36580:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(617))))));
    aot_gpr_4 = (aot_gpr_4 | 8u);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    goto L_08B36590;
L_08B36590:
    aot_gpr_5 = (aot_gpr_4 & 64u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B365AC;
      }
      goto L_08B3659C;
    }
L_08B3659C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(615))))));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    goto L_08B365AC;
L_08B365AC:
    aot_gpr_5 = (aot_gpr_4 & 128u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(236)));
      if (branch_taken) {
          goto L_08B365F8;
      }
      goto L_08B365B8;
    }
L_08B365B8:
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(236), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(352)));
    aot_gpr_5 = (16448u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(188)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (16544u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(352)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(852)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(192)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B36620;
      }
      goto L_08B365F8;
    }
L_08B365F8:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(236), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(352)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(352)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(188)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(852)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(192)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B36620;
L_08B36620:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B36690;
      }
      goto L_08B36628;
    }
L_08B36628:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_gpr_5 & 256u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B36648;
      }
      goto L_08B36638;
    }
L_08B36638:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(616))))));
    aot_gpr_5 = (aot_gpr_5 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    goto L_08B36648;
L_08B36648:
    aot_gpr_6 = (aot_gpr_5 & 512u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3666C;
      }
      goto L_08B36654;
    }
L_08B36654:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1653))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-8));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1653), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    goto L_08B3666C;
L_08B3666C:
    aot_gpr_5 = (aot_gpr_5 & 1024u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36684;
      }
      goto L_08B36678;
    }
L_08B36678:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1653))))));
    aot_gpr_5 = (aot_gpr_5 | 64u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1653), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08B36684;
L_08B36684:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1708), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B36768;
      }
      goto L_08B36690;
    }
L_08B36690:
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B366C4;
      }
      goto L_08B3669C;
    }
L_08B3669C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_gpr_5 & 256u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B366B8;
      }
      goto L_08B366AC;
    }
L_08B366AC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(616))))));
    aot_gpr_5 = (aot_gpr_5 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08B366B8;
L_08B366B8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1352), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B36768;
      }
      goto L_08B366C4;
    }
L_08B366C4:
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B36738;
      }
      goto L_08B366D0;
    }
L_08B366D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_gpr_4 & 256u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B366F0;
      }
      goto L_08B366E0;
    }
L_08B366E0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(616))))));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    goto L_08B366F0;
L_08B366F0:
    aot_gpr_6 = (aot_gpr_4 & 512u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36714;
      }
      goto L_08B366FC;
    }
L_08B366FC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1653))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-8));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(1653), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    goto L_08B36714;
L_08B36714:
    aot_gpr_4 = (aot_gpr_4 & 1024u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3672C;
      }
      goto L_08B36720;
    }
L_08B36720:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1653))))));
    aot_gpr_4 = (aot_gpr_4 | 64u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(1653), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B3672C;
L_08B3672C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1708), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B36768;
      }
      goto L_08B36738;
    }
L_08B36738:
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B36768;
      }
      goto L_08B36744;
    }
L_08B36744:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_gpr_5 & 256u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B36760;
      }
      goto L_08B36754;
    }
L_08B36754:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(616))))));
    aot_gpr_5 = (aot_gpr_5 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08B36760;
L_08B36760:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1352), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B36768;
L_08B36768:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B36774;
      }
      goto L_08B36770;
    }
L_08B36770:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B36774;
L_08B36774:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_08B36790:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B367BC;
      }
      goto L_08B367AC;
    }
L_08B367AC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(61)));
    aot_gpr_5 = (0u | 10u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B367D4;
      }
      goto L_08B367BC;
    }
L_08B367BC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(61)));
    aot_gpr_5 = (0u | 11u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(62)));
        goto L_08B367DC;
    }
    goto L_08B367CC;
L_08B367CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3693C;
      }
      goto L_08B367D4;
    }
L_08B367D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36B40;
      }
      goto L_08B367DC;
    }
L_08B367DC:
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B3693C;
      }
      goto L_08B367E8;
    }
L_08B367E8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(62)));
    aot_gpr_5 = (0u | 7u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B3693C;
      }
      goto L_08B367F8;
    }
L_08B367F8:
    aot_gpr_31 = (0x08B36800u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36800u) goto L_08B36800;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36800:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3693C;
      }
      goto L_08B36808;
    }
L_08B36808:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(78)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3693C;
      }
      goto L_08B36814;
    }
L_08B36814:
    aot_gpr_31 = (0x08B3681Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3681Cu) goto L_08B3681C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3681C:
    aot_gpr_6 = (16000u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_31 = (0x08B36830u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 615u, 0x08B32E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36830u) goto L_08B36830;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36830:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3684C;
      }
      goto L_08B36838;
    }
L_08B36838:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9216), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1988), aot_gpr_16);
    goto L_08B3684C;
L_08B3684C:
    aot_gpr_31 = (0x08B36854u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36854u) goto L_08B36854;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36854:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3693C;
      }
      goto L_08B36860;
    }
L_08B36860:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B36870u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 703u, 0x08B33424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36870u) goto L_08B36870;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36870:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B36884;
      }
      goto L_08B36878;
    }
L_08B36878:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1992), aot_gpr_16);
    goto L_08B36884;
L_08B36884:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 244u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B3693C;
      }
      goto L_08B36894;
    }
L_08B36894:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = aot_fpr_14 - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B36920;
      }
      goto L_08B368C8;
    }
L_08B368C8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = aot_fpr_13 + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B36920;
      }
      goto L_08B368E4;
    }
L_08B368E4:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B36920;
      }
      goto L_08B36900;
    }
L_08B36900:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B36920;
      }
      goto L_08B3691C;
    }
L_08B3691C:
    aot_gpr_4 = (0u | 1u);
    goto L_08B36920;
L_08B36920:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3693C;
      }
      goto L_08B36928;
    }
L_08B36928:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9216), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1988), aot_gpr_16);
    goto L_08B3693C;
L_08B3693C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36954;
      }
      goto L_08B36948;
    }
L_08B36948:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(62)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36968;
      }
      goto L_08B36954;
    }
L_08B36954:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B36970;
      }
      goto L_08B36960;
    }
L_08B36960:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36A4C;
      }
      goto L_08B36968;
    }
L_08B36968:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36B40;
      }
      goto L_08B36970;
    }
L_08B36970:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(62)));
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B369F4;
      }
      goto L_08B36980;
    }
L_08B36980:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B369B8;
      }
      goto L_08B3698C;
    }
L_08B3698C:
    aot_gpr_31 = (0x08B36994u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36994u) goto L_08B36994;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36994:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1300)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B369B8;
      }
      goto L_08B369A4;
    }
L_08B369A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    goto L_08B369B8;
L_08B369B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36A4C;
      }
      goto L_08B369C4;
    }
L_08B369C4:
    aot_gpr_31 = (0x08B369CCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B369CCu) goto L_08B369CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B369CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1300)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B36A4C;
      }
      goto L_08B369DC;
    }
L_08B369DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
      if (branch_taken) {
          goto L_08B36A4C;
      }
      goto L_08B369F4;
    }
L_08B369F4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(62)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B36A4C;
      }
      goto L_08B36A04;
    }
L_08B36A04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36A28;
      }
      goto L_08B36A10;
    }
L_08B36A10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 | 512u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    goto L_08B36A28;
L_08B36A28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36A4C;
      }
      goto L_08B36A34;
    }
L_08B36A34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 | 512u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    goto L_08B36A4C;
L_08B36A4C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(61)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(30) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36B40;
      }
      goto L_08B36A60;
    }
L_08B36A60:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31328)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36A78:
    aot_gpr_31 = (0x08B36A80u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B36F88;
L_08B36A80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36B40;
      }
      goto L_08B36A88;
    }
L_08B36A88:
    aot_gpr_31 = (0x08B36A90u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B37FC8;
L_08B36A90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36B40;
      }
      goto L_08B36A98;
    }
L_08B36A98:
    aot_gpr_31 = (0x08B36AA0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 193u, 0x08B38938u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36AA0u) goto L_08B36AA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36AA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36B40;
      }
      goto L_08B36AA8;
    }
L_08B36AA8:
    aot_gpr_31 = (0x08B36AB0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 259u, 0x08B38D54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36AB0u) goto L_08B36AB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36AB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36B40;
      }
      goto L_08B36AB8;
    }
L_08B36AB8:
    aot_gpr_31 = (0x08B36AC0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B357FC;
L_08B36AC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36B40;
      }
      goto L_08B36AC8;
    }
L_08B36AC8:
    aot_gpr_31 = (0x08B36AD0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 372u, 0x08B3939Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36AD0u) goto L_08B36AD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36AD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36B40;
      }
      goto L_08B36AD8;
    }
L_08B36AD8:
    aot_gpr_31 = (0x08B36AE0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 445u, 0x08B397DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36AE0u) goto L_08B36AE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36AE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36B40;
      }
      goto L_08B36AE8;
    }
L_08B36AE8:
    aot_gpr_31 = (0x08B36AF0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 522u, 0x08B39E2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36AF0u) goto L_08B36AF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36AF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36B40;
      }
      goto L_08B36AF8;
    }
L_08B36AF8:
    aot_gpr_31 = (0x08B36B00u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B359B0;
L_08B36B00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36B40;
      }
      goto L_08B36B08;
    }
L_08B36B08:
    aot_gpr_31 = (0x08B36B10u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B35A88;
L_08B36B10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36B40;
      }
      goto L_08B36B18;
    }
L_08B36B18:
    aot_gpr_31 = (0x08B36B20u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 590u, 0x08B3A25Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36B20u) goto L_08B36B20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36B20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36B40;
      }
      goto L_08B36B28;
    }
L_08B36B28:
    aot_gpr_31 = (0x08B36B30u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 677u, 0x08B3A750u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36B30u) goto L_08B36B30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36B30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36B40;
      }
      goto L_08B36B38;
    }
L_08B36B38:
    aot_gpr_31 = (0x08B36B40u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B35C0C;
L_08B36B40:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36B54:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (16128u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (17096u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17056u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_12 - aot_fpr_14;
    aot_fpr_13 = aot_fpr_13 / aot_fpr_15;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (16880u << 16u);
    ctx.fpr[17] = ctx.fpr[16] + ctx.fpr[17];
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[19] = aot_fpr_13 + ctx.fpr[16];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[19]));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_13 = ctx.fpr[18] - aot_fpr_14;
    aot_gpr_6 = (0u | 49u);
    ctx.gpr[7] = (16840u << 16u);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    aot_fpr_14 = ctx.fpr[18] + aot_fpr_14;
    { const std::uint32_t aot_run_words[9]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 49u);
        goto L_08B36C0C;
    }
    goto L_08B36C0C;
L_08B36C0C:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 0u);
        goto L_08B36C18;
    }
    goto L_08B36C18;
L_08B36C18:
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[17] = (aot_gpr_5 | 0u);
        goto L_08B36C2C;
    }
    goto L_08B36C2C;
L_08B36C2C:
    aot_fpr_13 = aot_fpr_13 / aot_fpr_15;
    aot_gpr_6 = (0u | 49u);
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[17];
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 49u);
        goto L_08B36C4C;
    }
    goto L_08B36C4C;
L_08B36C4C:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 0u);
        goto L_08B36C58;
    }
    goto L_08B36C58;
L_08B36C58:
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[22] = (aot_gpr_5 | 0u);
        goto L_08B36C6C;
    }
    goto L_08B36C6C;
L_08B36C6C:
    aot_fpr_12 = aot_fpr_12 / aot_fpr_15;
    aot_gpr_6 = (0u | 49u);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[16];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 49u);
        goto L_08B36C8C;
    }
    goto L_08B36C8C;
L_08B36C8C:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 0u);
        goto L_08B36C98;
    }
    goto L_08B36C98;
L_08B36C98:
    ctx.gpr[18] = (0u | 49u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 49 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[18] = (aot_gpr_5 | 0u);
        goto L_08B36CA8;
    }
    goto L_08B36CA8;
L_08B36CA8:
    aot_fpr_12 = aot_fpr_14 / aot_fpr_15;
    aot_gpr_6 = (0u | 49u);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[17];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 49u);
        goto L_08B36CC8;
    }
    goto L_08B36CC8;
L_08B36CC8:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 0u);
        goto L_08B36CD4;
    }
    goto L_08B36CD4;
L_08B36CD4:
    ctx.gpr[19] = (0u | 49u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 49 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[19] = (aot_gpr_5 | 0u);
        goto L_08B36CE4;
    }
    goto L_08B36CE4;
L_08B36CE4:
    aot_gpr_5 = (0u | 65535u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B36CFC;
      }
      goto L_08B36CF4;
    }
L_08B36CF4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B36D0C;
      }
      goto L_08B36CFC;
    }
L_08B36CFC:
    aot_gpr_31 = (0x08B36D04u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 274u, 0x088954BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B36D04u) goto L_08B36D04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36D04:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08B36D0C;
L_08B36D0C:
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[22] << 4u);
      if (branch_taken) {
          goto L_08B36DAC;
      }
      goto L_08B36D1C;
    }
L_08B36D1C:
    ctx.gpr[22] = (ctx.gpr[22] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[22]);
    ctx.gpr[22] = (aot_gpr_4 + ctx.gpr[22]);
    goto L_08B36D28;
L_08B36D28:
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[17] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08B36D9C;
      }
      goto L_08B36D38;
    }
L_08B36D38:
    ctx.gpr[23] = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[23] = (ctx.gpr[23] - aot_gpr_4);
    goto L_08B36D44;
L_08B36D44:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[30] = (aot_gpr_5 + ctx.gpr[23]);
    aot_gpr_5 = (ctx.gpr[30] + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x08B36D5Cu);
    aot_gpr_6 = (0u | 0u);
    goto L_08B34BBC;
L_08B36D5C:
    aot_gpr_5 = (ctx.gpr[30] + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B36D6Cu);
    aot_gpr_6 = (0u | 0u);
    goto L_08B34BBC;
L_08B36D6C:
    aot_gpr_5 = (ctx.gpr[30] + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B36D7Cu);
    aot_gpr_6 = (0u | 1u);
    goto L_08B34BBC;
L_08B36D7C:
    aot_gpr_5 = (ctx.gpr[30] + static_cast<std::uint32_t>(52));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B36D8Cu);
    aot_gpr_6 = (0u | 1u);
    goto L_08B34BBC;
L_08B36D8C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08B36D44;
      }
      goto L_08B36D9C;
    }
L_08B36D9C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_08B36D28;
      }
      goto L_08B36DAC;
    }
L_08B36DAC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B36E7C;
      }
      goto L_08B36DB8;
    }
L_08B36DB8:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36E7C;
      }
      goto L_08B36DC0;
    }
L_08B36DC0:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_16 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
      aot_fpr_15 = std::bit_cast<float>(aot_run_words[3]);
    }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_14 = aot_fpr_14 + aot_fpr_15;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = ctx.fpr[16] - aot_fpr_13;
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = ctx.fpr[17] - aot_fpr_14;
    aot_fpr_13 = ctx.fpr[18] - aot_fpr_13;
    aot_fpr_14 = aot_fpr_15 - aot_fpr_14;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[16] = ctx.fpr[19] + ctx.fpr[16];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] <= ctx.fpr[0])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B36E7C;
      }
      goto L_08B36E30;
    }
L_08B36E30:
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_15;
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B36E64;
      }
      goto L_08B36E58;
    }
L_08B36E58:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B36E7C;
      }
      goto L_08B36E64;
    }
L_08B36E64:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(75)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_08B36E7C;
L_08B36E7C:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36E98;
      }
      goto L_08B36E84;
    }
L_08B36E84:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 | 512u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    goto L_08B36E98;
L_08B36E98:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36EB8;
      }
      goto L_08B36EA4;
    }
L_08B36EA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 512u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    goto L_08B36EB8;
L_08B36EB8:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
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
L_08B36EEC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(61)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_5 < static_cast<std::uint32_t>(30) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B36F80;
      }
      goto L_08B36F00;
    }
L_08B36F00:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31208)));
    jump_target = ctx.gpr[1];
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(62)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36F18:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B36F48;
      }
      goto L_08B36F20;
    }
L_08B36F20:
    if (aot_gpr_6 == 0u) {
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
        goto L_08B36F38;
    }
    goto L_08B36F28;
L_08B36F28:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B36F40;
      }
      goto L_08B36F30;
    }
L_08B36F30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36F48;
      }
      goto L_08B36F38;
    }
L_08B36F38:
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36F48;
      }
      goto L_08B36F40;
    }
L_08B36F40:
    aot_gpr_5 = (0u | 3u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08B36F48;
L_08B36F48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36F80;
      }
      goto L_08B36F50;
    }
L_08B36F50:
    if (static_cast<std::int32_t>(aot_gpr_5) > 0) {
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
        goto L_08B36F68;
    }
    goto L_08B36F58;
L_08B36F58:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
    // nop
      if (branch_taken) {
          goto L_08B36F78;
      }
      goto L_08B36F60;
    }
L_08B36F60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36F78;
      }
      goto L_08B36F68;
    }
L_08B36F68:
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36F78;
      }
      goto L_08B36F70;
    }
L_08B36F70:
    aot_gpr_5 = (0u | 2u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08B36F78;
L_08B36F78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B36F80;
      }
      goto L_08B36F80;
    }
L_08B36F80:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B36F88:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-784));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(744), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(62)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(732), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(740), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const std::uint32_t aot_run_words[9]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(748), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B371BC;
      }
      goto L_08B36FD4;
    }
L_08B36FD4:
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B37344;
      }
      goto L_08B36FDC;
    }
L_08B36FDC:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08B371C4;
      }
      goto L_08B36FE4;
    }
L_08B36FE4:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B37EC0;
      }
      goto L_08B36FEC;
    }
L_08B36FEC:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08B37F50;
      }
      goto L_08B36FF4;
    }
L_08B36FF4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B37004u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 661u, 0x08B331CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37004u) goto L_08B37004;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37004:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B37140;
      }
      goto L_08B3700C;
    }
L_08B3700C:
    aot_gpr_31 = (0x08B37014u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37014u) goto L_08B37014;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37014:
    aot_gpr_31 = (0x08B3701Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 550u, 0x0896E470u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3701Cu) goto L_08B3701C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3701C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B37114;
      }
      goto L_08B37024;
    }
L_08B37024:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(172)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 100 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B370AC;
      }
      goto L_08B37058;
    }
L_08B37058:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17330)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B370AC;
      }
      goto L_08B37064;
    }
L_08B37064:
    aot_gpr_31 = (0x08B3706Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3706Cu) goto L_08B3706C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3706C:
    aot_gpr_31 = (0x08B37074u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(636)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37074u) goto L_08B37074;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37074:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(632)));
    aot_fpr_12 = ctx.fpr[20] / aot_fpr_12;
    aot_gpr_4 = (16248u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 20972u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B370E0;
      }
      goto L_08B37098;
    }
L_08B37098:
    aot_gpr_31 = (0x08B370A0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B370A0u) goto L_08B370A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B370A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2320)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B370E0;
      }
      goto L_08B370AC;
    }
L_08B370AC:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08B370BCu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B370BCu) goto L_08B370BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B370BC:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_gpr_31 = (0x08B370CCu);
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B370CCu) goto L_08B370CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B370CC:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(2318));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08B37140;
      }
      goto L_08B370E0;
    }
L_08B370E0:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(4292));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u | 4000u);
    aot_gpr_31 = (0x08B370F4u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 399u, 0x0896D898u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B370F4u) goto L_08B370F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B370F4:
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 63u);
    aot_gpr_31 = (0x08B3710Cu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3710Cu) goto L_08B3710C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3710C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B37140;
      }
      goto L_08B37114;
    }
L_08B37114:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(4300));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u | 4000u);
    aot_gpr_31 = (0x08B37128u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 399u, 0x0896D898u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37128u) goto L_08B37128;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37128:
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 64u);
    aot_gpr_31 = (0x08B37140u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37140u) goto L_08B37140;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37140:
    aot_gpr_31 = (0x08B37148u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37148u) goto L_08B37148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37148:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B371BC;
      }
      goto L_08B37150;
    }
L_08B37150:
    aot_gpr_31 = (0x08B37158u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37158u) goto L_08B37158;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37158:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08B37164u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37164u) goto L_08B37164;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37164:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08B37178u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 650u, 0x08B3312Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37178u) goto L_08B37178;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37178:
    aot_gpr_4 = (17024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B371BC;
      }
      goto L_08B37190;
    }
L_08B37190:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_15;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_15;
    aot_fpr_14 = aot_fpr_14 + aot_fpr_15;
    aot_gpr_31 = (0x08B371BCu);
    aot_fpr_15 = ctx.fpr[16] + aot_fpr_15;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 190u, 0x08894E50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B371BCu) goto L_08B371BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B371BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B37F8C;
      }
      goto L_08B371C4;
    }
L_08B371C4:
    aot_gpr_31 = (0x08B371CCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B371CCu) goto L_08B371CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B371CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B371E8;
      }
      goto L_08B371D4;
    }
L_08B371D4:
    aot_gpr_31 = (0x08B371DCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B371DCu) goto L_08B371DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B371DC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B371E8u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 783u, 0x08B33BD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B371E8u) goto L_08B371E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B371E8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B37208;
      }
      goto L_08B371F8;
    }
L_08B371F8:
    aot_gpr_4 = (15523u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B37214;
      }
      goto L_08B37208;
    }
L_08B37208:
    aot_gpr_4 = (15651u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B37214;
L_08B37214:
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = aot_fpr_15; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08B37230;
    }
    goto L_08B37230;
L_08B37230:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_12)) && aot_fpr_13 == aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_08B37278;
      }
      goto L_08B37244;
    }
L_08B37244:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (16256u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2000));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(156), aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x08B37270u);
    aot_gpr_6 = (0u | 74u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37270u) goto L_08B37270;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37270:
    aot_gpr_31 = (0x08B37278u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 232u, 0x089910C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37278u) goto L_08B37278;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37278:
    aot_gpr_31 = (0x08B37280u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B34444;
L_08B37280:
    aot_gpr_31 = (0x08B37288u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37288u) goto L_08B37288;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37288:
    if (ctx.gpr[2] == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
        goto L_08B37314;
    }
    goto L_08B37290;
L_08B37290:
    aot_gpr_31 = (0x08B37298u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37298u) goto L_08B37298;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37298:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B37304;
      }
      goto L_08B372A4;
    }
L_08B372A4:
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B37304;
      }
      goto L_08B372AC;
    }
L_08B372AC:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31088)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B372C4:
    aot_gpr_31 = (0x08B372CCu);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B372CCu) goto L_08B372CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B372CC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1752), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08B37304;
      }
      goto L_08B372D4;
    }
L_08B372D4:
    aot_gpr_31 = (0x08B372DCu);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B372DCu) goto L_08B372DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B372DC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1400), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08B37304;
      }
      goto L_08B372E4;
    }
L_08B372E4:
    aot_gpr_31 = (0x08B372ECu);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B372ECu) goto L_08B372EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B372EC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1752), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08B37304;
      }
      goto L_08B372F4;
    }
L_08B372F4:
    aot_gpr_31 = (0x08B372FCu);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B372FCu) goto L_08B372FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B372FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1400), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08B37304;
      }
      goto L_08B37304;
    }
L_08B37304:
    aot_gpr_31 = (0x08B3730Cu);
    ctx.gpr[17] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3730Cu) goto L_08B3730C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3730C:
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(627), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    goto L_08B37314;
L_08B37314:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_15;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_15;
    aot_fpr_14 = aot_fpr_14 + aot_fpr_15;
    aot_gpr_31 = (0x08B3733Cu);
    aot_fpr_15 = ctx.fpr[16] + aot_fpr_15;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 190u, 0x08894E50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3733Cu) goto L_08B3733C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3733C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B371BC;
      }
      goto L_08B37344;
    }
L_08B37344:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(156)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
        goto L_08B37E90;
    }
    goto L_08B37360;
L_08B37360:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 65u);
    aot_gpr_31 = (0x08B37378u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37378u) goto L_08B37378;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37378:
    aot_gpr_31 = (0x08B37380u);
    ctx.gpr[17] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37380u) goto L_08B37380;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37380:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2320)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B373EC;
      }
      goto L_08B3738C;
    }
L_08B3738C:
    aot_gpr_31 = (0x08B37394u);
    ctx.gpr[17] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37394u) goto L_08B37394;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37394:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2320)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9336)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_31 = (0x08B373A8u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9336), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B373A8u) goto L_08B373A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B373A8:
    aot_gpr_31 = (0x08B373B0u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2288)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B373B0u) goto L_08B373B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B373B0:
    aot_gpr_31 = (0x08B373B8u);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2292), ctx.gpr[18]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B373B8u) goto L_08B373B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B373B8:
    aot_gpr_31 = (0x08B373C0u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2320)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B373C0u) goto L_08B373C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B373C0:
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2324), ctx.gpr[18]);
    aot_gpr_31 = (0x08B373CCu);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B373CCu) goto L_08B373CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B373CC:
    aot_gpr_31 = (0x08B373D4u);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2304), ctx.gpr[18]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B373D4u) goto L_08B373D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B373D4:
    aot_gpr_31 = (0x08B373DCu);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2288), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B373DCu) goto L_08B373DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B373DC:
    aot_gpr_31 = (0x08B373E4u);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2320), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B373E4u) goto L_08B373E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B373E4:
    aot_gpr_31 = (0x08B373ECu);
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(2288));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 16u, 0x08AB4098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B373ECu) goto L_08B373EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B373EC:
    aot_gpr_31 = (0x08B373F4u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B373F4u) goto L_08B373F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B373F4:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_31 = (0x08B37408u);
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37408u) goto L_08B37408;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37408:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(2318));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_31 = (0x08B37420u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37420u) goto L_08B37420;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37420:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B37CEC;
      }
      goto L_08B37428;
    }
L_08B37428:
    aot_gpr_31 = (0x08B37430u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37430u) goto L_08B37430;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37430:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B37484;
      }
      goto L_08B3743C;
    }
L_08B3743C:
    aot_gpr_31 = (0x08B37444u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37444u) goto L_08B37444;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37444:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B37484;
      }
      goto L_08B37454;
    }
L_08B37454:
    aot_gpr_31 = (0x08B3745Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3745Cu) goto L_08B3745C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3745C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B37484;
      }
      goto L_08B3746C;
    }
L_08B3746C:
    aot_gpr_31 = (0x08B37474u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37474u) goto L_08B37474;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37474:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B37CEC;
      }
      goto L_08B37484;
    }
L_08B37484:
    aot_gpr_31 = (0x08B3748Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3748Cu) goto L_08B3748C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3748C:
    aot_gpr_31 = (0x08B37494u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(636)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37494u) goto L_08B37494;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37494:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(632)));
    aot_fpr_12 = ctx.fpr[20] / aot_fpr_12;
    aot_gpr_4 = (16248u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 20972u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B374BC;
      }
      goto L_08B374B8;
    }
L_08B374B8:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B374BC;
L_08B374BC:
    aot_gpr_31 = (0x08B374C4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B374C4u) goto L_08B374C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B374C4:
    aot_gpr_31 = (0x08B374CCu);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(632)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B374CCu) goto L_08B374CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B374CC:
    aot_gpr_31 = (0x08B374D4u);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B374D4u) goto L_08B374D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B374D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B375C0;
      }
      goto L_08B374E0;
    }
L_08B374E0:
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B375C0;
      }
      goto L_08B374E8;
    }
L_08B374E8:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31048)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37500:
    aot_gpr_31 = (0x08B37508u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37508u) goto L_08B37508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37508:
    aot_gpr_31 = (0x08B37510u);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1752), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37510u) goto L_08B37510;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37510:
    aot_gpr_31 = (0x08B37518u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 576u, 0x088327B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37518u) goto L_08B37518;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37518:
    aot_gpr_31 = (0x08B37520u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37520u) goto L_08B37520;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37520:
    aot_gpr_31 = (0x08B37528u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 711u, 0x088331D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37528u) goto L_08B37528;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37528:
    aot_gpr_31 = (0x08B37530u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37530u) goto L_08B37530;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37530:
    aot_gpr_31 = (0x08B37538u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 681u, 0x08832FA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37538u) goto L_08B37538;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37538:
    aot_gpr_31 = (0x08B37540u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37540u) goto L_08B37540;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37540:
    aot_gpr_31 = (0x08B37548u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 696u, 0x088330BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37548u) goto L_08B37548;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B375C0;
      }
      goto L_08B37550;
    }
L_08B37550:
    aot_gpr_31 = (0x08B37558u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37558u) goto L_08B37558;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37558:
    aot_gpr_31 = (0x08B37560u);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1400), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37560u) goto L_08B37560;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37560:
    aot_gpr_31 = (0x08B37568u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 311u, 0x08A5959Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37568u) goto L_08B37568;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37568:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B375C0;
      }
      goto L_08B37570;
    }
L_08B37570:
    aot_gpr_31 = (0x08B37578u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37578u) goto L_08B37578;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37578:
    aot_gpr_31 = (0x08B37580u);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1752), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37580u) goto L_08B37580;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37580:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(464));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08B37598u);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37598u) goto L_08B37598;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37598:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B375C0;
      }
      goto L_08B375A0;
    }
L_08B375A0:
    aot_gpr_31 = (0x08B375A8u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B375A8u) goto L_08B375A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B375A8:
    aot_gpr_31 = (0x08B375B0u);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1400), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B375B0u) goto L_08B375B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B375B0:
    aot_gpr_31 = (0x08B375B8u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 311u, 0x08A5959Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B375B8u) goto L_08B375B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B375B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B375C0;
      }
      goto L_08B375C0;
    }
L_08B375C0:
    aot_gpr_31 = (0x08B375C8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B375C8u) goto L_08B375C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B375C8:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(680), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9344)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x08B375E0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9344), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B375E0u) goto L_08B375E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B375E0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B37674;
      }
      goto L_08B375F8;
    }
L_08B375F8:
    aot_gpr_31 = (0x08B37600u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37600u) goto L_08B37600;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37600:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    aot_gpr_31 = (0x08B3760Cu);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3760Cu) goto L_08B3760C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3760C:
    aot_gpr_31 = (0x08B37614u);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37614u) goto L_08B37614;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37614:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr_31 = (0x08B37620u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37620u) goto L_08B37620;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37620:
    aot_gpr_31 = (0x08B37628u);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37628u) goto L_08B37628;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37628:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr_31 = (0x08B37634u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37634u) goto L_08B37634;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37634:
    aot_gpr_31 = (0x08B3763Cu);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3763Cu) goto L_08B3763C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3763C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08B37648u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37648u) goto L_08B37648;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37648:
    aot_gpr_31 = (0x08B37650u);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37650u) goto L_08B37650;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37650:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08B3765Cu);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3765Cu) goto L_08B3765C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3765C:
    aot_gpr_31 = (0x08B37664u);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37664u) goto L_08B37664;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37664:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08B37670u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37670u) goto L_08B37670;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37670:
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08B37674;
L_08B37674:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08B37680u);
    ctx.gpr[19] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37680u) goto L_08B37680;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37680:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B376D4;
      }
      goto L_08B3768C;
    }
L_08B3768C:
    aot_gpr_31 = (0x08B37694u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37694u) goto L_08B37694;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37694:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B376D4;
      }
      goto L_08B376A4;
    }
L_08B376A4:
    aot_gpr_31 = (0x08B376ACu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B376ACu) goto L_08B376AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B376AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B376D4;
      }
      goto L_08B376BC;
    }
L_08B376BC:
    aot_gpr_31 = (0x08B376C4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B376C4u) goto L_08B376C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B376C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B376F0;
      }
      goto L_08B376D4;
    }
L_08B376D4:
    aot_gpr_31 = (0x08B376DCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B376DCu) goto L_08B376DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B376DC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(616))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B376F0;
      }
      goto L_08B376EC;
    }
L_08B376EC:
    ctx.gpr[19] = (0u | 0u);
    goto L_08B376F0;
L_08B376F0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B37CD8;
      }
      goto L_08B376F8;
    }
L_08B376F8:
    aot_gpr_31 = (0x08B37700u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37700u) goto L_08B37700;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37700:
    aot_gpr_31 = (0x08B37708u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(896))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37708u) goto L_08B37708;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37708:
    aot_gpr_31 = (0x08B37710u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 933u, 0x08AFFDDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37710u) goto L_08B37710;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37710:
    ctx.gpr[19] = (0u | 0u);
    goto L_08B37714;
L_08B37714:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B37750;
      }
      goto L_08B37720;
    }
L_08B37720:
    aot_gpr_31 = (0x08B37728u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37728u) goto L_08B37728;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37728:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(896))))));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B37750;
      }
      goto L_08B37734;
    }
L_08B37734:
    aot_gpr_31 = (0x08B3773Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3773Cu) goto L_08B3773C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3773C:
    aot_gpr_31 = (0x08B37744u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 933u, 0x08AFFDDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37744u) goto L_08B37744;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37744:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
      if (branch_taken) {
          goto L_08B37714;
      }
      goto L_08B37750;
    }
L_08B37750:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B37764;
      }
      goto L_08B3775C;
    }
L_08B3775C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08B37768;
      }
      goto L_08B37764;
    }
L_08B37764:
    ctx.gpr[18] = (0u | 1u);
    goto L_08B37768;
L_08B37768:
    aot_gpr_31 = (0x08B37770u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37770u) goto L_08B37770;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37770:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(548));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08B37780u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37780u) goto L_08B37780;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37780:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(552));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_4);
      if (branch_taken) {
          goto L_08B37CD8;
      }
      goto L_08B37790;
    }
L_08B37790:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    aot_gpr_6 = (16128u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
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
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(ctx.fpr[16]), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(ctx.fpr[16]), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_15), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(192), aot_run_words); }
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B37A78;
      }
      goto L_08B37978;
    }
L_08B37978:
    aot_gpr_5 = (ctx.gpr[19] << 4u);
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    aot_gpr_6 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 << 4u);
    aot_gpr_6 = (aot_gpr_29 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B379F0;
      }
      goto L_08B379EC;
    }
L_08B379EC:
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    goto L_08B379F0;
L_08B379F0:
    aot_gpr_5 = (ctx.gpr[20] << 4u);
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    aot_gpr_6 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 << 4u);
    aot_gpr_6 = (aot_gpr_29 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B37A68;
      }
      goto L_08B37A64;
    }
L_08B37A64:
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    goto L_08B37A68;
L_08B37A68:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B37978;
      }
      goto L_08B37A78;
    }
L_08B37A78:
    aot_gpr_4 = (ctx.gpr[20] << 4u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 17u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_6 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_6);
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(26)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(258), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(256), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(25)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(257), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 150u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(259), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < 200 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B37CD8;
      }
      goto L_08B37B20;
    }
L_08B37B20:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(240));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(352));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat_ct<0u, 1u, 2u, 3u>();
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[19] << 4u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (ctx.gpr[20] << 4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(728), ctx.gpr[20]);
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_6 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08B37BDCu);
    // nop
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37BDCu) goto L_08B37BDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37BDC:
    aot_fpr_12 = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08B37C08u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37C08u) goto L_08B37C08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37C08:
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (49344u << 16u);
    aot_gpr_31 = (0x08B37C20u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37C20u) goto L_08B37C20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37C20:
    aot_fpr_12 = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B37C4Cu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37C4Cu) goto L_08B37C4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37C4C:
    aot_gpr_4 = (48844u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_gpr_31 = (0x08B37C5Cu);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37C5Cu) goto L_08B37C5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37C5C:
    aot_fpr_12 = ctx.fpr[20] - ctx.fpr[22];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(56)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16840u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 16u>();
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    aot_gpr_4 = (0u | 24u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08B37CC0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37CC0u) goto L_08B37CC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37CC0:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (aot_gpr_4 << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < 200 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(728)));
      if (branch_taken) {
          goto L_08B37B20;
      }
      goto L_08B37CD8;
    }
L_08B37CD8:
    aot_gpr_31 = (0x08B37CE0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37CE0u) goto L_08B37CE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37CE0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B37CECu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    goto L_08B35470;
L_08B37CEC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B37E34;
      }
      goto L_08B37CF4;
    }
L_08B37CF4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17330)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B37DD4;
      }
      goto L_08B37D00;
    }
L_08B37D00:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_5 << 8u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (2238u << 16u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-6992));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(172)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-100));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_08B37D3C;
    }
    goto L_08B37D3C;
L_08B37D3C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9396)));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    ctx.gpr[7] = (17096u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_6 = (2238u << 16u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(172), aot_gpr_5);
    aot_gpr_31 = (0x08B37D7Cu);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9396), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37D7Cu) goto L_08B37D7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37D7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B37DB8;
      }
      goto L_08B37D84;
    }
L_08B37D84:
    aot_gpr_31 = (0x08B37D8Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37D8Cu) goto L_08B37D8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37D8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B37DB8;
      }
      goto L_08B37D9C;
    }
L_08B37D9C:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(4308));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u | 4000u);
    aot_gpr_31 = (0x08B37DB0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 399u, 0x0896D898u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37DB0u) goto L_08B37DB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37DB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B37DCC;
      }
      goto L_08B37DB8;
    }
L_08B37DB8:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(4316));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u | 4000u);
    aot_gpr_31 = (0x08B37DCCu);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 399u, 0x0896D898u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37DCCu) goto L_08B37DCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37DCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B37E84;
      }
      goto L_08B37DD4;
    }
L_08B37DD4:
    aot_gpr_31 = (0x08B37DDCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37DDCu) goto L_08B37DDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37DDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B37E18;
      }
      goto L_08B37DE4;
    }
L_08B37DE4:
    aot_gpr_31 = (0x08B37DECu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37DECu) goto L_08B37DEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37DEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B37E18;
      }
      goto L_08B37DFC;
    }
L_08B37DFC:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(4324));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u | 4000u);
    aot_gpr_31 = (0x08B37E10u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 399u, 0x0896D898u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37E10u) goto L_08B37E10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37E10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B37E84;
      }
      goto L_08B37E18;
    }
L_08B37E18:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(4332));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u | 4000u);
    aot_gpr_31 = (0x08B37E2Cu);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 399u, 0x0896D898u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37E2Cu) goto L_08B37E2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37E2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B37E84;
      }
      goto L_08B37E34;
    }
L_08B37E34:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B37E84;
      }
      goto L_08B37E3C;
    }
L_08B37E3C:
    aot_gpr_31 = (0x08B37E44u);
    // nop
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37E44u) goto L_08B37E44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37E44:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B37E70;
      }
      goto L_08B37E54;
    }
L_08B37E54:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(4340));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u | 4000u);
    aot_gpr_31 = (0x08B37E68u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 399u, 0x0896D898u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37E68u) goto L_08B37E68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37E68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B37E84;
      }
      goto L_08B37E70;
    }
L_08B37E70:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(4348));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u | 4000u);
    aot_gpr_31 = (0x08B37E84u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 399u, 0x0896D898u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37E84u) goto L_08B37E84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37E84:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    goto L_08B37E90;
L_08B37E90:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_15;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_15;
    aot_fpr_14 = aot_fpr_14 + aot_fpr_15;
    aot_gpr_31 = (0x08B37EB8u);
    aot_fpr_15 = ctx.fpr[16] + aot_fpr_15;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 190u, 0x08894E50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37EB8u) goto L_08B37EB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37EB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B371BC;
      }
      goto L_08B37EC0;
    }
L_08B37EC0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B37EDC;
      }
      goto L_08B37ECC;
    }
L_08B37ECC:
    aot_gpr_4 = (15477u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B37EE8;
      }
      goto L_08B37EDC;
    }
L_08B37EDC:
    aot_gpr_4 = (15631u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 23593u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B37EE8;
L_08B37EE8:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_15 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
        goto L_08B37F08;
    }
    goto L_08B37F08;
L_08B37F08:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B37F40;
      }
      goto L_08B37F1C;
    }
L_08B37F1C:
    aot_gpr_4 = (0u | 4u);
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x08B37F40u);
    aot_gpr_6 = (0u | 75u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37F40u) goto L_08B37F40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37F40:
    aot_gpr_31 = (0x08B37F48u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B34444;
L_08B37F48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B371BC;
      }
      goto L_08B37F50;
    }
L_08B37F50:
    aot_gpr_31 = (0x08B37F58u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37F58u) goto L_08B37F58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37F58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B37F6C;
      }
      goto L_08B37F60;
    }
L_08B37F60:
    aot_gpr_31 = (0x08B37F68u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37F68u) goto L_08B37F68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37F68:
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(627), static_cast<std::uint8_t>(0u));
    goto L_08B37F6C;
L_08B37F6C:
    aot_gpr_31 = (0x08B37F74u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 727u, 0x08B336A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B37F74u) goto L_08B37F74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37F74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B37F84;
      }
      goto L_08B37F7C;
    }
L_08B37F7C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B37F84;
L_08B37F84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B371BC;
      }
      goto L_08B37F8C;
    }
L_08B37F8C:
    { std::uint32_t aot_run_words[13]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(732), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      aot_gpr_16 = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      ctx.gpr[18] = aot_run_words[5];
      ctx.gpr[19] = aot_run_words[6];
      ctx.gpr[20] = aot_run_words[7];
      ctx.gpr[21] = aot_run_words[8];
      ctx.gpr[22] = aot_run_words[9];
      ctx.gpr[23] = aot_run_words[10];
      ctx.gpr[30] = aot_run_words[11];
      aot_gpr_31 = aot_run_words[12];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(784));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B37FC8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(170)));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B37FF8;
      }
      goto L_08B37FE8;
    }
L_08B37FE8:
    aot_gpr_31 = (0x08B37FF0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B34444;
L_08B37FF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 192u, 0x08B38920u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B37FF8;
    }
L_08B37FF8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(62)));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    ctx.pc = 0x08B38000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0204(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0204_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_204(Runtime &runtime) {
    runtime.register_generated_unit(204u, 0x08B34000u, 16384u, &recomp_unit_0204, &recomp_unit_0204_entry);
    runtime.register_function(0x08B34004u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3401Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34020u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34050u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34098u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B340B0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B340B8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B340C8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B340D0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B340E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B340ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B340F0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B340F8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34104u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3410Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34138u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34168u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34190u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34198u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B341A0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B341B4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B341CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B341D0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34200u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34244u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34254u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3425Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3426Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34274u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34288u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34290u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34294u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B342A0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B342A8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B342C0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B342C8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B342CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B342E0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3430Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34338u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34340u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34350u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34358u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3436Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34374u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34388u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34390u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3439Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B343A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B343BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B343C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B343D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B343DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B343E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B343F0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B343F8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34414u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3441Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34428u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34444u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3445Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34468u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34484u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B344F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B344F8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34500u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34508u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34514u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34530u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345A0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345ACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345B4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34680u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34698u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B346B4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B346BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B346C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B346D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B346FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34708u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3470Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34718u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34724u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34730u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34754u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3475Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34768u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34774u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34778u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34780u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34788u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34790u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3479Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B347C0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B347C8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B347D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B347E0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B347E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B347ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B347F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B347F8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34804u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34810u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3481Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34840u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34848u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34854u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34860u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34864u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3486Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34874u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3487Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34888u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B348ACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B348B4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B348C0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B348CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B348D0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B348D8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B348E0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B348E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B348ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B348F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3490Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3491Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34928u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3492Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3493Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3494Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34958u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34978u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34980u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34988u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34998u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3499Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B349A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B349B8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B349C0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B349D0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B349DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B349E0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B349F0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34A00u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34A0Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34A38u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34A3Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34A4Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34A5Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34A64u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34A6Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34A74u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34A84u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34A88u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34A90u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34AB0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34ACCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34AD8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34AF4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34B00u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34B0Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34B8Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34BA0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34BB4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34BBCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34BF0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C04u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C18u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C20u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C28u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C30u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C5Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C6Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C94u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CA4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CB0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CBCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CC8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CD4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CE0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CF8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D04u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D10u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D1Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D24u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D2Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D54u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D9Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DB0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DCCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E0Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E14u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E24u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E2Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E40u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E48u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E4Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E58u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E70u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E78u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E88u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E98u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EA8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EB4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EC4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34ECCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EE0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EF8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F1Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F28u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F30u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F4Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F60u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F6Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F7Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F90u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34FC4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34FF0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34FFCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35004u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35010u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35018u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3501Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35030u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35038u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35044u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35054u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3505Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35060u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3507Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B350C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B350E8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B350F0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35100u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35108u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3511Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35124u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35128u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35134u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35140u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3514Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35158u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35164u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3517Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35184u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35194u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B351A8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B351B4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B351BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B351D8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B351E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35218u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35260u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3527Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35288u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35298u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B352A0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B352B4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B352BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B352C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B352D0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B352DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B352ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B352FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3530Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35310u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35320u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3532Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35334u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35340u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35348u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35374u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353D8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35400u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35408u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35424u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35440u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35470u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3548Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35498u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B354A0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B354A8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B354B4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B354BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35570u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35584u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3558Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B355B8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B355D0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B355D8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B355F0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35604u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3561Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35630u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35670u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35684u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B356A8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B356BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B356C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B356CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B356D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B356DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B356E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B356ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B356F0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B356F8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35714u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3572Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3576Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35784u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B357A8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B357C0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B357C8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B357D0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B357D8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B357E0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B357E8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B357F0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B357F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B357FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3581Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35824u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3582Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35834u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3583Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35844u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3584Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35854u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3585Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35864u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3586Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3587Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3588Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35898u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B358B4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B358C8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B358E8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B358F0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B358F8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35900u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35908u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35910u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3591Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3592Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35938u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35958u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3596Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35990u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35998u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B359A0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B359B0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B359D0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B359D8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B359E0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B359E8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B359F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35A04u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35A10u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35A30u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35A44u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35A68u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35A70u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35A78u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35A88u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35AA8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35AB0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35AB8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35AC0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35AC8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35AD0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35AD8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35AE0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35AF0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B00u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B0Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B28u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B3Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B5Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B64u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B6Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B78u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B88u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B94u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35BB4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35BC8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35BECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35BF4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35BFCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35C0Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35C2Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35C34u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35C3Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35C44u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35C4Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35C54u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35C5Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35C68u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35C78u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35C80u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35C88u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35C90u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35C98u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35CA0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35CA8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35CC0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35CC8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35CD8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35CE8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35CF4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35D10u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35D24u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35D40u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35D4Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35D5Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35D64u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35D6Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35D78u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35D88u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35D94u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35DB4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35DC8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35DECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35DF4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35DFCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E0Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35EC4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35ED0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35EE4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35EF4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35F04u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35F14u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35F24u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35F34u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35F44u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35F54u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35F64u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35F70u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35F80u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35F8Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35F9Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35FA8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35FB8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35FC4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35FD0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35FE0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35FECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35FFCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36008u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36018u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36024u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36030u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3603Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3604Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36058u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36064u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36070u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36080u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3608Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3609Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B360A8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B360B8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B360C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B360D0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B360DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B360ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B360F8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36100u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36108u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36138u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36148u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3614Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36154u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3615Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36168u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36170u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36178u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36184u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36190u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B361A0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B361A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B361C0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B361C8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B361D0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B361DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B361E8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B361F8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36200u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3620Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36214u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3621Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36228u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36234u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36248u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36250u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3625Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36264u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3626Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36278u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36284u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36294u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36298u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B362B4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B362BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B362C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B362D0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B362DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B362ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B362F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36300u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36308u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36310u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3631Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36328u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36338u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36340u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3634Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36354u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3635Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36368u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36374u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36384u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3638Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36398u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B363A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B363B0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B363C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B363CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B363D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36448u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B364C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B364D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B364E0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B364F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36500u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36514u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36520u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36534u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36540u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36554u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36560u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36574u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36580u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36590u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3659Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B365ACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B365B8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B365F8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36620u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36628u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36638u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36648u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36654u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3666Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36678u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36684u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36690u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3669Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B366ACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B366B8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B366C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B366D0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B366E0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B366F0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B366FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36714u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36720u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3672Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36738u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36744u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36754u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36760u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36768u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36770u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36774u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36790u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B367ACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B367BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B367CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B367D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B367DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B367E8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B367F8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36800u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36808u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36814u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3681Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36830u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36838u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3684Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36854u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36860u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36870u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36878u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36884u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36894u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B368C8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B368E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36900u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3691Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36920u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36928u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3693Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36948u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36954u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36960u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36968u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36970u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36980u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3698Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36994u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B369A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B369B8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B369C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B369CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B369DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B369F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A04u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A10u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A28u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A34u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A4Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A60u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A78u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A80u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A88u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A90u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A98u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AA0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AA8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AB0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AB8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AC0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AC8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AD0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AD8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AE0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AE8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AF0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AF8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B00u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B08u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B10u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B18u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B20u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B28u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B30u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B38u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B40u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B54u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36C0Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36C18u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36C2Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36C4Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36C58u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36C6Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36C8Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36C98u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36CA8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36CC8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36CD4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36CE4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36CF4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36CFCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36D04u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36D0Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36D1Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36D28u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36D38u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36D44u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36D5Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36D6Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36D7Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36D8Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36D9Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36DACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36DB8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36DC0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36E30u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36E58u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36E64u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36E7Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36E84u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36E98u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36EA4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36EB8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36EECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36F00u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36F18u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36F20u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36F28u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36F30u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36F38u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36F40u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36F48u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36F50u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36F58u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36F60u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36F68u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36F70u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36F78u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36F80u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36F88u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36FD4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36FDCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36FE4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36FECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36FF4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37004u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3700Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37014u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3701Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37024u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37058u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37064u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3706Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37074u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37098u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B370A0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B370ACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B370BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B370CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B370E0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B370F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3710Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37114u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37128u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37140u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37148u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37150u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37158u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37164u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37178u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37190u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B371BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B371C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B371CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B371D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B371DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B371E8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B371F8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37208u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37214u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37230u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37244u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37270u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37278u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37280u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37288u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37290u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37298u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B372A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B372ACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B372C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B372CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B372D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B372DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B372E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B372ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B372F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B372FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37304u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3730Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37314u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3733Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37344u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37360u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37378u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37380u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3738Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37394u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B373A8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B373B0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B373B8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B373C0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B373CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B373D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B373DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B373E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B373ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B373F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37408u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37420u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37428u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37430u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3743Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37444u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37454u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3745Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3746Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37474u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37484u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3748Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37494u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B374B8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B374BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B374C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B374CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B374D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B374E0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B374E8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37500u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37508u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37510u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37518u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37520u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37528u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37530u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37538u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37540u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37548u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37550u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37558u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37560u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37568u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37570u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37578u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37580u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37598u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B375A0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B375A8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B375B0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B375B8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B375C0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B375C8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B375E0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B375F8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37600u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3760Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37614u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37620u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37628u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37634u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3763Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37648u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37650u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3765Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37664u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37670u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37674u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37680u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3768Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37694u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B376A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B376ACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B376BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B376C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B376D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B376DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B376ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B376F0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B376F8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37700u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37708u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37710u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37714u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37720u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37728u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37734u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3773Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37744u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37750u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3775Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37764u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37768u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37770u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37780u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37790u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37978u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B379ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B379F0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A64u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A68u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A78u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37B20u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37BDCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37C08u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37C20u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37C4Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37C5Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37CC0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37CD8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37CE0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37CECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37CF4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D00u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D3Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D7Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D84u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D8Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D9Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DB0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DB8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DCCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DD4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DDCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DE4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DFCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E10u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E18u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E2Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E34u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E3Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E44u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E54u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E68u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E70u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E84u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E90u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37EB8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37EC0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37ECCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37EDCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37EE8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37F08u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37F1Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37F40u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37F48u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37F50u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37F58u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37F60u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37F68u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37F6Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37F74u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37F7Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37F84u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37F8Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37FC8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37FE8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37FF0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37FF8u, &recomp_unit_0204, "recomp_unit_0204");
}
} // namespace psprecomp
