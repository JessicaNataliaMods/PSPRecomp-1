#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0073[4092] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 6, 7, 0, 8, 0, 0,
    0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 16,
    0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 20, 0, 0, 21, 0, 22, 0, 0, 23, 0, 24, 0, 0, 25, 0,
    0, 26, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0,
    33, 0, 34, 0, 35, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 39, 0, 0, 40, 0, 41, 0, 42, 0, 0, 43, 0, 0, 0, 44, 0, 0,
    0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 48, 0, 0, 0, 49, 0, 50, 0, 51, 0, 52, 0, 0, 53,
    0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 0, 57, 0, 0, 0, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74,
    0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 80, 0, 81, 82, 0, 83, 0,
    0, 0, 0, 0, 0, 84, 0, 0, 85, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0,
    0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 103, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108,
    0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 113, 114, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 118, 0,
    0, 0, 119, 0, 0, 0, 120, 121, 0, 122, 0, 0, 0, 123, 124, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 128, 0, 0, 0, 129,
    0, 0, 130, 0, 0, 0, 131, 132, 0, 133, 0, 0, 0, 134, 135, 0, 136, 0, 0, 0, 137, 138, 0, 139, 0, 0, 0, 140, 141, 0, 142, 0,
    0, 0, 143, 144, 0, 145, 0, 0, 0, 146, 147, 0, 148, 0, 0, 0, 149, 150, 0, 151, 0, 0, 0, 152, 153, 0, 154, 0, 0, 0, 155, 156,
    0, 157, 0, 0, 0, 158, 159, 0, 160, 0, 0, 0, 161, 162, 0, 163, 0, 0, 0, 164, 165, 0, 166, 0, 0, 0, 167, 168, 0, 169, 0, 170,
    171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 181, 0, 182, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186,
    0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 194,
    0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 197, 0, 198, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 203,
    0, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 214,
    0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 219, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0,
    0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 226, 227, 0, 0, 228, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 234, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0,
    0, 0, 237, 0, 0, 0, 238, 0, 0, 239, 0, 240, 0, 0, 241, 0, 242, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 246, 0,
    247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 250, 0, 251, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0,
    0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 257, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 262,
    0, 263, 264, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 271, 0, 272,
    0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 276, 0, 277, 278, 0, 0, 279, 0, 0, 0, 280, 0, 0, 281, 0, 282, 283, 0,
    0, 284, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0,
    0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 302,
    0, 303, 0, 0, 0, 0, 304, 0, 305, 0, 306, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 310,
    0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0,
    318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0,
    0, 0, 0, 323, 0, 324, 325, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 331, 0, 0, 332,
    0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 339, 0, 340, 341, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0,
    0, 346, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 355, 0, 356, 357, 0, 358, 0, 359, 0, 0, 0,
    0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0,
    367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 371, 0, 372, 0,
    0, 0, 373, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0,
    0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0,
    0, 0, 0, 383, 0, 384, 0, 385, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 395, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0,
    0, 400, 0, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 405, 0, 0, 0, 0, 406, 0, 407, 0, 0, 408, 0, 0, 0, 409, 0,
    0, 410, 0, 0, 411, 0, 0, 412, 0, 413, 0, 0, 0, 0, 414, 0, 415, 0, 0, 416, 0, 417, 0, 418, 0, 419, 0, 420, 0, 0, 0, 421,
    0, 0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 429, 0, 0, 430, 0,
    0, 431, 0, 0, 432, 0, 433, 0, 0, 0, 0, 434, 0, 435, 0, 0, 436, 0, 437, 0, 0, 0, 438, 0, 439, 0, 440, 0, 441, 0, 0, 0,
    442, 0, 0, 443, 0, 0, 444, 0, 445, 0, 0, 0, 446, 0, 0, 447, 0, 0, 448, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 456, 0, 457, 0, 458,
    0, 0, 0, 0, 459, 0, 460, 0, 461, 0, 462, 0, 0, 463, 0, 464, 0, 0, 0, 0, 465, 0, 466, 0, 0, 0, 467, 0, 0, 468, 0, 0,
    0, 0, 0, 469, 0, 470, 0, 471, 0, 0, 0, 472, 0, 0, 473, 0, 0, 0, 0, 0, 474, 0, 475, 0, 0, 0, 0, 476, 0, 477, 0, 0,
    0, 478, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 481, 0, 482, 0, 483, 0, 484, 0, 485, 0, 0, 0, 0, 486, 0, 487, 0, 0, 488, 0,
    489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 493, 0, 0, 0, 0, 494, 0, 495,
    0, 496, 0, 0, 0, 0, 497, 0, 0, 498, 0, 499, 0, 0, 0, 0, 500, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 503, 0, 0,
    0, 0, 504, 0, 0, 505, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0,
    0, 0, 512, 0, 513, 0, 514, 0, 0, 0, 0, 515, 0, 516, 0, 0, 0, 517, 0, 0, 518, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 0,
    0, 521, 0, 0, 0, 522, 0, 523, 0, 0, 0, 524, 0, 0, 525, 0, 0, 0, 526, 527, 0, 528, 0, 0, 0, 529, 530, 0, 531, 0, 0, 0,
    532, 533, 0, 534, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 537, 0, 0, 0, 0, 0, 538, 0, 0, 539, 0,
    540, 0, 0, 0, 0, 541, 0, 542, 0, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 545, 0, 0, 546, 0, 547, 0, 548, 0, 549, 0, 550, 0,
    551, 0, 552, 0, 553, 0, 554, 0, 555, 556, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0, 0, 0, 559, 0, 560, 0, 0, 0, 0, 561, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 563, 0, 0, 564, 565, 0, 566, 567, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0,
    0, 0, 0, 570, 0, 0, 0, 571, 572, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 576, 0, 577, 0, 0, 0, 578, 0, 0, 0,
    0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 583, 0, 0, 584, 0, 0, 0, 585, 0, 586, 0, 0, 0,
    0, 0, 0, 0, 0, 587, 0, 0, 0, 588, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 0, 0, 591, 0, 0, 592, 0, 0, 593, 0, 594, 0,
    0, 0, 0, 0, 0, 595, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0, 599, 0, 600, 0, 0, 601, 0, 602, 0,
    0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 605, 0, 0, 0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 608, 0, 0, 0, 609,
    0, 0, 0, 0, 0, 610, 0, 0, 611, 0, 0, 612, 0, 0, 0, 613, 0, 614, 0, 0, 615, 0, 616, 0, 0, 617, 0, 618, 0, 0, 0, 0,
    619, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 621, 0, 0, 622, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 625, 0, 626, 0, 627,
    0, 0, 628, 629, 0, 630, 631, 0, 632, 633, 0, 634, 635, 0, 636, 637, 0, 638, 639, 0, 0, 0, 0, 640, 0, 0, 0, 641, 0, 0, 642, 0,
    0, 0, 0, 0, 643, 0, 0, 644, 0, 0, 0, 645, 0, 646, 0, 0, 0, 647, 0, 0, 648, 0, 649, 0, 650, 0, 0, 0, 651, 0, 0, 652,
    0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 655, 0, 0, 656, 0, 0, 657, 0, 0, 658, 0, 659, 0, 660, 0, 0, 0, 661, 0, 0, 662, 0,
    663, 0, 664, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 0, 0, 668, 0, 669, 0, 0,
    0, 0, 670, 0, 671, 0, 0, 0, 0, 0, 672, 0, 673, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 676,
    0, 0, 0, 0, 677, 0, 678, 0, 0, 0, 0, 0, 679, 0, 680, 0, 681, 0, 682, 0, 683, 0, 0, 0, 0, 0, 684, 0, 685, 0, 686, 0,
    0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 689, 0, 690, 0, 0, 0, 691, 0, 692, 0, 693, 0, 694, 0, 695, 0, 0, 0, 0,
    0, 0, 696, 0, 0, 0, 0, 0, 697, 0, 698, 0, 699, 0, 0, 0, 0, 700, 0, 0, 701, 0, 702, 0, 0, 0, 703, 0, 704, 0, 0, 0,
    0, 705, 0, 0, 706, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 709, 0, 0, 0, 0, 710, 0, 0, 711, 0, 712, 0, 0,
    0, 713, 0, 714, 0, 715, 0, 0, 0, 0, 716, 0, 0, 0, 717, 0, 718, 0, 0, 0, 0, 0, 719, 0, 720, 0, 721, 0, 0, 0, 0, 0,
    0, 0, 722, 0, 723, 0, 0, 0, 0, 0, 724, 0, 725, 0, 726, 0, 0, 0, 727, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729,
    0, 730, 0, 0, 0, 0, 0, 731, 0, 732, 0, 733, 0, 734, 0, 0, 0, 735, 0, 736, 0, 737, 0, 738, 0, 739, 0, 0, 0, 0, 0, 0,
    740, 0, 741, 0, 742, 0, 743, 0, 0, 744, 0, 0, 745, 0, 746, 0, 747, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 751, 0, 0, 0, 0, 0, 0, 752, 0, 753, 0, 754, 0, 0,
    0, 0, 755, 0, 756, 0, 0, 0, 0, 757, 0, 758, 0, 759, 0, 0, 0, 0, 760, 0, 761, 0, 762, 0, 0, 763, 0, 764, 0, 0, 0, 0,
    0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0,
    0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 773, 0, 0, 0, 774, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 776, 0, 777, 778, 0, 779, 780, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 782, 0,
    783, 0, 784, 785, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 788, 0, 789, 790, 0, 791, 792, 0, 0, 0, 0, 0,
    0, 793, 0, 0, 0, 0, 794, 0, 795, 0, 796, 797, 0, 798, 0, 0, 0, 0, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 800, 0, 801, 802,
    0, 803, 804, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 806, 0, 807, 0, 808, 809, 0, 810, 0, 0, 0, 0, 0, 0, 0, 0, 0, 811,
    0, 0, 0, 0, 812, 0, 813, 814, 0, 815, 816, 0, 0, 0, 0, 0, 0, 817, 0, 0, 0, 0, 818, 0, 819, 0, 820, 821, 0, 822, 0, 0,
    0, 0, 0, 0, 0, 0, 823, 0, 0, 0, 0, 0, 0, 0, 824, 825, 0, 0, 0, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 0,
    827, 828, 0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 0, 0, 0, 0, 830, 831, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 0, 0, 0, 0,
    833, 834, 0, 0, 0, 0, 835, 0, 0, 0, 836, 0, 0, 0, 837, 0, 0, 838, 0, 0, 0, 0, 0, 839, 0, 0, 840, 0, 0, 0, 0, 0,
    841, 0, 0, 842, 0, 0, 0, 0, 0, 843, 0, 0, 844, 0, 0, 0, 0, 0, 845, 0, 0, 846, 0, 0, 0, 0, 0, 847, 0, 0, 848, 0,
    0, 0, 0, 0, 849, 0, 0, 850, 0, 0, 0, 0, 0, 851, 0, 0, 852, 0, 0, 0, 0, 0, 853, 0, 0, 0, 854, 0, 0, 0, 855, 0,
    0, 0, 856, 0, 0, 857, 0, 0, 0, 0, 0, 858, 0, 0, 859, 0, 0, 0, 0, 0, 860, 0, 0, 861, 0, 0, 0, 0, 0, 862, 0, 0,
    863, 0, 0, 0, 0, 0, 864, 0, 0, 865, 0, 0, 0, 0, 0, 866, 0, 0, 867, 0, 0, 0, 0, 0, 868, 0, 0, 869, 0, 0, 0, 0,
    0, 870, 0, 0, 871, 0, 0, 0, 0, 872, 0, 873, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 874, 0, 0, 0, 0, 0, 875, 0, 876, 877, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 878, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 879, 0, 880, 0, 0, 881, 0, 0, 882, 0, 0, 883, 0, 0, 884, 0, 0, 885, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    886, 0, 0, 887, 0, 0, 0, 0, 888, 0, 0, 0, 889, 0, 0, 0, 0, 0, 0, 890, 0, 0, 891, 0, 892, 0, 0, 0, 893, 0, 0, 894,
    0, 895, 0, 0, 0, 896, 0, 897, 0, 0, 898, 0, 899, 0, 0, 0, 900, 0, 901, 0, 0, 902, 0, 903, 0, 0, 0, 904, 0, 905, 0, 0,
    906, 0, 907, 0, 0, 0, 908, 0, 909, 0, 910, 0, 911, 0, 912, 0, 0, 913, 0, 914, 0, 0, 915, 0, 916, 0, 917, 0, 0, 0, 918, 0,
    0, 0, 919, 0, 0, 920, 0, 0, 0, 0, 0, 0, 0, 0, 0, 921, 0, 0, 0, 922, 0, 0, 0, 0, 0, 0, 923, 0, 0, 0, 924, 0,
    0, 0, 0, 0, 0, 925, 0, 0, 0, 926, 0, 0, 0, 0, 0, 0, 0, 0, 0, 927, 0, 0, 0, 928, 0, 0, 0, 0, 0, 0, 929, 0,
    930, 0, 0, 0, 931, 0, 0, 0, 0, 932, 0, 0, 0, 0, 0, 0, 0, 933, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 934, 0,
    935, 0, 0, 936, 0, 0, 937, 0, 0, 938, 0, 0, 939, 0, 0, 940, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 941, 0,
    0, 942, 0, 943, 0, 0, 0, 944, 0, 945, 0, 946, 0, 0, 947, 0, 948, 0, 0, 0, 949, 0, 950, 0, 0, 951, 0, 952, 0, 0, 0, 953,
    0, 954, 0, 0, 955, 0, 956, 0, 0, 0, 957, 0, 958, 0, 0, 959, 0, 960, 0, 0, 0, 961, 0, 962, 0, 0, 963, 0, 964, 0, 0, 0,
    965, 0, 966, 0, 967, 0, 0, 968, 0, 969, 0, 0, 970, 0, 971, 0, 972, 0, 0, 0, 973, 0, 0, 0, 974, 0, 0, 975,
};
void recomp_unit_0073_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,31,16,6,29 fprs=12,13,20,14 gpr_occ=4058 fpr_occ=755 gpr_total=5206 fpr_total=840
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[31] = aot_gpr_31; ctx.gpr[16] = aot_gpr_16; ctx.gpr[6] = aot_gpr_6; ctx.gpr[29] = aot_gpr_29; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[20] = aot_fpr_20; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_29 = ctx.gpr[29]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08928000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0073[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08928000;
    case 2u: goto L_08928024;
    case 3u: goto L_0892804C;
    case 4u: goto L_08928058;
    case 5u: goto L_08928060;
    case 6u: goto L_08928068;
    case 7u: goto L_0892806C;
    case 8u: goto L_08928074;
    case 9u: goto L_08928084;
    case 10u: goto L_08928090;
    case 11u: goto L_089280A0;
    case 12u: goto L_089280B8;
    case 13u: goto L_089280C4;
    case 14u: goto L_089280D8;
    case 15u: goto L_089280E8;
    case 16u: goto L_089280FC;
    case 17u: goto L_08928108;
    case 18u: goto L_0892812C;
    case 19u: goto L_08928134;
    case 20u: goto L_08928144;
    case 21u: goto L_08928150;
    case 22u: goto L_08928158;
    case 23u: goto L_08928164;
    case 24u: goto L_0892816C;
    case 25u: goto L_08928178;
    case 26u: goto L_08928184;
    case 27u: goto L_08928190;
    case 28u: goto L_089281A0;
    case 29u: goto L_089281CC;
    case 30u: goto L_089281D4;
    case 31u: goto L_089281E8;
    case 32u: goto L_089281F0;
    case 33u: goto L_08928200;
    case 34u: goto L_08928208;
    case 35u: goto L_08928210;
    case 36u: goto L_0892821C;
    case 37u: goto L_0892822C;
    case 38u: goto L_08928234;
    case 39u: goto L_0892823C;
    case 40u: goto L_08928248;
    case 41u: goto L_08928250;
    case 42u: goto L_08928258;
    case 43u: goto L_08928264;
    case 44u: goto L_08928274;
    case 45u: goto L_08928288;
    case 46u: goto L_089282B0;
    case 47u: goto L_089282C0;
    case 48u: goto L_089282C8;
    case 49u: goto L_089282D8;
    case 50u: goto L_089282E0;
    case 51u: goto L_089282E8;
    case 52u: goto L_089282F0;
    case 53u: goto L_089282FC;
    case 54u: goto L_08928310;
    case 55u: goto L_08928318;
    case 56u: goto L_08928320;
    case 57u: goto L_0892832C;
    case 58u: goto L_08928340;
    case 59u: goto L_08928348;
    case 60u: goto L_08928350;
    case 61u: goto L_0892836C;
    case 62u: goto L_08928374;
    case 63u: goto L_08928380;
    case 64u: goto L_0892839C;
    case 65u: goto L_089283A8;
    case 66u: goto L_089283B4;
    case 67u: goto L_089283C0;
    case 68u: goto L_089283CC;
    case 69u: goto L_089283E4;
    case 70u: goto L_08928454;
    case 71u: goto L_08928464;
    case 72u: goto L_08928470;
    case 73u: goto L_089284A4;
    case 74u: goto L_089284FC;
    case 75u: goto L_08928504;
    case 76u: goto L_08928520;
    case 77u: goto L_08928534;
    case 78u: goto L_0892854C;
    case 79u: goto L_0892855C;
    case 80u: goto L_08928564;
    case 81u: goto L_0892856C;
    case 82u: goto L_08928570;
    case 83u: goto L_08928578;
    case 84u: goto L_08928594;
    case 85u: goto L_089285A0;
    case 86u: goto L_089285A4;
    case 87u: goto L_08928628;
    case 88u: goto L_08928690;
    case 89u: goto L_089286B0;
    case 90u: goto L_08928728;
    case 91u: goto L_08928760;
    case 92u: goto L_08928768;
    case 93u: goto L_089287B8;
    case 94u: goto L_089287E8;
    case 95u: goto L_089287F4;
    case 96u: goto L_08928808;
    case 97u: goto L_0892881C;
    case 98u: goto L_0892882C;
    case 99u: goto L_08928840;
    case 100u: goto L_0892884C;
    case 101u: goto L_089288B4;
    case 102u: goto L_089288C0;
    case 103u: goto L_089288C4;
    case 104u: goto L_089288DC;
    case 105u: goto L_089288E8;
    case 106u: goto L_089288F4;
    case 107u: goto L_0892892C;
    case 108u: goto L_0892897C;
    case 109u: goto L_0892898C;
    case 110u: goto L_0892899C;
    case 111u: goto L_089289AC;
    case 112u: goto L_089289BC;
    case 113u: goto L_089289C0;
    case 114u: goto L_089289C4;
    case 115u: goto L_089289CC;
    case 116u: goto L_089289DC;
    case 117u: goto L_089289EC;
    case 118u: goto L_089289F8;
    case 119u: goto L_08928A08;
    case 120u: goto L_08928A18;
    case 121u: goto L_08928A1C;
    case 122u: goto L_08928A24;
    case 123u: goto L_08928A34;
    case 124u: goto L_08928A38;
    case 125u: goto L_08928A40;
    case 126u: goto L_08928A58;
    case 127u: goto L_08928A64;
    case 128u: goto L_08928A6C;
    case 129u: goto L_08928A7C;
    case 130u: goto L_08928A88;
    case 131u: goto L_08928A98;
    case 132u: goto L_08928A9C;
    case 133u: goto L_08928AA4;
    case 134u: goto L_08928AB4;
    case 135u: goto L_08928AB8;
    case 136u: goto L_08928AC0;
    case 137u: goto L_08928AD0;
    case 138u: goto L_08928AD4;
    case 139u: goto L_08928ADC;
    case 140u: goto L_08928AEC;
    case 141u: goto L_08928AF0;
    case 142u: goto L_08928AF8;
    case 143u: goto L_08928B08;
    case 144u: goto L_08928B0C;
    case 145u: goto L_08928B14;
    case 146u: goto L_08928B24;
    case 147u: goto L_08928B28;
    case 148u: goto L_08928B30;
    case 149u: goto L_08928B40;
    case 150u: goto L_08928B44;
    case 151u: goto L_08928B4C;
    case 152u: goto L_08928B5C;
    case 153u: goto L_08928B60;
    case 154u: goto L_08928B68;
    case 155u: goto L_08928B78;
    case 156u: goto L_08928B7C;
    case 157u: goto L_08928B84;
    case 158u: goto L_08928B94;
    case 159u: goto L_08928B98;
    case 160u: goto L_08928BA0;
    case 161u: goto L_08928BB0;
    case 162u: goto L_08928BB4;
    case 163u: goto L_08928BBC;
    case 164u: goto L_08928BCC;
    case 165u: goto L_08928BD0;
    case 166u: goto L_08928BD8;
    case 167u: goto L_08928BE8;
    case 168u: goto L_08928BEC;
    case 169u: goto L_08928BF4;
    case 170u: goto L_08928BFC;
    case 171u: goto L_08928C00;
    case 172u: goto L_08928C08;
    case 173u: goto L_08928C38;
    case 174u: goto L_08928C40;
    case 175u: goto L_08928C4C;
    case 176u: goto L_08928C64;
    case 177u: goto L_08928C74;
    case 178u: goto L_08928C80;
    case 179u: goto L_08928CA0;
    case 180u: goto L_08928CB0;
    case 181u: goto L_08928CB8;
    case 182u: goto L_08928CC0;
    case 183u: goto L_08928CC8;
    case 184u: goto L_08928CDC;
    case 185u: goto L_08928CEC;
    case 186u: goto L_08928CFC;
    case 187u: goto L_08928D0C;
    case 188u: goto L_08928D18;
    case 189u: goto L_08928D2C;
    case 190u: goto L_08928D44;
    case 191u: goto L_08928D50;
    case 192u: goto L_08928D58;
    case 193u: goto L_08928D68;
    case 194u: goto L_08928D7C;
    case 195u: goto L_08928D90;
    case 196u: goto L_08928DA0;
    case 197u: goto L_08928DA8;
    case 198u: goto L_08928DB0;
    case 199u: goto L_08928DB8;
    case 200u: goto L_08928DC8;
    case 201u: goto L_08928DD8;
    case 202u: goto L_08928DE0;
    case 203u: goto L_08928DFC;
    case 204u: goto L_08928E08;
    case 205u: goto L_08928E10;
    case 206u: goto L_08928E24;
    case 207u: goto L_08928E30;
    case 208u: goto L_08928E38;
    case 209u: goto L_08928E40;
    case 210u: goto L_08928E48;
    case 211u: goto L_08928E50;
    case 212u: goto L_08928E60;
    case 213u: goto L_08928E74;
    case 214u: goto L_08928E7C;
    case 215u: goto L_08928E8C;
    case 216u: goto L_08928E9C;
    case 217u: goto L_08928EB0;
    case 218u: goto L_08928EC0;
    case 219u: goto L_08928EC8;
    case 220u: goto L_08928ECC;
    case 221u: goto L_08928EE8;
    case 222u: goto L_08928EF8;
    case 223u: goto L_08928F04;
    case 224u: goto L_08928F14;
    case 225u: goto L_08928F20;
    case 226u: goto L_08928F28;
    case 227u: goto L_08928F2C;
    case 228u: goto L_08928F38;
    case 229u: goto L_08928F44;
    case 230u: goto L_08928F4C;
    case 231u: goto L_08928FA8;
    case 232u: goto L_08928FBC;
    case 233u: goto L_08928FD0;
    case 234u: goto L_08928FD4;
    case 235u: goto L_08928FE0;
    case 236u: goto L_08928FF4;
    case 237u: goto L_08929008;
    case 238u: goto L_08929018;
    case 239u: goto L_08929024;
    case 240u: goto L_0892902C;
    case 241u: goto L_08929038;
    case 242u: goto L_08929040;
    case 243u: goto L_08929044;
    case 244u: goto L_08929058;
    case 245u: goto L_0892906C;
    case 246u: goto L_08929078;
    case 247u: goto L_08929080;
    case 248u: goto L_089290A8;
    case 249u: goto L_089290B8;
    case 250u: goto L_089290C0;
    case 251u: goto L_089290C8;
    case 252u: goto L_089290CC;
    case 253u: goto L_089290E4;
    case 254u: goto L_089290F8;
    case 255u: goto L_08929114;
    case 256u: goto L_08929120;
    case 257u: goto L_08929128;
    case 258u: goto L_08929134;
    case 259u: goto L_0892913C;
    case 260u: goto L_08929164;
    case 261u: goto L_08929174;
    case 262u: goto L_0892917C;
    case 263u: goto L_08929184;
    case 264u: goto L_08929188;
    case 265u: goto L_089291A0;
    case 266u: goto L_089291AC;
    case 267u: goto L_089291B8;
    case 268u: goto L_089291C0;
    case 269u: goto L_089291DC;
    case 270u: goto L_089291EC;
    case 271u: goto L_089291F4;
    case 272u: goto L_089291FC;
    case 273u: goto L_08929204;
    case 274u: goto L_08929220;
    case 275u: goto L_08929230;
    case 276u: goto L_08929238;
    case 277u: goto L_08929240;
    case 278u: goto L_08929244;
    case 279u: goto L_08929250;
    case 280u: goto L_08929260;
    case 281u: goto L_0892926C;
    case 282u: goto L_08929274;
    case 283u: goto L_08929278;
    case 284u: goto L_08929284;
    case 285u: goto L_08929290;
    case 286u: goto L_08929298;
    case 287u: goto L_089292D0;
    case 288u: goto L_08929328;
    case 289u: goto L_0892933C;
    case 290u: goto L_08929344;
    case 291u: goto L_089293A8;
    case 292u: goto L_089293B4;
    case 293u: goto L_089293C8;
    case 294u: goto L_08929410;
    case 295u: goto L_0892941C;
    case 296u: goto L_08929430;
    case 297u: goto L_08929478;
    case 298u: goto L_08929484;
    case 299u: goto L_08929498;
    case 300u: goto L_089294E0;
    case 301u: goto L_089294EC;
    case 302u: goto L_089294FC;
    case 303u: goto L_08929504;
    case 304u: goto L_08929518;
    case 305u: goto L_08929520;
    case 306u: goto L_08929528;
    case 307u: goto L_0892953C;
    case 308u: goto L_08929544;
    case 309u: goto L_08929574;
    case 310u: goto L_0892957C;
    case 311u: goto L_08929584;
    case 312u: goto L_089295A0;
    case 313u: goto L_089295B0;
    case 314u: goto L_089295BC;
    case 315u: goto L_089295CC;
    case 316u: goto L_089295D8;
    case 317u: goto L_089295F0;
    case 318u: goto L_08929600;
    case 319u: goto L_08929614;
    case 320u: goto L_0892962C;
    case 321u: goto L_0892966C;
    case 322u: goto L_08929674;
    case 323u: goto L_0892968C;
    case 324u: goto L_08929694;
    case 325u: goto L_08929698;
    case 326u: goto L_089296A0;
    case 327u: goto L_089296A8;
    case 328u: goto L_089296C4;
    case 329u: goto L_089296D4;
    case 330u: goto L_089296E0;
    case 331u: goto L_089296F0;
    case 332u: goto L_089296FC;
    case 333u: goto L_08929714;
    case 334u: goto L_08929724;
    case 335u: goto L_08929738;
    case 336u: goto L_08929750;
    case 337u: goto L_08929790;
    case 338u: goto L_08929798;
    case 339u: goto L_089297B0;
    case 340u: goto L_089297B8;
    case 341u: goto L_089297BC;
    case 342u: goto L_089297C4;
    case 343u: goto L_089297CC;
    case 344u: goto L_089297E8;
    case 345u: goto L_089297F8;
    case 346u: goto L_08929804;
    case 347u: goto L_08929814;
    case 348u: goto L_08929820;
    case 349u: goto L_08929838;
    case 350u: goto L_08929848;
    case 351u: goto L_0892985C;
    case 352u: goto L_08929874;
    case 353u: goto L_089298B4;
    case 354u: goto L_089298BC;
    case 355u: goto L_089298D4;
    case 356u: goto L_089298DC;
    case 357u: goto L_089298E0;
    case 358u: goto L_089298E8;
    case 359u: goto L_089298F0;
    case 360u: goto L_0892990C;
    case 361u: goto L_0892991C;
    case 362u: goto L_08929928;
    case 363u: goto L_08929938;
    case 364u: goto L_08929944;
    case 365u: goto L_0892995C;
    case 366u: goto L_0892996C;
    case 367u: goto L_08929980;
    case 368u: goto L_08929990;
    case 369u: goto L_089299D0;
    case 370u: goto L_089299D8;
    case 371u: goto L_089299F0;
    case 372u: goto L_089299F8;
    case 373u: goto L_08929A08;
    case 374u: goto L_08929A18;
    case 375u: goto L_08929A20;
    case 376u: goto L_08929A4C;
    case 377u: goto L_08929A74;
    case 378u: goto L_08929A90;
    case 379u: goto L_08929AA4;
    case 380u: goto L_08929AB4;
    case 381u: goto L_08929AE0;
    case 382u: goto L_08929AE8;
    case 383u: goto L_08929B0C;
    case 384u: goto L_08929B14;
    case 385u: goto L_08929B1C;
    case 386u: goto L_08929B24;
    case 387u: goto L_08929B2C;
    case 388u: goto L_08929B4C;
    case 389u: goto L_08929B60;
    case 390u: goto L_08929BAC;
    case 391u: goto L_08929BB4;
    case 392u: goto L_08929BBC;
    case 393u: goto L_08929BE0;
    case 394u: goto L_08929BEC;
    case 395u: goto L_08929BF0;
    case 396u: goto L_08929C28;
    case 397u: goto L_08929C4C;
    case 398u: goto L_08929C64;
    case 399u: goto L_08929C78;
    case 400u: goto L_08929C84;
    case 401u: goto L_08929C94;
    case 402u: goto L_08929CA0;
    case 403u: goto L_08929CAC;
    case 404u: goto L_08929CB8;
    case 405u: goto L_08929CC0;
    case 406u: goto L_08929CD4;
    case 407u: goto L_08929CDC;
    case 408u: goto L_08929CE8;
    case 409u: goto L_08929CF8;
    case 410u: goto L_08929D04;
    case 411u: goto L_08929D10;
    case 412u: goto L_08929D1C;
    case 413u: goto L_08929D24;
    case 414u: goto L_08929D38;
    case 415u: goto L_08929D40;
    case 416u: goto L_08929D4C;
    case 417u: goto L_08929D54;
    case 418u: goto L_08929D5C;
    case 419u: goto L_08929D64;
    case 420u: goto L_08929D6C;
    case 421u: goto L_08929D7C;
    case 422u: goto L_08929D88;
    case 423u: goto L_08929D98;
    case 424u: goto L_08929DA4;
    case 425u: goto L_08929DB4;
    case 426u: goto L_08929DC0;
    case 427u: goto L_08929DD0;
    case 428u: goto L_08929DDC;
    case 429u: goto L_08929DEC;
    case 430u: goto L_08929DF8;
    case 431u: goto L_08929E04;
    case 432u: goto L_08929E10;
    case 433u: goto L_08929E18;
    case 434u: goto L_08929E2C;
    case 435u: goto L_08929E34;
    case 436u: goto L_08929E40;
    case 437u: goto L_08929E48;
    case 438u: goto L_08929E58;
    case 439u: goto L_08929E60;
    case 440u: goto L_08929E68;
    case 441u: goto L_08929E70;
    case 442u: goto L_08929E80;
    case 443u: goto L_08929E8C;
    case 444u: goto L_08929E98;
    case 445u: goto L_08929EA0;
    case 446u: goto L_08929EB0;
    case 447u: goto L_08929EBC;
    case 448u: goto L_08929EC8;
    case 449u: goto L_08929ED0;
    case 450u: goto L_08929EE4;
    case 451u: goto L_08929F18;
    case 452u: goto L_08929F28;
    case 453u: goto L_08929F38;
    case 454u: goto L_08929F4C;
    case 455u: goto L_08929F64;
    case 456u: goto L_08929F6C;
    case 457u: goto L_08929F74;
    case 458u: goto L_08929F7C;
    case 459u: goto L_08929F90;
    case 460u: goto L_08929F98;
    case 461u: goto L_08929FA0;
    case 462u: goto L_08929FA8;
    case 463u: goto L_08929FB4;
    case 464u: goto L_08929FBC;
    case 465u: goto L_08929FD0;
    case 466u: goto L_08929FD8;
    case 467u: goto L_08929FE8;
    case 468u: goto L_08929FF4;
    case 469u: goto L_0892A00C;
    case 470u: goto L_0892A014;
    case 471u: goto L_0892A01C;
    case 472u: goto L_0892A02C;
    case 473u: goto L_0892A038;
    case 474u: goto L_0892A050;
    case 475u: goto L_0892A058;
    case 476u: goto L_0892A06C;
    case 477u: goto L_0892A074;
    case 478u: goto L_0892A084;
    case 479u: goto L_0892A090;
    case 480u: goto L_0892A0A8;
    case 481u: goto L_0892A0B0;
    case 482u: goto L_0892A0B8;
    case 483u: goto L_0892A0C0;
    case 484u: goto L_0892A0C8;
    case 485u: goto L_0892A0D0;
    case 486u: goto L_0892A0E4;
    case 487u: goto L_0892A0EC;
    case 488u: goto L_0892A0F8;
    case 489u: goto L_0892A100;
    case 490u: goto L_0892A118;
    case 491u: goto L_0892A130;
    case 492u: goto L_0892A158;
    case 493u: goto L_0892A160;
    case 494u: goto L_0892A174;
    case 495u: goto L_0892A17C;
    case 496u: goto L_0892A184;
    case 497u: goto L_0892A198;
    case 498u: goto L_0892A1A4;
    case 499u: goto L_0892A1AC;
    case 500u: goto L_0892A1C0;
    case 501u: goto L_0892A1C8;
    case 502u: goto L_0892A1EC;
    case 503u: goto L_0892A1F4;
    case 504u: goto L_0892A208;
    case 505u: goto L_0892A214;
    case 506u: goto L_0892A21C;
    case 507u: goto L_0892A230;
    case 508u: goto L_0892A240;
    case 509u: goto L_0892A248;
    case 510u: goto L_0892A264;
    case 511u: goto L_0892A278;
    case 512u: goto L_0892A288;
    case 513u: goto L_0892A290;
    case 514u: goto L_0892A298;
    case 515u: goto L_0892A2AC;
    case 516u: goto L_0892A2B4;
    case 517u: goto L_0892A2C4;
    case 518u: goto L_0892A2D0;
    case 519u: goto L_0892A2E8;
    case 520u: goto L_0892A2F0;
    case 521u: goto L_0892A304;
    case 522u: goto L_0892A314;
    case 523u: goto L_0892A31C;
    case 524u: goto L_0892A32C;
    case 525u: goto L_0892A338;
    case 526u: goto L_0892A348;
    case 527u: goto L_0892A34C;
    case 528u: goto L_0892A354;
    case 529u: goto L_0892A364;
    case 530u: goto L_0892A368;
    case 531u: goto L_0892A370;
    case 532u: goto L_0892A380;
    case 533u: goto L_0892A384;
    case 534u: goto L_0892A38C;
    case 535u: goto L_0892A3A4;
    case 536u: goto L_0892A3CC;
    case 537u: goto L_0892A3D4;
    case 538u: goto L_0892A3EC;
    case 539u: goto L_0892A3F8;
    case 540u: goto L_0892A400;
    case 541u: goto L_0892A414;
    case 542u: goto L_0892A41C;
    case 543u: goto L_0892A434;
    case 544u: goto L_0892A440;
    case 545u: goto L_0892A44C;
    case 546u: goto L_0892A458;
    case 547u: goto L_0892A460;
    case 548u: goto L_0892A468;
    case 549u: goto L_0892A470;
    case 550u: goto L_0892A478;
    case 551u: goto L_0892A480;
    case 552u: goto L_0892A488;
    case 553u: goto L_0892A490;
    case 554u: goto L_0892A498;
    case 555u: goto L_0892A4A0;
    case 556u: goto L_0892A4A4;
    case 557u: goto L_0892A4C0;
    case 558u: goto L_0892A4C8;
    case 559u: goto L_0892A4D8;
    case 560u: goto L_0892A4E0;
    case 561u: goto L_0892A4F4;
    case 562u: goto L_0892A530;
    case 563u: goto L_0892A538;
    case 564u: goto L_0892A544;
    case 565u: goto L_0892A548;
    case 566u: goto L_0892A550;
    case 567u: goto L_0892A554;
    case 568u: goto L_0892A564;
    case 569u: goto L_0892A570;
    case 570u: goto L_0892A58C;
    case 571u: goto L_0892A59C;
    case 572u: goto L_0892A5A0;
    case 573u: goto L_0892A5AC;
    case 574u: goto L_0892A5BC;
    case 575u: goto L_0892A5D0;
    case 576u: goto L_0892A5D8;
    case 577u: goto L_0892A5E0;
    case 578u: goto L_0892A5F0;
    case 579u: goto L_0892A60C;
    case 580u: goto L_0892A61C;
    case 581u: goto L_0892A62C;
    case 582u: goto L_0892A63C;
    case 583u: goto L_0892A64C;
    case 584u: goto L_0892A658;
    case 585u: goto L_0892A668;
    case 586u: goto L_0892A670;
    case 587u: goto L_0892A694;
    case 588u: goto L_0892A6A4;
    case 589u: goto L_0892A6B0;
    case 590u: goto L_0892A6C0;
    case 591u: goto L_0892A6D8;
    case 592u: goto L_0892A6E4;
    case 593u: goto L_0892A6F0;
    case 594u: goto L_0892A6F8;
    case 595u: goto L_0892A714;
    case 596u: goto L_0892A71C;
    case 597u: goto L_0892A740;
    case 598u: goto L_0892A750;
    case 599u: goto L_0892A75C;
    case 600u: goto L_0892A764;
    case 601u: goto L_0892A770;
    case 602u: goto L_0892A778;
    case 603u: goto L_0892A78C;
    case 604u: goto L_0892A7B0;
    case 605u: goto L_0892A7B8;
    case 606u: goto L_0892A7CC;
    case 607u: goto L_0892A7E0;
    case 608u: goto L_0892A7EC;
    case 609u: goto L_0892A7FC;
    case 610u: goto L_0892A814;
    case 611u: goto L_0892A820;
    case 612u: goto L_0892A82C;
    case 613u: goto L_0892A83C;
    case 614u: goto L_0892A844;
    case 615u: goto L_0892A850;
    case 616u: goto L_0892A858;
    case 617u: goto L_0892A864;
    case 618u: goto L_0892A86C;
    case 619u: goto L_0892A880;
    case 620u: goto L_0892A8A4;
    case 621u: goto L_0892A8B4;
    case 622u: goto L_0892A8C0;
    case 623u: goto L_0892A8D8;
    case 624u: goto L_0892A8E0;
    case 625u: goto L_0892A8EC;
    case 626u: goto L_0892A8F4;
    case 627u: goto L_0892A8FC;
    case 628u: goto L_0892A908;
    case 629u: goto L_0892A90C;
    case 630u: goto L_0892A914;
    case 631u: goto L_0892A918;
    case 632u: goto L_0892A920;
    case 633u: goto L_0892A924;
    case 634u: goto L_0892A92C;
    case 635u: goto L_0892A930;
    case 636u: goto L_0892A938;
    case 637u: goto L_0892A93C;
    case 638u: goto L_0892A944;
    case 639u: goto L_0892A948;
    case 640u: goto L_0892A95C;
    case 641u: goto L_0892A96C;
    case 642u: goto L_0892A978;
    case 643u: goto L_0892A990;
    case 644u: goto L_0892A99C;
    case 645u: goto L_0892A9AC;
    case 646u: goto L_0892A9B4;
    case 647u: goto L_0892A9C4;
    case 648u: goto L_0892A9D0;
    case 649u: goto L_0892A9D8;
    case 650u: goto L_0892A9E0;
    case 651u: goto L_0892A9F0;
    case 652u: goto L_0892A9FC;
    case 653u: goto L_0892AA0C;
    case 654u: goto L_0892AA1C;
    case 655u: goto L_0892AA28;
    case 656u: goto L_0892AA34;
    case 657u: goto L_0892AA40;
    case 658u: goto L_0892AA4C;
    case 659u: goto L_0892AA54;
    case 660u: goto L_0892AA5C;
    case 661u: goto L_0892AA6C;
    case 662u: goto L_0892AA78;
    case 663u: goto L_0892AA80;
    case 664u: goto L_0892AA88;
    case 665u: goto L_0892AA9C;
    case 666u: goto L_0892AAC4;
    case 667u: goto L_0892AAD4;
    case 668u: goto L_0892AAEC;
    case 669u: goto L_0892AAF4;
    case 670u: goto L_0892AB08;
    case 671u: goto L_0892AB10;
    case 672u: goto L_0892AB28;
    case 673u: goto L_0892AB30;
    case 674u: goto L_0892AB40;
    case 675u: goto L_0892AB5C;
    case 676u: goto L_0892AB7C;
    case 677u: goto L_0892AB90;
    case 678u: goto L_0892AB98;
    case 679u: goto L_0892ABB0;
    case 680u: goto L_0892ABB8;
    case 681u: goto L_0892ABC0;
    case 682u: goto L_0892ABC8;
    case 683u: goto L_0892ABD0;
    case 684u: goto L_0892ABE8;
    case 685u: goto L_0892ABF0;
    case 686u: goto L_0892ABF8;
    case 687u: goto L_0892AC14;
    case 688u: goto L_0892AC2C;
    case 689u: goto L_0892AC34;
    case 690u: goto L_0892AC3C;
    case 691u: goto L_0892AC4C;
    case 692u: goto L_0892AC54;
    case 693u: goto L_0892AC5C;
    case 694u: goto L_0892AC64;
    case 695u: goto L_0892AC6C;
    case 696u: goto L_0892AC88;
    case 697u: goto L_0892ACA0;
    case 698u: goto L_0892ACA8;
    case 699u: goto L_0892ACB0;
    case 700u: goto L_0892ACC4;
    case 701u: goto L_0892ACD0;
    case 702u: goto L_0892ACD8;
    case 703u: goto L_0892ACE8;
    case 704u: goto L_0892ACF0;
    case 705u: goto L_0892AD04;
    case 706u: goto L_0892AD10;
    case 707u: goto L_0892AD20;
    case 708u: goto L_0892AD44;
    case 709u: goto L_0892AD4C;
    case 710u: goto L_0892AD60;
    case 711u: goto L_0892AD6C;
    case 712u: goto L_0892AD74;
    case 713u: goto L_0892AD84;
    case 714u: goto L_0892AD8C;
    case 715u: goto L_0892AD94;
    case 716u: goto L_0892ADA8;
    case 717u: goto L_0892ADB8;
    case 718u: goto L_0892ADC0;
    case 719u: goto L_0892ADD8;
    case 720u: goto L_0892ADE0;
    case 721u: goto L_0892ADE8;
    case 722u: goto L_0892AE08;
    case 723u: goto L_0892AE10;
    case 724u: goto L_0892AE28;
    case 725u: goto L_0892AE30;
    case 726u: goto L_0892AE38;
    case 727u: goto L_0892AE48;
    case 728u: goto L_0892AE54;
    case 729u: goto L_0892AE7C;
    case 730u: goto L_0892AE84;
    case 731u: goto L_0892AE9C;
    case 732u: goto L_0892AEA4;
    case 733u: goto L_0892AEAC;
    case 734u: goto L_0892AEB4;
    case 735u: goto L_0892AEC4;
    case 736u: goto L_0892AECC;
    case 737u: goto L_0892AED4;
    case 738u: goto L_0892AEDC;
    case 739u: goto L_0892AEE4;
    case 740u: goto L_0892AF00;
    case 741u: goto L_0892AF08;
    case 742u: goto L_0892AF10;
    case 743u: goto L_0892AF18;
    case 744u: goto L_0892AF24;
    case 745u: goto L_0892AF30;
    case 746u: goto L_0892AF38;
    case 747u: goto L_0892AF40;
    case 748u: goto L_0892AFC0;
    case 749u: goto L_0892AFD4;
    case 750u: goto L_0892B040;
    case 751u: goto L_0892B048;
    case 752u: goto L_0892B064;
    case 753u: goto L_0892B06C;
    case 754u: goto L_0892B074;
    case 755u: goto L_0892B088;
    case 756u: goto L_0892B090;
    case 757u: goto L_0892B0A4;
    case 758u: goto L_0892B0AC;
    case 759u: goto L_0892B0B4;
    case 760u: goto L_0892B0C8;
    case 761u: goto L_0892B0D0;
    case 762u: goto L_0892B0D8;
    case 763u: goto L_0892B0E4;
    case 764u: goto L_0892B0EC;
    case 765u: goto L_0892B110;
    case 766u: goto L_0892B1E0;
    case 767u: goto L_0892B228;
    case 768u: goto L_0892B230;
    case 769u: goto L_0892B2F4;
    case 770u: goto L_0892B310;
    case 771u: goto L_0892B32C;
    case 772u: goto L_0892B348;
    case 773u: goto L_0892B360;
    case 774u: goto L_0892B370;
    case 775u: goto L_0892B39C;
    case 776u: goto L_0892B3B0;
    case 777u: goto L_0892B3B8;
    case 778u: goto L_0892B3BC;
    case 779u: goto L_0892B3C4;
    case 780u: goto L_0892B3C8;
    case 781u: goto L_0892B3E4;
    case 782u: goto L_0892B3F8;
    case 783u: goto L_0892B400;
    case 784u: goto L_0892B408;
    case 785u: goto L_0892B40C;
    case 786u: goto L_0892B414;
    case 787u: goto L_0892B43C;
    case 788u: goto L_0892B450;
    case 789u: goto L_0892B458;
    case 790u: goto L_0892B45C;
    case 791u: goto L_0892B464;
    case 792u: goto L_0892B468;
    case 793u: goto L_0892B484;
    case 794u: goto L_0892B498;
    case 795u: goto L_0892B4A0;
    case 796u: goto L_0892B4A8;
    case 797u: goto L_0892B4AC;
    case 798u: goto L_0892B4B4;
    case 799u: goto L_0892B4DC;
    case 800u: goto L_0892B4F0;
    case 801u: goto L_0892B4F8;
    case 802u: goto L_0892B4FC;
    case 803u: goto L_0892B504;
    case 804u: goto L_0892B508;
    case 805u: goto L_0892B524;
    case 806u: goto L_0892B538;
    case 807u: goto L_0892B540;
    case 808u: goto L_0892B548;
    case 809u: goto L_0892B54C;
    case 810u: goto L_0892B554;
    case 811u: goto L_0892B57C;
    case 812u: goto L_0892B590;
    case 813u: goto L_0892B598;
    case 814u: goto L_0892B59C;
    case 815u: goto L_0892B5A4;
    case 816u: goto L_0892B5A8;
    case 817u: goto L_0892B5C4;
    case 818u: goto L_0892B5D8;
    case 819u: goto L_0892B5E0;
    case 820u: goto L_0892B5E8;
    case 821u: goto L_0892B5EC;
    case 822u: goto L_0892B5F4;
    case 823u: goto L_0892B618;
    case 824u: goto L_0892B638;
    case 825u: goto L_0892B63C;
    case 826u: goto L_0892B660;
    case 827u: goto L_0892B680;
    case 828u: goto L_0892B684;
    case 829u: goto L_0892B6A0;
    case 830u: goto L_0892B6C0;
    case 831u: goto L_0892B6C4;
    case 832u: goto L_0892B6E0;
    case 833u: goto L_0892B700;
    case 834u: goto L_0892B704;
    case 835u: goto L_0892B718;
    case 836u: goto L_0892B728;
    case 837u: goto L_0892B738;
    case 838u: goto L_0892B744;
    case 839u: goto L_0892B75C;
    case 840u: goto L_0892B768;
    case 841u: goto L_0892B780;
    case 842u: goto L_0892B78C;
    case 843u: goto L_0892B7A4;
    case 844u: goto L_0892B7B0;
    case 845u: goto L_0892B7C8;
    case 846u: goto L_0892B7D4;
    case 847u: goto L_0892B7EC;
    case 848u: goto L_0892B7F8;
    case 849u: goto L_0892B810;
    case 850u: goto L_0892B81C;
    case 851u: goto L_0892B834;
    case 852u: goto L_0892B840;
    case 853u: goto L_0892B858;
    case 854u: goto L_0892B868;
    case 855u: goto L_0892B878;
    case 856u: goto L_0892B888;
    case 857u: goto L_0892B894;
    case 858u: goto L_0892B8AC;
    case 859u: goto L_0892B8B8;
    case 860u: goto L_0892B8D0;
    case 861u: goto L_0892B8DC;
    case 862u: goto L_0892B8F4;
    case 863u: goto L_0892B900;
    case 864u: goto L_0892B918;
    case 865u: goto L_0892B924;
    case 866u: goto L_0892B93C;
    case 867u: goto L_0892B948;
    case 868u: goto L_0892B960;
    case 869u: goto L_0892B96C;
    case 870u: goto L_0892B984;
    case 871u: goto L_0892B990;
    case 872u: goto L_0892B9A4;
    case 873u: goto L_0892B9AC;
    case 874u: goto L_0892BA04;
    case 875u: goto L_0892BA1C;
    case 876u: goto L_0892BA24;
    case 877u: goto L_0892BA28;
    case 878u: goto L_0892BA54;
    case 879u: goto L_0892BA84;
    case 880u: goto L_0892BA8C;
    case 881u: goto L_0892BA98;
    case 882u: goto L_0892BAA4;
    case 883u: goto L_0892BAB0;
    case 884u: goto L_0892BABC;
    case 885u: goto L_0892BAC8;
    case 886u: goto L_0892BB00;
    case 887u: goto L_0892BB0C;
    case 888u: goto L_0892BB20;
    case 889u: goto L_0892BB30;
    case 890u: goto L_0892BB4C;
    case 891u: goto L_0892BB58;
    case 892u: goto L_0892BB60;
    case 893u: goto L_0892BB70;
    case 894u: goto L_0892BB7C;
    case 895u: goto L_0892BB84;
    case 896u: goto L_0892BB94;
    case 897u: goto L_0892BB9C;
    case 898u: goto L_0892BBA8;
    case 899u: goto L_0892BBB0;
    case 900u: goto L_0892BBC0;
    case 901u: goto L_0892BBC8;
    case 902u: goto L_0892BBD4;
    case 903u: goto L_0892BBDC;
    case 904u: goto L_0892BBEC;
    case 905u: goto L_0892BBF4;
    case 906u: goto L_0892BC00;
    case 907u: goto L_0892BC08;
    case 908u: goto L_0892BC18;
    case 909u: goto L_0892BC20;
    case 910u: goto L_0892BC28;
    case 911u: goto L_0892BC30;
    case 912u: goto L_0892BC38;
    case 913u: goto L_0892BC44;
    case 914u: goto L_0892BC4C;
    case 915u: goto L_0892BC58;
    case 916u: goto L_0892BC60;
    case 917u: goto L_0892BC68;
    case 918u: goto L_0892BC78;
    case 919u: goto L_0892BC88;
    case 920u: goto L_0892BC94;
    case 921u: goto L_0892BCBC;
    case 922u: goto L_0892BCCC;
    case 923u: goto L_0892BCE8;
    case 924u: goto L_0892BCF8;
    case 925u: goto L_0892BD14;
    case 926u: goto L_0892BD24;
    case 927u: goto L_0892BD4C;
    case 928u: goto L_0892BD5C;
    case 929u: goto L_0892BD78;
    case 930u: goto L_0892BD80;
    case 931u: goto L_0892BD90;
    case 932u: goto L_0892BDA4;
    case 933u: goto L_0892BDC4;
    case 934u: goto L_0892BDF8;
    case 935u: goto L_0892BE00;
    case 936u: goto L_0892BE0C;
    case 937u: goto L_0892BE18;
    case 938u: goto L_0892BE24;
    case 939u: goto L_0892BE30;
    case 940u: goto L_0892BE3C;
    case 941u: goto L_0892BE78;
    case 942u: goto L_0892BE84;
    case 943u: goto L_0892BE8C;
    case 944u: goto L_0892BE9C;
    case 945u: goto L_0892BEA4;
    case 946u: goto L_0892BEAC;
    case 947u: goto L_0892BEB8;
    case 948u: goto L_0892BEC0;
    case 949u: goto L_0892BED0;
    case 950u: goto L_0892BED8;
    case 951u: goto L_0892BEE4;
    case 952u: goto L_0892BEEC;
    case 953u: goto L_0892BEFC;
    case 954u: goto L_0892BF04;
    case 955u: goto L_0892BF10;
    case 956u: goto L_0892BF18;
    case 957u: goto L_0892BF28;
    case 958u: goto L_0892BF30;
    case 959u: goto L_0892BF3C;
    case 960u: goto L_0892BF44;
    case 961u: goto L_0892BF54;
    case 962u: goto L_0892BF5C;
    case 963u: goto L_0892BF68;
    case 964u: goto L_0892BF70;
    case 965u: goto L_0892BF80;
    case 966u: goto L_0892BF88;
    case 967u: goto L_0892BF90;
    case 968u: goto L_0892BF9C;
    case 969u: goto L_0892BFA4;
    case 970u: goto L_0892BFB0;
    case 971u: goto L_0892BFB8;
    case 972u: goto L_0892BFC0;
    case 973u: goto L_0892BFD0;
    case 974u: goto L_0892BFE0;
    case 975u: goto L_0892BFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08928000:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_run_words);
      ctx.gpr[19] = aot_run_words[0];
      ctx.gpr[20] = aot_run_words[1];
      ctx.gpr[21] = aot_run_words[2];
      ctx.gpr[22] = aot_run_words[3];
      ctx.gpr[23] = aot_run_words[4];
      ctx.gpr[30] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928024:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    aot_gpr_31 = (0x0892804Cu);
    aot_gpr_5 = (0u | 64u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0886D4BC, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892804Cu) goto L_0892804C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892804C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08928058u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 697u, 0x0890EF9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928058u) goto L_08928058;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928058:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928068;
      }
      goto L_08928060;
    }
L_08928060:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0892806C;
      }
      goto L_08928068;
    }
L_08928068:
    ctx.gpr[18] = (0u | 0u);
    goto L_0892806C;
L_0892806C:
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08928134;
      }
      goto L_08928074;
    }
L_08928074:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(48))))));
    aot_gpr_5 = (0u | 197u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08928134;
      }
      goto L_08928084;
    }
L_08928084:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08928134;
      }
      goto L_08928090;
    }
L_08928090:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08928134;
      }
      goto L_089280A0;
    }
L_089280A0:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[7] = (17096u << 16u);
    aot_gpr_6 = (0u | 10u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_089280C4;
      }
      goto L_089280B8;
    }
L_089280B8:
    aot_gpr_6 = (0u | 8u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    // nop
      if (branch_taken) {
          goto L_089280E8;
      }
      goto L_089280C4;
    }
L_089280C4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x089280D8u);
    ctx.gpr[7] = (0u | 120u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089280D8u) goto L_089280D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089280D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-6));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(564));
      if (branch_taken) {
          goto L_08928108;
      }
      goto L_089280E8;
    }
L_089280E8:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x089280FCu);
    ctx.gpr[7] = (0u | 121u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089280FCu) goto L_089280FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089280FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-11));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(564));
    goto L_08928108;
L_08928108:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 48u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0892812Cu);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0192_entry, 192u, 212u, 0x08B04D14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892812Cu) goto L_0892812C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892812C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089283CC;
      }
      goto L_08928134;
    }
L_08928134:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 65u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08928164;
      }
      goto L_08928144;
    }
L_08928144:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08928150u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08908E78, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928150u) goto L_08928150;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928150:
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08928164;
      }
      goto L_08928158;
    }
L_08928158:
    aot_gpr_4 = (50298u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08928164;
L_08928164:
    aot_gpr_31 = (0x0892816Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 976u, 0x0890BDFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892816Cu) goto L_0892816C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892816C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08928178u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F694, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928178u) goto L_08928178;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928178:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08928184u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 50u, 0x0891034Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928184u) goto L_08928184;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928184:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892821C;
      }
      goto L_08928190;
    }
L_08928190:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2274)));
    aot_gpr_31 = (0x089281A0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 78u, 0x089A8ACCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089281A0u) goto L_089281A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089281A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(564));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (~(aot_gpr_5 | 0u));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0892821C;
      }
      goto L_089281CC;
    }
L_089281CC:
    aot_gpr_31 = (0x089281D4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 78u, 0x08B00578u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089281D4u) goto L_089281D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089281D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 5u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(680)));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_089281F0;
      }
      goto L_089281E8;
    }
L_089281E8:
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(680), aot_gpr_5);
    goto L_089281F0;
L_089281F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0892821C;
      }
      goto L_08928200;
    }
L_08928200:
    aot_gpr_31 = (0x08928208u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 456u, 0x08B01BA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928208u) goto L_08928208;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928208:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892821C;
      }
      goto L_08928210;
    }
L_08928210:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_31 = (0x0892821Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 450u, 0x08B01B4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892821Cu) goto L_0892821C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892821C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 18u);
      if (branch_taken) {
          goto L_08928234;
      }
      goto L_0892822C;
    }
L_0892822C:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0892823C;
      }
      goto L_08928234;
    }
L_08928234:
    aot_gpr_31 = (0x0892823Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892823Cu) goto L_0892823C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892823C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08928248u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928248u) goto L_08928248;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928248:
    aot_gpr_31 = (0x08928250u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928250u) goto L_08928250;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928250:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928264;
      }
      goto L_08928258;
    }
L_08928258:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08928264u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 615u, 0x088C6FC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928264u) goto L_08928264;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928264:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 38u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_089282E0;
      }
      goto L_08928274;
    }
L_08928274:
    aot_gpr_5 = (2203u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08928288u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8428));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 96u, 0x08890604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928288u) goto L_08928288;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928288:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_5 = (64u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (17530u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16128u << 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_089282C8;
      }
      goto L_089282B0;
    }
L_089282B0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 42u);
    aot_gpr_31 = (0x089282C0u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 653u, 0x0891F338u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089282C0u) goto L_089282C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089282C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089282D8;
      }
      goto L_089282C8;
    }
L_089282C8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 40u);
    aot_gpr_31 = (0x089282D8u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 653u, 0x0891F338u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089282D8u) goto L_089282D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089282D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089283CC;
      }
      goto L_089282E0;
    }
L_089282E0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
      if (branch_taken) {
          goto L_08928318;
      }
      goto L_089282E8;
    }
L_089282E8:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089282FC;
      }
      goto L_089282F0;
    }
L_089282F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), aot_gpr_4);
    goto L_089282FC;
L_089282FC:
    aot_gpr_5 = (2203u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08928310u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10420));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 96u, 0x08890604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928310u) goto L_08928310;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928310:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892836C;
      }
      goto L_08928318;
    }
L_08928318:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892832C;
      }
      goto L_08928320;
    }
L_08928320:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), aot_gpr_4);
    goto L_0892832C;
L_0892832C:
    aot_gpr_5 = (2203u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08928340u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8428));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 96u, 0x08890604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928340u) goto L_08928340;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928340:
    aot_gpr_31 = (0x08928348u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 655u, 0x08906F34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928348u) goto L_08928348;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928348:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892836C;
      }
      goto L_08928350;
    }
L_08928350:
    ctx.gpr[8] = (17530u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0892836Cu);
    ctx.gpr[7] = (0u | 132u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892836Cu) goto L_0892836C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892836C:
    aot_gpr_31 = (0x08928374u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 107u, 0x08908630u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928374u) goto L_08928374;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928374:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08928380u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 304u, 0x08911138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928380u) goto L_08928380;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928380:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1025));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1156)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089283A8;
      }
      goto L_0892839C;
    }
L_0892839C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_31 = (0x089283A8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 188u, 0x08910AD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089283A8u) goto L_089283A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089283A8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089283B4u);
    aot_gpr_5 = (0u | 69u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089283B4u) goto L_089283B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089283B4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089283C0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089283C0u) goto L_089283C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089283C0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089283CCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089283CCu) goto L_089283CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089283CC:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_089283E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-480));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(456)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(464), ctx.gpr[22]);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(456), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(440), aot_gpr_16);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(352)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(444), ctx.gpr[17]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(452), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(468), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(472), ctx.gpr[30]);
    aot_fpr_20 = std::bit_cast<float>(0u);
    ctx.gpr[19] = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    ctx.gpr[30] = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(448), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(476), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[18] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08928470;
      }
      goto L_08928454;
    }
L_08928454:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(240));
    aot_gpr_31 = (0x08928464u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928464u) goto L_08928464;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928464:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(240)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08928470;
L_08928470:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    ctx.fpr[22] = std::sqrt(aot_fpr_12);
    aot_gpr_31 = (0x089284A4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 618u, 0x08906DC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089284A4u) goto L_089284A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089284A4:
    aot_gpr_4 = (16544u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (15267u << 16u);
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (16448u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17723u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= ctx.fpr[16])) ? 0x00800000u : 0u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
      if (branch_taken) {
          goto L_08928504;
      }
      goto L_089284FC;
    }
L_089284FC:
    aot_gpr_4 = (17530u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    goto L_08928504;
L_08928504:
    ctx.gpr[8] = (aot_gpr_16 & 255u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 42u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08928520u);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928520u) goto L_08928520;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928520:
    aot_gpr_6 = (aot_gpr_16 + static_cast<std::uint32_t>(28));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08928534u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928534u) goto L_08928534;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928534:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08928564;
      }
      goto L_0892854C;
    }
L_0892854C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_20)) && aot_fpr_13 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08928564;
      }
      goto L_0892855C;
    }
L_0892855C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_08928570;
      }
      goto L_08928564;
    }
L_08928564:
    aot_gpr_31 = (0x0892856Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892856Cu) goto L_0892856C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892856C:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08928570;
L_08928570:
    aot_gpr_31 = (0x08928578u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928578u) goto L_08928578;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928578:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2116), ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(250));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1732), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2116)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
        goto L_089285A4;
    }
    goto L_08928594;
L_08928594:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2116)));
    aot_gpr_31 = (0x089285A0u);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(2116));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089285A0u) goto L_089285A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089285A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    goto L_089285A4;
L_089285A4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(304))))));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 & ctx.gpr[22]);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (48716u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_5 | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[15] < ctx.fpr[16])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08928690;
      }
      goto L_08928628;
    }
L_08928628:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
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
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_fpr_13 = aot_fpr_12 - aot_fpr_13;
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089287B8;
      }
      goto L_08928690;
    }
L_08928690:
    aot_gpr_4 = (15820u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[15])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08928768;
      }
      goto L_089286B0;
    }
L_089286B0:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
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
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = aot_fpr_14 - ctx.fpr[15];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[15] <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08928760;
      }
      goto L_08928728;
    }
L_08928728:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16000u << 16u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[15] + aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = aot_fpr_14 + aot_fpr_12;
    goto L_08928760;
L_08928760:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089287B8;
      }
      goto L_08928768;
    }
L_08928768:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(216)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    goto L_089287B8;
L_089287B8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    aot_fpr_20 = aot_fpr_14 / aot_fpr_12;
    aot_gpr_31 = (0x089287E8u);
    // nop
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089287E8u) goto L_089287E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089287E8:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_31 = (0x089287F4u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 482u, 0x08B625C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089287F4u) goto L_089287F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089287F4:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19996)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20000)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08928808u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_16, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928808u) goto L_08928808;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928808:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19988)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19992)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x0892881Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61EF4, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892881Cu) goto L_0892881C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892881C:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0892882Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892882Cu) goto L_0892882C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892882C:
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08928840u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_16, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928840u) goto L_08928840;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928840:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x0892884Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B627F0, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892884Cu) goto L_0892884C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892884C:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_16 == aot_gpr_4;
    aot_gpr_4 = (16320u << 16u);
      if (branch_taken) {
          goto L_089288C4;
      }
      goto L_089288B4;
    }
L_089288B4:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = aot_gpr_16 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_089288DC;
      }
      goto L_089288C0;
    }
L_089288C0:
    aot_gpr_4 = (16320u << 16u);
    goto L_089288C4;
L_089288C4:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089288E8;
      }
      goto L_089288DC;
    }
L_089288DC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089288E8;
L_089288E8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089288F4u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089288F4u) goto L_089288F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089288F4:
    { std::uint32_t aot_run_words[12]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(432), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
      ctx.gpr[21] = aot_run_words[7];
      ctx.gpr[22] = aot_run_words[8];
      ctx.gpr[23] = aot_run_words[9];
      ctx.gpr[30] = aot_run_words[10];
      aot_gpr_31 = aot_run_words[11];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(480));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892892C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-432));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(456)));
    aot_gpr_6 = (16u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(396), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(400), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    ctx.gpr[17] = (0u | 6u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), aot_gpr_16};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(384), aot_run_words); }
    { const std::uint32_t aot_run_words[7]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(404), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08928C08;
      }
      goto L_0892897C;
    }
L_0892897C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[17];
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_089289BC;
      }
      goto L_0892898C;
    }
L_0892898C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    ctx.gpr[7] = (0u | 8u);
    if (aot_gpr_6 == ctx.gpr[7]) {
    aot_gpr_5 = (0u | 1u);
        goto L_089289C0;
    }
    goto L_0892899C;
L_0892899C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    ctx.gpr[7] = (0u | 9u);
    if (aot_gpr_6 == ctx.gpr[7]) {
    aot_gpr_5 = (0u | 1u);
        goto L_089289C0;
    }
    goto L_089289AC;
L_089289AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    aot_gpr_6 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_089289C4;
      }
      goto L_089289BC;
    }
L_089289BC:
    aot_gpr_5 = (0u | 1u);
    goto L_089289C0;
L_089289C0:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_089289C4;
L_089289C4:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08928A6C;
      }
      goto L_089289CC;
    }
L_089289CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x089289DCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 294u, 0x08A59500u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089289DCu) goto L_089289DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089289DC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x089289ECu);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089289ECu) goto L_089289EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089289EC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08928A1C;
      }
      goto L_089289F8;
    }
L_089289F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x08928A08u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 294u, 0x08A59500u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928A08u) goto L_08928A08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928A08:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08928A18u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928A18u) goto L_08928A18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928A18:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08928A1C;
L_08928A1C:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08928A38;
      }
      goto L_08928A24;
    }
L_08928A24:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08928A34u);
    aot_gpr_6 = (0u | 196u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928A34u) goto L_08928A34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928A34:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08928A38;
L_08928A38:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08928A58;
      }
      goto L_08928A40;
    }
L_08928A40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (65520u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
      if (branch_taken) {
          goto L_08928C00;
      }
      goto L_08928A58;
    }
L_08928A58:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08928A64u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0106_entry, 106u, 930u, 0x089AFEFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928A64u) goto L_08928A64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928A64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929298;
      }
      goto L_08928A6C;
    }
L_08928A6C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08928A7Cu);
    aot_gpr_6 = (0u | 71u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928A7Cu) goto L_08928A7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928A7C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08928A9C;
      }
      goto L_08928A88;
    }
L_08928A88:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08928A98u);
    aot_gpr_6 = (0u | 72u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928A98u) goto L_08928A98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928A98:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08928A9C;
L_08928A9C:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08928AB8;
      }
      goto L_08928AA4;
    }
L_08928AA4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08928AB4u);
    aot_gpr_6 = (0u | 73u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928AB4u) goto L_08928AB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928AB4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08928AB8;
L_08928AB8:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08928AD4;
      }
      goto L_08928AC0;
    }
L_08928AC0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08928AD0u);
    aot_gpr_6 = (0u | 93u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928AD0u) goto L_08928AD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928AD0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08928AD4;
L_08928AD4:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08928AF0;
      }
      goto L_08928ADC;
    }
L_08928ADC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08928AECu);
    aot_gpr_6 = (0u | 74u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928AECu) goto L_08928AEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928AEC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08928AF0;
L_08928AF0:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08928B0C;
      }
      goto L_08928AF8;
    }
L_08928AF8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08928B08u);
    aot_gpr_6 = (0u | 95u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928B08u) goto L_08928B08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928B08:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08928B0C;
L_08928B0C:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08928B28;
      }
      goto L_08928B14;
    }
L_08928B14:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08928B24u);
    aot_gpr_6 = (0u | 96u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928B24u) goto L_08928B24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928B24:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08928B28;
L_08928B28:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08928B44;
      }
      goto L_08928B30;
    }
L_08928B30:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08928B40u);
    aot_gpr_6 = (0u | 176u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928B40u) goto L_08928B40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928B40:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08928B44;
L_08928B44:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08928B60;
      }
      goto L_08928B4C;
    }
L_08928B4C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08928B5Cu);
    aot_gpr_6 = (0u | 180u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928B5Cu) goto L_08928B5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928B5C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08928B60;
L_08928B60:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08928B7C;
      }
      goto L_08928B68;
    }
L_08928B68:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08928B78u);
    aot_gpr_6 = (0u | 175u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928B78u) goto L_08928B78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928B78:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08928B7C;
L_08928B7C:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08928B98;
      }
      goto L_08928B84;
    }
L_08928B84:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08928B94u);
    aot_gpr_6 = (0u | 179u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928B94u) goto L_08928B94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928B94:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08928B98;
L_08928B98:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08928BB4;
      }
      goto L_08928BA0;
    }
L_08928BA0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08928BB0u);
    aot_gpr_6 = (0u | 184u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928BB0u) goto L_08928BB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928BB0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08928BB4;
L_08928BB4:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08928BD0;
      }
      goto L_08928BBC;
    }
L_08928BBC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08928BCCu);
    aot_gpr_6 = (0u | 185u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928BCCu) goto L_08928BCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928BCC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08928BD0;
L_08928BD0:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08928BEC;
      }
      goto L_08928BD8;
    }
L_08928BD8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08928BE8u);
    aot_gpr_6 = (0u | 77u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928BE8u) goto L_08928BE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928BE8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08928BEC;
L_08928BEC:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08928BFC;
      }
      goto L_08928BF4;
    }
L_08928BF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08928C00;
      }
      goto L_08928BFC;
    }
L_08928BFC:
    ctx.gpr[18] = (0u | 1u);
    goto L_08928C00;
L_08928C00:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928C40;
      }
      goto L_08928C08;
    }
L_08928C08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08928C64;
      }
      goto L_08928C38;
    }
L_08928C38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928C74;
      }
      goto L_08928C40;
    }
L_08928C40:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08928C4Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0106_entry, 106u, 930u, 0x089AFEFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928C4Cu) goto L_08928C4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928C4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (65520u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
      if (branch_taken) {
          goto L_08929298;
      }
      goto L_08928C64;
    }
L_08928C64:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08928C74;
L_08928C74:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_31 = (0x08928C80u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928C80u) goto L_08928C80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928C80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(200)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(192), 0u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_16 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08928D44;
      }
      goto L_08928CA0;
    }
L_08928CA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
    ctx.gpr[23] = (0u | 1u);
    if (aot_gpr_4 != ctx.gpr[23]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
        goto L_08928CB8;
    }
    goto L_08928CB0;
L_08928CB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08928CC8;
      }
      goto L_08928CB8;
    }
L_08928CB8:
    if (aot_gpr_4 != ctx.gpr[18]) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(160));
        goto L_08928CC8;
    }
    goto L_08928CC0;
L_08928CC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08928CC8;
      }
      goto L_08928CC8;
    }
L_08928CC8:
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08928CDCu);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 682u, 0x08907020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928CDCu) goto L_08928CDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928CDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08928D18;
      }
      goto L_08928CEC;
    }
L_08928CEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08928D18;
      }
      goto L_08928CFC;
    }
L_08928CFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08928D18;
      }
      goto L_08928D0C;
    }
L_08928D0C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08928D18;
L_08928D18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(614))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08928E50;
      }
      goto L_08928D2C;
    }
L_08928D2C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08928E50;
      }
      goto L_08928D44;
    }
L_08928D44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_31 = (0x08928D50u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928D50u) goto L_08928D50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928D50:
    { const bool branch_taken = aot_gpr_16 != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08928DC8;
      }
      goto L_08928D58;
    }
L_08928D58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08928D7C;
      }
      goto L_08928D68;
    }
L_08928D68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 9u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08928D90;
      }
      goto L_08928D7C;
    }
L_08928D7C:
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(176));
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928E50;
      }
      goto L_08928D90;
    }
L_08928D90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
    aot_gpr_5 = (0u | 1u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
        goto L_08928DA8;
    }
    goto L_08928DA0;
L_08928DA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08928DB8;
      }
      goto L_08928DA8;
    }
L_08928DA8:
    if (aot_gpr_4 != ctx.gpr[18]) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(160));
        goto L_08928DB8;
    }
    goto L_08928DB0;
L_08928DB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08928DB8;
      }
      goto L_08928DB8;
    }
L_08928DB8:
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928E50;
      }
      goto L_08928DC8;
    }
L_08928DC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    ctx.gpr[23] = (0u | 1u);
    aot_gpr_31 = (0x08928DD8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928DD8u) goto L_08928DD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928DD8:
    { const bool branch_taken = aot_gpr_16 != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08928DFC;
      }
      goto L_08928DE0;
    }
L_08928DE0:
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(176));
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08928E50;
      }
      goto L_08928DFC;
    }
L_08928DFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_31 = (0x08928E08u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928E08u) goto L_08928E08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928E08:
    { const bool branch_taken = aot_gpr_16 != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08928E24;
      }
      goto L_08928E10;
    }
L_08928E10:
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(176));
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928E50;
      }
      goto L_08928E24;
    }
L_08928E24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
    if (aot_gpr_4 != ctx.gpr[23]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
        goto L_08928E38;
    }
    goto L_08928E30;
L_08928E30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08928E48;
      }
      goto L_08928E38;
    }
L_08928E38:
    if (aot_gpr_4 != ctx.gpr[18]) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(160));
        goto L_08928E48;
    }
    goto L_08928E40;
L_08928E40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08928E48;
      }
      goto L_08928E48;
    }
L_08928E48:
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08928E50;
L_08928E50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08928E74;
      }
      goto L_08928E60;
    }
L_08928E60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08928E8C;
      }
      goto L_08928E74;
    }
L_08928E74:
    aot_gpr_31 = (0x08928E7Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 312u, 0x08A595C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928E7Cu) goto L_08928E7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928E7C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08928E8Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(960));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928E8Cu) goto L_08928E8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928E8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08928F4C;
      }
      goto L_08928E9C;
    }
L_08928E9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(960)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(352), 0u);
      if (branch_taken) {
          goto L_08928EC8;
      }
      goto L_08928EB0;
    }
L_08928EB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(360)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(360)));
        goto L_08928ECC;
    }
    goto L_08928EC0;
L_08928EC0:
    aot_gpr_31 = (0x08928EC8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(352)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928EC8u) goto L_08928EC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928EC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(360)));
    goto L_08928ECC;
L_08928ECC:
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(352), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(360), aot_gpr_4);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(288));
    aot_gpr_31 = (0x08928EE8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928EE8u) goto L_08928EE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928EE8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08928EF8u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 935u, 0x0885FEC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928EF8u) goto L_08928EF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928EF8:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    aot_gpr_31 = (0x08928F04u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928F04u) goto L_08928F04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928F04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(280)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(360)));
        goto L_08928F2C;
    }
    goto L_08928F14;
L_08928F14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(272)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(360)));
        goto L_08928F2C;
    }
    goto L_08928F20;
L_08928F20:
    aot_gpr_31 = (0x08928F28u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(272)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928F28u) goto L_08928F28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928F28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(360)));
    goto L_08928F2C;
L_08928F2C:
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08928F4C;
      }
      goto L_08928F38;
    }
L_08928F38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08928F4C;
      }
      goto L_08928F44;
    }
L_08928F44:
    aot_gpr_31 = (0x08928F4Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(352)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928F4Cu) goto L_08928F4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928F4C:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vtfm_ct<0u, 36u, 7u, 3u, 3u>();
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
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08928FA8u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 940u, 0x0885FF78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08928FA8u) goto L_08928FA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08928FA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 197u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
        goto L_08928FD4;
    }
    goto L_08928FBC;
L_08928FBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 267u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08928FF4;
      }
      goto L_08928FD0;
    }
L_08928FD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    goto L_08928FD4;
L_08928FD4:
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (15948u << 16u);
      if (branch_taken) {
          goto L_08928FF4;
      }
      goto L_08928FE0;
    }
L_08928FE0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08928FF4;
L_08928FF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 176u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08929058;
      }
      goto L_08929008;
    }
L_08929008:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08929058;
      }
      goto L_08929018;
    }
L_08929018:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_31 = (0x08929024u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929024u) goto L_08929024;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929024:
    { const bool branch_taken = aot_gpr_16 == ctx.gpr[2];
    aot_gpr_4 = (15861u << 16u);
      if (branch_taken) {
          goto L_08929044;
      }
      goto L_0892902C;
    }
L_0892902C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_31 = (0x08929038u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929038u) goto L_08929038;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929038:
    { const bool branch_taken = aot_gpr_16 != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08929058;
      }
      goto L_08929040;
    }
L_08929040:
    aot_gpr_4 = (15861u << 16u);
    goto L_08929044;
L_08929044:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08929058;
L_08929058:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(614))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08929204;
      }
      goto L_0892906C;
    }
L_0892906C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_31 = (0x08929078u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929078u) goto L_08929078;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929078:
    { const bool branch_taken = aot_gpr_16 != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08929128;
      }
      goto L_08929080;
    }
L_08929080:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (16329u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_gpr_4 = (aot_gpr_5 | 4059u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_089290C0;
      }
      goto L_089290A8;
    }
L_089290A8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_20)) && aot_fpr_13 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089290C0;
      }
      goto L_089290B8;
    }
L_089290B8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = aot_fpr_20 - ctx.fpr[22];
      if (branch_taken) {
          goto L_089290CC;
      }
      goto L_089290C0;
    }
L_089290C0:
    aot_gpr_31 = (0x089290C8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089290C8u) goto L_089290C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089290C8:
    ctx.fpr[22] = ctx.fpr[0] - ctx.fpr[22];
    goto L_089290CC;
L_089290CC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x089290E4u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 943u, 0x0885FFE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089290E4u) goto L_089290E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089290E4:
    aot_gpr_5 = (49097u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x089290F8u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 926u, 0x0885FD1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089290F8u) goto L_089290F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089290F8:
    aot_gpr_5 = (16153u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08929114u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929114u) goto L_08929114;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929114:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08929120u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 10u, 0x088603A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929120u) goto L_08929120;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929244;
      }
      goto L_08929128;
    }
L_08929128:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_31 = (0x08929134u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929134u) goto L_08929134;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929134:
    { const bool branch_taken = aot_gpr_16 != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089291C0;
      }
      goto L_0892913C;
    }
L_0892913C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (16329u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_gpr_4 = (aot_gpr_5 | 4059u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0892917C;
      }
      goto L_08929164;
    }
L_08929164:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_20)) && aot_fpr_13 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0892917C;
      }
      goto L_08929174;
    }
L_08929174:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = aot_fpr_20 + ctx.fpr[22];
      if (branch_taken) {
          goto L_08929188;
      }
      goto L_0892917C;
    }
L_0892917C:
    aot_gpr_31 = (0x08929184u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929184u) goto L_08929184;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929184:
    aot_fpr_12 = ctx.fpr[0] + ctx.fpr[22];
    goto L_08929188;
L_08929188:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x089291A0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 943u, 0x0885FFE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089291A0u) goto L_089291A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089291A0:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x089291ACu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 926u, 0x0885FD1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089291ACu) goto L_089291AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089291AC:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x089291B8u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 10u, 0x088603A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089291B8u) goto L_089291B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089291B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929244;
      }
      goto L_089291C0;
    }
L_089291C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089291EC;
      }
      goto L_089291DC;
    }
L_089291DC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_20)) && aot_fpr_13 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089291FC;
      }
      goto L_089291EC;
    }
L_089291EC:
    aot_gpr_31 = (0x089291F4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089291F4u) goto L_089291F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089291F4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089291FC;
      }
      goto L_089291FC;
    }
L_089291FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_08929244;
      }
      goto L_08929204;
    }
L_08929204:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08929230;
      }
      goto L_08929220;
    }
L_08929220:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_20)) && aot_fpr_13 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08929240;
      }
      goto L_08929230;
    }
L_08929230:
    aot_gpr_31 = (0x08929238u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929238u) goto L_08929238;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929238:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08929240;
      }
      goto L_08929240;
    }
L_08929240:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_08929244;
L_08929244:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08929250u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929250u) goto L_08929250;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929250:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(200)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
        goto L_08929278;
    }
    goto L_08929260;
L_08929260:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(192)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
        goto L_08929278;
    }
    goto L_0892926C;
L_0892926C:
    aot_gpr_31 = (0x08929274u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(192)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929274u) goto L_08929274;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929274:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
    goto L_08929278;
L_08929278:
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08929298;
      }
      goto L_08929284;
    }
L_08929284:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08929298;
      }
      goto L_08929290;
    }
L_08929290:
    aot_gpr_31 = (0x08929298u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929298u) goto L_08929298;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929298:
    { std::uint32_t aot_run_words[12]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(384), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
      ctx.gpr[21] = aot_run_words[7];
      ctx.gpr[22] = aot_run_words[8];
      ctx.gpr[23] = aot_run_words[9];
      ctx.gpr[30] = aot_run_words[10];
      aot_gpr_31 = aot_run_words[11];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(432));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089292D0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-416));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (16320u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_5 = (aot_gpr_5 >> 22u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 & 7u);
    { const std::uint32_t aot_run_words[12]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(368), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[22] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08929BEC;
      }
      goto L_08929328;
    }
L_08929328:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1740)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08929BEC;
      }
      goto L_0892933C;
    }
L_0892933C:
    aot_gpr_31 = (0x08929344u);
    // nop
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929344u) goto L_08929344;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929344:
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (16752u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17056u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(352), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (16880u << 16u);
    aot_gpr_6 = (0u | 49u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_4 = (aot_gpr_6 | 0u);
        goto L_089293A8;
    }
    goto L_089293A8;
L_089293A8:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_089293B4;
    }
    goto L_089293B4;
L_089293B4:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(360), aot_gpr_5);
    if (aot_gpr_6 != 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(360), aot_gpr_4);
        goto L_089293C8;
    }
    goto L_089293C8;
L_089293C8:
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (16752u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17056u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_4 = (16840u << 16u);
    aot_gpr_6 = (0u | 49u);
    aot_gpr_5 = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_4 = (aot_gpr_6 | 0u);
        goto L_08929410;
    }
    goto L_08929410;
L_08929410:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_0892941C;
    }
    goto L_0892941C;
L_0892941C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_08929430;
    }
    goto L_08929430;
L_08929430:
    aot_gpr_5 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (16752u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (17056u << 16u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_5 = (16880u << 16u);
    ctx.gpr[7] = (0u | 49u);
    aot_gpr_6 = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    aot_gpr_5 = (ctx.gpr[7] | 0u);
        goto L_08929478;
    }
    goto L_08929478;
L_08929478:
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_5 = (aot_gpr_6 | 0u);
        goto L_08929484;
    }
    goto L_08929484;
L_08929484:
    aot_gpr_6 = (0u | 50u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(356), aot_gpr_6);
    if (ctx.gpr[7] != 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(356), aot_gpr_5);
        goto L_08929498;
    }
    goto L_08929498;
L_08929498:
    aot_gpr_5 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (16752u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (17056u << 16u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_5 = (16840u << 16u);
    ctx.gpr[7] = (0u | 49u);
    aot_gpr_6 = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    aot_gpr_5 = (ctx.gpr[7] | 0u);
        goto L_089294E0;
    }
    goto L_089294E0;
L_089294E0:
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_5 = (aot_gpr_6 | 0u);
        goto L_089294EC;
    }
    goto L_089294EC;
L_089294EC:
    aot_gpr_6 = (0u | 50u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_089294FC;
    }
    goto L_089294FC;
L_089294FC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(348), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(344), aot_gpr_4);
    goto L_08929504;
L_08929504:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(348)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(344)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08929A18;
      }
      goto L_08929518;
    }
L_08929518:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929A18;
      }
      goto L_08929520;
    }
L_08929520:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(360)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(340), aot_gpr_4);
    goto L_08929528;
L_08929528:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(356)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(340)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08929A08;
      }
      goto L_0892953C;
    }
L_0892953C:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929A08;
      }
      goto L_08929544;
    }
L_08929544:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(344)));
    ctx.gpr[30] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_6 = (aot_gpr_5 << 4u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[30] = (ctx.gpr[30] + aot_gpr_4);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(28)));
    goto L_08929574;
L_08929574:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929694;
      }
      goto L_0892957C;
    }
L_0892957C:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929694;
      }
      goto L_08929584;
    }
L_08929584:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089295B0;
      }
      goto L_089295A0;
    }
L_089295A0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_089295B0;
L_089295B0:
    ctx.gpr[18] = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892968C;
      }
      goto L_089295BC;
    }
L_089295BC:
    aot_gpr_16 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892968C;
      }
      goto L_089295CC;
    }
L_089295CC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089295F0;
      }
      goto L_089295D8;
    }
L_089295D8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8672)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 << 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + aot_gpr_4);
      if (branch_taken) {
          goto L_089295F0;
      }
      goto L_089295F0;
    }
L_089295F0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08929674;
      }
      goto L_08929600;
    }
L_08929600:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(352)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(37)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08929674;
      }
      goto L_08929614;
    }
L_08929614:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(364), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0892962Cu);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 178u, 0x08904B64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892962Cu) goto L_0892962C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892962C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
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
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17024u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[18] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(364)));
      if (branch_taken) {
          goto L_08929674;
      }
      goto L_0892966C;
    }
L_0892966C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_0892968C;
      }
      goto L_08929674;
    }
L_08929674:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_16 = (aot_gpr_4 << 16u);
    aot_gpr_16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_16) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089295CC;
      }
      goto L_0892968C;
    }
L_0892968C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929574;
      }
      goto L_08929694;
    }
L_08929694:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(12)));
    goto L_08929698;
L_08929698:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089297B8;
      }
      goto L_089296A0;
    }
L_089296A0:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_089297B8;
      }
      goto L_089296A8;
    }
L_089296A8:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089296D4;
      }
      goto L_089296C4;
    }
L_089296C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_089296D4;
L_089296D4:
    ctx.gpr[18] = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089297B0;
      }
      goto L_089296E0;
    }
L_089296E0:
    aot_gpr_16 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089297B0;
      }
      goto L_089296F0;
    }
L_089296F0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08929714;
      }
      goto L_089296FC;
    }
L_089296FC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8672)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 << 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + aot_gpr_4);
      if (branch_taken) {
          goto L_08929714;
      }
      goto L_08929714;
    }
L_08929714:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08929798;
      }
      goto L_08929724;
    }
L_08929724:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(352)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(37)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08929798;
      }
      goto L_08929738;
    }
L_08929738:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(364), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08929750u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 178u, 0x08904B64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929750u) goto L_08929750;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929750:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
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
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17024u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[18] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(364)));
      if (branch_taken) {
          goto L_08929798;
      }
      goto L_08929790;
    }
L_08929790:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_089297B0;
      }
      goto L_08929798;
    }
L_08929798:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_16 = (aot_gpr_4 << 16u);
    aot_gpr_16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_16) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089296F0;
      }
      goto L_089297B0;
    }
L_089297B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929698;
      }
      goto L_089297B8;
    }
L_089297B8:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    goto L_089297BC;
L_089297BC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089298DC;
      }
      goto L_089297C4;
    }
L_089297C4:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_089298DC;
      }
      goto L_089297CC;
    }
L_089297CC:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089297F8;
      }
      goto L_089297E8;
    }
L_089297E8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_089297F8;
L_089297F8:
    ctx.gpr[18] = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089298D4;
      }
      goto L_08929804;
    }
L_08929804:
    aot_gpr_16 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089298D4;
      }
      goto L_08929814;
    }
L_08929814:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08929838;
      }
      goto L_08929820;
    }
L_08929820:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8672)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 << 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + aot_gpr_4);
      if (branch_taken) {
          goto L_08929838;
      }
      goto L_08929838;
    }
L_08929838:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_089298BC;
      }
      goto L_08929848;
    }
L_08929848:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(352)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(37)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089298BC;
      }
      goto L_0892985C;
    }
L_0892985C:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(364), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08929874u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 178u, 0x08904B64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929874u) goto L_08929874;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929874:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
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
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17024u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[18] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(364)));
      if (branch_taken) {
          goto L_089298BC;
      }
      goto L_089298B4;
    }
L_089298B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_089298D4;
      }
      goto L_089298BC;
    }
L_089298BC:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_16 = (aot_gpr_4 << 16u);
    aot_gpr_16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_16) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08929814;
      }
      goto L_089298D4;
    }
L_089298D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089297BC;
      }
      goto L_089298DC;
    }
L_089298DC:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    goto L_089298E0;
L_089298E0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089299F8;
      }
      goto L_089298E8;
    }
L_089298E8:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_089299F8;
      }
      goto L_089298F0;
    }
L_089298F0:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0892991C;
      }
      goto L_0892990C;
    }
L_0892990C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_0892991C;
L_0892991C:
    ctx.gpr[18] = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089299F0;
      }
      goto L_08929928;
    }
L_08929928:
    aot_gpr_16 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089299F0;
      }
      goto L_08929938;
    }
L_08929938:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0892995C;
      }
      goto L_08929944;
    }
L_08929944:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8672)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 << 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + aot_gpr_4);
      if (branch_taken) {
          goto L_0892995C;
      }
      goto L_0892995C;
    }
L_0892995C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_089299D8;
      }
      goto L_0892996C;
    }
L_0892996C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(352)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(37)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_089299D8;
      }
      goto L_08929980;
    }
L_08929980:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08929990u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 178u, 0x08904B64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929990u) goto L_08929990;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929990:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
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
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17024u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089299D8;
      }
      goto L_089299D0;
    }
L_089299D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_089299F0;
      }
      goto L_089299D8;
    }
L_089299D8:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_16 = (aot_gpr_4 << 16u);
    aot_gpr_16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_16) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08929938;
      }
      goto L_089299F0;
    }
L_089299F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089298E0;
      }
      goto L_089299F8;
    }
L_089299F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(340)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(340), aot_gpr_4);
      if (branch_taken) {
          goto L_08929528;
      }
      goto L_08929A08;
    }
L_08929A08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(344)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(344), aot_gpr_4);
      if (branch_taken) {
          goto L_08929504;
      }
      goto L_08929A18;
    }
L_08929A18:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929BEC;
      }
      goto L_08929A20;
    }
L_08929A20:
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08929A4Cu);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 178u, 0x08904B64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929A4Cu) goto L_08929A4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929A4C:
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(192)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_gpr_31 = (0x08929A74u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(196)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929A74u) goto L_08929A74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929A74:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_31 = (0x08929A90u);
    aot_gpr_16 = (aot_gpr_4 & 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929A90u) goto L_08929A90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929A90:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08929BBC;
      }
      goto L_08929AA4;
    }
L_08929AA4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08929AB4u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 178u, 0x08904B64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929AB4u) goto L_08929AB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929AB4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(208)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(212)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(224), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(228), aot_gpr_5);
    ctx.gpr[21] = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08929B14;
      }
      goto L_08929AE0;
    }
L_08929AE0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    // nop
      if (branch_taken) {
          goto L_08929BB4;
      }
      goto L_08929AE8;
    }
L_08929AE8:
    ctx.gpr[8] = (15820u << 16u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (0u | 20u);
    aot_gpr_31 = (0x08929B0Cu);
    ctx.gpr[7] = (0u | 15000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 350u, 0x088E2F4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929B0Cu) goto L_08929B0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929B0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929BB4;
      }
      goto L_08929B14;
    }
L_08929B14:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08929B2C;
      }
      goto L_08929B1C;
    }
L_08929B1C:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08929BB4;
      }
      goto L_08929B24;
    }
L_08929B24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929BB4;
      }
      goto L_08929B2C;
    }
L_08929B2C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(37)));
    aot_gpr_5 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_16 = (aot_gpr_4 + static_cast<std::uint32_t>(8500));
    aot_gpr_4 = (16256u << 16u);
    aot_gpr_31 = (0x08929B4Cu);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929B4Cu) goto L_08929B4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929B4C:
    aot_gpr_6 = (aot_gpr_16 + static_cast<std::uint32_t>(-8000));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08929B60u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 31u));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929B60u) goto L_08929B60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929B60:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19980)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19984)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_6 = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_6 = (ctx.gpr[1] | aot_gpr_6);
    ctx.gpr[8] = (aot_gpr_6 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[9] = (ctx.gpr[8] < aot_gpr_4 ? 1u : 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_6 = (ctx.gpr[9] + ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (0u | 22u);
    aot_gpr_31 = (0x08929BACu);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 350u, 0x088E2F4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929BACu) goto L_08929BAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929BAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929BB4;
      }
      goto L_08929BB4;
    }
L_08929BB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08929BF0;
      }
      goto L_08929BBC;
    }
L_08929BBC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2000));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1740), aot_gpr_5);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08929BE0u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 430u, 0x08909990u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929BE0u) goto L_08929BE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929BE0:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08929BECu);
    aot_gpr_5 = (0u | 1000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929BECu) goto L_08929BEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929BEC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08929BF0;
L_08929BF0:
    { std::uint32_t aot_run_words[12]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(368), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
      ctx.gpr[21] = aot_run_words[7];
      ctx.gpr[22] = aot_run_words[8];
      ctx.gpr[23] = aot_run_words[9];
      ctx.gpr[30] = aot_run_words[10];
      aot_gpr_31 = aot_run_words[11];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(416));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929C28:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2236)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-19));
    aot_gpr_6 = (aot_gpr_5 < static_cast<std::uint32_t>(15) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08929ED0;
      }
      goto L_08929C4C;
    }
L_08929C4C:
    aot_gpr_5 = (aot_gpr_5 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_5);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-11848)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929C64:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2240)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08929E2C;
      }
      goto L_08929C78;
    }
L_08929C78:
    aot_gpr_5 = (0u | 25u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08929CDC;
      }
      goto L_08929C84;
    }
L_08929C84:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08929C94u);
    aot_gpr_6 = (0u | 166u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929C94u) goto L_08929C94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929C94:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08929CAC;
      }
      goto L_08929CA0;
    }
L_08929CA0:
    aot_gpr_5 = (49408u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08929CAC;
L_08929CAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08929E2C;
      }
      goto L_08929CB8;
    }
L_08929CB8:
    aot_gpr_31 = (0x08929CC0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929CC0u) goto L_08929CC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929CC0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1340)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08929CD4u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 746u, 0x08A02EC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929CD4u) goto L_08929CD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929CD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929E2C;
      }
      goto L_08929CDC;
    }
L_08929CDC:
    aot_gpr_5 = (0u | 19u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08929D40;
      }
      goto L_08929CE8;
    }
L_08929CE8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08929CF8u);
    aot_gpr_6 = (0u | 14u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929CF8u) goto L_08929CF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929CF8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08929D10;
      }
      goto L_08929D04;
    }
L_08929D04:
    aot_gpr_5 = (49408u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08929D10;
L_08929D10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08929E2C;
      }
      goto L_08929D1C;
    }
L_08929D1C:
    aot_gpr_31 = (0x08929D24u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929D24u) goto L_08929D24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929D24:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1340)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08929D38u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 746u, 0x08A02EC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929D38u) goto L_08929D38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929D38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929E2C;
      }
      goto L_08929D40;
    }
L_08929D40:
    aot_gpr_5 = (0u | 21u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_6 = (0u | 22u);
      if (branch_taken) {
          goto L_08929D64;
      }
      goto L_08929D4C;
    }
L_08929D4C:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
    aot_gpr_6 = (0u | 24u);
      if (branch_taken) {
          goto L_08929D64;
      }
      goto L_08929D54;
    }
L_08929D54:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
    aot_gpr_6 = (0u | 23u);
      if (branch_taken) {
          goto L_08929D64;
      }
      goto L_08929D5C;
    }
L_08929D5C:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    // nop
      if (branch_taken) {
          goto L_08929E2C;
      }
      goto L_08929D64;
    }
L_08929D64:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08929D98;
      }
      goto L_08929D6C;
    }
L_08929D6C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08929D7Cu);
    aot_gpr_6 = (0u | 162u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929D7Cu) goto L_08929D7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929D7C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08929E04;
      }
      goto L_08929D88;
    }
L_08929D88:
    aot_gpr_5 = (49408u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08929E04;
      }
      goto L_08929D98;
    }
L_08929D98:
    aot_gpr_5 = (0u | 24u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08929DD0;
      }
      goto L_08929DA4;
    }
L_08929DA4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08929DB4u);
    aot_gpr_6 = (0u | 164u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929DB4u) goto L_08929DB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929DB4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08929E04;
      }
      goto L_08929DC0;
    }
L_08929DC0:
    aot_gpr_5 = (49408u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08929E04;
      }
      goto L_08929DD0;
    }
L_08929DD0:
    aot_gpr_5 = (0u | 23u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08929E04;
      }
      goto L_08929DDC;
    }
L_08929DDC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08929DECu);
    aot_gpr_6 = (0u | 163u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929DECu) goto L_08929DEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929DEC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08929E04;
      }
      goto L_08929DF8;
    }
L_08929DF8:
    aot_gpr_5 = (49408u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08929E04;
L_08929E04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08929E2C;
      }
      goto L_08929E10;
    }
L_08929E10:
    aot_gpr_31 = (0x08929E18u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929E18u) goto L_08929E18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929E18:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1340)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08929E2Cu);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 746u, 0x08A02EC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929E2Cu) goto L_08929E2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929E2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929ED0;
      }
      goto L_08929E34;
    }
L_08929E34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x08929E40u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19976));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 262u, 0x08905288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929E40u) goto L_08929E40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929E40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929ED0;
      }
      goto L_08929E48;
    }
L_08929E48:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08929E58u);
    aot_gpr_6 = (0u | 28u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929E58u) goto L_08929E58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929E58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929E68;
      }
      goto L_08929E60;
    }
L_08929E60:
    aot_gpr_31 = (0x08929E68u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 70u, 0x0891C44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929E68u) goto L_08929E68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929E68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929ED0;
      }
      goto L_08929E70;
    }
L_08929E70:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08929E80u);
    aot_gpr_6 = (0u | 55u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929E80u) goto L_08929E80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929E80:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08929E98;
      }
      goto L_08929E8C;
    }
L_08929E8C:
    aot_gpr_5 = (49408u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08929E98;
L_08929E98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929ED0;
      }
      goto L_08929EA0;
    }
L_08929EA0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08929EB0u);
    aot_gpr_6 = (0u | 156u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929EB0u) goto L_08929EB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929EB0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08929EC8;
      }
      goto L_08929EBC;
    }
L_08929EBC:
    aot_gpr_5 = (49408u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08929EC8;
L_08929EC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929ED0;
      }
      goto L_08929ED0;
    }
L_08929ED0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2236), 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929EE4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-224));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(204), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 173u);
    aot_gpr_6 = (0u | 57u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), aot_gpr_16};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(192), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(208), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08929F64;
      }
      goto L_08929F18;
    }
L_08929F18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 58u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08929F64;
      }
      goto L_08929F28;
    }
L_08929F28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08929F64;
      }
      goto L_08929F38;
    }
L_08929F38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2236)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(33) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_08929F4C;
    }
L_08929F4C:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-11784)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929F64:
    aot_gpr_31 = (0x08929F6Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_08929F6C:
    aot_gpr_31 = (0x08929F74u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 362u, 0x0890D7C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929F74u) goto L_08929F74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929F74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0EC;
      }
      goto L_08929F7C;
    }
L_08929F7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2240)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08929FB4;
      }
      goto L_08929F90;
    }
L_08929F90:
    aot_gpr_31 = (0x08929F98u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0130_entry, 130u, 555u, 0x08A0F33Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929F98u) goto L_08929F98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929F98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929FB4;
      }
      goto L_08929FA0;
    }
L_08929FA0:
    aot_gpr_31 = (0x08929FA8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_08929FA8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08929FB4u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929FB4u) goto L_08929FB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929FB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_08929FBC;
    }
L_08929FBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2240)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A050;
      }
      goto L_08929FD0;
    }
L_08929FD0:
    aot_gpr_31 = (0x08929FD8u);
    // nop
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08929FD8u) goto L_08929FD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08929FD8:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A014;
      }
      goto L_08929FE8;
    }
L_08929FE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2240)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A014;
      }
      goto L_08929FF4;
    }
L_08929FF4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0892A00Cu);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A00Cu) goto L_0892A00C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A00C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A01C;
      }
      goto L_0892A014;
    }
L_0892A014:
    aot_gpr_31 = (0x0892A01Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_0892A01C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A02Cu);
    aot_gpr_6 = (0u | 11u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A02Cu) goto L_0892A02C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A02C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A050;
      }
      goto L_0892A038;
    }
L_0892A038:
    aot_gpr_5 = (49408u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    goto L_0892A050;
L_0892A050:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892A058;
    }
L_0892A058:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2240)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A0A8;
      }
      goto L_0892A06C;
    }
L_0892A06C:
    aot_gpr_31 = (0x0892A074u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_0892A074:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A084u);
    aot_gpr_6 = (0u | 149u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A084u) goto L_0892A084;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A084:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A0A8;
      }
      goto L_0892A090;
    }
L_0892A090:
    aot_gpr_5 = (49408u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    goto L_0892A0A8;
L_0892A0A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892A0B0;
    }
L_0892A0B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892A0B8;
    }
L_0892A0B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892A0C0;
    }
L_0892A0C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892A0C8;
    }
L_0892A0C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892A0D0;
    }
L_0892A0D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2240)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A100;
      }
      goto L_0892A0E4;
    }
L_0892A0E4:
    aot_gpr_31 = (0x0892A0ECu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_0892A0EC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A0F8u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A0F8u) goto L_0892A0F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A0F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A158;
      }
      goto L_0892A100;
    }
L_0892A100:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2240)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(2500) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A158;
      }
      goto L_0892A118;
    }
L_0892A118:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2240)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(2001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A158;
      }
      goto L_0892A130;
    }
L_0892A130:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2240)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-500));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2240), aot_gpr_4);
    ctx.gpr[8] = (16512u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0892A158u);
    ctx.gpr[7] = (0u | 148u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A158u) goto L_0892A158;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A158:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892A160;
    }
L_0892A160:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2240)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A184;
      }
      goto L_0892A174;
    }
L_0892A174:
    aot_gpr_31 = (0x0892A17Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_0892A17C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A1A4;
      }
      goto L_0892A184;
    }
L_0892A184:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1380)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A1A4;
      }
      goto L_0892A198;
    }
L_0892A198:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2500));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1380), aot_gpr_4);
    goto L_0892A1A4;
L_0892A1A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892A1AC;
    }
L_0892A1AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2240)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A1F4;
      }
      goto L_0892A1C0;
    }
L_0892A1C0:
    aot_gpr_31 = (0x0892A1C8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_0892A1C8:
    aot_gpr_4 = (16457u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2256)));
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (0u | 30u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0892A1F4;
      }
      goto L_0892A1EC;
    }
L_0892A1EC:
    aot_gpr_31 = (0x0892A1F4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 364u, 0x088E3074u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A1F4u) goto L_0892A1F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A1F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1380)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A214;
      }
      goto L_0892A208;
    }
L_0892A208:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2500));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1380), aot_gpr_4);
    goto L_0892A214;
L_0892A214:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892A21C;
    }
L_0892A21C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2240)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A290;
      }
      goto L_0892A230;
    }
L_0892A230:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A240u);
    aot_gpr_6 = (0u | 41u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A240u) goto L_0892A240;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A240:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A288;
      }
      goto L_0892A248;
    }
L_0892A248:
    ctx.gpr[8] = (16512u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0892A264u);
    ctx.gpr[7] = (0u | 148u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A264u) goto L_0892A264;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A264:
    aot_gpr_5 = (2193u << 16u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A278u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-13204));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088905F0, 35u, 95u, 0x088905F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A278u) goto L_0892A278;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A278:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(5000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2240), aot_gpr_4);
      if (branch_taken) {
          goto L_0892A290;
      }
      goto L_0892A288;
    }
L_0892A288:
    aot_gpr_31 = (0x0892A290u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_0892A290:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892A298;
    }
L_0892A298:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2240)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A2E8;
      }
      goto L_0892A2AC;
    }
L_0892A2AC:
    aot_gpr_31 = (0x0892A2B4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_0892A2B4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A2C4u);
    aot_gpr_6 = (0u | 11u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A2C4u) goto L_0892A2C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A2C4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A2E8;
      }
      goto L_0892A2D0;
    }
L_0892A2D0:
    aot_gpr_5 = (49408u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    goto L_0892A2E8;
L_0892A2E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892A2F0;
    }
L_0892A2F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2240)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A530;
      }
      goto L_0892A304;
    }
L_0892A304:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2276)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[17] = (0u | 150u);
      if (branch_taken) {
          goto L_0892A31C;
      }
      goto L_0892A314;
    }
L_0892A314:
    aot_gpr_31 = (0x0892A31Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 829u, 0x0890B488u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A31Cu) goto L_0892A31C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A31C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A32Cu);
    aot_gpr_6 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A32Cu) goto L_0892A32C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A32C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A34C;
      }
      goto L_0892A338;
    }
L_0892A338:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A348u);
    aot_gpr_6 = (0u | 150u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A348u) goto L_0892A348;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A348:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_0892A34C;
L_0892A34C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A368;
      }
      goto L_0892A354;
    }
L_0892A354:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A364u);
    aot_gpr_6 = (0u | 148u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A364u) goto L_0892A364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A364:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_0892A368;
L_0892A368:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A384;
      }
      goto L_0892A370;
    }
L_0892A370:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A380u);
    aot_gpr_6 = (0u | 149u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A380u) goto L_0892A380;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A380:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_0892A384;
L_0892A384:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A3F8;
      }
      goto L_0892A38C;
    }
L_0892A38C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A3D4;
      }
      goto L_0892A3A4;
    }
L_0892A3A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (16512u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(776)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A3CCu);
    ctx.gpr[7] = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A3CCu) goto L_0892A3CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A3CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A3EC;
      }
      goto L_0892A3D4;
    }
L_0892A3D4:
    aot_gpr_4 = (49408u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_0892A3EC;
L_0892A3EC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0892A41C;
      }
      goto L_0892A3F8;
    }
L_0892A3F8:
    aot_gpr_31 = (0x0892A400u);
    ctx.gpr[18] = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A400u) goto L_0892A400;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A400:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 3u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A460;
      }
      goto L_0892A414;
    }
L_0892A414:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0892A478;
      }
      goto L_0892A41C;
    }
L_0892A41C:
    aot_gpr_4 = (16457u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2256)));
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0892A434u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A434u) goto L_0892A434;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A434:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x0892A440u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_0892A440:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A44Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A44Cu) goto L_0892A44C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A44C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A458u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 304u, 0x08911138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A458u) goto L_0892A458;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A458:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1938), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0892B0EC;
      }
      goto L_0892A460;
    }
L_0892A460:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    // nop
      if (branch_taken) {
          goto L_0892A4A4;
      }
      goto L_0892A468;
    }
L_0892A468:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    // nop
      if (branch_taken) {
          goto L_0892A490;
      }
      goto L_0892A470;
    }
L_0892A470:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 149u);
      if (branch_taken) {
          goto L_0892A4A4;
      }
      goto L_0892A478;
    }
L_0892A478:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0892A498;
      }
      goto L_0892A480;
    }
L_0892A480:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A4A0;
      }
      goto L_0892A488;
    }
L_0892A488:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A4A4;
      }
      goto L_0892A490;
    }
L_0892A490:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 12u);
      if (branch_taken) {
          goto L_0892A4A4;
      }
      goto L_0892A498;
    }
L_0892A498:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 148u);
      if (branch_taken) {
          goto L_0892A4A4;
      }
      goto L_0892A4A0;
    }
L_0892A4A0:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_0892A4A4;
L_0892A4A4:
    ctx.gpr[8] = (16512u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0892A4C0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A4C0u) goto L_0892A4C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A4C0:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    aot_gpr_4 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0892A4D8;
      }
      goto L_0892A4C8;
    }
L_0892A4C8:
    aot_gpr_5 = (2193u << 16u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A4D8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-13204));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088905F0, 35u, 95u, 0x088905F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A4D8u) goto L_0892A4D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A4D8:
    aot_gpr_31 = (0x0892A4E0u);
    // nop
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A4E0u) goto L_0892A4E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A4E0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19964)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19968)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0892A4F4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A4F4u) goto L_0892A4F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A4F4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19956)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19960)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_6 = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_6 = (ctx.gpr[1] | aot_gpr_6);
    ctx.gpr[8] = (aot_gpr_6 + aot_gpr_4);
    ctx.gpr[9] = (ctx.gpr[8] < aot_gpr_4 ? 1u : 0u);
    aot_gpr_6 = (ctx.gpr[9] + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2240), aot_gpr_4);
    goto L_0892A530;
L_0892A530:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892A538;
    }
L_0892A538:
    aot_gpr_4 = (0u | 173u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 156u);
      if (branch_taken) {
          goto L_0892A548;
      }
      goto L_0892A544;
    }
L_0892A544:
    aot_gpr_4 = (0u | 173u);
    goto L_0892A548;
L_0892A548:
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_0892A554;
      }
      goto L_0892A550;
    }
L_0892A550:
    ctx.gpr[17] = (0u | 157u);
    goto L_0892A554;
L_0892A554:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A564u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A564u) goto L_0892A564;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A564:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1716)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0892A59C;
      }
      goto L_0892A570;
    }
L_0892A570:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1716)));
    aot_gpr_6 = (0u | 3u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 14u);
    aot_gpr_5 = (aot_gpr_5 >> 1u);
    if (aot_gpr_5 != aot_gpr_6) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
        goto L_0892A5A0;
    }
    goto L_0892A58C;
L_0892A58C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1716)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A5D8;
      }
      goto L_0892A59C;
    }
L_0892A59C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    goto L_0892A5A0;
L_0892A5A0:
    aot_gpr_6 = (0u | 9u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    // nop
      if (branch_taken) {
          goto L_0892A5D8;
      }
      goto L_0892A5AC;
    }
L_0892A5AC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 16u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    // nop
      if (branch_taken) {
          goto L_0892A5D8;
      }
      goto L_0892A5BC;
    }
L_0892A5BC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2240)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A5D8;
      }
      goto L_0892A5D0;
    }
L_0892A5D0:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A8E0;
      }
      goto L_0892A5D8;
    }
L_0892A5D8:
    aot_gpr_31 = (0x0892A5E0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_0892A5E0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2240), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1716)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A8A4;
      }
      goto L_0892A5F0;
    }
L_0892A5F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1716)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 >> 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0892A8A4;
      }
      goto L_0892A60C;
    }
L_0892A60C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    ctx.gpr[18] = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0892A8A4;
      }
      goto L_0892A61C;
    }
L_0892A61C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0892A8A4;
      }
      goto L_0892A62C;
    }
L_0892A62C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (aot_gpr_5 & 512u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1716)));
      if (branch_taken) {
          goto L_0892A670;
      }
      goto L_0892A63C;
    }
L_0892A63C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 8192u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A8A4;
      }
      goto L_0892A64C;
    }
L_0892A64C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A658u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 696u, 0x089AB4FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A658u) goto L_0892A658;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A658:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 10000u);
    aot_gpr_31 = (0x0892A668u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 654u, 0x089AB1F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A668u) goto L_0892A668;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A668:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A8A4;
      }
      goto L_0892A670;
    }
L_0892A670:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1364)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1364)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(23))))));
    aot_gpr_6 = (0u | 100u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(22))))));
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A6F8;
      }
      goto L_0892A694;
    }
L_0892A694:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1716)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A6A4u);
    aot_gpr_5 = (0u | 10u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A6A4u) goto L_0892A6A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A6A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0892A6C0;
      }
      goto L_0892A6B0;
    }
L_0892A6B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0892A6D8;
      }
      goto L_0892A6C0;
    }
L_0892A6C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (16384u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_31 = (0x0892A6D8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890FF64, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A6D8u) goto L_0892A6D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A6D8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A6E4u);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A6E4u) goto L_0892A6E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A6E4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A6F0u);
    aot_gpr_5 = (0u | 142u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A6F0u) goto L_0892A6F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A6F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A8A4;
      }
      goto L_0892A6F8;
    }
L_0892A6F8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_31 = (0x0892A714u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A714u) goto L_0892A714;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A714:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A7B8;
      }
      goto L_0892A71C;
    }
L_0892A71C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1716)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1360)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(1948)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-7));
    aot_gpr_6 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_6 << (aot_gpr_5 & 31u));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A764;
      }
      goto L_0892A740;
    }
L_0892A740:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1716)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A750u);
    aot_gpr_5 = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A750u) goto L_0892A750;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A750:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A75Cu);
    aot_gpr_5 = (0u | 20000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A75Cu) goto L_0892A75C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A75C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A8A4;
      }
      goto L_0892A764;
    }
L_0892A764:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A770u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A770u) goto L_0892A770;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A770:
    aot_gpr_31 = (0x0892A778u);
    // nop
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A778u) goto L_0892A778;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A778:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20236)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20240)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0892A78Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A78Cu) goto L_0892A78C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A78C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_gpr_4 << 24u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 24u));
    aot_gpr_31 = (0x0892A7B0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A7B0u) goto L_0892A7B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A7B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A8A4;
      }
      goto L_0892A7B8;
    }
L_0892A7B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1364)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A858;
      }
      goto L_0892A7CC;
    }
L_0892A7CC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1716)));
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A7E0u);
    aot_gpr_5 = (0u | 10u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A7E0u) goto L_0892A7E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A7E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
    ctx.gpr[18] = (0u | 4u);
      if (branch_taken) {
          goto L_0892A7FC;
      }
      goto L_0892A7EC;
    }
L_0892A7EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0892A814;
      }
      goto L_0892A7FC;
    }
L_0892A7FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (16384u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_31 = (0x0892A814u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890FF64, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A814u) goto L_0892A814;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A814:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2244)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0892A82C;
      }
      goto L_0892A820;
    }
L_0892A820:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A82Cu);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A82Cu) goto L_0892A82C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A82C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0892A8A4;
      }
      goto L_0892A83C;
    }
L_0892A83C:
    aot_gpr_31 = (0x0892A844u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0177_entry, 177u, 29u, 0x08AC811Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A844u) goto L_0892A844;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A844:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A850u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A850u) goto L_0892A850;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A8A4;
      }
      goto L_0892A858;
    }
L_0892A858:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A864u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A864u) goto L_0892A864;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A864:
    aot_gpr_31 = (0x0892A86Cu);
    // nop
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A86Cu) goto L_0892A86C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A86C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20236)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20240)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0892A880u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A880u) goto L_0892A880;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A880:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_gpr_4 << 24u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 24u));
    aot_gpr_31 = (0x0892A8A4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A8A4u) goto L_0892A8A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A8A4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A8B4u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A8B4u) goto L_0892A8B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A8B4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A8D8;
      }
      goto L_0892A8C0;
    }
L_0892A8C0:
    aot_gpr_4 = (49280u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_0892A8D8;
L_0892A8D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892A8E0;
    }
L_0892A8E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1716)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A8F4;
      }
      goto L_0892A8EC;
    }
L_0892A8EC:
    aot_gpr_31 = (0x0892A8F4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 332u, 0x0890932Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A8F4u) goto L_0892A8F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A8F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892A8FC;
    }
L_0892A8FC:
    aot_gpr_4 = (0u | 173u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 157u);
      if (branch_taken) {
          goto L_0892A90C;
      }
      goto L_0892A908;
    }
L_0892A908:
    aot_gpr_4 = (0u | 173u);
    goto L_0892A90C;
L_0892A90C:
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_0892A918;
      }
      goto L_0892A914;
    }
L_0892A914:
    ctx.gpr[17] = (0u | 153u);
    goto L_0892A918;
L_0892A918:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A924;
      }
      goto L_0892A920;
    }
L_0892A920:
    aot_gpr_4 = (0u | 173u);
    goto L_0892A924;
L_0892A924:
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_0892A930;
      }
      goto L_0892A92C;
    }
L_0892A92C:
    ctx.gpr[17] = (0u | 15u);
    goto L_0892A930;
L_0892A930:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A93C;
      }
      goto L_0892A938;
    }
L_0892A938:
    aot_gpr_4 = (0u | 173u);
    goto L_0892A93C;
L_0892A93C:
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_0892A948;
      }
      goto L_0892A944;
    }
L_0892A944:
    ctx.gpr[17] = (0u | 14u);
    goto L_0892A948;
L_0892A948:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2240)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A9E0;
      }
      goto L_0892A95C;
    }
L_0892A95C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892A96Cu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A96Cu) goto L_0892A96C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A96C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A990;
      }
      goto L_0892A978;
    }
L_0892A978:
    aot_gpr_4 = (49280u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_0892A990;
L_0892A990:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A9D0;
      }
      goto L_0892A99C;
    }
L_0892A99C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 54u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0892A9D0;
      }
      goto L_0892A9AC;
    }
L_0892A9AC:
    aot_gpr_31 = (0x0892A9B4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A9B4u) goto L_0892A9B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A9B4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1340)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0892A9C4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 802u, 0x08A03194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892A9C4u) goto L_0892A9C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892A9C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
    aot_gpr_4 = (aot_gpr_4 | 8192u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(468), aot_gpr_4);
    goto L_0892A9D0;
L_0892A9D0:
    aot_gpr_31 = (0x0892A9D8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_0892A9D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AA54;
      }
      goto L_0892A9E0;
    }
L_0892A9E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2236)));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0892AA54;
      }
      goto L_0892A9F0;
    }
L_0892A9F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AA54;
      }
      goto L_0892A9FC;
    }
L_0892A9FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 12u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0892AA1C;
      }
      goto L_0892AA0C;
    }
L_0892AA0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0892AA54;
      }
      goto L_0892AA1C;
    }
L_0892AA1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1716)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AA34;
      }
      goto L_0892AA28;
    }
L_0892AA28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1716)));
    aot_gpr_31 = (0x0892AA34u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(1716));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A93004, 163u, 430u, 0x08A93004u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AA34u) goto L_0892AA34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AA34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1716), aot_gpr_4);
      if (branch_taken) {
          goto L_0892AA4C;
      }
      goto L_0892AA40;
    }
L_0892AA40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1716)));
    aot_gpr_31 = (0x0892AA4Cu);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(1716));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AA4Cu) goto L_0892AA4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AA4C:
    aot_gpr_31 = (0x0892AA54u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 332u, 0x0890932Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AA54u) goto L_0892AA54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AA54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892AA5C;
    }
L_0892AA5C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892AA6Cu);
    aot_gpr_6 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AA6Cu) goto L_0892AA6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AA6C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0892AA88;
      }
      goto L_0892AA78;
    }
L_0892AA78:
    aot_gpr_31 = (0x0892AA80u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_0892AA80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AAEC;
      }
      goto L_0892AA88;
    }
L_0892AA88:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2240)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AAEC;
      }
      goto L_0892AA9C;
    }
L_0892AA9C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (16512u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(776)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892AAC4u);
    ctx.gpr[7] = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AAC4u) goto L_0892AAC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AAC4:
    aot_gpr_4 = (0u | 2000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_31 = (0x0892AAD4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_0892AAD4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0892AAECu);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AAECu) goto L_0892AAEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AAEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892AAF4;
    }
L_0892AAF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2240)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AB28;
      }
      goto L_0892AB08;
    }
L_0892AB08:
    aot_gpr_31 = (0x0892AB10u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_0892AB10:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 24u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0892AB28u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AB28u) goto L_0892AB28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AB28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892AB30;
    }
L_0892AB30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 & 32768u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (16457u << 16u);
      if (branch_taken) {
          goto L_0892AB7C;
      }
      goto L_0892AB40;
    }
L_0892AB40:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2256)));
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x0892AB5Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2256)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AB5Cu) goto L_0892AB5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AB5C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2256)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (65535u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32767));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
    goto L_0892AB7C;
L_0892AB7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2240)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ABB8;
      }
      goto L_0892AB90;
    }
L_0892AB90:
    aot_gpr_31 = (0x0892AB98u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_0892AB98:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 23u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0892ABB0u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892ABB0u) goto L_0892ABB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892ABB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ACA8;
      }
      goto L_0892ABB8;
    }
L_0892ABB8:
    aot_gpr_31 = (0x0892ABC0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 20u, 0x08910150u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892ABC0u) goto L_0892ABC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892ABC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AC34;
      }
      goto L_0892ABC8;
    }
L_0892ABC8:
    aot_gpr_31 = (0x0892ABD0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 20u, 0x08910150u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892ABD0u) goto L_0892ABD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892ABD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u | 2u);
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 >> 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0892AC34;
      }
      goto L_0892ABE8;
    }
L_0892ABE8:
    aot_gpr_31 = (0x0892ABF0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890FF64, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892ABF0u) goto L_0892ABF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892ABF0:
    aot_gpr_31 = (0x0892ABF8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089101A4, 67u, 27u, 0x089101A4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892ABF8u) goto L_0892ABF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892ABF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (8u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1372), ctx.gpr[2]);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_31 = (0x0892AC14u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_0892AC14:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 23u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0892AC2Cu);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AC2Cu) goto L_0892AC2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AC2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892AC34;
    }
L_0892AC34:
    aot_gpr_31 = (0x0892AC3Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 31u, 0x0891826Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AC3Cu) goto L_0892AC3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AC3C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (512u << 16u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (128u << 16u);
      if (branch_taken) {
          goto L_0892AC5C;
      }
      goto L_0892AC4C;
    }
L_0892AC4C:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (16u << 16u);
      if (branch_taken) {
          goto L_0892AC5C;
      }
      goto L_0892AC54;
    }
L_0892AC54:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0892ACA8;
      }
      goto L_0892AC5C;
    }
L_0892AC5C:
    aot_gpr_31 = (0x0892AC64u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890FF64, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AC64u) goto L_0892AC64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AC64:
    aot_gpr_31 = (0x0892AC6Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089101A4, 67u, 27u, 0x089101A4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AC6Cu) goto L_0892AC6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AC6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (8u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1372), ctx.gpr[2]);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_31 = (0x0892AC88u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_0892AC88:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 23u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0892ACA0u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892ACA0u) goto L_0892ACA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892ACA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ACA8;
      }
      goto L_0892ACA8;
    }
L_0892ACA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892ACB0;
    }
L_0892ACB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2240)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AD44;
      }
      goto L_0892ACC4;
    }
L_0892ACC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ACE8;
      }
      goto L_0892ACD0;
    }
L_0892ACD0:
    aot_gpr_31 = (0x0892ACD8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892ACD8u) goto L_0892ACD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892ACD8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1340)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0892ACE8u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 802u, 0x08A03194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892ACE8u) goto L_0892ACE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892ACE8:
    aot_gpr_31 = (0x0892ACF0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_0892ACF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (8u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AD44;
      }
      goto L_0892AD04;
    }
L_0892AD04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1372)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AD44;
      }
      goto L_0892AD10;
    }
L_0892AD10:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1372)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892AD20u);
    aot_gpr_6 = (0u | 10000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AD20u) goto L_0892AD20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AD20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (65528u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1372), 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892AD44u);
    aot_gpr_5 = (0u | 119u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AD44u) goto L_0892AD44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AD44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892AD4C;
    }
L_0892AD4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2240)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AD8C;
      }
      goto L_0892AD60;
    }
L_0892AD60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AD84;
      }
      goto L_0892AD6C;
    }
L_0892AD6C:
    aot_gpr_31 = (0x0892AD74u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AD74u) goto L_0892AD74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AD74:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1340)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0892AD84u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 802u, 0x08A03194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AD84u) goto L_0892AD84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AD84:
    aot_gpr_31 = (0x0892AD8Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_0892AD8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892AD94;
    }
L_0892AD94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2240)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ADE8;
      }
      goto L_0892ADA8;
    }
L_0892ADA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ADE8;
      }
      goto L_0892ADB8;
    }
L_0892ADB8:
    aot_gpr_31 = (0x0892ADC0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890FF64, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892ADC0u) goto L_0892ADC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892ADC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (16u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_31 = (0x0892ADD8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 70u, 0x0891C44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892ADD8u) goto L_0892ADD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892ADD8:
    aot_gpr_31 = (0x0892ADE0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_0892ADE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B06C;
      }
      goto L_0892ADE8;
    }
L_0892ADE8:
    aot_gpr_4 = (15820u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0892AE38;
      }
      goto L_0892AE08;
    }
L_0892AE08:
    aot_gpr_31 = (0x0892AE10u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890FF64, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AE10u) goto L_0892AE10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AE10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (16u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_31 = (0x0892AE28u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 70u, 0x0891C44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AE28u) goto L_0892AE28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AE28:
    aot_gpr_31 = (0x0892AE30u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_0892AE30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B06C;
      }
      goto L_0892AE38;
    }
L_0892AE38:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 19 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (16256u << 16u);
      if (branch_taken) {
          goto L_0892AEAC;
      }
      goto L_0892AE48;
    }
L_0892AE48:
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x0892AE54u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AE54u) goto L_0892AE54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AE54:
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_20;
    aot_gpr_4 = (15267u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0892AEAC;
      }
      goto L_0892AE7C;
    }
L_0892AE7C:
    aot_gpr_31 = (0x0892AE84u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890FF64, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AE84u) goto L_0892AE84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AE84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (16u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_31 = (0x0892AE9Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 70u, 0x0891C44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AE9Cu) goto L_0892AE9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AE9C:
    aot_gpr_31 = (0x0892AEA4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_0892AEA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B06C;
      }
      goto L_0892AEAC;
    }
L_0892AEAC:
    aot_gpr_31 = (0x0892AEB4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 31u, 0x0891826Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AEB4u) goto L_0892AEB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AEB4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (512u << 16u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (128u << 16u);
      if (branch_taken) {
          goto L_0892AED4;
      }
      goto L_0892AEC4;
    }
L_0892AEC4:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (16u << 16u);
      if (branch_taken) {
          goto L_0892AED4;
      }
      goto L_0892AECC;
    }
L_0892AECC:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0892AF10;
      }
      goto L_0892AED4;
    }
L_0892AED4:
    aot_gpr_31 = (0x0892AEDCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890FF64, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AEDCu) goto L_0892AEDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AEDC:
    aot_gpr_31 = (0x0892AEE4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089101A4, 67u, 27u, 0x089101A4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AEE4u) goto L_0892AEE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AEE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (8u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1372), ctx.gpr[2]);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_31 = (0x0892AF00u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 70u, 0x0891C44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AF00u) goto L_0892AF00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AF00:
    aot_gpr_31 = (0x0892AF08u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_0892AF08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AF10;
      }
      goto L_0892AF10;
    }
L_0892AF10:
    aot_gpr_31 = (0x0892AF18u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AF18u) goto L_0892AF18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AF18:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B06C;
      }
      goto L_0892AF24;
    }
L_0892AF24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B06C;
      }
      goto L_0892AF30;
    }
L_0892AF30:
    aot_gpr_31 = (0x0892AF38u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892AF38u) goto L_0892AF38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892AF38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B06C;
      }
      goto L_0892AF40;
    }
L_0892AF40:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
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
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[7] = (16640u << 16u);
      if (branch_taken) {
          goto L_0892B06C;
      }
      goto L_0892AFC0;
    }
L_0892AFC0:
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0892B06C;
      }
      goto L_0892AFD4;
    }
L_0892AFD4:
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
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
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16544u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0892B06C;
      }
      goto L_0892B040;
    }
L_0892B040:
    aot_gpr_31 = (0x0892B048u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890FF64, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892B048u) goto L_0892B048;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892B048:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (8u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1372), ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_31 = (0x0892B064u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 70u, 0x0891C44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892B064u) goto L_0892B064;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892B064:
    aot_gpr_31 = (0x0892B06Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_0892B06C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892B074;
    }
L_0892B074:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 28u);
    aot_gpr_6 = (0u | 228u);
    aot_gpr_31 = (0x0892B088u);
    ctx.gpr[7] = (0u | 7u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 278u, 0x08905390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892B088u) goto L_0892B088;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892B088:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892B090;
    }
L_0892B090:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2240)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0AC;
      }
      goto L_0892B0A4;
    }
L_0892B0A4:
    aot_gpr_31 = (0x0892B0ACu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_0892B0AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892B0B4;
    }
L_0892B0B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2240)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D0;
      }
      goto L_0892B0C8;
    }
L_0892B0C8:
    aot_gpr_31 = (0x0892B0D0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08929C28;
L_0892B0D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892B0D8;
    }
L_0892B0D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2236)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0EC;
      }
      goto L_0892B0E4;
    }
L_0892B0E4:
    aot_gpr_31 = (0x0892B0ECu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 362u, 0x0890D7C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892B0ECu) goto L_0892B0EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892B0EC:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(192), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892B110:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-320));
    { const std::uint32_t aot_run_words[9]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(272), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (0u | 0u);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (16025u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 39322u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[7] = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 16u>();
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(852)));
    ctx.gpr[8] = (0u | 6u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    if (ctx.gpr[7] == ctx.gpr[8]) {
    aot_gpr_4 = (ctx.gpr[18] | 0u);
        goto L_0892B1E0;
    }
    goto L_0892B1E0;
L_0892B1E0:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
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
    aot_gpr_6 = (15820u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    ctx.gpr[2] = (0u | 1u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_31 = (0x0892B228u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892B228u) goto L_0892B228;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892B228:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B9A4;
      }
      goto L_0892B230;
    }
L_0892B230:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0892B2F4u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 178u, 0x08904B64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892B2F4u) goto L_0892B2F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892B2F4:
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0892B310u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 178u, 0x08904B64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892B310u) goto L_0892B310;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892B310:
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0892B32Cu);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 178u, 0x08904B64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892B32Cu) goto L_0892B32C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892B32C:
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0892B348u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 178u, 0x08904B64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892B348u) goto L_0892B348;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892B348:
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x0892B360u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892B360u) goto L_0892B360;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892B360:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0892B370u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 178u, 0x08904B64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892B370u) goto L_0892B370;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892B370:
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_fpr_20 = aot_fpr_20 - aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_20) || std::isnan(ctx.fpr[22])) && aot_fpr_20 == ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
      if (branch_taken) {
          goto L_0892B3B8;
      }
      goto L_0892B39C;
    }
L_0892B39C:
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_0892B3BC;
    }
    goto L_0892B3B0;
L_0892B3B0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0892B3C8;
      }
      goto L_0892B3B8;
    }
L_0892B3B8:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0892B3BC;
L_0892B3BC:
    aot_gpr_31 = (0x0892B3C4u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892B3C4u) goto L_0892B3C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892B3C4:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0892B3C8;
L_0892B3C8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_14)) && aot_fpr_12 == aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0892B400;
      }
      goto L_0892B3E4;
    }
L_0892B3E4:
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_14)) && aot_fpr_13 == aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0892B400;
      }
      goto L_0892B3F8;
    }
L_0892B3F8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0892B40C;
      }
      goto L_0892B400;
    }
L_0892B400:
    aot_gpr_31 = (0x0892B408u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892B408u) goto L_0892B408;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892B408:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0892B40C;
L_0892B40C:
    aot_gpr_31 = (0x0892B414u);
    aot_fpr_12 = aot_fpr_20 - aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892B414u) goto L_0892B414;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892B414:
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_20 = aot_fpr_20 - aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_20) || std::isnan(aot_fpr_13)) && aot_fpr_20 == aot_fpr_13)) ? 0x00800000u : 0u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
      if (branch_taken) {
          goto L_0892B458;
      }
      goto L_0892B43C;
    }
L_0892B43C:
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_0892B45C;
    }
    goto L_0892B450;
L_0892B450:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0892B468;
      }
      goto L_0892B458;
    }
L_0892B458:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0892B45C;
L_0892B45C:
    aot_gpr_31 = (0x0892B464u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892B464u) goto L_0892B464;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892B464:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0892B468;
L_0892B468:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_14)) && aot_fpr_12 == aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0892B4A0;
      }
      goto L_0892B484;
    }
L_0892B484:
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_14)) && aot_fpr_13 == aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0892B4A0;
      }
      goto L_0892B498;
    }
L_0892B498:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0892B4AC;
      }
      goto L_0892B4A0;
    }
L_0892B4A0:
    aot_gpr_31 = (0x0892B4A8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892B4A8u) goto L_0892B4A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892B4A8:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0892B4AC;
L_0892B4AC:
    aot_gpr_31 = (0x0892B4B4u);
    aot_fpr_12 = aot_fpr_20 - aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892B4B4u) goto L_0892B4B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892B4B4:
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_20 = aot_fpr_20 - aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(148)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_20) || std::isnan(aot_fpr_13)) && aot_fpr_20 == aot_fpr_13)) ? 0x00800000u : 0u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
      if (branch_taken) {
          goto L_0892B4F8;
      }
      goto L_0892B4DC;
    }
L_0892B4DC:
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_0892B4FC;
    }
    goto L_0892B4F0;
L_0892B4F0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0892B508;
      }
      goto L_0892B4F8;
    }
L_0892B4F8:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0892B4FC;
L_0892B4FC:
    aot_gpr_31 = (0x0892B504u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892B504u) goto L_0892B504;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892B504:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0892B508;
L_0892B508:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_14)) && aot_fpr_12 == aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0892B540;
      }
      goto L_0892B524;
    }
L_0892B524:
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_14)) && aot_fpr_13 == aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0892B540;
      }
      goto L_0892B538;
    }
L_0892B538:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0892B54C;
      }
      goto L_0892B540;
    }
L_0892B540:
    aot_gpr_31 = (0x0892B548u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892B548u) goto L_0892B548;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892B548:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0892B54C;
L_0892B54C:
    aot_gpr_31 = (0x0892B554u);
    aot_fpr_12 = aot_fpr_20 - aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892B554u) goto L_0892B554;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892B554:
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(160)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_20 = aot_fpr_20 - aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(164)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_20) || std::isnan(aot_fpr_13)) && aot_fpr_20 == aot_fpr_13)) ? 0x00800000u : 0u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
      if (branch_taken) {
          goto L_0892B598;
      }
      goto L_0892B57C;
    }
L_0892B57C:
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_0892B59C;
    }
    goto L_0892B590;
L_0892B590:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0892B5A8;
      }
      goto L_0892B598;
    }
L_0892B598:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0892B59C;
L_0892B59C:
    aot_gpr_31 = (0x0892B5A4u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892B5A4u) goto L_0892B5A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892B5A4:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0892B5A8;
L_0892B5A8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_14)) && aot_fpr_12 == aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0892B5E0;
      }
      goto L_0892B5C4;
    }
L_0892B5C4:
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_14)) && aot_fpr_13 == aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0892B5E0;
      }
      goto L_0892B5D8;
    }
L_0892B5D8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0892B5EC;
      }
      goto L_0892B5E0;
    }
L_0892B5E0:
    aot_gpr_31 = (0x0892B5E8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892B5E8u) goto L_0892B5E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892B5E8:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0892B5EC;
L_0892B5EC:
    aot_gpr_31 = (0x0892B5F4u);
    aot_fpr_12 = aot_fpr_20 - aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892B5F4u) goto L_0892B5F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892B5F4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (49225u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(176)));
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0892B638;
      }
      goto L_0892B618;
    }
L_0892B618:
    aot_gpr_5 = (49097u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(176)));
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0892B63C;
      }
      goto L_0892B638;
    }
L_0892B638:
    aot_gpr_4 = (0u | 1u);
    goto L_0892B63C;
L_0892B63C:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (16329u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(180)));
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0892B680;
      }
      goto L_0892B660;
    }
L_0892B660:
    aot_gpr_5 = (16457u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(180)));
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0892B684;
      }
      goto L_0892B680;
    }
L_0892B680:
    aot_gpr_4 = (0u | 1u);
    goto L_0892B684;
L_0892B684:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(184)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0892B6C0;
      }
      goto L_0892B6A0;
    }
L_0892B6A0:
    aot_gpr_5 = (49097u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(184)));
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0892B6C4;
      }
      goto L_0892B6C0;
    }
L_0892B6C0:
    aot_gpr_4 = (0u | 1u);
    goto L_0892B6C4;
L_0892B6C4:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(188)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0892B700;
      }
      goto L_0892B6E0;
    }
L_0892B6E0:
    aot_gpr_5 = (16329u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(188)));
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0892B704;
      }
      goto L_0892B700;
    }
L_0892B700:
    aot_gpr_4 = (0u | 1u);
    goto L_0892B704;
L_0892B704:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(195), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    aot_gpr_5 = (0u | 10u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0892B728;
      }
      goto L_0892B718;
    }
L_0892B718:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    aot_gpr_5 = (0u | 11u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0892B858;
      }
      goto L_0892B728;
    }
L_0892B728:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    aot_gpr_5 = (0u | 10u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0892B7C8;
      }
      goto L_0892B738;
    }
L_0892B738:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(194)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B75C;
      }
      goto L_0892B744;
    }
L_0892B744:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0892B9A4;
      }
      goto L_0892B75C;
    }
L_0892B75C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B780;
      }
      goto L_0892B768;
    }
L_0892B768:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0892B9A4;
      }
      goto L_0892B780;
    }
L_0892B780:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(195)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B7A4;
      }
      goto L_0892B78C;
    }
L_0892B78C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0892B9A4;
      }
      goto L_0892B7A4;
    }
L_0892B7A4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(193)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B9A4;
      }
      goto L_0892B7B0;
    }
L_0892B7B0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0892B9A4;
      }
      goto L_0892B7C8;
    }
L_0892B7C8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B7EC;
      }
      goto L_0892B7D4;
    }
L_0892B7D4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0892B9A4;
      }
      goto L_0892B7EC;
    }
L_0892B7EC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(194)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B810;
      }
      goto L_0892B7F8;
    }
L_0892B7F8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0892B9A4;
      }
      goto L_0892B810;
    }
L_0892B810:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(193)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B834;
      }
      goto L_0892B81C;
    }
L_0892B81C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0892B9A4;
      }
      goto L_0892B834;
    }
L_0892B834:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(195)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B9A4;
      }
      goto L_0892B840;
    }
L_0892B840:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0892B9A4;
      }
      goto L_0892B858;
    }
L_0892B858:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0892B878;
      }
      goto L_0892B868;
    }
L_0892B868:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0892B9A4;
      }
      goto L_0892B878;
    }
L_0892B878:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0892B918;
      }
      goto L_0892B888;
    }
L_0892B888:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(195)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B8AC;
      }
      goto L_0892B894;
    }
L_0892B894:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0892B9A4;
      }
      goto L_0892B8AC;
    }
L_0892B8AC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(193)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B8D0;
      }
      goto L_0892B8B8;
    }
L_0892B8B8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0892B9A4;
      }
      goto L_0892B8D0;
    }
L_0892B8D0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(194)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B8F4;
      }
      goto L_0892B8DC;
    }
L_0892B8DC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0892B9A4;
      }
      goto L_0892B8F4;
    }
L_0892B8F4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B9A4;
      }
      goto L_0892B900;
    }
L_0892B900:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0892B9A4;
      }
      goto L_0892B918;
    }
L_0892B918:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(193)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B93C;
      }
      goto L_0892B924;
    }
L_0892B924:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0892B9A4;
      }
      goto L_0892B93C;
    }
L_0892B93C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(195)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B960;
      }
      goto L_0892B948;
    }
L_0892B948:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0892B9A4;
      }
      goto L_0892B960;
    }
L_0892B960:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B984;
      }
      goto L_0892B96C;
    }
L_0892B96C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0892B9A4;
      }
      goto L_0892B984;
    }
L_0892B984:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(194)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B9A4;
      }
      goto L_0892B990;
    }
L_0892B990:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[19] = (0u | 1u);
    goto L_0892B9A4;
L_0892B9A4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BA24;
      }
      goto L_0892B9AC;
    }
L_0892B9AC:
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_12));
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
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16000u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0892BA1C;
      }
      goto L_0892BA04;
    }
L_0892BA04:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0892BA28;
      }
      goto L_0892BA1C;
    }
L_0892BA1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0892BA28;
      }
      goto L_0892BA24;
    }
L_0892BA24:
    ctx.gpr[2] = (0u | 0u);
    goto L_0892BA28;
L_0892BA28:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(272), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
      ctx.gpr[21] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BA54:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 18u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[18];
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0892BA8C;
      }
      goto L_0892BA84;
    }
L_0892BA84:
    aot_gpr_31 = (0x0892BA8Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BA8Cu) goto L_0892BA8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BA8C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0892BA98u);
    aot_gpr_5 = (0u | 69u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 222u, 0x08910CCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BA98u) goto L_0892BA98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BA98:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0892BAA4u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BAA4u) goto L_0892BAA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BAA4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0892BAB0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BAB0u) goto L_0892BAB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BAB0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0892BABCu);
    aot_gpr_5 = (0u | 55u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BABCu) goto L_0892BABC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BABC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0892BAC8u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 188u, 0x08910AD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BAC8u) goto L_0892BAC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BAC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-4097));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 | 1024u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0892BB20;
      }
      goto L_0892BB00;
    }
L_0892BB00:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892BB0Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0192_entry, 192u, 30u, 0x08B04218u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BB0Cu) goto L_0892BB0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BB0C:
    aot_gpr_4 = (50298u << 16u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-497));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0892BC28;
      }
      goto L_0892BB20;
    }
L_0892BB20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0892BC20;
      }
      goto L_0892BB30;
    }
L_0892BB30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(852)));
    aot_gpr_6 = (50298u << 16u);
    aot_gpr_5 = (0u | 6u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_6);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-497));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0892BB70;
      }
      goto L_0892BB4C;
    }
L_0892BB4C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892BB58u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BB58u) goto L_0892BB58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BB58:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BB70;
      }
      goto L_0892BB60;
    }
L_0892BB60:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0892BB70u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BB70u) goto L_0892BB70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BB70:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892BB7Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BB7Cu) goto L_0892BB7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BB7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BB9C;
      }
      goto L_0892BB84;
    }
L_0892BB84:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0892BB94u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BB94u) goto L_0892BB94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BB94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BC28;
      }
      goto L_0892BB9C;
    }
L_0892BB9C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892BBA8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BBA8u) goto L_0892BBA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BBA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BBC8;
      }
      goto L_0892BBB0;
    }
L_0892BBB0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x0892BBC0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BBC0u) goto L_0892BBC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BBC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BC28;
      }
      goto L_0892BBC8;
    }
L_0892BBC8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892BBD4u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BBD4u) goto L_0892BBD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BBD4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BBF4;
      }
      goto L_0892BBDC;
    }
L_0892BBDC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x0892BBECu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BBECu) goto L_0892BBEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BBEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BC28;
      }
      goto L_0892BBF4;
    }
L_0892BBF4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892BC00u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BC00u) goto L_0892BC00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BC00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BC28;
      }
      goto L_0892BC08;
    }
L_0892BC08:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 3u);
    aot_gpr_31 = (0x0892BC18u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BC18u) goto L_0892BC18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BC18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BC28;
      }
      goto L_0892BC20;
    }
L_0892BC20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BDA4;
      }
      goto L_0892BC28;
    }
L_0892BC28:
    aot_gpr_31 = (0x0892BC30u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BC30u) goto L_0892BC30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BC30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BC4C;
      }
      goto L_0892BC38;
    }
L_0892BC38:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x0892BC44u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 612u, 0x088C6FA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BC44u) goto L_0892BC44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BC44:
    aot_gpr_31 = (0x0892BC4Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 488u, 0x08B4214Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BC4Cu) goto L_0892BC4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BC4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BC78;
      }
      goto L_0892BC58;
    }
L_0892BC58:
    aot_gpr_31 = (0x0892BC60u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(900)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BC60u) goto L_0892BC60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BC60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BC78;
      }
      goto L_0892BC68;
    }
L_0892BC68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
      if (branch_taken) {
          goto L_0892BC88;
      }
      goto L_0892BC78;
    }
L_0892BC78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_4 | 48u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    goto L_0892BC88;
L_0892BC88:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0892BC94u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BC94u) goto L_0892BC94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BC94:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(ctx.gpr[17] + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_31 = (0x0892BCBCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BCBCu) goto L_0892BCBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BCBC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BCE8;
      }
      goto L_0892BCCC;
    }
L_0892BCCC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5452)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5452), aot_gpr_4);
    goto L_0892BCE8;
L_0892BCE8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BD14;
      }
      goto L_0892BCF8;
    }
L_0892BCF8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5456)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5456), aot_gpr_4);
    goto L_0892BD14;
L_0892BD14:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BD4C;
      }
      goto L_0892BD24;
    }
L_0892BD24:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    aot_gpr_4 = (aot_gpr_4 | 16u);
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x0892BD4Cu);
    aot_gpr_6 = (0u | 18u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BD4Cu) goto L_0892BD4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BD4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0892BD5Cu);
    aot_gpr_5 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 181u, 0x0886D370u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BD5Cu) goto L_0892BD5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BD5C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(900)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_5 ^ ctx.gpr[17]);
    aot_gpr_6 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_gpr_31 = (0x0892BD78u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 307u, 0x089B56FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BD78u) goto L_0892BD78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BD78:
    aot_gpr_31 = (0x0892BD80u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 84u, 0x0890850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BD80u) goto L_0892BD80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BD80:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(614))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BDA4;
      }
      goto L_0892BD90;
    }
L_0892BD90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (65528u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), aot_gpr_4);
    goto L_0892BDA4;
L_0892BDA4:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BDC4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[8] = (0u | 18u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_0892BE00;
      }
      goto L_0892BDF8;
    }
L_0892BDF8:
    aot_gpr_31 = (0x0892BE00u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BE00u) goto L_0892BE00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BE00:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0892BE0Cu);
    aot_gpr_5 = (0u | 69u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 222u, 0x08910CCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BE0Cu) goto L_0892BE0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BE0C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0892BE18u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BE18u) goto L_0892BE18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BE18:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0892BE24u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BE24u) goto L_0892BE24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BE24:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0892BE30u);
    aot_gpr_5 = (0u | 51u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BE30u) goto L_0892BE30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BE30:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0892BE3Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 188u, 0x08910AD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BE3Cu) goto L_0892BE3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BE3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(456)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-4097));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(464)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 | 1024u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0892BEA4;
      }
      goto L_0892BE78;
    }
L_0892BE78:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0892BE84u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BE84u) goto L_0892BE84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BE84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF80;
      }
      goto L_0892BE8C;
    }
L_0892BE8C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0892BE9Cu);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BE9Cu) goto L_0892BE9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BE9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF80;
      }
      goto L_0892BEA4;
    }
L_0892BEA4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) < 0;
    // nop
      if (branch_taken) {
          goto L_0892BED8;
      }
      goto L_0892BEAC;
    }
L_0892BEAC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0892BEB8u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BEB8u) goto L_0892BEB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BEB8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF80;
      }
      goto L_0892BEC0;
    }
L_0892BEC0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892BED0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BED0u) goto L_0892BED0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BED0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF80;
      }
      goto L_0892BED8;
    }
L_0892BED8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0892BEE4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BEE4u) goto L_0892BEE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BEE4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF04;
      }
      goto L_0892BEEC;
    }
L_0892BEEC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0892BEFCu);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BEFCu) goto L_0892BEFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BEFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF80;
      }
      goto L_0892BF04;
    }
L_0892BF04:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0892BF10u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BF10u) goto L_0892BF10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BF10:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF30;
      }
      goto L_0892BF18;
    }
L_0892BF18:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x0892BF28u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BF28u) goto L_0892BF28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BF28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF80;
      }
      goto L_0892BF30;
    }
L_0892BF30:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0892BF3Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BF3Cu) goto L_0892BF3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BF3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF5C;
      }
      goto L_0892BF44;
    }
L_0892BF44:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x0892BF54u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BF54u) goto L_0892BF54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BF54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF80;
      }
      goto L_0892BF5C;
    }
L_0892BF5C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0892BF68u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BF68u) goto L_0892BF68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BF68:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF80;
      }
      goto L_0892BF70;
    }
L_0892BF70:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 3u);
    aot_gpr_31 = (0x0892BF80u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BF80u) goto L_0892BF80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BF80:
    aot_gpr_31 = (0x0892BF88u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BF88u) goto L_0892BF88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BF88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BFA4;
      }
      goto L_0892BF90;
    }
L_0892BF90:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x0892BF9Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 612u, 0x088C6FA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BF9Cu) goto L_0892BF9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BF9C:
    aot_gpr_31 = (0x0892BFA4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 488u, 0x08B4214Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BFA4u) goto L_0892BFA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BFA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BFD0;
      }
      goto L_0892BFB0;
    }
L_0892BFB0:
    aot_gpr_31 = (0x0892BFB8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BFB8u) goto L_0892BFB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BFB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BFD0;
      }
      goto L_0892BFC0;
    }
L_0892BFC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), aot_gpr_4);
      if (branch_taken) {
          goto L_0892BFE0;
      }
      goto L_0892BFD0;
    }
L_0892BFD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_4 | 48u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), aot_gpr_4);
    goto L_0892BFE0;
L_0892BFE0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0892BFECu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892BFECu) goto L_0892BFEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892BFEC:
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
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x0892C000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0073(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0073_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_73(Runtime &runtime) {
    runtime.register_generated_unit(73u, 0x08928000u, 16384u, &recomp_unit_0073, &recomp_unit_0073_entry);
    runtime.register_function(0x08928000u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928024u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892804Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928058u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928060u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928068u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892806Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928074u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928084u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928090u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089280A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089280B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089280C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089280D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089280E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089280FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928108u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892812Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928134u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928144u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928150u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928158u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928164u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892816Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928178u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928184u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928190u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089281A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089281CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089281D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089281E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089281F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928200u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928208u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928210u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892821Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892822Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928234u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892823Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928248u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928250u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928258u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928264u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928274u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928288u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089282B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089282C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089282C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089282D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089282E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089282E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089282F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089282FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928310u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928318u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928320u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892832Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928340u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928348u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928350u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892836Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928374u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928380u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892839Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089283A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089283B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089283C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089283CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089283E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928454u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928464u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928470u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089284A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089284FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928504u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928520u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928534u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892854Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892855Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928564u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892856Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928570u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928578u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928594u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089285A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089285A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928628u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928690u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089286B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928728u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928760u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928768u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089287B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089287E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089287F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928808u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892881Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892882Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928840u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892884Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089288B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089288C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089288C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089288DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089288E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089288F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892892Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892897Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892898Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892899Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089289ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089289BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089289C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089289C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089289CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089289DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089289ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089289F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A18u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A1Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A34u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A38u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A40u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A58u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A64u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A7Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A88u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A98u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928AA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928AB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928AB8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928AC0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928AD0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928AD4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928ADCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928AECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928AF0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928AF8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B0Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B14u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B28u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B40u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B60u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B68u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B78u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B7Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B84u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B94u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B98u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BA0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BB0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BBCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BCCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BD0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BD8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BF4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BFCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C00u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C38u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C40u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C64u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C74u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928CA0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928CB0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928CB8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928CC0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928CC8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928CDCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928CECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928CFCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D0Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D18u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D2Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D50u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D58u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D68u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D7Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D90u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928DA0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928DA8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928DB0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928DB8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928DC8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928DD8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928DE0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928DFCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E38u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E40u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E48u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E50u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E60u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E74u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E7Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E8Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928EB0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928EC0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928EC8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928ECCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928EE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928EF8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F14u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F20u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F28u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F2Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F38u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928FA8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928FBCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928FD0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928FD4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928FE0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928FF4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929008u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929018u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929024u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892902Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929038u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929040u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929044u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929058u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892906Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929078u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929080u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089290A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089290B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089290C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089290C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089290CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089290E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089290F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929114u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929120u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929128u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929134u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892913Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929164u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929174u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892917Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929184u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929188u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089291A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089291ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089291B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089291C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089291DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089291ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089291F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089291FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929204u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929220u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929230u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929238u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929240u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929244u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929250u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929260u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892926Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929274u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929278u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929284u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929290u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929298u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089292D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929328u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892933Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929344u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089293A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089293B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089293C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929410u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892941Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929430u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929478u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929484u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929498u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089294E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089294ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089294FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929504u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929518u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929520u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929528u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892953Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929544u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929574u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892957Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929584u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089295A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089295B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089295BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089295CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089295D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089295F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929600u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929614u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892962Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892966Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929674u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892968Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929694u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929698u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089296A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089296A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089296C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089296D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089296E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089296F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089296FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929714u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929724u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929738u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929750u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929790u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929798u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089297B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089297B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089297BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089297C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089297CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089297E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089297F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929804u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929814u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929820u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929838u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929848u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892985Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929874u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089298B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089298BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089298D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089298DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089298E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089298E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089298F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892990Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892991Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929928u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929938u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929944u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892995Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892996Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929980u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929990u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089299D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089299D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089299F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089299F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A18u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A20u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A74u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A90u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929AA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929AB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929AE0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929AE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B0Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B14u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B1Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B2Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B60u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929BACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929BB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929BBCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929BE0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929BECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929BF0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C28u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C64u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C78u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C84u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C94u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CA0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CB8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CC0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CD4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CDCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CF8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D1Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D38u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D40u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D54u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D64u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D7Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D88u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D98u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929DA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929DB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929DC0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929DD0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929DDCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929DECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929DF8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E18u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E2Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E34u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E40u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E48u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E58u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E60u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E68u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E70u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E8Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E98u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929EA0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929EB0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929EBCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929EC8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929ED0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929EE4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F18u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F28u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F38u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F64u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F74u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F7Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F90u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F98u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929FA0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929FA8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929FB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929FBCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929FD0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929FD8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929FE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929FF4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A00Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A014u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A01Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A02Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A038u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A050u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A058u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A06Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A074u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A084u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A090u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A0A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A0B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A0B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A0C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A0C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A0D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A0E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A0ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A0F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A100u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A118u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A130u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A158u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A160u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A174u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A17Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A184u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A198u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A1A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A1ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A1C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A1C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A1ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A1F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A208u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A214u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A21Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A230u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A240u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A248u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A264u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A278u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A288u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A290u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A298u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A2ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A2B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A2C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A2D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A2E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A2F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A304u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A314u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A31Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A32Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A338u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A348u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A34Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A354u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A364u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A368u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A370u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A380u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A384u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A38Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A3A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A3CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A3D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A3ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A3F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A400u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A414u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A41Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A434u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A440u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A44Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A458u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A460u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A468u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A470u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A478u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A480u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A488u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A490u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A498u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A530u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A538u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A544u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A548u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A550u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A554u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A564u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A570u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A58Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A59Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A60Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A61Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A62Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A63Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A64Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A658u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A668u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A670u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A694u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A714u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A71Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A740u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A750u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A75Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A764u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A770u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A778u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A78Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A7B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A7B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A7CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A7E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A7ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A7FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A814u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A820u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A82Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A83Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A844u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A850u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A858u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A864u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A86Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A880u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A8A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A8B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A8C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A8D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A8E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A8ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A8F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A8FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A908u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A90Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A914u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A918u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A920u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A924u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A92Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A930u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A938u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A93Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A944u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A948u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A95Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A96Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A978u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A990u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A99Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A9ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A9B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A9C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A9D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A9D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A9E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A9F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A9FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA0Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA1Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA28u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA34u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA40u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA54u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA78u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA88u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AAC4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AAD4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AAECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AAF4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB28u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB40u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB7Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB90u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB98u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ABB0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ABB8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ABC0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ABC8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ABD0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ABE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ABF0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ABF8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC14u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC2Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC34u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC3Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC54u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC64u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC88u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ACA0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ACA8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ACB0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ACC4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ACD0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ACD8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ACE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ACF0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD20u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD60u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD74u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD84u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD8Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD94u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADA8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADB8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADC0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADD8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADE0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE28u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE38u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE48u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE54u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE7Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE84u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AEA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AEACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AEB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AEC4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AECCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AED4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AEDCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AEE4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF00u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF18u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF38u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF40u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AFC0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AFD4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B040u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B048u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B064u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B06Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B074u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B088u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B090u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B110u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B1E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B228u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B230u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B2F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B310u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B32Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B348u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B360u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B370u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B39Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B3B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B3B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B3BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B3C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B3C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B3E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B3F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B400u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B408u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B40Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B414u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B43Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B450u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B458u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B45Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B464u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B468u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B484u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B498u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B504u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B508u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B524u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B538u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B540u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B548u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B54Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B554u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B57Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B590u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B598u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B59Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B618u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B638u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B63Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B660u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B680u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B684u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B6A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B6C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B6C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B6E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B700u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B704u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B718u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B728u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B738u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B744u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B75Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B768u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B780u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B78Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B7A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B7B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B7C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B7D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B7ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B7F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B810u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B81Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B834u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B840u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B858u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B868u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B878u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B888u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B894u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B8ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B8B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B8D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B8DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B8F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B900u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B918u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B924u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B93Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B948u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B960u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B96Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B984u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B990u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B9A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B9ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA1Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA28u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA54u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA84u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA8Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA98u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BAA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BAB0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BABCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BAC8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB00u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB0Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB20u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB58u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB60u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB70u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB7Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB84u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB94u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BBA8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BBB0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BBC0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BBC8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BBD4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BBDCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BBECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BBF4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC00u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC18u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC20u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC28u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC38u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC58u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC60u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC68u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC78u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC88u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC94u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BCBCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BCCCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BCE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BCF8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD14u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD78u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD90u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BDA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BDC4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BDF8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE00u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE0Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE18u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE3Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE78u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE84u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE8Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BEA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BEACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BEB8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BEC0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BED0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BED8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BEE4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BEECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BEFCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF18u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF28u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF3Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF54u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF68u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF70u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF88u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF90u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BFA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BFB0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BFB8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BFC0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BFD0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BFE0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BFECu, &recomp_unit_0073, "recomp_unit_0073");
}
} // namespace psprecomp
